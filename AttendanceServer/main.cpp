#include "attendancewin.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>


#include "registerwin.h"
#include "selectwin.h"
#include "page_login.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    qRegisterMetaType<cv::Mat>("cv::Mat&");
    qRegisterMetaType<cv::Mat>("cv::Mat");
    qRegisterMetaType<int64_t>("int64_t");
//    RegisterWin ww;
//    ww.show();

    //连接数据库
    QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库名称
    db.setDatabaseName("server.db");
    if(!db.open()){
        qDebug()<<db.lastError().text();
        return -1;
    }
    //创建员工信息表
    QString createsql = "create table if not exists employee(employeeID integer primary key autoincrement,name varchar(256),"
                        "sex varchar(32),birthday text,address text,phone text,faceId integer unique,headfile text)";
    QSqlQuery query;
    if(!query.exec(createsql))
    {
        qDebug()<<query.lastError().text();
        return -1;
    }

    //创建考勤表
     createsql = "create table if not exists attendance(attendanceID integer primary key autoincrement,employeeID integer,"
                 "attendanceTime TimeStamp NOT NULL DEFAULT(datetime('now','localtime')))";
    if(!query.exec(createsql))
    {
        qDebug()<<query.lastError().text();
        return -1;
    }

//    page_login log;
//    log.show();
    AttendanceWin w;
    return a.exec();
}
