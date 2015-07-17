/****************************************************************************
** Meta object code from reading C++ file 'generatorapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/generator/generatorapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generatorapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GeneratorApp_t {
    QByteArrayData data[16];
    char stringdata[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GeneratorApp_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GeneratorApp_t qt_meta_stringdata_GeneratorApp = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 19),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 7),
QT_MOC_LITERAL(4, 42, 21),
QT_MOC_LITERAL(5, 64, 30),
QT_MOC_LITERAL(6, 95, 9),
QT_MOC_LITERAL(7, 105, 22),
QT_MOC_LITERAL(8, 128, 10),
QT_MOC_LITERAL(9, 139, 3),
QT_MOC_LITERAL(10, 143, 5),
QT_MOC_LITERAL(11, 149, 9),
QT_MOC_LITERAL(12, 159, 4),
QT_MOC_LITERAL(13, 164, 7),
QT_MOC_LITERAL(14, 172, 4),
QT_MOC_LITERAL(15, 177, 21)
    },
    "GeneratorApp\0setGeneratorEnabled\0\0"
    "enabled\0handleGeneratorClosed\0"
    "UiGeneratorArea::GeneratorType\0generator\0"
    "handleGenerateFinished\0successful\0msg\0"
    "start\0startLoop\0stop\0doStart\0loop\0"
    "changeGenerateActions\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeneratorApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08,
       4,    1,   57,    2, 0x08,
       7,    2,   60,    2, 0x08,
      10,    0,   65,    2, 0x08,
      11,    0,   66,    2, 0x08,
      12,    0,   67,    2, 0x08,
      13,    1,   68,    2, 0x08,
      15,    0,   71,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,

       0        // eod
};

void GeneratorApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GeneratorApp *_t = static_cast<GeneratorApp *>(_o);
        switch (_id) {
        case 0: _t->setGeneratorEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->handleGeneratorClosed((*reinterpret_cast< UiGeneratorArea::GeneratorType(*)>(_a[1]))); break;
        case 2: _t->handleGenerateFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->start(); break;
        case 4: _t->startLoop(); break;
        case 5: _t->stop(); break;
        case 6: _t->doStart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->changeGenerateActions(); break;
        default: ;
        }
    }
}

const QMetaObject GeneratorApp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GeneratorApp.data,
      qt_meta_data_GeneratorApp,  qt_static_metacall, 0, 0}
};


const QMetaObject *GeneratorApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeneratorApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GeneratorApp.stringdata))
        return static_cast<void*>(const_cast< GeneratorApp*>(this));
    return QObject::qt_metacast(_clname);
}

int GeneratorApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
