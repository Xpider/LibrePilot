/****************************************************************************
** Meta object code from reading C++ file 'statusvtolland.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../statusvtolland.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusvtolland.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StatusVtolLandConstants_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusVtolLandConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusVtolLandConstants_t qt_meta_stringdata_StatusVtolLandConstants = {
    {
QT_MOC_LITERAL(0, 0, 23), // "StatusVtolLandConstants"
QT_MOC_LITERAL(1, 24, 4), // "Enum"
QT_MOC_LITERAL(2, 29, 10), // "StateCount"
QT_MOC_LITERAL(3, 40, 20), // "StateExitReasonCount"
QT_MOC_LITERAL(4, 61, 18) // "AltitudeStateCount"

    },
    "StatusVtolLandConstants\0Enum\0StateCount\0"
    "StateExitReasonCount\0AltitudeStateCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusVtolLandConstants[] = {

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
       1,    1, 0x0,    3,   19,

 // enum data: key, value
       2, uint(StatusVtolLandConstants::StateCount),
       3, uint(StatusVtolLandConstants::StateExitReasonCount),
       4, uint(StatusVtolLandConstants::AltitudeStateCount),

       0        // eod
};

void StatusVtolLandConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusVtolLandConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StatusVtolLandConstants.data,
    qt_meta_data_StatusVtolLandConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusVtolLandConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusVtolLandConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusVtolLandConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusVtolLandConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StatusVtolLand_State_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusVtolLand_State_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusVtolLand_State_t qt_meta_stringdata_StatusVtolLand_State = {
    {
QT_MOC_LITERAL(0, 0, 20), // "StatusVtolLand_State"
QT_MOC_LITERAL(1, 21, 4), // "Enum"
QT_MOC_LITERAL(2, 26, 8), // "Inactive"
QT_MOC_LITERAL(3, 35, 11), // "InitAltHold"
QT_MOC_LITERAL(4, 47, 17), // "WtgForDescentRate"
QT_MOC_LITERAL(5, 65, 13), // "AtDescentRate"
QT_MOC_LITERAL(6, 79, 18), // "WtgForGroundEffect"
QT_MOC_LITERAL(7, 98, 12), // "GroundEffect"
QT_MOC_LITERAL(8, 111, 10), // "ThrustDown"
QT_MOC_LITERAL(9, 122, 9), // "ThrustOff"
QT_MOC_LITERAL(10, 132, 8) // "Disarmed"

    },
    "StatusVtolLand_State\0Enum\0Inactive\0"
    "InitAltHold\0WtgForDescentRate\0"
    "AtDescentRate\0WtgForGroundEffect\0"
    "GroundEffect\0ThrustDown\0ThrustOff\0"
    "Disarmed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusVtolLand_State[] = {

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
       1,    1, 0x0,    9,   19,

 // enum data: key, value
       2, uint(StatusVtolLand_State::Inactive),
       3, uint(StatusVtolLand_State::InitAltHold),
       4, uint(StatusVtolLand_State::WtgForDescentRate),
       5, uint(StatusVtolLand_State::AtDescentRate),
       6, uint(StatusVtolLand_State::WtgForGroundEffect),
       7, uint(StatusVtolLand_State::GroundEffect),
       8, uint(StatusVtolLand_State::ThrustDown),
       9, uint(StatusVtolLand_State::ThrustOff),
      10, uint(StatusVtolLand_State::Disarmed),

       0        // eod
};

void StatusVtolLand_State::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusVtolLand_State::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StatusVtolLand_State.data,
    qt_meta_data_StatusVtolLand_State,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusVtolLand_State::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusVtolLand_State::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusVtolLand_State.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusVtolLand_State::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StatusVtolLand_StateExitReason_t {
    QByteArrayData data[11];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusVtolLand_StateExitReason_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusVtolLand_StateExitReason_t qt_meta_stringdata_StatusVtolLand_StateExitReason = {
    {
QT_MOC_LITERAL(0, 0, 30), // "StatusVtolLand_StateExitReason"
QT_MOC_LITERAL(1, 31, 4), // "Enum"
QT_MOC_LITERAL(2, 36, 4), // "None"
QT_MOC_LITERAL(3, 41, 13), // "DescentRateOk"
QT_MOC_LITERAL(4, 55, 8), // "OnGround"
QT_MOC_LITERAL(5, 64, 14), // "BounceVelocity"
QT_MOC_LITERAL(6, 79, 11), // "BounceAccel"
QT_MOC_LITERAL(7, 91, 14), // "LowDescentRate"
QT_MOC_LITERAL(8, 106, 10), // "ZeroThrust"
QT_MOC_LITERAL(9, 117, 13), // "PositionError"
QT_MOC_LITERAL(10, 131, 7) // "Timeout"

    },
    "StatusVtolLand_StateExitReason\0Enum\0"
    "None\0DescentRateOk\0OnGround\0BounceVelocity\0"
    "BounceAccel\0LowDescentRate\0ZeroThrust\0"
    "PositionError\0Timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusVtolLand_StateExitReason[] = {

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
       1,    1, 0x0,    9,   19,

 // enum data: key, value
       2, uint(StatusVtolLand_StateExitReason::None),
       3, uint(StatusVtolLand_StateExitReason::DescentRateOk),
       4, uint(StatusVtolLand_StateExitReason::OnGround),
       5, uint(StatusVtolLand_StateExitReason::BounceVelocity),
       6, uint(StatusVtolLand_StateExitReason::BounceAccel),
       7, uint(StatusVtolLand_StateExitReason::LowDescentRate),
       8, uint(StatusVtolLand_StateExitReason::ZeroThrust),
       9, uint(StatusVtolLand_StateExitReason::PositionError),
      10, uint(StatusVtolLand_StateExitReason::Timeout),

       0        // eod
};

void StatusVtolLand_StateExitReason::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusVtolLand_StateExitReason::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StatusVtolLand_StateExitReason.data,
    qt_meta_data_StatusVtolLand_StateExitReason,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusVtolLand_StateExitReason::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusVtolLand_StateExitReason::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusVtolLand_StateExitReason.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusVtolLand_StateExitReason::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StatusVtolLand_AltitudeState_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusVtolLand_AltitudeState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusVtolLand_AltitudeState_t qt_meta_stringdata_StatusVtolLand_AltitudeState = {
    {
QT_MOC_LITERAL(0, 0, 28), // "StatusVtolLand_AltitudeState"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 4), // "High"
QT_MOC_LITERAL(3, 39, 3) // "Low"

    },
    "StatusVtolLand_AltitudeState\0Enum\0"
    "High\0Low"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusVtolLand_AltitudeState[] = {

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
       1,    1, 0x0,    2,   19,

 // enum data: key, value
       2, uint(StatusVtolLand_AltitudeState::High),
       3, uint(StatusVtolLand_AltitudeState::Low),

       0        // eod
};

void StatusVtolLand_AltitudeState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusVtolLand_AltitudeState::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StatusVtolLand_AltitudeState.data,
    qt_meta_data_StatusVtolLand_AltitudeState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusVtolLand_AltitudeState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusVtolLand_AltitudeState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusVtolLand_AltitudeState.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusVtolLand_AltitudeState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StatusVtolLand_t {
    QByteArrayData data[209];
    char stringdata0[4509];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusVtolLand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusVtolLand_t qt_meta_stringdata_StatusVtolLand = {
    {
QT_MOC_LITERAL(0, 0, 14), // "StatusVtolLand"
QT_MOC_LITERAL(1, 15, 22), // "altitudeAtStateChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 5), // "value"
QT_MOC_LITERAL(5, 51, 22), // "AltitudeAtStateChanged"
QT_MOC_LITERAL(6, 74, 23), // "altitudeAtState0Changed"
QT_MOC_LITERAL(7, 98, 24), // "AltitudeAtState_0Changed"
QT_MOC_LITERAL(8, 123, 23), // "altitudeAtState1Changed"
QT_MOC_LITERAL(9, 147, 24), // "AltitudeAtState_1Changed"
QT_MOC_LITERAL(10, 172, 23), // "altitudeAtState2Changed"
QT_MOC_LITERAL(11, 196, 24), // "AltitudeAtState_2Changed"
QT_MOC_LITERAL(12, 221, 23), // "altitudeAtState3Changed"
QT_MOC_LITERAL(13, 245, 24), // "AltitudeAtState_3Changed"
QT_MOC_LITERAL(14, 270, 23), // "altitudeAtState4Changed"
QT_MOC_LITERAL(15, 294, 24), // "AltitudeAtState_4Changed"
QT_MOC_LITERAL(16, 319, 23), // "altitudeAtState5Changed"
QT_MOC_LITERAL(17, 343, 24), // "AltitudeAtState_5Changed"
QT_MOC_LITERAL(18, 368, 23), // "altitudeAtState6Changed"
QT_MOC_LITERAL(19, 392, 24), // "AltitudeAtState_6Changed"
QT_MOC_LITERAL(20, 417, 23), // "altitudeAtState7Changed"
QT_MOC_LITERAL(21, 441, 24), // "AltitudeAtState_7Changed"
QT_MOC_LITERAL(22, 466, 23), // "altitudeAtState8Changed"
QT_MOC_LITERAL(23, 490, 24), // "AltitudeAtState_8Changed"
QT_MOC_LITERAL(24, 515, 23), // "altitudeAtState9Changed"
QT_MOC_LITERAL(25, 539, 24), // "AltitudeAtState_9Changed"
QT_MOC_LITERAL(26, 564, 24), // "targetDescentRateChanged"
QT_MOC_LITERAL(27, 589, 25), // "averageDescentRateChanged"
QT_MOC_LITERAL(28, 615, 27), // "averageDescentThrustChanged"
QT_MOC_LITERAL(29, 643, 30), // "calculatedNeutralThrustChanged"
QT_MOC_LITERAL(30, 674, 25), // "wtgForGroundEffectChanged"
QT_MOC_LITERAL(31, 700, 25), // "WtgForGroundEffectChanged"
QT_MOC_LITERAL(32, 726, 39), // "wtgForGroundEffectBounceVeloc..."
QT_MOC_LITERAL(33, 766, 40), // "WtgForGroundEffect_BounceVelo..."
QT_MOC_LITERAL(34, 807, 36), // "wtgForGroundEffectBounceAccel..."
QT_MOC_LITERAL(35, 844, 37), // "WtgForGroundEffect_BounceAcce..."
QT_MOC_LITERAL(36, 882, 12), // "stateChanged"
QT_MOC_LITERAL(37, 895, 26), // "StatusVtolLand_State::Enum"
QT_MOC_LITERAL(38, 922, 12), // "StateChanged"
QT_MOC_LITERAL(39, 935, 22), // "stateExitReasonChanged"
QT_MOC_LITERAL(40, 958, 36), // "StatusVtolLand_StateExitReaso..."
QT_MOC_LITERAL(41, 995, 22), // "StateExitReasonChanged"
QT_MOC_LITERAL(42, 1018, 23), // "stateExitReason0Changed"
QT_MOC_LITERAL(43, 1042, 24), // "StateExitReason_0Changed"
QT_MOC_LITERAL(44, 1067, 23), // "stateExitReason1Changed"
QT_MOC_LITERAL(45, 1091, 24), // "StateExitReason_1Changed"
QT_MOC_LITERAL(46, 1116, 23), // "stateExitReason2Changed"
QT_MOC_LITERAL(47, 1140, 24), // "StateExitReason_2Changed"
QT_MOC_LITERAL(48, 1165, 23), // "stateExitReason3Changed"
QT_MOC_LITERAL(49, 1189, 24), // "StateExitReason_3Changed"
QT_MOC_LITERAL(50, 1214, 23), // "stateExitReason4Changed"
QT_MOC_LITERAL(51, 1238, 24), // "StateExitReason_4Changed"
QT_MOC_LITERAL(52, 1263, 23), // "stateExitReason5Changed"
QT_MOC_LITERAL(53, 1287, 24), // "StateExitReason_5Changed"
QT_MOC_LITERAL(54, 1312, 23), // "stateExitReason6Changed"
QT_MOC_LITERAL(55, 1336, 24), // "StateExitReason_6Changed"
QT_MOC_LITERAL(56, 1361, 23), // "stateExitReason7Changed"
QT_MOC_LITERAL(57, 1385, 24), // "StateExitReason_7Changed"
QT_MOC_LITERAL(58, 1410, 23), // "stateExitReason8Changed"
QT_MOC_LITERAL(59, 1434, 24), // "StateExitReason_8Changed"
QT_MOC_LITERAL(60, 1459, 23), // "stateExitReason9Changed"
QT_MOC_LITERAL(61, 1483, 24), // "StateExitReason_9Changed"
QT_MOC_LITERAL(62, 1508, 20), // "altitudeStateChanged"
QT_MOC_LITERAL(63, 1529, 34), // "StatusVtolLand_AltitudeState:..."
QT_MOC_LITERAL(64, 1564, 20), // "AltitudeStateChanged"
QT_MOC_LITERAL(65, 1585, 18), // "setAltitudeAtState"
QT_MOC_LITERAL(66, 1604, 19), // "setAltitudeAtState0"
QT_MOC_LITERAL(67, 1624, 20), // "setAltitudeAtState_0"
QT_MOC_LITERAL(68, 1645, 19), // "setAltitudeAtState1"
QT_MOC_LITERAL(69, 1665, 20), // "setAltitudeAtState_1"
QT_MOC_LITERAL(70, 1686, 19), // "setAltitudeAtState2"
QT_MOC_LITERAL(71, 1706, 20), // "setAltitudeAtState_2"
QT_MOC_LITERAL(72, 1727, 19), // "setAltitudeAtState3"
QT_MOC_LITERAL(73, 1747, 20), // "setAltitudeAtState_3"
QT_MOC_LITERAL(74, 1768, 19), // "setAltitudeAtState4"
QT_MOC_LITERAL(75, 1788, 20), // "setAltitudeAtState_4"
QT_MOC_LITERAL(76, 1809, 19), // "setAltitudeAtState5"
QT_MOC_LITERAL(77, 1829, 20), // "setAltitudeAtState_5"
QT_MOC_LITERAL(78, 1850, 19), // "setAltitudeAtState6"
QT_MOC_LITERAL(79, 1870, 20), // "setAltitudeAtState_6"
QT_MOC_LITERAL(80, 1891, 19), // "setAltitudeAtState7"
QT_MOC_LITERAL(81, 1911, 20), // "setAltitudeAtState_7"
QT_MOC_LITERAL(82, 1932, 19), // "setAltitudeAtState8"
QT_MOC_LITERAL(83, 1952, 20), // "setAltitudeAtState_8"
QT_MOC_LITERAL(84, 1973, 19), // "setAltitudeAtState9"
QT_MOC_LITERAL(85, 1993, 20), // "setAltitudeAtState_9"
QT_MOC_LITERAL(86, 2014, 20), // "setTargetDescentRate"
QT_MOC_LITERAL(87, 2035, 20), // "settargetDescentRate"
QT_MOC_LITERAL(88, 2056, 21), // "setAverageDescentRate"
QT_MOC_LITERAL(89, 2078, 21), // "setaverageDescentRate"
QT_MOC_LITERAL(90, 2100, 23), // "setAverageDescentThrust"
QT_MOC_LITERAL(91, 2124, 23), // "setaverageDescentThrust"
QT_MOC_LITERAL(92, 2148, 26), // "setCalculatedNeutralThrust"
QT_MOC_LITERAL(93, 2175, 26), // "setcalculatedNeutralThrust"
QT_MOC_LITERAL(94, 2202, 21), // "setWtgForGroundEffect"
QT_MOC_LITERAL(95, 2224, 35), // "setWtgForGroundEffectBounceVe..."
QT_MOC_LITERAL(96, 2260, 36), // "setWtgForGroundEffect_BounceV..."
QT_MOC_LITERAL(97, 2297, 32), // "setWtgForGroundEffectBounceAccel"
QT_MOC_LITERAL(98, 2330, 33), // "setWtgForGroundEffect_BounceA..."
QT_MOC_LITERAL(99, 2364, 8), // "setState"
QT_MOC_LITERAL(100, 2373, 18), // "setStateExitReason"
QT_MOC_LITERAL(101, 2392, 19), // "setStateExitReason0"
QT_MOC_LITERAL(102, 2412, 20), // "setStateExitReason_0"
QT_MOC_LITERAL(103, 2433, 19), // "setStateExitReason1"
QT_MOC_LITERAL(104, 2453, 20), // "setStateExitReason_1"
QT_MOC_LITERAL(105, 2474, 19), // "setStateExitReason2"
QT_MOC_LITERAL(106, 2494, 20), // "setStateExitReason_2"
QT_MOC_LITERAL(107, 2515, 19), // "setStateExitReason3"
QT_MOC_LITERAL(108, 2535, 20), // "setStateExitReason_3"
QT_MOC_LITERAL(109, 2556, 19), // "setStateExitReason4"
QT_MOC_LITERAL(110, 2576, 20), // "setStateExitReason_4"
QT_MOC_LITERAL(111, 2597, 19), // "setStateExitReason5"
QT_MOC_LITERAL(112, 2617, 20), // "setStateExitReason_5"
QT_MOC_LITERAL(113, 2638, 19), // "setStateExitReason6"
QT_MOC_LITERAL(114, 2658, 20), // "setStateExitReason_6"
QT_MOC_LITERAL(115, 2679, 19), // "setStateExitReason7"
QT_MOC_LITERAL(116, 2699, 20), // "setStateExitReason_7"
QT_MOC_LITERAL(117, 2720, 19), // "setStateExitReason8"
QT_MOC_LITERAL(118, 2740, 20), // "setStateExitReason_8"
QT_MOC_LITERAL(119, 2761, 19), // "setStateExitReason9"
QT_MOC_LITERAL(120, 2781, 20), // "setStateExitReason_9"
QT_MOC_LITERAL(121, 2802, 16), // "setAltitudeState"
QT_MOC_LITERAL(122, 2819, 17), // "emitNotifications"
QT_MOC_LITERAL(123, 2837, 15), // "altitudeAtState"
QT_MOC_LITERAL(124, 2853, 18), // "getAltitudeAtState"
QT_MOC_LITERAL(125, 2872, 20), // "getAltitudeAtState_0"
QT_MOC_LITERAL(126, 2893, 20), // "getAltitudeAtState_1"
QT_MOC_LITERAL(127, 2914, 20), // "getAltitudeAtState_2"
QT_MOC_LITERAL(128, 2935, 20), // "getAltitudeAtState_3"
QT_MOC_LITERAL(129, 2956, 20), // "getAltitudeAtState_4"
QT_MOC_LITERAL(130, 2977, 20), // "getAltitudeAtState_5"
QT_MOC_LITERAL(131, 2998, 20), // "getAltitudeAtState_6"
QT_MOC_LITERAL(132, 3019, 20), // "getAltitudeAtState_7"
QT_MOC_LITERAL(133, 3040, 20), // "getAltitudeAtState_8"
QT_MOC_LITERAL(134, 3061, 20), // "getAltitudeAtState_9"
QT_MOC_LITERAL(135, 3082, 20), // "gettargetDescentRate"
QT_MOC_LITERAL(136, 3103, 21), // "getaverageDescentRate"
QT_MOC_LITERAL(137, 3125, 23), // "getaverageDescentThrust"
QT_MOC_LITERAL(138, 3149, 26), // "getcalculatedNeutralThrust"
QT_MOC_LITERAL(139, 3176, 18), // "wtgForGroundEffect"
QT_MOC_LITERAL(140, 3195, 21), // "getWtgForGroundEffect"
QT_MOC_LITERAL(141, 3217, 36), // "getWtgForGroundEffect_BounceV..."
QT_MOC_LITERAL(142, 3254, 33), // "getWtgForGroundEffect_BounceA..."
QT_MOC_LITERAL(143, 3288, 8), // "getState"
QT_MOC_LITERAL(144, 3297, 15), // "stateExitReason"
QT_MOC_LITERAL(145, 3313, 18), // "getStateExitReason"
QT_MOC_LITERAL(146, 3332, 20), // "getStateExitReason_0"
QT_MOC_LITERAL(147, 3353, 20), // "getStateExitReason_1"
QT_MOC_LITERAL(148, 3374, 20), // "getStateExitReason_2"
QT_MOC_LITERAL(149, 3395, 20), // "getStateExitReason_3"
QT_MOC_LITERAL(150, 3416, 20), // "getStateExitReason_4"
QT_MOC_LITERAL(151, 3437, 20), // "getStateExitReason_5"
QT_MOC_LITERAL(152, 3458, 20), // "getStateExitReason_6"
QT_MOC_LITERAL(153, 3479, 20), // "getStateExitReason_7"
QT_MOC_LITERAL(154, 3500, 20), // "getStateExitReason_8"
QT_MOC_LITERAL(155, 3521, 20), // "getStateExitReason_9"
QT_MOC_LITERAL(156, 3542, 16), // "getAltitudeState"
QT_MOC_LITERAL(157, 3559, 16), // "altitudeAtState0"
QT_MOC_LITERAL(158, 3576, 16), // "altitudeAtState1"
QT_MOC_LITERAL(159, 3593, 16), // "altitudeAtState2"
QT_MOC_LITERAL(160, 3610, 16), // "altitudeAtState3"
QT_MOC_LITERAL(161, 3627, 16), // "altitudeAtState4"
QT_MOC_LITERAL(162, 3644, 16), // "altitudeAtState5"
QT_MOC_LITERAL(163, 3661, 16), // "altitudeAtState6"
QT_MOC_LITERAL(164, 3678, 16), // "altitudeAtState7"
QT_MOC_LITERAL(165, 3695, 16), // "altitudeAtState8"
QT_MOC_LITERAL(166, 3712, 16), // "altitudeAtState9"
QT_MOC_LITERAL(167, 3729, 17), // "targetDescentRate"
QT_MOC_LITERAL(168, 3747, 18), // "averageDescentRate"
QT_MOC_LITERAL(169, 3766, 20), // "averageDescentThrust"
QT_MOC_LITERAL(170, 3787, 23), // "calculatedNeutralThrust"
QT_MOC_LITERAL(171, 3811, 32), // "wtgForGroundEffectBounceVelocity"
QT_MOC_LITERAL(172, 3844, 29), // "wtgForGroundEffectBounceAccel"
QT_MOC_LITERAL(173, 3874, 5), // "state"
QT_MOC_LITERAL(174, 3880, 16), // "stateExitReason0"
QT_MOC_LITERAL(175, 3897, 16), // "stateExitReason1"
QT_MOC_LITERAL(176, 3914, 16), // "stateExitReason2"
QT_MOC_LITERAL(177, 3931, 16), // "stateExitReason3"
QT_MOC_LITERAL(178, 3948, 16), // "stateExitReason4"
QT_MOC_LITERAL(179, 3965, 16), // "stateExitReason5"
QT_MOC_LITERAL(180, 3982, 16), // "stateExitReason6"
QT_MOC_LITERAL(181, 3999, 16), // "stateExitReason7"
QT_MOC_LITERAL(182, 4016, 16), // "stateExitReason8"
QT_MOC_LITERAL(183, 4033, 16), // "stateExitReason9"
QT_MOC_LITERAL(184, 4050, 13), // "altitudeState"
QT_MOC_LITERAL(185, 4064, 17), // "AltitudeAtState_0"
QT_MOC_LITERAL(186, 4082, 17), // "AltitudeAtState_1"
QT_MOC_LITERAL(187, 4100, 17), // "AltitudeAtState_2"
QT_MOC_LITERAL(188, 4118, 17), // "AltitudeAtState_3"
QT_MOC_LITERAL(189, 4136, 17), // "AltitudeAtState_4"
QT_MOC_LITERAL(190, 4154, 17), // "AltitudeAtState_5"
QT_MOC_LITERAL(191, 4172, 17), // "AltitudeAtState_6"
QT_MOC_LITERAL(192, 4190, 17), // "AltitudeAtState_7"
QT_MOC_LITERAL(193, 4208, 17), // "AltitudeAtState_8"
QT_MOC_LITERAL(194, 4226, 17), // "AltitudeAtState_9"
QT_MOC_LITERAL(195, 4244, 33), // "WtgForGroundEffect_BounceVelo..."
QT_MOC_LITERAL(196, 4278, 30), // "WtgForGroundEffect_BounceAccel"
QT_MOC_LITERAL(197, 4309, 5), // "State"
QT_MOC_LITERAL(198, 4315, 17), // "StateExitReason_0"
QT_MOC_LITERAL(199, 4333, 17), // "StateExitReason_1"
QT_MOC_LITERAL(200, 4351, 17), // "StateExitReason_2"
QT_MOC_LITERAL(201, 4369, 17), // "StateExitReason_3"
QT_MOC_LITERAL(202, 4387, 17), // "StateExitReason_4"
QT_MOC_LITERAL(203, 4405, 17), // "StateExitReason_5"
QT_MOC_LITERAL(204, 4423, 17), // "StateExitReason_6"
QT_MOC_LITERAL(205, 4441, 17), // "StateExitReason_7"
QT_MOC_LITERAL(206, 4459, 17), // "StateExitReason_8"
QT_MOC_LITERAL(207, 4477, 17), // "StateExitReason_9"
QT_MOC_LITERAL(208, 4495, 13) // "AltitudeState"

    },
    "StatusVtolLand\0altitudeAtStateChanged\0"
    "\0index\0value\0AltitudeAtStateChanged\0"
    "altitudeAtState0Changed\0"
    "AltitudeAtState_0Changed\0"
    "altitudeAtState1Changed\0"
    "AltitudeAtState_1Changed\0"
    "altitudeAtState2Changed\0"
    "AltitudeAtState_2Changed\0"
    "altitudeAtState3Changed\0"
    "AltitudeAtState_3Changed\0"
    "altitudeAtState4Changed\0"
    "AltitudeAtState_4Changed\0"
    "altitudeAtState5Changed\0"
    "AltitudeAtState_5Changed\0"
    "altitudeAtState6Changed\0"
    "AltitudeAtState_6Changed\0"
    "altitudeAtState7Changed\0"
    "AltitudeAtState_7Changed\0"
    "altitudeAtState8Changed\0"
    "AltitudeAtState_8Changed\0"
    "altitudeAtState9Changed\0"
    "AltitudeAtState_9Changed\0"
    "targetDescentRateChanged\0"
    "averageDescentRateChanged\0"
    "averageDescentThrustChanged\0"
    "calculatedNeutralThrustChanged\0"
    "wtgForGroundEffectChanged\0"
    "WtgForGroundEffectChanged\0"
    "wtgForGroundEffectBounceVelocityChanged\0"
    "WtgForGroundEffect_BounceVelocityChanged\0"
    "wtgForGroundEffectBounceAccelChanged\0"
    "WtgForGroundEffect_BounceAccelChanged\0"
    "stateChanged\0StatusVtolLand_State::Enum\0"
    "StateChanged\0stateExitReasonChanged\0"
    "StatusVtolLand_StateExitReason::Enum\0"
    "StateExitReasonChanged\0stateExitReason0Changed\0"
    "StateExitReason_0Changed\0"
    "stateExitReason1Changed\0"
    "StateExitReason_1Changed\0"
    "stateExitReason2Changed\0"
    "StateExitReason_2Changed\0"
    "stateExitReason3Changed\0"
    "StateExitReason_3Changed\0"
    "stateExitReason4Changed\0"
    "StateExitReason_4Changed\0"
    "stateExitReason5Changed\0"
    "StateExitReason_5Changed\0"
    "stateExitReason6Changed\0"
    "StateExitReason_6Changed\0"
    "stateExitReason7Changed\0"
    "StateExitReason_7Changed\0"
    "stateExitReason8Changed\0"
    "StateExitReason_8Changed\0"
    "stateExitReason9Changed\0"
    "StateExitReason_9Changed\0altitudeStateChanged\0"
    "StatusVtolLand_AltitudeState::Enum\0"
    "AltitudeStateChanged\0setAltitudeAtState\0"
    "setAltitudeAtState0\0setAltitudeAtState_0\0"
    "setAltitudeAtState1\0setAltitudeAtState_1\0"
    "setAltitudeAtState2\0setAltitudeAtState_2\0"
    "setAltitudeAtState3\0setAltitudeAtState_3\0"
    "setAltitudeAtState4\0setAltitudeAtState_4\0"
    "setAltitudeAtState5\0setAltitudeAtState_5\0"
    "setAltitudeAtState6\0setAltitudeAtState_6\0"
    "setAltitudeAtState7\0setAltitudeAtState_7\0"
    "setAltitudeAtState8\0setAltitudeAtState_8\0"
    "setAltitudeAtState9\0setAltitudeAtState_9\0"
    "setTargetDescentRate\0settargetDescentRate\0"
    "setAverageDescentRate\0setaverageDescentRate\0"
    "setAverageDescentThrust\0setaverageDescentThrust\0"
    "setCalculatedNeutralThrust\0"
    "setcalculatedNeutralThrust\0"
    "setWtgForGroundEffect\0"
    "setWtgForGroundEffectBounceVelocity\0"
    "setWtgForGroundEffect_BounceVelocity\0"
    "setWtgForGroundEffectBounceAccel\0"
    "setWtgForGroundEffect_BounceAccel\0"
    "setState\0setStateExitReason\0"
    "setStateExitReason0\0setStateExitReason_0\0"
    "setStateExitReason1\0setStateExitReason_1\0"
    "setStateExitReason2\0setStateExitReason_2\0"
    "setStateExitReason3\0setStateExitReason_3\0"
    "setStateExitReason4\0setStateExitReason_4\0"
    "setStateExitReason5\0setStateExitReason_5\0"
    "setStateExitReason6\0setStateExitReason_6\0"
    "setStateExitReason7\0setStateExitReason_7\0"
    "setStateExitReason8\0setStateExitReason_8\0"
    "setStateExitReason9\0setStateExitReason_9\0"
    "setAltitudeState\0emitNotifications\0"
    "altitudeAtState\0getAltitudeAtState\0"
    "getAltitudeAtState_0\0getAltitudeAtState_1\0"
    "getAltitudeAtState_2\0getAltitudeAtState_3\0"
    "getAltitudeAtState_4\0getAltitudeAtState_5\0"
    "getAltitudeAtState_6\0getAltitudeAtState_7\0"
    "getAltitudeAtState_8\0getAltitudeAtState_9\0"
    "gettargetDescentRate\0getaverageDescentRate\0"
    "getaverageDescentThrust\0"
    "getcalculatedNeutralThrust\0"
    "wtgForGroundEffect\0getWtgForGroundEffect\0"
    "getWtgForGroundEffect_BounceVelocity\0"
    "getWtgForGroundEffect_BounceAccel\0"
    "getState\0stateExitReason\0getStateExitReason\0"
    "getStateExitReason_0\0getStateExitReason_1\0"
    "getStateExitReason_2\0getStateExitReason_3\0"
    "getStateExitReason_4\0getStateExitReason_5\0"
    "getStateExitReason_6\0getStateExitReason_7\0"
    "getStateExitReason_8\0getStateExitReason_9\0"
    "getAltitudeState\0altitudeAtState0\0"
    "altitudeAtState1\0altitudeAtState2\0"
    "altitudeAtState3\0altitudeAtState4\0"
    "altitudeAtState5\0altitudeAtState6\0"
    "altitudeAtState7\0altitudeAtState8\0"
    "altitudeAtState9\0targetDescentRate\0"
    "averageDescentRate\0averageDescentThrust\0"
    "calculatedNeutralThrust\0"
    "wtgForGroundEffectBounceVelocity\0"
    "wtgForGroundEffectBounceAccel\0state\0"
    "stateExitReason0\0stateExitReason1\0"
    "stateExitReason2\0stateExitReason3\0"
    "stateExitReason4\0stateExitReason5\0"
    "stateExitReason6\0stateExitReason7\0"
    "stateExitReason8\0stateExitReason9\0"
    "altitudeState\0AltitudeAtState_0\0"
    "AltitudeAtState_1\0AltitudeAtState_2\0"
    "AltitudeAtState_3\0AltitudeAtState_4\0"
    "AltitudeAtState_5\0AltitudeAtState_6\0"
    "AltitudeAtState_7\0AltitudeAtState_8\0"
    "AltitudeAtState_9\0WtgForGroundEffect_BounceVelocity\0"
    "WtgForGroundEffect_BounceAccel\0State\0"
    "StateExitReason_0\0StateExitReason_1\0"
    "StateExitReason_2\0StateExitReason_3\0"
    "StateExitReason_4\0StateExitReason_5\0"
    "StateExitReason_6\0StateExitReason_7\0"
    "StateExitReason_8\0StateExitReason_9\0"
    "AltitudeState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusVtolLand[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     153,   14, // methods
      52, 1200, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      58,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  779,    2, 0x06 /* Public */,
       5,    2,  784,    2, 0x06 /* Public */,
       6,    1,  789,    2, 0x06 /* Public */,
       7,    1,  792,    2, 0x06 /* Public */,
       8,    1,  795,    2, 0x06 /* Public */,
       9,    1,  798,    2, 0x06 /* Public */,
      10,    1,  801,    2, 0x06 /* Public */,
      11,    1,  804,    2, 0x06 /* Public */,
      12,    1,  807,    2, 0x06 /* Public */,
      13,    1,  810,    2, 0x06 /* Public */,
      14,    1,  813,    2, 0x06 /* Public */,
      15,    1,  816,    2, 0x06 /* Public */,
      16,    1,  819,    2, 0x06 /* Public */,
      17,    1,  822,    2, 0x06 /* Public */,
      18,    1,  825,    2, 0x06 /* Public */,
      19,    1,  828,    2, 0x06 /* Public */,
      20,    1,  831,    2, 0x06 /* Public */,
      21,    1,  834,    2, 0x06 /* Public */,
      22,    1,  837,    2, 0x06 /* Public */,
      23,    1,  840,    2, 0x06 /* Public */,
      24,    1,  843,    2, 0x06 /* Public */,
      25,    1,  846,    2, 0x06 /* Public */,
      26,    1,  849,    2, 0x06 /* Public */,
      27,    1,  852,    2, 0x06 /* Public */,
      28,    1,  855,    2, 0x06 /* Public */,
      29,    1,  858,    2, 0x06 /* Public */,
      30,    2,  861,    2, 0x06 /* Public */,
      31,    2,  866,    2, 0x06 /* Public */,
      32,    1,  871,    2, 0x06 /* Public */,
      33,    1,  874,    2, 0x06 /* Public */,
      34,    1,  877,    2, 0x06 /* Public */,
      35,    1,  880,    2, 0x06 /* Public */,
      36,    1,  883,    2, 0x06 /* Public */,
      38,    1,  886,    2, 0x06 /* Public */,
      39,    2,  889,    2, 0x06 /* Public */,
      41,    2,  894,    2, 0x06 /* Public */,
      42,    1,  899,    2, 0x06 /* Public */,
      43,    1,  902,    2, 0x06 /* Public */,
      44,    1,  905,    2, 0x06 /* Public */,
      45,    1,  908,    2, 0x06 /* Public */,
      46,    1,  911,    2, 0x06 /* Public */,
      47,    1,  914,    2, 0x06 /* Public */,
      48,    1,  917,    2, 0x06 /* Public */,
      49,    1,  920,    2, 0x06 /* Public */,
      50,    1,  923,    2, 0x06 /* Public */,
      51,    1,  926,    2, 0x06 /* Public */,
      52,    1,  929,    2, 0x06 /* Public */,
      53,    1,  932,    2, 0x06 /* Public */,
      54,    1,  935,    2, 0x06 /* Public */,
      55,    1,  938,    2, 0x06 /* Public */,
      56,    1,  941,    2, 0x06 /* Public */,
      57,    1,  944,    2, 0x06 /* Public */,
      58,    1,  947,    2, 0x06 /* Public */,
      59,    1,  950,    2, 0x06 /* Public */,
      60,    1,  953,    2, 0x06 /* Public */,
      61,    1,  956,    2, 0x06 /* Public */,
      62,    1,  959,    2, 0x06 /* Public */,
      64,    1,  962,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      65,    2,  965,    2, 0x0a /* Public */,
      66,    1,  970,    2, 0x0a /* Public */,
      67,    1,  973,    2, 0x0a /* Public */,
      68,    1,  976,    2, 0x0a /* Public */,
      69,    1,  979,    2, 0x0a /* Public */,
      70,    1,  982,    2, 0x0a /* Public */,
      71,    1,  985,    2, 0x0a /* Public */,
      72,    1,  988,    2, 0x0a /* Public */,
      73,    1,  991,    2, 0x0a /* Public */,
      74,    1,  994,    2, 0x0a /* Public */,
      75,    1,  997,    2, 0x0a /* Public */,
      76,    1, 1000,    2, 0x0a /* Public */,
      77,    1, 1003,    2, 0x0a /* Public */,
      78,    1, 1006,    2, 0x0a /* Public */,
      79,    1, 1009,    2, 0x0a /* Public */,
      80,    1, 1012,    2, 0x0a /* Public */,
      81,    1, 1015,    2, 0x0a /* Public */,
      82,    1, 1018,    2, 0x0a /* Public */,
      83,    1, 1021,    2, 0x0a /* Public */,
      84,    1, 1024,    2, 0x0a /* Public */,
      85,    1, 1027,    2, 0x0a /* Public */,
      86,    1, 1030,    2, 0x0a /* Public */,
      87,    1, 1033,    2, 0x0a /* Public */,
      88,    1, 1036,    2, 0x0a /* Public */,
      89,    1, 1039,    2, 0x0a /* Public */,
      90,    1, 1042,    2, 0x0a /* Public */,
      91,    1, 1045,    2, 0x0a /* Public */,
      92,    1, 1048,    2, 0x0a /* Public */,
      93,    1, 1051,    2, 0x0a /* Public */,
      94,    2, 1054,    2, 0x0a /* Public */,
      95,    1, 1059,    2, 0x0a /* Public */,
      96,    1, 1062,    2, 0x0a /* Public */,
      97,    1, 1065,    2, 0x0a /* Public */,
      98,    1, 1068,    2, 0x0a /* Public */,
      99,    1, 1071,    2, 0x0a /* Public */,
      99,    1, 1074,    2, 0x0a /* Public */,
     100,    2, 1077,    2, 0x0a /* Public */,
     100,    2, 1082,    2, 0x0a /* Public */,
     101,    1, 1087,    2, 0x0a /* Public */,
     102,    1, 1090,    2, 0x0a /* Public */,
     103,    1, 1093,    2, 0x0a /* Public */,
     104,    1, 1096,    2, 0x0a /* Public */,
     105,    1, 1099,    2, 0x0a /* Public */,
     106,    1, 1102,    2, 0x0a /* Public */,
     107,    1, 1105,    2, 0x0a /* Public */,
     108,    1, 1108,    2, 0x0a /* Public */,
     109,    1, 1111,    2, 0x0a /* Public */,
     110,    1, 1114,    2, 0x0a /* Public */,
     111,    1, 1117,    2, 0x0a /* Public */,
     112,    1, 1120,    2, 0x0a /* Public */,
     113,    1, 1123,    2, 0x0a /* Public */,
     114,    1, 1126,    2, 0x0a /* Public */,
     115,    1, 1129,    2, 0x0a /* Public */,
     116,    1, 1132,    2, 0x0a /* Public */,
     117,    1, 1135,    2, 0x0a /* Public */,
     118,    1, 1138,    2, 0x0a /* Public */,
     119,    1, 1141,    2, 0x0a /* Public */,
     120,    1, 1144,    2, 0x0a /* Public */,
     121,    1, 1147,    2, 0x0a /* Public */,
     121,    1, 1150,    2, 0x0a /* Public */,
     122,    0, 1153,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     123,    1, 1154,    2, 0x02 /* Public */,
     124,    1, 1157,    2, 0x02 /* Public */,
     125,    0, 1160,    2, 0x02 /* Public */,
     126,    0, 1161,    2, 0x02 /* Public */,
     127,    0, 1162,    2, 0x02 /* Public */,
     128,    0, 1163,    2, 0x02 /* Public */,
     129,    0, 1164,    2, 0x02 /* Public */,
     130,    0, 1165,    2, 0x02 /* Public */,
     131,    0, 1166,    2, 0x02 /* Public */,
     132,    0, 1167,    2, 0x02 /* Public */,
     133,    0, 1168,    2, 0x02 /* Public */,
     134,    0, 1169,    2, 0x02 /* Public */,
     135,    0, 1170,    2, 0x02 /* Public */,
     136,    0, 1171,    2, 0x02 /* Public */,
     137,    0, 1172,    2, 0x02 /* Public */,
     138,    0, 1173,    2, 0x02 /* Public */,
     139,    1, 1174,    2, 0x02 /* Public */,
     140,    1, 1177,    2, 0x02 /* Public */,
     141,    0, 1180,    2, 0x02 /* Public */,
     142,    0, 1181,    2, 0x02 /* Public */,
     143,    0, 1182,    2, 0x02 /* Public */,
     144,    1, 1183,    2, 0x02 /* Public */,
     145,    1, 1186,    2, 0x02 /* Public */,
     146,    0, 1189,    2, 0x02 /* Public */,
     147,    0, 1190,    2, 0x02 /* Public */,
     148,    0, 1191,    2, 0x02 /* Public */,
     149,    0, 1192,    2, 0x02 /* Public */,
     150,    0, 1193,    2, 0x02 /* Public */,
     151,    0, 1194,    2, 0x02 /* Public */,
     152,    0, 1195,    2, 0x02 /* Public */,
     153,    0, 1196,    2, 0x02 /* Public */,
     154,    0, 1197,    2, 0x02 /* Public */,
     155,    0, 1198,    2, 0x02 /* Public */,
     156,    0, 1199,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, 0x80000000 | 37,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 40,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 63,    4,
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
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, 0x80000000 | 37,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 40,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 63,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,
    0x80000000 | 40, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
     157, QMetaType::Float, 0x00495103,
     158, QMetaType::Float, 0x00495103,
     159, QMetaType::Float, 0x00495103,
     160, QMetaType::Float, 0x00495103,
     161, QMetaType::Float, 0x00495103,
     162, QMetaType::Float, 0x00495103,
     163, QMetaType::Float, 0x00495103,
     164, QMetaType::Float, 0x00495103,
     165, QMetaType::Float, 0x00495103,
     166, QMetaType::Float, 0x00495103,
     167, QMetaType::Float, 0x00495103,
     168, QMetaType::Float, 0x00495103,
     169, QMetaType::Float, 0x00495103,
     170, QMetaType::Float, 0x00495103,
     171, QMetaType::Float, 0x00495103,
     172, QMetaType::Float, 0x00495103,
     173, 0x80000000 | 37, 0x0049510b,
     174, 0x80000000 | 40, 0x0049510b,
     175, 0x80000000 | 40, 0x0049510b,
     176, 0x80000000 | 40, 0x0049510b,
     177, 0x80000000 | 40, 0x0049510b,
     178, 0x80000000 | 40, 0x0049510b,
     179, 0x80000000 | 40, 0x0049510b,
     180, 0x80000000 | 40, 0x0049510b,
     181, 0x80000000 | 40, 0x0049510b,
     182, 0x80000000 | 40, 0x0049510b,
     183, 0x80000000 | 40, 0x0049510b,
     184, 0x80000000 | 63, 0x0049510b,
     185, QMetaType::Float, 0x00495103,
     186, QMetaType::Float, 0x00495103,
     187, QMetaType::Float, 0x00495103,
     188, QMetaType::Float, 0x00495103,
     189, QMetaType::Float, 0x00495103,
     190, QMetaType::Float, 0x00495103,
     191, QMetaType::Float, 0x00495103,
     192, QMetaType::Float, 0x00495103,
     193, QMetaType::Float, 0x00495103,
     194, QMetaType::Float, 0x00495103,
     195, QMetaType::Float, 0x00495103,
     196, QMetaType::Float, 0x00495103,
     197, QMetaType::UChar, 0x00495103,
     198, QMetaType::UChar, 0x00495103,
     199, QMetaType::UChar, 0x00495103,
     200, QMetaType::UChar, 0x00495103,
     201, QMetaType::UChar, 0x00495103,
     202, QMetaType::UChar, 0x00495103,
     203, QMetaType::UChar, 0x00495103,
     204, QMetaType::UChar, 0x00495103,
     205, QMetaType::UChar, 0x00495103,
     206, QMetaType::UChar, 0x00495103,
     207, QMetaType::UChar, 0x00495103,
     208, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
       8,
      10,
      12,
      14,
      16,
      18,
      20,
      22,
      23,
      24,
      25,
      28,
      30,
      32,
      36,
      38,
      40,
      42,
      44,
      46,
      48,
      50,
      52,
      54,
      56,
       3,
       5,
       7,
       9,
      11,
      13,
      15,
      17,
      19,
      21,
      29,
      31,
      33,
      37,
      39,
      41,
      43,
      45,
      47,
      49,
      51,
      53,
      55,
      57,

       0        // eod
};

