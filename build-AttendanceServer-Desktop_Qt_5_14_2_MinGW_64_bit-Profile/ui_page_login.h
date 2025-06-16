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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_login
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *exeit;
    QPushButton *login_butten;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLabel *lb1;
    QLineEdit *lineEdit_3;
    QLabel *lb2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *page_login)
    {
        if (page_login->objectName().isEmpty())
            page_login->setObjectName(QString::fromUtf8("page_login"));
        page_login->resize(513, 364);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        page_login->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(page_login);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(page_login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(24);
        label_3->setFont(font);
        label_3->setToolTipDuration(9);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        widget = new QWidget(page_login);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 2, 0, 2);
        exeit = new QPushButton(widget);
        exeit->setObjectName(QString::fromUtf8("exeit"));
        QFont font1;
        font1.setPointSize(16);
        exeit->setFont(font1);

        gridLayout_2->addWidget(exeit, 0, 0, 1, 1);

        login_butten = new QPushButton(widget);
        login_butten->setObjectName(QString::fromUtf8("login_butten"));
        login_butten->setFont(font1);

        gridLayout_2->addWidget(login_butten, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget, 2, 0, 1, 1);

        widget_2 = new QWidget(page_login);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(34, -1, 1, -1);
        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font1);
        lineEdit_2->setMaxLength(24);

        gridLayout->addWidget(lineEdit_2, 0, 1, 1, 1);

        lb1 = new QLabel(widget_2);
        lb1->setObjectName(QString::fromUtf8("lb1"));
        lb1->setFont(font1);
        lb1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb1, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font1);
        lineEdit_3->setMaxLength(12);
        lineEdit_3->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_3, 1, 1, 1, 1);

        lb2 = new QLabel(widget_2);
        lb2->setObjectName(QString::fromUtf8("lb2"));
        lb2->setFont(font1);
        lb2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);


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
        label_3->setText(QCoreApplication::translate("page_login", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        exeit->setText(QCoreApplication::translate("page_login", "\351\200\200\345\207\272", nullptr));
        login_butten->setText(QCoreApplication::translate("page_login", "\347\231\273\345\275\225", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("page_login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        lb1->setText(QCoreApplication::translate("page_login", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("page_login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        lb2->setText(QCoreApplication::translate("page_login", "\345\257\206    \347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_login: public Ui_page_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
