/****************************************************************************
** Meta object code from reading C++ file 'pathplan.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pathplan.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathplan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PathPlanConstants_t {
    QByteArrayData data[2];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathPlanConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathPlanConstants_t qt_meta_stringdata_PathPlanConstants = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PathPlanConstants"
QT_MOC_LITERAL(1, 18, 4) // "Enum"

    },
    "PathPlanConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathPlanConstants[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    0,   19,

 // enum data: key, value

       0        // eod
};

void PathPlanConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathPlanConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PathPlanConstants.data,
    qt_meta_data_PathPlanConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathPlanConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathPlanConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathPlanConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PathPlanConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathPlan_t {
    QByteArrayData data[22];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathPlan_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathPlan_t qt_meta_stringdata_PathPlan = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PathPlan"
QT_MOC_LITERAL(1, 9, 20), // "waypointCountChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "value"
QT_MOC_LITERAL(4, 37, 20), // "WaypointCountChanged"
QT_MOC_LITERAL(5, 58, 22), // "pathActionCountChanged"
QT_MOC_LITERAL(6, 81, 22), // "PathActionCountChanged"
QT_MOC_LITERAL(7, 104, 10), // "crcChanged"
QT_MOC_LITERAL(8, 115, 10), // "CrcChanged"
QT_MOC_LITERAL(9, 126, 16), // "setWaypointCount"
QT_MOC_LITERAL(10, 143, 18), // "setPathActionCount"
QT_MOC_LITERAL(11, 162, 6), // "setCrc"
QT_MOC_LITERAL(12, 169, 17), // "emitNotifications"
QT_MOC_LITERAL(13, 187, 16), // "getWaypointCount"
QT_MOC_LITERAL(14, 204, 18), // "getPathActionCount"
QT_MOC_LITERAL(15, 223, 6), // "getCrc"
QT_MOC_LITERAL(16, 230, 13), // "waypointCount"
QT_MOC_LITERAL(17, 244, 15), // "pathActionCount"
QT_MOC_LITERAL(18, 260, 3), // "crc"
QT_MOC_LITERAL(19, 264, 13), // "WaypointCount"
QT_MOC_LITERAL(20, 278, 15), // "PathActionCount"
QT_MOC_LITERAL(21, 294, 3) // "Crc"

    },
    "PathPlan\0waypointCountChanged\0\0value\0"
    "WaypointCountChanged\0pathActionCountChanged\0"
    "PathActionCountChanged\0crcChanged\0"
    "CrcChanged\0setWaypointCount\0"
    "setPathActionCount\0setCrc\0emitNotifications\0"
    "getWaypointCount\0getPathActionCount\0"
    "getCrc\0waypointCount\0pathActionCount\0"
    "crc\0WaypointCount\0PathActionCount\0Crc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathPlan[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       6,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       6,    1,   93,    2, 0x06 /* Public */,
       7,    1,   96,    2, 0x06 /* Public */,
       8,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  102,    2, 0x0a /* Public */,
      10,    1,  105,    2, 0x0a /* Public */,
      11,    1,  108,    2, 0x0a /* Public */,
      11,    1,  111,    2, 0x0a /* Public */,
      12,    0,  114,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      13,    0,  115,    2, 0x02 /* Public */,
      14,    0,  116,    2, 0x02 /* Public */,
      15,    0,  117,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UChar,

 // properties: name, type, flags
      16, QMetaType::UShort, 0x00495103,
      17, QMetaType::UShort, 0x00495103,
      18, QMetaType::UShort, 0x00495103,
      19, QMetaType::UShort, 0x00495103,
      20, QMetaType::UShort, 0x00495103,
      21, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       1,
       3,
       5,

       0        // eod
};

void PathPlan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PathPlan *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->waypointCountChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 1: _t->WaypointCountChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 2: _t->pathActionCountChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 3: _t->PathActionCountChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 4: _t->crcChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 5: _t->CrcChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->setWaypointCount((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 7: _t->setPathActionCount((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 8: _t->setCrc((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 9: _t->setCrc((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->emitNotifications(); break;
        case 11: { quint16 _r = _t->getWaypointCount();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 12: { quint16 _r = _t->getPathActionCount();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 13: { quint8 _r = _t->getCrc();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PathPlan::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathPlan::waypointCountChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PathPlan::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathPlan::WaypointCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PathPlan::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathPlan::pathActionCountChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PathPlan::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathPlan::PathActionCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PathPlan::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathPlan::crcChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PathPlan::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathPlan::CrcChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PathPlan *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->waypointCount(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->pathActionCount(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->crc(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->getWaypointCount(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->getPathActionCount(); break;
        case 5: *reinterpret_cast< quint8*>(_v) = _t->getCrc(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PathPlan *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWaypointCount(*reinterpret_cast< quint16*>(_v)); break;
        case 1: _t->setPathActionCount(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setCrc(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setWaypointCount(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setPathActionCount(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setCrc(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PathPlan::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_PathPlan.data,
    qt_meta_data_PathPlan,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathPlan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathPlan::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathPlan.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int PathPlan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PathPlan::waypointCountChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PathPlan::WaypointCountChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PathPlan::pathActionCountChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PathPlan::PathActionCountChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PathPlan::crcChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PathPlan::CrcChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
