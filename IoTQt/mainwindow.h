#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Cloud/aliyun.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void WateronToggled(bool checked);
    void FunonToggled(bool checked);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    ALIYUN *myAliyun = new ALIYUN(ui ,this);
};
#endif // MAINWINDOW_H
