/********************************************************************************
** Form generated from reading UI file 'faceattendence.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEATTENDENCE_H
#define UI_FACEATTENDENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceAttendence
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QWidget *widget;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *headpicLB;
    QGridLayout *gridLayout_7;
    QLabel *vdieoLB;
    QWidget *widget_3;
    QGridLayout *gridLayout_6;
    QLabel *titleLB;
    QWidget *headwai;
    QLabel *headLB;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *numberEdit;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLineEdit *nameEdit;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLineEdit *departEdit;
    QWidget *widget_7;
    QGridLayout *gridLayout_5;
    QLabel *label_9;
    QLineEdit *timeEdit;

    void setupUi(QMainWindow *FaceAttendence)
    {
        if (FaceAttendence->objectName().isEmpty())
            FaceAttendence->setObjectName(QString::fromUtf8("FaceAttendence"));
        FaceAttendence->resize(851, 498);
        FaceAttendence->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #2c3e50, stop:1 #4ca1af);\n"
"}\n"
"\n"
"/* \350\247\206\351\242\221\346\230\276\347\244\272\345\214\272\345\237\237 */\n"
"#vdieoLB {\n"
"    background-color: #1e1e2d;\n"
"    border: 2px solid #3a3a4a;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"/* \350\256\244\350\257\201\346\210\220\345\212\237\346\217\220\347\244\272\346\241\206 */\n"
"#widget_2 {\n"
"    background-color: rgba(76, 175, 80, 0.85);\n"
"    border-radius: 10px;\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"#label {\n"
"    border-image: url(:/yes.png);\n"
"    background-color: transparent;\n"
"    min-width: 32px;\n"
"    min-height: 32px;\n"
"}\n"
"\n"
"#label_2 {\n"
"    font: bold 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"}\n"
"\n"
"\n"
"#widget_3 {\n"
"    background: rgba(37, 40, 49, 0.95);\n"
"    border: 1px solid #3a3a4a;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"#titleLB {\n"
"    font: "
                        "bold 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #ffffff;\n"
"    padding: 15px 0;\n"
"    background: linear-gradient(to right, #3498db, #9b59b6);\n"
"    border-radius: 6px 6px 0 0;\n"
"    margin: 0;\n"
"}\n"
"\n"
"#headLB {\n"
"    border: 4px solid #3498db;\n"
"    border-radius: 75px;\n"
"    background-color: #2c3e50;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"#widget_4, #widget_5, #widget_6, #widget_7 {\n"
"    background: rgba(44, 62, 80, 0.7);\n"
"    border: 1px solid #3a3a4a;\n"
"    border-radius: 6px;\n"
"    margin: 8px 0;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLabel {\n"
"    font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #ecf0f1;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid #3a3a4a;\n"
"    border-radius: 4px;\n"
"    padding: 5px 10px;\n"
"    color: #ffffff;\n"
"    selection-background-col"
                        "or: #3498db;\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"    background: rgba(255, 255, 255, 0.05);\n"
"    color: #bdc3c7;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 1px solid #3498db;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #9b59b6;\n"
"    background: rgba(255, 255, 255, 0.15);\n"
"}\n"
""));
        centralwidget = new QWidget(FaceAttendence);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8(""));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(100, 350, 271, 71));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(106, 106, 106,60);\n"
