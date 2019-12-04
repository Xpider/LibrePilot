/****************************************************************************
** Meta object code from reading C++ file 'flightstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../flightstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightStatusConstants_t {
    QByteArrayData data[9];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightStatusConstants_t qt_meta_stringdata_FlightStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 21), // "FlightStatusConstants"
QT_MOC_LITERAL(1, 22, 4), // "Enum"
QT_MOC_LITERAL(2, 27, 10), // "ArmedCount"
QT_MOC_LITERAL(3, 38, 15), // "FlightModeCount"
QT_MOC_LITERAL(4, 54, 29), // "AlwaysStabilizeWhenArmedCount"
QT_MOC_LITERAL(5, 84, 21), // "FlightModeAssistCount"
QT_MOC_LITERAL(6, 106, 25), // "AssistedControlStateCount"
QT_MOC_LITERAL(7, 132, 26), // "AssistedThrottleStateCount"
QT_MOC_LITERAL(8, 159, 17) // "ControlChainCount"

    },
    "FlightStatusConstants\0Enum\0ArmedCount\0"
    "FlightModeCount\0AlwaysStabilizeWhenArmedCount\0"
    "FlightModeAssistCount\0AssistedControlStateCount\0"
    "AssistedThrottleStateCount\0ControlChainCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightStatusConstants[] = {

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
       1,    1, 0x0,    7,   19,

 // enum data: key, value
       2, uint(FlightStatusConstants::ArmedCount),
       3, uint(FlightStatusConstants::FlightModeCount),
       4, uint(FlightStatusConstants::AlwaysStabilizeWhenArmedCount),
       5, uint(FlightStatusConstants::FlightModeAssistCount),
       6, uint(FlightStatusConstants::AssistedControlStateCount),
       7, uint(FlightStatusConstants::AssistedThrottleStateCount),
       8, uint(FlightStatusConstants::ControlChainCount),

       0        // eod
};

void FlightStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightStatusConstants.data,
    qt_meta_data_FlightStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightStatus_Armed_t {
    QByteArrayData data[5];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightStatus_Armed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightStatus_Armed_t qt_meta_stringdata_FlightStatus_Armed = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FlightStatus_Armed"
QT_MOC_LITERAL(1, 19, 4), // "Enum"
QT_MOC_LITERAL(2, 24, 8), // "Disarmed"
QT_MOC_LITERAL(3, 33, 6), // "Arming"
QT_MOC_LITERAL(4, 40, 5) // "Armed"

    },
    "FlightStatus_Armed\0Enum\0Disarmed\0"
    "Arming\0Armed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightStatus_Armed[] = {

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
       2, uint(FlightStatus_Armed::Disarmed),
       3, uint(FlightStatus_Armed::Arming),
       4, uint(FlightStatus_Armed::Armed),

       0        // eod
};

void FlightStatus_Armed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightStatus_Armed::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightStatus_Armed.data,
    qt_meta_data_FlightStatus_Armed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightStatus_Armed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightStatus_Armed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightStatus_Armed.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightStatus_Armed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightStatus_FlightMode_t {
    QByteArrayData data[21];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightStatus_FlightMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightStatus_FlightMode_t qt_meta_stringdata_FlightStatus_FlightMode = {
    {
QT_MOC_LITERAL(0, 0, 23), // "FlightStatus_FlightMode"
QT_MOC_LITERAL(1, 24, 4), // "Enum"
QT_MOC_LITERAL(2, 29, 6), // "Manual"
QT_MOC_LITERAL(3, 36, 11), // "Stabilized1"
QT_MOC_LITERAL(4, 48, 11), // "Stabilized2"
QT_MOC_LITERAL(5, 60, 11), // "Stabilized3"
QT_MOC_LITERAL(6, 72, 11), // "Stabilized4"
QT_MOC_LITERAL(7, 84, 11), // "Stabilized5"
QT_MOC_LITERAL(8, 96, 11), // "Stabilized6"
QT_MOC_LITERAL(9, 108, 12), // "PositionHold"
QT_MOC_LITERAL(10, 121, 10), // "CourseLock"
QT_MOC_LITERAL(11, 132, 12), // "VelocityRoam"
QT_MOC_LITERAL(12, 145, 9), // "HomeLeash"
QT_MOC_LITERAL(13, 155, 16), // "AbsolutePosition"
QT_MOC_LITERAL(14, 172, 12), // "ReturnToBase"
QT_MOC_LITERAL(15, 185, 4), // "Land"
QT_MOC_LITERAL(16, 190, 11), // "PathPlanner"
QT_MOC_LITERAL(17, 202, 3), // "POI"
QT_MOC_LITERAL(18, 206, 10), // "AutoCruise"
QT_MOC_LITERAL(19, 217, 11), // "AutoTakeoff"
QT_MOC_LITERAL(20, 229, 8) // "AutoTune"

    },
    "FlightStatus_FlightMode\0Enum\0Manual\0"
    "Stabilized1\0Stabilized2\0Stabilized3\0"
    "Stabilized4\0Stabilized5\0Stabilized6\0"
    "PositionHold\0CourseLock\0VelocityRoam\0"
    "HomeLeash\0AbsolutePosition\0ReturnToBase\0"
    "Land\0PathPlanner\0POI\0AutoCruise\0"
    "AutoTakeoff\0AutoTune"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightStatus_FlightMode[] = {

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
       1,    1, 0x0,   19,   19,

 // enum data: key, value
       2, uint(FlightStatus_FlightMode::Manual),
       3, uint(FlightStatus_FlightMode::Stabilized1),
       4, uint(FlightStatus_FlightMode::Stabilized2),
       5, uint(FlightStatus_FlightMode::Stabilized3),
       6, uint(FlightStatus_FlightMode::Stabilized4),
       7, uint(FlightStatus_FlightMode::Stabilized5),
       8, uint(FlightStatus_FlightMode::Stabilized6),
       9, uint(FlightStatus_FlightMode::PositionHold),
      10, uint(FlightStatus_FlightMode::CourseLock),
      11, uint(FlightStatus_FlightMode::VelocityRoam),
      12, uint(FlightStatus_FlightMode::HomeLeash),
      13, uint(FlightStatus_FlightMode::AbsolutePosition),
      14, uint(FlightStatus_FlightMode::ReturnToBase),
      15, uint(FlightStatus_FlightMode::Land),
      16, uint(FlightStatus_FlightMode::PathPlanner),
      17, uint(FlightStatus_FlightMode::POI),
      18, uint(FlightStatus_FlightMode::AutoCruise),
      19, uint(FlightStatus_FlightMode::AutoTakeoff),
      20, uint(FlightStatus_FlightMode::AutoTune),

       0        // eod
};

void FlightStatus_FlightMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightStatus_FlightMode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightStatus_FlightMode.data,
    qt_meta_data_FlightStatus_FlightMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightStatus_FlightMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightStatus_FlightMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightStatus_FlightMode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightStatus_FlightMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightStatus_AlwaysStabilizeWhenArmed_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightStatus_AlwaysStabilizeWhenArmed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightStatus_AlwaysStabilizeWhenArmed_t qt_meta_stringdata_FlightStatus_AlwaysStabilizeWhenArmed = {
    {
QT_MOC_LITERAL(0, 0, 37), // "FlightStatus_AlwaysStabilizeW..."
QT_MOC_LITERAL(1, 38, 4), // "Enum"
QT_MOC_LITERAL(2, 43, 5), // "False"
QT_MOC_LITERAL(3, 49, 4) // "True"

    },
    "FlightStatus_AlwaysStabilizeWhenArmed\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightStatus_AlwaysStabilizeWhenArmed[] = {

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
       2, uint(FlightStatus_AlwaysStabilizeWhenArmed::False),
       3, uint(FlightStatus_AlwaysStabilizeWhenArmed::True),

       0        // eod
};

void FlightStatus_AlwaysStabilizeWhenArmed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightStatus_AlwaysStabilizeWhenArmed::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightStatus_AlwaysStabilizeWhenArmed.data,
    qt_meta_data_FlightStatus_AlwaysStabilizeWhenArmed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightStatus_AlwaysStabilizeWhenArmed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightStatus_AlwaysStabilizeWhenArmed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightStatus_AlwaysStabilizeWhenArmed.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightStatus_AlwaysStabilizeWhenArmed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightStatus_FlightModeAssist_t {
    QByteArrayData data[5];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightStatus_FlightModeAssist_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightStatus_FlightModeAssist_t qt_meta_stringdata_FlightStatus_FlightModeAssist = {
    {
QT_MOC_LITERAL(0, 0, 29), // "FlightStatus_FlightModeAssist"
QT_MOC_LITERAL(1, 30, 4), // "Enum"
QT_MOC_LITERAL(2, 35, 4), // "None"
QT_MOC_LITERAL(3, 40, 23), // "GPSAssist_PrimaryThrust"
QT_MOC_LITERAL(4, 64, 9) // "GPSAssist"

    },
    "FlightStatus_FlightModeAssist\0Enum\0"
    "None\0GPSAssist_PrimaryThrust\0GPSAssist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightStatus_FlightModeAssist[] = {

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
       2, uint(FlightStatus_FlightModeAssist::None),
       3, uint(FlightStatus_FlightModeAssist::GPSAssist_PrimaryThrust),
       4, uint(FlightStatus_FlightModeAssist::GPSAssist),

       0        // eod
};

void FlightStatus_FlightModeAssist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightStatus_FlightModeAssist::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightStatus_FlightModeAssist.data,
    qt_meta_data_FlightStatus_FlightModeAssist,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightStatus_FlightModeAssist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightStatus_FlightModeAssist::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightStatus_FlightModeAssist.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightStatus_FlightModeAssist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightStatus_AssistedControlState_t {
    QByteArrayData data[5];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightStatus_AssistedControlState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightStatus_AssistedControlState_t qt_meta_stringdata_FlightStatus_AssistedControlState = {
    {
QT_MOC_LITERAL(0, 0, 33), // "FlightStatus_AssistedControlS..."
QT_MOC_LITERAL(1, 34, 4), // "Enum"
QT_MOC_LITERAL(2, 39, 7), // "Primary"
QT_MOC_LITERAL(3, 47, 5), // "Brake"
QT_MOC_LITERAL(4, 53, 4) // "Hold"

    },
    "FlightStatus_AssistedControlState\0"
    "Enum\0Primary\0Brake\0Hold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightStatus_AssistedControlState[] = {

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
       2, uint(FlightStatus_AssistedControlState::Primary),
       3, uint(FlightStatus_AssistedControlState::Brake),
       4, uint(FlightStatus_AssistedControlState::Hold),

       0        // eod
};

void FlightStatus_AssistedControlState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightStatus_AssistedControlState::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightStatus_AssistedControlState.data,
    qt_meta_data_FlightStatus_AssistedControlState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightStatus_AssistedControlState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightStatus_AssistedControlState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightStatus_AssistedControlState.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightStatus_AssistedControlState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightStatus_AssistedThrottleState_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightStatus_AssistedThrottleState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightStatus_AssistedThrottleState_t qt_meta_stringdata_FlightStatus_AssistedThrottleState = {
    {
QT_MOC_LITERAL(0, 0, 34), // "FlightStatus_AssistedThrottle..."
QT_MOC_LITERAL(1, 35, 4), // "Enum"
QT_MOC_LITERAL(2, 40, 6), // "Manual"
QT_MOC_LITERAL(3, 47, 4), // "Auto"
QT_MOC_LITERAL(4, 52, 12) // "AutoOverride"

    },
    "FlightStatus_AssistedThrottleState\0"
    "Enum\0Manual\0Auto\0AutoOverride"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightStatus_AssistedThrottleState[] = {

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
       2, uint(FlightStatus_AssistedThrottleState::Manual),
       3, uint(FlightStatus_AssistedThrottleState::Auto),
       4, uint(FlightStatus_AssistedThrottleState::AutoOverride),

       0        // eod
};

void FlightStatus_AssistedThrottleState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightStatus_AssistedThrottleState::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightStatus_AssistedThrottleState.data,
    qt_meta_data_FlightStatus_AssistedThrottleState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightStatus_AssistedThrottleState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightStatus_AssistedThrottleState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightStatus_AssistedThrottleState.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightStatus_AssistedThrottleState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightStatus_ControlChain_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightStatus_ControlChain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightStatus_ControlChain_t qt_meta_stringdata_FlightStatus_ControlChain = {
    {
QT_MOC_LITERAL(0, 0, 25), // "FlightStatus_ControlChain"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 5), // "False"
QT_MOC_LITERAL(3, 37, 4) // "True"

    },
    "FlightStatus_ControlChain\0Enum\0False\0"
    "True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightStatus_ControlChain[] = {

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
       2, uint(FlightStatus_ControlChain::False),
       3, uint(FlightStatus_ControlChain::True),

       0        // eod
};

void FlightStatus_ControlChain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightStatus_ControlChain::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightStatus_ControlChain.data,
    qt_meta_data_FlightStatus_ControlChain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightStatus_ControlChain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightStatus_ControlChain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightStatus_ControlChain.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightStatus_ControlChain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightStatus_t {
    QByteArrayData data[74];
    char stringdata0[1715];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightStatus_t qt_meta_stringdata_FlightStatus = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FlightStatus"
QT_MOC_LITERAL(1, 13, 12), // "armedChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 24), // "FlightStatus_Armed::Enum"
QT_MOC_LITERAL(4, 52, 5), // "value"
QT_MOC_LITERAL(5, 58, 12), // "ArmedChanged"
QT_MOC_LITERAL(6, 71, 17), // "flightModeChanged"
QT_MOC_LITERAL(7, 89, 29), // "FlightStatus_FlightMode::Enum"
QT_MOC_LITERAL(8, 119, 17), // "FlightModeChanged"
QT_MOC_LITERAL(9, 137, 31), // "alwaysStabilizeWhenArmedChanged"
QT_MOC_LITERAL(10, 169, 43), // "FlightStatus_AlwaysStabilizeW..."
QT_MOC_LITERAL(11, 213, 31), // "AlwaysStabilizeWhenArmedChanged"
QT_MOC_LITERAL(12, 245, 23), // "flightModeAssistChanged"
QT_MOC_LITERAL(13, 269, 35), // "FlightStatus_FlightModeAssist..."
QT_MOC_LITERAL(14, 305, 23), // "FlightModeAssistChanged"
QT_MOC_LITERAL(15, 329, 27), // "assistedControlStateChanged"
QT_MOC_LITERAL(16, 357, 39), // "FlightStatus_AssistedControlS..."
QT_MOC_LITERAL(17, 397, 27), // "AssistedControlStateChanged"
QT_MOC_LITERAL(18, 425, 28), // "assistedThrottleStateChanged"
QT_MOC_LITERAL(19, 454, 40), // "FlightStatus_AssistedThrottle..."
QT_MOC_LITERAL(20, 495, 28), // "AssistedThrottleStateChanged"
QT_MOC_LITERAL(21, 524, 19), // "controlChainChanged"
QT_MOC_LITERAL(22, 544, 5), // "index"
QT_MOC_LITERAL(23, 550, 31), // "FlightStatus_ControlChain::Enum"
QT_MOC_LITERAL(24, 582, 19), // "ControlChainChanged"
QT_MOC_LITERAL(25, 602, 32), // "controlChainStabilizationChanged"
QT_MOC_LITERAL(26, 635, 33), // "ControlChain_StabilizationCha..."
QT_MOC_LITERAL(27, 669, 31), // "controlChainPathFollowerChanged"
QT_MOC_LITERAL(28, 701, 32), // "ControlChain_PathFollowerChanged"
QT_MOC_LITERAL(29, 734, 30), // "controlChainPathPlannerChanged"
QT_MOC_LITERAL(30, 765, 31), // "ControlChain_PathPlannerChanged"
QT_MOC_LITERAL(31, 797, 8), // "setArmed"
QT_MOC_LITERAL(32, 806, 13), // "setFlightMode"
QT_MOC_LITERAL(33, 820, 27), // "setAlwaysStabilizeWhenArmed"
QT_MOC_LITERAL(34, 848, 19), // "setFlightModeAssist"
QT_MOC_LITERAL(35, 868, 23), // "setAssistedControlState"
QT_MOC_LITERAL(36, 892, 24), // "setAssistedThrottleState"
QT_MOC_LITERAL(37, 917, 15), // "setControlChain"
QT_MOC_LITERAL(38, 933, 28), // "setControlChainStabilization"
QT_MOC_LITERAL(39, 962, 29), // "setControlChain_Stabilization"
QT_MOC_LITERAL(40, 992, 27), // "setControlChainPathFollower"
QT_MOC_LITERAL(41, 1020, 28), // "setControlChain_PathFollower"
QT_MOC_LITERAL(42, 1049, 26), // "setControlChainPathPlanner"
QT_MOC_LITERAL(43, 1076, 27), // "setControlChain_PathPlanner"
QT_MOC_LITERAL(44, 1104, 17), // "emitNotifications"
QT_MOC_LITERAL(45, 1122, 8), // "getArmed"
QT_MOC_LITERAL(46, 1131, 13), // "getFlightMode"
QT_MOC_LITERAL(47, 1145, 27), // "getAlwaysStabilizeWhenArmed"
QT_MOC_LITERAL(48, 1173, 19), // "getFlightModeAssist"
QT_MOC_LITERAL(49, 1193, 23), // "getAssistedControlState"
QT_MOC_LITERAL(50, 1217, 24), // "getAssistedThrottleState"
QT_MOC_LITERAL(51, 1242, 12), // "controlChain"
QT_MOC_LITERAL(52, 1255, 15), // "getControlChain"
QT_MOC_LITERAL(53, 1271, 29), // "getControlChain_Stabilization"
QT_MOC_LITERAL(54, 1301, 28), // "getControlChain_PathFollower"
QT_MOC_LITERAL(55, 1330, 27), // "getControlChain_PathPlanner"
QT_MOC_LITERAL(56, 1358, 5), // "armed"
QT_MOC_LITERAL(57, 1364, 10), // "flightMode"
QT_MOC_LITERAL(58, 1375, 24), // "alwaysStabilizeWhenArmed"
QT_MOC_LITERAL(59, 1400, 16), // "flightModeAssist"
QT_MOC_LITERAL(60, 1417, 20), // "assistedControlState"
QT_MOC_LITERAL(61, 1438, 21), // "assistedThrottleState"
QT_MOC_LITERAL(62, 1460, 25), // "controlChainStabilization"
QT_MOC_LITERAL(63, 1486, 24), // "controlChainPathFollower"
QT_MOC_LITERAL(64, 1511, 23), // "controlChainPathPlanner"
QT_MOC_LITERAL(65, 1535, 5), // "Armed"
QT_MOC_LITERAL(66, 1541, 10), // "FlightMode"
QT_MOC_LITERAL(67, 1552, 24), // "AlwaysStabilizeWhenArmed"
QT_MOC_LITERAL(68, 1577, 16), // "FlightModeAssist"
QT_MOC_LITERAL(69, 1594, 20), // "AssistedControlState"
QT_MOC_LITERAL(70, 1615, 21), // "AssistedThrottleState"
QT_MOC_LITERAL(71, 1637, 26), // "ControlChain_Stabilization"
QT_MOC_LITERAL(72, 1664, 25), // "ControlChain_PathFollower"
QT_MOC_LITERAL(73, 1690, 24) // "ControlChain_PathPlanner"

    },
    "FlightStatus\0armedChanged\0\0"
    "FlightStatus_Armed::Enum\0value\0"
    "ArmedChanged\0flightModeChanged\0"
    "FlightStatus_FlightMode::Enum\0"
    "FlightModeChanged\0alwaysStabilizeWhenArmedChanged\0"
    "FlightStatus_AlwaysStabilizeWhenArmed::Enum\0"
    "AlwaysStabilizeWhenArmedChanged\0"
    "flightModeAssistChanged\0"
    "FlightStatus_FlightModeAssist::Enum\0"
    "FlightModeAssistChanged\0"
    "assistedControlStateChanged\0"
    "FlightStatus_AssistedControlState::Enum\0"
    "AssistedControlStateChanged\0"
    "assistedThrottleStateChanged\0"
    "FlightStatus_AssistedThrottleState::Enum\0"
    "AssistedThrottleStateChanged\0"
    "controlChainChanged\0index\0"
    "FlightStatus_ControlChain::Enum\0"
    "ControlChainChanged\0"
    "controlChainStabilizationChanged\0"
    "ControlChain_StabilizationChanged\0"
    "controlChainPathFollowerChanged\0"
    "ControlChain_PathFollowerChanged\0"
    "controlChainPathPlannerChanged\0"
    "ControlChain_PathPlannerChanged\0"
    "setArmed\0setFlightMode\0"
    "setAlwaysStabilizeWhenArmed\0"
    "setFlightModeAssist\0setAssistedControlState\0"
    "setAssistedThrottleState\0setControlChain\0"
    "setControlChainStabilization\0"
    "setControlChain_Stabilization\0"
    "setControlChainPathFollower\0"
    "setControlChain_PathFollower\0"
    "setControlChainPathPlanner\0"
    "setControlChain_PathPlanner\0"
    "emitNotifications\0getArmed\0getFlightMode\0"
    "getAlwaysStabilizeWhenArmed\0"
    "getFlightModeAssist\0getAssistedControlState\0"
    "getAssistedThrottleState\0controlChain\0"
    "getControlChain\0getControlChain_Stabilization\0"
    "getControlChain_PathFollower\0"
    "getControlChain_PathPlanner\0armed\0"
    "flightMode\0alwaysStabilizeWhenArmed\0"
    "flightModeAssist\0assistedControlState\0"
    "assistedThrottleState\0controlChainStabilization\0"
    "controlChainPathFollower\0"
    "controlChainPathPlanner\0Armed\0FlightMode\0"
    "AlwaysStabilizeWhenArmed\0FlightModeAssist\0"
    "AssistedControlState\0AssistedThrottleState\0"
    "ControlChain_Stabilization\0"
    "ControlChain_PathFollower\0"
    "ControlChain_PathPlanner"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
      18,  418, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  274,    2, 0x06 /* Public */,
       5,    1,  277,    2, 0x06 /* Public */,
       6,    1,  280,    2, 0x06 /* Public */,
       8,    1,  283,    2, 0x06 /* Public */,
       9,    1,  286,    2, 0x06 /* Public */,
      11,    1,  289,    2, 0x06 /* Public */,
      12,    1,  292,    2, 0x06 /* Public */,
      14,    1,  295,    2, 0x06 /* Public */,
      15,    1,  298,    2, 0x06 /* Public */,
      17,    1,  301,    2, 0x06 /* Public */,
      18,    1,  304,    2, 0x06 /* Public */,
      20,    1,  307,    2, 0x06 /* Public */,
      21,    2,  310,    2, 0x06 /* Public */,
      24,    2,  315,    2, 0x06 /* Public */,
      25,    1,  320,    2, 0x06 /* Public */,
      26,    1,  323,    2, 0x06 /* Public */,
      27,    1,  326,    2, 0x06 /* Public */,
      28,    1,  329,    2, 0x06 /* Public */,
      29,    1,  332,    2, 0x06 /* Public */,
      30,    1,  335,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    1,  338,    2, 0x0a /* Public */,
      31,    1,  341,    2, 0x0a /* Public */,
      32,    1,  344,    2, 0x0a /* Public */,
      32,    1,  347,    2, 0x0a /* Public */,
      33,    1,  350,    2, 0x0a /* Public */,
      33,    1,  353,    2, 0x0a /* Public */,
      34,    1,  356,    2, 0x0a /* Public */,
      34,    1,  359,    2, 0x0a /* Public */,
      35,    1,  362,    2, 0x0a /* Public */,
      35,    1,  365,    2, 0x0a /* Public */,
      36,    1,  368,    2, 0x0a /* Public */,
      36,    1,  371,    2, 0x0a /* Public */,
      37,    2,  374,    2, 0x0a /* Public */,
      37,    2,  379,    2, 0x0a /* Public */,
      38,    1,  384,    2, 0x0a /* Public */,
      39,    1,  387,    2, 0x0a /* Public */,
      40,    1,  390,    2, 0x0a /* Public */,
      41,    1,  393,    2, 0x0a /* Public */,
      42,    1,  396,    2, 0x0a /* Public */,
      43,    1,  399,    2, 0x0a /* Public */,
      44,    0,  402,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      45,    0,  403,    2, 0x02 /* Public */,
      46,    0,  404,    2, 0x02 /* Public */,
      47,    0,  405,    2, 0x02 /* Public */,
      48,    0,  406,    2, 0x02 /* Public */,
      49,    0,  407,    2, 0x02 /* Public */,
      50,    0,  408,    2, 0x02 /* Public */,
      51,    1,  409,    2, 0x02 /* Public */,
      52,    1,  412,    2, 0x02 /* Public */,
      53,    0,  415,    2, 0x02 /* Public */,
      54,    0,  416,    2, 0x02 /* Public */,
      55,    0,  417,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 7,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 13,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 16,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 19,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 23,   22,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   22,    4,
    QMetaType::Void, 0x80000000 | 23,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 23,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 23,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 7,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 13,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 16,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 19,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 23,   22,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   22,    4,
    QMetaType::Void, 0x80000000 | 23,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 23,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 23,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    0x80000000 | 23, QMetaType::UInt,   22,
    QMetaType::UChar, QMetaType::UInt,   22,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      56, 0x80000000 | 3, 0x0049510b,
      57, 0x80000000 | 7, 0x0049510b,
      58, 0x80000000 | 10, 0x0049510b,
      59, 0x80000000 | 13, 0x0049510b,
      60, 0x80000000 | 16, 0x0049510b,
      61, 0x80000000 | 19, 0x0049510b,
      62, 0x80000000 | 23, 0x0049510b,
      63, 0x80000000 | 23, 0x0049510b,
      64, 0x80000000 | 23, 0x0049510b,
      65, QMetaType::UChar, 0x00495103,
      66, QMetaType::UChar, 0x00495103,
      67, QMetaType::UChar, 0x00495103,
      68, QMetaType::UChar, 0x00495103,
      69, QMetaType::UChar, 0x00495103,
      70, QMetaType::UChar, 0x00495103,
      71, QMetaType::UChar, 0x00495103,
      72, QMetaType::UChar, 0x00495103,
      73, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       8,
      10,
      14,
      16,
      18,
       1,
       3,
       5,
       7,
       9,
      11,
      15,
      17,
      19,

       0        // eod
};

void FlightStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->armedChanged((*reinterpret_cast< const FlightStatus_Armed::Enum(*)>(_a[1]))); break;
        case 1: _t->ArmedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->flightModeChanged((*reinterpret_cast< const FlightStatus_FlightMode::Enum(*)>(_a[1]))); break;
        case 3: _t->FlightModeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->alwaysStabilizeWhenArmedChanged((*reinterpret_cast< const FlightStatus_AlwaysStabilizeWhenArmed::Enum(*)>(_a[1]))); break;
        case 5: _t->AlwaysStabilizeWhenArmedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->flightModeAssistChanged((*reinterpret_cast< const FlightStatus_FlightModeAssist::Enum(*)>(_a[1]))); break;
        case 7: _t->FlightModeAssistChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->assistedControlStateChanged((*reinterpret_cast< const FlightStatus_AssistedControlState::Enum(*)>(_a[1]))); break;
        case 9: _t->AssistedControlStateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->assistedThrottleStateChanged((*reinterpret_cast< const FlightStatus_AssistedThrottleState::Enum(*)>(_a[1]))); break;
        case 11: _t->AssistedThrottleStateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->controlChainChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const FlightStatus_ControlChain::Enum(*)>(_a[2]))); break;
        case 13: _t->ControlChainChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 14: _t->controlChainStabilizationChanged((*reinterpret_cast< const FlightStatus_ControlChain::Enum(*)>(_a[1]))); break;
        case 15: _t->ControlChain_StabilizationChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 16: _t->controlChainPathFollowerChanged((*reinterpret_cast< const FlightStatus_ControlChain::Enum(*)>(_a[1]))); break;
        case 17: _t->ControlChain_PathFollowerChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->controlChainPathPlannerChanged((*reinterpret_cast< const FlightStatus_ControlChain::Enum(*)>(_a[1]))); break;
        case 19: _t->ControlChain_PathPlannerChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->setArmed((*reinterpret_cast< const FlightStatus_Armed::Enum(*)>(_a[1]))); break;
        case 21: _t->setArmed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->setFlightMode((*reinterpret_cast< const FlightStatus_FlightMode::Enum(*)>(_a[1]))); break;
        case 23: _t->setFlightMode((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->setAlwaysStabilizeWhenArmed((*reinterpret_cast< const FlightStatus_AlwaysStabilizeWhenArmed::Enum(*)>(_a[1]))); break;
        case 25: _t->setAlwaysStabilizeWhenArmed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->setFlightModeAssist((*reinterpret_cast< const FlightStatus_FlightModeAssist::Enum(*)>(_a[1]))); break;
        case 27: _t->setFlightModeAssist((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->setAssistedControlState((*reinterpret_cast< const FlightStatus_AssistedControlState::Enum(*)>(_a[1]))); break;
        case 29: _t->setAssistedControlState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->setAssistedThrottleState((*reinterpret_cast< const FlightStatus_AssistedThrottleState::Enum(*)>(_a[1]))); break;
        case 31: _t->setAssistedThrottleState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->setControlChain((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const FlightStatus_ControlChain::Enum(*)>(_a[2]))); break;
        case 33: _t->setControlChain((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 34: _t->setControlChainStabilization((*reinterpret_cast< const FlightStatus_ControlChain::Enum(*)>(_a[1]))); break;
        case 35: _t->setControlChain_Stabilization((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->setControlChainPathFollower((*reinterpret_cast< const FlightStatus_ControlChain::Enum(*)>(_a[1]))); break;
        case 37: _t->setControlChain_PathFollower((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->setControlChainPathPlanner((*reinterpret_cast< const FlightStatus_ControlChain::Enum(*)>(_a[1]))); break;
        case 39: _t->setControlChain_PathPlanner((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->emitNotifications(); break;
        case 41: { quint8 _r = _t->getArmed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 42: { quint8 _r = _t->getFlightMode();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 43: { quint8 _r = _t->getAlwaysStabilizeWhenArmed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 44: { quint8 _r = _t->getFlightModeAssist();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 45: { quint8 _r = _t->getAssistedControlState();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 46: { quint8 _r = _t->getAssistedThrottleState();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 47: { FlightStatus_ControlChain::Enum _r = _t->controlChain((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FlightStatus_ControlChain::Enum*>(_a[0]) = std::move(_r); }  break;
        case 48: { quint8 _r = _t->getControlChain((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 49: { quint8 _r = _t->getControlChain_Stabilization();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 50: { quint8 _r = _t->getControlChain_PathFollower();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 51: { quint8 _r = _t->getControlChain_PathPlanner();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightStatus::*)(const FlightStatus_Armed::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::armedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::ArmedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(const FlightStatus_FlightMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::flightModeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::FlightModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(const FlightStatus_AlwaysStabilizeWhenArmed::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::alwaysStabilizeWhenArmedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::AlwaysStabilizeWhenArmedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(const FlightStatus_FlightModeAssist::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::flightModeAssistChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::FlightModeAssistChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(const FlightStatus_AssistedControlState::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::assistedControlStateChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::AssistedControlStateChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(const FlightStatus_AssistedThrottleState::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::assistedThrottleStateChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::AssistedThrottleStateChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(quint32 , const FlightStatus_ControlChain::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::controlChainChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::ControlChainChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(const FlightStatus_ControlChain::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::controlChainStabilizationChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::ControlChain_StabilizationChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(const FlightStatus_ControlChain::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::controlChainPathFollowerChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::ControlChain_PathFollowerChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(const FlightStatus_ControlChain::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::controlChainPathPlannerChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::ControlChain_PathPlannerChanged)) {
                *result = 19;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FlightStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< FlightStatus_Armed::Enum*>(_v) = _t->armed(); break;
        case 1: *reinterpret_cast< FlightStatus_FlightMode::Enum*>(_v) = _t->flightMode(); break;
        case 2: *reinterpret_cast< FlightStatus_AlwaysStabilizeWhenArmed::Enum*>(_v) = _t->alwaysStabilizeWhenArmed(); break;
        case 3: *reinterpret_cast< FlightStatus_FlightModeAssist::Enum*>(_v) = _t->flightModeAssist(); break;
        case 4: *reinterpret_cast< FlightStatus_AssistedControlState::Enum*>(_v) = _t->assistedControlState(); break;
        case 5: *reinterpret_cast< FlightStatus_AssistedThrottleState::Enum*>(_v) = _t->assistedThrottleState(); break;
        case 6: *reinterpret_cast< FlightStatus_ControlChain::Enum*>(_v) = _t->controlChainStabilization(); break;
        case 7: *reinterpret_cast< FlightStatus_ControlChain::Enum*>(_v) = _t->controlChainPathFollower(); break;
        case 8: *reinterpret_cast< FlightStatus_ControlChain::Enum*>(_v) = _t->controlChainPathPlanner(); break;
        case 9: *reinterpret_cast< quint8*>(_v) = _t->getArmed(); break;
        case 10: *reinterpret_cast< quint8*>(_v) = _t->getFlightMode(); break;
        case 11: *reinterpret_cast< quint8*>(_v) = _t->getAlwaysStabilizeWhenArmed(); break;
        case 12: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeAssist(); break;
        case 13: *reinterpret_cast< quint8*>(_v) = _t->getAssistedControlState(); break;
        case 14: *reinterpret_cast< quint8*>(_v) = _t->getAssistedThrottleState(); break;
        case 15: *reinterpret_cast< quint8*>(_v) = _t->getControlChain_Stabilization(); break;
        case 16: *reinterpret_cast< quint8*>(_v) = _t->getControlChain_PathFollower(); break;
        case 17: *reinterpret_cast< quint8*>(_v) = _t->getControlChain_PathPlanner(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FlightStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setArmed(*reinterpret_cast< FlightStatus_Armed::Enum*>(_v)); break;
        case 1: _t->setFlightMode(*reinterpret_cast< FlightStatus_FlightMode::Enum*>(_v)); break;
        case 2: _t->setAlwaysStabilizeWhenArmed(*reinterpret_cast< FlightStatus_AlwaysStabilizeWhenArmed::Enum*>(_v)); break;
        case 3: _t->setFlightModeAssist(*reinterpret_cast< FlightStatus_FlightModeAssist::Enum*>(_v)); break;
        case 4: _t->setAssistedControlState(*reinterpret_cast< FlightStatus_AssistedControlState::Enum*>(_v)); break;
        case 5: _t->setAssistedThrottleState(*reinterpret_cast< FlightStatus_AssistedThrottleState::Enum*>(_v)); break;
        case 6: _t->setControlChainStabilization(*reinterpret_cast< FlightStatus_ControlChain::Enum*>(_v)); break;
        case 7: _t->setControlChainPathFollower(*reinterpret_cast< FlightStatus_ControlChain::Enum*>(_v)); break;
        case 8: _t->setControlChainPathPlanner(*reinterpret_cast< FlightStatus_ControlChain::Enum*>(_v)); break;
        case 9: _t->setArmed(*reinterpret_cast< quint8*>(_v)); break;
        case 10: _t->setFlightMode(*reinterpret_cast< quint8*>(_v)); break;
        case 11: _t->setAlwaysStabilizeWhenArmed(*reinterpret_cast< quint8*>(_v)); break;
        case 12: _t->setFlightModeAssist(*reinterpret_cast< quint8*>(_v)); break;
        case 13: _t->setAssistedControlState(*reinterpret_cast< quint8*>(_v)); break;
        case 14: _t->setAssistedThrottleState(*reinterpret_cast< quint8*>(_v)); break;
        case 15: _t->setControlChain_Stabilization(*reinterpret_cast< quint8*>(_v)); break;
        case 16: _t->setControlChain_PathFollower(*reinterpret_cast< quint8*>(_v)); break;
        case 17: _t->setControlChain_PathPlanner(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_FlightStatus[] = {
        &FlightStatus_Armed::staticMetaObject,
    &FlightStatus_FlightMode::staticMetaObject,
    &FlightStatus_AlwaysStabilizeWhenArmed::staticMetaObject,
    &FlightStatus_FlightModeAssist::staticMetaObject,
    &FlightStatus_AssistedControlState::staticMetaObject,
    &FlightStatus_AssistedThrottleState::staticMetaObject,
    &FlightStatus_ControlChain::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject FlightStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_FlightStatus.data,
    qt_meta_data_FlightStatus,
    qt_static_metacall,
    qt_meta_extradata_FlightStatus,
    nullptr
} };


const QMetaObject *FlightStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int FlightStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 52;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FlightStatus::armedChanged(const FlightStatus_Armed::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlightStatus::ArmedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FlightStatus::flightModeChanged(const FlightStatus_FlightMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FlightStatus::FlightModeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FlightStatus::alwaysStabilizeWhenArmedChanged(const FlightStatus_AlwaysStabilizeWhenArmed::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FlightStatus::AlwaysStabilizeWhenArmedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FlightStatus::flightModeAssistChanged(const FlightStatus_FlightModeAssist::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FlightStatus::FlightModeAssistChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FlightStatus::assistedControlStateChanged(const FlightStatus_AssistedControlState::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FlightStatus::AssistedControlStateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FlightStatus::assistedThrottleStateChanged(const FlightStatus_AssistedThrottleState::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FlightStatus::AssistedThrottleStateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FlightStatus::controlChainChanged(quint32 _t1, const FlightStatus_ControlChain::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FlightStatus::ControlChainChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void FlightStatus::controlChainStabilizationChanged(const FlightStatus_ControlChain::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void FlightStatus::ControlChain_StabilizationChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void FlightStatus::controlChainPathFollowerChanged(const FlightStatus_ControlChain::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void FlightStatus::ControlChain_PathFollowerChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void FlightStatus::controlChainPathPlannerChanged(const FlightStatus_ControlChain::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void FlightStatus::ControlChain_PathPlannerChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
