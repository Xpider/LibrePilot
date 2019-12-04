/****************************************************************************
** Meta object code from reading C++ file 'systemalarms.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../systemalarms.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemalarms.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemAlarmsConstants_t {
    QByteArrayData data[4];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemAlarmsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemAlarmsConstants_t qt_meta_stringdata_SystemAlarmsConstants = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SystemAlarmsConstants"
QT_MOC_LITERAL(1, 22, 4), // "Enum"
QT_MOC_LITERAL(2, 27, 10), // "AlarmCount"
QT_MOC_LITERAL(3, 38, 24) // "ExtendedAlarmStatusCount"

    },
    "SystemAlarmsConstants\0Enum\0AlarmCount\0"
    "ExtendedAlarmStatusCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemAlarmsConstants[] = {

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
       2, uint(SystemAlarmsConstants::AlarmCount),
       3, uint(SystemAlarmsConstants::ExtendedAlarmStatusCount),

       0        // eod
};

void SystemAlarmsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemAlarmsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemAlarmsConstants.data,
    qt_meta_data_SystemAlarmsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemAlarmsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemAlarmsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemAlarmsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemAlarmsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemAlarms_Alarm_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemAlarms_Alarm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemAlarms_Alarm_t qt_meta_stringdata_SystemAlarms_Alarm = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SystemAlarms_Alarm"
QT_MOC_LITERAL(1, 19, 4), // "Enum"
QT_MOC_LITERAL(2, 24, 13), // "Uninitialised"
QT_MOC_LITERAL(3, 38, 2), // "OK"
QT_MOC_LITERAL(4, 41, 7), // "Warning"
QT_MOC_LITERAL(5, 49, 8), // "Critical"
QT_MOC_LITERAL(6, 58, 5) // "Error"

    },
    "SystemAlarms_Alarm\0Enum\0Uninitialised\0"
    "OK\0Warning\0Critical\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemAlarms_Alarm[] = {

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
       2, uint(SystemAlarms_Alarm::Uninitialised),
       3, uint(SystemAlarms_Alarm::OK),
       4, uint(SystemAlarms_Alarm::Warning),
       5, uint(SystemAlarms_Alarm::Critical),
       6, uint(SystemAlarms_Alarm::Error),

       0        // eod
};

void SystemAlarms_Alarm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemAlarms_Alarm::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemAlarms_Alarm.data,
    qt_meta_data_SystemAlarms_Alarm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemAlarms_Alarm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemAlarms_Alarm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemAlarms_Alarm.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemAlarms_Alarm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemAlarms_ExtendedAlarmStatus_t {
    QByteArrayData data[8];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemAlarms_ExtendedAlarmStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemAlarms_ExtendedAlarmStatus_t qt_meta_stringdata_SystemAlarms_ExtendedAlarmStatus = {
    {
QT_MOC_LITERAL(0, 0, 32), // "SystemAlarms_ExtendedAlarmStatus"
QT_MOC_LITERAL(1, 33, 4), // "Enum"
QT_MOC_LITERAL(2, 38, 4), // "None"
QT_MOC_LITERAL(3, 43, 14), // "RebootRequired"
QT_MOC_LITERAL(4, 58, 10), // "FlightMode"
QT_MOC_LITERAL(5, 69, 25), // "UnsupportedConfig_OneShot"
QT_MOC_LITERAL(6, 95, 33), // "BadThrottleOrCollectiveInputR..."
QT_MOC_LITERAL(7, 129, 8) // "AutoTune"

    },
    "SystemAlarms_ExtendedAlarmStatus\0Enum\0"
    "None\0RebootRequired\0FlightMode\0"
    "UnsupportedConfig_OneShot\0"
    "BadThrottleOrCollectiveInputRange\0"
    "AutoTune"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemAlarms_ExtendedAlarmStatus[] = {

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
       2, uint(SystemAlarms_ExtendedAlarmStatus::None),
       3, uint(SystemAlarms_ExtendedAlarmStatus::RebootRequired),
       4, uint(SystemAlarms_ExtendedAlarmStatus::FlightMode),
       5, uint(SystemAlarms_ExtendedAlarmStatus::UnsupportedConfig_OneShot),
       6, uint(SystemAlarms_ExtendedAlarmStatus::BadThrottleOrCollectiveInputRange),
       7, uint(SystemAlarms_ExtendedAlarmStatus::AutoTune),

       0        // eod
};

void SystemAlarms_ExtendedAlarmStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemAlarms_ExtendedAlarmStatus::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemAlarms_ExtendedAlarmStatus.data,
    qt_meta_data_SystemAlarms_ExtendedAlarmStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemAlarms_ExtendedAlarmStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemAlarms_ExtendedAlarmStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemAlarms_ExtendedAlarmStatus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemAlarms_ExtendedAlarmStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemAlarms_t {
    QByteArrayData data[204];
    char stringdata0[4447];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemAlarms_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemAlarms_t qt_meta_stringdata_SystemAlarms = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SystemAlarms"
QT_MOC_LITERAL(1, 13, 12), // "alarmChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "index"
QT_MOC_LITERAL(4, 33, 24), // "SystemAlarms_Alarm::Enum"
QT_MOC_LITERAL(5, 58, 5), // "value"
QT_MOC_LITERAL(6, 64, 12), // "AlarmChanged"
QT_MOC_LITERAL(7, 77, 31), // "alarmSystemConfigurationChanged"
QT_MOC_LITERAL(8, 109, 32), // "Alarm_SystemConfigurationChanged"
QT_MOC_LITERAL(9, 142, 21), // "alarmBootFaultChanged"
QT_MOC_LITERAL(10, 164, 22), // "Alarm_BootFaultChanged"
QT_MOC_LITERAL(11, 187, 23), // "alarmOutOfMemoryChanged"
QT_MOC_LITERAL(12, 211, 24), // "Alarm_OutOfMemoryChanged"
QT_MOC_LITERAL(13, 236, 25), // "alarmStackOverflowChanged"
QT_MOC_LITERAL(14, 262, 26), // "Alarm_StackOverflowChanged"
QT_MOC_LITERAL(15, 289, 23), // "alarmCPUOverloadChanged"
QT_MOC_LITERAL(16, 313, 24), // "Alarm_CPUOverloadChanged"
QT_MOC_LITERAL(17, 338, 23), // "alarmEventSystemChanged"
QT_MOC_LITERAL(18, 362, 24), // "Alarm_EventSystemChanged"
QT_MOC_LITERAL(19, 387, 21), // "alarmTelemetryChanged"
QT_MOC_LITERAL(20, 409, 22), // "Alarm_TelemetryChanged"
QT_MOC_LITERAL(21, 432, 20), // "alarmReceiverChanged"
QT_MOC_LITERAL(22, 453, 21), // "Alarm_ReceiverChanged"
QT_MOC_LITERAL(23, 475, 25), // "alarmManualControlChanged"
QT_MOC_LITERAL(24, 501, 26), // "Alarm_ManualControlChanged"
QT_MOC_LITERAL(25, 528, 20), // "alarmActuatorChanged"
QT_MOC_LITERAL(26, 549, 21), // "Alarm_ActuatorChanged"
QT_MOC_LITERAL(27, 571, 20), // "alarmAttitudeChanged"
QT_MOC_LITERAL(28, 592, 21), // "Alarm_AttitudeChanged"
QT_MOC_LITERAL(29, 614, 15), // "alarmNavChanged"
QT_MOC_LITERAL(30, 630, 16), // "Alarm_NavChanged"
QT_MOC_LITERAL(31, 647, 19), // "alarmSensorsChanged"
QT_MOC_LITERAL(32, 667, 20), // "Alarm_SensorsChanged"
QT_MOC_LITERAL(33, 688, 24), // "alarmMagnetometerChanged"
QT_MOC_LITERAL(34, 713, 25), // "Alarm_MagnetometerChanged"
QT_MOC_LITERAL(35, 739, 20), // "alarmAirspeedChanged"
QT_MOC_LITERAL(36, 760, 21), // "Alarm_AirspeedChanged"
QT_MOC_LITERAL(37, 782, 25), // "alarmStabilizationChanged"
QT_MOC_LITERAL(38, 808, 26), // "Alarm_StabilizationChanged"
QT_MOC_LITERAL(39, 835, 20), // "alarmGuidanceChanged"
QT_MOC_LITERAL(40, 856, 21), // "Alarm_GuidanceChanged"
QT_MOC_LITERAL(41, 878, 20), // "alarmPathPlanChanged"
QT_MOC_LITERAL(42, 899, 21), // "Alarm_PathPlanChanged"
QT_MOC_LITERAL(43, 921, 19), // "alarmBatteryChanged"
QT_MOC_LITERAL(44, 941, 20), // "Alarm_BatteryChanged"
QT_MOC_LITERAL(45, 962, 22), // "alarmFlightTimeChanged"
QT_MOC_LITERAL(46, 985, 23), // "Alarm_FlightTimeChanged"
QT_MOC_LITERAL(47, 1009, 15), // "alarmI2CChanged"
QT_MOC_LITERAL(48, 1025, 16), // "Alarm_I2CChanged"
QT_MOC_LITERAL(49, 1042, 15), // "alarmGPSChanged"
QT_MOC_LITERAL(50, 1058, 16), // "Alarm_GPSChanged"
QT_MOC_LITERAL(51, 1075, 26), // "extendedAlarmStatusChanged"
QT_MOC_LITERAL(52, 1102, 38), // "SystemAlarms_ExtendedAlarmSta..."
QT_MOC_LITERAL(53, 1141, 26), // "ExtendedAlarmStatusChanged"
QT_MOC_LITERAL(54, 1168, 45), // "extendedAlarmStatusSystemConf..."
QT_MOC_LITERAL(55, 1214, 46), // "ExtendedAlarmStatus_SystemCon..."
QT_MOC_LITERAL(56, 1261, 35), // "extendedAlarmStatusBootFaultC..."
QT_MOC_LITERAL(57, 1297, 36), // "ExtendedAlarmStatus_BootFault..."
QT_MOC_LITERAL(58, 1334, 29), // "extendedAlarmSubStatusChanged"
QT_MOC_LITERAL(59, 1364, 29), // "ExtendedAlarmSubStatusChanged"
QT_MOC_LITERAL(60, 1394, 48), // "extendedAlarmSubStatusSystemC..."
QT_MOC_LITERAL(61, 1443, 49), // "ExtendedAlarmSubStatus_System..."
QT_MOC_LITERAL(62, 1493, 38), // "extendedAlarmSubStatusBootFau..."
QT_MOC_LITERAL(63, 1532, 39), // "ExtendedAlarmSubStatus_BootFa..."
QT_MOC_LITERAL(64, 1572, 8), // "setAlarm"
QT_MOC_LITERAL(65, 1581, 27), // "setAlarmSystemConfiguration"
QT_MOC_LITERAL(66, 1609, 28), // "setAlarm_SystemConfiguration"
QT_MOC_LITERAL(67, 1638, 17), // "setAlarmBootFault"
QT_MOC_LITERAL(68, 1656, 18), // "setAlarm_BootFault"
QT_MOC_LITERAL(69, 1675, 19), // "setAlarmOutOfMemory"
QT_MOC_LITERAL(70, 1695, 20), // "setAlarm_OutOfMemory"
QT_MOC_LITERAL(71, 1716, 21), // "setAlarmStackOverflow"
QT_MOC_LITERAL(72, 1738, 22), // "setAlarm_StackOverflow"
QT_MOC_LITERAL(73, 1761, 19), // "setAlarmCPUOverload"
QT_MOC_LITERAL(74, 1781, 20), // "setAlarm_CPUOverload"
QT_MOC_LITERAL(75, 1802, 19), // "setAlarmEventSystem"
QT_MOC_LITERAL(76, 1822, 20), // "setAlarm_EventSystem"
QT_MOC_LITERAL(77, 1843, 17), // "setAlarmTelemetry"
QT_MOC_LITERAL(78, 1861, 18), // "setAlarm_Telemetry"
QT_MOC_LITERAL(79, 1880, 16), // "setAlarmReceiver"
QT_MOC_LITERAL(80, 1897, 17), // "setAlarm_Receiver"
QT_MOC_LITERAL(81, 1915, 21), // "setAlarmManualControl"
QT_MOC_LITERAL(82, 1937, 22), // "setAlarm_ManualControl"
QT_MOC_LITERAL(83, 1960, 16), // "setAlarmActuator"
QT_MOC_LITERAL(84, 1977, 17), // "setAlarm_Actuator"
QT_MOC_LITERAL(85, 1995, 16), // "setAlarmAttitude"
QT_MOC_LITERAL(86, 2012, 17), // "setAlarm_Attitude"
QT_MOC_LITERAL(87, 2030, 11), // "setAlarmNav"
QT_MOC_LITERAL(88, 2042, 12), // "setAlarm_Nav"
QT_MOC_LITERAL(89, 2055, 15), // "setAlarmSensors"
QT_MOC_LITERAL(90, 2071, 16), // "setAlarm_Sensors"
QT_MOC_LITERAL(91, 2088, 20), // "setAlarmMagnetometer"
QT_MOC_LITERAL(92, 2109, 21), // "setAlarm_Magnetometer"
QT_MOC_LITERAL(93, 2131, 16), // "setAlarmAirspeed"
QT_MOC_LITERAL(94, 2148, 17), // "setAlarm_Airspeed"
QT_MOC_LITERAL(95, 2166, 21), // "setAlarmStabilization"
QT_MOC_LITERAL(96, 2188, 22), // "setAlarm_Stabilization"
QT_MOC_LITERAL(97, 2211, 16), // "setAlarmGuidance"
QT_MOC_LITERAL(98, 2228, 17), // "setAlarm_Guidance"
QT_MOC_LITERAL(99, 2246, 16), // "setAlarmPathPlan"
QT_MOC_LITERAL(100, 2263, 17), // "setAlarm_PathPlan"
QT_MOC_LITERAL(101, 2281, 15), // "setAlarmBattery"
QT_MOC_LITERAL(102, 2297, 16), // "setAlarm_Battery"
QT_MOC_LITERAL(103, 2314, 18), // "setAlarmFlightTime"
QT_MOC_LITERAL(104, 2333, 19), // "setAlarm_FlightTime"
QT_MOC_LITERAL(105, 2353, 11), // "setAlarmI2C"
QT_MOC_LITERAL(106, 2365, 12), // "setAlarm_I2C"
QT_MOC_LITERAL(107, 2378, 11), // "setAlarmGPS"
QT_MOC_LITERAL(108, 2390, 12), // "setAlarm_GPS"
QT_MOC_LITERAL(109, 2403, 22), // "setExtendedAlarmStatus"
QT_MOC_LITERAL(110, 2426, 41), // "setExtendedAlarmStatusSystemC..."
QT_MOC_LITERAL(111, 2468, 42), // "setExtendedAlarmStatus_System..."
QT_MOC_LITERAL(112, 2511, 31), // "setExtendedAlarmStatusBootFault"
QT_MOC_LITERAL(113, 2543, 32), // "setExtendedAlarmStatus_BootFault"
QT_MOC_LITERAL(114, 2576, 25), // "setExtendedAlarmSubStatus"
QT_MOC_LITERAL(115, 2602, 44), // "setExtendedAlarmSubStatusSyst..."
QT_MOC_LITERAL(116, 2647, 45), // "setExtendedAlarmSubStatus_Sys..."
QT_MOC_LITERAL(117, 2693, 34), // "setExtendedAlarmSubStatusBoot..."
QT_MOC_LITERAL(118, 2728, 35), // "setExtendedAlarmSubStatus_Boo..."
QT_MOC_LITERAL(119, 2764, 17), // "emitNotifications"
QT_MOC_LITERAL(120, 2782, 5), // "alarm"
QT_MOC_LITERAL(121, 2788, 8), // "getAlarm"
QT_MOC_LITERAL(122, 2797, 28), // "getAlarm_SystemConfiguration"
QT_MOC_LITERAL(123, 2826, 18), // "getAlarm_BootFault"
QT_MOC_LITERAL(124, 2845, 20), // "getAlarm_OutOfMemory"
QT_MOC_LITERAL(125, 2866, 22), // "getAlarm_StackOverflow"
QT_MOC_LITERAL(126, 2889, 20), // "getAlarm_CPUOverload"
QT_MOC_LITERAL(127, 2910, 20), // "getAlarm_EventSystem"
QT_MOC_LITERAL(128, 2931, 18), // "getAlarm_Telemetry"
QT_MOC_LITERAL(129, 2950, 17), // "getAlarm_Receiver"
QT_MOC_LITERAL(130, 2968, 22), // "getAlarm_ManualControl"
QT_MOC_LITERAL(131, 2991, 17), // "getAlarm_Actuator"
QT_MOC_LITERAL(132, 3009, 17), // "getAlarm_Attitude"
QT_MOC_LITERAL(133, 3027, 12), // "getAlarm_Nav"
QT_MOC_LITERAL(134, 3040, 16), // "getAlarm_Sensors"
QT_MOC_LITERAL(135, 3057, 21), // "getAlarm_Magnetometer"
QT_MOC_LITERAL(136, 3079, 17), // "getAlarm_Airspeed"
QT_MOC_LITERAL(137, 3097, 22), // "getAlarm_Stabilization"
QT_MOC_LITERAL(138, 3120, 17), // "getAlarm_Guidance"
QT_MOC_LITERAL(139, 3138, 17), // "getAlarm_PathPlan"
QT_MOC_LITERAL(140, 3156, 16), // "getAlarm_Battery"
QT_MOC_LITERAL(141, 3173, 19), // "getAlarm_FlightTime"
QT_MOC_LITERAL(142, 3193, 12), // "getAlarm_I2C"
QT_MOC_LITERAL(143, 3206, 12), // "getAlarm_GPS"
QT_MOC_LITERAL(144, 3219, 19), // "extendedAlarmStatus"
QT_MOC_LITERAL(145, 3239, 22), // "getExtendedAlarmStatus"
QT_MOC_LITERAL(146, 3262, 42), // "getExtendedAlarmStatus_System..."
QT_MOC_LITERAL(147, 3305, 32), // "getExtendedAlarmStatus_BootFault"
QT_MOC_LITERAL(148, 3338, 22), // "extendedAlarmSubStatus"
QT_MOC_LITERAL(149, 3361, 25), // "getExtendedAlarmSubStatus"
QT_MOC_LITERAL(150, 3387, 45), // "getExtendedAlarmSubStatus_Sys..."
QT_MOC_LITERAL(151, 3433, 35), // "getExtendedAlarmSubStatus_Boo..."
QT_MOC_LITERAL(152, 3469, 24), // "alarmSystemConfiguration"
QT_MOC_LITERAL(153, 3494, 14), // "alarmBootFault"
QT_MOC_LITERAL(154, 3509, 16), // "alarmOutOfMemory"
QT_MOC_LITERAL(155, 3526, 18), // "alarmStackOverflow"
QT_MOC_LITERAL(156, 3545, 16), // "alarmCPUOverload"
QT_MOC_LITERAL(157, 3562, 16), // "alarmEventSystem"
QT_MOC_LITERAL(158, 3579, 14), // "alarmTelemetry"
QT_MOC_LITERAL(159, 3594, 13), // "alarmReceiver"
QT_MOC_LITERAL(160, 3608, 18), // "alarmManualControl"
QT_MOC_LITERAL(161, 3627, 13), // "alarmActuator"
QT_MOC_LITERAL(162, 3641, 13), // "alarmAttitude"
QT_MOC_LITERAL(163, 3655, 8), // "alarmNav"
QT_MOC_LITERAL(164, 3664, 12), // "alarmSensors"
QT_MOC_LITERAL(165, 3677, 17), // "alarmMagnetometer"
QT_MOC_LITERAL(166, 3695, 13), // "alarmAirspeed"
QT_MOC_LITERAL(167, 3709, 18), // "alarmStabilization"
QT_MOC_LITERAL(168, 3728, 13), // "alarmGuidance"
QT_MOC_LITERAL(169, 3742, 13), // "alarmPathPlan"
QT_MOC_LITERAL(170, 3756, 12), // "alarmBattery"
QT_MOC_LITERAL(171, 3769, 15), // "alarmFlightTime"
QT_MOC_LITERAL(172, 3785, 8), // "alarmI2C"
QT_MOC_LITERAL(173, 3794, 8), // "alarmGPS"
QT_MOC_LITERAL(174, 3803, 38), // "extendedAlarmStatusSystemConf..."
QT_MOC_LITERAL(175, 3842, 28), // "extendedAlarmStatusBootFault"
QT_MOC_LITERAL(176, 3871, 41), // "extendedAlarmSubStatusSystemC..."
QT_MOC_LITERAL(177, 3913, 31), // "extendedAlarmSubStatusBootFault"
QT_MOC_LITERAL(178, 3945, 25), // "Alarm_SystemConfiguration"
QT_MOC_LITERAL(179, 3971, 15), // "Alarm_BootFault"
QT_MOC_LITERAL(180, 3987, 17), // "Alarm_OutOfMemory"
QT_MOC_LITERAL(181, 4005, 19), // "Alarm_StackOverflow"
QT_MOC_LITERAL(182, 4025, 17), // "Alarm_CPUOverload"
QT_MOC_LITERAL(183, 4043, 17), // "Alarm_EventSystem"
QT_MOC_LITERAL(184, 4061, 15), // "Alarm_Telemetry"
QT_MOC_LITERAL(185, 4077, 14), // "Alarm_Receiver"
QT_MOC_LITERAL(186, 4092, 19), // "Alarm_ManualControl"
QT_MOC_LITERAL(187, 4112, 14), // "Alarm_Actuator"
QT_MOC_LITERAL(188, 4127, 14), // "Alarm_Attitude"
QT_MOC_LITERAL(189, 4142, 9), // "Alarm_Nav"
QT_MOC_LITERAL(190, 4152, 13), // "Alarm_Sensors"
QT_MOC_LITERAL(191, 4166, 18), // "Alarm_Magnetometer"
QT_MOC_LITERAL(192, 4185, 14), // "Alarm_Airspeed"
QT_MOC_LITERAL(193, 4200, 19), // "Alarm_Stabilization"
QT_MOC_LITERAL(194, 4220, 14), // "Alarm_Guidance"
QT_MOC_LITERAL(195, 4235, 14), // "Alarm_PathPlan"
QT_MOC_LITERAL(196, 4250, 13), // "Alarm_Battery"
QT_MOC_LITERAL(197, 4264, 16), // "Alarm_FlightTime"
QT_MOC_LITERAL(198, 4281, 9), // "Alarm_I2C"
QT_MOC_LITERAL(199, 4291, 9), // "Alarm_GPS"
QT_MOC_LITERAL(200, 4301, 39), // "ExtendedAlarmStatus_SystemCon..."
QT_MOC_LITERAL(201, 4341, 29), // "ExtendedAlarmStatus_BootFault"
QT_MOC_LITERAL(202, 4371, 42), // "ExtendedAlarmSubStatus_System..."
QT_MOC_LITERAL(203, 4414, 32) // "ExtendedAlarmSubStatus_BootFault"

    },
    "SystemAlarms\0alarmChanged\0\0index\0"
    "SystemAlarms_Alarm::Enum\0value\0"
    "AlarmChanged\0alarmSystemConfigurationChanged\0"
    "Alarm_SystemConfigurationChanged\0"
    "alarmBootFaultChanged\0Alarm_BootFaultChanged\0"
    "alarmOutOfMemoryChanged\0"
    "Alarm_OutOfMemoryChanged\0"
    "alarmStackOverflowChanged\0"
    "Alarm_StackOverflowChanged\0"
    "alarmCPUOverloadChanged\0"
    "Alarm_CPUOverloadChanged\0"
    "alarmEventSystemChanged\0"
    "Alarm_EventSystemChanged\0alarmTelemetryChanged\0"
    "Alarm_TelemetryChanged\0alarmReceiverChanged\0"
    "Alarm_ReceiverChanged\0alarmManualControlChanged\0"
    "Alarm_ManualControlChanged\0"
    "alarmActuatorChanged\0Alarm_ActuatorChanged\0"
    "alarmAttitudeChanged\0Alarm_AttitudeChanged\0"
    "alarmNavChanged\0Alarm_NavChanged\0"
    "alarmSensorsChanged\0Alarm_SensorsChanged\0"
    "alarmMagnetometerChanged\0"
    "Alarm_MagnetometerChanged\0"
    "alarmAirspeedChanged\0Alarm_AirspeedChanged\0"
    "alarmStabilizationChanged\0"
    "Alarm_StabilizationChanged\0"
    "alarmGuidanceChanged\0Alarm_GuidanceChanged\0"
    "alarmPathPlanChanged\0Alarm_PathPlanChanged\0"
    "alarmBatteryChanged\0Alarm_BatteryChanged\0"
    "alarmFlightTimeChanged\0Alarm_FlightTimeChanged\0"
    "alarmI2CChanged\0Alarm_I2CChanged\0"
    "alarmGPSChanged\0Alarm_GPSChanged\0"
    "extendedAlarmStatusChanged\0"
    "SystemAlarms_ExtendedAlarmStatus::Enum\0"
    "ExtendedAlarmStatusChanged\0"
    "extendedAlarmStatusSystemConfigurationChanged\0"
    "ExtendedAlarmStatus_SystemConfigurationChanged\0"
    "extendedAlarmStatusBootFaultChanged\0"
    "ExtendedAlarmStatus_BootFaultChanged\0"
    "extendedAlarmSubStatusChanged\0"
    "ExtendedAlarmSubStatusChanged\0"
    "extendedAlarmSubStatusSystemConfigurationChanged\0"
    "ExtendedAlarmSubStatus_SystemConfigurationChanged\0"
    "extendedAlarmSubStatusBootFaultChanged\0"
    "ExtendedAlarmSubStatus_BootFaultChanged\0"
    "setAlarm\0setAlarmSystemConfiguration\0"
    "setAlarm_SystemConfiguration\0"
    "setAlarmBootFault\0setAlarm_BootFault\0"
    "setAlarmOutOfMemory\0setAlarm_OutOfMemory\0"
    "setAlarmStackOverflow\0setAlarm_StackOverflow\0"
    "setAlarmCPUOverload\0setAlarm_CPUOverload\0"
    "setAlarmEventSystem\0setAlarm_EventSystem\0"
    "setAlarmTelemetry\0setAlarm_Telemetry\0"
    "setAlarmReceiver\0setAlarm_Receiver\0"
    "setAlarmManualControl\0setAlarm_ManualControl\0"
    "setAlarmActuator\0setAlarm_Actuator\0"
    "setAlarmAttitude\0setAlarm_Attitude\0"
    "setAlarmNav\0setAlarm_Nav\0setAlarmSensors\0"
    "setAlarm_Sensors\0setAlarmMagnetometer\0"
    "setAlarm_Magnetometer\0setAlarmAirspeed\0"
    "setAlarm_Airspeed\0setAlarmStabilization\0"
    "setAlarm_Stabilization\0setAlarmGuidance\0"
    "setAlarm_Guidance\0setAlarmPathPlan\0"
    "setAlarm_PathPlan\0setAlarmBattery\0"
    "setAlarm_Battery\0setAlarmFlightTime\0"
    "setAlarm_FlightTime\0setAlarmI2C\0"
    "setAlarm_I2C\0setAlarmGPS\0setAlarm_GPS\0"
    "setExtendedAlarmStatus\0"
    "setExtendedAlarmStatusSystemConfiguration\0"
    "setExtendedAlarmStatus_SystemConfiguration\0"
    "setExtendedAlarmStatusBootFault\0"
    "setExtendedAlarmStatus_BootFault\0"
    "setExtendedAlarmSubStatus\0"
    "setExtendedAlarmSubStatusSystemConfiguration\0"
    "setExtendedAlarmSubStatus_SystemConfiguration\0"
    "setExtendedAlarmSubStatusBootFault\0"
    "setExtendedAlarmSubStatus_BootFault\0"
    "emitNotifications\0alarm\0getAlarm\0"
    "getAlarm_SystemConfiguration\0"
    "getAlarm_BootFault\0getAlarm_OutOfMemory\0"
    "getAlarm_StackOverflow\0getAlarm_CPUOverload\0"
    "getAlarm_EventSystem\0getAlarm_Telemetry\0"
    "getAlarm_Receiver\0getAlarm_ManualControl\0"
    "getAlarm_Actuator\0getAlarm_Attitude\0"
    "getAlarm_Nav\0getAlarm_Sensors\0"
    "getAlarm_Magnetometer\0getAlarm_Airspeed\0"
    "getAlarm_Stabilization\0getAlarm_Guidance\0"
    "getAlarm_PathPlan\0getAlarm_Battery\0"
    "getAlarm_FlightTime\0getAlarm_I2C\0"
    "getAlarm_GPS\0extendedAlarmStatus\0"
    "getExtendedAlarmStatus\0"
    "getExtendedAlarmStatus_SystemConfiguration\0"
    "getExtendedAlarmStatus_BootFault\0"
    "extendedAlarmSubStatus\0getExtendedAlarmSubStatus\0"
    "getExtendedAlarmSubStatus_SystemConfiguration\0"
    "getExtendedAlarmSubStatus_BootFault\0"
    "alarmSystemConfiguration\0alarmBootFault\0"
    "alarmOutOfMemory\0alarmStackOverflow\0"
    "alarmCPUOverload\0alarmEventSystem\0"
    "alarmTelemetry\0alarmReceiver\0"
    "alarmManualControl\0alarmActuator\0"
    "alarmAttitude\0alarmNav\0alarmSensors\0"
    "alarmMagnetometer\0alarmAirspeed\0"
    "alarmStabilization\0alarmGuidance\0"
    "alarmPathPlan\0alarmBattery\0alarmFlightTime\0"
    "alarmI2C\0alarmGPS\0"
    "extendedAlarmStatusSystemConfiguration\0"
    "extendedAlarmStatusBootFault\0"
    "extendedAlarmSubStatusSystemConfiguration\0"
    "extendedAlarmSubStatusBootFault\0"
    "Alarm_SystemConfiguration\0Alarm_BootFault\0"
    "Alarm_OutOfMemory\0Alarm_StackOverflow\0"
    "Alarm_CPUOverload\0Alarm_EventSystem\0"
    "Alarm_Telemetry\0Alarm_Receiver\0"
    "Alarm_ManualControl\0Alarm_Actuator\0"
    "Alarm_Attitude\0Alarm_Nav\0Alarm_Sensors\0"
    "Alarm_Magnetometer\0Alarm_Airspeed\0"
    "Alarm_Stabilization\0Alarm_Guidance\0"
    "Alarm_PathPlan\0Alarm_Battery\0"
    "Alarm_FlightTime\0Alarm_I2C\0Alarm_GPS\0"
    "ExtendedAlarmStatus_SystemConfiguration\0"
    "ExtendedAlarmStatus_BootFault\0"
    "ExtendedAlarmSubStatus_SystemConfiguration\0"
    "ExtendedAlarmSubStatus_BootFault"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemAlarms[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     149,   14, // methods
      52, 1176, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      58,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  759,    2, 0x06 /* Public */,
       6,    2,  764,    2, 0x06 /* Public */,
       7,    1,  769,    2, 0x06 /* Public */,
       8,    1,  772,    2, 0x06 /* Public */,
       9,    1,  775,    2, 0x06 /* Public */,
      10,    1,  778,    2, 0x06 /* Public */,
      11,    1,  781,    2, 0x06 /* Public */,
      12,    1,  784,    2, 0x06 /* Public */,
      13,    1,  787,    2, 0x06 /* Public */,
      14,    1,  790,    2, 0x06 /* Public */,
      15,    1,  793,    2, 0x06 /* Public */,
      16,    1,  796,    2, 0x06 /* Public */,
      17,    1,  799,    2, 0x06 /* Public */,
      18,    1,  802,    2, 0x06 /* Public */,
      19,    1,  805,    2, 0x06 /* Public */,
      20,    1,  808,    2, 0x06 /* Public */,
      21,    1,  811,    2, 0x06 /* Public */,
      22,    1,  814,    2, 0x06 /* Public */,
      23,    1,  817,    2, 0x06 /* Public */,
      24,    1,  820,    2, 0x06 /* Public */,
      25,    1,  823,    2, 0x06 /* Public */,
      26,    1,  826,    2, 0x06 /* Public */,
      27,    1,  829,    2, 0x06 /* Public */,
      28,    1,  832,    2, 0x06 /* Public */,
      29,    1,  835,    2, 0x06 /* Public */,
      30,    1,  838,    2, 0x06 /* Public */,
      31,    1,  841,    2, 0x06 /* Public */,
      32,    1,  844,    2, 0x06 /* Public */,
      33,    1,  847,    2, 0x06 /* Public */,
      34,    1,  850,    2, 0x06 /* Public */,
      35,    1,  853,    2, 0x06 /* Public */,
      36,    1,  856,    2, 0x06 /* Public */,
      37,    1,  859,    2, 0x06 /* Public */,
      38,    1,  862,    2, 0x06 /* Public */,
      39,    1,  865,    2, 0x06 /* Public */,
      40,    1,  868,    2, 0x06 /* Public */,
      41,    1,  871,    2, 0x06 /* Public */,
      42,    1,  874,    2, 0x06 /* Public */,
      43,    1,  877,    2, 0x06 /* Public */,
      44,    1,  880,    2, 0x06 /* Public */,
      45,    1,  883,    2, 0x06 /* Public */,
      46,    1,  886,    2, 0x06 /* Public */,
      47,    1,  889,    2, 0x06 /* Public */,
      48,    1,  892,    2, 0x06 /* Public */,
      49,    1,  895,    2, 0x06 /* Public */,
      50,    1,  898,    2, 0x06 /* Public */,
      51,    2,  901,    2, 0x06 /* Public */,
      53,    2,  906,    2, 0x06 /* Public */,
      54,    1,  911,    2, 0x06 /* Public */,
      55,    1,  914,    2, 0x06 /* Public */,
      56,    1,  917,    2, 0x06 /* Public */,
      57,    1,  920,    2, 0x06 /* Public */,
      58,    2,  923,    2, 0x06 /* Public */,
      59,    2,  928,    2, 0x06 /* Public */,
      60,    1,  933,    2, 0x06 /* Public */,
      61,    1,  936,    2, 0x06 /* Public */,
      62,    1,  939,    2, 0x06 /* Public */,
      63,    1,  942,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      64,    2,  945,    2, 0x0a /* Public */,
      64,    2,  950,    2, 0x0a /* Public */,
      65,    1,  955,    2, 0x0a /* Public */,
      66,    1,  958,    2, 0x0a /* Public */,
      67,    1,  961,    2, 0x0a /* Public */,
      68,    1,  964,    2, 0x0a /* Public */,
      69,    1,  967,    2, 0x0a /* Public */,
      70,    1,  970,    2, 0x0a /* Public */,
      71,    1,  973,    2, 0x0a /* Public */,
      72,    1,  976,    2, 0x0a /* Public */,
      73,    1,  979,    2, 0x0a /* Public */,
      74,    1,  982,    2, 0x0a /* Public */,
      75,    1,  985,    2, 0x0a /* Public */,
      76,    1,  988,    2, 0x0a /* Public */,
      77,    1,  991,    2, 0x0a /* Public */,
      78,    1,  994,    2, 0x0a /* Public */,
      79,    1,  997,    2, 0x0a /* Public */,
      80,    1, 1000,    2, 0x0a /* Public */,
      81,    1, 1003,    2, 0x0a /* Public */,
      82,    1, 1006,    2, 0x0a /* Public */,
      83,    1, 1009,    2, 0x0a /* Public */,
      84,    1, 1012,    2, 0x0a /* Public */,
      85,    1, 1015,    2, 0x0a /* Public */,
      86,    1, 1018,    2, 0x0a /* Public */,
      87,    1, 1021,    2, 0x0a /* Public */,
      88,    1, 1024,    2, 0x0a /* Public */,
      89,    1, 1027,    2, 0x0a /* Public */,
      90,    1, 1030,    2, 0x0a /* Public */,
      91,    1, 1033,    2, 0x0a /* Public */,
      92,    1, 1036,    2, 0x0a /* Public */,
      93,    1, 1039,    2, 0x0a /* Public */,
      94,    1, 1042,    2, 0x0a /* Public */,
      95,    1, 1045,    2, 0x0a /* Public */,
      96,    1, 1048,    2, 0x0a /* Public */,
      97,    1, 1051,    2, 0x0a /* Public */,
      98,    1, 1054,    2, 0x0a /* Public */,
      99,    1, 1057,    2, 0x0a /* Public */,
     100,    1, 1060,    2, 0x0a /* Public */,
     101,    1, 1063,    2, 0x0a /* Public */,
     102,    1, 1066,    2, 0x0a /* Public */,
     103,    1, 1069,    2, 0x0a /* Public */,
     104,    1, 1072,    2, 0x0a /* Public */,
     105,    1, 1075,    2, 0x0a /* Public */,
     106,    1, 1078,    2, 0x0a /* Public */,
     107,    1, 1081,    2, 0x0a /* Public */,
     108,    1, 1084,    2, 0x0a /* Public */,
     109,    2, 1087,    2, 0x0a /* Public */,
     109,    2, 1092,    2, 0x0a /* Public */,
     110,    1, 1097,    2, 0x0a /* Public */,
     111,    1, 1100,    2, 0x0a /* Public */,
     112,    1, 1103,    2, 0x0a /* Public */,
     113,    1, 1106,    2, 0x0a /* Public */,
     114,    2, 1109,    2, 0x0a /* Public */,
     114,    2, 1114,    2, 0x0a /* Public */,
     115,    1, 1119,    2, 0x0a /* Public */,
     116,    1, 1122,    2, 0x0a /* Public */,
     117,    1, 1125,    2, 0x0a /* Public */,
     118,    1, 1128,    2, 0x0a /* Public */,
     119,    0, 1131,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     120,    1, 1132,    2, 0x02 /* Public */,
     121,    1, 1135,    2, 0x02 /* Public */,
     122,    0, 1138,    2, 0x02 /* Public */,
     123,    0, 1139,    2, 0x02 /* Public */,
     124,    0, 1140,    2, 0x02 /* Public */,
     125,    0, 1141,    2, 0x02 /* Public */,
     126,    0, 1142,    2, 0x02 /* Public */,
     127,    0, 1143,    2, 0x02 /* Public */,
     128,    0, 1144,    2, 0x02 /* Public */,
     129,    0, 1145,    2, 0x02 /* Public */,
     130,    0, 1146,    2, 0x02 /* Public */,
     131,    0, 1147,    2, 0x02 /* Public */,
     132,    0, 1148,    2, 0x02 /* Public */,
     133,    0, 1149,    2, 0x02 /* Public */,
     134,    0, 1150,    2, 0x02 /* Public */,
     135,    0, 1151,    2, 0x02 /* Public */,
     136,    0, 1152,    2, 0x02 /* Public */,
     137,    0, 1153,    2, 0x02 /* Public */,
     138,    0, 1154,    2, 0x02 /* Public */,
     139,    0, 1155,    2, 0x02 /* Public */,
     140,    0, 1156,    2, 0x02 /* Public */,
     141,    0, 1157,    2, 0x02 /* Public */,
     142,    0, 1158,    2, 0x02 /* Public */,
     143,    0, 1159,    2, 0x02 /* Public */,
     144,    1, 1160,    2, 0x02 /* Public */,
     145,    1, 1163,    2, 0x02 /* Public */,
     146,    0, 1166,    2, 0x02 /* Public */,
     147,    0, 1167,    2, 0x02 /* Public */,
     148,    1, 1168,    2, 0x02 /* Public */,
     149,    1, 1171,    2, 0x02 /* Public */,
     150,    0, 1174,    2, 0x02 /* Public */,
     151,    0, 1175,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 52,    3,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    5,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UChar,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 52,    3,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    5,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::UInt,    3,
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
    0x80000000 | 52, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
     152, 0x80000000 | 4, 0x0049510b,
     153, 0x80000000 | 4, 0x0049510b,
     154, 0x80000000 | 4, 0x0049510b,
     155, 0x80000000 | 4, 0x0049510b,
     156, 0x80000000 | 4, 0x0049510b,
     157, 0x80000000 | 4, 0x0049510b,
     158, 0x80000000 | 4, 0x0049510b,
     159, 0x80000000 | 4, 0x0049510b,
     160, 0x80000000 | 4, 0x0049510b,
     161, 0x80000000 | 4, 0x0049510b,
     162, 0x80000000 | 4, 0x0049510b,
     163, 0x80000000 | 4, 0x0049510b,
     164, 0x80000000 | 4, 0x0049510b,
     165, 0x80000000 | 4, 0x0049510b,
     166, 0x80000000 | 4, 0x0049510b,
     167, 0x80000000 | 4, 0x0049510b,
     168, 0x80000000 | 4, 0x0049510b,
     169, 0x80000000 | 4, 0x0049510b,
     170, 0x80000000 | 4, 0x0049510b,
     171, 0x80000000 | 4, 0x0049510b,
     172, 0x80000000 | 4, 0x0049510b,
     173, 0x80000000 | 4, 0x0049510b,
     174, 0x80000000 | 52, 0x0049510b,
     175, 0x80000000 | 52, 0x0049510b,
     176, QMetaType::UShort, 0x00495103,
     177, QMetaType::UShort, 0x00495103,
     178, QMetaType::UChar, 0x00495103,
     179, QMetaType::UChar, 0x00495103,
     180, QMetaType::UChar, 0x00495103,
     181, QMetaType::UChar, 0x00495103,
     182, QMetaType::UChar, 0x00495103,
     183, QMetaType::UChar, 0x00495103,
     184, QMetaType::UChar, 0x00495103,
     185, QMetaType::UChar, 0x00495103,
     186, QMetaType::UChar, 0x00495103,
     187, QMetaType::UChar, 0x00495103,
     188, QMetaType::UChar, 0x00495103,
     189, QMetaType::UChar, 0x00495103,
     190, QMetaType::UChar, 0x00495103,
     191, QMetaType::UChar, 0x00495103,
     192, QMetaType::UChar, 0x00495103,
     193, QMetaType::UChar, 0x00495103,
     194, QMetaType::UChar, 0x00495103,
     195, QMetaType::UChar, 0x00495103,
     196, QMetaType::UChar, 0x00495103,
     197, QMetaType::UChar, 0x00495103,
     198, QMetaType::UChar, 0x00495103,
     199, QMetaType::UChar, 0x00495103,
     200, QMetaType::UChar, 0x00495103,
     201, QMetaType::UChar, 0x00495103,
     202, QMetaType::UChar, 0x00495103,
     203, QMetaType::UChar, 0x00495103,

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
      24,
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
      48,
      50,
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
      23,
      25,
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
      49,
      51,
      55,
      57,

       0        // eod
};

