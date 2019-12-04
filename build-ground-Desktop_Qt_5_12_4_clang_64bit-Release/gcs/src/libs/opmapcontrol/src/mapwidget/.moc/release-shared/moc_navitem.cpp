/****************************************************************************
** Meta object code from reading C++ file 'navitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../ground/gcs/src/libs/opmapcontrol/src/mapwidget/navitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mapcontrol__NavItem_t {
    QByteArrayData data[8];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mapcontrol__NavItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mapcontrol__NavItem_t qt_meta_stringdata_mapcontrol__NavItem = {
    {
QT_MOC_LITERAL(0, 0, 19), // "mapcontrol::NavItem"
QT_MOC_LITERAL(1, 20, 18), // "navPositionChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 22), // "internals::PointLatLng"
QT_MOC_LITERAL(4, 63, 5), // "coord"
QT_MOC_LITERAL(5, 69, 10), // "RefreshPos"
QT_MOC_LITERAL(6, 80, 14), // "setOpacitySlot"
QT_MOC_LITERAL(7, 95, 7) // "opacity"

    },
    "mapcontrol::NavItem\0navPositionChanged\0"
    "\0internals::PointLatLng\0coord\0RefreshPos\0"
    "setOpacitySlot\0opacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mapcontrol__NavItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   34,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Float,    4,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    7,

       0        // eod
};

void mapcontrol::NavItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->navPositionChanged((*reinterpret_cast< internals::PointLatLng(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->RefreshPos(); break;
        case 2: _t->setOpacitySlot((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NavItem::*)(internals::PointLatLng , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavItem::navPositionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mapcontrol::NavItem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_mapcontrol__NavItem.data,
    qt_meta_data_mapcontrol__NavItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mapcontrol::NavItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mapcontrol::NavItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mapcontrol__NavItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int mapcontrol::NavItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void mapcontrol::NavItem::navPositionChanged(internals::PointLatLng _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
