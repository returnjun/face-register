/********************************************************************************
** Form generated from reading UI file 'registerwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIN_H
#define UI_REGISTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWin
{
public:
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QRadioButton *mrb;
    QRadioButton *wrb;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QDateEdit *birthdayEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *addressEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *phoneEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *registerBT;
    QPushButton *resetBT;
    QGridLayout *gridLayout_2;
    QLabel *headpicLB;
    QLineEdit *picFileEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addpicBT;
    QPushButton *videoswitchBT;
    QPushButton *cameraBT;

    void setupUi(QWidget *RegisterWin)
    {
        if (RegisterWin->objectName().isEmpty())
            RegisterWin->setObjectName(QString::fromUtf8("RegisterWin"));
        RegisterWin->resize(882, 572);
        QFont font;
        font.setPointSize(15);
        RegisterWin->setFont(font);
        RegisterWin->setStyleSheet(QString::fromUtf8("\n"
"/* \344\270\273\347\252\227\345\217\243\346\240\267\345\274\217 */\n"
"RegisterWin {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                              stop:0 #f5f7fa, stop:1 #e4e8f0);\n"
"    font-family: \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font-size: 18px; /* \345\237\272\347\241\200\345\255\227\344\275\223\346\224\276\345\244\247 */\n"
"}\n"
"\n"
"/* \350\241\250\345\215\225\345\256\271\345\231\250\346\240\267\345\274\217 */\n"
"QVBoxLayout, QHBoxLayout, QGridLayout {\n"
"    margin: 15px;\n"
"    spacing: 15px;\n"
"}\n"
"\n"
"/* \346\240\207\347\255\276\346\240\267\345\274\217 */\n"
"QLabel {\n"
"	font-size: 20px; /* \344\273\21616px\345\242\236\345\244\247\345\210\26020px */\n"
"    color: #4a5568;\n"
"    min-width: 80px; /* \345\242\236\345\244\247\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    padding: 8px 0; /* \345\242\236\345\244\247\345\206\205\350\276\271\350\267\235 */\n"
"    font-weight: 500; /* \344\270\255\347\255\211\347\262\227"
                        "\347\273\206 */\n"
"}\n"
"\n"
"/* \350\276\223\345\205\245\346\241\206\346\240\267\345\274\217 */\n"
"QLineEdit, QDateEdit {\n"
" 	font-size: 18px; /* \344\273\21615px\345\242\236\345\244\247\345\210\26018px */\n"
"    padding: 12px 15px; /* \345\242\236\345\244\247\345\206\205\350\276\271\350\267\235 */\n"
"    border: 1px solid #cbd5e0;\n"
"    border-radius: 6px; /* \345\242\236\345\244\247\345\234\206\350\247\222 */\n"
"    background: white;\n"
"    min-height: 30px; /* \345\242\236\345\244\247\346\234\200\345\260\217\351\253\230\345\272\246 */\n"
"}\n"
"\n"
"QLineEdit:focus, QDateEdit:focus {\n"
"    border: 2px solid #4299e1;\n"
"    box-shadow: 0 0 0 2px rgba(66, 153, 225, 0.2);\n"
"}\n"
"\n"
"/* \345\215\225\351\200\211\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QRadioButton {\n"
"    font-size: 22px;\n"
"    color: #4a5568;\n"
"    padding: 8px 15px;\n"
"    spacing: 8px;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border-radius: 9px;\n"
"  "
                        "  border: 2px solid #a0aec0;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #4299e1;\n"
"    border: 2px solid #4299e1;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover {\n"
"    border: 2px solid #718096;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    font-size: 22px;\n"
"    padding: 14px 25px;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    color: white;\n"
"    background-color: #4299e1;\n"
"    min-width: 100px;\n"
"}\n"
"\n"
"/* \346\263\250\345\206\214\346\214\211\351\222\256\347\211\271\346\256\212\346\240\267\345\274\217 */\n"
"QPushButton#registerBT {\n"
"    background-color: #48bb78;\n"
"}\n"
"\n"
"QPushButton#registerBT:hover {\n"
"    background-color: #38a169;\n"
"}\n"
"\n"
"QPushButton#registerBT:pressed {\n"
"    background-color: #2f855a;\n"
"}\n"
"\n"
"/* \351\207\215\347\275\256\346\214\211\351\222\256\347\211\271\346\256\212\346\240\267\345\274\217 */\n"
"QPushButton#resetBT {\n"
"   "
                        " background-color: #e53e3e;\n"
"}\n"
"\n"
"QPushButton#resetBT:hover {\n"
"    background-color: #c53030;\n"
"}\n"
"\n"
"QPushButton#resetBT:pressed {\n"
"    background-color: #9b2c2c;\n"
"}\n"
"\n"
"/* \345\244\264\345\203\217\345\214\272\345\237\237\346\240\267\345\274\217 */\n"
"#headpicLB {\n"
"    background-color: #edf2f7;\n"
"    border: 2px dashed #cbd5e0;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"/* \345\244\264\345\203\217\346\223\215\344\275\234\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton#addpicBT, QPushButton#videoswitchBT, QPushButton#cameraBT {\n"
"    background-color: #718096;\n"
"    font-size: 18px;\n"
"    padding: 8px 12px;\n"
"}\n"
"\n"
"QPushButton#addpicBT:hover, QPushButton#videoswitchBT:hover, QPushButton#cameraBT:hover {\n"
"    background-color: #4a5568;\n"
"}\n"
"\n"
"QPushButton#addpicBT:pressed, QPushButton#videoswitchBT:pressed, QPushButton#cameraBT:pressed {\n"
"    background-color: #2d3748;\n"
"}\n"
"\n"
"/* \345\233\276\347\211\207\350\267\257\345\276"
                        "\204\350\276\223\345\205\245\346\241\206 */\n"
