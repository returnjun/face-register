#ifndef PAGE_LOGIN_H
#define PAGE_LOGIN_H

#include "reg.h"
#include <QWidget>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class page_login;
}

class page_login : public QWidget
{
    Q_OBJECT

public:
    explicit page_login(QWidget *parent = nullptr);
    ~page_login();

private slots:
    void on_login_butten_clicked();
    void on_reg_clicked();

signals:
    void sendLoginSuccess();
private:
    Ui::page_login *ui;
    class reg *registerWindow;
};

#endif // PAGE_LOGIN_H
