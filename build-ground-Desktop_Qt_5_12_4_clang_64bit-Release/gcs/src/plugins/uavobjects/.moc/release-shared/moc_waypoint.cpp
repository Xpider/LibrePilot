/****************************************************************************
** Meta object code from reading C++ file 'waypoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../waypoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waypoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WaypointConstants_t {
    QByteArrayData data[2];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WaypointConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WaypointConstants_t qt_meta_stringdata_WaypointConstants = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WaypointConstants"
QT_MOC_LITERAL(1, 18, 4) // "Enum"

    },
    "WaypointConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WaypointConstants[] = {

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

void WaypointConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WaypointConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_WaypointConstants.data,
    qt_meta_data_WaypointConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WaypointConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaypointConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WaypointConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WaypointConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Waypoint_t {
    QByteArrayData data[43];
    char stringdata0[602];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Waypoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Waypoint_t qt_meta_stringdata_Waypoint = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Waypoint"
QT_MOC_LITERAL(1, 9, 15), // "positionChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "index"
QT_MOC_LITERAL(4, 32, 5), // "value"
QT_MOC_LITERAL(5, 38, 15), // "PositionChanged"
QT_MOC_LITERAL(6, 54, 20), // "positionNorthChanged"
QT_MOC_LITERAL(7, 75, 21), // "Position_NorthChanged"
QT_MOC_LITERAL(8, 97, 19), // "positionEastChanged"
QT_MOC_LITERAL(9, 117, 20), // "Position_EastChanged"
QT_MOC_LITERAL(10, 138, 19), // "positionDownChanged"
QT_MOC_LITERAL(11, 158, 20), // "Position_DownChanged"
QT_MOC_LITERAL(12, 179, 15), // "velocityChanged"
QT_MOC_LITERAL(13, 195, 15), // "VelocityChanged"
QT_MOC_LITERAL(14, 211, 13), // "actionChanged"
QT_MOC_LITERAL(15, 225, 13), // "ActionChanged"
QT_MOC_LITERAL(16, 239, 11), // "setPosition"
QT_MOC_LITERAL(17, 251, 16), // "setPositionNorth"
QT_MOC_LITERAL(18, 268, 17), // "setPosition_North"
QT_MOC_LITERAL(19, 286, 15), // "setPositionEast"
QT_MOC_LITERAL(20, 302, 16), // "setPosition_East"
QT_MOC_LITERAL(21, 319, 15), // "setPositionDown"
QT_MOC_LITERAL(22, 335, 16), // "setPosition_Down"
QT_MOC_LITERAL(23, 352, 11), // "setVelocity"
QT_MOC_LITERAL(24, 364, 9), // "setAction"
QT_MOC_LITERAL(25, 374, 17), // "emitNotifications"
QT_MOC_LITERAL(26, 392, 8), // "position"
QT_MOC_LITERAL(27, 401, 11), // "getPosition"
QT_MOC_LITERAL(28, 413, 17), // "getPosition_North"
QT_MOC_LITERAL(29, 431, 16), // "getPosition_East"
QT_MOC_LITERAL(30, 448, 16), // "getPosition_Down"
QT_MOC_LITERAL(31, 465, 11), // "getVelocity"
QT_MOC_LITERAL(32, 477, 9), // "getAction"
QT_MOC_LITERAL(33, 487, 13), // "positionNorth"
QT_MOC_LITERAL(34, 501, 12), // "positionEast"
QT_MOC_LITERAL(35, 514, 12), // "positionDown"
QT_MOC_LITERAL(36, 527, 8), // "velocity"
QT_MOC_LITERAL(37, 536, 6), // "action"
QT_MOC_LITERAL(38, 543, 14), // "Position_North"
QT_MOC_LITERAL(39, 558, 13), // "Position_East"
QT_MOC_LITERAL(40, 572, 13), // "Position_Down"
QT_MOC_LITERAL(41, 586, 8), // "Velocity"
QT_MOC_LITERAL(42, 595, 6) // "Action"

    },
    "Waypoint\0positionChanged\0\0index\0value\0"
    "PositionChanged\0positionNorthChanged\0"
    "Position_NorthChanged\0positionEastChanged\0"
    "Position_EastChanged\0positionDownChanged\0"
    "Position_DownChanged\0velocityChanged\0"
    "VelocityChanged\0actionChanged\0"
    "ActionChanged\0setPosition\0setPositionNorth\0"
    "setPosition_North\0setPositionEast\0"
    "setPosition_East\0setPositionDown\0"
    "setPosition_Down\0setVelocity\0setAction\0"
    "emitNotifications\0position\0getPosition\0"
    "getPosition_North\0getPosition_East\0"
    "getPosition_Down\0getVelocity\0getAction\0"
    "positionNorth\0positionEast\0positionDown\0"
    "velocity\0action\0Position_North\0"
    "Position_East\0Position_Down\0Velocity\0"
    "Action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Waypoint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
      10,  248, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  164,    2, 0x06 /* Public */,
       5,    2,  169,    2, 0x06 /* Public */,
       6,    1,  174,    2, 0x06 /* Public */,
       7,    1,  177,    2, 0x06 /* Public */,
       8,    1,  180,    2, 0x06 /* Public */,
       9,    1,  183,    2, 0x06 /* Public */,
      10,    1,  186,    2, 0x06 /* Public */,
      11,    1,  189,    2, 0x06 /* Public */,
      12,    1,  192,    2, 0x06 /* Public */,
      13,    1,  195,    2, 0x06 /* Public */,
      14,    1,  198,    2, 0x06 /* Public */,
      15,    1,  201,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    2,  204,    2, 0x0a /* Public */,
      17,    1,  209,    2, 0x0a /* Public */,
      18,    1,  212,    2, 0x0a /* Public */,
      19,    1,  215,    2, 0x0a /* Public */,
      20,    1,  218,    2, 0x0a /* Public */,
      21,    1,  221,    2, 0x0a /* Public */,
      22,    1,  224,    2, 0x0a /* Public */,
      23,    1,  227,    2, 0x0a /* Public */,
      24,    1,  230,    2, 0x0a /* Public */,
      24,    1,  233,    2, 0x0a /* Public */,
      25,    0,  236,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      26,    1,  237,    2, 0x02 /* Public */,
      27,    1,  240,    2, 0x02 /* Public */,
      28,    0,  243,    2, 0x02 /* Public */,
      29,    0,  244,    2, 0x02 /* Public */,
      30,    0,  245,    2, 0x02 /* Public */,
      31,    0,  246,    2, 0x02 /* Public */,
      32,    0,  247,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,

 // properties: name, type, flags
      33, QMetaType::Float, 0x00495103,
      34, QMetaType::Float, 0x00495103,
      35, QMetaType::Float, 0x00495103,
      36, QMetaType::Float, 0x00495103,
      37, QMetaType::UShort, 0x00495103,
      38, QMetaType::Float, 0x00495103,
      39, QMetaType::Float, 0x00495103,
      40, QMetaType::Float, 0x00495103,
      41, QMetaType::Float, 0x00495103,
      42, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
       8,
      10,
       3,
       5,
       7,
       9,
      11,

       0        // eod
};

void Waypoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Waypoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->PositionChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->positionNorthChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->Position_NorthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->positionEastChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->Position_EastChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->positionDownChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->Position_DownChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->velocityChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->VelocityChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->actionChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 11: _t->ActionChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->setPosition((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 13: _t->setPositionNorth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 14: _t->setPosition_North((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 15: _t->setPositionEast((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 16: _t->setPosition_East((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 17: _t->setPositionDown((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 18: _t->setPosition_Down((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 19: _t->setVelocity((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 20: _t->setAction((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 21: _t->setAction((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->emitNotifications(); break;
        case 23: { float _r = _t->position((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 24: { float _r = _t->getPosition((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 25: { float _r = _t->getPosition_North();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 26: { float _r = _t->getPosition_East();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 27: { float _r = _t->getPosition_Down();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 28: { float _r = _t->getVelocity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 29: { quint8 _r = _t->getAction();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Waypoint::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Waypoint::positionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Waypoint::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Waypoint::PositionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Waypoint::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Waypoint::positionNorthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Waypoint::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Waypoint::Position_NorthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Waypoint::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Waypoint::positionEastChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Waypoint::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Waypoint::Position_EastChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Waypoint::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Waypoint::positionDownChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Waypoint::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Waypoint::Position_DownChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Waypoint::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Waypoint::velocityChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Waypoint::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Waypoint::VelocityChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Waypoint::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Waypoint::actionChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Waypoint::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Waypoint::ActionChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Waypoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->positionNorth(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->positionEast(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->positionDown(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->velocity(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->action(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getPosition_North(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getPosition_East(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getPosition_Down(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getVelocity(); break;
        case 9: *reinterpret_cast< quint8*>(_v) = _t->getAction(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Waypoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPositionNorth(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setPositionEast(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setPositionDown(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setVelocity(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setAction(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setPosition_North(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setPosition_East(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setPosition_Down(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setVelocity(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setAction(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Waypoint::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_Waypoint.data,
    qt_meta_data_Waypoint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Waypoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Waypoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Waypoint.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int Waypoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Waypoint::positionChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Waypoint::PositionChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Waypoint::positionNorthChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Waypoint::Position_NorthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Waypoint::positionEastChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Waypoint::Position_EastChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Waypoint::positionDownChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Waypoint::Position_DownChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Waypoint::velocityChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Waypoint::VelocityChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Waypoint::actionChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Waypoint::ActionChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
