#include "faceattendence.h"
#include "ui_faceattendence.h"
#include<QImage>
#include<QPainter>
#include<QDebug>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>
FaceAttendence::FaceAttendence(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FaceAttendence)
{
    ui->setupUi(this);
    ui->widget_2->hide();
    //打开摄像头
    cap.open(0);
    //启动定时器时间
    startTimer(100);
    cascade.load("C:/Users/24209/Desktop/bise/opencv452/etc/haarcascades/haarcascade_frontalface_alt2.xml");

    //QTcpSocket当断开连接的时候discnonnect信号，连接成功发送connected
    connect(&msocket,&QTcpSocket::disconnected,this,&FaceAttendence::start_connect);
    connect(&msocket,&QTcpSocket::connected,this,&FaceAttendence::stop_connect);
    //定时连接服务器
    connect(&mtimer,&QTimer::timeout,this,&FaceAttendence::timer_connect);
    //关联接收数据的槽函数
    connect(&msocket,&QTcpSocket::readyRead,this,&FaceAttendence::recv_data);
    //启动定时器
    mtimer.start(5000);//每5秒连接一次直到连接成功
    flag=0;
}

FaceAttendence::~FaceAttendence()
{
    delete ui;
}

void FaceAttendence::timerEvent(QTimerEvent *e)
{
    //采集数据
    Mat srcImage;
    if(cap.grab())
    {
        cap.read(srcImage);//读取一帧数据
    }
    //用灰度图检测适度更快
    Mat grayImage;
    cvtColor(srcImage,grayImage,COLOR_BGR2BGRA);//转成灰度图
    //检测人脸需要级联分类器
    std::vector<Rect> faceRects;
    cascade.detectMultiScale(grayImage,faceRects);//检测人脸
    if(faceRects.size()>0&&flag>=0)
    {

        Rect rect = faceRects.at(0);  // 获取第一个人脸框

       // 1. 调整 headpicLB 的尺寸，使其匹配人脸框大小
       ui->headpicLB->setFixedSize(rect.width, rect.height);

       // 2. 计算 headpicLB 的居中位置（使其中心点与人脸框中心点对齐）
       int labelX = rect.x + (rect.width - ui->headpicLB->width()) / 2;
       int labelY = rect.y + (rect.height - ui->headpicLB->height()) / 2;

       // 3. 移动 headpicLB 到计算的位置
       ui->headpicLB->move(labelX, labelY);

        if(flag>2){
            //把人脸数据发送到服务器  Mat转化成QbbyteArray  编码成jpg格式
            std::vector<uchar> buf;
            cv::imencode(".jpg",srcImage,buf);
            QByteArray byte((const char*)buf.data(),buf.size());
            //准备发送
            quint64 backsize=byte.size();
            QByteArray sendData;
            QDataStream stream(&sendData,QIODevice::WriteOnly);
            stream.setVersion(QDataStream::Qt_5_14);
            stream<<backsize<<byte;
            //发送
            msocket.write(sendData);
            flag=-2;
            faceMat = srcImage(rect);
            //保存
            imwrite("./face.jpg",faceMat);
        }
        flag++;
    }
    if(faceRects.size()==0)
        flag=0;
//    else{
//        //把人脸框移动到中心位置
//        ui->headpicLB->move(100,40);
//    }

    if(srcImage.data==nullptr) return;
    //需要把opencv的Mat格式BGR转换成QT里面的QImage(RGB)
    cvtColor(srcImage,srcImage,COLOR_BGR2RGB);
    QImage image(srcImage.data,srcImage.cols,srcImage.rows,srcImage.step1(),QImage::Format_RGB888);
    QPixmap mmp=QPixmap::fromImage(image);
    mmp = mmp.scaledToWidth(ui->vdieoLB->width());
    ui->vdieoLB->setPixmap(mmp);
}

void FaceAttendence::recv_data()
{
    //json格式{"employeeID":%1,"name":%2,department:软件,time:%3}

    QByteArray array = msocket.readAll();
    //进行json解析
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(array,&err);
    if(err.error!=QJsonParseError::NoError)
    {
        qDebug()<<"json数据错误:"<< err.errorString();
        qDebug()<<array;
        return ;
    }
    QJsonObject obj =doc.object();
    QString employeeID=obj.value("employeeID").toString();
    QString name = obj.value("name").toString();
    QString department=obj.value("department").toString();
    QString timestr=obj.value("time").toString();

    ui->numberEdit->setText(employeeID);
    ui->nameEdit->setText(name);
    ui->departEdit->setText(department);
    ui->timeEdit->setText(timestr);
    //通过样式来显示图片
    ui->headLB->setStyleSheet("border-radius:75px;border-image: url(./face.jpg);");
    ui->widget_2->show();

}


void FaceAttendence::timer_connect()
{
    //连接服务器
    msocket.connectToHost("192.168.50.154",9999);
    qDebug()<<"正在连接服务器";
}
void FaceAttendence::stop_connect()
{
    mtimer.stop();
    qDebug()<<"成功连接服务器";
}
void FaceAttendence::start_connect()
{
    mtimer.start(5000);
    qDebug()<<"断开连接服务器";
}

