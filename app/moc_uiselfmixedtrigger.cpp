/****************************************************************************
** Meta object code from reading C++ file 'uiselfmixedtrigger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "capture/uiselfmixedtrigger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiselfmixedtrigger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiSelfmixedTrigger_t {
    QByteArrayData data[6];
    char stringdata[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiSelfmixedTrigger_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiSelfmixedTrigger_t qt_meta_stringdata_UiSelfmixedTrigger = {
    {
QT_MOC_LITERAL(0, 0, 18), // "UiSelfmixedTrigger"
QT_MOC_LITERAL(1, 19, 14), // "triggerChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "levelChanged"
QT_MOC_LITERAL(4, 48, 15), // "setTriggerLevel"
QT_MOC_LITERAL(5, 64, 5) // "level"

    },
    "UiSelfmixedTrigger\0triggerChanged\0\0"
    "levelChanged\0setTriggerLevel\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiSelfmixedTrigger[] = {

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

void UiSelfmixedTrigger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiSelfmixedTrigger *_t = static_cast<UiSelfmixedTrigger *>(_o);
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
            typedef void (UiSelfmixedTrigger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UiSelfmixedTrigger::triggerChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (UiSelfmixedTrigger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UiSelfmixedTrigger::levelChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject UiSelfmixedTrigger::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UiSelfmixedTrigger.data,
      qt_meta_data_UiSelfmixedTrigger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UiSelfmixedTrigger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiSelfmixedTrigger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UiSelfmixedTrigger.stringdata))
        return static_cast<void*>(const_cast< UiSelfmixedTrigger*>(this));
    return QWidget::qt_metacast(_clname);
}

int UiSelfmixedTrigger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UiSelfmixedTrigger::triggerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void UiSelfmixedTrigger::levelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
