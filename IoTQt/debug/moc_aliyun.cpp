/****************************************************************************
** Meta object code from reading C++ file 'aliyun.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Cloud/aliyun.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aliyun.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ALIYUN_t {
    QByteArrayData data[15];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ALIYUN_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ALIYUN_t qt_meta_stringdata_ALIYUN = {
    {
QT_MOC_LITERAL(0, 0, 6), // "ALIYUN"
QT_MOC_LITERAL(1, 7, 11), // "handleError"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 24), // "QMqttClient::ClientError"
QT_MOC_LITERAL(4, 45, 5), // "error"
QT_MOC_LITERAL(5, 51, 15), // "messageReceived"
QT_MOC_LITERAL(6, 67, 7), // "message"
QT_MOC_LITERAL(7, 75, 14), // "QMqttTopicName"
QT_MOC_LITERAL(8, 90, 5), // "topic"
QT_MOC_LITERAL(9, 96, 12), // "parseMessage"
QT_MOC_LITERAL(10, 109, 12), // "setTagstoGet"
QT_MOC_LITERAL(11, 122, 17), // "displayLampChange"
QT_MOC_LITERAL(12, 140, 19), // "publishTopicMessage"
QT_MOC_LITERAL(13, 160, 4), // "data"
QT_MOC_LITERAL(14, 165, 14) // "subscribeTopic"

    },
    "ALIYUN\0handleError\0\0QMqttClient::ClientError\0"
    "error\0messageReceived\0message\0"
    "QMqttTopicName\0topic\0parseMessage\0"
    "setTagstoGet\0displayLampChange\0"
    "publishTopicMessage\0data\0subscribeTopic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ALIYUN[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       5,    2,   52,    2, 0x0a /* Public */,
       9,    1,   57,    2, 0x0a /* Public */,
      10,    0,   60,    2, 0x0a /* Public */,
      11,    0,   61,    2, 0x0a /* Public */,
      12,    1,   62,    2, 0x0a /* Public */,
      14,    0,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 7,    6,    8,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void ALIYUN::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ALIYUN *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        //case 0: _t->handleError((*reinterpret_cast< QMqttClient::ClientError(*)>(_a[1]))); break;
        case 1: _t->messageReceived((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QMqttTopicName(*)>(_a[2]))); break;
        case 2: _t->parseMessage((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->setTagstoGet(); break;
        case 4: _t->displayLampChange(); break;
        case 5: _t->publishTopicMessage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->subscribeTopic(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttClient::ClientError >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ALIYUN::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ALIYUN.data,
    qt_meta_data_ALIYUN,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ALIYUN::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ALIYUN::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ALIYUN.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ALIYUN::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