"border-radius:10px;\n"
""));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(31, 31));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/yes.png);\n"
"background-color: rgba(106, 106, 106,0);"));
        label->setWordWrap(true);
        label->setMargin(0);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(106, 106, 106,0);"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        headpicLB = new QLabel(widget);
        headpicLB->setObjectName(QString::fromUtf8("headpicLB"));
        headpicLB->setGeometry(QRect(100, 40, 266, 266));
        headpicLB->setStyleSheet(QString::fromUtf8("border-image: url(:/crc.png);"));
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        vdieoLB = new QLabel(widget);
        vdieoLB->setObjectName(QString::fromUtf8("vdieoLB"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vdieoLB->sizePolicy().hasHeightForWidth());
        vdieoLB->setSizePolicy(sizePolicy);
        vdieoLB->setMinimumSize(QSize(480, 480));

        gridLayout_7->addWidget(vdieoLB, 0, 0, 1, 1);

        vdieoLB->raise();
        widget_2->raise();
        headpicLB->raise();

        gridLayout_4->addWidget(widget, 0, 0, 1, 1);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color:rgb(37,40,49,0.9);\n"
"\n"
"}\n"
"QWidget#titleLB{\n"
"	font: 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QWidget#headLB{\n"
"	border-radius:75px;\n"
"	\n"
"}"));
        gridLayout_6 = new QGridLayout(widget_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        titleLB = new QLabel(widget_3);
        titleLB->setObjectName(QString::fromUtf8("titleLB"));
        titleLB->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(titleLB, 0, 0, 1, 1);

        headwai = new QWidget(widget_3);
        headwai->setObjectName(QString::fromUtf8("headwai"));
        headLB = new QLabel(headwai);
        headLB->setObjectName(QString::fromUtf8("headLB"));
        headLB->setGeometry(QRect(90, 10, 150, 150));
        headLB->setBaseSize(QSize(150, 150));

        gridLayout_6->addWidget(headwai, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color:rgb(37,40,49,0.9);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(206, 206, 206);\n"
"	\n"
"}\n"
"QLineEdit{\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        gridLayout = new QGridLayout(widget_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        numberEdit = new QLineEdit(widget_4);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));
        numberEdit->setEnabled(false);

        gridLayout->addWidget(numberEdit, 0, 1, 1, 1);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color:rgb(37,40,49,0.9);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(206, 206, 206);\n"
"	\n"
"}\n"
"QLineEdit{\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        nameEdit = new QLineEdit(widget_5);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setEnabled(false);

        gridLayout_2->addWidget(nameEdit, 0, 1, 1, 1);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color:rgb(37,40,49,0.9);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(206, 206, 206);\n"
"	\n"
"}\n"
"QLineEdit{\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        departEdit = new QLineEdit(widget_6);
        departEdit->setObjectName(QString::fromUtf8("departEdit"));
        departEdit->setEnabled(false);

        gridLayout_3->addWidget(departEdit, 0, 1, 1, 1);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color:rgb(37,40,49,0.9);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(206, 206, 206);\n"
"	\n"
"}\n"
"QLineEdit{\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        gridLayout_5 = new QGridLayout(widget_7);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        timeEdit = new QLineEdit(widget_7);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setEnabled(false);

        gridLayout_5->addWidget(timeEdit, 0, 1, 1, 1);


        verticalLayout->addWidget(widget_7);


        gridLayout_6->addLayout(verticalLayout, 2, 0, 1, 1);

        gridLayout_6->setRowStretch(0, 1);
        gridLayout_6->setRowStretch(1, 2);
        gridLayout_6->setRowStretch(2, 2);

        gridLayout_4->addWidget(widget_3, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 3);
        gridLayout_4->setColumnStretch(1, 2);
        FaceAttendence->setCentralWidget(centralwidget);

        retranslateUi(FaceAttendence);

        QMetaObject::connectSlotsByName(FaceAttendence);
    } // setupUi

    void retranslateUi(QMainWindow *FaceAttendence)
    {
        FaceAttendence->setWindowTitle(QCoreApplication::translate("FaceAttendence", "FaceAttendence", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("FaceAttendence", "\350\256\244\350\257\201\346\210\220\345\212\237", nullptr));
        headpicLB->setText(QString());
        vdieoLB->setText(QString());
        titleLB->setText(QCoreApplication::translate("FaceAttendence", "\344\272\272\350\204\270\350\257\206\345\210\253\350\200\203\345\213\244\347\263\273\347\273\237", nullptr));
        headLB->setText(QString());
        label_6->setText(QCoreApplication::translate("FaceAttendence", "\345\267\245\345\217\267\357\274\232", nullptr));
        numberEdit->setText(QString());
        label_7->setText(QCoreApplication::translate("FaceAttendence", "\345\247\223\345\220\215\357\274\232", nullptr));
        nameEdit->setText(QString());
        label_8->setText(QCoreApplication::translate("FaceAttendence", "\351\203\250\351\227\250\357\274\232", nullptr));
        departEdit->setText(QString());
        label_9->setText(QCoreApplication::translate("FaceAttendence", "\346\227\266\351\227\264\357\274\232", nullptr));
        timeEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FaceAttendence: public Ui_FaceAttendence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEATTENDENCE_H
