/****************************************************************************
** Meta object code from reading C++ file 'captureapp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/capture/captureapp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'captureapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CaptureApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      20,   11,   11,   11, 0x08,
      38,   11,   11,   11, 0x08,
      45,   11,   11,   11, 0x08,
      72,   57,   11,   11, 0x08,
     108,   11,   11,   11, 0x08,
     126,   11,   11,   11, 0x08,
     148,   11,   11,   11, 0x08,
     169,   11,   11,   11, 0x08,
     192,  182,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CaptureApp[] = {
    "CaptureApp\0\0start()\0startContinuous()\0"
    "stop()\0autofocus()\0successful,msg\0"
    "handleCaptureFinished(bool,QString)\0"
    "triggerSettings()\0calibrationSettings()\0"
    "selectSignalsToAdd()\0exportData()\0"
    "rateIndex\0sampleRateChanged(int)\0"
};

void CaptureApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CaptureApp *_t = static_cast<CaptureApp *>(_o);
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->startContinuous(); break;
        case 2: _t->stop(); break;
        case 3: _t->autofocus(); break;
        case 4: _t->handleCaptureFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->triggerSettings(); break;
        case 6: _t->calibrationSettings(); break;
        case 7: _t->selectSignalsToAdd(); break;
        case 8: _t->exportData(); break;
        case 9: _t->sampleRateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CaptureApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CaptureApp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CaptureApp,
      qt_meta_data_CaptureApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CaptureApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CaptureApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CaptureApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureApp))
        return static_cast<void*>(const_cast< CaptureApp*>(this));
    return QObject::qt_metacast(_clname);
}

int CaptureApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
