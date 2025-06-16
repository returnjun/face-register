#ifndef REG_H
#define REG_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "page_login.h"


namespace Ui {
class reg;
}

class reg : public QWidget
{
    Q_OBJECT

public:
    explicit reg(QWidget *parent = nullptr);
    ~reg();

    void showMessageBox(const QString &title, const QString &message, QMessageBox::Icon icon);
private slots:
    void on_reg_2_clicked();

private:
    Ui::reg *ui;
};

#endif // REG_H
