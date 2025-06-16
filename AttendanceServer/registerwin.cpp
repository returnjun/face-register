#include "registerwin.h"
#include "ui_registerwin.h"
#include <QFileDialog>
#include <qfaceobject.h>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
RegisterWin::RegisterWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterWin)
{
    ui->setupUi(this);
}

RegisterWin::~RegisterWin()
{
    delete ui;
}

void RegisterWin::timerEvent(QTimerEvent *e)
{
    //获取摄像头数据并且显示在界面上

    if(cap.isOpened()){
        cap>>image;
        if(image.data==nullptr) return;
    }

    //不为空则显示在窗口上面
    //需要Mat转QImage
    cv::Mat  rgbImage;
    cv::cvtColor(image,rgbImage,cv::COLOR_BGR2RGB);
    QImage qImg(rgbImage.data,rgbImage.cols,rgbImage.rows,rgbImage.step1(),QImage::Format_RGB888);
    //在qt界面上显示
    QPixmap mmp =QPixmap::fromImage(qImg);
    mmp = mmp.scaledToWidth(ui->headpicLB->width());
    ui->headpicLB->setPixmap(mmp);
}

void RegisterWin::on_resetBT_clicked()
{
    //清空数据
    ui->nameEdit->clear();
    ui->birthdayEdit->setDate(QDate::currentDate());
    ui->addressEdit->clear();
    ui->phoneEdit->clear();
    ui->picFileEdit->clear();
}

void RegisterWin::on_addpicBT_clicked()
{
    //通过文件对话框，选择图片路径
    QString filepath = QFileDialog::getOpenFileName(this);
    ui->picFileEdit->setText(filepath);

    //显示图片
    QPixmap mmp(filepath);
    mmp = mmp.scaledToWidth(ui->headpicLB->width());//设置宽度  高度自适应
    ui->headpicLB->setPixmap(mmp);
}

#include <QMessageBox>
#include <QFile>

void RegisterWin::on_registerBT_clicked()
{
    // 1. 检查图片是否有效
    QString imagePath = ui->picFileEdit->text();
    if (imagePath.isEmpty()) {
        QMessageBox::critical(this, "错误", "请选择一张图片！");
        return;
    }

    image = cv::imread(imagePath.toUtf8().data());
    if (image.empty()) {
        QMessageBox::critical(this, "错误", "无法读取图片文件，请检查路径是否正确！");
        return;
    }

    // 2. 检测人脸
    QFaceObject faceobj;
    int faceID = faceobj.face_register(image);

    // 假设 faceID <= 0 表示未检测到人脸
    if (faceID <= 0) {
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setWindowTitle("错误");
        msgBox.setText("未检测到人脸！");
        msgBox.setInformativeText("请确保照片清晰且包含完整人脸。");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();

        // 删除已读取的图片（如果有）
        QFile::remove(imagePath);
        return;
    }

    // 3. 保存头像到固定路径
    QString headfile = QString("./data/%1.jpg").arg(QString(ui->nameEdit->text().toUtf8().toBase64()));
    bool saveSuccess = cv::imwrite(headfile.toUtf8().data(), image);
    if (!saveSuccess) {
        QMessageBox::critical(this, "错误", "头像保存失败，请检查写入权限或磁盘空间！");
        return;
    }

    // 4. 存储到数据库
    QSqlTableModel model;
    model.setTable("employee");
    QSqlRecord record = model.record();
    record.setValue("name", ui->nameEdit->text());
    record.setValue("sex", ui->mrb->isChecked() ? "男" : "女");
    record.setValue("birthday", ui->birthdayEdit->text());
    record.setValue("address", ui->addressEdit->text());
    record.setValue("phone", ui->phoneEdit->text());
    record.setValue("faceID", faceID);
    record.setValue("headfile", headfile);

    bool ret = model.insertRecord(0, record);
    if (ret) {
        model.submitAll();
        QMessageBox::information(this, "成功", "注册成功！\n姓名: " + ui->nameEdit->text());
    } else {
        // 数据库插入失败时，删除已保存的头像
        QFile::remove(headfile);
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setWindowTitle("错误");
        msgBox.setText("注册失败！");
        msgBox.setInformativeText("可能是数据库连接问题或重复的 faceID。");
        msgBox.setDetailedText("错误详情: " + model.lastError().text());
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
}

void RegisterWin::on_videoswitchBT_clicked()
{
    if(ui->videoswitchBT->text() == "打开摄像头")
    {
        //打开摄像头
        if(cap.open(0))//0是默认摄像头
        {
            ui->videoswitchBT->setText("关闭摄像头");
            //启动定时器时间
            timerid=startTimer(100);
        }
    }else
    {
        killTimer(timerid);//关闭定时器事件
        ui->videoswitchBT->setText("打开摄像头");
        //关闭摄像头
        cap.release();
    }
}

void RegisterWin::on_cameraBT_clicked()
{
    //保存数据
    //把头像保存到一个固定路径下 并以
    //image=cv::imread(ui->picFileEdit->text().toUtf8().data());
    QString headfile = QString("./data/%1.jpg").arg(QString(ui->nameEdit->text().toUtf8().toBase64()));
    ui->picFileEdit->setText(headfile);
    cv::imwrite(headfile.toUtf8().data(),image);

    killTimer(timerid);//关闭定时器事件
    ui->videoswitchBT->setText("打开摄像头");
    //关闭摄像头
    cap.release();
}
