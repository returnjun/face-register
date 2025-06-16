#include "attendancewin.h"
#include "ui_attendancewin.h"
#include <opencv.hpp>
#include <QDateTime>
#include <QThread>
#include <QSqlQuery>
#include <QSqlError>

AttendanceWin::AttendanceWin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AttendanceWin)
{
    ui->setupUi(this);
    m_dlgLogin.show();
    connect(&m_dlgLogin, &page_login::sendLoginSuccess, this, &AttendanceWin::show);
    //qtcpServer当有客户端连接会发送newconnection
    connect(&mserver,&QTcpServer::newConnection,this,&AttendanceWin::accept_client);
    mserver.listen(QHostAddress::Any,9999);//监听就是启动服务器
    bsize=0;

    //给sql模型绑定表格
    model.setTable("employee");


    //创建一个线程
    QThread *thread = new QThread();
    //把QFaceObject对象移动到thread线程中执行
    fobj.moveToThread(thread);
    //启动线程
    thread->start();
    connect(this,&AttendanceWin::query,&fobj,&QFaceObject::face_query);
    //关联QFaceObject对象里面的send_faceid信号
    connect(&fobj,&QFaceObject::send_faceid,this,&AttendanceWin::recv_faceid);
}

AttendanceWin::~AttendanceWin()
{
    delete ui;
}


//接受客户端连接
void AttendanceWin::accept_client(){
    //获取与客户端通信的套接字
    msocket = mserver.nextPendingConnection();
    //当客户端有数据到达时会发送reasyRead信号
    connect(msocket,&QTcpSocket::readyRead,this,&AttendanceWin::read_data);
}

//读取客户端发送的数据
void AttendanceWin::read_data()
{
    //读取所有数据
//    QString msg =msocket->readAll();
//    qDebug()<<msg;
    QDataStream stream(msocket);//把套接字绑定到数据流
    stream.setVersion(QDataStream::Qt_5_14);
    if(!bsize){
        if(msocket->bytesAvailable()<(quint64)sizeof(bsize)) return ;
        stream>>bsize;
    }
    if(msocket->bytesAvailable()<bsize)//说明数据还没有发送完成，返回继续等待
    {
        return ;
    }
    QByteArray  data;
    stream>>data;
    bsize=0;
    if(data.size()==0)   return;//没有读到数据

    //显示图片
    QPixmap mmp;
    mmp.loadFromData(data,"jpg");
    mmp=mmp.scaled(ui->picLB->size());
    ui->picLB->setPixmap(mmp);

    //人脸识别
    cv::Mat faceImage;
    std::vector<uchar> decode;
    decode.resize(data.size());
    memcpy(decode.data(),data.data(),data.size());

    faceImage = cv::imdecode(decode,cv::IMREAD_COLOR);//字节流数据转成图片矩阵


    emit query(faceImage);//发送这个信号后，另有一个线程进行人脸识别，主界面不会卡顿

}

void AttendanceWin::recv_faceid(int64_t faceid)
{
    //int faceid=fobj.face_query(faceImage);//消耗资源较多
//    if(faceid>=0){
//        qDebug()<<faceid;
//    }
//    else
//        qDebug()<<"识别失败";

     qDebug()<<"人脸id"<<faceid;
    if(faceid<0)
    {
        QString sdmsg=QString("{\"employeeID\":\"\",\"name\":\"\",\"department\":\"\",\"time\":\"\"}");
        msocket->write(sdmsg.toUtf8());
        return ;
    }
    //从数据库中把个人信息查询出来
    //设置过滤器
    model.setFilter(QString("faceID=%1").arg(faceid));
    //查询
    model.select();
    if(model.rowCount()==1)
    {
        //工号 姓名 部门 时间
        //json格式{"employeeID":%1,"name":%2,department:软件,time:%3}
        QSqlRecord record = model.record(0);
//        qDebug()<<record.value("name").toString();
        QString sdmsg = QString("{\"employeeID\":\"%1\",\"name\":\"%2\",\"department\":\"软件\",\"time\":\"%3\"}")
                .arg(record.value("employeeID").toString()).arg(record.value("name").toString())
                .arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
//         msocket->write(sdmsg.toUtf8());//打包好的数据发送客户端

         //把数据写入数据库--考勤表
         QString insertSql = QString("insert into attendance(employeeID,name) values('%1','%2')")
                 .arg(record.value("employeeID").toString())
                 .arg(record.value("name").toString());
         QSqlQuery query;
         if(!query.exec(insertSql))
         {
             sdmsg=QString("{\"employeeID\":=\"\",\"name\":=\"\",\"department\":\"\",\"time\":\"\"}");
             msocket->write(sdmsg.toUtf8());
             return ;
         }
         else
         {
             msocket->write(sdmsg.toUtf8());//打包好的数据发送客户端
         }
    }
}
