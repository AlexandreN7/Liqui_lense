/****************************************************************************
** Meta object code from reading C++ file 'uianalogtrigger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "capture/uianalogtrigger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uianalogtrigger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiAnalogTrigger_t {
    QByteArrayData data[6];
    char stringdata[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiAnalogTrigger_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiAnalogTrigger_t qt_meta_stringdata_UiAnalogTrigger = {
    {
QT_MOC_LITERAL(0, 0, 15), // "UiAnalogTrigger"
QT_MOC_LITERAL(1, 16, 14), // "triggerChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "levelChanged"
QT_MOC_LITERAL(4, 45, 15), // "setTriggerLevel"
QT_MOC_LITERAL(5, 61, 5) // "level"

    },
    "UiAnalogTrigger\0triggerChanged\0\0"
    "levelChanged\0setTriggerLevel\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiAnalogTrigger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void UiAnalogTrigger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiAnalogTrigger *_t = static_cast<UiAnalogTrigger *>(_o);
        switch (_id) {
        case 0: _t->triggerChanged(); break;
        case 1: _t->levelChanged(); break;
        case 2: _t->setTriggerLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UiAnalogTrigger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UiAnalogTrigger::triggerChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (UiAnalogTrigger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UiAnalogTrigger::levelChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject UiAnalogTrigger::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UiAnalogTrigger.data,
      qt_meta_data_UiAnalogTrigger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UiAnalogTrigger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiAnalogTrigger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UiAnalogTrigger.stringdata))
        return static_cast<void*>(const_cast< UiAnalogTrigger*>(this));
    return QWidget::qt_metacast(_clname);
}

int UiAnalogTrigger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void UiAnalogTrigger::triggerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void UiAnalogTrigger::levelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