void SystemAlarms::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemAlarms *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->alarmChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[2]))); break;
        case 1: _t->AlarmChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 2: _t->alarmSystemConfigurationChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 3: _t->Alarm_SystemConfigurationChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->alarmBootFaultChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 5: _t->Alarm_BootFaultChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->alarmOutOfMemoryChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 7: _t->Alarm_OutOfMemoryChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->alarmStackOverflowChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 9: _t->Alarm_StackOverflowChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->alarmCPUOverloadChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 11: _t->Alarm_CPUOverloadChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->alarmEventSystemChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 13: _t->Alarm_EventSystemChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 14: _t->alarmTelemetryChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 15: _t->Alarm_TelemetryChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 16: _t->alarmReceiverChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 17: _t->Alarm_ReceiverChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->alarmManualControlChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 19: _t->Alarm_ManualControlChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->alarmActuatorChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 21: _t->Alarm_ActuatorChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->alarmAttitudeChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 23: _t->Alarm_AttitudeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->alarmNavChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 25: _t->Alarm_NavChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->alarmSensorsChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 27: _t->Alarm_SensorsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->alarmMagnetometerChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 29: _t->Alarm_MagnetometerChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->alarmAirspeedChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 31: _t->Alarm_AirspeedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->alarmStabilizationChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 33: _t->Alarm_StabilizationChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->alarmGuidanceChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 35: _t->Alarm_GuidanceChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->alarmPathPlanChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 37: _t->Alarm_PathPlanChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->alarmBatteryChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 39: _t->Alarm_BatteryChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->alarmFlightTimeChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 41: _t->Alarm_FlightTimeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->alarmI2CChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 43: _t->Alarm_I2CChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->alarmGPSChanged((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 45: _t->Alarm_GPSChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->extendedAlarmStatusChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const SystemAlarms_ExtendedAlarmStatus::Enum(*)>(_a[2]))); break;
        case 47: _t->ExtendedAlarmStatusChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 48: _t->extendedAlarmStatusSystemConfigurationChanged((*reinterpret_cast< const SystemAlarms_ExtendedAlarmStatus::Enum(*)>(_a[1]))); break;
        case 49: _t->ExtendedAlarmStatus_SystemConfigurationChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 50: _t->extendedAlarmStatusBootFaultChanged((*reinterpret_cast< const SystemAlarms_ExtendedAlarmStatus::Enum(*)>(_a[1]))); break;
        case 51: _t->ExtendedAlarmStatus_BootFaultChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->extendedAlarmSubStatusChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 53: _t->ExtendedAlarmSubStatusChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 54: _t->extendedAlarmSubStatusSystemConfigurationChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 55: _t->ExtendedAlarmSubStatus_SystemConfigurationChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 56: _t->extendedAlarmSubStatusBootFaultChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 57: _t->ExtendedAlarmSubStatus_BootFaultChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 58: _t->setAlarm((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[2]))); break;
        case 59: _t->setAlarm((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 60: _t->setAlarmSystemConfiguration((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 61: _t->setAlarm_SystemConfiguration((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 62: _t->setAlarmBootFault((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 63: _t->setAlarm_BootFault((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 64: _t->setAlarmOutOfMemory((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 65: _t->setAlarm_OutOfMemory((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 66: _t->setAlarmStackOverflow((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 67: _t->setAlarm_StackOverflow((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 68: _t->setAlarmCPUOverload((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 69: _t->setAlarm_CPUOverload((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 70: _t->setAlarmEventSystem((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 71: _t->setAlarm_EventSystem((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 72: _t->setAlarmTelemetry((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 73: _t->setAlarm_Telemetry((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 74: _t->setAlarmReceiver((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 75: _t->setAlarm_Receiver((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 76: _t->setAlarmManualControl((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 77: _t->setAlarm_ManualControl((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 78: _t->setAlarmActuator((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 79: _t->setAlarm_Actuator((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 80: _t->setAlarmAttitude((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 81: _t->setAlarm_Attitude((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 82: _t->setAlarmNav((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 83: _t->setAlarm_Nav((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 84: _t->setAlarmSensors((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 85: _t->setAlarm_Sensors((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 86: _t->setAlarmMagnetometer((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 87: _t->setAlarm_Magnetometer((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 88: _t->setAlarmAirspeed((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 89: _t->setAlarm_Airspeed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 90: _t->setAlarmStabilization((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 91: _t->setAlarm_Stabilization((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 92: _t->setAlarmGuidance((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 93: _t->setAlarm_Guidance((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 94: _t->setAlarmPathPlan((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 95: _t->setAlarm_PathPlan((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 96: _t->setAlarmBattery((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 97: _t->setAlarm_Battery((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 98: _t->setAlarmFlightTime((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 99: _t->setAlarm_FlightTime((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 100: _t->setAlarmI2C((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 101: _t->setAlarm_I2C((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 102: _t->setAlarmGPS((*reinterpret_cast< const SystemAlarms_Alarm::Enum(*)>(_a[1]))); break;
        case 103: _t->setAlarm_GPS((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->setExtendedAlarmStatus((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const SystemAlarms_ExtendedAlarmStatus::Enum(*)>(_a[2]))); break;
        case 105: _t->setExtendedAlarmStatus((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 106: _t->setExtendedAlarmStatusSystemConfiguration((*reinterpret_cast< const SystemAlarms_ExtendedAlarmStatus::Enum(*)>(_a[1]))); break;
        case 107: _t->setExtendedAlarmStatus_SystemConfiguration((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 108: _t->setExtendedAlarmStatusBootFault((*reinterpret_cast< const SystemAlarms_ExtendedAlarmStatus::Enum(*)>(_a[1]))); break;
        case 109: _t->setExtendedAlarmStatus_BootFault((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 110: _t->setExtendedAlarmSubStatus((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 111: _t->setExtendedAlarmSubStatus((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 112: _t->setExtendedAlarmSubStatusSystemConfiguration((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 113: _t->setExtendedAlarmSubStatus_SystemConfiguration((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 114: _t->setExtendedAlarmSubStatusBootFault((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 115: _t->setExtendedAlarmSubStatus_BootFault((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 116: _t->emitNotifications(); break;
        case 117: { SystemAlarms_Alarm::Enum _r = _t->alarm((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_a[0]) = std::move(_r); }  break;
        case 118: { quint8 _r = _t->getAlarm((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 119: { quint8 _r = _t->getAlarm_SystemConfiguration();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 120: { quint8 _r = _t->getAlarm_BootFault();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 121: { quint8 _r = _t->getAlarm_OutOfMemory();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 122: { quint8 _r = _t->getAlarm_StackOverflow();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 123: { quint8 _r = _t->getAlarm_CPUOverload();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 124: { quint8 _r = _t->getAlarm_EventSystem();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 125: { quint8 _r = _t->getAlarm_Telemetry();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 126: { quint8 _r = _t->getAlarm_Receiver();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 127: { quint8 _r = _t->getAlarm_ManualControl();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 128: { quint8 _r = _t->getAlarm_Actuator();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 129: { quint8 _r = _t->getAlarm_Attitude();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 130: { quint8 _r = _t->getAlarm_Nav();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 131: { quint8 _r = _t->getAlarm_Sensors();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 132: { quint8 _r = _t->getAlarm_Magnetometer();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 133: { quint8 _r = _t->getAlarm_Airspeed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 134: { quint8 _r = _t->getAlarm_Stabilization();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 135: { quint8 _r = _t->getAlarm_Guidance();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 136: { quint8 _r = _t->getAlarm_PathPlan();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 137: { quint8 _r = _t->getAlarm_Battery();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 138: { quint8 _r = _t->getAlarm_FlightTime();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 139: { quint8 _r = _t->getAlarm_I2C();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 140: { quint8 _r = _t->getAlarm_GPS();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 141: { SystemAlarms_ExtendedAlarmStatus::Enum _r = _t->extendedAlarmStatus((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< SystemAlarms_ExtendedAlarmStatus::Enum*>(_a[0]) = std::move(_r); }  break;
        case 142: { quint8 _r = _t->getExtendedAlarmStatus((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 143: { quint8 _r = _t->getExtendedAlarmStatus_SystemConfiguration();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 144: { quint8 _r = _t->getExtendedAlarmStatus_BootFault();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 145: { quint16 _r = _t->extendedAlarmSubStatus((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 146: { quint8 _r = _t->getExtendedAlarmSubStatus((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 147: { quint8 _r = _t->getExtendedAlarmSubStatus_SystemConfiguration();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 148: { quint8 _r = _t->getExtendedAlarmSubStatus_BootFault();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SystemAlarms::*)(quint32 , const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::AlarmChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmSystemConfigurationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_SystemConfigurationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmBootFaultChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_BootFaultChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmOutOfMemoryChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_OutOfMemoryChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmStackOverflowChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_StackOverflowChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmCPUOverloadChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_CPUOverloadChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmEventSystemChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_EventSystemChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmTelemetryChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_TelemetryChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmReceiverChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_ReceiverChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmManualControlChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_ManualControlChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmActuatorChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_ActuatorChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmAttitudeChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_AttitudeChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmNavChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_NavChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmSensorsChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_SensorsChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmMagnetometerChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_MagnetometerChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmAirspeedChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_AirspeedChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmStabilizationChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_StabilizationChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmGuidanceChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_GuidanceChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmPathPlanChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_PathPlanChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmBatteryChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_BatteryChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmFlightTimeChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_FlightTimeChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmI2CChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_I2CChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_Alarm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::alarmGPSChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::Alarm_GPSChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint32 , const SystemAlarms_ExtendedAlarmStatus::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::extendedAlarmStatusChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::ExtendedAlarmStatusChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_ExtendedAlarmStatus::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::extendedAlarmStatusSystemConfigurationChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::ExtendedAlarmStatus_SystemConfigurationChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const SystemAlarms_ExtendedAlarmStatus::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::extendedAlarmStatusBootFaultChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::ExtendedAlarmStatus_BootFaultChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::extendedAlarmSubStatusChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::ExtendedAlarmSubStatusChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::extendedAlarmSubStatusSystemConfigurationChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::ExtendedAlarmSubStatus_SystemConfigurationChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::extendedAlarmSubStatusBootFaultChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (SystemAlarms::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemAlarms::ExtendedAlarmSubStatus_BootFaultChanged)) {
                *result = 57;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SystemAlarms *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmSystemConfiguration(); break;
        case 1: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmBootFault(); break;
        case 2: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmOutOfMemory(); break;
        case 3: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmStackOverflow(); break;
        case 4: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmCPUOverload(); break;
        case 5: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmEventSystem(); break;
        case 6: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmTelemetry(); break;
        case 7: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmReceiver(); break;
        case 8: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmManualControl(); break;
        case 9: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmActuator(); break;
        case 10: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmAttitude(); break;
        case 11: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmNav(); break;
        case 12: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmSensors(); break;
        case 13: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmMagnetometer(); break;
        case 14: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmAirspeed(); break;
        case 15: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmStabilization(); break;
        case 16: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmGuidance(); break;
        case 17: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmPathPlan(); break;
        case 18: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmBattery(); break;
        case 19: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmFlightTime(); break;
        case 20: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmI2C(); break;
        case 21: *reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v) = _t->alarmGPS(); break;
        case 22: *reinterpret_cast< SystemAlarms_ExtendedAlarmStatus::Enum*>(_v) = _t->extendedAlarmStatusSystemConfiguration(); break;
        case 23: *reinterpret_cast< SystemAlarms_ExtendedAlarmStatus::Enum*>(_v) = _t->extendedAlarmStatusBootFault(); break;
        case 24: *reinterpret_cast< quint16*>(_v) = _t->extendedAlarmSubStatusSystemConfiguration(); break;
        case 25: *reinterpret_cast< quint16*>(_v) = _t->extendedAlarmSubStatusBootFault(); break;
        case 26: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_SystemConfiguration(); break;
        case 27: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_BootFault(); break;
        case 28: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_OutOfMemory(); break;
        case 29: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_StackOverflow(); break;
        case 30: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_CPUOverload(); break;
        case 31: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_EventSystem(); break;
        case 32: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_Telemetry(); break;
        case 33: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_Receiver(); break;
        case 34: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_ManualControl(); break;
        case 35: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_Actuator(); break;
        case 36: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_Attitude(); break;
        case 37: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_Nav(); break;
        case 38: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_Sensors(); break;
        case 39: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_Magnetometer(); break;
        case 40: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_Airspeed(); break;
        case 41: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_Stabilization(); break;
        case 42: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_Guidance(); break;
        case 43: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_PathPlan(); break;
        case 44: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_Battery(); break;
        case 45: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_FlightTime(); break;
        case 46: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_I2C(); break;
        case 47: *reinterpret_cast< quint8*>(_v) = _t->getAlarm_GPS(); break;
        case 48: *reinterpret_cast< quint8*>(_v) = _t->getExtendedAlarmStatus_SystemConfiguration(); break;
        case 49: *reinterpret_cast< quint8*>(_v) = _t->getExtendedAlarmStatus_BootFault(); break;
        case 50: *reinterpret_cast< quint8*>(_v) = _t->getExtendedAlarmSubStatus_SystemConfiguration(); break;
        case 51: *reinterpret_cast< quint8*>(_v) = _t->getExtendedAlarmSubStatus_BootFault(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SystemAlarms *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAlarmSystemConfiguration(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 1: _t->setAlarmBootFault(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 2: _t->setAlarmOutOfMemory(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 3: _t->setAlarmStackOverflow(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 4: _t->setAlarmCPUOverload(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 5: _t->setAlarmEventSystem(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 6: _t->setAlarmTelemetry(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 7: _t->setAlarmReceiver(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 8: _t->setAlarmManualControl(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 9: _t->setAlarmActuator(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 10: _t->setAlarmAttitude(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 11: _t->setAlarmNav(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 12: _t->setAlarmSensors(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 13: _t->setAlarmMagnetometer(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 14: _t->setAlarmAirspeed(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 15: _t->setAlarmStabilization(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 16: _t->setAlarmGuidance(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 17: _t->setAlarmPathPlan(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 18: _t->setAlarmBattery(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 19: _t->setAlarmFlightTime(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 20: _t->setAlarmI2C(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 21: _t->setAlarmGPS(*reinterpret_cast< SystemAlarms_Alarm::Enum*>(_v)); break;
        case 22: _t->setExtendedAlarmStatusSystemConfiguration(*reinterpret_cast< SystemAlarms_ExtendedAlarmStatus::Enum*>(_v)); break;
        case 23: _t->setExtendedAlarmStatusBootFault(*reinterpret_cast< SystemAlarms_ExtendedAlarmStatus::Enum*>(_v)); break;
        case 24: _t->setExtendedAlarmSubStatusSystemConfiguration(*reinterpret_cast< quint16*>(_v)); break;
        case 25: _t->setExtendedAlarmSubStatusBootFault(*reinterpret_cast< quint16*>(_v)); break;
        case 26: _t->setAlarm_SystemConfiguration(*reinterpret_cast< quint8*>(_v)); break;
        case 27: _t->setAlarm_BootFault(*reinterpret_cast< quint8*>(_v)); break;
        case 28: _t->setAlarm_OutOfMemory(*reinterpret_cast< quint8*>(_v)); break;
        case 29: _t->setAlarm_StackOverflow(*reinterpret_cast< quint8*>(_v)); break;
        case 30: _t->setAlarm_CPUOverload(*reinterpret_cast< quint8*>(_v)); break;
        case 31: _t->setAlarm_EventSystem(*reinterpret_cast< quint8*>(_v)); break;
        case 32: _t->setAlarm_Telemetry(*reinterpret_cast< quint8*>(_v)); break;
        case 33: _t->setAlarm_Receiver(*reinterpret_cast< quint8*>(_v)); break;
        case 34: _t->setAlarm_ManualControl(*reinterpret_cast< quint8*>(_v)); break;
        case 35: _t->setAlarm_Actuator(*reinterpret_cast< quint8*>(_v)); break;
        case 36: _t->setAlarm_Attitude(*reinterpret_cast< quint8*>(_v)); break;
        case 37: _t->setAlarm_Nav(*reinterpret_cast< quint8*>(_v)); break;
        case 38: _t->setAlarm_Sensors(*reinterpret_cast< quint8*>(_v)); break;
        case 39: _t->setAlarm_Magnetometer(*reinterpret_cast< quint8*>(_v)); break;
        case 40: _t->setAlarm_Airspeed(*reinterpret_cast< quint8*>(_v)); break;
        case 41: _t->setAlarm_Stabilization(*reinterpret_cast< quint8*>(_v)); break;
        case 42: _t->setAlarm_Guidance(*reinterpret_cast< quint8*>(_v)); break;
        case 43: _t->setAlarm_PathPlan(*reinterpret_cast< quint8*>(_v)); break;
        case 44: _t->setAlarm_Battery(*reinterpret_cast< quint8*>(_v)); break;
        case 45: _t->setAlarm_FlightTime(*reinterpret_cast< quint8*>(_v)); break;
        case 46: _t->setAlarm_I2C(*reinterpret_cast< quint8*>(_v)); break;
        case 47: _t->setAlarm_GPS(*reinterpret_cast< quint8*>(_v)); break;
        case 48: _t->setExtendedAlarmStatus_SystemConfiguration(*reinterpret_cast< quint8*>(_v)); break;
        case 49: _t->setExtendedAlarmStatus_BootFault(*reinterpret_cast< quint8*>(_v)); break;
        case 50: _t->setExtendedAlarmSubStatus_SystemConfiguration(*reinterpret_cast< quint8*>(_v)); break;
        case 51: _t->setExtendedAlarmSubStatus_BootFault(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_SystemAlarms[] = {
        &SystemAlarms_Alarm::staticMetaObject,
    &SystemAlarms_ExtendedAlarmStatus::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject SystemAlarms::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_SystemAlarms.data,
    qt_meta_data_SystemAlarms,
    qt_static_metacall,
    qt_meta_extradata_SystemAlarms,
    nullptr
} };


const QMetaObject *SystemAlarms::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemAlarms::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemAlarms.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int SystemAlarms::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 149)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 149;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 149)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 149;
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
void SystemAlarms::alarmChanged(quint32 _t1, const SystemAlarms_Alarm::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemAlarms::AlarmChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SystemAlarms::alarmSystemConfigurationChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SystemAlarms::Alarm_SystemConfigurationChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SystemAlarms::alarmBootFaultChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SystemAlarms::Alarm_BootFaultChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SystemAlarms::alarmOutOfMemoryChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SystemAlarms::Alarm_OutOfMemoryChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SystemAlarms::alarmStackOverflowChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SystemAlarms::Alarm_StackOverflowChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SystemAlarms::alarmCPUOverloadChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void SystemAlarms::Alarm_CPUOverloadChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void SystemAlarms::alarmEventSystemChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void SystemAlarms::Alarm_EventSystemChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void SystemAlarms::alarmTelemetryChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void SystemAlarms::Alarm_TelemetryChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void SystemAlarms::alarmReceiverChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void SystemAlarms::Alarm_ReceiverChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void SystemAlarms::alarmManualControlChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void SystemAlarms::Alarm_ManualControlChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void SystemAlarms::alarmActuatorChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void SystemAlarms::Alarm_ActuatorChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void SystemAlarms::alarmAttitudeChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void SystemAlarms::Alarm_AttitudeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void SystemAlarms::alarmNavChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void SystemAlarms::Alarm_NavChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void SystemAlarms::alarmSensorsChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void SystemAlarms::Alarm_SensorsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void SystemAlarms::alarmMagnetometerChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void SystemAlarms::Alarm_MagnetometerChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void SystemAlarms::alarmAirspeedChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void SystemAlarms::Alarm_AirspeedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void SystemAlarms::alarmStabilizationChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void SystemAlarms::Alarm_StabilizationChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void SystemAlarms::alarmGuidanceChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void SystemAlarms::Alarm_GuidanceChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void SystemAlarms::alarmPathPlanChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void SystemAlarms::Alarm_PathPlanChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void SystemAlarms::alarmBatteryChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void SystemAlarms::Alarm_BatteryChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void SystemAlarms::alarmFlightTimeChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void SystemAlarms::Alarm_FlightTimeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void SystemAlarms::alarmI2CChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void SystemAlarms::Alarm_I2CChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void SystemAlarms::alarmGPSChanged(const SystemAlarms_Alarm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void SystemAlarms::Alarm_GPSChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void SystemAlarms::extendedAlarmStatusChanged(quint32 _t1, const SystemAlarms_ExtendedAlarmStatus::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void SystemAlarms::ExtendedAlarmStatusChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void SystemAlarms::extendedAlarmStatusSystemConfigurationChanged(const SystemAlarms_ExtendedAlarmStatus::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void SystemAlarms::ExtendedAlarmStatus_SystemConfigurationChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void SystemAlarms::extendedAlarmStatusBootFaultChanged(const SystemAlarms_ExtendedAlarmStatus::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void SystemAlarms::ExtendedAlarmStatus_BootFaultChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void SystemAlarms::extendedAlarmSubStatusChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void SystemAlarms::ExtendedAlarmSubStatusChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void SystemAlarms::extendedAlarmSubStatusSystemConfigurationChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void SystemAlarms::ExtendedAlarmSubStatus_SystemConfigurationChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void SystemAlarms::extendedAlarmSubStatusBootFaultChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void SystemAlarms::ExtendedAlarmSubStatus_BootFaultChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
