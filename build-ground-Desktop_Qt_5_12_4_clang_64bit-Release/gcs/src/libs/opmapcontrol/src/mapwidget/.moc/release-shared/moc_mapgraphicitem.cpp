/****************************************************************************
** Meta object code from reading C++ file 'mapgraphicitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../ground/gcs/src/libs/opmapcontrol/src/mapwidget/mapgraphicitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapgraphicitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mapcontrol__MapGraphicItem_t {
    QByteArrayData data[16];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mapcontrol__MapGraphicItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mapcontrol__MapGraphicItem_t qt_meta_stringdata_mapcontrol__MapGraphicItem = {
    {
QT_MOC_LITERAL(0, 0, 26), // "mapcontrol::MapGraphicItem"
QT_MOC_LITERAL(1, 27, 15), // "wpdoubleclicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13), // "WayPointItem*"
QT_MOC_LITERAL(4, 58, 2), // "wp"
QT_MOC_LITERAL(5, 61, 11), // "zoomChanged"
QT_MOC_LITERAL(6, 73, 9), // "zoomtotal"
QT_MOC_LITERAL(7, 83, 8), // "zoomreal"
QT_MOC_LITERAL(8, 92, 8), // "zoomdigi"
QT_MOC_LITERAL(9, 101, 20), // "childRefreshPosition"
QT_MOC_LITERAL(10, 122, 15), // "childSetOpacity"
QT_MOC_LITERAL(11, 138, 5), // "value"
QT_MOC_LITERAL(12, 144, 23), // "Core_OnNeedInvalidation"
QT_MOC_LITERAL(13, 168, 15), // "childPosRefresh"
QT_MOC_LITERAL(14, 184, 6), // "resize"
QT_MOC_LITERAL(15, 191, 4) // "rect"

    },
    "mapcontrol::MapGraphicItem\0wpdoubleclicked\0"
    "\0WayPointItem*\0wp\0zoomChanged\0zoomtotal\0"
    "zoomreal\0zoomdigi\0childRefreshPosition\0"
    "childSetOpacity\0value\0Core_OnNeedInvalidation\0"
    "childPosRefresh\0resize\0rect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mapcontrol__MapGraphicItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    3,   57,    2, 0x06 /* Public */,
       9,    0,   64,    2, 0x06 /* Public */,
      10,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   68,    2, 0x08 /* Private */,
      13,    0,   69,    2, 0x08 /* Private */,
      14,    1,   70,    2, 0x0a /* Public */,
      14,    0,   73,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,   15,
    QMetaType::Void,

       0        // eod
};

void mapcontrol::MapGraphicItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapGraphicItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wpdoubleclicked((*reinterpret_cast< WayPointItem*(*)>(_a[1]))); break;
        case 1: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->childRefreshPosition(); break;
        case 3: _t->childSetOpacity((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->Core_OnNeedInvalidation(); break;
        case 5: _t->childPosRefresh(); break;
        case 6: _t->resize((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 7: _t->resize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WayPointItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapGraphicItem::*)(WayPointItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapGraphicItem::wpdoubleclicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapGraphicItem::*)(double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapGraphicItem::zoomChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MapGraphicItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapGraphicItem::childRefreshPosition)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MapGraphicItem::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapGraphicItem::childSetOpacity)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mapcontrol::MapGraphicItem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_mapcontrol__MapGraphicItem.data,
    qt_meta_data_mapcontrol__MapGraphicItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mapcontrol::MapGraphicItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mapcontrol::MapGraphicItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mapcontrol__MapGraphicItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int mapcontrol::MapGraphicItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mapcontrol::MapGraphicItem::wpdoubleclicked(WayPointItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mapcontrol::MapGraphicItem::zoomChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mapcontrol::MapGraphicItem::childRefreshPosition()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mapcontrol::MapGraphicItem::childSetOpacity(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
