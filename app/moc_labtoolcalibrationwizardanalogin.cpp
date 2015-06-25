/****************************************************************************
** Meta object code from reading C++ file 'labtoolcalibrationwizardanalogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "device/labtool/labtoolcalibrationwizardanalogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labtoolcalibrationwizardanalogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LabToolCalibrationWizardAnalogIn_t {
    QByteArrayData data[9];
    char stringdata[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LabToolCalibrationWizardAnalogIn_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LabToolCalibrationWizardAnalogIn_t qt_meta_stringdata_LabToolCalibrationWizardAnalogIn = {
    {
QT_MOC_LITERAL(0, 0, 32), // "LabToolCalibrationWizardAnalogIn"
QT_MOC_LITERAL(1, 33, 18), // "recalibrateClicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 23), // "handleCalibrationFailed"
QT_MOC_LITERAL(4, 77, 11), // "const char*"
QT_MOC_LITERAL(5, 89, 3), // "msg"
QT_MOC_LITERAL(6, 93, 24), // "handleCalibrationSuccess"
QT_MOC_LITERAL(7, 118, 23), // "LabToolCalibrationData*"
QT_MOC_LITERAL(8, 142, 4) // "data"

    },
    "LabToolCalibrationWizardAnalogIn\0"
    "recalibrateClicked\0\0handleCalibrationFailed\0"
    "const char*\0msg\0handleCalibrationSuccess\0"
    "LabToolCalibrationData*\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabToolCalibrationWizardAnalogIn[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void LabToolCalibrationWizardAnalogIn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LabToolCalibrationWizardAnalogIn *_t = static_cast<LabToolCalibrationWizardAnalogIn *>(_o);
        switch (_id) {
        case 0: _t->recalibrateClicked(); break;
        case 1: _t->handleCalibrationFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: _t->handleCalibrationSuccess((*reinterpret_cast< LabToolCalibrationData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LabToolCalibrationWizardAnalogIn::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_LabToolCalibrationWizardAnalogIn.data,
      qt_meta_data_LabToolCalibrationWizardAnalogIn,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LabToolCalibrationWizardAnalogIn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabToolCalibrationWizardAnalogIn::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LabToolCalibrationWizardAnalogIn.stringdata))
        return static_cast<void*>(const_cast< LabToolCalibrationWizardAnalogIn*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int LabToolCalibrationWizardAnalogIn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
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
