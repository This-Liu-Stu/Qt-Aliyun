#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPushButton>
#include "chartwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    myAliyun->AliyunConnection();      //连接阿里云

    connect(ui->Fun, SIGNAL(statusChanged(bool)), this, SLOT(FunonToggled(bool)));
    connect(ui->Water, SIGNAL(statusChanged(bool)), this, SLOT(WateronToggled(bool)));
}

MainWindow::~MainWindow()
{
    delete myAliyun;  // 释放内存
    delete ui;
}

void MainWindow::FunonToggled(bool checked)
{
    if (checked) {
        qDebug() << "Fun is unchecked";
        myAliyun->publishTopicMessage(1);
    } else {
        qDebug() << "Fun is checked";
        myAliyun->publishTopicMessage(0);
    }
}

void MainWindow::WateronToggled(bool checked)
{
    if (checked) {
        qDebug() << "Water is unchecked";
        myAliyun->publishTopicMessage(3);
    } else {
        qDebug() << "Water is checked";
        myAliyun->publishTopicMessage(2);
    }
}

