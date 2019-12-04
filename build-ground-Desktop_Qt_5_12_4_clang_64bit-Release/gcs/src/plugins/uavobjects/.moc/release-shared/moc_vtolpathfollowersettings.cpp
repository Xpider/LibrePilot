/****************************************************************************
** Meta object code from reading C++ file 'vtolpathfollowersettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../vtolpathfollowersettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vtolpathfollowersettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VtolPathFollowerSettingsConstants_t {
    QByteArrayData data[6];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VtolPathFollowerSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VtolPathFollowerSettingsConstants_t qt_meta_stringdata_VtolPathFollowerSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 33), // "VtolPathFollowerSettingsConst..."
QT_MOC_LITERAL(1, 34, 4), // "Enum"
QT_MOC_LITERAL(2, 39, 23), // "TreatCustomCraftAsCount"
QT_MOC_LITERAL(3, 63, 18), // "ThrustControlCount"
QT_MOC_LITERAL(4, 82, 15), // "YawControlCount"
QT_MOC_LITERAL(5, 98, 29) // "FlyawayEmergencyFallbackCount"

    },
    "VtolPathFollowerSettingsConstants\0"
    "Enum\0TreatCustomCraftAsCount\0"
    "ThrustControlCount\0YawControlCount\0"
    "FlyawayEmergencyFallbackCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VtolPathFollowerSettingsConstants[] = {

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
       2, uint(VtolPathFollowerSettingsConstants::TreatCustomCraftAsCount),
       3, uint(VtolPathFollowerSettingsConstants::ThrustControlCount),
       4, uint(VtolPathFollowerSettingsConstants::YawControlCount),
       5, uint(VtolPathFollowerSettingsConstants::FlyawayEmergencyFallbackCount),

       0        // eod
};

void VtolPathFollowerSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VtolPathFollowerSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VtolPathFollowerSettingsConstants.data,
    qt_meta_data_VtolPathFollowerSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VtolPathFollowerSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VtolPathFollowerSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VtolPathFollowerSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VtolPathFollowerSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VtolPathFollowerSettings_TreatCustomCraftAs_t {
    QByteArrayData data[5];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VtolPathFollowerSettings_TreatCustomCraftAs_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VtolPathFollowerSettings_TreatCustomCraftAs_t qt_meta_stringdata_VtolPathFollowerSettings_TreatCustomCraftAs = {
    {
QT_MOC_LITERAL(0, 0, 43), // "VtolPathFollowerSettings_Trea..."
QT_MOC_LITERAL(1, 44, 4), // "Enum"
QT_MOC_LITERAL(2, 49, 9), // "FixedWing"
QT_MOC_LITERAL(3, 59, 4), // "VTOL"
QT_MOC_LITERAL(4, 64, 6) // "Ground"

    },
    "VtolPathFollowerSettings_TreatCustomCraftAs\0"
    "Enum\0FixedWing\0VTOL\0Ground"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VtolPathFollowerSettings_TreatCustomCraftAs[] = {

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
       2, uint(VtolPathFollowerSettings_TreatCustomCraftAs::FixedWing),
       3, uint(VtolPathFollowerSettings_TreatCustomCraftAs::VTOL),
       4, uint(VtolPathFollowerSettings_TreatCustomCraftAs::Ground),

       0        // eod
};

void VtolPathFollowerSettings_TreatCustomCraftAs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VtolPathFollowerSettings_TreatCustomCraftAs::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VtolPathFollowerSettings_TreatCustomCraftAs.data,
    qt_meta_data_VtolPathFollowerSettings_TreatCustomCraftAs,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VtolPathFollowerSettings_TreatCustomCraftAs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VtolPathFollowerSettings_TreatCustomCraftAs::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VtolPathFollowerSettings_TreatCustomCraftAs.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VtolPathFollowerSettings_TreatCustomCraftAs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VtolPathFollowerSettings_ThrustControl_t {
    QByteArrayData data[4];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VtolPathFollowerSettings_ThrustControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VtolPathFollowerSettings_ThrustControl_t qt_meta_stringdata_VtolPathFollowerSettings_ThrustControl = {
    {
QT_MOC_LITERAL(0, 0, 38), // "VtolPathFollowerSettings_Thru..."
QT_MOC_LITERAL(1, 39, 4), // "Enum"
QT_MOC_LITERAL(2, 44, 6), // "Manual"
QT_MOC_LITERAL(3, 51, 4) // "Auto"

    },
    "VtolPathFollowerSettings_ThrustControl\0"
    "Enum\0Manual\0Auto"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VtolPathFollowerSettings_ThrustControl[] = {

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
       2, uint(VtolPathFollowerSettings_ThrustControl::Manual),
       3, uint(VtolPathFollowerSettings_ThrustControl::Auto),

       0        // eod
};

void VtolPathFollowerSettings_ThrustControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VtolPathFollowerSettings_ThrustControl::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VtolPathFollowerSettings_ThrustControl.data,
    qt_meta_data_VtolPathFollowerSettings_ThrustControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VtolPathFollowerSettings_ThrustControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VtolPathFollowerSettings_ThrustControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VtolPathFollowerSettings_ThrustControl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VtolPathFollowerSettings_ThrustControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VtolPathFollowerSettings_YawControl_t {
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VtolPathFollowerSettings_YawControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VtolPathFollowerSettings_YawControl_t qt_meta_stringdata_VtolPathFollowerSettings_YawControl = {
    {
QT_MOC_LITERAL(0, 0, 35), // "VtolPathFollowerSettings_YawC..."
QT_MOC_LITERAL(1, 36, 4), // "Enum"
QT_MOC_LITERAL(2, 41, 6), // "Manual"
QT_MOC_LITERAL(3, 48, 6), // "Tailin"
QT_MOC_LITERAL(4, 55, 17), // "MovementDirection"
QT_MOC_LITERAL(5, 73, 13), // "PathDirection"
QT_MOC_LITERAL(6, 87, 3) // "POI"

    },
    "VtolPathFollowerSettings_YawControl\0"
    "Enum\0Manual\0Tailin\0MovementDirection\0"
    "PathDirection\0POI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VtolPathFollowerSettings_YawControl[] = {

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
       2, uint(VtolPathFollowerSettings_YawControl::Manual),
       3, uint(VtolPathFollowerSettings_YawControl::Tailin),
       4, uint(VtolPathFollowerSettings_YawControl::MovementDirection),
       5, uint(VtolPathFollowerSettings_YawControl::PathDirection),
       6, uint(VtolPathFollowerSettings_YawControl::POI),

       0        // eod
};

void VtolPathFollowerSettings_YawControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VtolPathFollowerSettings_YawControl::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VtolPathFollowerSettings_YawControl.data,
    qt_meta_data_VtolPathFollowerSettings_YawControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VtolPathFollowerSettings_YawControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VtolPathFollowerSettings_YawControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VtolPathFollowerSettings_YawControl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VtolPathFollowerSettings_YawControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VtolPathFollowerSettings_FlyawayEmergencyFallback_t {
    QByteArrayData data[6];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VtolPathFollowerSettings_FlyawayEmergencyFallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VtolPathFollowerSettings_FlyawayEmergencyFallback_t qt_meta_stringdata_VtolPathFollowerSettings_FlyawayEmergencyFallback = {
    {
QT_MOC_LITERAL(0, 0, 49), // "VtolPathFollowerSettings_Flya..."
QT_MOC_LITERAL(1, 50, 4), // "Enum"
QT_MOC_LITERAL(2, 55, 8), // "Disabled"
QT_MOC_LITERAL(3, 64, 7), // "Enabled"
QT_MOC_LITERAL(4, 72, 6), // "Always"
QT_MOC_LITERAL(5, 79, 9) // "DebugTest"

    },
    "VtolPathFollowerSettings_FlyawayEmergencyFallback\0"
    "Enum\0Disabled\0Enabled\0Always\0DebugTest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VtolPathFollowerSettings_FlyawayEmergencyFallback[] = {

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
       2, uint(VtolPathFollowerSettings_FlyawayEmergencyFallback::Disabled),
       3, uint(VtolPathFollowerSettings_FlyawayEmergencyFallback::Enabled),
       4, uint(VtolPathFollowerSettings_FlyawayEmergencyFallback::Always),
       5, uint(VtolPathFollowerSettings_FlyawayEmergencyFallback::DebugTest),

       0        // eod
};

void VtolPathFollowerSettings_FlyawayEmergencyFallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VtolPathFollowerSettings_FlyawayEmergencyFallback::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VtolPathFollowerSettings_FlyawayEmergencyFallback.data,
    qt_meta_data_VtolPathFollowerSettings_FlyawayEmergencyFallback,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VtolPathFollowerSettings_FlyawayEmergencyFallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VtolPathFollowerSettings_FlyawayEmergencyFallback::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VtolPathFollowerSettings_FlyawayEmergencyFallback.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VtolPathFollowerSettings_FlyawayEmergencyFallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VtolPathFollowerSettings_t {
    QByteArrayData data[373];
    char stringdata0[9564];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VtolPathFollowerSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VtolPathFollowerSettings_t qt_meta_stringdata_VtolPathFollowerSettings = {
    {
QT_MOC_LITERAL(0, 0, 24), // "VtolPathFollowerSettings"
QT_MOC_LITERAL(1, 25, 23), // "horizontalVelMaxChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 5), // "value"
QT_MOC_LITERAL(4, 56, 23), // "HorizontalVelMaxChanged"
QT_MOC_LITERAL(5, 80, 21), // "verticalVelMaxChanged"
QT_MOC_LITERAL(6, 102, 21), // "VerticalVelMaxChanged"
QT_MOC_LITERAL(7, 124, 24), // "courseFeedForwardChanged"
QT_MOC_LITERAL(8, 149, 24), // "CourseFeedForwardChanged"
QT_MOC_LITERAL(9, 174, 21), // "horizontalPosPChanged"
QT_MOC_LITERAL(10, 196, 21), // "HorizontalPosPChanged"
QT_MOC_LITERAL(11, 218, 19), // "verticalPosPChanged"
QT_MOC_LITERAL(12, 238, 19), // "VerticalPosPChanged"
QT_MOC_LITERAL(13, 258, 23), // "horizontalVelPIDChanged"
QT_MOC_LITERAL(14, 282, 5), // "index"
QT_MOC_LITERAL(15, 288, 23), // "HorizontalVelPIDChanged"
QT_MOC_LITERAL(16, 312, 25), // "horizontalVelPIDKpChanged"
QT_MOC_LITERAL(17, 338, 26), // "HorizontalVelPID_KpChanged"
QT_MOC_LITERAL(18, 365, 25), // "horizontalVelPIDKiChanged"
QT_MOC_LITERAL(19, 391, 26), // "HorizontalVelPID_KiChanged"
QT_MOC_LITERAL(20, 418, 25), // "horizontalVelPIDKdChanged"
QT_MOC_LITERAL(21, 444, 26), // "HorizontalVelPID_KdChanged"
QT_MOC_LITERAL(22, 471, 27), // "horizontalVelPIDBetaChanged"
QT_MOC_LITERAL(23, 499, 28), // "HorizontalVelPID_BetaChanged"
QT_MOC_LITERAL(24, 528, 21), // "verticalVelPIDChanged"
QT_MOC_LITERAL(25, 550, 21), // "VerticalVelPIDChanged"
QT_MOC_LITERAL(26, 572, 23), // "verticalVelPIDKpChanged"
QT_MOC_LITERAL(27, 596, 24), // "VerticalVelPID_KpChanged"
QT_MOC_LITERAL(28, 621, 23), // "verticalVelPIDKiChanged"
QT_MOC_LITERAL(29, 645, 24), // "VerticalVelPID_KiChanged"
QT_MOC_LITERAL(30, 670, 23), // "verticalVelPIDKdChanged"
QT_MOC_LITERAL(31, 694, 24), // "VerticalVelPID_KdChanged"
QT_MOC_LITERAL(32, 719, 25), // "verticalVelPIDBetaChanged"
QT_MOC_LITERAL(33, 745, 26), // "VerticalVelPID_BetaChanged"
QT_MOC_LITERAL(34, 772, 19), // "thrustLimitsChanged"
QT_MOC_LITERAL(35, 792, 19), // "ThrustLimitsChanged"
QT_MOC_LITERAL(36, 812, 22), // "thrustLimitsMinChanged"
QT_MOC_LITERAL(37, 835, 23), // "ThrustLimits_MinChanged"
QT_MOC_LITERAL(38, 859, 26), // "thrustLimitsNeutralChanged"
QT_MOC_LITERAL(39, 886, 27), // "ThrustLimits_NeutralChanged"
QT_MOC_LITERAL(40, 914, 22), // "thrustLimitsMaxChanged"
QT_MOC_LITERAL(41, 937, 23), // "ThrustLimits_MaxChanged"
QT_MOC_LITERAL(42, 961, 26), // "velocityFeedforwardChanged"
QT_MOC_LITERAL(43, 988, 26), // "VelocityFeedforwardChanged"
QT_MOC_LITERAL(44, 1015, 42), // "flyawayEmergencyFallbackTrigg..."
QT_MOC_LITERAL(45, 1058, 42), // "FlyawayEmergencyFallbackTrigg..."
QT_MOC_LITERAL(46, 1101, 32), // "emergencyFallbackAttitudeChanged"
QT_MOC_LITERAL(47, 1134, 32), // "EmergencyFallbackAttitudeChanged"
QT_MOC_LITERAL(48, 1167, 36), // "emergencyFallbackAttitudeRoll..."
QT_MOC_LITERAL(49, 1204, 37), // "EmergencyFallbackAttitude_Rol..."
QT_MOC_LITERAL(50, 1242, 37), // "emergencyFallbackAttitudePitc..."
QT_MOC_LITERAL(51, 1280, 38), // "EmergencyFallbackAttitude_Pit..."
QT_MOC_LITERAL(52, 1319, 31), // "emergencyFallbackYawRateChanged"
QT_MOC_LITERAL(53, 1351, 31), // "EmergencyFallbackYawRateChanged"
QT_MOC_LITERAL(54, 1383, 33), // "emergencyFallbackYawRatekPCha..."
QT_MOC_LITERAL(55, 1417, 34), // "EmergencyFallbackYawRate_kPCh..."
QT_MOC_LITERAL(56, 1452, 34), // "emergencyFallbackYawRateMaxCh..."
QT_MOC_LITERAL(57, 1487, 35), // "EmergencyFallbackYawRate_MaxC..."
QT_MOC_LITERAL(58, 1523, 19), // "maxRollPitchChanged"
QT_MOC_LITERAL(59, 1543, 19), // "MaxRollPitchChanged"
QT_MOC_LITERAL(60, 1563, 16), // "brakeRateChanged"
QT_MOC_LITERAL(61, 1580, 16), // "BrakeRateChanged"
QT_MOC_LITERAL(62, 1597, 20), // "brakeMaxPitchChanged"
QT_MOC_LITERAL(63, 1618, 20), // "BrakeMaxPitchChanged"
QT_MOC_LITERAL(64, 1639, 28), // "brakeHorizontalVelPIDChanged"
QT_MOC_LITERAL(65, 1668, 28), // "BrakeHorizontalVelPIDChanged"
QT_MOC_LITERAL(66, 1697, 30), // "brakeHorizontalVelPIDKpChanged"
QT_MOC_LITERAL(67, 1728, 31), // "BrakeHorizontalVelPID_KpChanged"
QT_MOC_LITERAL(68, 1760, 30), // "brakeHorizontalVelPIDKiChanged"
QT_MOC_LITERAL(69, 1791, 31), // "BrakeHorizontalVelPID_KiChanged"
QT_MOC_LITERAL(70, 1823, 30), // "brakeHorizontalVelPIDKdChanged"
QT_MOC_LITERAL(71, 1854, 31), // "BrakeHorizontalVelPID_KdChanged"
QT_MOC_LITERAL(72, 1886, 32), // "brakeHorizontalVelPIDBetaChanged"
QT_MOC_LITERAL(73, 1919, 33), // "BrakeHorizontalVelPID_BetaCha..."
QT_MOC_LITERAL(74, 1953, 31), // "brakeVelocityFeedforwardChanged"
QT_MOC_LITERAL(75, 1985, 31), // "BrakeVelocityFeedforwardChanged"
QT_MOC_LITERAL(76, 2017, 25), // "landVerticalVelPIDChanged"
QT_MOC_LITERAL(77, 2043, 25), // "LandVerticalVelPIDChanged"
QT_MOC_LITERAL(78, 2069, 27), // "landVerticalVelPIDKpChanged"
QT_MOC_LITERAL(79, 2097, 28), // "LandVerticalVelPID_KpChanged"
QT_MOC_LITERAL(80, 2126, 27), // "landVerticalVelPIDKiChanged"
QT_MOC_LITERAL(81, 2154, 28), // "LandVerticalVelPID_KiChanged"
QT_MOC_LITERAL(82, 2183, 27), // "landVerticalVelPIDKdChanged"
QT_MOC_LITERAL(83, 2211, 28), // "LandVerticalVelPID_KdChanged"
QT_MOC_LITERAL(84, 2240, 29), // "landVerticalVelPIDBetaChanged"
QT_MOC_LITERAL(85, 2270, 30), // "LandVerticalVelPID_BetaChanged"
QT_MOC_LITERAL(86, 2301, 32), // "autoTakeoffVerticalVelPIDChanged"
QT_MOC_LITERAL(87, 2334, 32), // "AutoTakeoffVerticalVelPIDChanged"
QT_MOC_LITERAL(88, 2367, 34), // "autoTakeoffVerticalVelPIDKpCh..."
QT_MOC_LITERAL(89, 2402, 35), // "AutoTakeoffVerticalVelPID_KpC..."
QT_MOC_LITERAL(90, 2438, 34), // "autoTakeoffVerticalVelPIDKiCh..."
QT_MOC_LITERAL(91, 2473, 35), // "AutoTakeoffVerticalVelPID_KiC..."
QT_MOC_LITERAL(92, 2509, 34), // "autoTakeoffVerticalVelPIDKdCh..."
QT_MOC_LITERAL(93, 2544, 35), // "AutoTakeoffVerticalVelPID_KdC..."
QT_MOC_LITERAL(94, 2580, 36), // "autoTakeoffVerticalVelPIDBeta..."
QT_MOC_LITERAL(95, 2617, 37), // "AutoTakeoffVerticalVelPID_Bet..."
QT_MOC_LITERAL(96, 2655, 31), // "velocityRoamMaxRollPitchChanged"
QT_MOC_LITERAL(97, 2687, 31), // "VelocityRoamMaxRollPitchChanged"
QT_MOC_LITERAL(98, 2719, 35), // "velocityRoamHorizontalVelPIDC..."
QT_MOC_LITERAL(99, 2755, 35), // "VelocityRoamHorizontalVelPIDC..."
QT_MOC_LITERAL(100, 2791, 37), // "velocityRoamHorizontalVelPIDK..."
QT_MOC_LITERAL(101, 2829, 38), // "VelocityRoamHorizontalVelPID_..."
QT_MOC_LITERAL(102, 2868, 37), // "velocityRoamHorizontalVelPIDK..."
QT_MOC_LITERAL(103, 2906, 38), // "VelocityRoamHorizontalVelPID_..."
QT_MOC_LITERAL(104, 2945, 37), // "velocityRoamHorizontalVelPIDK..."
QT_MOC_LITERAL(105, 2983, 38), // "VelocityRoamHorizontalVelPID_..."
QT_MOC_LITERAL(106, 3022, 39), // "velocityRoamHorizontalVelPIDB..."
QT_MOC_LITERAL(107, 3062, 40), // "VelocityRoamHorizontalVelPID_..."
QT_MOC_LITERAL(108, 3103, 19), // "updatePeriodChanged"
QT_MOC_LITERAL(109, 3123, 19), // "UpdatePeriodChanged"
QT_MOC_LITERAL(110, 3143, 25), // "treatCustomCraftAsChanged"
QT_MOC_LITERAL(111, 3169, 49), // "VtolPathFollowerSettings_Trea..."
QT_MOC_LITERAL(112, 3219, 25), // "TreatCustomCraftAsChanged"
QT_MOC_LITERAL(113, 3245, 20), // "thrustControlChanged"
QT_MOC_LITERAL(114, 3266, 44), // "VtolPathFollowerSettings_Thru..."
QT_MOC_LITERAL(115, 3311, 20), // "ThrustControlChanged"
QT_MOC_LITERAL(116, 3332, 17), // "yawControlChanged"
QT_MOC_LITERAL(117, 3350, 41), // "VtolPathFollowerSettings_YawC..."
QT_MOC_LITERAL(118, 3392, 17), // "YawControlChanged"
QT_MOC_LITERAL(119, 3410, 31), // "flyawayEmergencyFallbackChanged"
QT_MOC_LITERAL(120, 3442, 55), // "VtolPathFollowerSettings_Flya..."
QT_MOC_LITERAL(121, 3498, 31), // "FlyawayEmergencyFallbackChanged"
QT_MOC_LITERAL(122, 3530, 19), // "setHorizontalVelMax"
QT_MOC_LITERAL(123, 3550, 17), // "setVerticalVelMax"
QT_MOC_LITERAL(124, 3568, 20), // "setCourseFeedForward"
QT_MOC_LITERAL(125, 3589, 17), // "setHorizontalPosP"
QT_MOC_LITERAL(126, 3607, 15), // "setVerticalPosP"
QT_MOC_LITERAL(127, 3623, 19), // "setHorizontalVelPID"
QT_MOC_LITERAL(128, 3643, 21), // "setHorizontalVelPIDKp"
QT_MOC_LITERAL(129, 3665, 22), // "setHorizontalVelPID_Kp"
QT_MOC_LITERAL(130, 3688, 21), // "setHorizontalVelPIDKi"
QT_MOC_LITERAL(131, 3710, 22), // "setHorizontalVelPID_Ki"
QT_MOC_LITERAL(132, 3733, 21), // "setHorizontalVelPIDKd"
QT_MOC_LITERAL(133, 3755, 22), // "setHorizontalVelPID_Kd"
QT_MOC_LITERAL(134, 3778, 23), // "setHorizontalVelPIDBeta"
QT_MOC_LITERAL(135, 3802, 24), // "setHorizontalVelPID_Beta"
QT_MOC_LITERAL(136, 3827, 17), // "setVerticalVelPID"
QT_MOC_LITERAL(137, 3845, 19), // "setVerticalVelPIDKp"
QT_MOC_LITERAL(138, 3865, 20), // "setVerticalVelPID_Kp"
QT_MOC_LITERAL(139, 3886, 19), // "setVerticalVelPIDKi"
QT_MOC_LITERAL(140, 3906, 20), // "setVerticalVelPID_Ki"
QT_MOC_LITERAL(141, 3927, 19), // "setVerticalVelPIDKd"
QT_MOC_LITERAL(142, 3947, 20), // "setVerticalVelPID_Kd"
QT_MOC_LITERAL(143, 3968, 21), // "setVerticalVelPIDBeta"
QT_MOC_LITERAL(144, 3990, 22), // "setVerticalVelPID_Beta"
QT_MOC_LITERAL(145, 4013, 15), // "setThrustLimits"
QT_MOC_LITERAL(146, 4029, 18), // "setThrustLimitsMin"
QT_MOC_LITERAL(147, 4048, 19), // "setThrustLimits_Min"
QT_MOC_LITERAL(148, 4068, 22), // "setThrustLimitsNeutral"
QT_MOC_LITERAL(149, 4091, 23), // "setThrustLimits_Neutral"
QT_MOC_LITERAL(150, 4115, 18), // "setThrustLimitsMax"
QT_MOC_LITERAL(151, 4134, 19), // "setThrustLimits_Max"
QT_MOC_LITERAL(152, 4154, 22), // "setVelocityFeedforward"
QT_MOC_LITERAL(153, 4177, 38), // "setFlyawayEmergencyFallbackTr..."
QT_MOC_LITERAL(154, 4216, 28), // "setEmergencyFallbackAttitude"
QT_MOC_LITERAL(155, 4245, 32), // "setEmergencyFallbackAttitudeRoll"
QT_MOC_LITERAL(156, 4278, 33), // "setEmergencyFallbackAttitude_..."
QT_MOC_LITERAL(157, 4312, 33), // "setEmergencyFallbackAttitudeP..."
QT_MOC_LITERAL(158, 4346, 34), // "setEmergencyFallbackAttitude_..."
QT_MOC_LITERAL(159, 4381, 27), // "setEmergencyFallbackYawRate"
QT_MOC_LITERAL(160, 4409, 29), // "setEmergencyFallbackYawRatekP"
QT_MOC_LITERAL(161, 4439, 30), // "setEmergencyFallbackYawRate_kP"
QT_MOC_LITERAL(162, 4470, 30), // "setEmergencyFallbackYawRateMax"
QT_MOC_LITERAL(163, 4501, 31), // "setEmergencyFallbackYawRate_Max"
QT_MOC_LITERAL(164, 4533, 15), // "setMaxRollPitch"
QT_MOC_LITERAL(165, 4549, 12), // "setBrakeRate"
QT_MOC_LITERAL(166, 4562, 16), // "setBrakeMaxPitch"
QT_MOC_LITERAL(167, 4579, 24), // "setBrakeHorizontalVelPID"
QT_MOC_LITERAL(168, 4604, 26), // "setBrakeHorizontalVelPIDKp"
QT_MOC_LITERAL(169, 4631, 27), // "setBrakeHorizontalVelPID_Kp"
QT_MOC_LITERAL(170, 4659, 26), // "setBrakeHorizontalVelPIDKi"
QT_MOC_LITERAL(171, 4686, 27), // "setBrakeHorizontalVelPID_Ki"
QT_MOC_LITERAL(172, 4714, 26), // "setBrakeHorizontalVelPIDKd"
QT_MOC_LITERAL(173, 4741, 27), // "setBrakeHorizontalVelPID_Kd"
QT_MOC_LITERAL(174, 4769, 28), // "setBrakeHorizontalVelPIDBeta"
QT_MOC_LITERAL(175, 4798, 29), // "setBrakeHorizontalVelPID_Beta"
QT_MOC_LITERAL(176, 4828, 27), // "setBrakeVelocityFeedforward"
QT_MOC_LITERAL(177, 4856, 21), // "setLandVerticalVelPID"
QT_MOC_LITERAL(178, 4878, 23), // "setLandVerticalVelPIDKp"
QT_MOC_LITERAL(179, 4902, 24), // "setLandVerticalVelPID_Kp"
QT_MOC_LITERAL(180, 4927, 23), // "setLandVerticalVelPIDKi"
QT_MOC_LITERAL(181, 4951, 24), // "setLandVerticalVelPID_Ki"
QT_MOC_LITERAL(182, 4976, 23), // "setLandVerticalVelPIDKd"
QT_MOC_LITERAL(183, 5000, 24), // "setLandVerticalVelPID_Kd"
QT_MOC_LITERAL(184, 5025, 25), // "setLandVerticalVelPIDBeta"
QT_MOC_LITERAL(185, 5051, 26), // "setLandVerticalVelPID_Beta"
QT_MOC_LITERAL(186, 5078, 28), // "setAutoTakeoffVerticalVelPID"
QT_MOC_LITERAL(187, 5107, 30), // "setAutoTakeoffVerticalVelPIDKp"
QT_MOC_LITERAL(188, 5138, 31), // "setAutoTakeoffVerticalVelPID_Kp"
QT_MOC_LITERAL(189, 5170, 30), // "setAutoTakeoffVerticalVelPIDKi"
QT_MOC_LITERAL(190, 5201, 31), // "setAutoTakeoffVerticalVelPID_Ki"
QT_MOC_LITERAL(191, 5233, 30), // "setAutoTakeoffVerticalVelPIDKd"
QT_MOC_LITERAL(192, 5264, 31), // "setAutoTakeoffVerticalVelPID_Kd"
QT_MOC_LITERAL(193, 5296, 32), // "setAutoTakeoffVerticalVelPIDBeta"
QT_MOC_LITERAL(194, 5329, 33), // "setAutoTakeoffVerticalVelPID_..."
QT_MOC_LITERAL(195, 5363, 27), // "setVelocityRoamMaxRollPitch"
QT_MOC_LITERAL(196, 5391, 31), // "setVelocityRoamHorizontalVelPID"
QT_MOC_LITERAL(197, 5423, 33), // "setVelocityRoamHorizontalVelP..."
QT_MOC_LITERAL(198, 5457, 34), // "setVelocityRoamHorizontalVelP..."
QT_MOC_LITERAL(199, 5492, 33), // "setVelocityRoamHorizontalVelP..."
QT_MOC_LITERAL(200, 5526, 34), // "setVelocityRoamHorizontalVelP..."
QT_MOC_LITERAL(201, 5561, 33), // "setVelocityRoamHorizontalVelP..."
QT_MOC_LITERAL(202, 5595, 34), // "setVelocityRoamHorizontalVelP..."
QT_MOC_LITERAL(203, 5630, 35), // "setVelocityRoamHorizontalVelP..."
QT_MOC_LITERAL(204, 5666, 36), // "setVelocityRoamHorizontalVelP..."
QT_MOC_LITERAL(205, 5703, 15), // "setUpdatePeriod"
QT_MOC_LITERAL(206, 5719, 21), // "setTreatCustomCraftAs"
QT_MOC_LITERAL(207, 5741, 16), // "setThrustControl"
QT_MOC_LITERAL(208, 5758, 13), // "setYawControl"
QT_MOC_LITERAL(209, 5772, 27), // "setFlyawayEmergencyFallback"
QT_MOC_LITERAL(210, 5800, 17), // "emitNotifications"
QT_MOC_LITERAL(211, 5818, 19), // "getHorizontalVelMax"
QT_MOC_LITERAL(212, 5838, 17), // "getVerticalVelMax"
QT_MOC_LITERAL(213, 5856, 20), // "getCourseFeedForward"
QT_MOC_LITERAL(214, 5877, 17), // "getHorizontalPosP"
QT_MOC_LITERAL(215, 5895, 15), // "getVerticalPosP"
QT_MOC_LITERAL(216, 5911, 16), // "horizontalVelPID"
QT_MOC_LITERAL(217, 5928, 19), // "getHorizontalVelPID"
QT_MOC_LITERAL(218, 5948, 22), // "getHorizontalVelPID_Kp"
QT_MOC_LITERAL(219, 5971, 22), // "getHorizontalVelPID_Ki"
QT_MOC_LITERAL(220, 5994, 22), // "getHorizontalVelPID_Kd"
QT_MOC_LITERAL(221, 6017, 24), // "getHorizontalVelPID_Beta"
QT_MOC_LITERAL(222, 6042, 14), // "verticalVelPID"
QT_MOC_LITERAL(223, 6057, 17), // "getVerticalVelPID"
QT_MOC_LITERAL(224, 6075, 20), // "getVerticalVelPID_Kp"
QT_MOC_LITERAL(225, 6096, 20), // "getVerticalVelPID_Ki"
QT_MOC_LITERAL(226, 6117, 20), // "getVerticalVelPID_Kd"
QT_MOC_LITERAL(227, 6138, 22), // "getVerticalVelPID_Beta"
QT_MOC_LITERAL(228, 6161, 12), // "thrustLimits"
QT_MOC_LITERAL(229, 6174, 15), // "getThrustLimits"
QT_MOC_LITERAL(230, 6190, 19), // "getThrustLimits_Min"
QT_MOC_LITERAL(231, 6210, 23), // "getThrustLimits_Neutral"
QT_MOC_LITERAL(232, 6234, 19), // "getThrustLimits_Max"
QT_MOC_LITERAL(233, 6254, 22), // "getVelocityFeedforward"
QT_MOC_LITERAL(234, 6277, 38), // "getFlyawayEmergencyFallbackTr..."
QT_MOC_LITERAL(235, 6316, 25), // "emergencyFallbackAttitude"
QT_MOC_LITERAL(236, 6342, 28), // "getEmergencyFallbackAttitude"
QT_MOC_LITERAL(237, 6371, 33), // "getEmergencyFallbackAttitude_..."
QT_MOC_LITERAL(238, 6405, 34), // "getEmergencyFallbackAttitude_..."
QT_MOC_LITERAL(239, 6440, 24), // "emergencyFallbackYawRate"
QT_MOC_LITERAL(240, 6465, 27), // "getEmergencyFallbackYawRate"
QT_MOC_LITERAL(241, 6493, 30), // "getEmergencyFallbackYawRate_kP"
QT_MOC_LITERAL(242, 6524, 31), // "getEmergencyFallbackYawRate_Max"
QT_MOC_LITERAL(243, 6556, 15), // "getMaxRollPitch"
QT_MOC_LITERAL(244, 6572, 12), // "getBrakeRate"
QT_MOC_LITERAL(245, 6585, 16), // "getBrakeMaxPitch"
QT_MOC_LITERAL(246, 6602, 21), // "brakeHorizontalVelPID"
QT_MOC_LITERAL(247, 6624, 24), // "getBrakeHorizontalVelPID"
QT_MOC_LITERAL(248, 6649, 27), // "getBrakeHorizontalVelPID_Kp"
QT_MOC_LITERAL(249, 6677, 27), // "getBrakeHorizontalVelPID_Ki"
QT_MOC_LITERAL(250, 6705, 27), // "getBrakeHorizontalVelPID_Kd"
QT_MOC_LITERAL(251, 6733, 29), // "getBrakeHorizontalVelPID_Beta"
QT_MOC_LITERAL(252, 6763, 27), // "getBrakeVelocityFeedforward"
QT_MOC_LITERAL(253, 6791, 18), // "landVerticalVelPID"
QT_MOC_LITERAL(254, 6810, 21), // "getLandVerticalVelPID"
QT_MOC_LITERAL(255, 6832, 24), // "getLandVerticalVelPID_Kp"
QT_MOC_LITERAL(256, 6857, 24), // "getLandVerticalVelPID_Ki"
QT_MOC_LITERAL(257, 6882, 24), // "getLandVerticalVelPID_Kd"
QT_MOC_LITERAL(258, 6907, 26), // "getLandVerticalVelPID_Beta"
QT_MOC_LITERAL(259, 6934, 25), // "autoTakeoffVerticalVelPID"
QT_MOC_LITERAL(260, 6960, 28), // "getAutoTakeoffVerticalVelPID"
QT_MOC_LITERAL(261, 6989, 31), // "getAutoTakeoffVerticalVelPID_Kp"
QT_MOC_LITERAL(262, 7021, 31), // "getAutoTakeoffVerticalVelPID_Ki"
QT_MOC_LITERAL(263, 7053, 31), // "getAutoTakeoffVerticalVelPID_Kd"
QT_MOC_LITERAL(264, 7085, 33), // "getAutoTakeoffVerticalVelPID_..."
QT_MOC_LITERAL(265, 7119, 27), // "getVelocityRoamMaxRollPitch"
QT_MOC_LITERAL(266, 7147, 28), // "velocityRoamHorizontalVelPID"
QT_MOC_LITERAL(267, 7176, 31), // "getVelocityRoamHorizontalVelPID"
QT_MOC_LITERAL(268, 7208, 34), // "getVelocityRoamHorizontalVelP..."
QT_MOC_LITERAL(269, 7243, 34), // "getVelocityRoamHorizontalVelP..."
QT_MOC_LITERAL(270, 7278, 34), // "getVelocityRoamHorizontalVelP..."
QT_MOC_LITERAL(271, 7313, 36), // "getVelocityRoamHorizontalVelP..."
QT_MOC_LITERAL(272, 7350, 15), // "getUpdatePeriod"
QT_MOC_LITERAL(273, 7366, 21), // "getTreatCustomCraftAs"
QT_MOC_LITERAL(274, 7388, 16), // "getThrustControl"
QT_MOC_LITERAL(275, 7405, 13), // "getYawControl"
QT_MOC_LITERAL(276, 7419, 27), // "getFlyawayEmergencyFallback"
QT_MOC_LITERAL(277, 7447, 16), // "horizontalVelMax"
QT_MOC_LITERAL(278, 7464, 14), // "verticalVelMax"
QT_MOC_LITERAL(279, 7479, 17), // "courseFeedForward"
QT_MOC_LITERAL(280, 7497, 14), // "horizontalPosP"
QT_MOC_LITERAL(281, 7512, 12), // "verticalPosP"
QT_MOC_LITERAL(282, 7525, 18), // "horizontalVelPIDKp"
QT_MOC_LITERAL(283, 7544, 18), // "horizontalVelPIDKi"
QT_MOC_LITERAL(284, 7563, 18), // "horizontalVelPIDKd"
QT_MOC_LITERAL(285, 7582, 20), // "horizontalVelPIDBeta"
QT_MOC_LITERAL(286, 7603, 16), // "verticalVelPIDKp"
QT_MOC_LITERAL(287, 7620, 16), // "verticalVelPIDKi"
QT_MOC_LITERAL(288, 7637, 16), // "verticalVelPIDKd"
QT_MOC_LITERAL(289, 7654, 18), // "verticalVelPIDBeta"
QT_MOC_LITERAL(290, 7673, 15), // "thrustLimitsMin"
QT_MOC_LITERAL(291, 7689, 19), // "thrustLimitsNeutral"
QT_MOC_LITERAL(292, 7709, 15), // "thrustLimitsMax"
QT_MOC_LITERAL(293, 7725, 19), // "velocityFeedforward"
QT_MOC_LITERAL(294, 7745, 35), // "flyawayEmergencyFallbackTrigg..."
QT_MOC_LITERAL(295, 7781, 29), // "emergencyFallbackAttitudeRoll"
QT_MOC_LITERAL(296, 7811, 30), // "emergencyFallbackAttitudePitch"
QT_MOC_LITERAL(297, 7842, 26), // "emergencyFallbackYawRatekP"
QT_MOC_LITERAL(298, 7869, 27), // "emergencyFallbackYawRateMax"
QT_MOC_LITERAL(299, 7897, 12), // "maxRollPitch"
QT_MOC_LITERAL(300, 7910, 9), // "brakeRate"
QT_MOC_LITERAL(301, 7920, 13), // "brakeMaxPitch"
QT_MOC_LITERAL(302, 7934, 23), // "brakeHorizontalVelPIDKp"
QT_MOC_LITERAL(303, 7958, 23), // "brakeHorizontalVelPIDKi"
QT_MOC_LITERAL(304, 7982, 23), // "brakeHorizontalVelPIDKd"
QT_MOC_LITERAL(305, 8006, 25), // "brakeHorizontalVelPIDBeta"
QT_MOC_LITERAL(306, 8032, 24), // "brakeVelocityFeedforward"
QT_MOC_LITERAL(307, 8057, 20), // "landVerticalVelPIDKp"
QT_MOC_LITERAL(308, 8078, 20), // "landVerticalVelPIDKi"
QT_MOC_LITERAL(309, 8099, 20), // "landVerticalVelPIDKd"
QT_MOC_LITERAL(310, 8120, 22), // "landVerticalVelPIDBeta"
QT_MOC_LITERAL(311, 8143, 27), // "autoTakeoffVerticalVelPIDKp"
QT_MOC_LITERAL(312, 8171, 27), // "autoTakeoffVerticalVelPIDKi"
QT_MOC_LITERAL(313, 8199, 27), // "autoTakeoffVerticalVelPIDKd"
QT_MOC_LITERAL(314, 8227, 29), // "autoTakeoffVerticalVelPIDBeta"
QT_MOC_LITERAL(315, 8257, 24), // "velocityRoamMaxRollPitch"
QT_MOC_LITERAL(316, 8282, 30), // "velocityRoamHorizontalVelPIDKp"
QT_MOC_LITERAL(317, 8313, 30), // "velocityRoamHorizontalVelPIDKi"
QT_MOC_LITERAL(318, 8344, 30), // "velocityRoamHorizontalVelPIDKd"
QT_MOC_LITERAL(319, 8375, 32), // "velocityRoamHorizontalVelPIDBeta"
QT_MOC_LITERAL(320, 8408, 12), // "updatePeriod"
QT_MOC_LITERAL(321, 8421, 18), // "treatCustomCraftAs"
QT_MOC_LITERAL(322, 8440, 13), // "thrustControl"
QT_MOC_LITERAL(323, 8454, 10), // "yawControl"
QT_MOC_LITERAL(324, 8465, 24), // "flyawayEmergencyFallback"
QT_MOC_LITERAL(325, 8490, 16), // "HorizontalVelMax"
QT_MOC_LITERAL(326, 8507, 14), // "VerticalVelMax"
QT_MOC_LITERAL(327, 8522, 17), // "CourseFeedForward"
QT_MOC_LITERAL(328, 8540, 14), // "HorizontalPosP"
QT_MOC_LITERAL(329, 8555, 12), // "VerticalPosP"
QT_MOC_LITERAL(330, 8568, 19), // "HorizontalVelPID_Kp"
QT_MOC_LITERAL(331, 8588, 19), // "HorizontalVelPID_Ki"
QT_MOC_LITERAL(332, 8608, 19), // "HorizontalVelPID_Kd"
QT_MOC_LITERAL(333, 8628, 21), // "HorizontalVelPID_Beta"
QT_MOC_LITERAL(334, 8650, 17), // "VerticalVelPID_Kp"
QT_MOC_LITERAL(335, 8668, 17), // "VerticalVelPID_Ki"
QT_MOC_LITERAL(336, 8686, 17), // "VerticalVelPID_Kd"
QT_MOC_LITERAL(337, 8704, 19), // "VerticalVelPID_Beta"
QT_MOC_LITERAL(338, 8724, 16), // "ThrustLimits_Min"
QT_MOC_LITERAL(339, 8741, 20), // "ThrustLimits_Neutral"
QT_MOC_LITERAL(340, 8762, 16), // "ThrustLimits_Max"
QT_MOC_LITERAL(341, 8779, 19), // "VelocityFeedforward"
QT_MOC_LITERAL(342, 8799, 35), // "FlyawayEmergencyFallbackTrigg..."
QT_MOC_LITERAL(343, 8835, 30), // "EmergencyFallbackAttitude_Roll"
QT_MOC_LITERAL(344, 8866, 31), // "EmergencyFallbackAttitude_Pitch"
QT_MOC_LITERAL(345, 8898, 27), // "EmergencyFallbackYawRate_kP"
QT_MOC_LITERAL(346, 8926, 28), // "EmergencyFallbackYawRate_Max"
QT_MOC_LITERAL(347, 8955, 12), // "MaxRollPitch"
QT_MOC_LITERAL(348, 8968, 9), // "BrakeRate"
QT_MOC_LITERAL(349, 8978, 13), // "BrakeMaxPitch"
QT_MOC_LITERAL(350, 8992, 24), // "BrakeHorizontalVelPID_Kp"
QT_MOC_LITERAL(351, 9017, 24), // "BrakeHorizontalVelPID_Ki"
QT_MOC_LITERAL(352, 9042, 24), // "BrakeHorizontalVelPID_Kd"
QT_MOC_LITERAL(353, 9067, 26), // "BrakeHorizontalVelPID_Beta"
QT_MOC_LITERAL(354, 9094, 24), // "BrakeVelocityFeedforward"
QT_MOC_LITERAL(355, 9119, 21), // "LandVerticalVelPID_Kp"
QT_MOC_LITERAL(356, 9141, 21), // "LandVerticalVelPID_Ki"
QT_MOC_LITERAL(357, 9163, 21), // "LandVerticalVelPID_Kd"
QT_MOC_LITERAL(358, 9185, 23), // "LandVerticalVelPID_Beta"
QT_MOC_LITERAL(359, 9209, 28), // "AutoTakeoffVerticalVelPID_Kp"
QT_MOC_LITERAL(360, 9238, 28), // "AutoTakeoffVerticalVelPID_Ki"
QT_MOC_LITERAL(361, 9267, 28), // "AutoTakeoffVerticalVelPID_Kd"
QT_MOC_LITERAL(362, 9296, 30), // "AutoTakeoffVerticalVelPID_Beta"
QT_MOC_LITERAL(363, 9327, 24), // "VelocityRoamMaxRollPitch"
QT_MOC_LITERAL(364, 9352, 31), // "VelocityRoamHorizontalVelPID_Kp"
QT_MOC_LITERAL(365, 9384, 31), // "VelocityRoamHorizontalVelPID_Ki"
QT_MOC_LITERAL(366, 9416, 31), // "VelocityRoamHorizontalVelPID_Kd"
QT_MOC_LITERAL(367, 9448, 33), // "VelocityRoamHorizontalVelPID_..."
QT_MOC_LITERAL(368, 9482, 12), // "UpdatePeriod"
QT_MOC_LITERAL(369, 9495, 18), // "TreatCustomCraftAs"
QT_MOC_LITERAL(370, 9514, 13), // "ThrustControl"
QT_MOC_LITERAL(371, 9528, 10), // "YawControl"
QT_MOC_LITERAL(372, 9539, 24) // "FlyawayEmergencyFallback"

    },
    "VtolPathFollowerSettings\0"
    "horizontalVelMaxChanged\0\0value\0"
    "HorizontalVelMaxChanged\0verticalVelMaxChanged\0"
    "VerticalVelMaxChanged\0courseFeedForwardChanged\0"
    "CourseFeedForwardChanged\0horizontalPosPChanged\0"
    "HorizontalPosPChanged\0verticalPosPChanged\0"
    "VerticalPosPChanged\0horizontalVelPIDChanged\0"
    "index\0HorizontalVelPIDChanged\0"
    "horizontalVelPIDKpChanged\0"
    "HorizontalVelPID_KpChanged\0"
    "horizontalVelPIDKiChanged\0"
    "HorizontalVelPID_KiChanged\0"
    "horizontalVelPIDKdChanged\0"
    "HorizontalVelPID_KdChanged\0"
    "horizontalVelPIDBetaChanged\0"
    "HorizontalVelPID_BetaChanged\0"
    "verticalVelPIDChanged\0VerticalVelPIDChanged\0"
    "verticalVelPIDKpChanged\0"
    "VerticalVelPID_KpChanged\0"
    "verticalVelPIDKiChanged\0"
    "VerticalVelPID_KiChanged\0"
    "verticalVelPIDKdChanged\0"
    "VerticalVelPID_KdChanged\0"
    "verticalVelPIDBetaChanged\0"
    "VerticalVelPID_BetaChanged\0"
    "thrustLimitsChanged\0ThrustLimitsChanged\0"
    "thrustLimitsMinChanged\0ThrustLimits_MinChanged\0"
    "thrustLimitsNeutralChanged\0"
    "ThrustLimits_NeutralChanged\0"
    "thrustLimitsMaxChanged\0ThrustLimits_MaxChanged\0"
    "velocityFeedforwardChanged\0"
    "VelocityFeedforwardChanged\0"
    "flyawayEmergencyFallbackTriggerTimeChanged\0"
    "FlyawayEmergencyFallbackTriggerTimeChanged\0"
    "emergencyFallbackAttitudeChanged\0"
    "EmergencyFallbackAttitudeChanged\0"
    "emergencyFallbackAttitudeRollChanged\0"
    "EmergencyFallbackAttitude_RollChanged\0"
    "emergencyFallbackAttitudePitchChanged\0"
    "EmergencyFallbackAttitude_PitchChanged\0"
    "emergencyFallbackYawRateChanged\0"
    "EmergencyFallbackYawRateChanged\0"
    "emergencyFallbackYawRatekPChanged\0"
    "EmergencyFallbackYawRate_kPChanged\0"
    "emergencyFallbackYawRateMaxChanged\0"
    "EmergencyFallbackYawRate_MaxChanged\0"
    "maxRollPitchChanged\0MaxRollPitchChanged\0"
    "brakeRateChanged\0BrakeRateChanged\0"
    "brakeMaxPitchChanged\0BrakeMaxPitchChanged\0"
    "brakeHorizontalVelPIDChanged\0"
    "BrakeHorizontalVelPIDChanged\0"
    "brakeHorizontalVelPIDKpChanged\0"
    "BrakeHorizontalVelPID_KpChanged\0"
    "brakeHorizontalVelPIDKiChanged\0"
    "BrakeHorizontalVelPID_KiChanged\0"
    "brakeHorizontalVelPIDKdChanged\0"
    "BrakeHorizontalVelPID_KdChanged\0"
    "brakeHorizontalVelPIDBetaChanged\0"
    "BrakeHorizontalVelPID_BetaChanged\0"
    "brakeVelocityFeedforwardChanged\0"
    "BrakeVelocityFeedforwardChanged\0"
    "landVerticalVelPIDChanged\0"
    "LandVerticalVelPIDChanged\0"
    "landVerticalVelPIDKpChanged\0"
    "LandVerticalVelPID_KpChanged\0"
    "landVerticalVelPIDKiChanged\0"
    "LandVerticalVelPID_KiChanged\0"
    "landVerticalVelPIDKdChanged\0"
    "LandVerticalVelPID_KdChanged\0"
    "landVerticalVelPIDBetaChanged\0"
    "LandVerticalVelPID_BetaChanged\0"
    "autoTakeoffVerticalVelPIDChanged\0"
    "AutoTakeoffVerticalVelPIDChanged\0"
    "autoTakeoffVerticalVelPIDKpChanged\0"
    "AutoTakeoffVerticalVelPID_KpChanged\0"
    "autoTakeoffVerticalVelPIDKiChanged\0"
    "AutoTakeoffVerticalVelPID_KiChanged\0"
    "autoTakeoffVerticalVelPIDKdChanged\0"
    "AutoTakeoffVerticalVelPID_KdChanged\0"
    "autoTakeoffVerticalVelPIDBetaChanged\0"
    "AutoTakeoffVerticalVelPID_BetaChanged\0"
    "velocityRoamMaxRollPitchChanged\0"
    "VelocityRoamMaxRollPitchChanged\0"
    "velocityRoamHorizontalVelPIDChanged\0"
    "VelocityRoamHorizontalVelPIDChanged\0"
    "velocityRoamHorizontalVelPIDKpChanged\0"
    "VelocityRoamHorizontalVelPID_KpChanged\0"
    "velocityRoamHorizontalVelPIDKiChanged\0"
    "VelocityRoamHorizontalVelPID_KiChanged\0"
    "velocityRoamHorizontalVelPIDKdChanged\0"
    "VelocityRoamHorizontalVelPID_KdChanged\0"
    "velocityRoamHorizontalVelPIDBetaChanged\0"
    "VelocityRoamHorizontalVelPID_BetaChanged\0"
    "updatePeriodChanged\0UpdatePeriodChanged\0"
    "treatCustomCraftAsChanged\0"
    "VtolPathFollowerSettings_TreatCustomCraftAs::Enum\0"
    "TreatCustomCraftAsChanged\0"
    "thrustControlChanged\0"
    "VtolPathFollowerSettings_ThrustControl::Enum\0"
    "ThrustControlChanged\0yawControlChanged\0"
    "VtolPathFollowerSettings_YawControl::Enum\0"
    "YawControlChanged\0flyawayEmergencyFallbackChanged\0"
    "VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum\0"
    "FlyawayEmergencyFallbackChanged\0"
    "setHorizontalVelMax\0setVerticalVelMax\0"
    "setCourseFeedForward\0setHorizontalPosP\0"
    "setVerticalPosP\0setHorizontalVelPID\0"
    "setHorizontalVelPIDKp\0setHorizontalVelPID_Kp\0"
    "setHorizontalVelPIDKi\0setHorizontalVelPID_Ki\0"
    "setHorizontalVelPIDKd\0setHorizontalVelPID_Kd\0"
    "setHorizontalVelPIDBeta\0"
    "setHorizontalVelPID_Beta\0setVerticalVelPID\0"
    "setVerticalVelPIDKp\0setVerticalVelPID_Kp\0"
    "setVerticalVelPIDKi\0setVerticalVelPID_Ki\0"
    "setVerticalVelPIDKd\0setVerticalVelPID_Kd\0"
    "setVerticalVelPIDBeta\0setVerticalVelPID_Beta\0"
    "setThrustLimits\0setThrustLimitsMin\0"
    "setThrustLimits_Min\0setThrustLimitsNeutral\0"
    "setThrustLimits_Neutral\0setThrustLimitsMax\0"
    "setThrustLimits_Max\0setVelocityFeedforward\0"
    "setFlyawayEmergencyFallbackTriggerTime\0"
    "setEmergencyFallbackAttitude\0"
    "setEmergencyFallbackAttitudeRoll\0"
    "setEmergencyFallbackAttitude_Roll\0"
    "setEmergencyFallbackAttitudePitch\0"
    "setEmergencyFallbackAttitude_Pitch\0"
    "setEmergencyFallbackYawRate\0"
    "setEmergencyFallbackYawRatekP\0"
    "setEmergencyFallbackYawRate_kP\0"
    "setEmergencyFallbackYawRateMax\0"
    "setEmergencyFallbackYawRate_Max\0"
    "setMaxRollPitch\0setBrakeRate\0"
    "setBrakeMaxPitch\0setBrakeHorizontalVelPID\0"
    "setBrakeHorizontalVelPIDKp\0"
    "setBrakeHorizontalVelPID_Kp\0"
    "setBrakeHorizontalVelPIDKi\0"
    "setBrakeHorizontalVelPID_Ki\0"
    "setBrakeHorizontalVelPIDKd\0"
    "setBrakeHorizontalVelPID_Kd\0"
    "setBrakeHorizontalVelPIDBeta\0"
    "setBrakeHorizontalVelPID_Beta\0"
    "setBrakeVelocityFeedforward\0"
    "setLandVerticalVelPID\0setLandVerticalVelPIDKp\0"
    "setLandVerticalVelPID_Kp\0"
    "setLandVerticalVelPIDKi\0"
    "setLandVerticalVelPID_Ki\0"
    "setLandVerticalVelPIDKd\0"
    "setLandVerticalVelPID_Kd\0"
    "setLandVerticalVelPIDBeta\0"
    "setLandVerticalVelPID_Beta\0"
    "setAutoTakeoffVerticalVelPID\0"
    "setAutoTakeoffVerticalVelPIDKp\0"
    "setAutoTakeoffVerticalVelPID_Kp\0"
    "setAutoTakeoffVerticalVelPIDKi\0"
    "setAutoTakeoffVerticalVelPID_Ki\0"
    "setAutoTakeoffVerticalVelPIDKd\0"
    "setAutoTakeoffVerticalVelPID_Kd\0"
    "setAutoTakeoffVerticalVelPIDBeta\0"
    "setAutoTakeoffVerticalVelPID_Beta\0"
    "setVelocityRoamMaxRollPitch\0"
    "setVelocityRoamHorizontalVelPID\0"
    "setVelocityRoamHorizontalVelPIDKp\0"
    "setVelocityRoamHorizontalVelPID_Kp\0"
    "setVelocityRoamHorizontalVelPIDKi\0"
    "setVelocityRoamHorizontalVelPID_Ki\0"
    "setVelocityRoamHorizontalVelPIDKd\0"
    "setVelocityRoamHorizontalVelPID_Kd\0"
    "setVelocityRoamHorizontalVelPIDBeta\0"
    "setVelocityRoamHorizontalVelPID_Beta\0"
    "setUpdatePeriod\0setTreatCustomCraftAs\0"
    "setThrustControl\0setYawControl\0"
    "setFlyawayEmergencyFallback\0"
    "emitNotifications\0getHorizontalVelMax\0"
    "getVerticalVelMax\0getCourseFeedForward\0"
    "getHorizontalPosP\0getVerticalPosP\0"
    "horizontalVelPID\0getHorizontalVelPID\0"
    "getHorizontalVelPID_Kp\0getHorizontalVelPID_Ki\0"
    "getHorizontalVelPID_Kd\0getHorizontalVelPID_Beta\0"
    "verticalVelPID\0getVerticalVelPID\0"
    "getVerticalVelPID_Kp\0getVerticalVelPID_Ki\0"
    "getVerticalVelPID_Kd\0getVerticalVelPID_Beta\0"
    "thrustLimits\0getThrustLimits\0"
    "getThrustLimits_Min\0getThrustLimits_Neutral\0"
    "getThrustLimits_Max\0getVelocityFeedforward\0"
    "getFlyawayEmergencyFallbackTriggerTime\0"
    "emergencyFallbackAttitude\0"
    "getEmergencyFallbackAttitude\0"
    "getEmergencyFallbackAttitude_Roll\0"
    "getEmergencyFallbackAttitude_Pitch\0"
    "emergencyFallbackYawRate\0"
    "getEmergencyFallbackYawRate\0"
    "getEmergencyFallbackYawRate_kP\0"
    "getEmergencyFallbackYawRate_Max\0"
    "getMaxRollPitch\0getBrakeRate\0"
    "getBrakeMaxPitch\0brakeHorizontalVelPID\0"
    "getBrakeHorizontalVelPID\0"
    "getBrakeHorizontalVelPID_Kp\0"
    "getBrakeHorizontalVelPID_Ki\0"
    "getBrakeHorizontalVelPID_Kd\0"
    "getBrakeHorizontalVelPID_Beta\0"
    "getBrakeVelocityFeedforward\0"
    "landVerticalVelPID\0getLandVerticalVelPID\0"
    "getLandVerticalVelPID_Kp\0"
    "getLandVerticalVelPID_Ki\0"
    "getLandVerticalVelPID_Kd\0"
    "getLandVerticalVelPID_Beta\0"
    "autoTakeoffVerticalVelPID\0"
    "getAutoTakeoffVerticalVelPID\0"
    "getAutoTakeoffVerticalVelPID_Kp\0"
    "getAutoTakeoffVerticalVelPID_Ki\0"
    "getAutoTakeoffVerticalVelPID_Kd\0"
    "getAutoTakeoffVerticalVelPID_Beta\0"
    "getVelocityRoamMaxRollPitch\0"
    "velocityRoamHorizontalVelPID\0"
    "getVelocityRoamHorizontalVelPID\0"
    "getVelocityRoamHorizontalVelPID_Kp\0"
    "getVelocityRoamHorizontalVelPID_Ki\0"
    "getVelocityRoamHorizontalVelPID_Kd\0"
    "getVelocityRoamHorizontalVelPID_Beta\0"
    "getUpdatePeriod\0getTreatCustomCraftAs\0"
    "getThrustControl\0getYawControl\0"
    "getFlyawayEmergencyFallback\0"
    "horizontalVelMax\0verticalVelMax\0"
    "courseFeedForward\0horizontalPosP\0"
    "verticalPosP\0horizontalVelPIDKp\0"
    "horizontalVelPIDKi\0horizontalVelPIDKd\0"
    "horizontalVelPIDBeta\0verticalVelPIDKp\0"
    "verticalVelPIDKi\0verticalVelPIDKd\0"
    "verticalVelPIDBeta\0thrustLimitsMin\0"
    "thrustLimitsNeutral\0thrustLimitsMax\0"
    "velocityFeedforward\0"
    "flyawayEmergencyFallbackTriggerTime\0"
    "emergencyFallbackAttitudeRoll\0"
    "emergencyFallbackAttitudePitch\0"
    "emergencyFallbackYawRatekP\0"
    "emergencyFallbackYawRateMax\0maxRollPitch\0"
    "brakeRate\0brakeMaxPitch\0brakeHorizontalVelPIDKp\0"
    "brakeHorizontalVelPIDKi\0brakeHorizontalVelPIDKd\0"
    "brakeHorizontalVelPIDBeta\0"
    "brakeVelocityFeedforward\0landVerticalVelPIDKp\0"
    "landVerticalVelPIDKi\0landVerticalVelPIDKd\0"
    "landVerticalVelPIDBeta\0"
    "autoTakeoffVerticalVelPIDKp\0"
    "autoTakeoffVerticalVelPIDKi\0"
    "autoTakeoffVerticalVelPIDKd\0"
    "autoTakeoffVerticalVelPIDBeta\0"
    "velocityRoamMaxRollPitch\0"
    "velocityRoamHorizontalVelPIDKp\0"
    "velocityRoamHorizontalVelPIDKi\0"
    "velocityRoamHorizontalVelPIDKd\0"
    "velocityRoamHorizontalVelPIDBeta\0"
    "updatePeriod\0treatCustomCraftAs\0"
    "thrustControl\0yawControl\0"
    "flyawayEmergencyFallback\0HorizontalVelMax\0"
    "VerticalVelMax\0CourseFeedForward\0"
    "HorizontalPosP\0VerticalPosP\0"
    "HorizontalVelPID_Kp\0HorizontalVelPID_Ki\0"
    "HorizontalVelPID_Kd\0HorizontalVelPID_Beta\0"
    "VerticalVelPID_Kp\0VerticalVelPID_Ki\0"
    "VerticalVelPID_Kd\0VerticalVelPID_Beta\0"
    "ThrustLimits_Min\0ThrustLimits_Neutral\0"
    "ThrustLimits_Max\0VelocityFeedforward\0"
    "FlyawayEmergencyFallbackTriggerTime\0"
    "EmergencyFallbackAttitude_Roll\0"
    "EmergencyFallbackAttitude_Pitch\0"
    "EmergencyFallbackYawRate_kP\0"
    "EmergencyFallbackYawRate_Max\0MaxRollPitch\0"
    "BrakeRate\0BrakeMaxPitch\0"
    "BrakeHorizontalVelPID_Kp\0"
    "BrakeHorizontalVelPID_Ki\0"
    "BrakeHorizontalVelPID_Kd\0"
    "BrakeHorizontalVelPID_Beta\0"
    "BrakeVelocityFeedforward\0LandVerticalVelPID_Kp\0"
    "LandVerticalVelPID_Ki\0LandVerticalVelPID_Kd\0"
    "LandVerticalVelPID_Beta\0"
    "AutoTakeoffVerticalVelPID_Kp\0"
    "AutoTakeoffVerticalVelPID_Ki\0"
    "AutoTakeoffVerticalVelPID_Kd\0"
    "AutoTakeoffVerticalVelPID_Beta\0"
    "VelocityRoamMaxRollPitch\0"
    "VelocityRoamHorizontalVelPID_Kp\0"
    "VelocityRoamHorizontalVelPID_Ki\0"
    "VelocityRoamHorizontalVelPID_Kd\0"
    "VelocityRoamHorizontalVelPID_Beta\0"
    "UpdatePeriod\0TreatCustomCraftAs\0"
    "ThrustControl\0YawControl\0"
    "FlyawayEmergencyFallback"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VtolPathFollowerSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     273,   14, // methods
      96, 2154, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     114,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1, 1379,    2, 0x06 /* Public */,
       4,    1, 1382,    2, 0x06 /* Public */,
       5,    1, 1385,    2, 0x06 /* Public */,
       6,    1, 1388,    2, 0x06 /* Public */,
       7,    1, 1391,    2, 0x06 /* Public */,
       8,    1, 1394,    2, 0x06 /* Public */,
       9,    1, 1397,    2, 0x06 /* Public */,
      10,    1, 1400,    2, 0x06 /* Public */,
      11,    1, 1403,    2, 0x06 /* Public */,
      12,    1, 1406,    2, 0x06 /* Public */,
      13,    2, 1409,    2, 0x06 /* Public */,
      15,    2, 1414,    2, 0x06 /* Public */,
      16,    1, 1419,    2, 0x06 /* Public */,
      17,    1, 1422,    2, 0x06 /* Public */,
      18,    1, 1425,    2, 0x06 /* Public */,
      19,    1, 1428,    2, 0x06 /* Public */,
      20,    1, 1431,    2, 0x06 /* Public */,
      21,    1, 1434,    2, 0x06 /* Public */,
      22,    1, 1437,    2, 0x06 /* Public */,
      23,    1, 1440,    2, 0x06 /* Public */,
      24,    2, 1443,    2, 0x06 /* Public */,
      25,    2, 1448,    2, 0x06 /* Public */,
      26,    1, 1453,    2, 0x06 /* Public */,
      27,    1, 1456,    2, 0x06 /* Public */,
      28,    1, 1459,    2, 0x06 /* Public */,
      29,    1, 1462,    2, 0x06 /* Public */,
      30,    1, 1465,    2, 0x06 /* Public */,
      31,    1, 1468,    2, 0x06 /* Public */,
      32,    1, 1471,    2, 0x06 /* Public */,
      33,    1, 1474,    2, 0x06 /* Public */,
      34,    2, 1477,    2, 0x06 /* Public */,
      35,    2, 1482,    2, 0x06 /* Public */,
      36,    1, 1487,    2, 0x06 /* Public */,
      37,    1, 1490,    2, 0x06 /* Public */,
      38,    1, 1493,    2, 0x06 /* Public */,
      39,    1, 1496,    2, 0x06 /* Public */,
      40,    1, 1499,    2, 0x06 /* Public */,
      41,    1, 1502,    2, 0x06 /* Public */,
      42,    1, 1505,    2, 0x06 /* Public */,
      43,    1, 1508,    2, 0x06 /* Public */,
      44,    1, 1511,    2, 0x06 /* Public */,
      45,    1, 1514,    2, 0x06 /* Public */,
      46,    2, 1517,    2, 0x06 /* Public */,
      47,    2, 1522,    2, 0x06 /* Public */,
      48,    1, 1527,    2, 0x06 /* Public */,
      49,    1, 1530,    2, 0x06 /* Public */,
      50,    1, 1533,    2, 0x06 /* Public */,
      51,    1, 1536,    2, 0x06 /* Public */,
      52,    2, 1539,    2, 0x06 /* Public */,
      53,    2, 1544,    2, 0x06 /* Public */,
      54,    1, 1549,    2, 0x06 /* Public */,
      55,    1, 1552,    2, 0x06 /* Public */,
      56,    1, 1555,    2, 0x06 /* Public */,
      57,    1, 1558,    2, 0x06 /* Public */,
      58,    1, 1561,    2, 0x06 /* Public */,
      59,    1, 1564,    2, 0x06 /* Public */,
      60,    1, 1567,    2, 0x06 /* Public */,
      61,    1, 1570,    2, 0x06 /* Public */,
      62,    1, 1573,    2, 0x06 /* Public */,
      63,    1, 1576,    2, 0x06 /* Public */,
      64,    2, 1579,    2, 0x06 /* Public */,
      65,    2, 1584,    2, 0x06 /* Public */,
      66,    1, 1589,    2, 0x06 /* Public */,
      67,    1, 1592,    2, 0x06 /* Public */,
      68,    1, 1595,    2, 0x06 /* Public */,
      69,    1, 1598,    2, 0x06 /* Public */,
      70,    1, 1601,    2, 0x06 /* Public */,
      71,    1, 1604,    2, 0x06 /* Public */,
      72,    1, 1607,    2, 0x06 /* Public */,
      73,    1, 1610,    2, 0x06 /* Public */,
      74,    1, 1613,    2, 0x06 /* Public */,
      75,    1, 1616,    2, 0x06 /* Public */,
      76,    2, 1619,    2, 0x06 /* Public */,
      77,    2, 1624,    2, 0x06 /* Public */,
      78,    1, 1629,    2, 0x06 /* Public */,
      79,    1, 1632,    2, 0x06 /* Public */,
      80,    1, 1635,    2, 0x06 /* Public */,
      81,    1, 1638,    2, 0x06 /* Public */,
      82,    1, 1641,    2, 0x06 /* Public */,
      83,    1, 1644,    2, 0x06 /* Public */,
      84,    1, 1647,    2, 0x06 /* Public */,
      85,    1, 1650,    2, 0x06 /* Public */,
      86,    2, 1653,    2, 0x06 /* Public */,
      87,    2, 1658,    2, 0x06 /* Public */,
      88,    1, 1663,    2, 0x06 /* Public */,
      89,    1, 1666,    2, 0x06 /* Public */,
      90,    1, 1669,    2, 0x06 /* Public */,
      91,    1, 1672,    2, 0x06 /* Public */,
      92,    1, 1675,    2, 0x06 /* Public */,
      93,    1, 1678,    2, 0x06 /* Public */,
      94,    1, 1681,    2, 0x06 /* Public */,
      95,    1, 1684,    2, 0x06 /* Public */,
      96,    1, 1687,    2, 0x06 /* Public */,
      97,    1, 1690,    2, 0x06 /* Public */,
      98,    2, 1693,    2, 0x06 /* Public */,
      99,    2, 1698,    2, 0x06 /* Public */,
     100,    1, 1703,    2, 0x06 /* Public */,
     101,    1, 1706,    2, 0x06 /* Public */,
     102,    1, 1709,    2, 0x06 /* Public */,
     103,    1, 1712,    2, 0x06 /* Public */,
     104,    1, 1715,    2, 0x06 /* Public */,
     105,    1, 1718,    2, 0x06 /* Public */,
     106,    1, 1721,    2, 0x06 /* Public */,
     107,    1, 1724,    2, 0x06 /* Public */,
     108,    1, 1727,    2, 0x06 /* Public */,
     109,    1, 1730,    2, 0x06 /* Public */,
     110,    1, 1733,    2, 0x06 /* Public */,
     112,    1, 1736,    2, 0x06 /* Public */,
     113,    1, 1739,    2, 0x06 /* Public */,
     115,    1, 1742,    2, 0x06 /* Public */,
     116,    1, 1745,    2, 0x06 /* Public */,
     118,    1, 1748,    2, 0x06 /* Public */,
     119,    1, 1751,    2, 0x06 /* Public */,
     121,    1, 1754,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     122,    1, 1757,    2, 0x0a /* Public */,
     123,    1, 1760,    2, 0x0a /* Public */,
     124,    1, 1763,    2, 0x0a /* Public */,
     125,    1, 1766,    2, 0x0a /* Public */,
     126,    1, 1769,    2, 0x0a /* Public */,
     127,    2, 1772,    2, 0x0a /* Public */,
     128,    1, 1777,    2, 0x0a /* Public */,
     129,    1, 1780,    2, 0x0a /* Public */,
     130,    1, 1783,    2, 0x0a /* Public */,
     131,    1, 1786,    2, 0x0a /* Public */,
     132,    1, 1789,    2, 0x0a /* Public */,
     133,    1, 1792,    2, 0x0a /* Public */,
     134,    1, 1795,    2, 0x0a /* Public */,
     135,    1, 1798,    2, 0x0a /* Public */,
     136,    2, 1801,    2, 0x0a /* Public */,
     137,    1, 1806,    2, 0x0a /* Public */,
     138,    1, 1809,    2, 0x0a /* Public */,
     139,    1, 1812,    2, 0x0a /* Public */,
     140,    1, 1815,    2, 0x0a /* Public */,
     141,    1, 1818,    2, 0x0a /* Public */,
     142,    1, 1821,    2, 0x0a /* Public */,
     143,    1, 1824,    2, 0x0a /* Public */,
     144,    1, 1827,    2, 0x0a /* Public */,
     145,    2, 1830,    2, 0x0a /* Public */,
     146,    1, 1835,    2, 0x0a /* Public */,
     147,    1, 1838,    2, 0x0a /* Public */,
     148,    1, 1841,    2, 0x0a /* Public */,
     149,    1, 1844,    2, 0x0a /* Public */,
     150,    1, 1847,    2, 0x0a /* Public */,
     151,    1, 1850,    2, 0x0a /* Public */,
     152,    1, 1853,    2, 0x0a /* Public */,
     153,    1, 1856,    2, 0x0a /* Public */,
     154,    2, 1859,    2, 0x0a /* Public */,
     155,    1, 1864,    2, 0x0a /* Public */,
     156,    1, 1867,    2, 0x0a /* Public */,
     157,    1, 1870,    2, 0x0a /* Public */,
     158,    1, 1873,    2, 0x0a /* Public */,
     159,    2, 1876,    2, 0x0a /* Public */,
     160,    1, 1881,    2, 0x0a /* Public */,
     161,    1, 1884,    2, 0x0a /* Public */,
     162,    1, 1887,    2, 0x0a /* Public */,
     163,    1, 1890,    2, 0x0a /* Public */,
     164,    1, 1893,    2, 0x0a /* Public */,
     165,    1, 1896,    2, 0x0a /* Public */,
     166,    1, 1899,    2, 0x0a /* Public */,
     167,    2, 1902,    2, 0x0a /* Public */,
     168,    1, 1907,    2, 0x0a /* Public */,
     169,    1, 1910,    2, 0x0a /* Public */,
     170,    1, 1913,    2, 0x0a /* Public */,
     171,    1, 1916,    2, 0x0a /* Public */,
     172,    1, 1919,    2, 0x0a /* Public */,
     173,    1, 1922,    2, 0x0a /* Public */,
     174,    1, 1925,    2, 0x0a /* Public */,
     175,    1, 1928,    2, 0x0a /* Public */,
     176,    1, 1931,    2, 0x0a /* Public */,
     177,    2, 1934,    2, 0x0a /* Public */,
     178,    1, 1939,    2, 0x0a /* Public */,
     179,    1, 1942,    2, 0x0a /* Public */,
     180,    1, 1945,    2, 0x0a /* Public */,
     181,    1, 1948,    2, 0x0a /* Public */,
     182,    1, 1951,    2, 0x0a /* Public */,
     183,    1, 1954,    2, 0x0a /* Public */,
     184,    1, 1957,    2, 0x0a /* Public */,
     185,    1, 1960,    2, 0x0a /* Public */,
     186,    2, 1963,    2, 0x0a /* Public */,
     187,    1, 1968,    2, 0x0a /* Public */,
     188,    1, 1971,    2, 0x0a /* Public */,
     189,    1, 1974,    2, 0x0a /* Public */,
     190,    1, 1977,    2, 0x0a /* Public */,
     191,    1, 1980,    2, 0x0a /* Public */,
     192,    1, 1983,    2, 0x0a /* Public */,
     193,    1, 1986,    2, 0x0a /* Public */,
     194,    1, 1989,    2, 0x0a /* Public */,
     195,    1, 1992,    2, 0x0a /* Public */,
     196,    2, 1995,    2, 0x0a /* Public */,
     197,    1, 2000,    2, 0x0a /* Public */,
     198,    1, 2003,    2, 0x0a /* Public */,
     199,    1, 2006,    2, 0x0a /* Public */,
     200,    1, 2009,    2, 0x0a /* Public */,
     201,    1, 2012,    2, 0x0a /* Public */,
     202,    1, 2015,    2, 0x0a /* Public */,
     203,    1, 2018,    2, 0x0a /* Public */,
     204,    1, 2021,    2, 0x0a /* Public */,
     205,    1, 2024,    2, 0x0a /* Public */,
     206,    1, 2027,    2, 0x0a /* Public */,
     206,    1, 2030,    2, 0x0a /* Public */,
     207,    1, 2033,    2, 0x0a /* Public */,
     207,    1, 2036,    2, 0x0a /* Public */,
     208,    1, 2039,    2, 0x0a /* Public */,
     208,    1, 2042,    2, 0x0a /* Public */,
     209,    1, 2045,    2, 0x0a /* Public */,
     209,    1, 2048,    2, 0x0a /* Public */,
     210,    0, 2051,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     211,    0, 2052,    2, 0x02 /* Public */,
     212,    0, 2053,    2, 0x02 /* Public */,
     213,    0, 2054,    2, 0x02 /* Public */,
     214,    0, 2055,    2, 0x02 /* Public */,
     215,    0, 2056,    2, 0x02 /* Public */,
     216,    1, 2057,    2, 0x02 /* Public */,
     217,    1, 2060,    2, 0x02 /* Public */,
     218,    0, 2063,    2, 0x02 /* Public */,
     219,    0, 2064,    2, 0x02 /* Public */,
     220,    0, 2065,    2, 0x02 /* Public */,
     221,    0, 2066,    2, 0x02 /* Public */,
     222,    1, 2067,    2, 0x02 /* Public */,
     223,    1, 2070,    2, 0x02 /* Public */,
     224,    0, 2073,    2, 0x02 /* Public */,
     225,    0, 2074,    2, 0x02 /* Public */,
     226,    0, 2075,    2, 0x02 /* Public */,
     227,    0, 2076,    2, 0x02 /* Public */,
     228,    1, 2077,    2, 0x02 /* Public */,
     229,    1, 2080,    2, 0x02 /* Public */,
     230,    0, 2083,    2, 0x02 /* Public */,
     231,    0, 2084,    2, 0x02 /* Public */,
     232,    0, 2085,    2, 0x02 /* Public */,
     233,    0, 2086,    2, 0x02 /* Public */,
     234,    0, 2087,    2, 0x02 /* Public */,
     235,    1, 2088,    2, 0x02 /* Public */,
     236,    1, 2091,    2, 0x02 /* Public */,
     237,    0, 2094,    2, 0x02 /* Public */,
     238,    0, 2095,    2, 0x02 /* Public */,
     239,    1, 2096,    2, 0x02 /* Public */,
     240,    1, 2099,    2, 0x02 /* Public */,
     241,    0, 2102,    2, 0x02 /* Public */,
     242,    0, 2103,    2, 0x02 /* Public */,
     243,    0, 2104,    2, 0x02 /* Public */,
     244,    0, 2105,    2, 0x02 /* Public */,
     245,    0, 2106,    2, 0x02 /* Public */,
     246,    1, 2107,    2, 0x02 /* Public */,
     247,    1, 2110,    2, 0x02 /* Public */,
     248,    0, 2113,    2, 0x02 /* Public */,
     249,    0, 2114,    2, 0x02 /* Public */,
     250,    0, 2115,    2, 0x02 /* Public */,
     251,    0, 2116,    2, 0x02 /* Public */,
     252,    0, 2117,    2, 0x02 /* Public */,
     253,    1, 2118,    2, 0x02 /* Public */,
     254,    1, 2121,    2, 0x02 /* Public */,
     255,    0, 2124,    2, 0x02 /* Public */,
     256,    0, 2125,    2, 0x02 /* Public */,
     257,    0, 2126,    2, 0x02 /* Public */,
     258,    0, 2127,    2, 0x02 /* Public */,
     259,    1, 2128,    2, 0x02 /* Public */,
     260,    1, 2131,    2, 0x02 /* Public */,
     261,    0, 2134,    2, 0x02 /* Public */,
     262,    0, 2135,    2, 0x02 /* Public */,
     263,    0, 2136,    2, 0x02 /* Public */,
     264,    0, 2137,    2, 0x02 /* Public */,
     265,    0, 2138,    2, 0x02 /* Public */,
     266,    1, 2139,    2, 0x02 /* Public */,
     267,    1, 2142,    2, 0x02 /* Public */,
     268,    0, 2145,    2, 0x02 /* Public */,
     269,    0, 2146,    2, 0x02 /* Public */,
     270,    0, 2147,    2, 0x02 /* Public */,
     271,    0, 2148,    2, 0x02 /* Public */,
     272,    0, 2149,    2, 0x02 /* Public */,
     273,    0, 2150,    2, 0x02 /* Public */,
     274,    0, 2151,    2, 0x02 /* Public */,
     275,    0, 2152,    2, 0x02 /* Public */,
     276,    0, 2153,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, 0x80000000 | 111,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 114,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 117,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 120,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, 0x80000000 | 111,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 114,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 117,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 120,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UShort,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
     277, QMetaType::Float, 0x00495103,
     278, QMetaType::Float, 0x00495103,
     279, QMetaType::Float, 0x00495103,
     280, QMetaType::Float, 0x00495103,
     281, QMetaType::Float, 0x00495103,
     282, QMetaType::Float, 0x00495103,
     283, QMetaType::Float, 0x00495103,
     284, QMetaType::Float, 0x00495103,
     285, QMetaType::Float, 0x00495103,
     286, QMetaType::Float, 0x00495103,
     287, QMetaType::Float, 0x00495103,
     288, QMetaType::Float, 0x00495103,
     289, QMetaType::Float, 0x00495103,
     290, QMetaType::Float, 0x00495103,
     291, QMetaType::Float, 0x00495103,
     292, QMetaType::Float, 0x00495103,
     293, QMetaType::Float, 0x00495103,
     294, QMetaType::Float, 0x00495103,
     295, QMetaType::Float, 0x00495103,
     296, QMetaType::Float, 0x00495103,
     297, QMetaType::Float, 0x00495103,
     298, QMetaType::Float, 0x00495103,
     299, QMetaType::Float, 0x00495103,
     300, QMetaType::Float, 0x00495103,
     301, QMetaType::Float, 0x00495103,
     302, QMetaType::Float, 0x00495103,
     303, QMetaType::Float, 0x00495103,
     304, QMetaType::Float, 0x00495103,
     305, QMetaType::Float, 0x00495103,
     306, QMetaType::Float, 0x00495103,
     307, QMetaType::Float, 0x00495103,
     308, QMetaType::Float, 0x00495103,
     309, QMetaType::Float, 0x00495103,
     310, QMetaType::Float, 0x00495103,
     311, QMetaType::Float, 0x00495103,
     312, QMetaType::Float, 0x00495103,
     313, QMetaType::Float, 0x00495103,
     314, QMetaType::Float, 0x00495103,
     315, QMetaType::Float, 0x00495103,
     316, QMetaType::Float, 0x00495103,
     317, QMetaType::Float, 0x00495103,
     318, QMetaType::Float, 0x00495103,
     319, QMetaType::Float, 0x00495103,
     320, QMetaType::UShort, 0x00495103,
     321, 0x80000000 | 111, 0x0049510b,
     322, 0x80000000 | 114, 0x0049510b,
     323, 0x80000000 | 117, 0x0049510b,
     324, 0x80000000 | 120, 0x0049510b,
     325, QMetaType::Float, 0x00495103,
     326, QMetaType::Float, 0x00495103,
     327, QMetaType::Float, 0x00495103,
     328, QMetaType::Float, 0x00495103,
     329, QMetaType::Float, 0x00495103,
     330, QMetaType::Float, 0x00495103,
     331, QMetaType::Float, 0x00495103,
     332, QMetaType::Float, 0x00495103,
     333, QMetaType::Float, 0x00495103,
     334, QMetaType::Float, 0x00495103,
     335, QMetaType::Float, 0x00495103,
     336, QMetaType::Float, 0x00495103,
     337, QMetaType::Float, 0x00495103,
     338, QMetaType::Float, 0x00495103,
     339, QMetaType::Float, 0x00495103,
     340, QMetaType::Float, 0x00495103,
     341, QMetaType::Float, 0x00495103,
     342, QMetaType::Float, 0x00495103,
     343, QMetaType::Float, 0x00495103,
     344, QMetaType::Float, 0x00495103,
     345, QMetaType::Float, 0x00495103,
     346, QMetaType::Float, 0x00495103,
     347, QMetaType::Float, 0x00495103,
     348, QMetaType::Float, 0x00495103,
     349, QMetaType::Float, 0x00495103,
     350, QMetaType::Float, 0x00495103,
     351, QMetaType::Float, 0x00495103,
     352, QMetaType::Float, 0x00495103,
     353, QMetaType::Float, 0x00495103,
     354, QMetaType::Float, 0x00495103,
     355, QMetaType::Float, 0x00495103,
     356, QMetaType::Float, 0x00495103,
     357, QMetaType::Float, 0x00495103,
     358, QMetaType::Float, 0x00495103,
     359, QMetaType::Float, 0x00495103,
     360, QMetaType::Float, 0x00495103,
     361, QMetaType::Float, 0x00495103,
     362, QMetaType::Float, 0x00495103,
     363, QMetaType::Float, 0x00495103,
     364, QMetaType::Float, 0x00495103,
     365, QMetaType::Float, 0x00495103,
     366, QMetaType::Float, 0x00495103,
     367, QMetaType::Float, 0x00495103,
     368, QMetaType::UShort, 0x00495103,
     369, QMetaType::UChar, 0x00495103,
     370, QMetaType::UChar, 0x00495103,
     371, QMetaType::UChar, 0x00495103,
     372, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       8,
      12,
      14,
      16,
      18,
      22,
      24,
      26,
      28,
      32,
      34,
      36,
      38,
      40,
      44,
      46,
      50,
      52,
      54,
      56,
      58,
      62,
      64,
      66,
      68,
      70,
      74,
      76,
      78,
      80,
      84,
      86,
      88,
      90,
      92,
      96,
      98,
     100,
     102,
     104,
     106,
     108,
     110,
     112,
       1,
       3,
       5,
       7,
       9,
      13,
      15,
      17,
      19,
      23,
      25,
      27,
      29,
      33,
      35,
      37,
      39,
      41,
      45,
      47,
      51,
      53,
      55,
      57,
      59,
      63,
      65,
      67,
      69,
      71,
      75,
      77,
      79,
      81,
      85,
      87,
      89,
      91,
      93,
      97,
      99,
     101,
     103,
     105,
     107,
     109,
     111,
     113,

       0        // eod
};

void VtolPathFollowerSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VtolPathFollowerSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->horizontalVelMaxChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->HorizontalVelMaxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->verticalVelMaxChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->VerticalVelMaxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->courseFeedForwardChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->CourseFeedForwardChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->horizontalPosPChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->HorizontalPosPChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->verticalPosPChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->VerticalPosPChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->horizontalVelPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 11: _t->HorizontalVelPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 12: _t->horizontalVelPIDKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->HorizontalVelPID_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->horizontalVelPIDKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->HorizontalVelPID_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->horizontalVelPIDKdChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->HorizontalVelPID_KdChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->horizontalVelPIDBetaChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->HorizontalVelPID_BetaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->verticalVelPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 21: _t->VerticalVelPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 22: _t->verticalVelPIDKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->VerticalVelPID_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->verticalVelPIDKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->VerticalVelPID_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->verticalVelPIDKdChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->VerticalVelPID_KdChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->verticalVelPIDBetaChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 29: _t->VerticalVelPID_BetaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->thrustLimitsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 31: _t->ThrustLimitsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 32: _t->thrustLimitsMinChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 33: _t->ThrustLimits_MinChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 34: _t->thrustLimitsNeutralChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->ThrustLimits_NeutralChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 36: _t->thrustLimitsMaxChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 37: _t->ThrustLimits_MaxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->velocityFeedforwardChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 39: _t->VelocityFeedforwardChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->flyawayEmergencyFallbackTriggerTimeChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 41: _t->FlyawayEmergencyFallbackTriggerTimeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->emergencyFallbackAttitudeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 43: _t->EmergencyFallbackAttitudeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 44: _t->emergencyFallbackAttitudeRollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 45: _t->EmergencyFallbackAttitude_RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->emergencyFallbackAttitudePitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->EmergencyFallbackAttitude_PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->emergencyFallbackYawRateChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 49: _t->EmergencyFallbackYawRateChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 50: _t->emergencyFallbackYawRatekPChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 51: _t->EmergencyFallbackYawRate_kPChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 52: _t->emergencyFallbackYawRateMaxChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 53: _t->EmergencyFallbackYawRate_MaxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 54: _t->maxRollPitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 55: _t->MaxRollPitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 56: _t->brakeRateChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 57: _t->BrakeRateChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 58: _t->brakeMaxPitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 59: _t->BrakeMaxPitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 60: _t->brakeHorizontalVelPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 61: _t->BrakeHorizontalVelPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 62: _t->brakeHorizontalVelPIDKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 63: _t->BrakeHorizontalVelPID_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 64: _t->brakeHorizontalVelPIDKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 65: _t->BrakeHorizontalVelPID_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 66: _t->brakeHorizontalVelPIDKdChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 67: _t->BrakeHorizontalVelPID_KdChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 68: _t->brakeHorizontalVelPIDBetaChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 69: _t->BrakeHorizontalVelPID_BetaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 70: _t->brakeVelocityFeedforwardChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 71: _t->BrakeVelocityFeedforwardChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 72: _t->landVerticalVelPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 73: _t->LandVerticalVelPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 74: _t->landVerticalVelPIDKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 75: _t->LandVerticalVelPID_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 76: _t->landVerticalVelPIDKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 77: _t->LandVerticalVelPID_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 78: _t->landVerticalVelPIDKdChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 79: _t->LandVerticalVelPID_KdChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 80: _t->landVerticalVelPIDBetaChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 81: _t->LandVerticalVelPID_BetaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 82: _t->autoTakeoffVerticalVelPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 83: _t->AutoTakeoffVerticalVelPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 84: _t->autoTakeoffVerticalVelPIDKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 85: _t->AutoTakeoffVerticalVelPID_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 86: _t->autoTakeoffVerticalVelPIDKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 87: _t->AutoTakeoffVerticalVelPID_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 88: _t->autoTakeoffVerticalVelPIDKdChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 89: _t->AutoTakeoffVerticalVelPID_KdChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 90: _t->autoTakeoffVerticalVelPIDBetaChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 91: _t->AutoTakeoffVerticalVelPID_BetaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 92: _t->velocityRoamMaxRollPitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 93: _t->VelocityRoamMaxRollPitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 94: _t->velocityRoamHorizontalVelPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 95: _t->VelocityRoamHorizontalVelPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 96: _t->velocityRoamHorizontalVelPIDKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 97: _t->VelocityRoamHorizontalVelPID_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 98: _t->velocityRoamHorizontalVelPIDKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 99: _t->VelocityRoamHorizontalVelPID_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 100: _t->velocityRoamHorizontalVelPIDKdChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 101: _t->VelocityRoamHorizontalVelPID_KdChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 102: _t->velocityRoamHorizontalVelPIDBetaChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 103: _t->VelocityRoamHorizontalVelPID_BetaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 104: _t->updatePeriodChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 105: _t->UpdatePeriodChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 106: _t->treatCustomCraftAsChanged((*reinterpret_cast< const VtolPathFollowerSettings_TreatCustomCraftAs::Enum(*)>(_a[1]))); break;
        case 107: _t->TreatCustomCraftAsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 108: _t->thrustControlChanged((*reinterpret_cast< const VtolPathFollowerSettings_ThrustControl::Enum(*)>(_a[1]))); break;
        case 109: _t->ThrustControlChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 110: _t->yawControlChanged((*reinterpret_cast< const VtolPathFollowerSettings_YawControl::Enum(*)>(_a[1]))); break;
        case 111: _t->YawControlChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 112: _t->flyawayEmergencyFallbackChanged((*reinterpret_cast< const VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum(*)>(_a[1]))); break;
        case 113: _t->FlyawayEmergencyFallbackChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 114: _t->setHorizontalVelMax((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 115: _t->setVerticalVelMax((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 116: _t->setCourseFeedForward((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 117: _t->setHorizontalPosP((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 118: _t->setVerticalPosP((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 119: _t->setHorizontalVelPID((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 120: _t->setHorizontalVelPIDKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 121: _t->setHorizontalVelPID_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 122: _t->setHorizontalVelPIDKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 123: _t->setHorizontalVelPID_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 124: _t->setHorizontalVelPIDKd((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 125: _t->setHorizontalVelPID_Kd((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 126: _t->setHorizontalVelPIDBeta((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 127: _t->setHorizontalVelPID_Beta((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 128: _t->setVerticalVelPID((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 129: _t->setVerticalVelPIDKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 130: _t->setVerticalVelPID_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 131: _t->setVerticalVelPIDKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 132: _t->setVerticalVelPID_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 133: _t->setVerticalVelPIDKd((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 134: _t->setVerticalVelPID_Kd((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 135: _t->setVerticalVelPIDBeta((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 136: _t->setVerticalVelPID_Beta((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 137: _t->setThrustLimits((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 138: _t->setThrustLimitsMin((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 139: _t->setThrustLimits_Min((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 140: _t->setThrustLimitsNeutral((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 141: _t->setThrustLimits_Neutral((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 142: _t->setThrustLimitsMax((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 143: _t->setThrustLimits_Max((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 144: _t->setVelocityFeedforward((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 145: _t->setFlyawayEmergencyFallbackTriggerTime((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 146: _t->setEmergencyFallbackAttitude((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 147: _t->setEmergencyFallbackAttitudeRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 148: _t->setEmergencyFallbackAttitude_Roll((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 149: _t->setEmergencyFallbackAttitudePitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 150: _t->setEmergencyFallbackAttitude_Pitch((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 151: _t->setEmergencyFallbackYawRate((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 152: _t->setEmergencyFallbackYawRatekP((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 153: _t->setEmergencyFallbackYawRate_kP((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 154: _t->setEmergencyFallbackYawRateMax((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 155: _t->setEmergencyFallbackYawRate_Max((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 156: _t->setMaxRollPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 157: _t->setBrakeRate((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 158: _t->setBrakeMaxPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 159: _t->setBrakeHorizontalVelPID((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 160: _t->setBrakeHorizontalVelPIDKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 161: _t->setBrakeHorizontalVelPID_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 162: _t->setBrakeHorizontalVelPIDKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 163: _t->setBrakeHorizontalVelPID_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 164: _t->setBrakeHorizontalVelPIDKd((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 165: _t->setBrakeHorizontalVelPID_Kd((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 166: _t->setBrakeHorizontalVelPIDBeta((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 167: _t->setBrakeHorizontalVelPID_Beta((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 168: _t->setBrakeVelocityFeedforward((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 169: _t->setLandVerticalVelPID((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 170: _t->setLandVerticalVelPIDKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 171: _t->setLandVerticalVelPID_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 172: _t->setLandVerticalVelPIDKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 173: _t->setLandVerticalVelPID_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 174: _t->setLandVerticalVelPIDKd((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 175: _t->setLandVerticalVelPID_Kd((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 176: _t->setLandVerticalVelPIDBeta((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 177: _t->setLandVerticalVelPID_Beta((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 178: _t->setAutoTakeoffVerticalVelPID((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 179: _t->setAutoTakeoffVerticalVelPIDKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 180: _t->setAutoTakeoffVerticalVelPID_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 181: _t->setAutoTakeoffVerticalVelPIDKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 182: _t->setAutoTakeoffVerticalVelPID_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 183: _t->setAutoTakeoffVerticalVelPIDKd((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 184: _t->setAutoTakeoffVerticalVelPID_Kd((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 185: _t->setAutoTakeoffVerticalVelPIDBeta((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 186: _t->setAutoTakeoffVerticalVelPID_Beta((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 187: _t->setVelocityRoamMaxRollPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 188: _t->setVelocityRoamHorizontalVelPID((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 189: _t->setVelocityRoamHorizontalVelPIDKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 190: _t->setVelocityRoamHorizontalVelPID_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 191: _t->setVelocityRoamHorizontalVelPIDKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 192: _t->setVelocityRoamHorizontalVelPID_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 193: _t->setVelocityRoamHorizontalVelPIDKd((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 194: _t->setVelocityRoamHorizontalVelPID_Kd((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 195: _t->setVelocityRoamHorizontalVelPIDBeta((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 196: _t->setVelocityRoamHorizontalVelPID_Beta((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 197: _t->setUpdatePeriod((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 198: _t->setTreatCustomCraftAs((*reinterpret_cast< const VtolPathFollowerSettings_TreatCustomCraftAs::Enum(*)>(_a[1]))); break;
        case 199: _t->setTreatCustomCraftAs((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 200: _t->setThrustControl((*reinterpret_cast< const VtolPathFollowerSettings_ThrustControl::Enum(*)>(_a[1]))); break;
        case 201: _t->setThrustControl((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 202: _t->setYawControl((*reinterpret_cast< const VtolPathFollowerSettings_YawControl::Enum(*)>(_a[1]))); break;
        case 203: _t->setYawControl((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 204: _t->setFlyawayEmergencyFallback((*reinterpret_cast< const VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum(*)>(_a[1]))); break;
        case 205: _t->setFlyawayEmergencyFallback((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 206: _t->emitNotifications(); break;
        case 207: { float _r = _t->getHorizontalVelMax();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 208: { float _r = _t->getVerticalVelMax();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 209: { float _r = _t->getCourseFeedForward();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 210: { float _r = _t->getHorizontalPosP();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 211: { float _r = _t->getVerticalPosP();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 212: { float _r = _t->horizontalVelPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 213: { float _r = _t->getHorizontalVelPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 214: { float _r = _t->getHorizontalVelPID_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 215: { float _r = _t->getHorizontalVelPID_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 216: { float _r = _t->getHorizontalVelPID_Kd();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 217: { float _r = _t->getHorizontalVelPID_Beta();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 218: { float _r = _t->verticalVelPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 219: { float _r = _t->getVerticalVelPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 220: { float _r = _t->getVerticalVelPID_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 221: { float _r = _t->getVerticalVelPID_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 222: { float _r = _t->getVerticalVelPID_Kd();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 223: { float _r = _t->getVerticalVelPID_Beta();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 224: { float _r = _t->thrustLimits((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 225: { float _r = _t->getThrustLimits((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 226: { float _r = _t->getThrustLimits_Min();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 227: { float _r = _t->getThrustLimits_Neutral();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 228: { float _r = _t->getThrustLimits_Max();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 229: { float _r = _t->getVelocityFeedforward();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 230: { float _r = _t->getFlyawayEmergencyFallbackTriggerTime();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 231: { float _r = _t->emergencyFallbackAttitude((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 232: { float _r = _t->getEmergencyFallbackAttitude((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 233: { float _r = _t->getEmergencyFallbackAttitude_Roll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 234: { float _r = _t->getEmergencyFallbackAttitude_Pitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 235: { float _r = _t->emergencyFallbackYawRate((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 236: { float _r = _t->getEmergencyFallbackYawRate((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 237: { float _r = _t->getEmergencyFallbackYawRate_kP();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 238: { float _r = _t->getEmergencyFallbackYawRate_Max();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 239: { float _r = _t->getMaxRollPitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 240: { float _r = _t->getBrakeRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 241: { float _r = _t->getBrakeMaxPitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 242: { float _r = _t->brakeHorizontalVelPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 243: { float _r = _t->getBrakeHorizontalVelPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 244: { float _r = _t->getBrakeHorizontalVelPID_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 245: { float _r = _t->getBrakeHorizontalVelPID_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 246: { float _r = _t->getBrakeHorizontalVelPID_Kd();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 247: { float _r = _t->getBrakeHorizontalVelPID_Beta();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 248: { float _r = _t->getBrakeVelocityFeedforward();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 249: { float _r = _t->landVerticalVelPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 250: { float _r = _t->getLandVerticalVelPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 251: { float _r = _t->getLandVerticalVelPID_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 252: { float _r = _t->getLandVerticalVelPID_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 253: { float _r = _t->getLandVerticalVelPID_Kd();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 254: { float _r = _t->getLandVerticalVelPID_Beta();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 255: { float _r = _t->autoTakeoffVerticalVelPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 256: { float _r = _t->getAutoTakeoffVerticalVelPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 257: { float _r = _t->getAutoTakeoffVerticalVelPID_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 258: { float _r = _t->getAutoTakeoffVerticalVelPID_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 259: { float _r = _t->getAutoTakeoffVerticalVelPID_Kd();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 260: { float _r = _t->getAutoTakeoffVerticalVelPID_Beta();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 261: { float _r = _t->getVelocityRoamMaxRollPitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 262: { float _r = _t->velocityRoamHorizontalVelPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 263: { float _r = _t->getVelocityRoamHorizontalVelPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 264: { float _r = _t->getVelocityRoamHorizontalVelPID_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 265: { float _r = _t->getVelocityRoamHorizontalVelPID_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 266: { float _r = _t->getVelocityRoamHorizontalVelPID_Kd();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 267: { float _r = _t->getVelocityRoamHorizontalVelPID_Beta();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 268: { quint16 _r = _t->getUpdatePeriod();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 269: { quint8 _r = _t->getTreatCustomCraftAs();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 270: { quint8 _r = _t->getThrustControl();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 271: { quint8 _r = _t->getYawControl();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 272: { quint8 _r = _t->getFlyawayEmergencyFallback();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::horizontalVelMaxChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::HorizontalVelMaxChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::verticalVelMaxChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VerticalVelMaxChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::courseFeedForwardChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::CourseFeedForwardChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::horizontalPosPChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::HorizontalPosPChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::verticalPosPChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VerticalPosPChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::horizontalVelPIDChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::HorizontalVelPIDChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::horizontalVelPIDKpChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::HorizontalVelPID_KpChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::horizontalVelPIDKiChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::HorizontalVelPID_KiChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::horizontalVelPIDKdChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::HorizontalVelPID_KdChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::horizontalVelPIDBetaChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::HorizontalVelPID_BetaChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::verticalVelPIDChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VerticalVelPIDChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::verticalVelPIDKpChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VerticalVelPID_KpChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::verticalVelPIDKiChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VerticalVelPID_KiChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::verticalVelPIDKdChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VerticalVelPID_KdChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::verticalVelPIDBetaChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VerticalVelPID_BetaChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::thrustLimitsChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::ThrustLimitsChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::thrustLimitsMinChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::ThrustLimits_MinChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::thrustLimitsNeutralChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::ThrustLimits_NeutralChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::thrustLimitsMaxChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::ThrustLimits_MaxChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::velocityFeedforwardChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VelocityFeedforwardChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::flyawayEmergencyFallbackTriggerTimeChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::FlyawayEmergencyFallbackTriggerTimeChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::emergencyFallbackAttitudeChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::EmergencyFallbackAttitudeChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::emergencyFallbackAttitudeRollChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::EmergencyFallbackAttitude_RollChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::emergencyFallbackAttitudePitchChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::EmergencyFallbackAttitude_PitchChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::emergencyFallbackYawRateChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::EmergencyFallbackYawRateChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::emergencyFallbackYawRatekPChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::EmergencyFallbackYawRate_kPChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::emergencyFallbackYawRateMaxChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::EmergencyFallbackYawRate_MaxChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::maxRollPitchChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::MaxRollPitchChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::brakeRateChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::BrakeRateChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::brakeMaxPitchChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::BrakeMaxPitchChanged)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::brakeHorizontalVelPIDChanged)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::BrakeHorizontalVelPIDChanged)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::brakeHorizontalVelPIDKpChanged)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::BrakeHorizontalVelPID_KpChanged)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::brakeHorizontalVelPIDKiChanged)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::BrakeHorizontalVelPID_KiChanged)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::brakeHorizontalVelPIDKdChanged)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::BrakeHorizontalVelPID_KdChanged)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::brakeHorizontalVelPIDBetaChanged)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::BrakeHorizontalVelPID_BetaChanged)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::brakeVelocityFeedforwardChanged)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::BrakeVelocityFeedforwardChanged)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::landVerticalVelPIDChanged)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::LandVerticalVelPIDChanged)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::landVerticalVelPIDKpChanged)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::LandVerticalVelPID_KpChanged)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::landVerticalVelPIDKiChanged)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::LandVerticalVelPID_KiChanged)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::landVerticalVelPIDKdChanged)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::LandVerticalVelPID_KdChanged)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::landVerticalVelPIDBetaChanged)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::LandVerticalVelPID_BetaChanged)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::autoTakeoffVerticalVelPIDChanged)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::AutoTakeoffVerticalVelPIDChanged)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::autoTakeoffVerticalVelPIDKpChanged)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::AutoTakeoffVerticalVelPID_KpChanged)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::autoTakeoffVerticalVelPIDKiChanged)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::AutoTakeoffVerticalVelPID_KiChanged)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::autoTakeoffVerticalVelPIDKdChanged)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::AutoTakeoffVerticalVelPID_KdChanged)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::autoTakeoffVerticalVelPIDBetaChanged)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::AutoTakeoffVerticalVelPID_BetaChanged)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::velocityRoamMaxRollPitchChanged)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VelocityRoamMaxRollPitchChanged)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::velocityRoamHorizontalVelPIDChanged)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VelocityRoamHorizontalVelPIDChanged)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::velocityRoamHorizontalVelPIDKpChanged)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VelocityRoamHorizontalVelPID_KpChanged)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::velocityRoamHorizontalVelPIDKiChanged)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VelocityRoamHorizontalVelPID_KiChanged)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::velocityRoamHorizontalVelPIDKdChanged)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VelocityRoamHorizontalVelPID_KdChanged)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::velocityRoamHorizontalVelPIDBetaChanged)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::VelocityRoamHorizontalVelPID_BetaChanged)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::updatePeriodChanged)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::UpdatePeriodChanged)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const VtolPathFollowerSettings_TreatCustomCraftAs::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::treatCustomCraftAsChanged)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::TreatCustomCraftAsChanged)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const VtolPathFollowerSettings_ThrustControl::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::thrustControlChanged)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::ThrustControlChanged)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const VtolPathFollowerSettings_YawControl::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::yawControlChanged)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::YawControlChanged)) {
                *result = 111;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(const VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::flyawayEmergencyFallbackChanged)) {
                *result = 112;
                return;
            }
        }
        {
            using _t = void (VtolPathFollowerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolPathFollowerSettings::FlyawayEmergencyFallbackChanged)) {
                *result = 113;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VtolPathFollowerSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->horizontalVelMax(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->verticalVelMax(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->courseFeedForward(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->horizontalPosP(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->verticalPosP(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->horizontalVelPIDKp(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->horizontalVelPIDKi(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->horizontalVelPIDKd(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->horizontalVelPIDBeta(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->verticalVelPIDKp(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->verticalVelPIDKi(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->verticalVelPIDKd(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->verticalVelPIDBeta(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->thrustLimitsMin(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->thrustLimitsNeutral(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->thrustLimitsMax(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->velocityFeedforward(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->flyawayEmergencyFallbackTriggerTime(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->emergencyFallbackAttitudeRoll(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->emergencyFallbackAttitudePitch(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->emergencyFallbackYawRatekP(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->emergencyFallbackYawRateMax(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->maxRollPitch(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->brakeRate(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->brakeMaxPitch(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->brakeHorizontalVelPIDKp(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->brakeHorizontalVelPIDKi(); break;
        case 27: *reinterpret_cast< float*>(_v) = _t->brakeHorizontalVelPIDKd(); break;
        case 28: *reinterpret_cast< float*>(_v) = _t->brakeHorizontalVelPIDBeta(); break;
        case 29: *reinterpret_cast< float*>(_v) = _t->brakeVelocityFeedforward(); break;
        case 30: *reinterpret_cast< float*>(_v) = _t->landVerticalVelPIDKp(); break;
        case 31: *reinterpret_cast< float*>(_v) = _t->landVerticalVelPIDKi(); break;
        case 32: *reinterpret_cast< float*>(_v) = _t->landVerticalVelPIDKd(); break;
        case 33: *reinterpret_cast< float*>(_v) = _t->landVerticalVelPIDBeta(); break;
        case 34: *reinterpret_cast< float*>(_v) = _t->autoTakeoffVerticalVelPIDKp(); break;
        case 35: *reinterpret_cast< float*>(_v) = _t->autoTakeoffVerticalVelPIDKi(); break;
        case 36: *reinterpret_cast< float*>(_v) = _t->autoTakeoffVerticalVelPIDKd(); break;
        case 37: *reinterpret_cast< float*>(_v) = _t->autoTakeoffVerticalVelPIDBeta(); break;
        case 38: *reinterpret_cast< float*>(_v) = _t->velocityRoamMaxRollPitch(); break;
        case 39: *reinterpret_cast< float*>(_v) = _t->velocityRoamHorizontalVelPIDKp(); break;
        case 40: *reinterpret_cast< float*>(_v) = _t->velocityRoamHorizontalVelPIDKi(); break;
        case 41: *reinterpret_cast< float*>(_v) = _t->velocityRoamHorizontalVelPIDKd(); break;
        case 42: *reinterpret_cast< float*>(_v) = _t->velocityRoamHorizontalVelPIDBeta(); break;
        case 43: *reinterpret_cast< quint16*>(_v) = _t->updatePeriod(); break;
        case 44: *reinterpret_cast< VtolPathFollowerSettings_TreatCustomCraftAs::Enum*>(_v) = _t->treatCustomCraftAs(); break;
        case 45: *reinterpret_cast< VtolPathFollowerSettings_ThrustControl::Enum*>(_v) = _t->thrustControl(); break;
        case 46: *reinterpret_cast< VtolPathFollowerSettings_YawControl::Enum*>(_v) = _t->yawControl(); break;
        case 47: *reinterpret_cast< VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum*>(_v) = _t->flyawayEmergencyFallback(); break;
        case 48: *reinterpret_cast< float*>(_v) = _t->getHorizontalVelMax(); break;
        case 49: *reinterpret_cast< float*>(_v) = _t->getVerticalVelMax(); break;
        case 50: *reinterpret_cast< float*>(_v) = _t->getCourseFeedForward(); break;
        case 51: *reinterpret_cast< float*>(_v) = _t->getHorizontalPosP(); break;
        case 52: *reinterpret_cast< float*>(_v) = _t->getVerticalPosP(); break;
        case 53: *reinterpret_cast< float*>(_v) = _t->getHorizontalVelPID_Kp(); break;
        case 54: *reinterpret_cast< float*>(_v) = _t->getHorizontalVelPID_Ki(); break;
        case 55: *reinterpret_cast< float*>(_v) = _t->getHorizontalVelPID_Kd(); break;
        case 56: *reinterpret_cast< float*>(_v) = _t->getHorizontalVelPID_Beta(); break;
        case 57: *reinterpret_cast< float*>(_v) = _t->getVerticalVelPID_Kp(); break;
        case 58: *reinterpret_cast< float*>(_v) = _t->getVerticalVelPID_Ki(); break;
        case 59: *reinterpret_cast< float*>(_v) = _t->getVerticalVelPID_Kd(); break;
        case 60: *reinterpret_cast< float*>(_v) = _t->getVerticalVelPID_Beta(); break;
        case 61: *reinterpret_cast< float*>(_v) = _t->getThrustLimits_Min(); break;
        case 62: *reinterpret_cast< float*>(_v) = _t->getThrustLimits_Neutral(); break;
        case 63: *reinterpret_cast< float*>(_v) = _t->getThrustLimits_Max(); break;
        case 64: *reinterpret_cast< float*>(_v) = _t->getVelocityFeedforward(); break;
        case 65: *reinterpret_cast< float*>(_v) = _t->getFlyawayEmergencyFallbackTriggerTime(); break;
        case 66: *reinterpret_cast< float*>(_v) = _t->getEmergencyFallbackAttitude_Roll(); break;
        case 67: *reinterpret_cast< float*>(_v) = _t->getEmergencyFallbackAttitude_Pitch(); break;
        case 68: *reinterpret_cast< float*>(_v) = _t->getEmergencyFallbackYawRate_kP(); break;
        case 69: *reinterpret_cast< float*>(_v) = _t->getEmergencyFallbackYawRate_Max(); break;
        case 70: *reinterpret_cast< float*>(_v) = _t->getMaxRollPitch(); break;
        case 71: *reinterpret_cast< float*>(_v) = _t->getBrakeRate(); break;
        case 72: *reinterpret_cast< float*>(_v) = _t->getBrakeMaxPitch(); break;
        case 73: *reinterpret_cast< float*>(_v) = _t->getBrakeHorizontalVelPID_Kp(); break;
        case 74: *reinterpret_cast< float*>(_v) = _t->getBrakeHorizontalVelPID_Ki(); break;
        case 75: *reinterpret_cast< float*>(_v) = _t->getBrakeHorizontalVelPID_Kd(); break;
        case 76: *reinterpret_cast< float*>(_v) = _t->getBrakeHorizontalVelPID_Beta(); break;
        case 77: *reinterpret_cast< float*>(_v) = _t->getBrakeVelocityFeedforward(); break;
        case 78: *reinterpret_cast< float*>(_v) = _t->getLandVerticalVelPID_Kp(); break;
        case 79: *reinterpret_cast< float*>(_v) = _t->getLandVerticalVelPID_Ki(); break;
        case 80: *reinterpret_cast< float*>(_v) = _t->getLandVerticalVelPID_Kd(); break;
        case 81: *reinterpret_cast< float*>(_v) = _t->getLandVerticalVelPID_Beta(); break;
        case 82: *reinterpret_cast< float*>(_v) = _t->getAutoTakeoffVerticalVelPID_Kp(); break;
        case 83: *reinterpret_cast< float*>(_v) = _t->getAutoTakeoffVerticalVelPID_Ki(); break;
        case 84: *reinterpret_cast< float*>(_v) = _t->getAutoTakeoffVerticalVelPID_Kd(); break;
        case 85: *reinterpret_cast< float*>(_v) = _t->getAutoTakeoffVerticalVelPID_Beta(); break;
        case 86: *reinterpret_cast< float*>(_v) = _t->getVelocityRoamMaxRollPitch(); break;
        case 87: *reinterpret_cast< float*>(_v) = _t->getVelocityRoamHorizontalVelPID_Kp(); break;
        case 88: *reinterpret_cast< float*>(_v) = _t->getVelocityRoamHorizontalVelPID_Ki(); break;
        case 89: *reinterpret_cast< float*>(_v) = _t->getVelocityRoamHorizontalVelPID_Kd(); break;
        case 90: *reinterpret_cast< float*>(_v) = _t->getVelocityRoamHorizontalVelPID_Beta(); break;
        case 91: *reinterpret_cast< quint16*>(_v) = _t->getUpdatePeriod(); break;
        case 92: *reinterpret_cast< quint8*>(_v) = _t->getTreatCustomCraftAs(); break;
        case 93: *reinterpret_cast< quint8*>(_v) = _t->getThrustControl(); break;
        case 94: *reinterpret_cast< quint8*>(_v) = _t->getYawControl(); break;
        case 95: *reinterpret_cast< quint8*>(_v) = _t->getFlyawayEmergencyFallback(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VtolPathFollowerSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHorizontalVelMax(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setVerticalVelMax(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setCourseFeedForward(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setHorizontalPosP(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setVerticalPosP(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setHorizontalVelPIDKp(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setHorizontalVelPIDKi(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setHorizontalVelPIDKd(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setHorizontalVelPIDBeta(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setVerticalVelPIDKp(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setVerticalVelPIDKi(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setVerticalVelPIDKd(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setVerticalVelPIDBeta(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setThrustLimitsMin(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setThrustLimitsNeutral(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setThrustLimitsMax(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setVelocityFeedforward(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setFlyawayEmergencyFallbackTriggerTime(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setEmergencyFallbackAttitudeRoll(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setEmergencyFallbackAttitudePitch(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setEmergencyFallbackYawRatekP(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setEmergencyFallbackYawRateMax(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setMaxRollPitch(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setBrakeRate(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setBrakeMaxPitch(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setBrakeHorizontalVelPIDKp(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setBrakeHorizontalVelPIDKi(*reinterpret_cast< float*>(_v)); break;
        case 27: _t->setBrakeHorizontalVelPIDKd(*reinterpret_cast< float*>(_v)); break;
        case 28: _t->setBrakeHorizontalVelPIDBeta(*reinterpret_cast< float*>(_v)); break;
        case 29: _t->setBrakeVelocityFeedforward(*reinterpret_cast< float*>(_v)); break;
        case 30: _t->setLandVerticalVelPIDKp(*reinterpret_cast< float*>(_v)); break;
        case 31: _t->setLandVerticalVelPIDKi(*reinterpret_cast< float*>(_v)); break;
        case 32: _t->setLandVerticalVelPIDKd(*reinterpret_cast< float*>(_v)); break;
        case 33: _t->setLandVerticalVelPIDBeta(*reinterpret_cast< float*>(_v)); break;
        case 34: _t->setAutoTakeoffVerticalVelPIDKp(*reinterpret_cast< float*>(_v)); break;
        case 35: _t->setAutoTakeoffVerticalVelPIDKi(*reinterpret_cast< float*>(_v)); break;
        case 36: _t->setAutoTakeoffVerticalVelPIDKd(*reinterpret_cast< float*>(_v)); break;
        case 37: _t->setAutoTakeoffVerticalVelPIDBeta(*reinterpret_cast< float*>(_v)); break;
        case 38: _t->setVelocityRoamMaxRollPitch(*reinterpret_cast< float*>(_v)); break;
        case 39: _t->setVelocityRoamHorizontalVelPIDKp(*reinterpret_cast< float*>(_v)); break;
        case 40: _t->setVelocityRoamHorizontalVelPIDKi(*reinterpret_cast< float*>(_v)); break;
        case 41: _t->setVelocityRoamHorizontalVelPIDKd(*reinterpret_cast< float*>(_v)); break;
        case 42: _t->setVelocityRoamHorizontalVelPIDBeta(*reinterpret_cast< float*>(_v)); break;
        case 43: _t->setUpdatePeriod(*reinterpret_cast< quint16*>(_v)); break;
        case 44: _t->setTreatCustomCraftAs(*reinterpret_cast< VtolPathFollowerSettings_TreatCustomCraftAs::Enum*>(_v)); break;
        case 45: _t->setThrustControl(*reinterpret_cast< VtolPathFollowerSettings_ThrustControl::Enum*>(_v)); break;
        case 46: _t->setYawControl(*reinterpret_cast< VtolPathFollowerSettings_YawControl::Enum*>(_v)); break;
        case 47: _t->setFlyawayEmergencyFallback(*reinterpret_cast< VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum*>(_v)); break;
        case 48: _t->setHorizontalVelMax(*reinterpret_cast< float*>(_v)); break;
        case 49: _t->setVerticalVelMax(*reinterpret_cast< float*>(_v)); break;
        case 50: _t->setCourseFeedForward(*reinterpret_cast< float*>(_v)); break;
        case 51: _t->setHorizontalPosP(*reinterpret_cast< float*>(_v)); break;
        case 52: _t->setVerticalPosP(*reinterpret_cast< float*>(_v)); break;
        case 53: _t->setHorizontalVelPID_Kp(*reinterpret_cast< float*>(_v)); break;
        case 54: _t->setHorizontalVelPID_Ki(*reinterpret_cast< float*>(_v)); break;
        case 55: _t->setHorizontalVelPID_Kd(*reinterpret_cast< float*>(_v)); break;
        case 56: _t->setHorizontalVelPID_Beta(*reinterpret_cast< float*>(_v)); break;
        case 57: _t->setVerticalVelPID_Kp(*reinterpret_cast< float*>(_v)); break;
        case 58: _t->setVerticalVelPID_Ki(*reinterpret_cast< float*>(_v)); break;
        case 59: _t->setVerticalVelPID_Kd(*reinterpret_cast< float*>(_v)); break;
        case 60: _t->setVerticalVelPID_Beta(*reinterpret_cast< float*>(_v)); break;
        case 61: _t->setThrustLimits_Min(*reinterpret_cast< float*>(_v)); break;
        case 62: _t->setThrustLimits_Neutral(*reinterpret_cast< float*>(_v)); break;
        case 63: _t->setThrustLimits_Max(*reinterpret_cast< float*>(_v)); break;
        case 64: _t->setVelocityFeedforward(*reinterpret_cast< float*>(_v)); break;
        case 65: _t->setFlyawayEmergencyFallbackTriggerTime(*reinterpret_cast< float*>(_v)); break;
        case 66: _t->setEmergencyFallbackAttitude_Roll(*reinterpret_cast< float*>(_v)); break;
        case 67: _t->setEmergencyFallbackAttitude_Pitch(*reinterpret_cast< float*>(_v)); break;
        case 68: _t->setEmergencyFallbackYawRate_kP(*reinterpret_cast< float*>(_v)); break;
        case 69: _t->setEmergencyFallbackYawRate_Max(*reinterpret_cast< float*>(_v)); break;
        case 70: _t->setMaxRollPitch(*reinterpret_cast< float*>(_v)); break;
        case 71: _t->setBrakeRate(*reinterpret_cast< float*>(_v)); break;
        case 72: _t->setBrakeMaxPitch(*reinterpret_cast< float*>(_v)); break;
        case 73: _t->setBrakeHorizontalVelPID_Kp(*reinterpret_cast< float*>(_v)); break;
        case 74: _t->setBrakeHorizontalVelPID_Ki(*reinterpret_cast< float*>(_v)); break;
        case 75: _t->setBrakeHorizontalVelPID_Kd(*reinterpret_cast< float*>(_v)); break;
        case 76: _t->setBrakeHorizontalVelPID_Beta(*reinterpret_cast< float*>(_v)); break;
        case 77: _t->setBrakeVelocityFeedforward(*reinterpret_cast< float*>(_v)); break;
        case 78: _t->setLandVerticalVelPID_Kp(*reinterpret_cast< float*>(_v)); break;
        case 79: _t->setLandVerticalVelPID_Ki(*reinterpret_cast< float*>(_v)); break;
        case 80: _t->setLandVerticalVelPID_Kd(*reinterpret_cast< float*>(_v)); break;
        case 81: _t->setLandVerticalVelPID_Beta(*reinterpret_cast< float*>(_v)); break;
        case 82: _t->setAutoTakeoffVerticalVelPID_Kp(*reinterpret_cast< float*>(_v)); break;
        case 83: _t->setAutoTakeoffVerticalVelPID_Ki(*reinterpret_cast< float*>(_v)); break;
        case 84: _t->setAutoTakeoffVerticalVelPID_Kd(*reinterpret_cast< float*>(_v)); break;
        case 85: _t->setAutoTakeoffVerticalVelPID_Beta(*reinterpret_cast< float*>(_v)); break;
        case 86: _t->setVelocityRoamMaxRollPitch(*reinterpret_cast< float*>(_v)); break;
        case 87: _t->setVelocityRoamHorizontalVelPID_Kp(*reinterpret_cast< float*>(_v)); break;
        case 88: _t->setVelocityRoamHorizontalVelPID_Ki(*reinterpret_cast< float*>(_v)); break;
        case 89: _t->setVelocityRoamHorizontalVelPID_Kd(*reinterpret_cast< float*>(_v)); break;
        case 90: _t->setVelocityRoamHorizontalVelPID_Beta(*reinterpret_cast< float*>(_v)); break;
        case 91: _t->setUpdatePeriod(*reinterpret_cast< quint16*>(_v)); break;
        case 92: _t->setTreatCustomCraftAs(*reinterpret_cast< quint8*>(_v)); break;
        case 93: _t->setThrustControl(*reinterpret_cast< quint8*>(_v)); break;
        case 94: _t->setYawControl(*reinterpret_cast< quint8*>(_v)); break;
        case 95: _t->setFlyawayEmergencyFallback(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_VtolPathFollowerSettings[] = {
        &VtolPathFollowerSettings_TreatCustomCraftAs::staticMetaObject,
    &VtolPathFollowerSettings_ThrustControl::staticMetaObject,
    &VtolPathFollowerSettings_YawControl::staticMetaObject,
    &VtolPathFollowerSettings_FlyawayEmergencyFallback::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject VtolPathFollowerSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_VtolPathFollowerSettings.data,
    qt_meta_data_VtolPathFollowerSettings,
    qt_static_metacall,
    qt_meta_extradata_VtolPathFollowerSettings,
    nullptr
} };


const QMetaObject *VtolPathFollowerSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VtolPathFollowerSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VtolPathFollowerSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int VtolPathFollowerSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 273)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 273;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 273)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 273;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 96;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 96;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 96;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 96;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 96;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 96;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VtolPathFollowerSettings::horizontalVelMaxChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VtolPathFollowerSettings::HorizontalVelMaxChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VtolPathFollowerSettings::verticalVelMaxChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VtolPathFollowerSettings::VerticalVelMaxChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VtolPathFollowerSettings::courseFeedForwardChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VtolPathFollowerSettings::CourseFeedForwardChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void VtolPathFollowerSettings::horizontalPosPChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void VtolPathFollowerSettings::HorizontalPosPChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void VtolPathFollowerSettings::verticalPosPChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void VtolPathFollowerSettings::VerticalPosPChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void VtolPathFollowerSettings::horizontalVelPIDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void VtolPathFollowerSettings::HorizontalVelPIDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void VtolPathFollowerSettings::horizontalVelPIDKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void VtolPathFollowerSettings::HorizontalVelPID_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void VtolPathFollowerSettings::horizontalVelPIDKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void VtolPathFollowerSettings::HorizontalVelPID_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void VtolPathFollowerSettings::horizontalVelPIDKdChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void VtolPathFollowerSettings::HorizontalVelPID_KdChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void VtolPathFollowerSettings::horizontalVelPIDBetaChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void VtolPathFollowerSettings::HorizontalVelPID_BetaChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void VtolPathFollowerSettings::verticalVelPIDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void VtolPathFollowerSettings::VerticalVelPIDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void VtolPathFollowerSettings::verticalVelPIDKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void VtolPathFollowerSettings::VerticalVelPID_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void VtolPathFollowerSettings::verticalVelPIDKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void VtolPathFollowerSettings::VerticalVelPID_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void VtolPathFollowerSettings::verticalVelPIDKdChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void VtolPathFollowerSettings::VerticalVelPID_KdChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void VtolPathFollowerSettings::verticalVelPIDBetaChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void VtolPathFollowerSettings::VerticalVelPID_BetaChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void VtolPathFollowerSettings::thrustLimitsChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void VtolPathFollowerSettings::ThrustLimitsChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void VtolPathFollowerSettings::thrustLimitsMinChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void VtolPathFollowerSettings::ThrustLimits_MinChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void VtolPathFollowerSettings::thrustLimitsNeutralChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void VtolPathFollowerSettings::ThrustLimits_NeutralChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void VtolPathFollowerSettings::thrustLimitsMaxChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void VtolPathFollowerSettings::ThrustLimits_MaxChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void VtolPathFollowerSettings::velocityFeedforwardChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void VtolPathFollowerSettings::VelocityFeedforwardChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void VtolPathFollowerSettings::flyawayEmergencyFallbackTriggerTimeChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void VtolPathFollowerSettings::FlyawayEmergencyFallbackTriggerTimeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void VtolPathFollowerSettings::emergencyFallbackAttitudeChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void VtolPathFollowerSettings::EmergencyFallbackAttitudeChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void VtolPathFollowerSettings::emergencyFallbackAttitudeRollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void VtolPathFollowerSettings::EmergencyFallbackAttitude_RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void VtolPathFollowerSettings::emergencyFallbackAttitudePitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void VtolPathFollowerSettings::EmergencyFallbackAttitude_PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void VtolPathFollowerSettings::emergencyFallbackYawRateChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void VtolPathFollowerSettings::EmergencyFallbackYawRateChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void VtolPathFollowerSettings::emergencyFallbackYawRatekPChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void VtolPathFollowerSettings::EmergencyFallbackYawRate_kPChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void VtolPathFollowerSettings::emergencyFallbackYawRateMaxChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void VtolPathFollowerSettings::EmergencyFallbackYawRate_MaxChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void VtolPathFollowerSettings::maxRollPitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void VtolPathFollowerSettings::MaxRollPitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void VtolPathFollowerSettings::brakeRateChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void VtolPathFollowerSettings::BrakeRateChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void VtolPathFollowerSettings::brakeMaxPitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void VtolPathFollowerSettings::BrakeMaxPitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void VtolPathFollowerSettings::brakeHorizontalVelPIDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void VtolPathFollowerSettings::BrakeHorizontalVelPIDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void VtolPathFollowerSettings::brakeHorizontalVelPIDKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void VtolPathFollowerSettings::BrakeHorizontalVelPID_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void VtolPathFollowerSettings::brakeHorizontalVelPIDKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void VtolPathFollowerSettings::BrakeHorizontalVelPID_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void VtolPathFollowerSettings::brakeHorizontalVelPIDKdChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void VtolPathFollowerSettings::BrakeHorizontalVelPID_KdChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void VtolPathFollowerSettings::brakeHorizontalVelPIDBetaChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void VtolPathFollowerSettings::BrakeHorizontalVelPID_BetaChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void VtolPathFollowerSettings::brakeVelocityFeedforwardChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void VtolPathFollowerSettings::BrakeVelocityFeedforwardChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void VtolPathFollowerSettings::landVerticalVelPIDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void VtolPathFollowerSettings::LandVerticalVelPIDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void VtolPathFollowerSettings::landVerticalVelPIDKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void VtolPathFollowerSettings::LandVerticalVelPID_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void VtolPathFollowerSettings::landVerticalVelPIDKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void VtolPathFollowerSettings::LandVerticalVelPID_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void VtolPathFollowerSettings::landVerticalVelPIDKdChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void VtolPathFollowerSettings::LandVerticalVelPID_KdChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void VtolPathFollowerSettings::landVerticalVelPIDBetaChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void VtolPathFollowerSettings::LandVerticalVelPID_BetaChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void VtolPathFollowerSettings::autoTakeoffVerticalVelPIDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void VtolPathFollowerSettings::AutoTakeoffVerticalVelPIDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void VtolPathFollowerSettings::autoTakeoffVerticalVelPIDKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void VtolPathFollowerSettings::AutoTakeoffVerticalVelPID_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void VtolPathFollowerSettings::autoTakeoffVerticalVelPIDKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void VtolPathFollowerSettings::AutoTakeoffVerticalVelPID_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void VtolPathFollowerSettings::autoTakeoffVerticalVelPIDKdChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void VtolPathFollowerSettings::AutoTakeoffVerticalVelPID_KdChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void VtolPathFollowerSettings::autoTakeoffVerticalVelPIDBetaChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void VtolPathFollowerSettings::AutoTakeoffVerticalVelPID_BetaChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void VtolPathFollowerSettings::velocityRoamMaxRollPitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void VtolPathFollowerSettings::VelocityRoamMaxRollPitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void VtolPathFollowerSettings::velocityRoamHorizontalVelPIDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void VtolPathFollowerSettings::VelocityRoamHorizontalVelPIDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void VtolPathFollowerSettings::velocityRoamHorizontalVelPIDKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void VtolPathFollowerSettings::VelocityRoamHorizontalVelPID_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void VtolPathFollowerSettings::velocityRoamHorizontalVelPIDKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void VtolPathFollowerSettings::VelocityRoamHorizontalVelPID_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void VtolPathFollowerSettings::velocityRoamHorizontalVelPIDKdChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void VtolPathFollowerSettings::VelocityRoamHorizontalVelPID_KdChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void VtolPathFollowerSettings::velocityRoamHorizontalVelPIDBetaChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void VtolPathFollowerSettings::VelocityRoamHorizontalVelPID_BetaChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void VtolPathFollowerSettings::updatePeriodChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void VtolPathFollowerSettings::UpdatePeriodChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void VtolPathFollowerSettings::treatCustomCraftAsChanged(const VtolPathFollowerSettings_TreatCustomCraftAs::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void VtolPathFollowerSettings::TreatCustomCraftAsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void VtolPathFollowerSettings::thrustControlChanged(const VtolPathFollowerSettings_ThrustControl::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void VtolPathFollowerSettings::ThrustControlChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void VtolPathFollowerSettings::yawControlChanged(const VtolPathFollowerSettings_YawControl::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void VtolPathFollowerSettings::YawControlChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void VtolPathFollowerSettings::flyawayEmergencyFallbackChanged(const VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void VtolPathFollowerSettings::FlyawayEmergencyFallbackChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
