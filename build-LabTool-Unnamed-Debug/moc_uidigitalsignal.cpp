/****************************************************************************
** Meta object code from reading C++ file 'uidigitalsignal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/capture/uidigitalsignal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uidigitalsignal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiDigitalSignal_t {
    QByteArrayData data[10];
    char stringdata[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_UiDigitalSignal_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_UiDigitalSignal_t qt_meta_stringdata_UiDigitalSignal = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 22),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 5),
QT_MOC_LITERAL(4, 46, 3),
QT_MOC_LITERAL(5, 50, 3),
QT_MOC_LITERAL(6, 54, 7),
QT_MOC_LITERAL(7, 62, 7),
QT_MOC_LITERAL(8, 70, 10),
QT_MOC_LITERAL(9, 81, 20)
    },
    "UiDigitalSignal\0cycleMeasurmentChanged\0"
    "\0start\0mid\0end\0highLow\0mActive\0"
    "triggerSet\0handleTriggerChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiDigitalSignal[] = {

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
       1,    5,   29,    2, 0x06,
       8,    0,   40,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    0,   41,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,    6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void UiDigitalSignal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiDigitalSignal *_t = static_cast<UiDigitalSignal *>(_o);
        switch (_id) {
        case 0: _t->cycleMeasurmentChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 1: _t->triggerSet(); break;
        case 2: _t->handleTriggerChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UiDigitalSignal::*_t)(double , double , double , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UiDigitalSignal::cycleMeasurmentChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (UiDigitalSignal::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UiDigitalSignal::triggerSet)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject UiDigitalSignal::staticMetaObject = {
    { &UiSimpleAbstractSignal::staticMetaObject, qt_meta_stringdata_UiDigitalSignal.data,
      qt_meta_data_UiDigitalSignal,  qt_static_metacall, 0, 0}
};


const QMetaObject *UiDigitalSignal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiDigitalSignal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiDigitalSignal.stringdata))
        return static_cast<void*>(const_cast< UiDigitalSignal*>(this));
    return UiSimpleAbstractSignal::qt_metacast(_clname);
}

int UiDigitalSignal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UiSimpleAbstractSignal::qt_metacall(_c, _id, _a);
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
void UiDigitalSignal::cycleMeasurmentChanged(double _t1, double _t2, double _t3, bool _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UiDigitalSignal::triggerSet()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