"#lineEdit_picFileEdit {\n"
"    font-size: 14px;\n"
"    padding: 6px 10px;\n"
"    border: 1px solid #cbd5e0;\n"
"    border-radius: 4px;\n"
"    background: white;\n"
"}\n"
"</string>\n"
"</property>"));
        horizontalLayout_8 = new QHBoxLayout(RegisterWin);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(RegisterWin);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        nameEdit = new QLineEdit(RegisterWin);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(RegisterWin);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        mrb = new QRadioButton(RegisterWin);
        mrb->setObjectName(QString::fromUtf8("mrb"));

        horizontalLayout_2->addWidget(mrb);

        wrb = new QRadioButton(RegisterWin);
        wrb->setObjectName(QString::fromUtf8("wrb"));

        horizontalLayout_2->addWidget(wrb);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(RegisterWin);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        birthdayEdit = new QDateEdit(RegisterWin);
        birthdayEdit->setObjectName(QString::fromUtf8("birthdayEdit"));
        sizePolicy.setHeightForWidth(birthdayEdit->sizePolicy().hasHeightForWidth());
        birthdayEdit->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(birthdayEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(RegisterWin);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        addressEdit = new QLineEdit(RegisterWin);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        sizePolicy.setHeightForWidth(addressEdit->sizePolicy().hasHeightForWidth());
        addressEdit->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(addressEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(RegisterWin);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        phoneEdit = new QLineEdit(RegisterWin);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        sizePolicy.setHeightForWidth(phoneEdit->sizePolicy().hasHeightForWidth());
        phoneEdit->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(phoneEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        registerBT = new QPushButton(RegisterWin);
        registerBT->setObjectName(QString::fromUtf8("registerBT"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(registerBT->sizePolicy().hasHeightForWidth());
        registerBT->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(registerBT);

        resetBT = new QPushButton(RegisterWin);
        resetBT->setObjectName(QString::fromUtf8("resetBT"));
        sizePolicy1.setHeightForWidth(resetBT->sizePolicy().hasHeightForWidth());
        resetBT->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(resetBT);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_8->addLayout(verticalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        headpicLB = new QLabel(RegisterWin);
        headpicLB->setObjectName(QString::fromUtf8("headpicLB"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(headpicLB->sizePolicy().hasHeightForWidth());
        headpicLB->setSizePolicy(sizePolicy2);
        headpicLB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 255);"));

        gridLayout_2->addWidget(headpicLB, 0, 0, 1, 1);

        picFileEdit = new QLineEdit(RegisterWin);
        picFileEdit->setObjectName(QString::fromUtf8("picFileEdit"));

        gridLayout_2->addWidget(picFileEdit, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addpicBT = new QPushButton(RegisterWin);
        addpicBT->setObjectName(QString::fromUtf8("addpicBT"));
        sizePolicy1.setHeightForWidth(addpicBT->sizePolicy().hasHeightForWidth());
        addpicBT->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(addpicBT);

        videoswitchBT = new QPushButton(RegisterWin);
        videoswitchBT->setObjectName(QString::fromUtf8("videoswitchBT"));
        sizePolicy1.setHeightForWidth(videoswitchBT->sizePolicy().hasHeightForWidth());
        videoswitchBT->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(videoswitchBT);

        cameraBT = new QPushButton(RegisterWin);
        cameraBT->setObjectName(QString::fromUtf8("cameraBT"));
        sizePolicy1.setHeightForWidth(cameraBT->sizePolicy().hasHeightForWidth());
        cameraBT->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(cameraBT);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 3);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setRowStretch(2, 1);

        horizontalLayout_8->addLayout(gridLayout_2);


        retranslateUi(RegisterWin);

        QMetaObject::connectSlotsByName(RegisterWin);
    } // setupUi

    void retranslateUi(QWidget *RegisterWin)
    {
        RegisterWin->setWindowTitle(QCoreApplication::translate("RegisterWin", "Form", nullptr));
        label->setText(QCoreApplication::translate("RegisterWin", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterWin", "\346\200\247\345\210\253\357\274\232", nullptr));
        mrb->setText(QCoreApplication::translate("RegisterWin", "\347\224\267", nullptr));
        wrb->setText(QCoreApplication::translate("RegisterWin", "\345\245\263", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterWin", "\347\224\237\346\227\245\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWin", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWin", "\347\224\265\350\257\235\357\274\232", nullptr));
        registerBT->setText(QCoreApplication::translate("RegisterWin", "\346\263\250\345\206\214", nullptr));
        resetBT->setText(QCoreApplication::translate("RegisterWin", "\351\207\215\347\275\256", nullptr));
        headpicLB->setText(QString());
        addpicBT->setText(QCoreApplication::translate("RegisterWin", "\346\267\273\345\212\240\345\244\264\345\203\217", nullptr));
        videoswitchBT->setText(QCoreApplication::translate("RegisterWin", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        cameraBT->setText(QCoreApplication::translate("RegisterWin", "\346\213\215\347\205\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWin: public Ui_RegisterWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIN_H
