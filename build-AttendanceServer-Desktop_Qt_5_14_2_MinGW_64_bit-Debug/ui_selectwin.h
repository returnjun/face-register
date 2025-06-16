/********************************************************************************
** Form generated from reading UI file 'selectwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIN_H
#define UI_SELECTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectWin
{
public:
    QGridLayout *gridLayout;
    QRadioButton *emploeeBT;
    QRadioButton *attBT;
    QPushButton *selectBT;
    QTableView *tableView;

    void setupUi(QWidget *SelectWin)
    {
        if (SelectWin->objectName().isEmpty())
            SelectWin->setObjectName(QString::fromUtf8("SelectWin"));
        SelectWin->resize(671, 452);
        SelectWin->setStyleSheet(QString::fromUtf8("\n"
"/* \344\270\273\347\252\227\345\217\243\350\203\214\346\231\257 */\n"
"SelectWin {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                              stop:0 #f5f7fa, stop:1 #c3cfe2);\n"
"    font-family: \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"/* \345\215\225\351\200\211\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QRadioButton {\n"
"    font-size: 16px;\n"
"    color: #4a4a4a;\n"
"    padding: 8px 15px;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border-radius: 9px;\n"
"    border: 2px solid #5d9cec;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #5d9cec;\n"
"    border: 2px solid #5d9cec;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover {\n"
"    border: 2px solid #3bafda;\n"
"}\n"
"\n"
"/* \346\237\245\350\257\242\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton#selectBT {\n"
"    background-color: #5d9cec;\n"
"    color: white;\n"
"    bo"
                        "rder: none;\n"
"    border-radius: 4px;\n"
"    padding: 8px 20px;\n"
"    font-size: 16px;\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton#selectBT:hover {\n"
"    background-color: #4a89dc;\n"
"}\n"
"\n"
"QPushButton#selectBT:pressed {\n"
"    background-color: #3bafda;\n"
"}\n"
"\n"
"/* \350\241\250\346\240\274\346\240\267\345\274\217 */\n"
"QTableView {\n"
"    background-color: white;\n"
"    border: 1px solid #e6e9ed;\n"
"    border-radius: 4px;\n"
"    gridline-color: #e6e9ed;\n"
"    alternate-background-color: #f5f7fa;\n"
"    selection-background-color: #5d9cec;\n"
"    selection-color: white;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QTableView QHeaderView::section {\n"
"    background-color: #5d9cec;\n"
"    color: white;\n"
"    padding: 6px;\n"
"    border: none;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QTableView::item:hover {\n"
"    background-color: #e6f2ff;\n"
"}\n"
"\n"
"/* \347\275\221\346\240\274\345\270\203\345\261\200\350\276\271"
                        "\350\267\235\350\260\203\346\225\264 */\n"
"QGridLayout {\n"
"    margin: 15px;\n"
"    spacing: 10px;\n"
"}\n"
"</string>\n"
"</property>"));
        gridLayout = new QGridLayout(SelectWin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        emploeeBT = new QRadioButton(SelectWin);
        emploeeBT->setObjectName(QString::fromUtf8("emploeeBT"));

        gridLayout->addWidget(emploeeBT, 0, 0, 1, 1);

        attBT = new QRadioButton(SelectWin);
        attBT->setObjectName(QString::fromUtf8("attBT"));

        gridLayout->addWidget(attBT, 0, 1, 1, 1);

        selectBT = new QPushButton(SelectWin);
        selectBT->setObjectName(QString::fromUtf8("selectBT"));

        gridLayout->addWidget(selectBT, 0, 2, 1, 1);

        tableView = new QTableView(SelectWin);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 3);


        retranslateUi(SelectWin);

        QMetaObject::connectSlotsByName(SelectWin);
    } // setupUi

    void retranslateUi(QWidget *SelectWin)
    {
        SelectWin->setWindowTitle(QCoreApplication::translate("SelectWin", "Form", nullptr));
        emploeeBT->setText(QCoreApplication::translate("SelectWin", "\345\221\230\345\267\245", nullptr));
        attBT->setText(QCoreApplication::translate("SelectWin", "\350\200\203\345\213\244", nullptr));
        selectBT->setText(QCoreApplication::translate("SelectWin", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectWin: public Ui_SelectWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIN_H
