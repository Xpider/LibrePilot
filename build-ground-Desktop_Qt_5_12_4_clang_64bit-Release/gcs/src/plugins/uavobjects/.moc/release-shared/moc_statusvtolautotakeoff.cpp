/****************************************************************************
** Meta object code from reading C++ file 'statusvtolautotakeoff.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../statusvtolautotakeoff.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusvtolautotakeoff.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StatusVtolAutoTakeoffConstants_t {
    QByteArrayData data[6];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusVtolAutoTakeoffConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusVtolAutoTakeoffConstants_t qt_meta_stringdata_StatusVtolAutoTakeoffConstants = {
    {
QT_MOC_LITERAL(0, 0, 30), // "StatusVtolAutoTakeoffConstants"
QT_MOC_LITERAL(1, 31, 4), // "Enum"
QT_MOC_LITERAL(2, 36, 10), // "StateCount"
QT_MOC_LITERAL(3, 47, 20), // "StateExitReasonCount"
QT_MOC_LITERAL(4, 68, 18), // "AltitudeStateCount"
QT_MOC_LITERAL(5, 87, 17) // "ControlStateCount"

    },
    "StatusVtolAutoTakeoffConstants\0Enum\0"
    "StateCount\0StateExitReasonCount\0"
    "AltitudeStateCount\0ControlStateCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusVtolAutoTakeoffConstants[] = {

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
       1,    1, 0x0,    4,   19,

 // enum data: key, value
       2, uint(StatusVtolAutoTakeoffConstants::StateCount),
       3, uint(StatusVtolAutoTakeoffConstants::StateExitReasonCount),
       4, uint(StatusVtolAutoTakeoffConstants::AltitudeStateCount),
       5, uint(StatusVtolAutoTakeoffConstants::ControlStateCount),

       0        // eod
};

void StatusVtolAutoTakeoffConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusVtolAutoTakeoffConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StatusVtolAutoTakeoffConstants.data,
    qt_meta_data_StatusVtolAutoTakeoffConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusVtolAutoTakeoffConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusVtolAutoTakeoffConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusVtolAutoTakeoffConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusVtolAutoTakeoffConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StatusVtolAutoTakeoff_State_t {
    QByteArrayData data[11];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusVtolAutoTakeoff_State_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusVtolAutoTakeoff_State_t qt_meta_stringdata_StatusVtolAutoTakeoff_State = {
    {
QT_MOC_LITERAL(0, 0, 27), // "StatusVtolAutoTakeoff_State"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 8), // "Inactive"
QT_MOC_LITERAL(3, 42, 10), // "CheckState"
QT_MOC_LITERAL(4, 53, 9), // "SlowStart"
QT_MOC_LITERAL(5, 63, 8), // "ThrustUp"
QT_MOC_LITERAL(6, 72, 7), // "Takeoff"
QT_MOC_LITERAL(7, 80, 4), // "Hold"
QT_MOC_LITERAL(8, 85, 10), // "ThrustDown"
QT_MOC_LITERAL(9, 96, 9), // "ThrustOff"
QT_MOC_LITERAL(10, 106, 8) // "Disarmed"

    },
    "StatusVtolAutoTakeoff_State\0Enum\0"
    "Inactive\0CheckState\0SlowStart\0ThrustUp\0"
    "Takeoff\0Hold\0ThrustDown\0ThrustOff\0"
    "Disarmed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusVtolAutoTakeoff_State[] = {

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
       2, uint(StatusVtolAutoTakeoff_State::Inactive),
       3, uint(StatusVtolAutoTakeoff_State::CheckState),
       4, uint(StatusVtolAutoTakeoff_State::SlowStart),
       5, uint(StatusVtolAutoTakeoff_State::ThrustUp),
       6, uint(StatusVtolAutoTakeoff_State::Takeoff),
       7, uint(StatusVtolAutoTakeoff_State::Hold),
       8, uint(StatusVtolAutoTakeoff_State::ThrustDown),
       9, uint(StatusVtolAutoTakeoff_State::ThrustOff),
      10, uint(StatusVtolAutoTakeoff_State::Disarmed),

       0        // eod
};

void StatusVtolAutoTakeoff_State::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusVtolAutoTakeoff_State::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StatusVtolAutoTakeoff_State.data,
    qt_meta_data_StatusVtolAutoTakeoff_State,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusVtolAutoTakeoff_State::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusVtolAutoTakeoff_State::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusVtolAutoTakeoff_State.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusVtolAutoTakeoff_State::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StatusVtolAutoTakeoff_StateExitReason_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusVtolAutoTakeoff_StateExitReason_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusVtolAutoTakeoff_StateExitReason_t qt_meta_stringdata_StatusVtolAutoTakeoff_StateExitReason = {
    {
QT_MOC_LITERAL(0, 0, 37), // "StatusVtolAutoTakeoff_StateEx..."
QT_MOC_LITERAL(1, 38, 4), // "Enum"
QT_MOC_LITERAL(2, 43, 4), // "None"
QT_MOC_LITERAL(3, 48, 12), // "ArrivedAtAlt"
QT_MOC_LITERAL(4, 61, 10), // "ZeroThrust"
QT_MOC_LITERAL(5, 72, 13), // "PositionError"
QT_MOC_LITERAL(6, 86, 7) // "Timeout"

    },
    "StatusVtolAutoTakeoff_StateExitReason\0"
    "Enum\0None\0ArrivedAtAlt\0ZeroThrust\0"
    "PositionError\0Timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusVtolAutoTakeoff_StateExitReason[] = {

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
       1,    1, 0x0,    5,   19,

 // enum data: key, value
       2, uint(StatusVtolAutoTakeoff_StateExitReason::None),
       3, uint(StatusVtolAutoTakeoff_StateExitReason::ArrivedAtAlt),
       4, uint(StatusVtolAutoTakeoff_StateExitReason::ZeroThrust),
       5, uint(StatusVtolAutoTakeoff_StateExitReason::PositionError),
       6, uint(StatusVtolAutoTakeoff_StateExitReason::Timeout),

       0        // eod
};

void StatusVtolAutoTakeoff_StateExitReason::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusVtolAutoTakeoff_StateExitReason::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StatusVtolAutoTakeoff_StateExitReason.data,
    qt_meta_data_StatusVtolAutoTakeoff_StateExitReason,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusVtolAutoTakeoff_StateExitReason::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusVtolAutoTakeoff_StateExitReason::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusVtolAutoTakeoff_StateExitReason.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusVtolAutoTakeoff_StateExitReason::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StatusVtolAutoTakeoff_AltitudeState_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusVtolAutoTakeoff_AltitudeState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusVtolAutoTakeoff_AltitudeState_t qt_meta_stringdata_StatusVtolAutoTakeoff_AltitudeState = {
    {
QT_MOC_LITERAL(0, 0, 35), // "StatusVtolAutoTakeoff_Altitud..."
QT_MOC_LITERAL(1, 36, 4), // "Enum"
QT_MOC_LITERAL(2, 41, 4), // "High"
QT_MOC_LITERAL(3, 46, 3) // "Low"

    },
    "StatusVtolAutoTakeoff_AltitudeState\0"
    "Enum\0High\0Low"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusVtolAutoTakeoff_AltitudeState[] = {

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
       2, uint(StatusVtolAutoTakeoff_AltitudeState::High),
       3, uint(StatusVtolAutoTakeoff_AltitudeState::Low),

       0        // eod
};

void StatusVtolAutoTakeoff_AltitudeState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusVtolAutoTakeoff_AltitudeState::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StatusVtolAutoTakeoff_AltitudeState.data,
    qt_meta_data_StatusVtolAutoTakeoff_AltitudeState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusVtolAutoTakeoff_AltitudeState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusVtolAutoTakeoff_AltitudeState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusVtolAutoTakeoff_AltitudeState.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusVtolAutoTakeoff_AltitudeState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StatusVtolAutoTakeoff_ControlState_t {
    QByteArrayData data[8];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusVtolAutoTakeoff_ControlState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusVtolAutoTakeoff_ControlState_t qt_meta_stringdata_StatusVtolAutoTakeoff_ControlState = {
    {
QT_MOC_LITERAL(0, 0, 34), // "StatusVtolAutoTakeoff_Control..."
QT_MOC_LITERAL(1, 35, 4), // "Enum"
QT_MOC_LITERAL(2, 40, 12), // "WaitForArmed"
QT_MOC_LITERAL(3, 53, 18), // "WaitForMidThrottle"
QT_MOC_LITERAL(4, 72, 19), // "RequireUnarmedFirst"
QT_MOC_LITERAL(5, 92, 8), // "Initiate"
QT_MOC_LITERAL(6, 101, 12), // "PositionHold"
QT_MOC_LITERAL(7, 114, 5) // "Abort"

    },
    "StatusVtolAutoTakeoff_ControlState\0"
    "Enum\0WaitForArmed\0WaitForMidThrottle\0"
    "RequireUnarmedFirst\0Initiate\0PositionHold\0"
    "Abort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusVtolAutoTakeoff_ControlState[] = {

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
       1,    1, 0x0,    6,   19,

 // enum data: key, value
       2, uint(StatusVtolAutoTakeoff_ControlState::WaitForArmed),
       3, uint(StatusVtolAutoTakeoff_ControlState::WaitForMidThrottle),
       4, uint(StatusVtolAutoTakeoff_ControlState::RequireUnarmedFirst),
       5, uint(StatusVtolAutoTakeoff_ControlState::Initiate),
       6, uint(StatusVtolAutoTakeoff_ControlState::PositionHold),
       7, uint(StatusVtolAutoTakeoff_ControlState::Abort),

       0        // eod
};

void StatusVtolAutoTakeoff_ControlState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusVtolAutoTakeoff_ControlState::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StatusVtolAutoTakeoff_ControlState.data,
    qt_meta_data_StatusVtolAutoTakeoff_ControlState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusVtolAutoTakeoff_ControlState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusVtolAutoTakeoff_ControlState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusVtolAutoTakeoff_ControlState.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusVtolAutoTakeoff_ControlState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StatusVtolAutoTakeoff_t {
    QByteArrayData data[177];
    char stringdata0[3592];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusVtolAutoTakeoff_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusVtolAutoTakeoff_t qt_meta_stringdata_StatusVtolAutoTakeoff = {
    {
QT_MOC_LITERAL(0, 0, 21), // "StatusVtolAutoTakeoff"
QT_MOC_LITERAL(1, 22, 22), // "altitudeAtStateChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5), // "index"
QT_MOC_LITERAL(4, 52, 5), // "value"
QT_MOC_LITERAL(5, 58, 22), // "AltitudeAtStateChanged"
QT_MOC_LITERAL(6, 81, 23), // "altitudeAtState0Changed"
QT_MOC_LITERAL(7, 105, 24), // "AltitudeAtState_0Changed"
QT_MOC_LITERAL(8, 130, 23), // "altitudeAtState1Changed"
QT_MOC_LITERAL(9, 154, 24), // "AltitudeAtState_1Changed"
QT_MOC_LITERAL(10, 179, 23), // "altitudeAtState2Changed"
QT_MOC_LITERAL(11, 203, 24), // "AltitudeAtState_2Changed"
QT_MOC_LITERAL(12, 228, 23), // "altitudeAtState3Changed"
QT_MOC_LITERAL(13, 252, 24), // "AltitudeAtState_3Changed"
QT_MOC_LITERAL(14, 277, 23), // "altitudeAtState4Changed"
QT_MOC_LITERAL(15, 301, 24), // "AltitudeAtState_4Changed"
QT_MOC_LITERAL(16, 326, 23), // "altitudeAtState5Changed"
QT_MOC_LITERAL(17, 350, 24), // "AltitudeAtState_5Changed"
QT_MOC_LITERAL(18, 375, 23), // "altitudeAtState6Changed"
QT_MOC_LITERAL(19, 399, 24), // "AltitudeAtState_6Changed"
QT_MOC_LITERAL(20, 424, 23), // "altitudeAtState7Changed"
QT_MOC_LITERAL(21, 448, 24), // "AltitudeAtState_7Changed"
QT_MOC_LITERAL(22, 473, 23), // "altitudeAtState8Changed"
QT_MOC_LITERAL(23, 497, 24), // "AltitudeAtState_8Changed"
QT_MOC_LITERAL(24, 522, 23), // "altitudeAtState9Changed"
QT_MOC_LITERAL(25, 546, 24), // "AltitudeAtState_9Changed"
QT_MOC_LITERAL(26, 571, 12), // "stateChanged"
QT_MOC_LITERAL(27, 584, 33), // "StatusVtolAutoTakeoff_State::..."
QT_MOC_LITERAL(28, 618, 12), // "StateChanged"
QT_MOC_LITERAL(29, 631, 22), // "stateExitReasonChanged"
QT_MOC_LITERAL(30, 654, 43), // "StatusVtolAutoTakeoff_StateEx..."
QT_MOC_LITERAL(31, 698, 22), // "StateExitReasonChanged"
QT_MOC_LITERAL(32, 721, 23), // "stateExitReason0Changed"
QT_MOC_LITERAL(33, 745, 24), // "StateExitReason_0Changed"
QT_MOC_LITERAL(34, 770, 23), // "stateExitReason1Changed"
QT_MOC_LITERAL(35, 794, 24), // "StateExitReason_1Changed"
QT_MOC_LITERAL(36, 819, 23), // "stateExitReason2Changed"
QT_MOC_LITERAL(37, 843, 24), // "StateExitReason_2Changed"
QT_MOC_LITERAL(38, 868, 23), // "stateExitReason3Changed"
QT_MOC_LITERAL(39, 892, 24), // "StateExitReason_3Changed"
QT_MOC_LITERAL(40, 917, 23), // "stateExitReason4Changed"
QT_MOC_LITERAL(41, 941, 24), // "StateExitReason_4Changed"
QT_MOC_LITERAL(42, 966, 23), // "stateExitReason5Changed"
QT_MOC_LITERAL(43, 990, 24), // "StateExitReason_5Changed"
QT_MOC_LITERAL(44, 1015, 23), // "stateExitReason6Changed"
QT_MOC_LITERAL(45, 1039, 24), // "StateExitReason_6Changed"
QT_MOC_LITERAL(46, 1064, 23), // "stateExitReason7Changed"
QT_MOC_LITERAL(47, 1088, 24), // "StateExitReason_7Changed"
QT_MOC_LITERAL(48, 1113, 23), // "stateExitReason8Changed"
QT_MOC_LITERAL(49, 1137, 24), // "StateExitReason_8Changed"
QT_MOC_LITERAL(50, 1162, 23), // "stateExitReason9Changed"
QT_MOC_LITERAL(51, 1186, 24), // "StateExitReason_9Changed"
QT_MOC_LITERAL(52, 1211, 20), // "altitudeStateChanged"
QT_MOC_LITERAL(53, 1232, 41), // "StatusVtolAutoTakeoff_Altitud..."
QT_MOC_LITERAL(54, 1274, 20), // "AltitudeStateChanged"
QT_MOC_LITERAL(55, 1295, 19), // "controlStateChanged"
QT_MOC_LITERAL(56, 1315, 40), // "StatusVtolAutoTakeoff_Control..."
QT_MOC_LITERAL(57, 1356, 19), // "ControlStateChanged"
QT_MOC_LITERAL(58, 1376, 18), // "setAltitudeAtState"
QT_MOC_LITERAL(59, 1395, 19), // "setAltitudeAtState0"
QT_MOC_LITERAL(60, 1415, 20), // "setAltitudeAtState_0"
QT_MOC_LITERAL(61, 1436, 19), // "setAltitudeAtState1"
QT_MOC_LITERAL(62, 1456, 20), // "setAltitudeAtState_1"
QT_MOC_LITERAL(63, 1477, 19), // "setAltitudeAtState2"
QT_MOC_LITERAL(64, 1497, 20), // "setAltitudeAtState_2"
QT_MOC_LITERAL(65, 1518, 19), // "setAltitudeAtState3"
QT_MOC_LITERAL(66, 1538, 20), // "setAltitudeAtState_3"
QT_MOC_LITERAL(67, 1559, 19), // "setAltitudeAtState4"
QT_MOC_LITERAL(68, 1579, 20), // "setAltitudeAtState_4"
QT_MOC_LITERAL(69, 1600, 19), // "setAltitudeAtState5"
QT_MOC_LITERAL(70, 1620, 20), // "setAltitudeAtState_5"
QT_MOC_LITERAL(71, 1641, 19), // "setAltitudeAtState6"
QT_MOC_LITERAL(72, 1661, 20), // "setAltitudeAtState_6"
QT_MOC_LITERAL(73, 1682, 19), // "setAltitudeAtState7"
QT_MOC_LITERAL(74, 1702, 20), // "setAltitudeAtState_7"
QT_MOC_LITERAL(75, 1723, 19), // "setAltitudeAtState8"
QT_MOC_LITERAL(76, 1743, 20), // "setAltitudeAtState_8"
QT_MOC_LITERAL(77, 1764, 19), // "setAltitudeAtState9"
QT_MOC_LITERAL(78, 1784, 20), // "setAltitudeAtState_9"
QT_MOC_LITERAL(79, 1805, 8), // "setState"
QT_MOC_LITERAL(80, 1814, 18), // "setStateExitReason"
QT_MOC_LITERAL(81, 1833, 19), // "setStateExitReason0"
QT_MOC_LITERAL(82, 1853, 20), // "setStateExitReason_0"
QT_MOC_LITERAL(83, 1874, 19), // "setStateExitReason1"
QT_MOC_LITERAL(84, 1894, 20), // "setStateExitReason_1"
QT_MOC_LITERAL(85, 1915, 19), // "setStateExitReason2"
QT_MOC_LITERAL(86, 1935, 20), // "setStateExitReason_2"
QT_MOC_LITERAL(87, 1956, 19), // "setStateExitReason3"
QT_MOC_LITERAL(88, 1976, 20), // "setStateExitReason_3"
QT_MOC_LITERAL(89, 1997, 19), // "setStateExitReason4"
QT_MOC_LITERAL(90, 2017, 20), // "setStateExitReason_4"
QT_MOC_LITERAL(91, 2038, 19), // "setStateExitReason5"
QT_MOC_LITERAL(92, 2058, 20), // "setStateExitReason_5"
QT_MOC_LITERAL(93, 2079, 19), // "setStateExitReason6"
QT_MOC_LITERAL(94, 2099, 20), // "setStateExitReason_6"
QT_MOC_LITERAL(95, 2120, 19), // "setStateExitReason7"
QT_MOC_LITERAL(96, 2140, 20), // "setStateExitReason_7"
QT_MOC_LITERAL(97, 2161, 19), // "setStateExitReason8"
QT_MOC_LITERAL(98, 2181, 20), // "setStateExitReason_8"
QT_MOC_LITERAL(99, 2202, 19), // "setStateExitReason9"
QT_MOC_LITERAL(100, 2222, 20), // "setStateExitReason_9"
QT_MOC_LITERAL(101, 2243, 16), // "setAltitudeState"
QT_MOC_LITERAL(102, 2260, 15), // "setControlState"
QT_MOC_LITERAL(103, 2276, 17), // "emitNotifications"
QT_MOC_LITERAL(104, 2294, 15), // "altitudeAtState"
QT_MOC_LITERAL(105, 2310, 18), // "getAltitudeAtState"
QT_MOC_LITERAL(106, 2329, 20), // "getAltitudeAtState_0"
QT_MOC_LITERAL(107, 2350, 20), // "getAltitudeAtState_1"
QT_MOC_LITERAL(108, 2371, 20), // "getAltitudeAtState_2"
QT_MOC_LITERAL(109, 2392, 20), // "getAltitudeAtState_3"
QT_MOC_LITERAL(110, 2413, 20), // "getAltitudeAtState_4"
QT_MOC_LITERAL(111, 2434, 20), // "getAltitudeAtState_5"
QT_MOC_LITERAL(112, 2455, 20), // "getAltitudeAtState_6"
QT_MOC_LITERAL(113, 2476, 20), // "getAltitudeAtState_7"
QT_MOC_LITERAL(114, 2497, 20), // "getAltitudeAtState_8"
QT_MOC_LITERAL(115, 2518, 20), // "getAltitudeAtState_9"
QT_MOC_LITERAL(116, 2539, 8), // "getState"
QT_MOC_LITERAL(117, 2548, 15), // "stateExitReason"
QT_MOC_LITERAL(118, 2564, 18), // "getStateExitReason"
QT_MOC_LITERAL(119, 2583, 20), // "getStateExitReason_0"
QT_MOC_LITERAL(120, 2604, 20), // "getStateExitReason_1"
QT_MOC_LITERAL(121, 2625, 20), // "getStateExitReason_2"
QT_MOC_LITERAL(122, 2646, 20), // "getStateExitReason_3"
QT_MOC_LITERAL(123, 2667, 20), // "getStateExitReason_4"
QT_MOC_LITERAL(124, 2688, 20), // "getStateExitReason_5"
QT_MOC_LITERAL(125, 2709, 20), // "getStateExitReason_6"
QT_MOC_LITERAL(126, 2730, 20), // "getStateExitReason_7"
QT_MOC_LITERAL(127, 2751, 20), // "getStateExitReason_8"
QT_MOC_LITERAL(128, 2772, 20), // "getStateExitReason_9"
QT_MOC_LITERAL(129, 2793, 16), // "getAltitudeState"
QT_MOC_LITERAL(130, 2810, 15), // "getControlState"
QT_MOC_LITERAL(131, 2826, 16), // "altitudeAtState0"
QT_MOC_LITERAL(132, 2843, 16), // "altitudeAtState1"
QT_MOC_LITERAL(133, 2860, 16), // "altitudeAtState2"
QT_MOC_LITERAL(134, 2877, 16), // "altitudeAtState3"
QT_MOC_LITERAL(135, 2894, 16), // "altitudeAtState4"
QT_MOC_LITERAL(136, 2911, 16), // "altitudeAtState5"
QT_MOC_LITERAL(137, 2928, 16), // "altitudeAtState6"
QT_MOC_LITERAL(138, 2945, 16), // "altitudeAtState7"
QT_MOC_LITERAL(139, 2962, 16), // "altitudeAtState8"
QT_MOC_LITERAL(140, 2979, 16), // "altitudeAtState9"
QT_MOC_LITERAL(141, 2996, 5), // "state"
QT_MOC_LITERAL(142, 3002, 16), // "stateExitReason0"
QT_MOC_LITERAL(143, 3019, 16), // "stateExitReason1"
QT_MOC_LITERAL(144, 3036, 16), // "stateExitReason2"
QT_MOC_LITERAL(145, 3053, 16), // "stateExitReason3"
QT_MOC_LITERAL(146, 3070, 16), // "stateExitReason4"
QT_MOC_LITERAL(147, 3087, 16), // "stateExitReason5"
QT_MOC_LITERAL(148, 3104, 16), // "stateExitReason6"
QT_MOC_LITERAL(149, 3121, 16), // "stateExitReason7"
QT_MOC_LITERAL(150, 3138, 16), // "stateExitReason8"
QT_MOC_LITERAL(151, 3155, 16), // "stateExitReason9"
QT_MOC_LITERAL(152, 3172, 13), // "altitudeState"
QT_MOC_LITERAL(153, 3186, 12), // "controlState"
QT_MOC_LITERAL(154, 3199, 17), // "AltitudeAtState_0"
QT_MOC_LITERAL(155, 3217, 17), // "AltitudeAtState_1"
QT_MOC_LITERAL(156, 3235, 17), // "AltitudeAtState_2"
QT_MOC_LITERAL(157, 3253, 17), // "AltitudeAtState_3"
QT_MOC_LITERAL(158, 3271, 17), // "AltitudeAtState_4"
QT_MOC_LITERAL(159, 3289, 17), // "AltitudeAtState_5"
QT_MOC_LITERAL(160, 3307, 17), // "AltitudeAtState_6"
QT_MOC_LITERAL(161, 3325, 17), // "AltitudeAtState_7"
QT_MOC_LITERAL(162, 3343, 17), // "AltitudeAtState_8"
QT_MOC_LITERAL(163, 3361, 17), // "AltitudeAtState_9"
QT_MOC_LITERAL(164, 3379, 5), // "State"
QT_MOC_LITERAL(165, 3385, 17), // "StateExitReason_0"
QT_MOC_LITERAL(166, 3403, 17), // "StateExitReason_1"
QT_MOC_LITERAL(167, 3421, 17), // "StateExitReason_2"
QT_MOC_LITERAL(168, 3439, 17), // "StateExitReason_3"
QT_MOC_LITERAL(169, 3457, 17), // "StateExitReason_4"
QT_MOC_LITERAL(170, 3475, 17), // "StateExitReason_5"
QT_MOC_LITERAL(171, 3493, 17), // "StateExitReason_6"
QT_MOC_LITERAL(172, 3511, 17), // "StateExitReason_7"
QT_MOC_LITERAL(173, 3529, 17), // "StateExitReason_8"
QT_MOC_LITERAL(174, 3547, 17), // "StateExitReason_9"
QT_MOC_LITERAL(175, 3565, 13), // "AltitudeState"
QT_MOC_LITERAL(176, 3579, 12) // "ControlState"

    },
    "StatusVtolAutoTakeoff\0altitudeAtStateChanged\0"
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
    "AltitudeAtState_9Changed\0stateChanged\0"
    "StatusVtolAutoTakeoff_State::Enum\0"
    "StateChanged\0stateExitReasonChanged\0"
    "StatusVtolAutoTakeoff_StateExitReason::Enum\0"
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
    "StatusVtolAutoTakeoff_AltitudeState::Enum\0"
    "AltitudeStateChanged\0controlStateChanged\0"
    "StatusVtolAutoTakeoff_ControlState::Enum\0"
    "ControlStateChanged\0setAltitudeAtState\0"
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
    "setAltitudeState\0setControlState\0"
    "emitNotifications\0altitudeAtState\0"
    "getAltitudeAtState\0getAltitudeAtState_0\0"
    "getAltitudeAtState_1\0getAltitudeAtState_2\0"
    "getAltitudeAtState_3\0getAltitudeAtState_4\0"
    "getAltitudeAtState_5\0getAltitudeAtState_6\0"
    "getAltitudeAtState_7\0getAltitudeAtState_8\0"
    "getAltitudeAtState_9\0getState\0"
    "stateExitReason\0getStateExitReason\0"
    "getStateExitReason_0\0getStateExitReason_1\0"
    "getStateExitReason_2\0getStateExitReason_3\0"
    "getStateExitReason_4\0getStateExitReason_5\0"
    "getStateExitReason_6\0getStateExitReason_7\0"
    "getStateExitReason_8\0getStateExitReason_9\0"
    "getAltitudeState\0getControlState\0"
    "altitudeAtState0\0altitudeAtState1\0"
    "altitudeAtState2\0altitudeAtState3\0"
    "altitudeAtState4\0altitudeAtState5\0"
    "altitudeAtState6\0altitudeAtState7\0"
    "altitudeAtState8\0altitudeAtState9\0"
    "state\0stateExitReason0\0stateExitReason1\0"
    "stateExitReason2\0stateExitReason3\0"
    "stateExitReason4\0stateExitReason5\0"
    "stateExitReason6\0stateExitReason7\0"
    "stateExitReason8\0stateExitReason9\0"
    "altitudeState\0controlState\0AltitudeAtState_0\0"
    "AltitudeAtState_1\0AltitudeAtState_2\0"
    "AltitudeAtState_3\0AltitudeAtState_4\0"
    "AltitudeAtState_5\0AltitudeAtState_6\0"
    "AltitudeAtState_7\0AltitudeAtState_8\0"
    "AltitudeAtState_9\0State\0StateExitReason_0\0"
    "StateExitReason_1\0StateExitReason_2\0"
    "StateExitReason_3\0StateExitReason_4\0"
    "StateExitReason_5\0StateExitReason_6\0"
    "StateExitReason_7\0StateExitReason_8\0"
    "StateExitReason_9\0AltitudeState\0"
    "ControlState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusVtolAutoTakeoff[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     127,   14, // methods
      46,  996, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      50,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  649,    2, 0x06 /* Public */,
       5,    2,  654,    2, 0x06 /* Public */,
       6,    1,  659,    2, 0x06 /* Public */,
       7,    1,  662,    2, 0x06 /* Public */,
       8,    1,  665,    2, 0x06 /* Public */,
       9,    1,  668,    2, 0x06 /* Public */,
      10,    1,  671,    2, 0x06 /* Public */,
      11,    1,  674,    2, 0x06 /* Public */,
      12,    1,  677,    2, 0x06 /* Public */,
      13,    1,  680,    2, 0x06 /* Public */,
      14,    1,  683,    2, 0x06 /* Public */,
      15,    1,  686,    2, 0x06 /* Public */,
      16,    1,  689,    2, 0x06 /* Public */,
      17,    1,  692,    2, 0x06 /* Public */,
      18,    1,  695,    2, 0x06 /* Public */,
      19,    1,  698,    2, 0x06 /* Public */,
      20,    1,  701,    2, 0x06 /* Public */,
      21,    1,  704,    2, 0x06 /* Public */,
      22,    1,  707,    2, 0x06 /* Public */,
      23,    1,  710,    2, 0x06 /* Public */,
      24,    1,  713,    2, 0x06 /* Public */,
      25,    1,  716,    2, 0x06 /* Public */,
      26,    1,  719,    2, 0x06 /* Public */,
      28,    1,  722,    2, 0x06 /* Public */,
      29,    2,  725,    2, 0x06 /* Public */,
      31,    2,  730,    2, 0x06 /* Public */,
      32,    1,  735,    2, 0x06 /* Public */,
      33,    1,  738,    2, 0x06 /* Public */,
      34,    1,  741,    2, 0x06 /* Public */,
      35,    1,  744,    2, 0x06 /* Public */,
      36,    1,  747,    2, 0x06 /* Public */,
      37,    1,  750,    2, 0x06 /* Public */,
      38,    1,  753,    2, 0x06 /* Public */,
      39,    1,  756,    2, 0x06 /* Public */,
      40,    1,  759,    2, 0x06 /* Public */,
      41,    1,  762,    2, 0x06 /* Public */,
      42,    1,  765,    2, 0x06 /* Public */,
      43,    1,  768,    2, 0x06 /* Public */,
      44,    1,  771,    2, 0x06 /* Public */,
      45,    1,  774,    2, 0x06 /* Public */,
      46,    1,  777,    2, 0x06 /* Public */,
      47,    1,  780,    2, 0x06 /* Public */,
      48,    1,  783,    2, 0x06 /* Public */,
      49,    1,  786,    2, 0x06 /* Public */,
      50,    1,  789,    2, 0x06 /* Public */,
      51,    1,  792,    2, 0x06 /* Public */,
      52,    1,  795,    2, 0x06 /* Public */,
      54,    1,  798,    2, 0x06 /* Public */,
      55,    1,  801,    2, 0x06 /* Public */,
      57,    1,  804,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      58,    2,  807,    2, 0x0a /* Public */,
      59,    1,  812,    2, 0x0a /* Public */,
      60,    1,  815,    2, 0x0a /* Public */,
      61,    1,  818,    2, 0x0a /* Public */,
      62,    1,  821,    2, 0x0a /* Public */,
      63,    1,  824,    2, 0x0a /* Public */,
      64,    1,  827,    2, 0x0a /* Public */,
      65,    1,  830,    2, 0x0a /* Public */,
      66,    1,  833,    2, 0x0a /* Public */,
      67,    1,  836,    2, 0x0a /* Public */,
      68,    1,  839,    2, 0x0a /* Public */,
      69,    1,  842,    2, 0x0a /* Public */,
      70,    1,  845,    2, 0x0a /* Public */,
      71,    1,  848,    2, 0x0a /* Public */,
      72,    1,  851,    2, 0x0a /* Public */,
      73,    1,  854,    2, 0x0a /* Public */,
      74,    1,  857,    2, 0x0a /* Public */,
      75,    1,  860,    2, 0x0a /* Public */,
      76,    1,  863,    2, 0x0a /* Public */,
      77,    1,  866,    2, 0x0a /* Public */,
      78,    1,  869,    2, 0x0a /* Public */,
      79,    1,  872,    2, 0x0a /* Public */,
      79,    1,  875,    2, 0x0a /* Public */,
      80,    2,  878,    2, 0x0a /* Public */,
      80,    2,  883,    2, 0x0a /* Public */,
      81,    1,  888,    2, 0x0a /* Public */,
      82,    1,  891,    2, 0x0a /* Public */,
      83,    1,  894,    2, 0x0a /* Public */,
      84,    1,  897,    2, 0x0a /* Public */,
      85,    1,  900,    2, 0x0a /* Public */,
      86,    1,  903,    2, 0x0a /* Public */,
      87,    1,  906,    2, 0x0a /* Public */,
      88,    1,  909,    2, 0x0a /* Public */,
      89,    1,  912,    2, 0x0a /* Public */,
      90,    1,  915,    2, 0x0a /* Public */,
      91,    1,  918,    2, 0x0a /* Public */,
      92,    1,  921,    2, 0x0a /* Public */,
      93,    1,  924,    2, 0x0a /* Public */,
      94,    1,  927,    2, 0x0a /* Public */,
      95,    1,  930,    2, 0x0a /* Public */,
      96,    1,  933,    2, 0x0a /* Public */,
      97,    1,  936,    2, 0x0a /* Public */,
      98,    1,  939,    2, 0x0a /* Public */,
      99,    1,  942,    2, 0x0a /* Public */,
     100,    1,  945,    2, 0x0a /* Public */,
     101,    1,  948,    2, 0x0a /* Public */,
     101,    1,  951,    2, 0x0a /* Public */,
     102,    1,  954,    2, 0x0a /* Public */,
     102,    1,  957,    2, 0x0a /* Public */,
     103,    0,  960,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     104,    1,  961,    2, 0x02 /* Public */,
     105,    1,  964,    2, 0x02 /* Public */,
     106,    0,  967,    2, 0x02 /* Public */,
     107,    0,  968,    2, 0x02 /* Public */,
     108,    0,  969,    2, 0x02 /* Public */,
     109,    0,  970,    2, 0x02 /* Public */,
     110,    0,  971,    2, 0x02 /* Public */,
     111,    0,  972,    2, 0x02 /* Public */,
     112,    0,  973,    2, 0x02 /* Public */,
     113,    0,  974,    2, 0x02 /* Public */,
     114,    0,  975,    2, 0x02 /* Public */,
     115,    0,  976,    2, 0x02 /* Public */,
     116,    0,  977,    2, 0x02 /* Public */,
     117,    1,  978,    2, 0x02 /* Public */,
     118,    1,  981,    2, 0x02 /* Public */,
     119,    0,  984,    2, 0x02 /* Public */,
     120,    0,  985,    2, 0x02 /* Public */,
     121,    0,  986,    2, 0x02 /* Public */,
     122,    0,  987,    2, 0x02 /* Public */,
     123,    0,  988,    2, 0x02 /* Public */,
     124,    0,  989,    2, 0x02 /* Public */,
     125,    0,  990,    2, 0x02 /* Public */,
     126,    0,  991,    2, 0x02 /* Public */,
     127,    0,  992,    2, 0x02 /* Public */,
     128,    0,  993,    2, 0x02 /* Public */,
     129,    0,  994,    2, 0x02 /* Public */,
     130,    0,  995,    2, 0x02 /* Public */,

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
    QMetaType::Void, 0x80000000 | 27,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 30,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 56,    4,
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
    QMetaType::Void, 0x80000000 | 27,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 30,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 30,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 56,    4,
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
    QMetaType::UChar,
    0x80000000 | 30, QMetaType::UInt,    3,
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
    QMetaType::UChar,

 // properties: name, type, flags
     131, QMetaType::Float, 0x00495103,
     132, QMetaType::Float, 0x00495103,
     133, QMetaType::Float, 0x00495103,
     134, QMetaType::Float, 0x00495103,
     135, QMetaType::Float, 0x00495103,
     136, QMetaType::Float, 0x00495103,
     137, QMetaType::Float, 0x00495103,
     138, QMetaType::Float, 0x00495103,
     139, QMetaType::Float, 0x00495103,
     140, QMetaType::Float, 0x00495103,
     141, 0x80000000 | 27, 0x0049510b,
     142, 0x80000000 | 30, 0x0049510b,
     143, 0x80000000 | 30, 0x0049510b,
     144, 0x80000000 | 30, 0x0049510b,
     145, 0x80000000 | 30, 0x0049510b,
     146, 0x80000000 | 30, 0x0049510b,
     147, 0x80000000 | 30, 0x0049510b,
     148, 0x80000000 | 30, 0x0049510b,
     149, 0x80000000 | 30, 0x0049510b,
     150, 0x80000000 | 30, 0x0049510b,
     151, 0x80000000 | 30, 0x0049510b,
     152, 0x80000000 | 53, 0x0049510b,
     153, 0x80000000 | 56, 0x0049510b,
     154, QMetaType::Float, 0x00495103,
     155, QMetaType::Float, 0x00495103,
     156, QMetaType::Float, 0x00495103,
     157, QMetaType::Float, 0x00495103,
     158, QMetaType::Float, 0x00495103,
     159, QMetaType::Float, 0x00495103,
     160, QMetaType::Float, 0x00495103,
     161, QMetaType::Float, 0x00495103,
     162, QMetaType::Float, 0x00495103,
     163, QMetaType::Float, 0x00495103,
     164, QMetaType::UChar, 0x00495103,
     165, QMetaType::UChar, 0x00495103,
     166, QMetaType::UChar, 0x00495103,
     167, QMetaType::UChar, 0x00495103,
     168, QMetaType::UChar, 0x00495103,
     169, QMetaType::UChar, 0x00495103,
     170, QMetaType::UChar, 0x00495103,
     171, QMetaType::UChar, 0x00495103,
     172, QMetaType::UChar, 0x00495103,
     173, QMetaType::UChar, 0x00495103,
     174, QMetaType::UChar, 0x00495103,
     175, QMetaType::UChar, 0x00495103,
     176, QMetaType::UChar, 0x00495103,

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
      26,
      28,
      30,
      32,
      34,
      36,
      38,
      40,
      42,
      44,
      46,
      48,
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
      23,
      27,
      29,
      31,
      33,
      35,
      37,
      39,
      41,
      43,
      45,
      47,
      49,

       0        // eod
};

