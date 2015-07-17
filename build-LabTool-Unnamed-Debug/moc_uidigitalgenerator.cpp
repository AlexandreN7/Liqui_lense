/****************************************************************************
** Meta object code from reading C++ file 'uidigitalgenerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/generator/uidigitalgenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uidigitalgenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiDigitalGenerator_t {
    QByteArrayData data[12];
    char stringdata[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_UiDigitalGenerator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_UiDigitalGenerator_t qt_meta_stringdata_UiDigitalGenerator = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 12),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 6),
QT_MOC_LITERAL(4, 40, 19),
QT_MOC_LITERAL(5, 60, 9),
QT_MOC_LITERAL(6, 70, 21),
QT_MOC_LITERAL(7, 92, 22),
QT_MOC_LITERAL(8, 115, 14),
QT_MOC_LITERAL(9, 130, 8),
QT_MOC_LITERAL(10, 139, 10),
QT_MOC_LITERAL(11, 150, 10)
    },
    "UiDigitalGenerator\0setNumStates\0\0"
    "states\0handleDeviceChanged\0addSignal\0"
    "removeSelectedSignals\0handleSelectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "updateRate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiDigitalGenerator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a,
       4,    0,   47,    2, 0x0a,
       5,    0,   48,    2, 0x08,
       6,    0,   49,    2, 0x08,
       7,    2,   50,    2, 0x08,
      11,    0,   55,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void,

       0        // eod
};

void UiDigitalGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiDigitalGenerator *_t = static_cast<UiDigitalGenerator *>(_o);
        switch (_id) {
        case 0: _t->setNumStates((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->handleDeviceChanged(); break;
        case 2: _t->addSignal(); break;
        case 3: _t->removeSelectedSignals(); break;
        case 4: _t->handleSelectionChanged((*reinterpret_cast< QItemSelection(*)>(_a[1])),(*reinterpret_cast< QItemSelection(*)>(_a[2]))); break;
        case 5: _t->updateRate(); break;
        default: ;
        }
    }
}

const QMetaObject UiDigitalGenerator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UiDigitalGenerator.data,
      qt_meta_data_UiDigitalGenerator,  qt_static_metacall, 0, 0}
};


const QMetaObject *UiDigitalGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiDigitalGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiDigitalGenerator.stringdata))
        return static_cast<void*>(const_cast< UiDigitalGenerator*>(this));
    return QWidget::qt_metacast(_clname);
}

int UiDigitalGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
