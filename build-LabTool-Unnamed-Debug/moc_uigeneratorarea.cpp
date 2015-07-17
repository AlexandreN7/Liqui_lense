/****************************************************************************
** Meta object code from reading C++ file 'uigeneratorarea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/generator/uigeneratorarea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uigeneratorarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiGeneratorArea_t {
    QByteArrayData data[7];
    char stringdata[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_UiGeneratorArea_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_UiGeneratorArea_t qt_meta_stringdata_UiGeneratorArea = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 15),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 30),
QT_MOC_LITERAL(4, 64, 9),
QT_MOC_LITERAL(5, 74, 19),
QT_MOC_LITERAL(6, 94, 14)
    },
    "UiGeneratorArea\0generatorClosed\0\0"
    "UiGeneratorArea::GeneratorType\0generator\0"
    "handleDeviceChanged\0tileSubWindows\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiGeneratorArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x0a,
       6,    0,   33,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UiGeneratorArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiGeneratorArea *_t = static_cast<UiGeneratorArea *>(_o);
        switch (_id) {
        case 0: _t->generatorClosed((*reinterpret_cast< UiGeneratorArea::GeneratorType(*)>(_a[1]))); break;
        case 1: _t->handleDeviceChanged(); break;
        case 2: _t->tileSubWindows(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UiGeneratorArea::*_t)(UiGeneratorArea::GeneratorType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UiGeneratorArea::generatorClosed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject UiGeneratorArea::staticMetaObject = {
    { &QMdiArea::staticMetaObject, qt_meta_stringdata_UiGeneratorArea.data,
      qt_meta_data_UiGeneratorArea,  qt_static_metacall, 0, 0}
};


const QMetaObject *UiGeneratorArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiGeneratorArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiGeneratorArea.stringdata))
        return static_cast<void*>(const_cast< UiGeneratorArea*>(this));
    return QMdiArea::qt_metacast(_clname);
}

int UiGeneratorArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMdiArea::qt_metacall(_c, _id, _a);
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
void UiGeneratorArea::generatorClosed(UiGeneratorArea::GeneratorType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
