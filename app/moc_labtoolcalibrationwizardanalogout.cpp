/****************************************************************************
** Meta object code from reading C++ file 'labtoolcalibrationwizardanalogout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "device/labtool/labtoolcalibrationwizardanalogout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labtoolcalibrationwizardanalogout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LabToolCalibrationWizardAnalogOut_t {
    QByteArrayData data[9];
    char stringdata[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LabToolCalibrationWizardAnalogOut_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LabToolCalibrationWizardAnalogOut_t qt_meta_stringdata_LabToolCalibrationWizardAnalogOut = {
    {
QT_MOC_LITERAL(0, 0, 33), // "LabToolCalibrationWizardAnalo..."
QT_MOC_LITERAL(1, 34, 16), // "nextValueClicked"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 23), // "handleCalibrationFailed"
QT_MOC_LITERAL(4, 76, 11), // "const char*"
QT_MOC_LITERAL(5, 88, 3), // "msg"
QT_MOC_LITERAL(6, 92, 24), // "handleCalibrationSuccess"
QT_MOC_LITERAL(7, 117, 23), // "LabToolCalibrationData*"
QT_MOC_LITERAL(8, 141, 4) // "data"

    },
    "LabToolCalibrationWizardAnalogOut\0"
    "nextValueClicked\0\0handleCalibrationFailed\0"
    "const char*\0msg\0handleCalibrationSuccess\0"
    "LabToolCalibrationData*\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabToolCalibrationWizardAnalogOut[] = {

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

void LabToolCalibrationWizardAnalogOut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LabToolCalibrationWizardAnalogOut *_t = static_cast<LabToolCalibrationWizardAnalogOut *>(_o);
        switch (_id) {
        case 0: _t->nextValueClicked(); break;
        case 1: _t->handleCalibrationFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: _t->handleCalibrationSuccess((*reinterpret_cast< LabToolCalibrationData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LabToolCalibrationWizardAnalogOut::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_LabToolCalibrationWizardAnalogOut.data,
      qt_meta_data_LabToolCalibrationWizardAnalogOut,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LabToolCalibrationWizardAnalogOut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabToolCalibrationWizardAnalogOut::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LabToolCalibrationWizardAnalogOut.stringdata))
        return static_cast<void*>(const_cast< LabToolCalibrationWizardAnalogOut*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int LabToolCalibrationWizardAnalogOut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
