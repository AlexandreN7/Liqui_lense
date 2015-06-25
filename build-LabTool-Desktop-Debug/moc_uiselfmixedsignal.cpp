/****************************************************************************
** Meta object code from reading C++ file 'uiselfmixedsignal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/capture/uiselfmixedsignal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiselfmixedsignal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiSelfmixedSignal_t {
    QByteArrayData data[17];
    char stringdata[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiSelfmixedSignal_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiSelfmixedSignal_t qt_meta_stringdata_UiSelfmixedSignal = {
    {
QT_MOC_LITERAL(0, 0, 17), // "UiSelfmixedSignal"
QT_MOC_LITERAL(1, 18, 17), // "measurmentChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "QList<double>"
QT_MOC_LITERAL(4, 51, 5), // "level"
QT_MOC_LITERAL(5, 57, 2), // "pk"
QT_MOC_LITERAL(6, 60, 6), // "active"
QT_MOC_LITERAL(7, 67, 10), // "triggerSet"
QT_MOC_LITERAL(8, 78, 10), // "nameEdited"
QT_MOC_LITERAL(9, 89, 13), // "disableSignal"
QT_MOC_LITERAL(10, 103, 13), // "changeVPerDiv"
QT_MOC_LITERAL(11, 117, 1), // "v"
QT_MOC_LITERAL(12, 119, 14), // "changeTriggers"
QT_MOC_LITERAL(13, 134, 25), // "handleTriggerLevelChanged"
QT_MOC_LITERAL(14, 160, 21), // "handleCouplingChanged"
QT_MOC_LITERAL(15, 182, 16), // "QAbstractButton*"
QT_MOC_LITERAL(16, 199, 3) // "btn"

    },
    "UiSelfmixedSignal\0measurmentChanged\0"
    "\0QList<double>\0level\0pk\0active\0"
    "triggerSet\0nameEdited\0disableSignal\0"
    "changeVPerDiv\0v\0changeTriggers\0"
    "handleTriggerLevelChanged\0"
    "handleCouplingChanged\0QAbstractButton*\0"
    "btn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiSelfmixedSignal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06 /* Public */,
       7,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    1,   64,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,
      13,    0,   68,    2, 0x08 /* Private */,
      14,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void UiSelfmixedSignal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiSelfmixedSignal *_t = static_cast<UiSelfmixedSignal *>(_o);
        switch (_id) {
        case 0: _t->measurmentChanged((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->triggerSet(); break;
        case 2: _t->nameEdited(); break;
        case 3: _t->disableSignal(); break;
        case 4: _t->changeVPerDiv((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->changeTriggers(); break;
        case 6: _t->handleTriggerLevelChanged(); break;
        case 7: _t->handleCouplingChanged((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UiSelfmixedSignal::*_t)(QList<double> , QList<double> , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UiSelfmixedSignal::measurmentChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (UiSelfmixedSignal::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UiSelfmixedSignal::triggerSet)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject UiSelfmixedSignal::staticMetaObject = {
    { &UiAbstractSignal::staticMetaObject, qt_meta_stringdata_UiSelfmixedSignal.data,
      qt_meta_data_UiSelfmixedSignal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UiSelfmixedSignal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiSelfmixedSignal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UiSelfmixedSignal.stringdata))
        return static_cast<void*>(const_cast< UiSelfmixedSignal*>(this));
    return UiAbstractSignal::qt_metacast(_clname);
}

int UiSelfmixedSignal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UiAbstractSignal::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void UiSelfmixedSignal::measurmentChanged(QList<double> _t1, QList<double> _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UiSelfmixedSignal::triggerSet()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
