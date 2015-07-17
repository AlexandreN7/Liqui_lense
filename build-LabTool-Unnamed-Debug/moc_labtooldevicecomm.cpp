/****************************************************************************
** Meta object code from reading C++ file 'labtooldevicecomm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/device/labtool/labtooldevicecomm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labtooldevicecomm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LabToolDeviceComm_t {
    QByteArrayData data[29];
    char stringdata[460];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_LabToolDeviceComm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_LabToolDeviceComm_t qt_meta_stringdata_LabToolDeviceComm = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 16),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 9),
QT_MOC_LITERAL(4, 46, 14),
QT_MOC_LITERAL(5, 61, 24),
QT_MOC_LITERAL(6, 86, 22),
QT_MOC_LITERAL(7, 109, 22),
QT_MOC_LITERAL(8, 132, 8),
QT_MOC_LITERAL(9, 141, 4),
QT_MOC_LITERAL(10, 146, 7),
QT_MOC_LITERAL(11, 154, 17),
QT_MOC_LITERAL(12, 172, 16),
QT_MOC_LITERAL(13, 189, 13),
QT_MOC_LITERAL(14, 203, 12),
QT_MOC_LITERAL(15, 216, 10),
QT_MOC_LITERAL(16, 227, 13),
QT_MOC_LITERAL(17, 241, 11),
QT_MOC_LITERAL(18, 253, 3),
QT_MOC_LITERAL(19, 257, 26),
QT_MOC_LITERAL(20, 284, 16),
QT_MOC_LITERAL(21, 301, 26),
QT_MOC_LITERAL(22, 328, 28),
QT_MOC_LITERAL(23, 357, 16),
QT_MOC_LITERAL(24, 374, 18),
QT_MOC_LITERAL(25, 393, 17),
QT_MOC_LITERAL(26, 411, 18),
QT_MOC_LITERAL(27, 430, 23),
QT_MOC_LITERAL(28, 454, 4)
    },
    "LabToolDeviceComm\0connectionStatus\0\0"
    "connected\0captureStopped\0"
    "captureConfigurationDone\0"
    "captureReceivedSamples\0LabToolDeviceTransfer*\0"
    "transfer\0size\0trigger\0digitalTrigSample\0"
    "analogTrigSample\0activeDigital\0"
    "activeAnalog\0signalTrim\0captureFailed\0"
    "const char*\0msg\0captureConfigurationFailed\0"
    "generatorStopped\0generatorConfigurationDone\0"
    "generatorConfigurationFailed\0"
    "generatorRunning\0generatorRunFailed\0"
    "calibrationFailed\0calibrationSuccess\0"
    "LabToolCalibrationData*\0data\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabToolDeviceComm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06,
       4,    0,   82,    2, 0x06,
       5,    0,   83,    2, 0x06,
       6,    8,   84,    2, 0x06,
      16,    1,  101,    2, 0x06,
      19,    1,  104,    2, 0x06,
      20,    0,  107,    2, 0x06,
      21,    0,  108,    2, 0x06,
      22,    1,  109,    2, 0x06,
      23,    0,  112,    2, 0x06,
      24,    1,  113,    2, 0x06,
      25,    1,  116,    2, 0x06,
      26,    1,  119,    2, 0x06,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::Int,    8,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 27,   28,

       0        // eod
};

void LabToolDeviceComm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LabToolDeviceComm *_t = static_cast<LabToolDeviceComm *>(_o);
        switch (_id) {
        case 0: _t->connectionStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->captureStopped(); break;
        case 2: _t->captureConfigurationDone(); break;
        case 3: _t->captureReceivedSamples((*reinterpret_cast< LabToolDeviceTransfer*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< uint(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8]))); break;
        case 4: _t->captureFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 5: _t->captureConfigurationFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 6: _t->generatorStopped(); break;
        case 7: _t->generatorConfigurationDone(); break;
        case 8: _t->generatorConfigurationFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 9: _t->generatorRunning(); break;
        case 10: _t->generatorRunFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 11: _t->calibrationFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 12: _t->calibrationSuccess((*reinterpret_cast< LabToolCalibrationData*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LabToolDeviceComm::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::connectionStatus)) {
                *result = 0;
            }
        }
        {
            typedef void (LabToolDeviceComm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::captureStopped)) {
                *result = 1;
            }
        }
        {
            typedef void (LabToolDeviceComm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::captureConfigurationDone)) {
                *result = 2;
            }
        }
        {
            typedef void (LabToolDeviceComm::*_t)(LabToolDeviceTransfer * , unsigned int , unsigned int , unsigned int , unsigned int , unsigned int , unsigned int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::captureReceivedSamples)) {
                *result = 3;
            }
        }
        {
            typedef void (LabToolDeviceComm::*_t)(const char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::captureFailed)) {
                *result = 4;
            }
        }
        {
            typedef void (LabToolDeviceComm::*_t)(const char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::captureConfigurationFailed)) {
                *result = 5;
            }
        }
        {
            typedef void (LabToolDeviceComm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::generatorStopped)) {
                *result = 6;
            }
        }
        {
            typedef void (LabToolDeviceComm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::generatorConfigurationDone)) {
                *result = 7;
            }
        }
        {
            typedef void (LabToolDeviceComm::*_t)(const char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::generatorConfigurationFailed)) {
                *result = 8;
            }
        }
        {
            typedef void (LabToolDeviceComm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::generatorRunning)) {
                *result = 9;
            }
        }
        {
            typedef void (LabToolDeviceComm::*_t)(const char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::generatorRunFailed)) {
                *result = 10;
            }
        }
        {
            typedef void (LabToolDeviceComm::*_t)(const char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::calibrationFailed)) {
                *result = 11;
            }
        }
        {
            typedef void (LabToolDeviceComm::*_t)(LabToolCalibrationData * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabToolDeviceComm::calibrationSuccess)) {
                *result = 12;
            }
        }
    }
}

const QMetaObject LabToolDeviceComm::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LabToolDeviceComm.data,
      qt_meta_data_LabToolDeviceComm,  qt_static_metacall, 0, 0}
};


const QMetaObject *LabToolDeviceComm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabToolDeviceComm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LabToolDeviceComm.stringdata))
        return static_cast<void*>(const_cast< LabToolDeviceComm*>(this));
    return QObject::qt_metacast(_clname);
}

int LabToolDeviceComm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void LabToolDeviceComm::connectionStatus(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LabToolDeviceComm::captureStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void LabToolDeviceComm::captureConfigurationDone()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void LabToolDeviceComm::captureReceivedSamples(LabToolDeviceTransfer * _t1, unsigned int _t2, unsigned int _t3, unsigned int _t4, unsigned int _t5, unsigned int _t6, unsigned int _t7, int _t8)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LabToolDeviceComm::captureFailed(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LabToolDeviceComm::captureConfigurationFailed(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LabToolDeviceComm::generatorStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void LabToolDeviceComm::generatorConfigurationDone()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void LabToolDeviceComm::generatorConfigurationFailed(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LabToolDeviceComm::generatorRunning()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void LabToolDeviceComm::generatorRunFailed(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void LabToolDeviceComm::calibrationFailed(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void LabToolDeviceComm::calibrationSuccess(LabToolCalibrationData * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
