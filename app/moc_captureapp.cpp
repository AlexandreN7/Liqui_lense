/****************************************************************************
** Meta object code from reading C++ file 'captureapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "capture/captureapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'captureapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CaptureApp_t {
    QByteArrayData data[15];
    char stringdata[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CaptureApp_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CaptureApp_t qt_meta_stringdata_CaptureApp = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CaptureApp"
QT_MOC_LITERAL(1, 11, 5), // "start"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 15), // "startContinuous"
QT_MOC_LITERAL(4, 34, 4), // "stop"
QT_MOC_LITERAL(5, 39, 9), // "autofocus"
QT_MOC_LITERAL(6, 49, 21), // "handleCaptureFinished"
QT_MOC_LITERAL(7, 71, 10), // "successful"
QT_MOC_LITERAL(8, 82, 3), // "msg"
QT_MOC_LITERAL(9, 86, 15), // "triggerSettings"
QT_MOC_LITERAL(10, 102, 19), // "calibrationSettings"
QT_MOC_LITERAL(11, 122, 18), // "selectSignalsToAdd"
QT_MOC_LITERAL(12, 141, 10), // "exportData"
QT_MOC_LITERAL(13, 152, 17), // "sampleRateChanged"
QT_MOC_LITERAL(14, 170, 9) // "rateIndex"

    },
    "CaptureApp\0start\0\0startContinuous\0"
    "stop\0autofocus\0handleCaptureFinished\0"
    "successful\0msg\0triggerSettings\0"
    "calibrationSettings\0selectSignalsToAdd\0"
    "exportData\0sampleRateChanged\0rateIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaptureApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    2,   68,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void CaptureApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CaptureApp *_t = static_cast<CaptureApp *>(_o);
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->startContinuous(); break;
        case 2: _t->stop(); break;
        case 3: _t->autofocus(); break;
        case 4: _t->handleCaptureFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->triggerSettings(); break;
        case 6: _t->calibrationSettings(); break;
        case 7: _t->selectSignalsToAdd(); break;
        case 8: _t->exportData(); break;
        case 9: _t->sampleRateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CaptureApp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CaptureApp.data,
      qt_meta_data_CaptureApp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CaptureApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureApp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureApp.stringdata))
        return static_cast<void*>(const_cast< CaptureApp*>(this));
    return QObject::qt_metacast(_clname);
}

int CaptureApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
