/****************************************************************************
** Meta object code from reading C++ file 'labtoolcalibrationwizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/device/labtool/labtoolcalibrationwizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labtoolcalibrationwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LabToolCalibrationWizard_t {
    QByteArrayData data[10];
    char stringdata[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_LabToolCalibrationWizard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_LabToolCalibrationWizard_t qt_meta_stringdata_LabToolCalibrationWizard = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 21),
QT_MOC_LITERAL(2, 47, 0),
QT_MOC_LITERAL(3, 48, 9),
QT_MOC_LITERAL(4, 58, 23),
QT_MOC_LITERAL(5, 82, 11),
QT_MOC_LITERAL(6, 94, 3),
QT_MOC_LITERAL(7, 98, 24),
QT_MOC_LITERAL(8, 123, 23),
QT_MOC_LITERAL(9, 147, 4)
    },
    "LabToolCalibrationWizard\0handleConnectedStatus\0"
    "\0connected\0handleCalibrationFailed\0"
    "const char*\0msg\0handleCalibrationSuccess\0"
    "LabToolCalibrationData*\0data\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabToolCalibrationWizard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a,
       4,    1,   32,    2, 0x08,
       7,    1,   35,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void LabToolCalibrationWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LabToolCalibrationWizard *_t = static_cast<LabToolCalibrationWizard *>(_o);
        switch (_id) {
        case 0: _t->handleConnectedStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->handleCalibrationFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: _t->handleCalibrationSuccess((*reinterpret_cast< LabToolCalibrationData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LabToolCalibrationWizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_LabToolCalibrationWizard.data,
      qt_meta_data_LabToolCalibrationWizard,  qt_static_metacall, 0, 0}
};


const QMetaObject *LabToolCalibrationWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabToolCalibrationWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LabToolCalibrationWizard.stringdata))
        return static_cast<void*>(const_cast< LabToolCalibrationWizard*>(this));
    return QWizard::qt_metacast(_clname);
}

int LabToolCalibrationWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
