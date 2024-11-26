/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>
#include "switchbutton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *Temp;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *Humi;
    SwitchButton *Fun;
    SwitchButton *Water;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *connectimage;
    QLabel *connect;
    QLabel *label_4;
    QLabel *label_11;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 545);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 220, 311, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        Temp = new QLabel(horizontalLayoutWidget);
        Temp->setObjectName(QString::fromUtf8("Temp"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(15);
        Temp->setFont(font1);
        Temp->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(Temp);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(100, 360, 311, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_3);

        Humi = new QLabel(horizontalLayoutWidget_3);
        Humi->setObjectName(QString::fromUtf8("Humi"));
        Humi->setFont(font1);
        Humi->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(Humi);

        Fun = new SwitchButton(centralwidget);
        Fun->setObjectName(QString::fromUtf8("Fun"));
        Fun->setGeometry(QRect(560, 230, 161, 71));
        Water = new SwitchButton(centralwidget);
        Water->setObjectName(QString::fromUtf8("Water"));
        Water->setGeometry(QRect(560, 370, 161, 71));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(560, 190, 81, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(560, 330, 81, 41));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(490, 230, 61, 61));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/image/equip/image/equip/Fun.png);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(490, 370, 61, 61));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/image/equip/image/equip/Water.png);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 230, 61, 61));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/image/equip/image/equip/Temp.png);"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 370, 61, 61));
        label_9->setStyleSheet(QString::fromUtf8("image: url(:/image/equip/image/equip/Humi.png);"));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(540, 70, 160, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        connectimage = new QLabel(horizontalLayoutWidget_2);
        connectimage->setObjectName(QString::fromUtf8("connectimage"));
        connectimage->setFont(font);
        connectimage->setStyleSheet(QString::fromUtf8("image: url(:/image/connect/image/connect/no.png);"));

        horizontalLayout_2->addWidget(connectimage);

        connect = new QLabel(horizontalLayoutWidget_2);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setFont(font);
        connect->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(connect);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 291, 201));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/P1312535_06d94e634bc62dc833a95b01df7d3232.jpg);"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(330, 30, 151, 141));
        label_11->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/aaa.jpg);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246\357\274\232", nullptr));
        Temp->setText(QCoreApplication::translate("MainWindow", "NULL", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246\357\274\232", nullptr));
        Humi->setText(QCoreApplication::translate("MainWindow", "NULL", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\351\243\216\346\211\207\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\260\264\346\263\265\357\274\232", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        connectimage->setText(QString());
        connect->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\346\226\255\345\274\200", nullptr));
        label_4->setText(QString());
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
