#include "page_login.h"
#include "ui_page_login.h"
#include "attendancewin.h"
page_login::page_login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page_login)
{
    ui->setupUi(this);
}

page_login::~page_login()
{
    delete ui;
}
void page_login::on_reg_clicked()
{
    qDebug() << "Register button clicked"; // 确认信号触发

//    if(registerWindow) {
//        registerWindow->deleteLater();
//        registerWindow = nullptr;
//    }

    registerWindow = new reg();
    qDebug() << "Window created at:" << registerWindow; // 调试输出

    if (!registerWindow) {
        qCritical() << "Failed to create window!";
        return;
    }

    registerWindow->setWindowTitle("用户注册");
    registerWindow->setWindowModality(Qt::ApplicationModal);
    registerWindow->setAttribute(Qt::WA_DeleteOnClose);

    // 确保窗口有合理大小
    registerWindow->resize(400, 300);

    // 显示并激活窗口
    registerWindow->show();
    registerWindow->raise();
    registerWindow->activateWindow();

    qDebug() << "Window should be visible now";
}


void page_login::on_login_butten_clicked()
{
    // 获取用户输入的账号和密码
    QString username = ui->lineEdit_2->text().trimmed();
    QString password = ui->lineEdit_3->text();

    // 验证输入是否为空
    if(username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "登录失败", "用户名和密码不能为空");
        return;
    }

    // 打开数据库连接
    QSqlDatabase db = QSqlDatabase::database();
    if(!db.isOpen()) {
        QMessageBox::critical(this, "数据库错误", "无法连接数据库");
        return;
    }

    // 准备SQL查询 - 直接比较明文密码
    QSqlQuery query;
    query.prepare("SELECT password FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    // 执行查询
    if(!query.exec()) {
        QMessageBox::critical(this, "查询错误", "数据库查询失败: " + query.lastError().text());
        return;
    }

    // 检查用户是否存在且密码匹配
    if(!query.next()) {
        QMessageBox::warning(this, "登录失败", "用户名或密码不正确");
        return;
    }

    // 登录成功
    this->hide();
    emit sendLoginSuccess();
}


