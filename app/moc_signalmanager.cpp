/****************************************************************************
** Meta object code from reading C++ file 'signalmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "capture/signalmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signalmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SignalManager_t {
    QByteArrayData data[22];
    char stringdata[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SignalManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SignalManager_t qt_meta_stringdata_SignalManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SignalManager"
QT_MOC_LITERAL(1, 14, 12), // "signalsAdded"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "signalsRemoved"
QT_MOC_LITERAL(4, 43, 24), // "digitalMeasurmentChanged"
QT_MOC_LITERAL(5, 68, 5), // "start"
QT_MOC_LITERAL(6, 74, 3), // "mid"
QT_MOC_LITERAL(7, 78, 3), // "end"
QT_MOC_LITERAL(8, 82, 7), // "highLow"
QT_MOC_LITERAL(9, 90, 7), // "mActive"
QT_MOC_LITERAL(10, 98, 23), // "analogMeasurmentChanged"
QT_MOC_LITERAL(11, 122, 13), // "QList<double>"
QT_MOC_LITERAL(12, 136, 5), // "level"
QT_MOC_LITERAL(13, 142, 2), // "pk"
QT_MOC_LITERAL(14, 145, 6), // "active"
QT_MOC_LITERAL(15, 152, 26), // "selfmixedMeasurmentChanged"
QT_MOC_LITERAL(16, 179, 11), // "closeSignal"
QT_MOC_LITERAL(17, 191, 17), // "UiAbstractSignal*"
QT_MOC_LITERAL(18, 209, 1), // "s"
QT_MOC_LITERAL(19, 211, 18), // "removeDeviceSignal"
QT_MOC_LITERAL(20, 230, 23), // "handleDigitalTriggerSet"
QT_MOC_LITERAL(21, 254, 22) // "handleAnalogTriggerSet"

    },
    "SignalManager\0signalsAdded\0\0signalsRemoved\0"
    "digitalMeasurmentChanged\0start\0mid\0"
    "end\0highLow\0mActive\0analogMeasurmentChanged\0"
    "QList<double>\0level\0pk\0active\0"
    "selfmixedMeasurmentChanged\0closeSignal\0"
    "UiAbstractSignal*\0s\0removeDeviceSignal\0"
    "handleDigitalTriggerSet\0handleAnalogTriggerSet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SignalManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    5,   61,    2, 0x06 /* Public */,
      10,    3,   72,    2, 0x06 /* Public */,
      15,    3,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    2,   86,    2, 0x08 /* Private */,
      16,    1,   91,    2, 0x28 /* Private | MethodCloned */,
      20,    0,   94,    2, 0x08 /* Private */,
      21,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool,    5,    6,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11, QMetaType::Bool,   12,   13,   14,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11, QMetaType::Bool,   12,   13,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17, QMetaType::Bool,   18,   19,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SignalManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignalManager *_t = static_cast<SignalManager *>(_o);
        switch (_id) {
        case 0: _t->signalsAdded(); break;
        case 1: _t->signalsRemoved(); break;
        case 2: _t->digitalMeasurmentChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 3: _t->analogMeasurmentChanged((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->selfmixedMeasurmentChanged((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->closeSignal((*reinterpret_cast< UiAbstractSignal*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->closeSignal((*reinterpret_cast< UiAbstractSignal*(*)>(_a[1]))); break;
        case 7: _t->handleDigitalTriggerSet(); break;
        case 8: _t->handleAnalogTriggerSet(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UiAbstractSignal* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UiAbstractSignal* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SignalManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalManager::signalsAdded)) {
                *result = 0;
            }
        }
        {
            typedef void (SignalManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalManager::signalsRemoved)) {
                *result = 1;
            }
        }
        {
            typedef void (SignalManager::*_t)(double , double , double , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalManager::digitalMeasurmentChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (SignalManager::*_t)(QList<double> , QList<double> , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalManager::analogMeasurmentChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (SignalManager::*_t)(QList<double> , QList<double> , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalManager::selfmixedMeasurmentChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject SignalManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SignalManager.data,
      qt_meta_data_SignalManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SignalManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignalManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SignalManager.stringdata))
        return static_cast<void*>(const_cast< SignalManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SignalManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SignalManager::signalsAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SignalManager::signalsRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SignalManager::digitalMeasurmentChanged(double _t1, double _t2, double _t3, bool _t4, bool _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SignalManager::analogMeasurmentChanged(QList<double> _t1, QList<double> _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SignalManager::selfmixedMeasurmentChanged(QList<double> _t1, QList<double> _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
