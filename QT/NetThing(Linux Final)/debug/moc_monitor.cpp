/****************************************************************************
** Meta object code from reading C++ file 'monitor.h'
**
** Created: Tue Mar 27 14:38:17 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../monitor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Monitor[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      38,    8,    8,    8, 0x08,
      66,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Monitor[] = {
    "Monitor\0\0on_exit_pushButton_clicked()\0"
    "on_ctl_pushButton_clicked()\0"
    "on_set_pushButton_clicked()\0"
};

const QMetaObject Monitor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Monitor,
      qt_meta_data_Monitor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Monitor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Monitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Monitor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Monitor))
        return static_cast<void*>(const_cast< Monitor*>(this));
    return QDialog::qt_metacast(_clname);
}

int Monitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_exit_pushButton_clicked(); break;
        case 1: on_ctl_pushButton_clicked(); break;
        case 2: on_set_pushButton_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
