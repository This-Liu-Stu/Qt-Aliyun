#ifndef ALIYUN_H
#define ALIYUN_H

#include <QObject>
#include "ui_mainwindow.h" // 包含ui文件的头文件
#include <QString>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QtMqtt/qmqttclient.h>
#include <QMessageBox>
#include <QMessageBox>
#include <QMessageBox>

class ALIYUN : public QObject // 继承自QObject类
{
    Q_OBJECT
    public:
        explicit ALIYUN(Ui::MainWindow *aui, QObject *parent = nullptr); // 构造函数声明
        ~ALIYUN();

        void AliyunConnection();
        void disconnectFunction();      // 断开服务器

    public slots:
        void handleError(QMqttClient::ClientError error);
        void messageReceived(const QByteArray &message, const QMqttTopicName &topic);     // 订阅消息处理
        void parseMessage(const QByteArray &message);        // 结构体解析
        void setTagstoGet();                                // UI更新-显示
        void displayLampChange();                           // 更新执行器图标
        void publishTopicMessage(int data);       // 发布消息
        void subscribeTopic();            // 订阅


    private:
        QMqttClient *mqttClient; // 成员变量声明
        Ui::MainWindow *aui;

        //传感器参数
        int Temp;
        int Humi;
        int Light;
        bool Wind;
        bool Fun;

        // 阿里云连接要素
        QString mqttHostUrl = "iot-06z00god4hf1dy1.mqtt.iothub.aliyuncs.com";
        quint16 port = 1883; // 代理服务器端口
        QString clientId = "k0796zJ6ms6.QtDev|securemode=2,signmethod=hmacsha256,timestamp=1725191985449|"; // 连接 ID
        QString username = "QtDev&k0796zJ6ms6";   //连接名称
        QByteArray password = "907fa72dd673b127760c15d8792813f82737ffd03ccf2cb341a5954f41caa549"; // 密码
        QString subTopic = "/sys/k0796zJ6ms6/QtDev/thing/service/property/set";

};

#endif // ALIYUN_H
