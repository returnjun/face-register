/********************************************************************************
** Form generated from reading UI file 'reg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REG_H
#define UI_REG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reg
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QWidget *widget_4;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_password2;
    QLabel *lb2_2;
    QLabel *lb1_2;
    QPushButton *reg_2;
    QLineEdit *lineEdit_password1;
    QLabel *lb2_3;

    void setupUi(QWidget *reg)
    {
        if (reg->objectName().isEmpty())
            reg->setObjectName(QString::fromUtf8("reg"));
        reg->resize(379, 322);
        reg->setStyleSheet(QString::fromUtf8("\n"
"QWidget#reg {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 #3498db, stop:1 #2c3e50);\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"/* \346\240\207\351\242\230\346\240\267\345\274\217 */\n"
"QLabel#label {\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 28px;\n"
"    padding: 10px;\n"
"    margin-bottom: 20px;\n"
"}\n"
"\n"
"/* \350\276\223\345\205\245\346\241\206\345\256\271\345\231\250\346\240\267\345\274\217 */\n"
"QWidget#widget_4 {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border-radius: 10px;\n"
"    padding: 15px;\n"
"}\n"
"\n"
"/* \346\240\207\347\255\276\346\240\267\345\274\217 */\n"
"QLabel {\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"/* \350\276\223\345\205\245\346\241\206\351\200\232\347\224\250\346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    background-color: rgba(255, 255, 255, 0.9);\n"
"    border: 2px solid #ecf0f1;\n"
"    border-radius: 8px;\n"
"    padding: 8px 12px;\n"
" "
                        "   font-size: 16px;\n"
"    color: #2c3e50;\n"
"    min-width: 200px;\n"
"    selection-background-color: #3498db;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #3498db;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #95a5a6;\n"
"    font-style: italic;\n"
"}\n"
"\n"
"\n"
"\n"
"/* \346\263\250\345\206\214\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton#reg_2 {\n"
"    background-color: #2ecc71;\n"
"    color: white;\n"
"    border: 2px solid #27ae60;\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    margin-top: 15px;\n"
"}\n"
"\n"
"QPushButton#reg_2:hover {\n"
"    background-color: #27ae60;\n"
"}\n"
"\n"
"QPushButton#reg_2:pressed {\n"
"    background-color: #219653;\n"
"}\n"
"\n"
"/* \345\270\203\345\261\200\351\227\264\350\267\235\350\260\203\346\225\264 */\n"
"QGridLayout {\n"
"    margin: 15px;\n"
"}\n"
"\n"
"QGridLayout > QWidget {\n"
"    m"
                        "argin: 5px;\n"
"}\n"
"	QMessageBox QLabel {\n"
"   	 	color: black;  /* \350\256\276\347\275\256\346\266\210\346\201\257\346\226\207\346\234\254\344\270\272\351\273\221\350\211\262 */\n"
"    	font-weight: normal;\n"
"	}\n"
"QMessageBox QPushButton {\n"
"    background-color: #f0f0f0;\n"
"    color: black;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 4px;\n"
"    padding: 5px 10px;\n"
"    min-width: 80px;\n"
"}"));
        gridLayout = new QGridLayout(reg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(reg);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        widget_4 = new QWidget(reg);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout_3 = new QGridLayout(widget_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEdit_user = new QLineEdit(widget_4);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));
        QFont font1;
        lineEdit_user->setFont(font1);
        lineEdit_user->setMaxLength(50);

        gridLayout_3->addWidget(lineEdit_user, 0, 1, 1, 1);

        lineEdit_password2 = new QLineEdit(widget_4);
        lineEdit_password2->setObjectName(QString::fromUtf8("lineEdit_password2"));
        lineEdit_password2->setFont(font1);
        lineEdit_password2->setMaxLength(30);
        lineEdit_password2->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(lineEdit_password2, 2, 1, 1, 1);

        lb2_2 = new QLabel(widget_4);
        lb2_2->setObjectName(QString::fromUtf8("lb2_2"));
        lb2_2->setFont(font);
        lb2_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lb2_2, 1, 0, 1, 1);

        lb1_2 = new QLabel(widget_4);
        lb1_2->setObjectName(QString::fromUtf8("lb1_2"));
        lb1_2->setFont(font);
        lb1_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lb1_2, 0, 0, 1, 1);

        reg_2 = new QPushButton(widget_4);
        reg_2->setObjectName(QString::fromUtf8("reg_2"));
        reg_2->setFont(font);

        gridLayout_3->addWidget(reg_2, 3, 0, 1, 2);

        lineEdit_password1 = new QLineEdit(widget_4);
        lineEdit_password1->setObjectName(QString::fromUtf8("lineEdit_password1"));
        lineEdit_password1->setFont(font1);
        lineEdit_password1->setMaxLength(25);
        lineEdit_password1->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(lineEdit_password1, 1, 1, 1, 1);

        lb2_3 = new QLabel(widget_4);
        lb2_3->setObjectName(QString::fromUtf8("lb2_3"));
        lb2_3->setFont(font);
        lb2_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lb2_3, 2, 0, 1, 1);


        gridLayout->addWidget(widget_4, 1, 0, 1, 1);


        retranslateUi(reg);

        QMetaObject::connectSlotsByName(reg);
    } // setupUi

    void retranslateUi(QWidget *reg)
    {
        reg->setWindowTitle(QCoreApplication::translate("reg", "Form", nullptr));
        label->setText(QCoreApplication::translate("reg", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        lineEdit_user->setPlaceholderText(QCoreApplication::translate("reg", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_password2->setPlaceholderText(QCoreApplication::translate("reg", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        lb2_2->setText(QCoreApplication::translate("reg", "\346\263\250\345\206\214\345\257\206\347\240\201", nullptr));
        lb1_2->setText(QCoreApplication::translate("reg", "\347\224\250\346\210\267\345\220\215", nullptr));
        reg_2->setText(QCoreApplication::translate("reg", "\346\263\250\345\206\214", nullptr));
        lineEdit_password1->setPlaceholderText(QCoreApplication::translate("reg", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        lb2_3->setText(QCoreApplication::translate("reg", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reg: public Ui_reg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REG_H
