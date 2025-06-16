/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_login
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *lb1;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *reg;
    QPushButton *login_butten;
    QWidget *widget_5;
    QLineEdit *lineEdit_2;
    QLabel *lb2;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *page_login)
    {
        if (page_login->objectName().isEmpty())
            page_login->setObjectName(QString::fromUtf8("page_login"));
        page_login->resize(450, 350);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        page_login->setWindowIcon(icon);
        page_login->setStyleSheet(QString::fromUtf8("\n"
"    /* \344\270\273\347\252\227\345\217\243\350\203\214\346\231\257\357\274\210\346\270\220\345\217\230\357\274\211 */\n"
"    QWidget#page_login {\n"
"        background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"            stop:0 #3498db, stop:1 #2c3e50);\n"
"    }\n"
"\n"
"    /* \346\240\207\351\242\230\346\240\267\345\274\217 */\n"
"    QLabel#label_3 {\n"
"        color: white;\n"
"        font-weight: bold;\n"
"        font-size: 28px;\n"
"        padding: 10px;\n"
"    }\n"
"\n"
"    /* \350\276\223\345\205\245\346\241\206\346\240\267\345\274\217 */\n"
"    QLineEdit {\n"
"        background-color: rgba(255, 255, 255, 0.9);\n"
"        border: 2px solid #ecf0f1;\n"
"        border-radius: 8px;\n"
"        padding: 8px 12px;\n"
"        font-size: 16px;\n"
"        color: #2c3e50;\n"
"        selection-background-color: #3498db;\n"
"        selection-color: white;\n"
"    }\n"
"\n"
"    QLineEdit:focus {\n"
"        border: 2px solid #3498db;\n"
"        background-color: white;\n"
"    }\n"
"\n"
""
                        "    QLineEdit::placeholder {\n"
"        color: #95a5a6;\n"
"        font-style: italic;\n"
"    }\n"
"\n"
"    /* \345\257\206\347\240\201\350\276\223\345\205\245\346\241\206\351\242\235\345\244\226\346\240\267\345\274\217 */\n"
"    QLineEdit[echoMode=\"2\"] {  /* Password mode */\n"
"       \n"
"    }\n"
"\n"
"    /* \346\240\207\347\255\276\346\240\267\345\274\217 */\n"
"    QLabel {\n"
"        color: white;\n"
"        font-weight: bold;\n"
"    }\n"
"\n"
"    /* \346\214\211\351\222\256\351\200\232\347\224\250\346\240\267\345\274\217 */\n"
"    QPushButton {\n"
"        background-color: rgba(255, 255, 255, 0.2);\n"
"        color: white;\n"
"        border: 2px solid white;\n"
"        border-radius: 8px;\n"
"        padding: 8px 16px;\n"
"        font-weight: bold;\n"
"        min-width: 100px;\n"
"    }\n"
"\n"
"    QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 0.3);\n"
"    }\n"
"\n"
"    QPushButton:pressed {\n"
"        background-color: rgba(255, 255, 255, 0.4);\n"
"    }\n"
""
                        "\n"
"    /* \347\231\273\345\275\225\346\214\211\351\222\256\347\211\271\346\256\212\346\240\267\345\274\217 */\n"
"    QPushButton#login_butten {\n"
"        background-color: #2ecc71;\n"
"        border-color: #27ae60;\n"
"    }\n"
"\n"
"    QPushButton#login_butten:hover {\n"
"        background-color: #27ae60;\n"
"    }\n"
"\n"
"    QPushButton#login_butten:pressed {\n"
"        background-color: #219653;\n"
"    }\n"
"\n"
"    /* \351\200\200\345\207\272\346\214\211\351\222\256\347\211\271\346\256\212\346\240\267\345\274\217 */\n"
"    QPushButton#reg {\n"
"        background-color: #e74c3c;\n"
"        border-color: #c0392b;\n"
"    }\n"
"\n"
"    QPushButton#reg:hover {\n"
"        background-color: #c0392b;\n"
"    }\n"
"\n"
"    QPushButton#exeit:pressed {\n"
"        background-color: #a93226;\n"
"    }\n"
"	QMessageBox QLabel {\n"
"   	 	color: black;  /* \350\256\276\347\275\256\346\266\210\346\201\257\346\226\207\346\234\254\344\270\272\351\273\221\350\211\262 */\n"
"    	font-weight: normal;\n"
""
                        "	}\n"
"QMessageBox QPushButton {\n"
"    background-color: #f0f0f0;\n"
"    color: black;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 4px;\n"
"    padding: 5px 10px;\n"
"    min-width: 80px;\n"
"}\n"
""));
        gridLayout_3 = new QGridLayout(page_login);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(page_login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setToolTipDuration(9);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        widget_2 = new QWidget(page_login);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lb1 = new QLabel(widget_2);
        lb1->setObjectName(QString::fromUtf8("lb1"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        lb1->setFont(font1);
        lb1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb1, 0, 0, 1, 1);

        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        reg = new QPushButton(widget);
        reg->setObjectName(QString::fromUtf8("reg"));
        reg->setFont(font1);

        gridLayout->addWidget(reg, 0, 0, 1, 1);

        login_butten = new QPushButton(widget);
        login_butten->setObjectName(QString::fromUtf8("login_butten"));
        login_butten->setFont(font1);

        gridLayout->addWidget(login_butten, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 3, 0, 1, 2);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));

        gridLayout_2->addWidget(widget_5, 2, 0, 1, 2);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        QFont font2;
        lineEdit_2->setFont(font2);
        lineEdit_2->setMaxLength(24);

        gridLayout_2->addWidget(lineEdit_2, 0, 1, 1, 1);

        lb2 = new QLabel(widget_2);
        lb2->setObjectName(QString::fromUtf8("lb2"));
        lb2->setFont(font1);
        lb2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb2, 1, 0, 1, 1);

        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font2);
        lineEdit_3->setMaxLength(12);
        lineEdit_3->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_3, 1, 1, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);


        retranslateUi(page_login);

        QMetaObject::connectSlotsByName(page_login);
    } // setupUi

    void retranslateUi(QWidget *page_login)
    {
        page_login->setWindowTitle(QCoreApplication::translate("page_login", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        page_login->setToolTip(QCoreApplication::translate("page_login", "\350\277\231\346\230\257\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("page_login", "\344\272\272\350\204\270\350\257\206\345\210\253\350\200\203\345\213\244\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        lb1->setText(QCoreApplication::translate("page_login", "\347\224\250\346\210\267\345\220\215", nullptr));
        reg->setText(QCoreApplication::translate("page_login", "\346\263\250\345\206\214", nullptr));
        login_butten->setText(QCoreApplication::translate("page_login", "\347\231\273\345\275\225", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("page_login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        lb2->setText(QCoreApplication::translate("page_login", "\345\257\206  \347\240\201", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("page_login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_login: public Ui_page_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