void StatusVtolAutoTakeoff::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatusVtolAutoTakeoff *>(_o);
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
        case 22: _t->stateChanged((*reinterpret_cast< const StatusVtolAutoTakeoff_State::Enum(*)>(_a[1]))); break;
        case 23: _t->StateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->stateExitReasonChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[2]))); break;
        case 25: _t->StateExitReasonChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 26: _t->stateExitReason0Changed((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 27: _t->StateExitReason_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->stateExitReason1Changed((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 29: _t->StateExitReason_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->stateExitReason2Changed((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 31: _t->StateExitReason_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->stateExitReason3Changed((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 33: _t->StateExitReason_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->stateExitReason4Changed((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 35: _t->StateExitReason_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->stateExitReason5Changed((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 37: _t->StateExitReason_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->stateExitReason6Changed((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 39: _t->StateExitReason_6Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->stateExitReason7Changed((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 41: _t->StateExitReason_7Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->stateExitReason8Changed((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 43: _t->StateExitReason_8Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->stateExitReason9Changed((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 45: _t->StateExitReason_9Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->altitudeStateChanged((*reinterpret_cast< const StatusVtolAutoTakeoff_AltitudeState::Enum(*)>(_a[1]))); break;
        case 47: _t->AltitudeStateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 48: _t->controlStateChanged((*reinterpret_cast< const StatusVtolAutoTakeoff_ControlState::Enum(*)>(_a[1]))); break;
        case 49: _t->ControlStateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 50: _t->setAltitudeAtState((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 51: _t->setAltitudeAtState0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 52: _t->setAltitudeAtState_0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 53: _t->setAltitudeAtState1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 54: _t->setAltitudeAtState_1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 55: _t->setAltitudeAtState2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 56: _t->setAltitudeAtState_2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 57: _t->setAltitudeAtState3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 58: _t->setAltitudeAtState_3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 59: _t->setAltitudeAtState4((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 60: _t->setAltitudeAtState_4((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 61: _t->setAltitudeAtState5((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 62: _t->setAltitudeAtState_5((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 63: _t->setAltitudeAtState6((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 64: _t->setAltitudeAtState_6((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 65: _t->setAltitudeAtState7((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 66: _t->setAltitudeAtState_7((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 67: _t->setAltitudeAtState8((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 68: _t->setAltitudeAtState_8((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 69: _t->setAltitudeAtState9((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 70: _t->setAltitudeAtState_9((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 71: _t->setState((*reinterpret_cast< const StatusVtolAutoTakeoff_State::Enum(*)>(_a[1]))); break;
        case 72: _t->setState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 73: _t->setStateExitReason((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[2]))); break;
        case 74: _t->setStateExitReason((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 75: _t->setStateExitReason0((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 76: _t->setStateExitReason_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 77: _t->setStateExitReason1((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 78: _t->setStateExitReason_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 79: _t->setStateExitReason2((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 80: _t->setStateExitReason_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 81: _t->setStateExitReason3((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 82: _t->setStateExitReason_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 83: _t->setStateExitReason4((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 84: _t->setStateExitReason_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 85: _t->setStateExitReason5((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 86: _t->setStateExitReason_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 87: _t->setStateExitReason6((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 88: _t->setStateExitReason_6((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 89: _t->setStateExitReason7((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 90: _t->setStateExitReason_7((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 91: _t->setStateExitReason8((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 92: _t->setStateExitReason_8((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 93: _t->setStateExitReason9((*reinterpret_cast< const StatusVtolAutoTakeoff_StateExitReason::Enum(*)>(_a[1]))); break;
        case 94: _t->setStateExitReason_9((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 95: _t->setAltitudeState((*reinterpret_cast< const StatusVtolAutoTakeoff_AltitudeState::Enum(*)>(_a[1]))); break;
        case 96: _t->setAltitudeState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 97: _t->setControlState((*reinterpret_cast< const StatusVtolAutoTakeoff_ControlState::Enum(*)>(_a[1]))); break;
        case 98: _t->setControlState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 99: _t->emitNotifications(); break;
        case 100: { float _r = _t->altitudeAtState((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 101: { float _r = _t->getAltitudeAtState((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 102: { float _r = _t->getAltitudeAtState_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 103: { float _r = _t->getAltitudeAtState_1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 104: { float _r = _t->getAltitudeAtState_2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 105: { float _r = _t->getAltitudeAtState_3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 106: { float _r = _t->getAltitudeAtState_4();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 107: { float _r = _t->getAltitudeAtState_5();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 108: { float _r = _t->getAltitudeAtState_6();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 109: { float _r = _t->getAltitudeAtState_7();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 110: { float _r = _t->getAltitudeAtState_8();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 111: { float _r = _t->getAltitudeAtState_9();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 112: { quint8 _r = _t->getState();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 113: { StatusVtolAutoTakeoff_StateExitReason::Enum _r = _t->stateExitReason((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_a[0]) = std::move(_r); }  break;
        case 114: { quint8 _r = _t->getStateExitReason((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 115: { quint8 _r = _t->getStateExitReason_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 116: { quint8 _r = _t->getStateExitReason_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 117: { quint8 _r = _t->getStateExitReason_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 118: { quint8 _r = _t->getStateExitReason_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 119: { quint8 _r = _t->getStateExitReason_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 120: { quint8 _r = _t->getStateExitReason_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 121: { quint8 _r = _t->getStateExitReason_6();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 122: { quint8 _r = _t->getStateExitReason_7();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 123: { quint8 _r = _t->getStateExitReason_8();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 124: { quint8 _r = _t->getStateExitReason_9();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 125: { quint8 _r = _t->getAltitudeState();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 126: { quint8 _r = _t->getControlState();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::altitudeAtStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::AltitudeAtStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::altitudeAtState0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::AltitudeAtState_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::altitudeAtState1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::AltitudeAtState_1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::altitudeAtState2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::AltitudeAtState_2Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::altitudeAtState3Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::AltitudeAtState_3Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::altitudeAtState4Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::AltitudeAtState_4Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::altitudeAtState5Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::AltitudeAtState_5Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::altitudeAtState6Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::AltitudeAtState_6Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::altitudeAtState7Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::AltitudeAtState_7Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::altitudeAtState8Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::AltitudeAtState_8Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::altitudeAtState9Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::AltitudeAtState_9Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_State::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::stateChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::StateChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint32 , const StatusVtolAutoTakeoff_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::stateExitReasonChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::StateExitReasonChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::stateExitReason0Changed)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::StateExitReason_0Changed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::stateExitReason1Changed)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::StateExitReason_1Changed)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::stateExitReason2Changed)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::StateExitReason_2Changed)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::stateExitReason3Changed)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::StateExitReason_3Changed)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::stateExitReason4Changed)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::StateExitReason_4Changed)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::stateExitReason5Changed)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::StateExitReason_5Changed)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::stateExitReason6Changed)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::StateExitReason_6Changed)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::stateExitReason7Changed)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::StateExitReason_7Changed)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::stateExitReason8Changed)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::StateExitReason_8Changed)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_StateExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::stateExitReason9Changed)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::StateExitReason_9Changed)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_AltitudeState::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::altitudeStateChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::AltitudeStateChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(const StatusVtolAutoTakeoff_ControlState::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::controlStateChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (StatusVtolAutoTakeoff::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusVtolAutoTakeoff::ControlStateChanged)) {
                *result = 49;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StatusVtolAutoTakeoff *>(_o);
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
        case 10: *reinterpret_cast< StatusVtolAutoTakeoff_State::Enum*>(_v) = _t->state(); break;
        case 11: *reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v) = _t->stateExitReason0(); break;
        case 12: *reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v) = _t->stateExitReason1(); break;
        case 13: *reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v) = _t->stateExitReason2(); break;
        case 14: *reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v) = _t->stateExitReason3(); break;
        case 15: *reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v) = _t->stateExitReason4(); break;
        case 16: *reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v) = _t->stateExitReason5(); break;
        case 17: *reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v) = _t->stateExitReason6(); break;
        case 18: *reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v) = _t->stateExitReason7(); break;
        case 19: *reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v) = _t->stateExitReason8(); break;
        case 20: *reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v) = _t->stateExitReason9(); break;
        case 21: *reinterpret_cast< StatusVtolAutoTakeoff_AltitudeState::Enum*>(_v) = _t->altitudeState(); break;
        case 22: *reinterpret_cast< StatusVtolAutoTakeoff_ControlState::Enum*>(_v) = _t->controlState(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_0(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_1(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_2(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_3(); break;
        case 27: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_4(); break;
        case 28: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_5(); break;
        case 29: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_6(); break;
        case 30: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_7(); break;
        case 31: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_8(); break;
        case 32: *reinterpret_cast< float*>(_v) = _t->getAltitudeAtState_9(); break;
        case 33: *reinterpret_cast< quint8*>(_v) = _t->getState(); break;
        case 34: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_0(); break;
        case 35: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_1(); break;
        case 36: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_2(); break;
        case 37: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_3(); break;
        case 38: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_4(); break;
        case 39: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_5(); break;
        case 40: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_6(); break;
        case 41: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_7(); break;
        case 42: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_8(); break;
        case 43: *reinterpret_cast< quint8*>(_v) = _t->getStateExitReason_9(); break;
        case 44: *reinterpret_cast< quint8*>(_v) = _t->getAltitudeState(); break;
        case 45: *reinterpret_cast< quint8*>(_v) = _t->getControlState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StatusVtolAutoTakeoff *>(_o);
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
        case 10: _t->setState(*reinterpret_cast< StatusVtolAutoTakeoff_State::Enum*>(_v)); break;
        case 11: _t->setStateExitReason0(*reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v)); break;
        case 12: _t->setStateExitReason1(*reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v)); break;
        case 13: _t->setStateExitReason2(*reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v)); break;
        case 14: _t->setStateExitReason3(*reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v)); break;
        case 15: _t->setStateExitReason4(*reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v)); break;
        case 16: _t->setStateExitReason5(*reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v)); break;
        case 17: _t->setStateExitReason6(*reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v)); break;
        case 18: _t->setStateExitReason7(*reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v)); break;
        case 19: _t->setStateExitReason8(*reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v)); break;
        case 20: _t->setStateExitReason9(*reinterpret_cast< StatusVtolAutoTakeoff_StateExitReason::Enum*>(_v)); break;
        case 21: _t->setAltitudeState(*reinterpret_cast< StatusVtolAutoTakeoff_AltitudeState::Enum*>(_v)); break;
        case 22: _t->setControlState(*reinterpret_cast< StatusVtolAutoTakeoff_ControlState::Enum*>(_v)); break;
        case 23: _t->setAltitudeAtState_0(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setAltitudeAtState_1(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setAltitudeAtState_2(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setAltitudeAtState_3(*reinterpret_cast< float*>(_v)); break;
        case 27: _t->setAltitudeAtState_4(*reinterpret_cast< float*>(_v)); break;
        case 28: _t->setAltitudeAtState_5(*reinterpret_cast< float*>(_v)); break;
        case 29: _t->setAltitudeAtState_6(*reinterpret_cast< float*>(_v)); break;
        case 30: _t->setAltitudeAtState_7(*reinterpret_cast< float*>(_v)); break;
        case 31: _t->setAltitudeAtState_8(*reinterpret_cast< float*>(_v)); break;
        case 32: _t->setAltitudeAtState_9(*reinterpret_cast< float*>(_v)); break;
        case 33: _t->setState(*reinterpret_cast< quint8*>(_v)); break;
        case 34: _t->setStateExitReason_0(*reinterpret_cast< quint8*>(_v)); break;
        case 35: _t->setStateExitReason_1(*reinterpret_cast< quint8*>(_v)); break;
        case 36: _t->setStateExitReason_2(*reinterpret_cast< quint8*>(_v)); break;
        case 37: _t->setStateExitReason_3(*reinterpret_cast< quint8*>(_v)); break;
        case 38: _t->setStateExitReason_4(*reinterpret_cast< quint8*>(_v)); break;
        case 39: _t->setStateExitReason_5(*reinterpret_cast< quint8*>(_v)); break;
        case 40: _t->setStateExitReason_6(*reinterpret_cast< quint8*>(_v)); break;
        case 41: _t->setStateExitReason_7(*reinterpret_cast< quint8*>(_v)); break;
        case 42: _t->setStateExitReason_8(*reinterpret_cast< quint8*>(_v)); break;
        case 43: _t->setStateExitReason_9(*reinterpret_cast< quint8*>(_v)); break;
        case 44: _t->setAltitudeState(*reinterpret_cast< quint8*>(_v)); break;
        case 45: _t->setControlState(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_StatusVtolAutoTakeoff[] = {
        &StatusVtolAutoTakeoff_State::staticMetaObject,
    &StatusVtolAutoTakeoff_StateExitReason::staticMetaObject,
    &StatusVtolAutoTakeoff_AltitudeState::staticMetaObject,
    &StatusVtolAutoTakeoff_ControlState::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject StatusVtolAutoTakeoff::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_StatusVtolAutoTakeoff.data,
    qt_meta_data_StatusVtolAutoTakeoff,
    qt_static_metacall,
    qt_meta_extradata_StatusVtolAutoTakeoff,
    nullptr
} };


const QMetaObject *StatusVtolAutoTakeoff::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusVtolAutoTakeoff::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusVtolAutoTakeoff.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int StatusVtolAutoTakeoff::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 127)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 127;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 127)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 127;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 46;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StatusVtolAutoTakeoff::altitudeAtStateChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StatusVtolAutoTakeoff::AltitudeAtStateChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StatusVtolAutoTakeoff::altitudeAtState0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StatusVtolAutoTakeoff::AltitudeAtState_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StatusVtolAutoTakeoff::altitudeAtState1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StatusVtolAutoTakeoff::AltitudeAtState_1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StatusVtolAutoTakeoff::altitudeAtState2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StatusVtolAutoTakeoff::AltitudeAtState_2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void StatusVtolAutoTakeoff::altitudeAtState3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void StatusVtolAutoTakeoff::AltitudeAtState_3Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void StatusVtolAutoTakeoff::altitudeAtState4Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void StatusVtolAutoTakeoff::AltitudeAtState_4Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void StatusVtolAutoTakeoff::altitudeAtState5Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void StatusVtolAutoTakeoff::AltitudeAtState_5Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void StatusVtolAutoTakeoff::altitudeAtState6Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void StatusVtolAutoTakeoff::AltitudeAtState_6Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void StatusVtolAutoTakeoff::altitudeAtState7Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void StatusVtolAutoTakeoff::AltitudeAtState_7Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void StatusVtolAutoTakeoff::altitudeAtState8Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void StatusVtolAutoTakeoff::AltitudeAtState_8Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void StatusVtolAutoTakeoff::altitudeAtState9Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void StatusVtolAutoTakeoff::AltitudeAtState_9Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void StatusVtolAutoTakeoff::stateChanged(const StatusVtolAutoTakeoff_State::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void StatusVtolAutoTakeoff::StateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void StatusVtolAutoTakeoff::stateExitReasonChanged(quint32 _t1, const StatusVtolAutoTakeoff_StateExitReason::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void StatusVtolAutoTakeoff::StateExitReasonChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void StatusVtolAutoTakeoff::stateExitReason0Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void StatusVtolAutoTakeoff::StateExitReason_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void StatusVtolAutoTakeoff::stateExitReason1Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void StatusVtolAutoTakeoff::StateExitReason_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void StatusVtolAutoTakeoff::stateExitReason2Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void StatusVtolAutoTakeoff::StateExitReason_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void StatusVtolAutoTakeoff::stateExitReason3Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void StatusVtolAutoTakeoff::StateExitReason_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void StatusVtolAutoTakeoff::stateExitReason4Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void StatusVtolAutoTakeoff::StateExitReason_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void StatusVtolAutoTakeoff::stateExitReason5Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void StatusVtolAutoTakeoff::StateExitReason_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void StatusVtolAutoTakeoff::stateExitReason6Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void StatusVtolAutoTakeoff::StateExitReason_6Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void StatusVtolAutoTakeoff::stateExitReason7Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void StatusVtolAutoTakeoff::StateExitReason_7Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void StatusVtolAutoTakeoff::stateExitReason8Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void StatusVtolAutoTakeoff::StateExitReason_8Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void StatusVtolAutoTakeoff::stateExitReason9Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void StatusVtolAutoTakeoff::StateExitReason_9Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void StatusVtolAutoTakeoff::altitudeStateChanged(const StatusVtolAutoTakeoff_AltitudeState::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void StatusVtolAutoTakeoff::AltitudeStateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void StatusVtolAutoTakeoff::controlStateChanged(const StatusVtolAutoTakeoff_ControlState::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void StatusVtolAutoTakeoff::ControlStateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
