/****************************************************************************
** Meta object code from reading C++ file 'labtoolgeneratordevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "device/labtool/labtoolgeneratordevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labtoolgeneratordevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LabToolGeneratorDevice_t {
    QByteArrayData data[9];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LabToolGeneratorDevice_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LabToolGeneratorDevice_t qt_meta_stringdata_LabToolGeneratorDevice = {
    {
QT_MOC_LITERAL(0, 0, 22), // "LabToolGeneratorDevice"
QT_MOC_LITERAL(1, 23, 13), // "handleStopped"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 23), // "handleConfigurationDone"
QT_MOC_LITERAL(4, 62, 26), // "handleConfigurationFailure"
QT_MOC_LITERAL(5, 89, 11), // "const char*"
QT_MOC_LITERAL(6, 101, 3), // "msg"
QT_MOC_LITERAL(7, 105, 13), // "handleRunning"
QT_MOC_LITERAL(8, 119, 20) // "handleRunningFailure"

    },
    "LabToolGeneratorDevice\0handleStopped\0"
    "\0handleConfigurationDone\0"
    "handleConfigurationFailure\0const char*\0"
    "msg\0handleRunning\0handleRunningFailure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabToolGeneratorDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void LabToolGeneratorDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LabToolGeneratorDevice *_t = static_cast<LabToolGeneratorDevice *>(_o);
        switch (_id) {
        case 0: _t->handleStopped(); break;
        case 1: _t->handleConfigurationDone(); break;
        case 2: _t->handleConfigurationFailure((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 3: _t->handleRunning(); break;
        case 4: _t->handleRunningFailure((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LabToolGeneratorDevice::staticMetaObject = {
    { &GeneratorDevice::staticMetaObject, qt_meta_stringdata_LabToolGeneratorDevice.data,
      qt_meta_data_LabToolGeneratorDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LabToolGeneratorDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabToolGeneratorDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LabToolGeneratorDevice.stringdata))
        return static_cast<void*>(const_cast< LabToolGeneratorDevice*>(this));
    return GeneratorDevice::qt_metacast(_clname);
}

int LabToolGeneratorDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeneratorDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
