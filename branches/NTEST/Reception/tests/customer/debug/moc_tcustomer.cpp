/****************************************************************************
** Meta object code from reading C++ file 'tcustomer.h'
**
** Created: Tue 30. Nov 23:57:10 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tcustomer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcustomer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TCustomer[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      29,   10,   10,   10, 0x08,
      38,   10,   10,   10, 0x08,
      49,   10,   10,   10, 0x08,
      63,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TCustomer[] = {
    "TCustomer\0\0testConstructor()\0testId()\0"
    "testName()\0testSurname()\0testGroupId()\0"
};

const QMetaObject TCustomer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TCustomer,
      qt_meta_data_TCustomer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TCustomer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TCustomer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TCustomer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TCustomer))
        return static_cast<void*>(const_cast< TCustomer*>(this));
    return QObject::qt_metacast(_clname);
}

int TCustomer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: testConstructor(); break;
        case 1: testId(); break;
        case 2: testName(); break;
        case 3: testSurname(); break;
        case 4: testGroupId(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE