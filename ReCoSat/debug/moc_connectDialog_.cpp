/****************************************************************************
** Meta object code from reading C++ file 'connectDialog.h'
**
** Created: Wed 5. Oct 19:53:38 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget/core/connectDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConnectDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      43,   37,   14,   14, 0x0a,
      70,   14,   14,   14, 0x0a,
     104,   14,   14,   14, 0x0a,
     123,   14,   14,   14, 0x0a,
     139,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ConnectDialog[] = {
    "ConnectDialog\0\0browseForConfigFile()\0"
    "index\0currentProfileChanged(int)\0"
    "currentConnectionTypeChanged(int)\0"
    "updateVisibility()\0saveAsDefault()\0"
    "saveCurrentAsProfile()\0"
};

const QMetaObject ConnectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ConnectDialog,
      qt_meta_data_ConnectDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConnectDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConnectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConnectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectDialog))
        return static_cast<void*>(const_cast< ConnectDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ConnectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: browseForConfigFile(); break;
        case 1: currentProfileChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: currentConnectionTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: updateVisibility(); break;
        case 4: saveAsDefault(); break;
        case 5: saveCurrentAsProfile(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
