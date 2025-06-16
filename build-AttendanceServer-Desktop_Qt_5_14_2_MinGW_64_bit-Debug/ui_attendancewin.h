/********************************************************************************
** Form generated from reading UI file 'attendancewin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCEWIN_H
#define UI_ATTENDANCEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <registerwin.h>
#include <selectwin.h>

QT_BEGIN_NAMESPACE

class Ui_AttendanceWin
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *showWidget;
    QLabel *picLB;
    RegisterWin *registerWidget;
    SelectWin *selectWidget;

    void setupUi(QMainWindow *AttendanceWin)
    {
        if (AttendanceWin->objectName().isEmpty())
            AttendanceWin->setObjectName(QString::fromUtf8("AttendanceWin"));
        AttendanceWin->resize(831, 509);
        AttendanceWin->setStyleSheet(QString::fromUtf8("\n"
"    /* \344\270\273\347\252\227\345\217\243\346\240\267\345\274\217 */\n"
"    QMainWindow {\n"
"        background-color: #f5f5f5;\n"
"        font-family: \"Microsoft YaHei\";\n"
"    }\n"
"    \n"
"    /* \346\240\207\347\255\276\351\241\265\346\216\247\344\273\266\346\240\267\345\274\217 */\n"
"    QTabWidget::pane {\n"
"        border: 1px solid #d9d9d9;\n"
"        border-radius: 4px;\n"
"        background: white;\n"
"    }\n"
"    \n"
"    QTabBar::tab {\n"
"        background: #e0e0e0;\n"
"        border: 1px solid #d9d9d9;\n"
"        border-bottom: none;\n"
"        padding: 8px 16px;\n"
"        margin-right: 2px;\n"
"        border-top-left-radius: 4px;\n"
"        border-top-right-radius: 4px;\n"
"        color: #555;\n"
"    }\n"
"    \n"
"    QTabBar::tab:selected {\n"
"        background: white;\n"
"        color: #2b7dbc;\n"
"        font-weight: bold;\n"
"        border-bottom: 2px solid #2b7dbc;\n"
"    }\n"
"    \n"
"    QTabBar::tab:hover {\n"
"        background: #f0f0f0;\n"
"    }\n"
""
                        "    \n"
"    /* \350\200\203\345\213\244\345\233\276\345\203\217\346\240\207\347\255\276\346\240\267\345\274\217 */\n"
"    #picLB {\n"
"        background-color: #f0f0f0;\n"
"        border: 2px dashed #ccc;\n"
"        border-radius: 8px;\n"
"        color: #888;\n"
"        font-size: 18px;\n"
"        qproperty-alignment: AlignCenter;\n"
"    }\n"
"    \n"
"    /* \346\214\211\351\222\256\351\200\232\347\224\250\346\240\267\345\274\217 */\n"
"    QPushButton {\n"
"        background-color: #2b7dbc;\n"
"        color: white;\n"
"        border: none;\n"
"        padding: 8px 16px;\n"
"        border-radius: 4px;\n"
"        min-width: 80px;\n"
"    }\n"
"    \n"
"    QPushButton:hover {\n"
"        background-color: #3a8bcc;\n"
"    }\n"
"    \n"
"    QPushButton:pressed {\n"
"        background-color: #1a6dac;\n"
"    }\n"
"    \n"
"    /* \350\276\223\345\205\245\346\241\206\346\240\267\345\274\217 */\n"
"    QLineEdit, QTextEdit, QComboBox {\n"
"        border: 1px solid #d9d9d9;\n"
"        border-radiu"
                        "s: 4px;\n"
"        padding: 6px;\n"
"        background: white;\n"
"    }\n"
"    \n"
"    QLineEdit:focus, QTextEdit:focus {\n"
"        border: 1px solid #2b7dbc;\n"
"    }\n"
"    \n"
"    /* \350\241\250\346\240\274\346\240\267\345\274\217 */\n"
"    QTableView {\n"
"        border: 1px solid #d9d9d9;\n"
"        background: white;\n"
"        gridline-color: #eaeaea;\n"
"        selection-background-color: #d5e8f7;\n"
"    }\n"
"    \n"
"    QHeaderView::section {\n"
"        background-color: #f0f0f0;\n"
"        padding: 6px;\n"
"        border: none;\n"
"    }\n"
""));
        centralwidget = new QWidget(AttendanceWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        showWidget = new QWidget();
        showWidget->setObjectName(QString::fromUtf8("showWidget"));
        picLB = new QLabel(showWidget);
        picLB->setObjectName(QString::fromUtf8("picLB"));
        picLB->setGeometry(QRect(200, 30, 391, 381));
        picLB->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 127);"));
        tabWidget->addTab(showWidget, QString());
        registerWidget = new RegisterWin();
        registerWidget->setObjectName(QString::fromUtf8("registerWidget"));
        tabWidget->addTab(registerWidget, QString());
        selectWidget = new SelectWin();
        selectWidget->setObjectName(QString::fromUtf8("selectWidget"));
        tabWidget->addTab(selectWidget, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        AttendanceWin->setCentralWidget(centralwidget);

        retranslateUi(AttendanceWin);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AttendanceWin);
    } // setupUi

    void retranslateUi(QMainWindow *AttendanceWin)
    {
        AttendanceWin->setWindowTitle(QCoreApplication::translate("AttendanceWin", "AttendanceWin", nullptr));
        picLB->setText(QCoreApplication::translate("AttendanceWin", "\350\200\203\345\213\244\345\233\276\345\203\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(showWidget), QCoreApplication::translate("AttendanceWin", "\350\200\203\345\213\244\345\233\276\345\203\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(registerWidget), QCoreApplication::translate("AttendanceWin", "\346\263\250\345\206\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(selectWidget), QCoreApplication::translate("AttendanceWin", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttendanceWin: public Ui_AttendanceWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCEWIN_H
