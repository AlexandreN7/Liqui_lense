/****************************************************************************
** Meta object code from reading C++ file 'uimainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "uimainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uimainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiMainWindow_t {
    QByteArrayData data[15];
    char stringdata[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiMainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiMainWindow_t qt_meta_stringdata_UiMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "UiMainWindow"
QT_MOC_LITERAL(1, 13, 16), // "handleTabChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "index"
QT_MOC_LITERAL(4, 37, 12), // "changeDevice"
QT_MOC_LITERAL(5, 50, 18), // "changeDeviceStatus"
QT_MOC_LITERAL(6, 69, 7), // "Device*"
QT_MOC_LITERAL(7, 77, 6), // "device"
QT_MOC_LITERAL(8, 84, 17), // "changeColorScheme"
QT_MOC_LITERAL(9, 102, 10), // "newProject"
QT_MOC_LITERAL(10, 113, 11), // "openProject"
QT_MOC_LITERAL(11, 125, 11), // "saveProject"
QT_MOC_LITERAL(12, 137, 13), // "saveProjectAs"
QT_MOC_LITERAL(13, 151, 10), // "parameters"
QT_MOC_LITERAL(14, 162, 5) // "about"

    },
    "UiMainWindow\0handleTabChanged\0\0index\0"
    "changeDevice\0changeDeviceStatus\0Device*\0"
    "device\0changeColorScheme\0newProject\0"
    "openProject\0saveProject\0saveProjectAs\0"
    "parameters\0about"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UiMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiMainWindow *_t = static_cast<UiMainWindow *>(_o);
        switch (_id) {
        case 0: _t->handleTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->changeDevice(); break;
        case 2: _t->changeDeviceStatus((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 3: _t->changeColorScheme(); break;
        case 4: _t->newProject(); break;
        case 5: _t->openProject(); break;
        case 6: _t->saveProject(); break;
        case 7: _t->saveProjectAs(); break;
        case 8: _t->parameters(); break;
        case 9: _t->about(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        }
    }
}

const QMetaObject UiMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_UiMainWindow.data,
      qt_meta_data_UiMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UiMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UiMainWindow.stringdata))
        return static_cast<void*>(const_cast< UiMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int UiMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
