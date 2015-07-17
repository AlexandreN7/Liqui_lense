/****************************************************************************
** Meta object code from reading C++ file 'uieditanalog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/generator/uieditanalog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uieditanalog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiEditAnalog_t {
    QByteArrayData data[8];
    char stringdata[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_UiEditAnalog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_UiEditAnalog_t qt_meta_stringdata_UiEditAnalog = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 16),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 10),
QT_MOC_LITERAL(4, 42, 14),
QT_MOC_LITERAL(5, 57, 11),
QT_MOC_LITERAL(6, 69, 16),
QT_MOC_LITERAL(7, 86, 1)
    },
    "UiEditAnalog\0handleNameEdited\0\0"
    "updateRate\0changeWaveform\0selectedIdx\0"
    "amplitudeChanged\0v\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiEditAnalog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08,
       3,    0,   35,    2, 0x08,
       4,    1,   36,    2, 0x08,
       6,    1,   39,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    7,

       0        // eod
};

void UiEditAnalog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiEditAnalog *_t = static_cast<UiEditAnalog *>(_o);
        switch (_id) {
        case 0: _t->handleNameEdited(); break;
        case 1: _t->updateRate(); break;
        case 2: _t->changeWaveform((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->amplitudeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject UiEditAnalog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UiEditAnalog.data,
      qt_meta_data_UiEditAnalog,  qt_static_metacall, 0, 0}
};


const QMetaObject *UiEditAnalog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiEditAnalog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiEditAnalog.stringdata))
        return static_cast<void*>(const_cast< UiEditAnalog*>(this));
    return QWidget::qt_metacast(_clname);
}

int UiEditAnalog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
