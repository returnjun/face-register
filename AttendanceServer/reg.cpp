#include "reg.h"
#include "ui_reg.h"
#include "attendancewin.h"
reg::reg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reg)
{
    ui->setupUi(this);
}

reg::~reg()
{
    delete ui;
}

#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QCryptographicHash>

// ...
void reg::showMessageBox(const QString &title, const QString &message, QMessageBox::Icon icon)
{
    QMessageBox msgBox(this);
    msgBox.setWindowTitle(title);
    msgBox.setText(message);
    msgBox.setIcon(icon);
    msgBox.setTextFormat(Qt::RichText); // 启用富文本
    msgBox.setStyleSheet("QLabel{min-width: 300px;}"); // 设置最小宽度
    msgBox.exec();
}
void reg::on_reg_2_clicked()
{
    QString username = ui->lineEdit_user->text().trimmed();
    QString password1 = ui->lineEdit_password1->text();
    QString password2 = ui->lineEdit_password2->text();

    if(username.isEmpty() || password1.isEmpty() || password2.isEmpty()) {
        showMessageBox("注册失败", "用户名和密码不能为空", QMessageBox::Warning);
        return;
    }

    if(username.length() > 24) {
        showMessageBox("注册失败", "用户名长度不能超过24个字符", QMessageBox::Warning);
        return;
    }

    if(password1.length() > 12 || password2.length() > 12) {
        showMessageBox("注册失败", "密码长度不能超过12个字符", QMessageBox::Warning);
        return;
    }

    if(password1 != password2) {
        showMessageBox("注册失败", "两次输入的密码不一致", QMessageBox::Warning);
        return;
    }

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT username FROM users WHERE username = :username");
    checkQuery.bindValue(":username", username);

    if(!checkQuery.exec()) {
        showMessageBox("数据库错误", "查询失败: " + checkQuery.lastError().text(), QMessageBox::Critical);
        return;
    }

    if(checkQuery.next()) {
        showMessageBox("注册失败", "用户名已存在", QMessageBox::Warning);
        return;
    }

    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    insertQuery.bindValue(":username", username);
    insertQuery.bindValue(":password", password1);

    if(!insertQuery.exec()) {
        showMessageBox("注册失败", "注册失败: " + insertQuery.lastError().text(), QMessageBox::Critical);
        return;
    }

    showMessageBox("注册成功", "用户注册成功！", QMessageBox::Information);

    ui->lineEdit_user->clear();
    ui->lineEdit_password1->clear();
    ui->lineEdit_password2->clear();
    this->close();
}