void StatusVtolLand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatusVtolLand *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->altitudeAtStateChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->AltitudeAtStateChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->altitudeAtState0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->AltitudeAtState_0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->altitudeAtState1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->AltitudeAtState_1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->altitudeAtState2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->AltitudeAtState_2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->altitudeAtState3Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->AltitudeAtState_3Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->altitudeAtState4Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->AltitudeAtState_4Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->altitudeAtState5Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->AltitudeAtState_5Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->altitudeAtState6Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->AltitudeAtState_6Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->altitudeAtState7Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->AltitudeAtState_7Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->altitudeAtState8Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->AltitudeAtState_8Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->altitudeAtState9Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->AltitudeAtState_9Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->targetDescentRateChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->averageDescentRateChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 24: _t->averageDescentThrustChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->calculatedNeutralThrustChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 26: _t->wtgForGroundEffectChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 27: _t->WtgForGroundEffectChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 28: _t->wtgForGroundEffectBounceVelocityChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 29: _t->WtgForGroundEffect_BounceVelocityChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->wtgForGroundEffectBounceAccelChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 31: _t->WtgForGroundEffect_BounceAccelChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 32: _t->stateChanged((*reinterpret_cast< const StatusVtolLand_State::Enum(*)>(_a[1]))); break;
        case 33: _t->StateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->stateExitReasonChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[2]))); break;
        case 35: _t->StateExitReasonChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 36: _t->stateExitReason0Changed((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 37: _t->StateExitReason_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->stateExitReason1Changed((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 39: _t->StateExitReason_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->stateExitReason2Changed((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 41: _t->StateExitReason_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->stateExitReason3Changed((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 43: _t->StateExitReason_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->stateExitReason4Changed((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 45: _t->StateExitReason_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->stateExitReason5Changed((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 47: _t->StateExitReason_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 48: _t->stateExitReason6Changed((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 49: _t->StateExitReason_6Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 50: _t->stateExitReason7Changed((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 51: _t->StateExitReason_7Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->stateExitReason8Changed((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 53: _t->StateExitReason_8Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 54: _t->stateExitReason9Changed((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 55: _t->StateExitReason_9Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 56: _t->altitudeStateChanged((*reinterpret_cast< const StatusVtolLand_AltitudeState::Enum(*)>(_a[1]))); break;
        case 57: _t->AltitudeStateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 58: _t->setAltitudeAtState((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 59: _t->setAltitudeAtState0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 60: _t->setAltitudeAtState_0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 61: _t->setAltitudeAtState1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 62: _t->setAltitudeAtState_1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 63: _t->setAltitudeAtState2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 64: _t->setAltitudeAtState_2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 65: _t->setAltitudeAtState3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 66: _t->setAltitudeAtState_3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 67: _t->setAltitudeAtState4((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 68: _t->setAltitudeAtState_4((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 69: _t->setAltitudeAtState5((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 70: _t->setAltitudeAtState_5((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 71: _t->setAltitudeAtState6((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 72: _t->setAltitudeAtState_6((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 73: _t->setAltitudeAtState7((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 74: _t->setAltitudeAtState_7((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 75: _t->setAltitudeAtState8((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 76: _t->setAltitudeAtState_8((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 77: _t->setAltitudeAtState9((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 78: _t->setAltitudeAtState_9((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 79: _t->setTargetDescentRate((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 80: _t->settargetDescentRate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 81: _t->setAverageDescentRate((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 82: _t->setaverageDescentRate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 83: _t->setAverageDescentThrust((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 84: _t->setaverageDescentThrust((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 85: _t->setCalculatedNeutralThrust((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 86: _t->setcalculatedNeutralThrust((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 87: _t->setWtgForGroundEffect((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 88: _t->setWtgForGroundEffectBounceVelocity((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 89: _t->setWtgForGroundEffect_BounceVelocity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 90: _t->setWtgForGroundEffectBounceAccel((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 91: _t->setWtgForGroundEffect_BounceAccel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 92: _t->setState((*reinterpret_cast< const StatusVtolLand_State::Enum(*)>(_a[1]))); break;
        case 93: _t->setState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 94: _t->setStateExitReason((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[2]))); break;
        case 95: _t->setStateExitReason((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 96: _t->setStateExitReason0((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 97: _t->setStateExitReason_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 98: _t->setStateExitReason1((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 99: _t->setStateExitReason_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 100: _t->setStateExitReason2((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 101: _t->setStateExitReason_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 102: _t->setStateExitReason3((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 103: _t->setStateExitReason_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->setStateExitReason4((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 105: _t->setStateExitReason_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 106: _t->setStateExitReason5((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 107: _t->setStateExitReason_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 108: _t->setStateExitReason6((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 109: _t->setStateExitReason_6((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 110: _t->setStateExitReason7((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 111: _t->setStateExitReason_7((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 112: _t->setStateExitReason8((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 113: _t->setStateExitReason_8((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 114: _t->setStateExitReason9((*reinterpret_cast< const StatusVtolLand_StateExitReason::Enum(*)>(_a[1]))); break;
        case 115: _t->setStateExitReason_9((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 116: _t->setAltitudeState((*reinterpret_cast< const StatusVtolLand_AltitudeState::Enum(*)>(_a[1]))); break;
        case 117: _t->setAltitudeState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 118: _t->emitNotifications(); break;
        case 119: { float _r = _t->altitudeAtState((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 120: { float _r = _t->getAltitudeAtState((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 121: { float _r = _t->getAltitudeAtState_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 122: { float _r = _t->getAltitudeAtState_1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 123: { float _r = _t->getAltitudeAtState_2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 124: { float _r = _t->getAltitudeAtState_3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 125: { float _r = _t->getAltitudeAtState_4();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 126: { float _r = _t->getAltitudeAtState_5();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 127: { float _r = _t->getAltitudeAtState_6();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 128: { float _r = _t->getAltitudeAtState_7();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 129: { float _r = _t->getAltitudeAtState_8();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 130: { float _r = _t->getAltitudeAtState_9();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 131: { float _r = _t->gettargetDescentRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 132: { float _r = _t->getaverageDescentRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 133: { float _r = _t->getaverageDescentThrust();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 134: { float _r = _t->getcalculatedNeutralThrust();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 135: { float _r = _t->wtgForGroundEffect((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 136: { float _r = _t->getWtgForGroundEffect((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 137: { float _r = _t->getWtgForGroundEffect_BounceVelocity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 138: { float _r = _t->getWtgForGroundEffect_BounceAccel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 139: { quint8 _r = _t->getState();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 140: { StatusVtolLand_StateExitReason::Enum _r = _t->stateExitReason((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_a[0]) = std::move(_r); }  break;
        case 141: { quint8 _r = _t->getStateExitReason((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 142: { quint8 _r = _t->getStateExitReason_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 143: { quint8 _r = _t->getStateExitReason_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 144: { quint8 _r = _t->getStateExitReason_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 145: { quint8 _r = _t->getStateExitReason_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 146: { quint8 _r = _t->getStateExitReason_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 147: { quint8 _r = _t->getStateExitReason_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 148: { quint8 _r = _t->getStateExitReason_6();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 149: { quint8 _r = _t->getStateExitReason_7();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 150: { quint8 _r = _t->getStateExitReason_8();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 151: { quint8 _r = _t->getStateExitReason_9();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 152: { quint8 _r = _t->getAltitudeState();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatusVtolLand::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::altitudeAtStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::AltitudeAtStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::altitudeAtState0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::AltitudeAtState_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::altitudeAtState1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::AltitudeAtState_1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::altitudeAtState2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::AltitudeAtState_2Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::altitudeAtState3Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::AltitudeAtState_3Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::altitudeAtState4Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::AltitudeAtState_4Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::altitudeAtState5Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::AltitudeAtState_5Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::altitudeAtState6Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::AltitudeAtState_6Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::altitudeAtState7Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::AltitudeAtState_7Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::altitudeAtState8Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::AltitudeAtState_8Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::altitudeAtState9Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::AltitudeAtState_9Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::targetDescentRateChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::averageDescentRateChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::averageDescentThrustChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::calculatedNeutralThrustChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::wtgForGroundEffectChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::WtgForGroundEffectChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::wtgForGroundEffectBounceVelocityChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::WtgForGroundEffect_BounceVelocityChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::wtgForGroundEffectBounceAccelChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::WtgForGroundEffect_BounceAccelChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const StatusVtolLand_State::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::stateChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::StateChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint32 , const StatusVtolLand_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::stateExitReasonChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::StateExitReasonChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const StatusVtolLand_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::stateExitReason0Changed)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::StateExitReason_0Changed)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const StatusVtolLand_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::stateExitReason1Changed)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::StateExitReason_1Changed)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const StatusVtolLand_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::stateExitReason2Changed)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::StateExitReason_2Changed)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const StatusVtolLand_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::stateExitReason3Changed)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::StateExitReason_3Changed)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const StatusVtolLand_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::stateExitReason4Changed)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::StateExitReason_4Changed)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const StatusVtolLand_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::stateExitReason5Changed)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::StateExitReason_5Changed)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const StatusVtolLand_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::stateExitReason6Changed)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::StateExitReason_6Changed)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const StatusVtolLand_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::stateExitReason7Changed)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::StateExitReason_7Changed)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const StatusVtolLand_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::stateExitReason8Changed)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::StateExitReason_8Changed)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const StatusVtolLand_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::stateExitReason9Changed)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::StateExitReason_9Changed)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(const StatusVtolLand_AltitudeState::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::altitudeStateChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (StatusVtolLand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolLand::AltitudeStateChanged)) {
                *result = 57;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StatusVtolLand *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->altitudeAtState0(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->altitudeAtState1(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->altitudeAtState2(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->altitudeAtState3(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->altitudeAtState4(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->altitudeAtState5(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->altitudeAtState6(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->altitudeAtState7(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->altitudeAtState8(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->altitudeAtState9(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->targetDescentRate(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->averageDescentRate(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->averageDescentThrust(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->calculatedNeutralThrust(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->wtgForGroundEffectBounceVelocity(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->wtgForGroundEffectBounceAccel(); break;
        case 16: *reinterpret_cast< StatusVtolLand_State::Enum*>(_v) = _t->state(); break;
        case 17: *reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v) = _t->stateExitReason0(); break;
        case 18: *reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v) = _t->stateExitReason1(); break;
        case 19: *reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v) = _t->stateExitReason2(); break;
        case 20: *reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v) = _t->stateExitReason3(); break;
        case 21: *reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v) = _t->stateExitReason4(); break;
        case 22: *reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v) = _t->stateExitReason5(); break;
        case 23: *reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v) = _t->stateExitReason6(); break;
        case 24: *reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v) = _t->stateExitReason7(); break;
        case 25: *reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v) = _t->stateExitReason8(); break;
        case 26: *reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v) = _t->stateExitReason9(); break;
        case 27: *reinterpret_cast< StatusVtolLand_AltitudeState::Enum*>(_v) = _t->altitudeState(); break;
        case 28: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_0(); break;
        case 29: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_1(); break;
        case 30: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_2(); break;
        case 31: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_3(); break;
        case 32: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_4(); break;
        case 33: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_5(); break;
        case 34: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_6(); break;
        case 35: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_7(); break;
        case 36: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_8(); break;
        case 37: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_9(); break;
        case 38: *reinterpret_cast< float*>(_v) = _t->getWtgForGroundEffect_BounceVelocity(); break;
        case 39: *reinterpret_cast< float*>(_v) = _t->getWtgForGroundEffect_BounceAccel(); break;
        case 40: *reinterpret_cast< quint8*>(_v) = _t->getState(); break;
        case 41: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_0(); break;
        case 42: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_1(); break;
        case 43: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_2(); break;
        case 44: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_3(); break;
        case 45: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_4(); break;
        case 46: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_5(); break;
        case 47: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_6(); break;
        case 48: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_7(); break;
        case 49: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_8(); break;
        case 50: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_9(); break;
        case 51: *reinterpret_cast< quint8*>(_v) = _t->getAltitudeState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StatusVtolLand *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAltitudeAtState0(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setAltitudeAtState1(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setAltitudeAtState2(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setAltitudeAtState3(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setAltitudeAtState4(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setAltitudeAtState5(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setAltitudeAtState6(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setAltitudeAtState7(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setAltitudeAtState8(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setAltitudeAtState9(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setTargetDescentRate(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setAverageDescentRate(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setAverageDescentThrust(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setCalculatedNeutralThrust(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setWtgForGroundEffectBounceVelocity(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setWtgForGroundEffectBounceAccel(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setState(*reinterpret_cast< StatusVtolLand_State::Enum*>(_v)); break;
        case 17: _t->setStateExitReason0(*reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v)); break;
        case 18: _t->setStateExitReason1(*reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v)); break;
        case 19: _t->setStateExitReason2(*reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v)); break;
        case 20: _t->setStateExitReason3(*reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v)); break;
        case 21: _t->setStateExitReason4(*reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v)); break;
        case 22: _t->setStateExitReason5(*reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v)); break;
        case 23: _t->setStateExitReason6(*reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v)); break;
        case 24: _t->setStateExitReason7(*reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v)); break;
        case 25: _t->setStateExitReason8(*reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v)); break;
        case 26: _t->setStateExitReason9(*reinterpret_cast< StatusVtolLand_StateExitReason::Enum*>(_v)); break;
        case 27: _t->setAltitudeState(*reinterpret_cast< StatusVtolLand_AltitudeState::Enum*>(_v)); break;
        case 28: _t->setAltitudeAtState_0(*reinterpret_cast< float*>(_v)); break;
        case 29: _t->setAltitudeAtState_1(*reinterpret_cast< float*>(_v)); break;
        case 30: _t->setAltitudeAtState_2(*reinterpret_cast< float*>(_v)); break;
        case 31: _t->setAltitudeAtState_3(*reinterpret_cast< float*>(_v)); break;
        case 32: _t->setAltitudeAtState_4(*reinterpret_cast< float*>(_v)); break;
        case 33: _t->setAltitudeAtState_5(*reinterpret_cast< float*>(_v)); break;
        case 34: _t->setAltitudeAtState_6(*reinterpret_cast< float*>(_v)); break;
        case 35: _t->setAltitudeAtState_7(*reinterpret_cast< float*>(_v)); break;
        case 36: _t->setAltitudeAtState_8(*reinterpret_cast< float*>(_v)); break;
        case 37: _t->setAltitudeAtState_9(*reinterpret_cast< float*>(_v)); break;
        case 38: _t->setWtgForGroundEffect_BounceVelocity(*reinterpret_cast< float*>(_v)); break;
        case 39: _t->setWtgForGroundEffect_BounceAccel(*reinterpret_cast< float*>(_v)); break;
        case 40: _t->setState(*reinterpret_cast< quint8*>(_v)); break;
        case 41: _t->setStateExitReason_0(*reinterpret_cast< quint8*>(_v)); break;
        case 42: _t->setStateExitReason_1(*reinterpret_cast< quint8*>(_v)); break;
        case 43: _t->setStateExitReason_2(*reinterpret_cast< quint8*>(_v)); break;
        case 44: _t->setStateExitReason_3(*reinterpret_cast< quint8*>(_v)); break;
        case 45: _t->setStateExitReason_4(*reinterpret_cast< quint8*>(_v)); break;
        case 46: _t->setStateExitReason_5(*reinterpret_cast< quint8*>(_v)); break;
        case 47: _t->setStateExitReason_6(*reinterpret_cast< quint8*>(_v)); break;
        case 48: _t->setStateExitReason_7(*reinterpret_cast< quint8*>(_v)); break;
        case 49: _t->setStateExitReason_8(*reinterpret_cast< quint8*>(_v)); break;
        case 50: _t->setStateExitReason_9(*reinterpret_cast< quint8*>(_v)); break;
        case 51: _t->setAltitudeState(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_StatusVtolLand[] = {
        &StatusVtolLand_State::staticMetaObject,
    &StatusVtolLand_StateExitReason::staticMetaObject,
    &StatusVtolLand_AltitudeState::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject StatusVtolLand::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_StatusVtolLand.data,
    qt_meta_data_StatusVtolLand,
    qt_static_metacall,
    qt_meta_extradata_StatusVtolLand,
    nullptr
} };


const QMetaObject *StatusVtolLand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusVtolLand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusVtolLand.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int StatusVtolLand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 153)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 153;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 153)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 153;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 52;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 52;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 52;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 52;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 52;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StatusVtolLand::altitudeAtStateChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StatusVtolLand::AltitudeAtStateChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StatusVtolLand::altitudeAtState0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StatusVtolLand::AltitudeAtState_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StatusVtolLand::altitudeAtState1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StatusVtolLand::AltitudeAtState_1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StatusVtolLand::altitudeAtState2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StatusVtolLand::AltitudeAtState_2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void StatusVtolLand::altitudeAtState3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void StatusVtolLand::AltitudeAtState_3Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void StatusVtolLand::altitudeAtState4Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void StatusVtolLand::AltitudeAtState_4Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void StatusVtolLand::altitudeAtState5Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void StatusVtolLand::AltitudeAtState_5Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void StatusVtolLand::altitudeAtState6Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void StatusVtolLand::AltitudeAtState_6Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void StatusVtolLand::altitudeAtState7Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void StatusVtolLand::AltitudeAtState_7Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void StatusVtolLand::altitudeAtState8Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void StatusVtolLand::AltitudeAtState_8Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void StatusVtolLand::altitudeAtState9Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void StatusVtolLand::AltitudeAtState_9Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void StatusVtolLand::targetDescentRateChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void StatusVtolLand::averageDescentRateChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void StatusVtolLand::averageDescentThrustChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void StatusVtolLand::calculatedNeutralThrustChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void StatusVtolLand::wtgForGroundEffectChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void StatusVtolLand::WtgForGroundEffectChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void StatusVtolLand::wtgForGroundEffectBounceVelocityChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void StatusVtolLand::WtgForGroundEffect_BounceVelocityChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void StatusVtolLand::wtgForGroundEffectBounceAccelChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void StatusVtolLand::WtgForGroundEffect_BounceAccelChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void StatusVtolLand::stateChanged(const StatusVtolLand_State::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void StatusVtolLand::StateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void StatusVtolLand::stateExitReasonChanged(quint32 _t1, const StatusVtolLand_StateExitReason::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void StatusVtolLand::StateExitReasonChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void StatusVtolLand::stateExitReason0Changed(const StatusVtolLand_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void StatusVtolLand::StateExitReason_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void StatusVtolLand::stateExitReason1Changed(const StatusVtolLand_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void StatusVtolLand::StateExitReason_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void StatusVtolLand::stateExitReason2Changed(const StatusVtolLand_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void StatusVtolLand::StateExitReason_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void StatusVtolLand::stateExitReason3Changed(const StatusVtolLand_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void StatusVtolLand::StateExitReason_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void StatusVtolLand::stateExitReason4Changed(const StatusVtolLand_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void StatusVtolLand::StateExitReason_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void StatusVtolLand::stateExitReason5Changed(const StatusVtolLand_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void StatusVtolLand::StateExitReason_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void StatusVtolLand::stateExitReason6Changed(const StatusVtolLand_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void StatusVtolLand::StateExitReason_6Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void StatusVtolLand::stateExitReason7Changed(const StatusVtolLand_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void StatusVtolLand::StateExitReason_7Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void StatusVtolLand::stateExitReason8Changed(const StatusVtolLand_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void StatusVtolLand::StateExitReason_8Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void StatusVtolLand::stateExitReason9Changed(const StatusVtolLand_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void StatusVtolLand::StateExitReason_9Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void StatusVtolLand::altitudeStateChanged(const StatusVtolLand_AltitudeState::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void StatusVtolLand::AltitudeStateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
