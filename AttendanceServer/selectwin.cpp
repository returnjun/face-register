#include "selectwin.h"
#include "ui_selectwin.h"

SelectWin::SelectWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectWin)
{
    ui->setupUi(this);
    model = new QSqlTableModel();
}

SelectWin::~SelectWin()
{
    delete ui;
}

void SelectWin::on_selectBT_clicked()
{
    if(ui->emploeeBT->isChecked())
    {
        model->setTable("employee");//设置员工表
    }
    if(ui->attBT->isChecked())
    {
        model->setTable("attendance");//设置考勤表
    }
    model->select();
    ui->tableView->setModel(model);

}
