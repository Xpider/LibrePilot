/****************************************************************************
** Meta object code from reading C++ file 'opmapgadget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/opmap/opmapgadget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opmapgadget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OPMapGadget_t {
    QByteArrayData data[11];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPMapGadget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPMapGadget_t qt_meta_stringdata_OPMapGadget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OPMapGadget"
QT_MOC_LITERAL(1, 12, 11), // "saveOpacity"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "value"
QT_MOC_LITERAL(4, 31, 19), // "saveDefaultLocation"
QT_MOC_LITERAL(5, 51, 3), // "lng"
QT_MOC_LITERAL(6, 55, 3), // "lat"
QT_MOC_LITERAL(7, 59, 4), // "zoom"
QT_MOC_LITERAL(8, 64, 19), // "saveDefaultSafeArea"
QT_MOC_LITERAL(9, 84, 16), // "safe_area_radius"
QT_MOC_LITERAL(10, 101, 12) // "showSafeArea"

    },
    "OPMapGadget\0saveOpacity\0\0value\0"
    "saveDefaultLocation\0lng\0lat\0zoom\0"
    "saveDefaultSafeArea\0safe_area_radius\0"
    "showSafeArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPMapGadget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    3,   32,    2, 0x08 /* Private */,
       8,    2,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    5,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    9,   10,

       0        // eod
};

void OPMapGadget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OPMapGadget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveOpacity((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->saveDefaultLocation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->saveDefaultSafeArea((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OPMapGadget::staticMetaObject = { {
    &Core::IUAVGadget::staticMetaObject,
    qt_meta_stringdata_OPMapGadget.data,
    qt_meta_data_OPMapGadget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OPMapGadget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPMapGadget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPMapGadget.stringdata0))
        return static_cast<void*>(this);
    return Core::IUAVGadget::qt_metacast(_clname);
}

int OPMapGadget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Core::IUAVGadget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
