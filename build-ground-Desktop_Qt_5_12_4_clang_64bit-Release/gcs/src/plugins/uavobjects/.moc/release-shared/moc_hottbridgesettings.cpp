/****************************************************************************
** Meta object code from reading C++ file 'hottbridgesettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hottbridgesettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hottbridgesettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HoTTBridgeSettingsConstants_t {
    QByteArrayData data[4];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HoTTBridgeSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HoTTBridgeSettingsConstants_t qt_meta_stringdata_HoTTBridgeSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 27), // "HoTTBridgeSettingsConstants"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 11), // "SensorCount"
QT_MOC_LITERAL(3, 45, 12) // "WarningCount"

    },
    "HoTTBridgeSettingsConstants\0Enum\0"
    "SensorCount\0WarningCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HoTTBridgeSettingsConstants[] = {

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
       2, uint(HoTTBridgeSettingsConstants::SensorCount),
       3, uint(HoTTBridgeSettingsConstants::WarningCount),

       0        // eod
};

void HoTTBridgeSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HoTTBridgeSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HoTTBridgeSettingsConstants.data,
    qt_meta_data_HoTTBridgeSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HoTTBridgeSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HoTTBridgeSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HoTTBridgeSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HoTTBridgeSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HoTTBridgeSettings_Sensor_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HoTTBridgeSettings_Sensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HoTTBridgeSettings_Sensor_t qt_meta_stringdata_HoTTBridgeSettings_Sensor = {
    {
QT_MOC_LITERAL(0, 0, 25), // "HoTTBridgeSettings_Sensor"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 8), // "Disabled"
QT_MOC_LITERAL(3, 40, 7) // "Enabled"

    },
    "HoTTBridgeSettings_Sensor\0Enum\0Disabled\0"
    "Enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HoTTBridgeSettings_Sensor[] = {

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
       2, uint(HoTTBridgeSettings_Sensor::Disabled),
       3, uint(HoTTBridgeSettings_Sensor::Enabled),

       0        // eod
};

void HoTTBridgeSettings_Sensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HoTTBridgeSettings_Sensor::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HoTTBridgeSettings_Sensor.data,
    qt_meta_data_HoTTBridgeSettings_Sensor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HoTTBridgeSettings_Sensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HoTTBridgeSettings_Sensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HoTTBridgeSettings_Sensor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HoTTBridgeSettings_Sensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HoTTBridgeSettings_Warning_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HoTTBridgeSettings_Warning_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HoTTBridgeSettings_Warning_t qt_meta_stringdata_HoTTBridgeSettings_Warning = {
    {
QT_MOC_LITERAL(0, 0, 26), // "HoTTBridgeSettings_Warning"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 8), // "Disabled"
QT_MOC_LITERAL(3, 41, 7) // "Enabled"

    },
    "HoTTBridgeSettings_Warning\0Enum\0"
    "Disabled\0Enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HoTTBridgeSettings_Warning[] = {

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
       2, uint(HoTTBridgeSettings_Warning::Disabled),
       3, uint(HoTTBridgeSettings_Warning::Enabled),

       0        // eod
};

void HoTTBridgeSettings_Warning::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HoTTBridgeSettings_Warning::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HoTTBridgeSettings_Warning.data,
    qt_meta_data_HoTTBridgeSettings_Warning,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HoTTBridgeSettings_Warning::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HoTTBridgeSettings_Warning::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HoTTBridgeSettings_Warning.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HoTTBridgeSettings_Warning::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HoTTBridgeSettings_t {
    QByteArrayData data[442];
    char stringdata0[9852];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HoTTBridgeSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HoTTBridgeSettings_t qt_meta_stringdata_HoTTBridgeSettings = {
    {
QT_MOC_LITERAL(0, 0, 18), // "HoTTBridgeSettings"
QT_MOC_LITERAL(1, 19, 12), // "limitChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "index"
QT_MOC_LITERAL(4, 39, 5), // "value"
QT_MOC_LITERAL(5, 45, 12), // "LimitChanged"
QT_MOC_LITERAL(6, 58, 20), // "limitMinSpeedChanged"
QT_MOC_LITERAL(7, 79, 21), // "Limit_MinSpeedChanged"
QT_MOC_LITERAL(8, 101, 20), // "limitMaxSpeedChanged"
QT_MOC_LITERAL(9, 122, 21), // "Limit_MaxSpeedChanged"
QT_MOC_LITERAL(10, 144, 26), // "limitNegDifference1Changed"
QT_MOC_LITERAL(11, 171, 27), // "Limit_NegDifference1Changed"
QT_MOC_LITERAL(12, 199, 26), // "limitPosDifference1Changed"
QT_MOC_LITERAL(13, 226, 27), // "Limit_PosDifference1Changed"
QT_MOC_LITERAL(14, 254, 26), // "limitNegDifference2Changed"
QT_MOC_LITERAL(15, 281, 27), // "Limit_NegDifference2Changed"
QT_MOC_LITERAL(16, 309, 26), // "limitPosDifference2Changed"
QT_MOC_LITERAL(17, 336, 27), // "Limit_PosDifference2Changed"
QT_MOC_LITERAL(18, 364, 21), // "limitMinHeightChanged"
QT_MOC_LITERAL(19, 386, 22), // "Limit_MinHeightChanged"
QT_MOC_LITERAL(20, 409, 21), // "limitMaxHeightChanged"
QT_MOC_LITERAL(21, 431, 22), // "Limit_MaxHeightChanged"
QT_MOC_LITERAL(22, 454, 23), // "limitMaxDistanceChanged"
QT_MOC_LITERAL(23, 478, 24), // "Limit_MaxDistanceChanged"
QT_MOC_LITERAL(24, 503, 27), // "limitMinPowerVoltageChanged"
QT_MOC_LITERAL(25, 531, 28), // "Limit_MinPowerVoltageChanged"
QT_MOC_LITERAL(26, 560, 27), // "limitMaxPowerVoltageChanged"
QT_MOC_LITERAL(27, 588, 28), // "Limit_MaxPowerVoltageChanged"
QT_MOC_LITERAL(28, 617, 29), // "limitMinSensor1VoltageChanged"
QT_MOC_LITERAL(29, 647, 30), // "Limit_MinSensor1VoltageChanged"
QT_MOC_LITERAL(30, 678, 29), // "limitMaxSensor1VoltageChanged"
QT_MOC_LITERAL(31, 708, 30), // "Limit_MaxSensor1VoltageChanged"
QT_MOC_LITERAL(32, 739, 29), // "limitMinSensor2VoltageChanged"
QT_MOC_LITERAL(33, 769, 30), // "Limit_MinSensor2VoltageChanged"
QT_MOC_LITERAL(34, 800, 29), // "limitMaxSensor2VoltageChanged"
QT_MOC_LITERAL(35, 830, 30), // "Limit_MaxSensor2VoltageChanged"
QT_MOC_LITERAL(36, 861, 26), // "limitMinCellVoltageChanged"
QT_MOC_LITERAL(37, 888, 27), // "Limit_MinCellVoltageChanged"
QT_MOC_LITERAL(38, 916, 22), // "limitMaxCurrentChanged"
QT_MOC_LITERAL(39, 939, 23), // "Limit_MaxCurrentChanged"
QT_MOC_LITERAL(40, 963, 27), // "limitMaxUsedCapacityChanged"
QT_MOC_LITERAL(41, 991, 28), // "Limit_MaxUsedCapacityChanged"
QT_MOC_LITERAL(42, 1020, 26), // "limitMinSensor1TempChanged"
QT_MOC_LITERAL(43, 1047, 27), // "Limit_MinSensor1TempChanged"
QT_MOC_LITERAL(44, 1075, 26), // "limitMaxSensor1TempChanged"
QT_MOC_LITERAL(45, 1102, 27), // "Limit_MaxSensor1TempChanged"
QT_MOC_LITERAL(46, 1130, 26), // "limitMinSensor2TempChanged"
QT_MOC_LITERAL(47, 1157, 27), // "Limit_MinSensor2TempChanged"
QT_MOC_LITERAL(48, 1185, 26), // "limitMaxSensor2TempChanged"
QT_MOC_LITERAL(49, 1212, 27), // "Limit_MaxSensor2TempChanged"
QT_MOC_LITERAL(50, 1240, 24), // "limitMaxServoTempChanged"
QT_MOC_LITERAL(51, 1265, 25), // "Limit_MaxServoTempChanged"
QT_MOC_LITERAL(52, 1291, 18), // "limitMinRPMChanged"
QT_MOC_LITERAL(53, 1310, 19), // "Limit_MinRPMChanged"
QT_MOC_LITERAL(54, 1330, 18), // "limitMaxRPMChanged"
QT_MOC_LITERAL(55, 1349, 19), // "Limit_MaxRPMChanged"
QT_MOC_LITERAL(56, 1369, 19), // "limitMinFuelChanged"
QT_MOC_LITERAL(57, 1389, 20), // "Limit_MinFuelChanged"
QT_MOC_LITERAL(58, 1410, 30), // "limitMaxServoDifferenceChanged"
QT_MOC_LITERAL(59, 1441, 31), // "Limit_MaxServoDifferenceChanged"
QT_MOC_LITERAL(60, 1473, 13), // "sensorChanged"
QT_MOC_LITERAL(61, 1487, 31), // "HoTTBridgeSettings_Sensor::Enum"
QT_MOC_LITERAL(62, 1519, 13), // "SensorChanged"
QT_MOC_LITERAL(63, 1533, 18), // "sensorVARIOChanged"
QT_MOC_LITERAL(64, 1552, 19), // "Sensor_VARIOChanged"
QT_MOC_LITERAL(65, 1572, 16), // "sensorGPSChanged"
QT_MOC_LITERAL(66, 1589, 17), // "Sensor_GPSChanged"
QT_MOC_LITERAL(67, 1607, 16), // "sensorEAMChanged"
QT_MOC_LITERAL(68, 1624, 17), // "Sensor_EAMChanged"
QT_MOC_LITERAL(69, 1642, 16), // "sensorGAMChanged"
QT_MOC_LITERAL(70, 1659, 17), // "Sensor_GAMChanged"
QT_MOC_LITERAL(71, 1677, 16), // "sensorESCChanged"
QT_MOC_LITERAL(72, 1694, 17), // "Sensor_ESCChanged"
QT_MOC_LITERAL(73, 1712, 14), // "warningChanged"
QT_MOC_LITERAL(74, 1727, 32), // "HoTTBridgeSettings_Warning::Enum"
QT_MOC_LITERAL(75, 1760, 14), // "WarningChanged"
QT_MOC_LITERAL(76, 1775, 26), // "warningAltitudeBeepChanged"
QT_MOC_LITERAL(77, 1802, 27), // "Warning_AltitudeBeepChanged"
QT_MOC_LITERAL(78, 1830, 22), // "warningMinSpeedChanged"
QT_MOC_LITERAL(79, 1853, 23), // "Warning_MinSpeedChanged"
QT_MOC_LITERAL(80, 1877, 22), // "warningMaxSpeedChanged"
QT_MOC_LITERAL(81, 1900, 23), // "Warning_MaxSpeedChanged"
QT_MOC_LITERAL(82, 1924, 28), // "warningNegDifference1Changed"
QT_MOC_LITERAL(83, 1953, 29), // "Warning_NegDifference1Changed"
QT_MOC_LITERAL(84, 1983, 28), // "warningPosDifference1Changed"
QT_MOC_LITERAL(85, 2012, 29), // "Warning_PosDifference1Changed"
QT_MOC_LITERAL(86, 2042, 28), // "warningNegDifference2Changed"
QT_MOC_LITERAL(87, 2071, 29), // "Warning_NegDifference2Changed"
QT_MOC_LITERAL(88, 2101, 28), // "warningPosDifference2Changed"
QT_MOC_LITERAL(89, 2130, 29), // "Warning_PosDifference2Changed"
QT_MOC_LITERAL(90, 2160, 23), // "warningMinHeightChanged"
QT_MOC_LITERAL(91, 2184, 24), // "Warning_MinHeightChanged"
QT_MOC_LITERAL(92, 2209, 23), // "warningMaxHeightChanged"
QT_MOC_LITERAL(93, 2233, 24), // "Warning_MaxHeightChanged"
QT_MOC_LITERAL(94, 2258, 25), // "warningMaxDistanceChanged"
QT_MOC_LITERAL(95, 2284, 26), // "Warning_MaxDistanceChanged"
QT_MOC_LITERAL(96, 2311, 29), // "warningMinPowerVoltageChanged"
QT_MOC_LITERAL(97, 2341, 30), // "Warning_MinPowerVoltageChanged"
QT_MOC_LITERAL(98, 2372, 29), // "warningMaxPowerVoltageChanged"
QT_MOC_LITERAL(99, 2402, 30), // "Warning_MaxPowerVoltageChanged"
QT_MOC_LITERAL(100, 2433, 31), // "warningMinSensor1VoltageChanged"
QT_MOC_LITERAL(101, 2465, 32), // "Warning_MinSensor1VoltageChanged"
QT_MOC_LITERAL(102, 2498, 31), // "warningMaxSensor1VoltageChanged"
QT_MOC_LITERAL(103, 2530, 32), // "Warning_MaxSensor1VoltageChanged"
QT_MOC_LITERAL(104, 2563, 31), // "warningMinSensor2VoltageChanged"
QT_MOC_LITERAL(105, 2595, 32), // "Warning_MinSensor2VoltageChanged"
QT_MOC_LITERAL(106, 2628, 31), // "warningMaxSensor2VoltageChanged"
QT_MOC_LITERAL(107, 2660, 32), // "Warning_MaxSensor2VoltageChanged"
QT_MOC_LITERAL(108, 2693, 28), // "warningMinCellVoltageChanged"
QT_MOC_LITERAL(109, 2722, 29), // "Warning_MinCellVoltageChanged"
QT_MOC_LITERAL(110, 2752, 24), // "warningMaxCurrentChanged"
QT_MOC_LITERAL(111, 2777, 25), // "Warning_MaxCurrentChanged"
QT_MOC_LITERAL(112, 2803, 29), // "warningMaxUsedCapacityChanged"
QT_MOC_LITERAL(113, 2833, 30), // "Warning_MaxUsedCapacityChanged"
QT_MOC_LITERAL(114, 2864, 28), // "warningMinSensor1TempChanged"
QT_MOC_LITERAL(115, 2893, 29), // "Warning_MinSensor1TempChanged"
QT_MOC_LITERAL(116, 2923, 28), // "warningMaxSensor1TempChanged"
QT_MOC_LITERAL(117, 2952, 29), // "Warning_MaxSensor1TempChanged"
QT_MOC_LITERAL(118, 2982, 28), // "warningMinSensor2TempChanged"
QT_MOC_LITERAL(119, 3011, 29), // "Warning_MinSensor2TempChanged"
QT_MOC_LITERAL(120, 3041, 28), // "warningMaxSensor2TempChanged"
QT_MOC_LITERAL(121, 3070, 29), // "Warning_MaxSensor2TempChanged"
QT_MOC_LITERAL(122, 3100, 26), // "warningMaxServoTempChanged"
QT_MOC_LITERAL(123, 3127, 27), // "Warning_MaxServoTempChanged"
QT_MOC_LITERAL(124, 3155, 20), // "warningMinRPMChanged"
QT_MOC_LITERAL(125, 3176, 21), // "Warning_MinRPMChanged"
QT_MOC_LITERAL(126, 3198, 20), // "warningMaxRPMChanged"
QT_MOC_LITERAL(127, 3219, 21), // "Warning_MaxRPMChanged"
QT_MOC_LITERAL(128, 3241, 21), // "warningMinFuelChanged"
QT_MOC_LITERAL(129, 3263, 22), // "Warning_MinFuelChanged"
QT_MOC_LITERAL(130, 3286, 32), // "warningMaxServoDifferenceChanged"
QT_MOC_LITERAL(131, 3319, 33), // "Warning_MaxServoDifferenceCha..."
QT_MOC_LITERAL(132, 3353, 8), // "setLimit"
QT_MOC_LITERAL(133, 3362, 16), // "setLimitMinSpeed"
QT_MOC_LITERAL(134, 3379, 17), // "setLimit_MinSpeed"
QT_MOC_LITERAL(135, 3397, 16), // "setLimitMaxSpeed"
QT_MOC_LITERAL(136, 3414, 17), // "setLimit_MaxSpeed"
QT_MOC_LITERAL(137, 3432, 22), // "setLimitNegDifference1"
QT_MOC_LITERAL(138, 3455, 23), // "setLimit_NegDifference1"
QT_MOC_LITERAL(139, 3479, 22), // "setLimitPosDifference1"
QT_MOC_LITERAL(140, 3502, 23), // "setLimit_PosDifference1"
QT_MOC_LITERAL(141, 3526, 22), // "setLimitNegDifference2"
QT_MOC_LITERAL(142, 3549, 23), // "setLimit_NegDifference2"
QT_MOC_LITERAL(143, 3573, 22), // "setLimitPosDifference2"
QT_MOC_LITERAL(144, 3596, 23), // "setLimit_PosDifference2"
QT_MOC_LITERAL(145, 3620, 17), // "setLimitMinHeight"
QT_MOC_LITERAL(146, 3638, 18), // "setLimit_MinHeight"
QT_MOC_LITERAL(147, 3657, 17), // "setLimitMaxHeight"
QT_MOC_LITERAL(148, 3675, 18), // "setLimit_MaxHeight"
QT_MOC_LITERAL(149, 3694, 19), // "setLimitMaxDistance"
QT_MOC_LITERAL(150, 3714, 20), // "setLimit_MaxDistance"
QT_MOC_LITERAL(151, 3735, 23), // "setLimitMinPowerVoltage"
QT_MOC_LITERAL(152, 3759, 24), // "setLimit_MinPowerVoltage"
QT_MOC_LITERAL(153, 3784, 23), // "setLimitMaxPowerVoltage"
QT_MOC_LITERAL(154, 3808, 24), // "setLimit_MaxPowerVoltage"
QT_MOC_LITERAL(155, 3833, 25), // "setLimitMinSensor1Voltage"
QT_MOC_LITERAL(156, 3859, 26), // "setLimit_MinSensor1Voltage"
QT_MOC_LITERAL(157, 3886, 25), // "setLimitMaxSensor1Voltage"
QT_MOC_LITERAL(158, 3912, 26), // "setLimit_MaxSensor1Voltage"
QT_MOC_LITERAL(159, 3939, 25), // "setLimitMinSensor2Voltage"
QT_MOC_LITERAL(160, 3965, 26), // "setLimit_MinSensor2Voltage"
QT_MOC_LITERAL(161, 3992, 25), // "setLimitMaxSensor2Voltage"
QT_MOC_LITERAL(162, 4018, 26), // "setLimit_MaxSensor2Voltage"
QT_MOC_LITERAL(163, 4045, 22), // "setLimitMinCellVoltage"
QT_MOC_LITERAL(164, 4068, 23), // "setLimit_MinCellVoltage"
QT_MOC_LITERAL(165, 4092, 18), // "setLimitMaxCurrent"
QT_MOC_LITERAL(166, 4111, 19), // "setLimit_MaxCurrent"
QT_MOC_LITERAL(167, 4131, 23), // "setLimitMaxUsedCapacity"
QT_MOC_LITERAL(168, 4155, 24), // "setLimit_MaxUsedCapacity"
QT_MOC_LITERAL(169, 4180, 22), // "setLimitMinSensor1Temp"
QT_MOC_LITERAL(170, 4203, 23), // "setLimit_MinSensor1Temp"
QT_MOC_LITERAL(171, 4227, 22), // "setLimitMaxSensor1Temp"
QT_MOC_LITERAL(172, 4250, 23), // "setLimit_MaxSensor1Temp"
QT_MOC_LITERAL(173, 4274, 22), // "setLimitMinSensor2Temp"
QT_MOC_LITERAL(174, 4297, 23), // "setLimit_MinSensor2Temp"
QT_MOC_LITERAL(175, 4321, 22), // "setLimitMaxSensor2Temp"
QT_MOC_LITERAL(176, 4344, 23), // "setLimit_MaxSensor2Temp"
QT_MOC_LITERAL(177, 4368, 20), // "setLimitMaxServoTemp"
QT_MOC_LITERAL(178, 4389, 21), // "setLimit_MaxServoTemp"
QT_MOC_LITERAL(179, 4411, 14), // "setLimitMinRPM"
QT_MOC_LITERAL(180, 4426, 15), // "setLimit_MinRPM"
QT_MOC_LITERAL(181, 4442, 14), // "setLimitMaxRPM"
QT_MOC_LITERAL(182, 4457, 15), // "setLimit_MaxRPM"
QT_MOC_LITERAL(183, 4473, 15), // "setLimitMinFuel"
QT_MOC_LITERAL(184, 4489, 16), // "setLimit_MinFuel"
QT_MOC_LITERAL(185, 4506, 26), // "setLimitMaxServoDifference"
QT_MOC_LITERAL(186, 4533, 27), // "setLimit_MaxServoDifference"
QT_MOC_LITERAL(187, 4561, 9), // "setSensor"
QT_MOC_LITERAL(188, 4571, 14), // "setSensorVARIO"
QT_MOC_LITERAL(189, 4586, 15), // "setSensor_VARIO"
QT_MOC_LITERAL(190, 4602, 12), // "setSensorGPS"
QT_MOC_LITERAL(191, 4615, 13), // "setSensor_GPS"
QT_MOC_LITERAL(192, 4629, 12), // "setSensorEAM"
QT_MOC_LITERAL(193, 4642, 13), // "setSensor_EAM"
QT_MOC_LITERAL(194, 4656, 12), // "setSensorGAM"
QT_MOC_LITERAL(195, 4669, 13), // "setSensor_GAM"
QT_MOC_LITERAL(196, 4683, 12), // "setSensorESC"
QT_MOC_LITERAL(197, 4696, 13), // "setSensor_ESC"
QT_MOC_LITERAL(198, 4710, 10), // "setWarning"
QT_MOC_LITERAL(199, 4721, 22), // "setWarningAltitudeBeep"
QT_MOC_LITERAL(200, 4744, 23), // "setWarning_AltitudeBeep"
QT_MOC_LITERAL(201, 4768, 18), // "setWarningMinSpeed"
QT_MOC_LITERAL(202, 4787, 19), // "setWarning_MinSpeed"
QT_MOC_LITERAL(203, 4807, 18), // "setWarningMaxSpeed"
QT_MOC_LITERAL(204, 4826, 19), // "setWarning_MaxSpeed"
QT_MOC_LITERAL(205, 4846, 24), // "setWarningNegDifference1"
QT_MOC_LITERAL(206, 4871, 25), // "setWarning_NegDifference1"
QT_MOC_LITERAL(207, 4897, 24), // "setWarningPosDifference1"
QT_MOC_LITERAL(208, 4922, 25), // "setWarning_PosDifference1"
QT_MOC_LITERAL(209, 4948, 24), // "setWarningNegDifference2"
QT_MOC_LITERAL(210, 4973, 25), // "setWarning_NegDifference2"
QT_MOC_LITERAL(211, 4999, 24), // "setWarningPosDifference2"
QT_MOC_LITERAL(212, 5024, 25), // "setWarning_PosDifference2"
QT_MOC_LITERAL(213, 5050, 19), // "setWarningMinHeight"
QT_MOC_LITERAL(214, 5070, 20), // "setWarning_MinHeight"
QT_MOC_LITERAL(215, 5091, 19), // "setWarningMaxHeight"
QT_MOC_LITERAL(216, 5111, 20), // "setWarning_MaxHeight"
QT_MOC_LITERAL(217, 5132, 21), // "setWarningMaxDistance"
QT_MOC_LITERAL(218, 5154, 22), // "setWarning_MaxDistance"
QT_MOC_LITERAL(219, 5177, 25), // "setWarningMinPowerVoltage"
QT_MOC_LITERAL(220, 5203, 26), // "setWarning_MinPowerVoltage"
QT_MOC_LITERAL(221, 5230, 25), // "setWarningMaxPowerVoltage"
QT_MOC_LITERAL(222, 5256, 26), // "setWarning_MaxPowerVoltage"
QT_MOC_LITERAL(223, 5283, 27), // "setWarningMinSensor1Voltage"
QT_MOC_LITERAL(224, 5311, 28), // "setWarning_MinSensor1Voltage"
QT_MOC_LITERAL(225, 5340, 27), // "setWarningMaxSensor1Voltage"
QT_MOC_LITERAL(226, 5368, 28), // "setWarning_MaxSensor1Voltage"
QT_MOC_LITERAL(227, 5397, 27), // "setWarningMinSensor2Voltage"
QT_MOC_LITERAL(228, 5425, 28), // "setWarning_MinSensor2Voltage"
QT_MOC_LITERAL(229, 5454, 27), // "setWarningMaxSensor2Voltage"
QT_MOC_LITERAL(230, 5482, 28), // "setWarning_MaxSensor2Voltage"
QT_MOC_LITERAL(231, 5511, 24), // "setWarningMinCellVoltage"
QT_MOC_LITERAL(232, 5536, 25), // "setWarning_MinCellVoltage"
QT_MOC_LITERAL(233, 5562, 20), // "setWarningMaxCurrent"
QT_MOC_LITERAL(234, 5583, 21), // "setWarning_MaxCurrent"
QT_MOC_LITERAL(235, 5605, 25), // "setWarningMaxUsedCapacity"
QT_MOC_LITERAL(236, 5631, 26), // "setWarning_MaxUsedCapacity"
QT_MOC_LITERAL(237, 5658, 24), // "setWarningMinSensor1Temp"
QT_MOC_LITERAL(238, 5683, 25), // "setWarning_MinSensor1Temp"
QT_MOC_LITERAL(239, 5709, 24), // "setWarningMaxSensor1Temp"
QT_MOC_LITERAL(240, 5734, 25), // "setWarning_MaxSensor1Temp"
QT_MOC_LITERAL(241, 5760, 24), // "setWarningMinSensor2Temp"
QT_MOC_LITERAL(242, 5785, 25), // "setWarning_MinSensor2Temp"
QT_MOC_LITERAL(243, 5811, 24), // "setWarningMaxSensor2Temp"
QT_MOC_LITERAL(244, 5836, 25), // "setWarning_MaxSensor2Temp"
QT_MOC_LITERAL(245, 5862, 22), // "setWarningMaxServoTemp"
QT_MOC_LITERAL(246, 5885, 23), // "setWarning_MaxServoTemp"
QT_MOC_LITERAL(247, 5909, 16), // "setWarningMinRPM"
QT_MOC_LITERAL(248, 5926, 17), // "setWarning_MinRPM"
QT_MOC_LITERAL(249, 5944, 16), // "setWarningMaxRPM"
QT_MOC_LITERAL(250, 5961, 17), // "setWarning_MaxRPM"
QT_MOC_LITERAL(251, 5979, 17), // "setWarningMinFuel"
QT_MOC_LITERAL(252, 5997, 18), // "setWarning_MinFuel"
QT_MOC_LITERAL(253, 6016, 28), // "setWarningMaxServoDifference"
QT_MOC_LITERAL(254, 6045, 29), // "setWarning_MaxServoDifference"
QT_MOC_LITERAL(255, 6075, 17), // "emitNotifications"
QT_MOC_LITERAL(256, 6093, 5), // "limit"
QT_MOC_LITERAL(257, 6099, 8), // "getLimit"
QT_MOC_LITERAL(258, 6108, 17), // "getLimit_MinSpeed"
QT_MOC_LITERAL(259, 6126, 17), // "getLimit_MaxSpeed"
QT_MOC_LITERAL(260, 6144, 23), // "getLimit_NegDifference1"
QT_MOC_LITERAL(261, 6168, 23), // "getLimit_PosDifference1"
QT_MOC_LITERAL(262, 6192, 23), // "getLimit_NegDifference2"
QT_MOC_LITERAL(263, 6216, 23), // "getLimit_PosDifference2"
QT_MOC_LITERAL(264, 6240, 18), // "getLimit_MinHeight"
QT_MOC_LITERAL(265, 6259, 18), // "getLimit_MaxHeight"
QT_MOC_LITERAL(266, 6278, 20), // "getLimit_MaxDistance"
QT_MOC_LITERAL(267, 6299, 24), // "getLimit_MinPowerVoltage"
QT_MOC_LITERAL(268, 6324, 24), // "getLimit_MaxPowerVoltage"
QT_MOC_LITERAL(269, 6349, 26), // "getLimit_MinSensor1Voltage"
QT_MOC_LITERAL(270, 6376, 26), // "getLimit_MaxSensor1Voltage"
QT_MOC_LITERAL(271, 6403, 26), // "getLimit_MinSensor2Voltage"
QT_MOC_LITERAL(272, 6430, 26), // "getLimit_MaxSensor2Voltage"
QT_MOC_LITERAL(273, 6457, 23), // "getLimit_MinCellVoltage"
QT_MOC_LITERAL(274, 6481, 19), // "getLimit_MaxCurrent"
QT_MOC_LITERAL(275, 6501, 24), // "getLimit_MaxUsedCapacity"
QT_MOC_LITERAL(276, 6526, 23), // "getLimit_MinSensor1Temp"
QT_MOC_LITERAL(277, 6550, 23), // "getLimit_MaxSensor1Temp"
QT_MOC_LITERAL(278, 6574, 23), // "getLimit_MinSensor2Temp"
QT_MOC_LITERAL(279, 6598, 23), // "getLimit_MaxSensor2Temp"
QT_MOC_LITERAL(280, 6622, 21), // "getLimit_MaxServoTemp"
QT_MOC_LITERAL(281, 6644, 15), // "getLimit_MinRPM"
QT_MOC_LITERAL(282, 6660, 15), // "getLimit_MaxRPM"
QT_MOC_LITERAL(283, 6676, 16), // "getLimit_MinFuel"
QT_MOC_LITERAL(284, 6693, 27), // "getLimit_MaxServoDifference"
QT_MOC_LITERAL(285, 6721, 6), // "sensor"
QT_MOC_LITERAL(286, 6728, 9), // "getSensor"
QT_MOC_LITERAL(287, 6738, 15), // "getSensor_VARIO"
QT_MOC_LITERAL(288, 6754, 13), // "getSensor_GPS"
QT_MOC_LITERAL(289, 6768, 13), // "getSensor_EAM"
QT_MOC_LITERAL(290, 6782, 13), // "getSensor_GAM"
QT_MOC_LITERAL(291, 6796, 13), // "getSensor_ESC"
QT_MOC_LITERAL(292, 6810, 7), // "warning"
QT_MOC_LITERAL(293, 6818, 10), // "getWarning"
QT_MOC_LITERAL(294, 6829, 23), // "getWarning_AltitudeBeep"
QT_MOC_LITERAL(295, 6853, 19), // "getWarning_MinSpeed"
QT_MOC_LITERAL(296, 6873, 19), // "getWarning_MaxSpeed"
QT_MOC_LITERAL(297, 6893, 25), // "getWarning_NegDifference1"
QT_MOC_LITERAL(298, 6919, 25), // "getWarning_PosDifference1"
QT_MOC_LITERAL(299, 6945, 25), // "getWarning_NegDifference2"
QT_MOC_LITERAL(300, 6971, 25), // "getWarning_PosDifference2"
QT_MOC_LITERAL(301, 6997, 20), // "getWarning_MinHeight"
QT_MOC_LITERAL(302, 7018, 20), // "getWarning_MaxHeight"
QT_MOC_LITERAL(303, 7039, 22), // "getWarning_MaxDistance"
QT_MOC_LITERAL(304, 7062, 26), // "getWarning_MinPowerVoltage"
QT_MOC_LITERAL(305, 7089, 26), // "getWarning_MaxPowerVoltage"
QT_MOC_LITERAL(306, 7116, 28), // "getWarning_MinSensor1Voltage"
QT_MOC_LITERAL(307, 7145, 28), // "getWarning_MaxSensor1Voltage"
QT_MOC_LITERAL(308, 7174, 28), // "getWarning_MinSensor2Voltage"
QT_MOC_LITERAL(309, 7203, 28), // "getWarning_MaxSensor2Voltage"
QT_MOC_LITERAL(310, 7232, 25), // "getWarning_MinCellVoltage"
QT_MOC_LITERAL(311, 7258, 21), // "getWarning_MaxCurrent"
QT_MOC_LITERAL(312, 7280, 26), // "getWarning_MaxUsedCapacity"
QT_MOC_LITERAL(313, 7307, 25), // "getWarning_MinSensor1Temp"
QT_MOC_LITERAL(314, 7333, 25), // "getWarning_MaxSensor1Temp"
QT_MOC_LITERAL(315, 7359, 25), // "getWarning_MinSensor2Temp"
QT_MOC_LITERAL(316, 7385, 25), // "getWarning_MaxSensor2Temp"
QT_MOC_LITERAL(317, 7411, 23), // "getWarning_MaxServoTemp"
QT_MOC_LITERAL(318, 7435, 17), // "getWarning_MinRPM"
QT_MOC_LITERAL(319, 7453, 17), // "getWarning_MaxRPM"
QT_MOC_LITERAL(320, 7471, 18), // "getWarning_MinFuel"
QT_MOC_LITERAL(321, 7490, 29), // "getWarning_MaxServoDifference"
QT_MOC_LITERAL(322, 7520, 13), // "limitMinSpeed"
QT_MOC_LITERAL(323, 7534, 13), // "limitMaxSpeed"
QT_MOC_LITERAL(324, 7548, 19), // "limitNegDifference1"
QT_MOC_LITERAL(325, 7568, 19), // "limitPosDifference1"
QT_MOC_LITERAL(326, 7588, 19), // "limitNegDifference2"
QT_MOC_LITERAL(327, 7608, 19), // "limitPosDifference2"
QT_MOC_LITERAL(328, 7628, 14), // "limitMinHeight"
QT_MOC_LITERAL(329, 7643, 14), // "limitMaxHeight"
QT_MOC_LITERAL(330, 7658, 16), // "limitMaxDistance"
QT_MOC_LITERAL(331, 7675, 20), // "limitMinPowerVoltage"
QT_MOC_LITERAL(332, 7696, 20), // "limitMaxPowerVoltage"
QT_MOC_LITERAL(333, 7717, 22), // "limitMinSensor1Voltage"
QT_MOC_LITERAL(334, 7740, 22), // "limitMaxSensor1Voltage"
QT_MOC_LITERAL(335, 7763, 22), // "limitMinSensor2Voltage"
QT_MOC_LITERAL(336, 7786, 22), // "limitMaxSensor2Voltage"
QT_MOC_LITERAL(337, 7809, 19), // "limitMinCellVoltage"
QT_MOC_LITERAL(338, 7829, 15), // "limitMaxCurrent"
QT_MOC_LITERAL(339, 7845, 20), // "limitMaxUsedCapacity"
QT_MOC_LITERAL(340, 7866, 19), // "limitMinSensor1Temp"
QT_MOC_LITERAL(341, 7886, 19), // "limitMaxSensor1Temp"
QT_MOC_LITERAL(342, 7906, 19), // "limitMinSensor2Temp"
QT_MOC_LITERAL(343, 7926, 19), // "limitMaxSensor2Temp"
QT_MOC_LITERAL(344, 7946, 17), // "limitMaxServoTemp"
QT_MOC_LITERAL(345, 7964, 11), // "limitMinRPM"
QT_MOC_LITERAL(346, 7976, 11), // "limitMaxRPM"
QT_MOC_LITERAL(347, 7988, 12), // "limitMinFuel"
QT_MOC_LITERAL(348, 8001, 23), // "limitMaxServoDifference"
QT_MOC_LITERAL(349, 8025, 11), // "sensorVARIO"
QT_MOC_LITERAL(350, 8037, 9), // "sensorGPS"
QT_MOC_LITERAL(351, 8047, 9), // "sensorEAM"
QT_MOC_LITERAL(352, 8057, 9), // "sensorGAM"
QT_MOC_LITERAL(353, 8067, 9), // "sensorESC"
QT_MOC_LITERAL(354, 8077, 19), // "warningAltitudeBeep"
QT_MOC_LITERAL(355, 8097, 15), // "warningMinSpeed"
QT_MOC_LITERAL(356, 8113, 15), // "warningMaxSpeed"
QT_MOC_LITERAL(357, 8129, 21), // "warningNegDifference1"
QT_MOC_LITERAL(358, 8151, 21), // "warningPosDifference1"
QT_MOC_LITERAL(359, 8173, 21), // "warningNegDifference2"
QT_MOC_LITERAL(360, 8195, 21), // "warningPosDifference2"
QT_MOC_LITERAL(361, 8217, 16), // "warningMinHeight"
QT_MOC_LITERAL(362, 8234, 16), // "warningMaxHeight"
QT_MOC_LITERAL(363, 8251, 18), // "warningMaxDistance"
QT_MOC_LITERAL(364, 8270, 22), // "warningMinPowerVoltage"
QT_MOC_LITERAL(365, 8293, 22), // "warningMaxPowerVoltage"
QT_MOC_LITERAL(366, 8316, 24), // "warningMinSensor1Voltage"
QT_MOC_LITERAL(367, 8341, 24), // "warningMaxSensor1Voltage"
QT_MOC_LITERAL(368, 8366, 24), // "warningMinSensor2Voltage"
QT_MOC_LITERAL(369, 8391, 24), // "warningMaxSensor2Voltage"
QT_MOC_LITERAL(370, 8416, 21), // "warningMinCellVoltage"
QT_MOC_LITERAL(371, 8438, 17), // "warningMaxCurrent"
QT_MOC_LITERAL(372, 8456, 22), // "warningMaxUsedCapacity"
QT_MOC_LITERAL(373, 8479, 21), // "warningMinSensor1Temp"
QT_MOC_LITERAL(374, 8501, 21), // "warningMaxSensor1Temp"
QT_MOC_LITERAL(375, 8523, 21), // "warningMinSensor2Temp"
QT_MOC_LITERAL(376, 8545, 21), // "warningMaxSensor2Temp"
QT_MOC_LITERAL(377, 8567, 19), // "warningMaxServoTemp"
QT_MOC_LITERAL(378, 8587, 13), // "warningMinRPM"
QT_MOC_LITERAL(379, 8601, 13), // "warningMaxRPM"
QT_MOC_LITERAL(380, 8615, 14), // "warningMinFuel"
QT_MOC_LITERAL(381, 8630, 25), // "warningMaxServoDifference"
QT_MOC_LITERAL(382, 8656, 14), // "Limit_MinSpeed"
QT_MOC_LITERAL(383, 8671, 14), // "Limit_MaxSpeed"
QT_MOC_LITERAL(384, 8686, 20), // "Limit_NegDifference1"
QT_MOC_LITERAL(385, 8707, 20), // "Limit_PosDifference1"
QT_MOC_LITERAL(386, 8728, 20), // "Limit_NegDifference2"
QT_MOC_LITERAL(387, 8749, 20), // "Limit_PosDifference2"
QT_MOC_LITERAL(388, 8770, 15), // "Limit_MinHeight"
QT_MOC_LITERAL(389, 8786, 15), // "Limit_MaxHeight"
QT_MOC_LITERAL(390, 8802, 17), // "Limit_MaxDistance"
QT_MOC_LITERAL(391, 8820, 21), // "Limit_MinPowerVoltage"
QT_MOC_LITERAL(392, 8842, 21), // "Limit_MaxPowerVoltage"
QT_MOC_LITERAL(393, 8864, 23), // "Limit_MinSensor1Voltage"
QT_MOC_LITERAL(394, 8888, 23), // "Limit_MaxSensor1Voltage"
QT_MOC_LITERAL(395, 8912, 23), // "Limit_MinSensor2Voltage"
QT_MOC_LITERAL(396, 8936, 23), // "Limit_MaxSensor2Voltage"
QT_MOC_LITERAL(397, 8960, 20), // "Limit_MinCellVoltage"
QT_MOC_LITERAL(398, 8981, 16), // "Limit_MaxCurrent"
QT_MOC_LITERAL(399, 8998, 21), // "Limit_MaxUsedCapacity"
QT_MOC_LITERAL(400, 9020, 20), // "Limit_MinSensor1Temp"
QT_MOC_LITERAL(401, 9041, 20), // "Limit_MaxSensor1Temp"
QT_MOC_LITERAL(402, 9062, 20), // "Limit_MinSensor2Temp"
QT_MOC_LITERAL(403, 9083, 20), // "Limit_MaxSensor2Temp"
QT_MOC_LITERAL(404, 9104, 18), // "Limit_MaxServoTemp"
QT_MOC_LITERAL(405, 9123, 12), // "Limit_MinRPM"
QT_MOC_LITERAL(406, 9136, 12), // "Limit_MaxRPM"
QT_MOC_LITERAL(407, 9149, 13), // "Limit_MinFuel"
QT_MOC_LITERAL(408, 9163, 24), // "Limit_MaxServoDifference"
QT_MOC_LITERAL(409, 9188, 12), // "Sensor_VARIO"
QT_MOC_LITERAL(410, 9201, 10), // "Sensor_GPS"
QT_MOC_LITERAL(411, 9212, 10), // "Sensor_EAM"
QT_MOC_LITERAL(412, 9223, 10), // "Sensor_GAM"
QT_MOC_LITERAL(413, 9234, 10), // "Sensor_ESC"
QT_MOC_LITERAL(414, 9245, 20), // "Warning_AltitudeBeep"
QT_MOC_LITERAL(415, 9266, 16), // "Warning_MinSpeed"
QT_MOC_LITERAL(416, 9283, 16), // "Warning_MaxSpeed"
QT_MOC_LITERAL(417, 9300, 22), // "Warning_NegDifference1"
QT_MOC_LITERAL(418, 9323, 22), // "Warning_PosDifference1"
QT_MOC_LITERAL(419, 9346, 22), // "Warning_NegDifference2"
QT_MOC_LITERAL(420, 9369, 22), // "Warning_PosDifference2"
QT_MOC_LITERAL(421, 9392, 17), // "Warning_MinHeight"
QT_MOC_LITERAL(422, 9410, 17), // "Warning_MaxHeight"
QT_MOC_LITERAL(423, 9428, 19), // "Warning_MaxDistance"
QT_MOC_LITERAL(424, 9448, 23), // "Warning_MinPowerVoltage"
QT_MOC_LITERAL(425, 9472, 23), // "Warning_MaxPowerVoltage"
QT_MOC_LITERAL(426, 9496, 25), // "Warning_MinSensor1Voltage"
QT_MOC_LITERAL(427, 9522, 25), // "Warning_MaxSensor1Voltage"
QT_MOC_LITERAL(428, 9548, 25), // "Warning_MinSensor2Voltage"
QT_MOC_LITERAL(429, 9574, 25), // "Warning_MaxSensor2Voltage"
QT_MOC_LITERAL(430, 9600, 22), // "Warning_MinCellVoltage"
QT_MOC_LITERAL(431, 9623, 18), // "Warning_MaxCurrent"
QT_MOC_LITERAL(432, 9642, 23), // "Warning_MaxUsedCapacity"
QT_MOC_LITERAL(433, 9666, 22), // "Warning_MinSensor1Temp"
QT_MOC_LITERAL(434, 9689, 22), // "Warning_MaxSensor1Temp"
QT_MOC_LITERAL(435, 9712, 22), // "Warning_MinSensor2Temp"
QT_MOC_LITERAL(436, 9735, 22), // "Warning_MaxSensor2Temp"
QT_MOC_LITERAL(437, 9758, 20), // "Warning_MaxServoTemp"
QT_MOC_LITERAL(438, 9779, 14), // "Warning_MinRPM"
QT_MOC_LITERAL(439, 9794, 14), // "Warning_MaxRPM"
QT_MOC_LITERAL(440, 9809, 15), // "Warning_MinFuel"
QT_MOC_LITERAL(441, 9825, 26) // "Warning_MaxServoDifference"

    },
    "HoTTBridgeSettings\0limitChanged\0\0index\0"
    "value\0LimitChanged\0limitMinSpeedChanged\0"
    "Limit_MinSpeedChanged\0limitMaxSpeedChanged\0"
    "Limit_MaxSpeedChanged\0limitNegDifference1Changed\0"
    "Limit_NegDifference1Changed\0"
    "limitPosDifference1Changed\0"
    "Limit_PosDifference1Changed\0"
    "limitNegDifference2Changed\0"
    "Limit_NegDifference2Changed\0"
    "limitPosDifference2Changed\0"
    "Limit_PosDifference2Changed\0"
    "limitMinHeightChanged\0Limit_MinHeightChanged\0"
    "limitMaxHeightChanged\0Limit_MaxHeightChanged\0"
    "limitMaxDistanceChanged\0"
    "Limit_MaxDistanceChanged\0"
    "limitMinPowerVoltageChanged\0"
    "Limit_MinPowerVoltageChanged\0"
    "limitMaxPowerVoltageChanged\0"
    "Limit_MaxPowerVoltageChanged\0"
    "limitMinSensor1VoltageChanged\0"
    "Limit_MinSensor1VoltageChanged\0"
    "limitMaxSensor1VoltageChanged\0"
    "Limit_MaxSensor1VoltageChanged\0"
    "limitMinSensor2VoltageChanged\0"
    "Limit_MinSensor2VoltageChanged\0"
    "limitMaxSensor2VoltageChanged\0"
    "Limit_MaxSensor2VoltageChanged\0"
    "limitMinCellVoltageChanged\0"
    "Limit_MinCellVoltageChanged\0"
    "limitMaxCurrentChanged\0Limit_MaxCurrentChanged\0"
    "limitMaxUsedCapacityChanged\0"
    "Limit_MaxUsedCapacityChanged\0"
    "limitMinSensor1TempChanged\0"
    "Limit_MinSensor1TempChanged\0"
    "limitMaxSensor1TempChanged\0"
    "Limit_MaxSensor1TempChanged\0"
    "limitMinSensor2TempChanged\0"
    "Limit_MinSensor2TempChanged\0"
    "limitMaxSensor2TempChanged\0"
    "Limit_MaxSensor2TempChanged\0"
    "limitMaxServoTempChanged\0"
    "Limit_MaxServoTempChanged\0limitMinRPMChanged\0"
    "Limit_MinRPMChanged\0limitMaxRPMChanged\0"
    "Limit_MaxRPMChanged\0limitMinFuelChanged\0"
    "Limit_MinFuelChanged\0"
    "limitMaxServoDifferenceChanged\0"
    "Limit_MaxServoDifferenceChanged\0"
    "sensorChanged\0HoTTBridgeSettings_Sensor::Enum\0"
    "SensorChanged\0sensorVARIOChanged\0"
    "Sensor_VARIOChanged\0sensorGPSChanged\0"
    "Sensor_GPSChanged\0sensorEAMChanged\0"
    "Sensor_EAMChanged\0sensorGAMChanged\0"
    "Sensor_GAMChanged\0sensorESCChanged\0"
    "Sensor_ESCChanged\0warningChanged\0"
    "HoTTBridgeSettings_Warning::Enum\0"
    "WarningChanged\0warningAltitudeBeepChanged\0"
    "Warning_AltitudeBeepChanged\0"
    "warningMinSpeedChanged\0Warning_MinSpeedChanged\0"
    "warningMaxSpeedChanged\0Warning_MaxSpeedChanged\0"
    "warningNegDifference1Changed\0"
    "Warning_NegDifference1Changed\0"
    "warningPosDifference1Changed\0"
    "Warning_PosDifference1Changed\0"
    "warningNegDifference2Changed\0"
    "Warning_NegDifference2Changed\0"
    "warningPosDifference2Changed\0"
    "Warning_PosDifference2Changed\0"
    "warningMinHeightChanged\0"
    "Warning_MinHeightChanged\0"
    "warningMaxHeightChanged\0"
    "Warning_MaxHeightChanged\0"
    "warningMaxDistanceChanged\0"
    "Warning_MaxDistanceChanged\0"
    "warningMinPowerVoltageChanged\0"
    "Warning_MinPowerVoltageChanged\0"
    "warningMaxPowerVoltageChanged\0"
    "Warning_MaxPowerVoltageChanged\0"
    "warningMinSensor1VoltageChanged\0"
    "Warning_MinSensor1VoltageChanged\0"
    "warningMaxSensor1VoltageChanged\0"
    "Warning_MaxSensor1VoltageChanged\0"
    "warningMinSensor2VoltageChanged\0"
    "Warning_MinSensor2VoltageChanged\0"
    "warningMaxSensor2VoltageChanged\0"
    "Warning_MaxSensor2VoltageChanged\0"
    "warningMinCellVoltageChanged\0"
    "Warning_MinCellVoltageChanged\0"
    "warningMaxCurrentChanged\0"
    "Warning_MaxCurrentChanged\0"
    "warningMaxUsedCapacityChanged\0"
    "Warning_MaxUsedCapacityChanged\0"
    "warningMinSensor1TempChanged\0"
    "Warning_MinSensor1TempChanged\0"
    "warningMaxSensor1TempChanged\0"
    "Warning_MaxSensor1TempChanged\0"
    "warningMinSensor2TempChanged\0"
    "Warning_MinSensor2TempChanged\0"
    "warningMaxSensor2TempChanged\0"
    "Warning_MaxSensor2TempChanged\0"
    "warningMaxServoTempChanged\0"
    "Warning_MaxServoTempChanged\0"
    "warningMinRPMChanged\0Warning_MinRPMChanged\0"
    "warningMaxRPMChanged\0Warning_MaxRPMChanged\0"
    "warningMinFuelChanged\0Warning_MinFuelChanged\0"
    "warningMaxServoDifferenceChanged\0"
    "Warning_MaxServoDifferenceChanged\0"
    "setLimit\0setLimitMinSpeed\0setLimit_MinSpeed\0"
    "setLimitMaxSpeed\0setLimit_MaxSpeed\0"
    "setLimitNegDifference1\0setLimit_NegDifference1\0"
    "setLimitPosDifference1\0setLimit_PosDifference1\0"
    "setLimitNegDifference2\0setLimit_NegDifference2\0"
    "setLimitPosDifference2\0setLimit_PosDifference2\0"
    "setLimitMinHeight\0setLimit_MinHeight\0"
    "setLimitMaxHeight\0setLimit_MaxHeight\0"
    "setLimitMaxDistance\0setLimit_MaxDistance\0"
    "setLimitMinPowerVoltage\0"
    "setLimit_MinPowerVoltage\0"
    "setLimitMaxPowerVoltage\0"
    "setLimit_MaxPowerVoltage\0"
    "setLimitMinSensor1Voltage\0"
    "setLimit_MinSensor1Voltage\0"
    "setLimitMaxSensor1Voltage\0"
    "setLimit_MaxSensor1Voltage\0"
    "setLimitMinSensor2Voltage\0"
    "setLimit_MinSensor2Voltage\0"
    "setLimitMaxSensor2Voltage\0"
    "setLimit_MaxSensor2Voltage\0"
    "setLimitMinCellVoltage\0setLimit_MinCellVoltage\0"
    "setLimitMaxCurrent\0setLimit_MaxCurrent\0"
    "setLimitMaxUsedCapacity\0"
    "setLimit_MaxUsedCapacity\0"
    "setLimitMinSensor1Temp\0setLimit_MinSensor1Temp\0"
    "setLimitMaxSensor1Temp\0setLimit_MaxSensor1Temp\0"
    "setLimitMinSensor2Temp\0setLimit_MinSensor2Temp\0"
    "setLimitMaxSensor2Temp\0setLimit_MaxSensor2Temp\0"
    "setLimitMaxServoTemp\0setLimit_MaxServoTemp\0"
    "setLimitMinRPM\0setLimit_MinRPM\0"
    "setLimitMaxRPM\0setLimit_MaxRPM\0"
    "setLimitMinFuel\0setLimit_MinFuel\0"
    "setLimitMaxServoDifference\0"
    "setLimit_MaxServoDifference\0setSensor\0"
    "setSensorVARIO\0setSensor_VARIO\0"
    "setSensorGPS\0setSensor_GPS\0setSensorEAM\0"
    "setSensor_EAM\0setSensorGAM\0setSensor_GAM\0"
    "setSensorESC\0setSensor_ESC\0setWarning\0"
    "setWarningAltitudeBeep\0setWarning_AltitudeBeep\0"
    "setWarningMinSpeed\0setWarning_MinSpeed\0"
    "setWarningMaxSpeed\0setWarning_MaxSpeed\0"
    "setWarningNegDifference1\0"
    "setWarning_NegDifference1\0"
    "setWarningPosDifference1\0"
    "setWarning_PosDifference1\0"
    "setWarningNegDifference2\0"
    "setWarning_NegDifference2\0"
    "setWarningPosDifference2\0"
    "setWarning_PosDifference2\0setWarningMinHeight\0"
    "setWarning_MinHeight\0setWarningMaxHeight\0"
    "setWarning_MaxHeight\0setWarningMaxDistance\0"
    "setWarning_MaxDistance\0setWarningMinPowerVoltage\0"
    "setWarning_MinPowerVoltage\0"
    "setWarningMaxPowerVoltage\0"
    "setWarning_MaxPowerVoltage\0"
    "setWarningMinSensor1Voltage\0"
    "setWarning_MinSensor1Voltage\0"
    "setWarningMaxSensor1Voltage\0"
    "setWarning_MaxSensor1Voltage\0"
    "setWarningMinSensor2Voltage\0"
    "setWarning_MinSensor2Voltage\0"
    "setWarningMaxSensor2Voltage\0"
    "setWarning_MaxSensor2Voltage\0"
    "setWarningMinCellVoltage\0"
    "setWarning_MinCellVoltage\0"
    "setWarningMaxCurrent\0setWarning_MaxCurrent\0"
    "setWarningMaxUsedCapacity\0"
    "setWarning_MaxUsedCapacity\0"
    "setWarningMinSensor1Temp\0"
    "setWarning_MinSensor1Temp\0"
    "setWarningMaxSensor1Temp\0"
    "setWarning_MaxSensor1Temp\0"
    "setWarningMinSensor2Temp\0"
    "setWarning_MinSensor2Temp\0"
    "setWarningMaxSensor2Temp\0"
    "setWarning_MaxSensor2Temp\0"
    "setWarningMaxServoTemp\0setWarning_MaxServoTemp\0"
    "setWarningMinRPM\0setWarning_MinRPM\0"
    "setWarningMaxRPM\0setWarning_MaxRPM\0"
    "setWarningMinFuel\0setWarning_MinFuel\0"
    "setWarningMaxServoDifference\0"
    "setWarning_MaxServoDifference\0"
    "emitNotifications\0limit\0getLimit\0"
    "getLimit_MinSpeed\0getLimit_MaxSpeed\0"
    "getLimit_NegDifference1\0getLimit_PosDifference1\0"
    "getLimit_NegDifference2\0getLimit_PosDifference2\0"
    "getLimit_MinHeight\0getLimit_MaxHeight\0"
    "getLimit_MaxDistance\0getLimit_MinPowerVoltage\0"
    "getLimit_MaxPowerVoltage\0"
    "getLimit_MinSensor1Voltage\0"
    "getLimit_MaxSensor1Voltage\0"
    "getLimit_MinSensor2Voltage\0"
    "getLimit_MaxSensor2Voltage\0"
    "getLimit_MinCellVoltage\0getLimit_MaxCurrent\0"
    "getLimit_MaxUsedCapacity\0"
    "getLimit_MinSensor1Temp\0getLimit_MaxSensor1Temp\0"
    "getLimit_MinSensor2Temp\0getLimit_MaxSensor2Temp\0"
    "getLimit_MaxServoTemp\0getLimit_MinRPM\0"
    "getLimit_MaxRPM\0getLimit_MinFuel\0"
    "getLimit_MaxServoDifference\0sensor\0"
    "getSensor\0getSensor_VARIO\0getSensor_GPS\0"
    "getSensor_EAM\0getSensor_GAM\0getSensor_ESC\0"
    "warning\0getWarning\0getWarning_AltitudeBeep\0"
    "getWarning_MinSpeed\0getWarning_MaxSpeed\0"
    "getWarning_NegDifference1\0"
    "getWarning_PosDifference1\0"
    "getWarning_NegDifference2\0"
    "getWarning_PosDifference2\0"
    "getWarning_MinHeight\0getWarning_MaxHeight\0"
    "getWarning_MaxDistance\0"
    "getWarning_MinPowerVoltage\0"
    "getWarning_MaxPowerVoltage\0"
    "getWarning_MinSensor1Voltage\0"
    "getWarning_MaxSensor1Voltage\0"
    "getWarning_MinSensor2Voltage\0"
    "getWarning_MaxSensor2Voltage\0"
    "getWarning_MinCellVoltage\0"
    "getWarning_MaxCurrent\0getWarning_MaxUsedCapacity\0"
    "getWarning_MinSensor1Temp\0"
    "getWarning_MaxSensor1Temp\0"
    "getWarning_MinSensor2Temp\0"
    "getWarning_MaxSensor2Temp\0"
    "getWarning_MaxServoTemp\0getWarning_MinRPM\0"
    "getWarning_MaxRPM\0getWarning_MinFuel\0"
    "getWarning_MaxServoDifference\0"
    "limitMinSpeed\0limitMaxSpeed\0"
    "limitNegDifference1\0limitPosDifference1\0"
    "limitNegDifference2\0limitPosDifference2\0"
    "limitMinHeight\0limitMaxHeight\0"
    "limitMaxDistance\0limitMinPowerVoltage\0"
    "limitMaxPowerVoltage\0limitMinSensor1Voltage\0"
    "limitMaxSensor1Voltage\0limitMinSensor2Voltage\0"
    "limitMaxSensor2Voltage\0limitMinCellVoltage\0"
    "limitMaxCurrent\0limitMaxUsedCapacity\0"
    "limitMinSensor1Temp\0limitMaxSensor1Temp\0"
    "limitMinSensor2Temp\0limitMaxSensor2Temp\0"
    "limitMaxServoTemp\0limitMinRPM\0limitMaxRPM\0"
    "limitMinFuel\0limitMaxServoDifference\0"
    "sensorVARIO\0sensorGPS\0sensorEAM\0"
    "sensorGAM\0sensorESC\0warningAltitudeBeep\0"
    "warningMinSpeed\0warningMaxSpeed\0"
    "warningNegDifference1\0warningPosDifference1\0"
    "warningNegDifference2\0warningPosDifference2\0"
    "warningMinHeight\0warningMaxHeight\0"
    "warningMaxDistance\0warningMinPowerVoltage\0"
    "warningMaxPowerVoltage\0warningMinSensor1Voltage\0"
    "warningMaxSensor1Voltage\0"
    "warningMinSensor2Voltage\0"
    "warningMaxSensor2Voltage\0warningMinCellVoltage\0"
    "warningMaxCurrent\0warningMaxUsedCapacity\0"
    "warningMinSensor1Temp\0warningMaxSensor1Temp\0"
    "warningMinSensor2Temp\0warningMaxSensor2Temp\0"
    "warningMaxServoTemp\0warningMinRPM\0"
    "warningMaxRPM\0warningMinFuel\0"
    "warningMaxServoDifference\0Limit_MinSpeed\0"
    "Limit_MaxSpeed\0Limit_NegDifference1\0"
    "Limit_PosDifference1\0Limit_NegDifference2\0"
    "Limit_PosDifference2\0Limit_MinHeight\0"
    "Limit_MaxHeight\0Limit_MaxDistance\0"
    "Limit_MinPowerVoltage\0Limit_MaxPowerVoltage\0"
    "Limit_MinSensor1Voltage\0Limit_MaxSensor1Voltage\0"
    "Limit_MinSensor2Voltage\0Limit_MaxSensor2Voltage\0"
    "Limit_MinCellVoltage\0Limit_MaxCurrent\0"
    "Limit_MaxUsedCapacity\0Limit_MinSensor1Temp\0"
    "Limit_MaxSensor1Temp\0Limit_MinSensor2Temp\0"
    "Limit_MaxSensor2Temp\0Limit_MaxServoTemp\0"
    "Limit_MinRPM\0Limit_MaxRPM\0Limit_MinFuel\0"
    "Limit_MaxServoDifference\0Sensor_VARIO\0"
    "Sensor_GPS\0Sensor_EAM\0Sensor_GAM\0"
    "Sensor_ESC\0Warning_AltitudeBeep\0"
    "Warning_MinSpeed\0Warning_MaxSpeed\0"
    "Warning_NegDifference1\0Warning_PosDifference1\0"
    "Warning_NegDifference2\0Warning_PosDifference2\0"
    "Warning_MinHeight\0Warning_MaxHeight\0"
    "Warning_MaxDistance\0Warning_MinPowerVoltage\0"
    "Warning_MaxPowerVoltage\0"
    "Warning_MinSensor1Voltage\0"
    "Warning_MaxSensor1Voltage\0"
    "Warning_MinSensor2Voltage\0"
    "Warning_MaxSensor2Voltage\0"
    "Warning_MinCellVoltage\0Warning_MaxCurrent\0"
    "Warning_MaxUsedCapacity\0Warning_MinSensor1Temp\0"
    "Warning_MaxSensor1Temp\0Warning_MinSensor2Temp\0"
    "Warning_MaxSensor2Temp\0Warning_MaxServoTemp\0"
    "Warning_MinRPM\0Warning_MaxRPM\0"
    "Warning_MinFuel\0Warning_MaxServoDifference"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HoTTBridgeSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     318,   14, // methods
     120, 2458, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     126,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2, 1604,    2, 0x06 /* Public */,
       5,    2, 1609,    2, 0x06 /* Public */,
       6,    1, 1614,    2, 0x06 /* Public */,
       7,    1, 1617,    2, 0x06 /* Public */,
       8,    1, 1620,    2, 0x06 /* Public */,
       9,    1, 1623,    2, 0x06 /* Public */,
      10,    1, 1626,    2, 0x06 /* Public */,
      11,    1, 1629,    2, 0x06 /* Public */,
      12,    1, 1632,    2, 0x06 /* Public */,
      13,    1, 1635,    2, 0x06 /* Public */,
      14,    1, 1638,    2, 0x06 /* Public */,
      15,    1, 1641,    2, 0x06 /* Public */,
      16,    1, 1644,    2, 0x06 /* Public */,
      17,    1, 1647,    2, 0x06 /* Public */,
      18,    1, 1650,    2, 0x06 /* Public */,
      19,    1, 1653,    2, 0x06 /* Public */,
      20,    1, 1656,    2, 0x06 /* Public */,
      21,    1, 1659,    2, 0x06 /* Public */,
      22,    1, 1662,    2, 0x06 /* Public */,
      23,    1, 1665,    2, 0x06 /* Public */,
      24,    1, 1668,    2, 0x06 /* Public */,
      25,    1, 1671,    2, 0x06 /* Public */,
      26,    1, 1674,    2, 0x06 /* Public */,
      27,    1, 1677,    2, 0x06 /* Public */,
      28,    1, 1680,    2, 0x06 /* Public */,
      29,    1, 1683,    2, 0x06 /* Public */,
      30,    1, 1686,    2, 0x06 /* Public */,
      31,    1, 1689,    2, 0x06 /* Public */,
      32,    1, 1692,    2, 0x06 /* Public */,
      33,    1, 1695,    2, 0x06 /* Public */,
      34,    1, 1698,    2, 0x06 /* Public */,
      35,    1, 1701,    2, 0x06 /* Public */,
      36,    1, 1704,    2, 0x06 /* Public */,
      37,    1, 1707,    2, 0x06 /* Public */,
      38,    1, 1710,    2, 0x06 /* Public */,
      39,    1, 1713,    2, 0x06 /* Public */,
      40,    1, 1716,    2, 0x06 /* Public */,
      41,    1, 1719,    2, 0x06 /* Public */,
      42,    1, 1722,    2, 0x06 /* Public */,
      43,    1, 1725,    2, 0x06 /* Public */,
      44,    1, 1728,    2, 0x06 /* Public */,
      45,    1, 1731,    2, 0x06 /* Public */,
      46,    1, 1734,    2, 0x06 /* Public */,
      47,    1, 1737,    2, 0x06 /* Public */,
      48,    1, 1740,    2, 0x06 /* Public */,
      49,    1, 1743,    2, 0x06 /* Public */,
      50,    1, 1746,    2, 0x06 /* Public */,
      51,    1, 1749,    2, 0x06 /* Public */,
      52,    1, 1752,    2, 0x06 /* Public */,
      53,    1, 1755,    2, 0x06 /* Public */,
      54,    1, 1758,    2, 0x06 /* Public */,
      55,    1, 1761,    2, 0x06 /* Public */,
      56,    1, 1764,    2, 0x06 /* Public */,
      57,    1, 1767,    2, 0x06 /* Public */,
      58,    1, 1770,    2, 0x06 /* Public */,
      59,    1, 1773,    2, 0x06 /* Public */,
      60,    2, 1776,    2, 0x06 /* Public */,
      62,    2, 1781,    2, 0x06 /* Public */,
      63,    1, 1786,    2, 0x06 /* Public */,
      64,    1, 1789,    2, 0x06 /* Public */,
      65,    1, 1792,    2, 0x06 /* Public */,
      66,    1, 1795,    2, 0x06 /* Public */,
      67,    1, 1798,    2, 0x06 /* Public */,
      68,    1, 1801,    2, 0x06 /* Public */,
      69,    1, 1804,    2, 0x06 /* Public */,
      70,    1, 1807,    2, 0x06 /* Public */,
      71,    1, 1810,    2, 0x06 /* Public */,
      72,    1, 1813,    2, 0x06 /* Public */,
      73,    2, 1816,    2, 0x06 /* Public */,
      75,    2, 1821,    2, 0x06 /* Public */,
      76,    1, 1826,    2, 0x06 /* Public */,
      77,    1, 1829,    2, 0x06 /* Public */,
      78,    1, 1832,    2, 0x06 /* Public */,
      79,    1, 1835,    2, 0x06 /* Public */,
      80,    1, 1838,    2, 0x06 /* Public */,
      81,    1, 1841,    2, 0x06 /* Public */,
      82,    1, 1844,    2, 0x06 /* Public */,
      83,    1, 1847,    2, 0x06 /* Public */,
      84,    1, 1850,    2, 0x06 /* Public */,
      85,    1, 1853,    2, 0x06 /* Public */,
      86,    1, 1856,    2, 0x06 /* Public */,
      87,    1, 1859,    2, 0x06 /* Public */,
      88,    1, 1862,    2, 0x06 /* Public */,
      89,    1, 1865,    2, 0x06 /* Public */,
      90,    1, 1868,    2, 0x06 /* Public */,
      91,    1, 1871,    2, 0x06 /* Public */,
      92,    1, 1874,    2, 0x06 /* Public */,
      93,    1, 1877,    2, 0x06 /* Public */,
      94,    1, 1880,    2, 0x06 /* Public */,
      95,    1, 1883,    2, 0x06 /* Public */,
      96,    1, 1886,    2, 0x06 /* Public */,
      97,    1, 1889,    2, 0x06 /* Public */,
      98,    1, 1892,    2, 0x06 /* Public */,
      99,    1, 1895,    2, 0x06 /* Public */,
     100,    1, 1898,    2, 0x06 /* Public */,
     101,    1, 1901,    2, 0x06 /* Public */,
     102,    1, 1904,    2, 0x06 /* Public */,
     103,    1, 1907,    2, 0x06 /* Public */,
     104,    1, 1910,    2, 0x06 /* Public */,
     105,    1, 1913,    2, 0x06 /* Public */,
     106,    1, 1916,    2, 0x06 /* Public */,
     107,    1, 1919,    2, 0x06 /* Public */,
     108,    1, 1922,    2, 0x06 /* Public */,
     109,    1, 1925,    2, 0x06 /* Public */,
     110,    1, 1928,    2, 0x06 /* Public */,
     111,    1, 1931,    2, 0x06 /* Public */,
     112,    1, 1934,    2, 0x06 /* Public */,
     113,    1, 1937,    2, 0x06 /* Public */,
     114,    1, 1940,    2, 0x06 /* Public */,
     115,    1, 1943,    2, 0x06 /* Public */,
     116,    1, 1946,    2, 0x06 /* Public */,
     117,    1, 1949,    2, 0x06 /* Public */,
     118,    1, 1952,    2, 0x06 /* Public */,
     119,    1, 1955,    2, 0x06 /* Public */,
     120,    1, 1958,    2, 0x06 /* Public */,
     121,    1, 1961,    2, 0x06 /* Public */,
     122,    1, 1964,    2, 0x06 /* Public */,
     123,    1, 1967,    2, 0x06 /* Public */,
     124,    1, 1970,    2, 0x06 /* Public */,
     125,    1, 1973,    2, 0x06 /* Public */,
     126,    1, 1976,    2, 0x06 /* Public */,
     127,    1, 1979,    2, 0x06 /* Public */,
     128,    1, 1982,    2, 0x06 /* Public */,
     129,    1, 1985,    2, 0x06 /* Public */,
     130,    1, 1988,    2, 0x06 /* Public */,
     131,    1, 1991,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     132,    2, 1994,    2, 0x0a /* Public */,
     133,    1, 1999,    2, 0x0a /* Public */,
     134,    1, 2002,    2, 0x0a /* Public */,
     135,    1, 2005,    2, 0x0a /* Public */,
     136,    1, 2008,    2, 0x0a /* Public */,
     137,    1, 2011,    2, 0x0a /* Public */,
     138,    1, 2014,    2, 0x0a /* Public */,
     139,    1, 2017,    2, 0x0a /* Public */,
     140,    1, 2020,    2, 0x0a /* Public */,
     141,    1, 2023,    2, 0x0a /* Public */,
     142,    1, 2026,    2, 0x0a /* Public */,
     143,    1, 2029,    2, 0x0a /* Public */,
     144,    1, 2032,    2, 0x0a /* Public */,
     145,    1, 2035,    2, 0x0a /* Public */,
     146,    1, 2038,    2, 0x0a /* Public */,
     147,    1, 2041,    2, 0x0a /* Public */,
     148,    1, 2044,    2, 0x0a /* Public */,
     149,    1, 2047,    2, 0x0a /* Public */,
     150,    1, 2050,    2, 0x0a /* Public */,
     151,    1, 2053,    2, 0x0a /* Public */,
     152,    1, 2056,    2, 0x0a /* Public */,
     153,    1, 2059,    2, 0x0a /* Public */,
     154,    1, 2062,    2, 0x0a /* Public */,
     155,    1, 2065,    2, 0x0a /* Public */,
     156,    1, 2068,    2, 0x0a /* Public */,
     157,    1, 2071,    2, 0x0a /* Public */,
     158,    1, 2074,    2, 0x0a /* Public */,
     159,    1, 2077,    2, 0x0a /* Public */,
     160,    1, 2080,    2, 0x0a /* Public */,
     161,    1, 2083,    2, 0x0a /* Public */,
     162,    1, 2086,    2, 0x0a /* Public */,
     163,    1, 2089,    2, 0x0a /* Public */,
     164,    1, 2092,    2, 0x0a /* Public */,
     165,    1, 2095,    2, 0x0a /* Public */,
     166,    1, 2098,    2, 0x0a /* Public */,
     167,    1, 2101,    2, 0x0a /* Public */,
     168,    1, 2104,    2, 0x0a /* Public */,
     169,    1, 2107,    2, 0x0a /* Public */,
     170,    1, 2110,    2, 0x0a /* Public */,
     171,    1, 2113,    2, 0x0a /* Public */,
     172,    1, 2116,    2, 0x0a /* Public */,
     173,    1, 2119,    2, 0x0a /* Public */,
     174,    1, 2122,    2, 0x0a /* Public */,
     175,    1, 2125,    2, 0x0a /* Public */,
     176,    1, 2128,    2, 0x0a /* Public */,
     177,    1, 2131,    2, 0x0a /* Public */,
     178,    1, 2134,    2, 0x0a /* Public */,
     179,    1, 2137,    2, 0x0a /* Public */,
     180,    1, 2140,    2, 0x0a /* Public */,
     181,    1, 2143,    2, 0x0a /* Public */,
     182,    1, 2146,    2, 0x0a /* Public */,
     183,    1, 2149,    2, 0x0a /* Public */,
     184,    1, 2152,    2, 0x0a /* Public */,
     185,    1, 2155,    2, 0x0a /* Public */,
     186,    1, 2158,    2, 0x0a /* Public */,
     187,    2, 2161,    2, 0x0a /* Public */,
     187,    2, 2166,    2, 0x0a /* Public */,
     188,    1, 2171,    2, 0x0a /* Public */,
     189,    1, 2174,    2, 0x0a /* Public */,
     190,    1, 2177,    2, 0x0a /* Public */,
     191,    1, 2180,    2, 0x0a /* Public */,
     192,    1, 2183,    2, 0x0a /* Public */,
     193,    1, 2186,    2, 0x0a /* Public */,
     194,    1, 2189,    2, 0x0a /* Public */,
     195,    1, 2192,    2, 0x0a /* Public */,
     196,    1, 2195,    2, 0x0a /* Public */,
     197,    1, 2198,    2, 0x0a /* Public */,
     198,    2, 2201,    2, 0x0a /* Public */,
     198,    2, 2206,    2, 0x0a /* Public */,
     199,    1, 2211,    2, 0x0a /* Public */,
     200,    1, 2214,    2, 0x0a /* Public */,
     201,    1, 2217,    2, 0x0a /* Public */,
     202,    1, 2220,    2, 0x0a /* Public */,
     203,    1, 2223,    2, 0x0a /* Public */,
     204,    1, 2226,    2, 0x0a /* Public */,
     205,    1, 2229,    2, 0x0a /* Public */,
     206,    1, 2232,    2, 0x0a /* Public */,
     207,    1, 2235,    2, 0x0a /* Public */,
     208,    1, 2238,    2, 0x0a /* Public */,
     209,    1, 2241,    2, 0x0a /* Public */,
     210,    1, 2244,    2, 0x0a /* Public */,
     211,    1, 2247,    2, 0x0a /* Public */,
     212,    1, 2250,    2, 0x0a /* Public */,
     213,    1, 2253,    2, 0x0a /* Public */,
     214,    1, 2256,    2, 0x0a /* Public */,
     215,    1, 2259,    2, 0x0a /* Public */,
     216,    1, 2262,    2, 0x0a /* Public */,
     217,    1, 2265,    2, 0x0a /* Public */,
     218,    1, 2268,    2, 0x0a /* Public */,
     219,    1, 2271,    2, 0x0a /* Public */,
     220,    1, 2274,    2, 0x0a /* Public */,
     221,    1, 2277,    2, 0x0a /* Public */,
     222,    1, 2280,    2, 0x0a /* Public */,
     223,    1, 2283,    2, 0x0a /* Public */,
     224,    1, 2286,    2, 0x0a /* Public */,
     225,    1, 2289,    2, 0x0a /* Public */,
     226,    1, 2292,    2, 0x0a /* Public */,
     227,    1, 2295,    2, 0x0a /* Public */,
     228,    1, 2298,    2, 0x0a /* Public */,
     229,    1, 2301,    2, 0x0a /* Public */,
     230,    1, 2304,    2, 0x0a /* Public */,
     231,    1, 2307,    2, 0x0a /* Public */,
     232,    1, 2310,    2, 0x0a /* Public */,
     233,    1, 2313,    2, 0x0a /* Public */,
     234,    1, 2316,    2, 0x0a /* Public */,
     235,    1, 2319,    2, 0x0a /* Public */,
     236,    1, 2322,    2, 0x0a /* Public */,
     237,    1, 2325,    2, 0x0a /* Public */,
     238,    1, 2328,    2, 0x0a /* Public */,
     239,    1, 2331,    2, 0x0a /* Public */,
     240,    1, 2334,    2, 0x0a /* Public */,
     241,    1, 2337,    2, 0x0a /* Public */,
     242,    1, 2340,    2, 0x0a /* Public */,
     243,    1, 2343,    2, 0x0a /* Public */,
     244,    1, 2346,    2, 0x0a /* Public */,
     245,    1, 2349,    2, 0x0a /* Public */,
     246,    1, 2352,    2, 0x0a /* Public */,
     247,    1, 2355,    2, 0x0a /* Public */,
     248,    1, 2358,    2, 0x0a /* Public */,
     249,    1, 2361,    2, 0x0a /* Public */,
     250,    1, 2364,    2, 0x0a /* Public */,
     251,    1, 2367,    2, 0x0a /* Public */,
     252,    1, 2370,    2, 0x0a /* Public */,
     253,    1, 2373,    2, 0x0a /* Public */,
     254,    1, 2376,    2, 0x0a /* Public */,
     255,    0, 2379,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     256,    1, 2380,    2, 0x02 /* Public */,
     257,    1, 2383,    2, 0x02 /* Public */,
     258,    0, 2386,    2, 0x02 /* Public */,
     259,    0, 2387,    2, 0x02 /* Public */,
     260,    0, 2388,    2, 0x02 /* Public */,
     261,    0, 2389,    2, 0x02 /* Public */,
     262,    0, 2390,    2, 0x02 /* Public */,
     263,    0, 2391,    2, 0x02 /* Public */,
     264,    0, 2392,    2, 0x02 /* Public */,
     265,    0, 2393,    2, 0x02 /* Public */,
     266,    0, 2394,    2, 0x02 /* Public */,
     267,    0, 2395,    2, 0x02 /* Public */,
     268,    0, 2396,    2, 0x02 /* Public */,
     269,    0, 2397,    2, 0x02 /* Public */,
     270,    0, 2398,    2, 0x02 /* Public */,
     271,    0, 2399,    2, 0x02 /* Public */,
     272,    0, 2400,    2, 0x02 /* Public */,
     273,    0, 2401,    2, 0x02 /* Public */,
     274,    0, 2402,    2, 0x02 /* Public */,
     275,    0, 2403,    2, 0x02 /* Public */,
     276,    0, 2404,    2, 0x02 /* Public */,
     277,    0, 2405,    2, 0x02 /* Public */,
     278,    0, 2406,    2, 0x02 /* Public */,
     279,    0, 2407,    2, 0x02 /* Public */,
     280,    0, 2408,    2, 0x02 /* Public */,
     281,    0, 2409,    2, 0x02 /* Public */,
     282,    0, 2410,    2, 0x02 /* Public */,
     283,    0, 2411,    2, 0x02 /* Public */,
     284,    0, 2412,    2, 0x02 /* Public */,
     285,    1, 2413,    2, 0x02 /* Public */,
     286,    1, 2416,    2, 0x02 /* Public */,
     287,    0, 2419,    2, 0x02 /* Public */,
     288,    0, 2420,    2, 0x02 /* Public */,
     289,    0, 2421,    2, 0x02 /* Public */,
     290,    0, 2422,    2, 0x02 /* Public */,
     291,    0, 2423,    2, 0x02 /* Public */,
     292,    1, 2424,    2, 0x02 /* Public */,
     293,    1, 2427,    2, 0x02 /* Public */,
     294,    0, 2430,    2, 0x02 /* Public */,
     295,    0, 2431,    2, 0x02 /* Public */,
     296,    0, 2432,    2, 0x02 /* Public */,
     297,    0, 2433,    2, 0x02 /* Public */,
     298,    0, 2434,    2, 0x02 /* Public */,
     299,    0, 2435,    2, 0x02 /* Public */,
     300,    0, 2436,    2, 0x02 /* Public */,
     301,    0, 2437,    2, 0x02 /* Public */,
     302,    0, 2438,    2, 0x02 /* Public */,
     303,    0, 2439,    2, 0x02 /* Public */,
     304,    0, 2440,    2, 0x02 /* Public */,
     305,    0, 2441,    2, 0x02 /* Public */,
     306,    0, 2442,    2, 0x02 /* Public */,
     307,    0, 2443,    2, 0x02 /* Public */,
     308,    0, 2444,    2, 0x02 /* Public */,
     309,    0, 2445,    2, 0x02 /* Public */,
     310,    0, 2446,    2, 0x02 /* Public */,
     311,    0, 2447,    2, 0x02 /* Public */,
     312,    0, 2448,    2, 0x02 /* Public */,
     313,    0, 2449,    2, 0x02 /* Public */,
     314,    0, 2450,    2, 0x02 /* Public */,
     315,    0, 2451,    2, 0x02 /* Public */,
     316,    0, 2452,    2, 0x02 /* Public */,
     317,    0, 2453,    2, 0x02 /* Public */,
     318,    0, 2454,    2, 0x02 /* Public */,
     319,    0, 2455,    2, 0x02 /* Public */,
     320,    0, 2456,    2, 0x02 /* Public */,
     321,    0, 2457,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 61,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 61,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 61,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 61,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 61,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 61,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 74,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
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
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 61,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 61,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 61,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 61,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 61,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 61,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 74,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 74,    4,
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
    0x80000000 | 61, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    0x80000000 | 74, QMetaType::UInt,    3,
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
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
     322, QMetaType::Float, 0x00495103,
     323, QMetaType::Float, 0x00495103,
     324, QMetaType::Float, 0x00495103,
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
     349, 0x80000000 | 61, 0x0049510b,
     350, 0x80000000 | 61, 0x0049510b,
     351, 0x80000000 | 61, 0x0049510b,
     352, 0x80000000 | 61, 0x0049510b,
     353, 0x80000000 | 61, 0x0049510b,
     354, 0x80000000 | 74, 0x0049510b,
     355, 0x80000000 | 74, 0x0049510b,
     356, 0x80000000 | 74, 0x0049510b,
     357, 0x80000000 | 74, 0x0049510b,
     358, 0x80000000 | 74, 0x0049510b,
     359, 0x80000000 | 74, 0x0049510b,
     360, 0x80000000 | 74, 0x0049510b,
     361, 0x80000000 | 74, 0x0049510b,
     362, 0x80000000 | 74, 0x0049510b,
     363, 0x80000000 | 74, 0x0049510b,
     364, 0x80000000 | 74, 0x0049510b,
     365, 0x80000000 | 74, 0x0049510b,
     366, 0x80000000 | 74, 0x0049510b,
     367, 0x80000000 | 74, 0x0049510b,
     368, 0x80000000 | 74, 0x0049510b,
     369, 0x80000000 | 74, 0x0049510b,
     370, 0x80000000 | 74, 0x0049510b,
     371, 0x80000000 | 74, 0x0049510b,
     372, 0x80000000 | 74, 0x0049510b,
     373, 0x80000000 | 74, 0x0049510b,
     374, 0x80000000 | 74, 0x0049510b,
     375, 0x80000000 | 74, 0x0049510b,
     376, 0x80000000 | 74, 0x0049510b,
     377, 0x80000000 | 74, 0x0049510b,
     378, 0x80000000 | 74, 0x0049510b,
     379, 0x80000000 | 74, 0x0049510b,
     380, 0x80000000 | 74, 0x0049510b,
     381, 0x80000000 | 74, 0x0049510b,
     382, QMetaType::Float, 0x00495103,
     383, QMetaType::Float, 0x00495103,
     384, QMetaType::Float, 0x00495103,
     385, QMetaType::Float, 0x00495103,
     386, QMetaType::Float, 0x00495103,
     387, QMetaType::Float, 0x00495103,
     388, QMetaType::Float, 0x00495103,
     389, QMetaType::Float, 0x00495103,
     390, QMetaType::Float, 0x00495103,
     391, QMetaType::Float, 0x00495103,
     392, QMetaType::Float, 0x00495103,
     393, QMetaType::Float, 0x00495103,
     394, QMetaType::Float, 0x00495103,
     395, QMetaType::Float, 0x00495103,
     396, QMetaType::Float, 0x00495103,
     397, QMetaType::Float, 0x00495103,
     398, QMetaType::Float, 0x00495103,
     399, QMetaType::Float, 0x00495103,
     400, QMetaType::Float, 0x00495103,
     401, QMetaType::Float, 0x00495103,
     402, QMetaType::Float, 0x00495103,
     403, QMetaType::Float, 0x00495103,
     404, QMetaType::Float, 0x00495103,
     405, QMetaType::Float, 0x00495103,
     406, QMetaType::Float, 0x00495103,
     407, QMetaType::Float, 0x00495103,
     408, QMetaType::Float, 0x00495103,
     409, QMetaType::UChar, 0x00495103,
     410, QMetaType::UChar, 0x00495103,
     411, QMetaType::UChar, 0x00495103,
     412, QMetaType::UChar, 0x00495103,
     413, QMetaType::UChar, 0x00495103,
     414, QMetaType::UChar, 0x00495103,
     415, QMetaType::UChar, 0x00495103,
     416, QMetaType::UChar, 0x00495103,
     417, QMetaType::UChar, 0x00495103,
     418, QMetaType::UChar, 0x00495103,
     419, QMetaType::UChar, 0x00495103,
     420, QMetaType::UChar, 0x00495103,
     421, QMetaType::UChar, 0x00495103,
     422, QMetaType::UChar, 0x00495103,
     423, QMetaType::UChar, 0x00495103,
     424, QMetaType::UChar, 0x00495103,
     425, QMetaType::UChar, 0x00495103,
     426, QMetaType::UChar, 0x00495103,
     427, QMetaType::UChar, 0x00495103,
     428, QMetaType::UChar, 0x00495103,
     429, QMetaType::UChar, 0x00495103,
     430, QMetaType::UChar, 0x00495103,
     431, QMetaType::UChar, 0x00495103,
     432, QMetaType::UChar, 0x00495103,
     433, QMetaType::UChar, 0x00495103,
     434, QMetaType::UChar, 0x00495103,
     435, QMetaType::UChar, 0x00495103,
     436, QMetaType::UChar, 0x00495103,
     437, QMetaType::UChar, 0x00495103,
     438, QMetaType::UChar, 0x00495103,
     439, QMetaType::UChar, 0x00495103,
     440, QMetaType::UChar, 0x00495103,
     441, QMetaType::UChar, 0x00495103,

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
      46,
      48,
      50,
      52,
      54,
      58,
      60,
      62,
      64,
      66,
      70,
      72,
      74,
      76,
      78,
      80,
      82,
      84,
      86,
      88,
      90,
      92,
      94,
      96,
      98,
     100,
     102,
     104,
     106,
     108,
     110,
     112,
     114,
     116,
     118,
     120,
     122,
     124,
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
      47,
      49,
      51,
      53,
      55,
      59,
      61,
      63,
      65,
      67,
      71,
      73,
      75,
      77,
      79,
      81,
      83,
      85,
      87,
      89,
      91,
      93,
      95,
      97,
      99,
     101,
     103,
     105,
     107,
     109,
     111,
     113,
     115,
     117,
     119,
     121,
     123,
     125,

       0        // eod
};

void HoTTBridgeSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HoTTBridgeSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->limitChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->LimitChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->limitMinSpeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->Limit_MinSpeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->limitMaxSpeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->Limit_MaxSpeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->limitNegDifference1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->Limit_NegDifference1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->limitPosDifference1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->Limit_PosDifference1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->limitNegDifference2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->Limit_NegDifference2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->limitPosDifference2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->Limit_PosDifference2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->limitMinHeightChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->Limit_MinHeightChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->limitMaxHeightChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->Limit_MaxHeightChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->limitMaxDistanceChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->Limit_MaxDistanceChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->limitMinPowerVoltageChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->Limit_MinPowerVoltageChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->limitMaxPowerVoltageChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->Limit_MaxPowerVoltageChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->limitMinSensor1VoltageChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->Limit_MinSensor1VoltageChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->limitMaxSensor1VoltageChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->Limit_MaxSensor1VoltageChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->limitMinSensor2VoltageChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 29: _t->Limit_MinSensor2VoltageChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->limitMaxSensor2VoltageChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 31: _t->Limit_MaxSensor2VoltageChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 32: _t->limitMinCellVoltageChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 33: _t->Limit_MinCellVoltageChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 34: _t->limitMaxCurrentChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->Limit_MaxCurrentChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 36: _t->limitMaxUsedCapacityChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 37: _t->Limit_MaxUsedCapacityChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->limitMinSensor1TempChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 39: _t->Limit_MinSensor1TempChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->limitMaxSensor1TempChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 41: _t->Limit_MaxSensor1TempChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->limitMinSensor2TempChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 43: _t->Limit_MinSensor2TempChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->limitMaxSensor2TempChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 45: _t->Limit_MaxSensor2TempChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->limitMaxServoTempChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->Limit_MaxServoTempChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->limitMinRPMChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 49: _t->Limit_MinRPMChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 50: _t->limitMaxRPMChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 51: _t->Limit_MaxRPMChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 52: _t->limitMinFuelChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 53: _t->Limit_MinFuelChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 54: _t->limitMaxServoDifferenceChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 55: _t->Limit_MaxServoDifferenceChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 56: _t->sensorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const HoTTBridgeSettings_Sensor::Enum(*)>(_a[2]))); break;
        case 57: _t->SensorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 58: _t->sensorVARIOChanged((*reinterpret_cast< const HoTTBridgeSettings_Sensor::Enum(*)>(_a[1]))); break;
        case 59: _t->Sensor_VARIOChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 60: _t->sensorGPSChanged((*reinterpret_cast< const HoTTBridgeSettings_Sensor::Enum(*)>(_a[1]))); break;
        case 61: _t->Sensor_GPSChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 62: _t->sensorEAMChanged((*reinterpret_cast< const HoTTBridgeSettings_Sensor::Enum(*)>(_a[1]))); break;
        case 63: _t->Sensor_EAMChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 64: _t->sensorGAMChanged((*reinterpret_cast< const HoTTBridgeSettings_Sensor::Enum(*)>(_a[1]))); break;
        case 65: _t->Sensor_GAMChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 66: _t->sensorESCChanged((*reinterpret_cast< const HoTTBridgeSettings_Sensor::Enum(*)>(_a[1]))); break;
        case 67: _t->Sensor_ESCChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 68: _t->warningChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[2]))); break;
        case 69: _t->WarningChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 70: _t->warningAltitudeBeepChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 71: _t->Warning_AltitudeBeepChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 72: _t->warningMinSpeedChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 73: _t->Warning_MinSpeedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 74: _t->warningMaxSpeedChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 75: _t->Warning_MaxSpeedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 76: _t->warningNegDifference1Changed((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 77: _t->Warning_NegDifference1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 78: _t->warningPosDifference1Changed((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 79: _t->Warning_PosDifference1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 80: _t->warningNegDifference2Changed((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 81: _t->Warning_NegDifference2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 82: _t->warningPosDifference2Changed((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 83: _t->Warning_PosDifference2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 84: _t->warningMinHeightChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 85: _t->Warning_MinHeightChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 86: _t->warningMaxHeightChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 87: _t->Warning_MaxHeightChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 88: _t->warningMaxDistanceChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 89: _t->Warning_MaxDistanceChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 90: _t->warningMinPowerVoltageChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 91: _t->Warning_MinPowerVoltageChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 92: _t->warningMaxPowerVoltageChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 93: _t->Warning_MaxPowerVoltageChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 94: _t->warningMinSensor1VoltageChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 95: _t->Warning_MinSensor1VoltageChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 96: _t->warningMaxSensor1VoltageChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 97: _t->Warning_MaxSensor1VoltageChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 98: _t->warningMinSensor2VoltageChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 99: _t->Warning_MinSensor2VoltageChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 100: _t->warningMaxSensor2VoltageChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 101: _t->Warning_MaxSensor2VoltageChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 102: _t->warningMinCellVoltageChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 103: _t->Warning_MinCellVoltageChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->warningMaxCurrentChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 105: _t->Warning_MaxCurrentChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 106: _t->warningMaxUsedCapacityChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 107: _t->Warning_MaxUsedCapacityChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 108: _t->warningMinSensor1TempChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 109: _t->Warning_MinSensor1TempChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 110: _t->warningMaxSensor1TempChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 111: _t->Warning_MaxSensor1TempChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 112: _t->warningMinSensor2TempChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 113: _t->Warning_MinSensor2TempChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 114: _t->warningMaxSensor2TempChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 115: _t->Warning_MaxSensor2TempChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 116: _t->warningMaxServoTempChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 117: _t->Warning_MaxServoTempChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 118: _t->warningMinRPMChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 119: _t->Warning_MinRPMChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 120: _t->warningMaxRPMChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 121: _t->Warning_MaxRPMChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 122: _t->warningMinFuelChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 123: _t->Warning_MinFuelChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 124: _t->warningMaxServoDifferenceChanged((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 125: _t->Warning_MaxServoDifferenceChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 126: _t->setLimit((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 127: _t->setLimitMinSpeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 128: _t->setLimit_MinSpeed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 129: _t->setLimitMaxSpeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 130: _t->setLimit_MaxSpeed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 131: _t->setLimitNegDifference1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 132: _t->setLimit_NegDifference1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 133: _t->setLimitPosDifference1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 134: _t->setLimit_PosDifference1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 135: _t->setLimitNegDifference2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 136: _t->setLimit_NegDifference2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 137: _t->setLimitPosDifference2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 138: _t->setLimit_PosDifference2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 139: _t->setLimitMinHeight((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 140: _t->setLimit_MinHeight((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 141: _t->setLimitMaxHeight((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 142: _t->setLimit_MaxHeight((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 143: _t->setLimitMaxDistance((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 144: _t->setLimit_MaxDistance((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 145: _t->setLimitMinPowerVoltage((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 146: _t->setLimit_MinPowerVoltage((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 147: _t->setLimitMaxPowerVoltage((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 148: _t->setLimit_MaxPowerVoltage((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 149: _t->setLimitMinSensor1Voltage((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 150: _t->setLimit_MinSensor1Voltage((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 151: _t->setLimitMaxSensor1Voltage((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 152: _t->setLimit_MaxSensor1Voltage((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 153: _t->setLimitMinSensor2Voltage((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 154: _t->setLimit_MinSensor2Voltage((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 155: _t->setLimitMaxSensor2Voltage((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 156: _t->setLimit_MaxSensor2Voltage((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 157: _t->setLimitMinCellVoltage((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 158: _t->setLimit_MinCellVoltage((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 159: _t->setLimitMaxCurrent((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 160: _t->setLimit_MaxCurrent((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 161: _t->setLimitMaxUsedCapacity((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 162: _t->setLimit_MaxUsedCapacity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 163: _t->setLimitMinSensor1Temp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 164: _t->setLimit_MinSensor1Temp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 165: _t->setLimitMaxSensor1Temp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 166: _t->setLimit_MaxSensor1Temp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 167: _t->setLimitMinSensor2Temp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 168: _t->setLimit_MinSensor2Temp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 169: _t->setLimitMaxSensor2Temp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 170: _t->setLimit_MaxSensor2Temp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 171: _t->setLimitMaxServoTemp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 172: _t->setLimit_MaxServoTemp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 173: _t->setLimitMinRPM((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 174: _t->setLimit_MinRPM((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 175: _t->setLimitMaxRPM((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 176: _t->setLimit_MaxRPM((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 177: _t->setLimitMinFuel((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 178: _t->setLimit_MinFuel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 179: _t->setLimitMaxServoDifference((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 180: _t->setLimit_MaxServoDifference((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 181: _t->setSensor((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const HoTTBridgeSettings_Sensor::Enum(*)>(_a[2]))); break;
        case 182: _t->setSensor((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 183: _t->setSensorVARIO((*reinterpret_cast< const HoTTBridgeSettings_Sensor::Enum(*)>(_a[1]))); break;
        case 184: _t->setSensor_VARIO((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 185: _t->setSensorGPS((*reinterpret_cast< const HoTTBridgeSettings_Sensor::Enum(*)>(_a[1]))); break;
        case 186: _t->setSensor_GPS((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 187: _t->setSensorEAM((*reinterpret_cast< const HoTTBridgeSettings_Sensor::Enum(*)>(_a[1]))); break;
        case 188: _t->setSensor_EAM((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 189: _t->setSensorGAM((*reinterpret_cast< const HoTTBridgeSettings_Sensor::Enum(*)>(_a[1]))); break;
        case 190: _t->setSensor_GAM((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 191: _t->setSensorESC((*reinterpret_cast< const HoTTBridgeSettings_Sensor::Enum(*)>(_a[1]))); break;
        case 192: _t->setSensor_ESC((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 193: _t->setWarning((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[2]))); break;
        case 194: _t->setWarning((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 195: _t->setWarningAltitudeBeep((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 196: _t->setWarning_AltitudeBeep((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 197: _t->setWarningMinSpeed((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 198: _t->setWarning_MinSpeed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 199: _t->setWarningMaxSpeed((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 200: _t->setWarning_MaxSpeed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 201: _t->setWarningNegDifference1((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 202: _t->setWarning_NegDifference1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 203: _t->setWarningPosDifference1((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 204: _t->setWarning_PosDifference1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 205: _t->setWarningNegDifference2((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 206: _t->setWarning_NegDifference2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 207: _t->setWarningPosDifference2((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 208: _t->setWarning_PosDifference2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 209: _t->setWarningMinHeight((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 210: _t->setWarning_MinHeight((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 211: _t->setWarningMaxHeight((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 212: _t->setWarning_MaxHeight((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 213: _t->setWarningMaxDistance((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 214: _t->setWarning_MaxDistance((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 215: _t->setWarningMinPowerVoltage((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 216: _t->setWarning_MinPowerVoltage((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 217: _t->setWarningMaxPowerVoltage((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 218: _t->setWarning_MaxPowerVoltage((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 219: _t->setWarningMinSensor1Voltage((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 220: _t->setWarning_MinSensor1Voltage((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 221: _t->setWarningMaxSensor1Voltage((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 222: _t->setWarning_MaxSensor1Voltage((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 223: _t->setWarningMinSensor2Voltage((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 224: _t->setWarning_MinSensor2Voltage((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 225: _t->setWarningMaxSensor2Voltage((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 226: _t->setWarning_MaxSensor2Voltage((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 227: _t->setWarningMinCellVoltage((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 228: _t->setWarning_MinCellVoltage((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 229: _t->setWarningMaxCurrent((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 230: _t->setWarning_MaxCurrent((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 231: _t->setWarningMaxUsedCapacity((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 232: _t->setWarning_MaxUsedCapacity((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 233: _t->setWarningMinSensor1Temp((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 234: _t->setWarning_MinSensor1Temp((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 235: _t->setWarningMaxSensor1Temp((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 236: _t->setWarning_MaxSensor1Temp((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 237: _t->setWarningMinSensor2Temp((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 238: _t->setWarning_MinSensor2Temp((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 239: _t->setWarningMaxSensor2Temp((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 240: _t->setWarning_MaxSensor2Temp((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 241: _t->setWarningMaxServoTemp((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 242: _t->setWarning_MaxServoTemp((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 243: _t->setWarningMinRPM((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 244: _t->setWarning_MinRPM((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 245: _t->setWarningMaxRPM((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 246: _t->setWarning_MaxRPM((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 247: _t->setWarningMinFuel((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 248: _t->setWarning_MinFuel((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 249: _t->setWarningMaxServoDifference((*reinterpret_cast< const HoTTBridgeSettings_Warning::Enum(*)>(_a[1]))); break;
        case 250: _t->setWarning_MaxServoDifference((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 251: _t->emitNotifications(); break;
        case 252: { float _r = _t->limit((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 253: { float _r = _t->getLimit((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 254: { float _r = _t->getLimit_MinSpeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 255: { float _r = _t->getLimit_MaxSpeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 256: { float _r = _t->getLimit_NegDifference1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 257: { float _r = _t->getLimit_PosDifference1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 258: { float _r = _t->getLimit_NegDifference2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 259: { float _r = _t->getLimit_PosDifference2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 260: { float _r = _t->getLimit_MinHeight();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 261: { float _r = _t->getLimit_MaxHeight();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 262: { float _r = _t->getLimit_MaxDistance();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 263: { float _r = _t->getLimit_MinPowerVoltage();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 264: { float _r = _t->getLimit_MaxPowerVoltage();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 265: { float _r = _t->getLimit_MinSensor1Voltage();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 266: { float _r = _t->getLimit_MaxSensor1Voltage();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 267: { float _r = _t->getLimit_MinSensor2Voltage();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 268: { float _r = _t->getLimit_MaxSensor2Voltage();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 269: { float _r = _t->getLimit_MinCellVoltage();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 270: { float _r = _t->getLimit_MaxCurrent();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 271: { float _r = _t->getLimit_MaxUsedCapacity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 272: { float _r = _t->getLimit_MinSensor1Temp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 273: { float _r = _t->getLimit_MaxSensor1Temp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 274: { float _r = _t->getLimit_MinSensor2Temp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 275: { float _r = _t->getLimit_MaxSensor2Temp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 276: { float _r = _t->getLimit_MaxServoTemp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 277: { float _r = _t->getLimit_MinRPM();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 278: { float _r = _t->getLimit_MaxRPM();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 279: { float _r = _t->getLimit_MinFuel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 280: { float _r = _t->getLimit_MaxServoDifference();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 281: { HoTTBridgeSettings_Sensor::Enum _r = _t->sensor((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< HoTTBridgeSettings_Sensor::Enum*>(_a[0]) = std::move(_r); }  break;
        case 282: { quint8 _r = _t->getSensor((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 283: { quint8 _r = _t->getSensor_VARIO();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 284: { quint8 _r = _t->getSensor_GPS();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 285: { quint8 _r = _t->getSensor_EAM();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 286: { quint8 _r = _t->getSensor_GAM();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 287: { quint8 _r = _t->getSensor_ESC();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 288: { HoTTBridgeSettings_Warning::Enum _r = _t->warning((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_a[0]) = std::move(_r); }  break;
        case 289: { quint8 _r = _t->getWarning((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 290: { quint8 _r = _t->getWarning_AltitudeBeep();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 291: { quint8 _r = _t->getWarning_MinSpeed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 292: { quint8 _r = _t->getWarning_MaxSpeed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 293: { quint8 _r = _t->getWarning_NegDifference1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 294: { quint8 _r = _t->getWarning_PosDifference1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 295: { quint8 _r = _t->getWarning_NegDifference2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 296: { quint8 _r = _t->getWarning_PosDifference2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 297: { quint8 _r = _t->getWarning_MinHeight();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 298: { quint8 _r = _t->getWarning_MaxHeight();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 299: { quint8 _r = _t->getWarning_MaxDistance();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 300: { quint8 _r = _t->getWarning_MinPowerVoltage();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 301: { quint8 _r = _t->getWarning_MaxPowerVoltage();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 302: { quint8 _r = _t->getWarning_MinSensor1Voltage();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 303: { quint8 _r = _t->getWarning_MaxSensor1Voltage();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 304: { quint8 _r = _t->getWarning_MinSensor2Voltage();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 305: { quint8 _r = _t->getWarning_MaxSensor2Voltage();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 306: { quint8 _r = _t->getWarning_MinCellVoltage();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 307: { quint8 _r = _t->getWarning_MaxCurrent();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 308: { quint8 _r = _t->getWarning_MaxUsedCapacity();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 309: { quint8 _r = _t->getWarning_MinSensor1Temp();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 310: { quint8 _r = _t->getWarning_MaxSensor1Temp();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 311: { quint8 _r = _t->getWarning_MinSensor2Temp();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 312: { quint8 _r = _t->getWarning_MaxSensor2Temp();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 313: { quint8 _r = _t->getWarning_MaxServoTemp();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 314: { quint8 _r = _t->getWarning_MinRPM();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 315: { quint8 _r = _t->getWarning_MaxRPM();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 316: { quint8 _r = _t->getWarning_MinFuel();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 317: { quint8 _r = _t->getWarning_MaxServoDifference();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HoTTBridgeSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::LimitChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMinSpeedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MinSpeedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxSpeedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxSpeedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitNegDifference1Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_NegDifference1Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitPosDifference1Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_PosDifference1Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitNegDifference2Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_NegDifference2Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitPosDifference2Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_PosDifference2Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMinHeightChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MinHeightChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxHeightChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxHeightChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxDistanceChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxDistanceChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMinPowerVoltageChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MinPowerVoltageChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxPowerVoltageChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxPowerVoltageChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMinSensor1VoltageChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MinSensor1VoltageChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxSensor1VoltageChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxSensor1VoltageChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMinSensor2VoltageChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MinSensor2VoltageChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxSensor2VoltageChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxSensor2VoltageChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMinCellVoltageChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MinCellVoltageChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxCurrentChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxCurrentChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxUsedCapacityChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxUsedCapacityChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMinSensor1TempChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MinSensor1TempChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxSensor1TempChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxSensor1TempChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMinSensor2TempChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MinSensor2TempChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxSensor2TempChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxSensor2TempChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxServoTempChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxServoTempChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMinRPMChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MinRPMChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxRPMChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxRPMChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMinFuelChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MinFuelChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::limitMaxServoDifferenceChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Limit_MaxServoDifferenceChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint32 , const HoTTBridgeSettings_Sensor::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::sensorChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::SensorChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Sensor::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::sensorVARIOChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Sensor_VARIOChanged)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Sensor::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::sensorGPSChanged)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Sensor_GPSChanged)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Sensor::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::sensorEAMChanged)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Sensor_EAMChanged)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Sensor::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::sensorGAMChanged)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Sensor_GAMChanged)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Sensor::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::sensorESCChanged)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Sensor_ESCChanged)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint32 , const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningChanged)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::WarningChanged)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningAltitudeBeepChanged)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_AltitudeBeepChanged)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMinSpeedChanged)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MinSpeedChanged)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxSpeedChanged)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxSpeedChanged)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningNegDifference1Changed)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_NegDifference1Changed)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningPosDifference1Changed)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_PosDifference1Changed)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningNegDifference2Changed)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_NegDifference2Changed)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningPosDifference2Changed)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_PosDifference2Changed)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMinHeightChanged)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MinHeightChanged)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxHeightChanged)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxHeightChanged)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxDistanceChanged)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxDistanceChanged)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMinPowerVoltageChanged)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MinPowerVoltageChanged)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxPowerVoltageChanged)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxPowerVoltageChanged)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMinSensor1VoltageChanged)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MinSensor1VoltageChanged)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxSensor1VoltageChanged)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxSensor1VoltageChanged)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMinSensor2VoltageChanged)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MinSensor2VoltageChanged)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxSensor2VoltageChanged)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxSensor2VoltageChanged)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMinCellVoltageChanged)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MinCellVoltageChanged)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxCurrentChanged)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxCurrentChanged)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxUsedCapacityChanged)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxUsedCapacityChanged)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMinSensor1TempChanged)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MinSensor1TempChanged)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxSensor1TempChanged)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxSensor1TempChanged)) {
                *result = 111;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMinSensor2TempChanged)) {
                *result = 112;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MinSensor2TempChanged)) {
                *result = 113;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxSensor2TempChanged)) {
                *result = 114;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxSensor2TempChanged)) {
                *result = 115;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxServoTempChanged)) {
                *result = 116;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxServoTempChanged)) {
                *result = 117;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMinRPMChanged)) {
                *result = 118;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MinRPMChanged)) {
                *result = 119;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxRPMChanged)) {
                *result = 120;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxRPMChanged)) {
                *result = 121;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMinFuelChanged)) {
                *result = 122;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MinFuelChanged)) {
                *result = 123;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(const HoTTBridgeSettings_Warning::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::warningMaxServoDifferenceChanged)) {
                *result = 124;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeSettings::Warning_MaxServoDifferenceChanged)) {
                *result = 125;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HoTTBridgeSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->limitMinSpeed(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->limitMaxSpeed(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->limitNegDifference1(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->limitPosDifference1(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->limitNegDifference2(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->limitPosDifference2(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->limitMinHeight(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->limitMaxHeight(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->limitMaxDistance(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->limitMinPowerVoltage(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->limitMaxPowerVoltage(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->limitMinSensor1Voltage(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->limitMaxSensor1Voltage(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->limitMinSensor2Voltage(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->limitMaxSensor2Voltage(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->limitMinCellVoltage(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->limitMaxCurrent(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->limitMaxUsedCapacity(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->limitMinSensor1Temp(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->limitMaxSensor1Temp(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->limitMinSensor2Temp(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->limitMaxSensor2Temp(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->limitMaxServoTemp(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->limitMinRPM(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->limitMaxRPM(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->limitMinFuel(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->limitMaxServoDifference(); break;
        case 27: *reinterpret_cast< HoTTBridgeSettings_Sensor::Enum*>(_v) = _t->sensorVARIO(); break;
        case 28: *reinterpret_cast< HoTTBridgeSettings_Sensor::Enum*>(_v) = _t->sensorGPS(); break;
        case 29: *reinterpret_cast< HoTTBridgeSettings_Sensor::Enum*>(_v) = _t->sensorEAM(); break;
        case 30: *reinterpret_cast< HoTTBridgeSettings_Sensor::Enum*>(_v) = _t->sensorGAM(); break;
        case 31: *reinterpret_cast< HoTTBridgeSettings_Sensor::Enum*>(_v) = _t->sensorESC(); break;
        case 32: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningAltitudeBeep(); break;
        case 33: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMinSpeed(); break;
        case 34: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxSpeed(); break;
        case 35: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningNegDifference1(); break;
        case 36: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningPosDifference1(); break;
        case 37: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningNegDifference2(); break;
        case 38: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningPosDifference2(); break;
        case 39: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMinHeight(); break;
        case 40: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxHeight(); break;
        case 41: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxDistance(); break;
        case 42: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMinPowerVoltage(); break;
        case 43: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxPowerVoltage(); break;
        case 44: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMinSensor1Voltage(); break;
        case 45: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxSensor1Voltage(); break;
        case 46: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMinSensor2Voltage(); break;
        case 47: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxSensor2Voltage(); break;
        case 48: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMinCellVoltage(); break;
        case 49: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxCurrent(); break;
        case 50: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxUsedCapacity(); break;
        case 51: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMinSensor1Temp(); break;
        case 52: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxSensor1Temp(); break;
        case 53: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMinSensor2Temp(); break;
        case 54: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxSensor2Temp(); break;
        case 55: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxServoTemp(); break;
        case 56: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMinRPM(); break;
        case 57: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxRPM(); break;
        case 58: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMinFuel(); break;
        case 59: *reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v) = _t->warningMaxServoDifference(); break;
        case 60: *reinterpret_cast< float*>(_v) = _t->getLimit_MinSpeed(); break;
        case 61: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxSpeed(); break;
        case 62: *reinterpret_cast< float*>(_v) = _t->getLimit_NegDifference1(); break;
        case 63: *reinterpret_cast< float*>(_v) = _t->getLimit_PosDifference1(); break;
        case 64: *reinterpret_cast< float*>(_v) = _t->getLimit_NegDifference2(); break;
        case 65: *reinterpret_cast< float*>(_v) = _t->getLimit_PosDifference2(); break;
        case 66: *reinterpret_cast< float*>(_v) = _t->getLimit_MinHeight(); break;
        case 67: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxHeight(); break;
        case 68: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxDistance(); break;
        case 69: *reinterpret_cast< float*>(_v) = _t->getLimit_MinPowerVoltage(); break;
        case 70: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxPowerVoltage(); break;
        case 71: *reinterpret_cast< float*>(_v) = _t->getLimit_MinSensor1Voltage(); break;
        case 72: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxSensor1Voltage(); break;
        case 73: *reinterpret_cast< float*>(_v) = _t->getLimit_MinSensor2Voltage(); break;
        case 74: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxSensor2Voltage(); break;
        case 75: *reinterpret_cast< float*>(_v) = _t->getLimit_MinCellVoltage(); break;
        case 76: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxCurrent(); break;
        case 77: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxUsedCapacity(); break;
        case 78: *reinterpret_cast< float*>(_v) = _t->getLimit_MinSensor1Temp(); break;
        case 79: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxSensor1Temp(); break;
        case 80: *reinterpret_cast< float*>(_v) = _t->getLimit_MinSensor2Temp(); break;
        case 81: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxSensor2Temp(); break;
        case 82: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxServoTemp(); break;
        case 83: *reinterpret_cast< float*>(_v) = _t->getLimit_MinRPM(); break;
        case 84: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxRPM(); break;
        case 85: *reinterpret_cast< float*>(_v) = _t->getLimit_MinFuel(); break;
        case 86: *reinterpret_cast< float*>(_v) = _t->getLimit_MaxServoDifference(); break;
        case 87: *reinterpret_cast< quint8*>(_v) = _t->getSensor_VARIO(); break;
        case 88: *reinterpret_cast< quint8*>(_v) = _t->getSensor_GPS(); break;
        case 89: *reinterpret_cast< quint8*>(_v) = _t->getSensor_EAM(); break;
        case 90: *reinterpret_cast< quint8*>(_v) = _t->getSensor_GAM(); break;
        case 91: *reinterpret_cast< quint8*>(_v) = _t->getSensor_ESC(); break;
        case 92: *reinterpret_cast< quint8*>(_v) = _t->getWarning_AltitudeBeep(); break;
        case 93: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MinSpeed(); break;
        case 94: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxSpeed(); break;
        case 95: *reinterpret_cast< quint8*>(_v) = _t->getWarning_NegDifference1(); break;
        case 96: *reinterpret_cast< quint8*>(_v) = _t->getWarning_PosDifference1(); break;
        case 97: *reinterpret_cast< quint8*>(_v) = _t->getWarning_NegDifference2(); break;
        case 98: *reinterpret_cast< quint8*>(_v) = _t->getWarning_PosDifference2(); break;
        case 99: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MinHeight(); break;
        case 100: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxHeight(); break;
        case 101: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxDistance(); break;
        case 102: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MinPowerVoltage(); break;
        case 103: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxPowerVoltage(); break;
        case 104: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MinSensor1Voltage(); break;
        case 105: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxSensor1Voltage(); break;
        case 106: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MinSensor2Voltage(); break;
        case 107: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxSensor2Voltage(); break;
        case 108: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MinCellVoltage(); break;
        case 109: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxCurrent(); break;
        case 110: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxUsedCapacity(); break;
        case 111: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MinSensor1Temp(); break;
        case 112: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxSensor1Temp(); break;
        case 113: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MinSensor2Temp(); break;
        case 114: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxSensor2Temp(); break;
        case 115: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxServoTemp(); break;
        case 116: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MinRPM(); break;
        case 117: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxRPM(); break;
        case 118: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MinFuel(); break;
        case 119: *reinterpret_cast< quint8*>(_v) = _t->getWarning_MaxServoDifference(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HoTTBridgeSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLimitMinSpeed(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setLimitMaxSpeed(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setLimitNegDifference1(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setLimitPosDifference1(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setLimitNegDifference2(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setLimitPosDifference2(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setLimitMinHeight(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setLimitMaxHeight(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setLimitMaxDistance(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setLimitMinPowerVoltage(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setLimitMaxPowerVoltage(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setLimitMinSensor1Voltage(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setLimitMaxSensor1Voltage(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setLimitMinSensor2Voltage(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setLimitMaxSensor2Voltage(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setLimitMinCellVoltage(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setLimitMaxCurrent(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setLimitMaxUsedCapacity(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setLimitMinSensor1Temp(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setLimitMaxSensor1Temp(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setLimitMinSensor2Temp(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setLimitMaxSensor2Temp(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setLimitMaxServoTemp(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setLimitMinRPM(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setLimitMaxRPM(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setLimitMinFuel(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setLimitMaxServoDifference(*reinterpret_cast< float*>(_v)); break;
        case 27: _t->setSensorVARIO(*reinterpret_cast< HoTTBridgeSettings_Sensor::Enum*>(_v)); break;
        case 28: _t->setSensorGPS(*reinterpret_cast< HoTTBridgeSettings_Sensor::Enum*>(_v)); break;
        case 29: _t->setSensorEAM(*reinterpret_cast< HoTTBridgeSettings_Sensor::Enum*>(_v)); break;
        case 30: _t->setSensorGAM(*reinterpret_cast< HoTTBridgeSettings_Sensor::Enum*>(_v)); break;
        case 31: _t->setSensorESC(*reinterpret_cast< HoTTBridgeSettings_Sensor::Enum*>(_v)); break;
        case 32: _t->setWarningAltitudeBeep(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 33: _t->setWarningMinSpeed(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 34: _t->setWarningMaxSpeed(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 35: _t->setWarningNegDifference1(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 36: _t->setWarningPosDifference1(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 37: _t->setWarningNegDifference2(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 38: _t->setWarningPosDifference2(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 39: _t->setWarningMinHeight(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 40: _t->setWarningMaxHeight(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 41: _t->setWarningMaxDistance(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 42: _t->setWarningMinPowerVoltage(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 43: _t->setWarningMaxPowerVoltage(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 44: _t->setWarningMinSensor1Voltage(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 45: _t->setWarningMaxSensor1Voltage(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 46: _t->setWarningMinSensor2Voltage(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 47: _t->setWarningMaxSensor2Voltage(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 48: _t->setWarningMinCellVoltage(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 49: _t->setWarningMaxCurrent(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 50: _t->setWarningMaxUsedCapacity(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 51: _t->setWarningMinSensor1Temp(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 52: _t->setWarningMaxSensor1Temp(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 53: _t->setWarningMinSensor2Temp(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 54: _t->setWarningMaxSensor2Temp(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 55: _t->setWarningMaxServoTemp(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 56: _t->setWarningMinRPM(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 57: _t->setWarningMaxRPM(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 58: _t->setWarningMinFuel(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 59: _t->setWarningMaxServoDifference(*reinterpret_cast< HoTTBridgeSettings_Warning::Enum*>(_v)); break;
        case 60: _t->setLimit_MinSpeed(*reinterpret_cast< float*>(_v)); break;
        case 61: _t->setLimit_MaxSpeed(*reinterpret_cast< float*>(_v)); break;
        case 62: _t->setLimit_NegDifference1(*reinterpret_cast< float*>(_v)); break;
        case 63: _t->setLimit_PosDifference1(*reinterpret_cast< float*>(_v)); break;
        case 64: _t->setLimit_NegDifference2(*reinterpret_cast< float*>(_v)); break;
        case 65: _t->setLimit_PosDifference2(*reinterpret_cast< float*>(_v)); break;
        case 66: _t->setLimit_MinHeight(*reinterpret_cast< float*>(_v)); break;
        case 67: _t->setLimit_MaxHeight(*reinterpret_cast< float*>(_v)); break;
        case 68: _t->setLimit_MaxDistance(*reinterpret_cast< float*>(_v)); break;
        case 69: _t->setLimit_MinPowerVoltage(*reinterpret_cast< float*>(_v)); break;
        case 70: _t->setLimit_MaxPowerVoltage(*reinterpret_cast< float*>(_v)); break;
        case 71: _t->setLimit_MinSensor1Voltage(*reinterpret_cast< float*>(_v)); break;
        case 72: _t->setLimit_MaxSensor1Voltage(*reinterpret_cast< float*>(_v)); break;
        case 73: _t->setLimit_MinSensor2Voltage(*reinterpret_cast< float*>(_v)); break;
        case 74: _t->setLimit_MaxSensor2Voltage(*reinterpret_cast< float*>(_v)); break;
        case 75: _t->setLimit_MinCellVoltage(*reinterpret_cast< float*>(_v)); break;
        case 76: _t->setLimit_MaxCurrent(*reinterpret_cast< float*>(_v)); break;
        case 77: _t->setLimit_MaxUsedCapacity(*reinterpret_cast< float*>(_v)); break;
        case 78: _t->setLimit_MinSensor1Temp(*reinterpret_cast< float*>(_v)); break;
        case 79: _t->setLimit_MaxSensor1Temp(*reinterpret_cast< float*>(_v)); break;
        case 80: _t->setLimit_MinSensor2Temp(*reinterpret_cast< float*>(_v)); break;
        case 81: _t->setLimit_MaxSensor2Temp(*reinterpret_cast< float*>(_v)); break;
        case 82: _t->setLimit_MaxServoTemp(*reinterpret_cast< float*>(_v)); break;
        case 83: _t->setLimit_MinRPM(*reinterpret_cast< float*>(_v)); break;
        case 84: _t->setLimit_MaxRPM(*reinterpret_cast< float*>(_v)); break;
        case 85: _t->setLimit_MinFuel(*reinterpret_cast< float*>(_v)); break;
        case 86: _t->setLimit_MaxServoDifference(*reinterpret_cast< float*>(_v)); break;
        case 87: _t->setSensor_VARIO(*reinterpret_cast< quint8*>(_v)); break;
        case 88: _t->setSensor_GPS(*reinterpret_cast< quint8*>(_v)); break;
        case 89: _t->setSensor_EAM(*reinterpret_cast< quint8*>(_v)); break;
        case 90: _t->setSensor_GAM(*reinterpret_cast< quint8*>(_v)); break;
        case 91: _t->setSensor_ESC(*reinterpret_cast< quint8*>(_v)); break;
        case 92: _t->setWarning_AltitudeBeep(*reinterpret_cast< quint8*>(_v)); break;
        case 93: _t->setWarning_MinSpeed(*reinterpret_cast< quint8*>(_v)); break;
        case 94: _t->setWarning_MaxSpeed(*reinterpret_cast< quint8*>(_v)); break;
        case 95: _t->setWarning_NegDifference1(*reinterpret_cast< quint8*>(_v)); break;
        case 96: _t->setWarning_PosDifference1(*reinterpret_cast< quint8*>(_v)); break;
        case 97: _t->setWarning_NegDifference2(*reinterpret_cast< quint8*>(_v)); break;
        case 98: _t->setWarning_PosDifference2(*reinterpret_cast< quint8*>(_v)); break;
        case 99: _t->setWarning_MinHeight(*reinterpret_cast< quint8*>(_v)); break;
        case 100: _t->setWarning_MaxHeight(*reinterpret_cast< quint8*>(_v)); break;
        case 101: _t->setWarning_MaxDistance(*reinterpret_cast< quint8*>(_v)); break;
        case 102: _t->setWarning_MinPowerVoltage(*reinterpret_cast< quint8*>(_v)); break;
        case 103: _t->setWarning_MaxPowerVoltage(*reinterpret_cast< quint8*>(_v)); break;
        case 104: _t->setWarning_MinSensor1Voltage(*reinterpret_cast< quint8*>(_v)); break;
        case 105: _t->setWarning_MaxSensor1Voltage(*reinterpret_cast< quint8*>(_v)); break;
        case 106: _t->setWarning_MinSensor2Voltage(*reinterpret_cast< quint8*>(_v)); break;
        case 107: _t->setWarning_MaxSensor2Voltage(*reinterpret_cast< quint8*>(_v)); break;
        case 108: _t->setWarning_MinCellVoltage(*reinterpret_cast< quint8*>(_v)); break;
        case 109: _t->setWarning_MaxCurrent(*reinterpret_cast< quint8*>(_v)); break;
        case 110: _t->setWarning_MaxUsedCapacity(*reinterpret_cast< quint8*>(_v)); break;
        case 111: _t->setWarning_MinSensor1Temp(*reinterpret_cast< quint8*>(_v)); break;
        case 112: _t->setWarning_MaxSensor1Temp(*reinterpret_cast< quint8*>(_v)); break;
        case 113: _t->setWarning_MinSensor2Temp(*reinterpret_cast< quint8*>(_v)); break;
        case 114: _t->setWarning_MaxSensor2Temp(*reinterpret_cast< quint8*>(_v)); break;
        case 115: _t->setWarning_MaxServoTemp(*reinterpret_cast< quint8*>(_v)); break;
        case 116: _t->setWarning_MinRPM(*reinterpret_cast< quint8*>(_v)); break;
        case 117: _t->setWarning_MaxRPM(*reinterpret_cast< quint8*>(_v)); break;
        case 118: _t->setWarning_MinFuel(*reinterpret_cast< quint8*>(_v)); break;
        case 119: _t->setWarning_MaxServoDifference(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_HoTTBridgeSettings[] = {
        &HoTTBridgeSettings_Sensor::staticMetaObject,
    &HoTTBridgeSettings_Warning::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject HoTTBridgeSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_HoTTBridgeSettings.data,
    qt_meta_data_HoTTBridgeSettings,
    qt_static_metacall,
    qt_meta_extradata_HoTTBridgeSettings,
    nullptr
} };


const QMetaObject *HoTTBridgeSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HoTTBridgeSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HoTTBridgeSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int HoTTBridgeSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 318)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 318;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 318)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 318;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 120;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 120;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 120;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 120;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 120;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 120;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void HoTTBridgeSettings::limitChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HoTTBridgeSettings::LimitChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HoTTBridgeSettings::limitMinSpeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HoTTBridgeSettings::Limit_MinSpeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HoTTBridgeSettings::limitMaxSpeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HoTTBridgeSettings::Limit_MaxSpeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HoTTBridgeSettings::limitNegDifference1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void HoTTBridgeSettings::Limit_NegDifference1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void HoTTBridgeSettings::limitPosDifference1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void HoTTBridgeSettings::Limit_PosDifference1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void HoTTBridgeSettings::limitNegDifference2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void HoTTBridgeSettings::Limit_NegDifference2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void HoTTBridgeSettings::limitPosDifference2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void HoTTBridgeSettings::Limit_PosDifference2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void HoTTBridgeSettings::limitMinHeightChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void HoTTBridgeSettings::Limit_MinHeightChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void HoTTBridgeSettings::limitMaxHeightChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void HoTTBridgeSettings::Limit_MaxHeightChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void HoTTBridgeSettings::limitMaxDistanceChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void HoTTBridgeSettings::Limit_MaxDistanceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void HoTTBridgeSettings::limitMinPowerVoltageChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void HoTTBridgeSettings::Limit_MinPowerVoltageChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void HoTTBridgeSettings::limitMaxPowerVoltageChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void HoTTBridgeSettings::Limit_MaxPowerVoltageChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void HoTTBridgeSettings::limitMinSensor1VoltageChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void HoTTBridgeSettings::Limit_MinSensor1VoltageChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void HoTTBridgeSettings::limitMaxSensor1VoltageChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void HoTTBridgeSettings::Limit_MaxSensor1VoltageChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void HoTTBridgeSettings::limitMinSensor2VoltageChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void HoTTBridgeSettings::Limit_MinSensor2VoltageChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void HoTTBridgeSettings::limitMaxSensor2VoltageChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void HoTTBridgeSettings::Limit_MaxSensor2VoltageChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void HoTTBridgeSettings::limitMinCellVoltageChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void HoTTBridgeSettings::Limit_MinCellVoltageChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void HoTTBridgeSettings::limitMaxCurrentChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void HoTTBridgeSettings::Limit_MaxCurrentChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void HoTTBridgeSettings::limitMaxUsedCapacityChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void HoTTBridgeSettings::Limit_MaxUsedCapacityChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void HoTTBridgeSettings::limitMinSensor1TempChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void HoTTBridgeSettings::Limit_MinSensor1TempChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void HoTTBridgeSettings::limitMaxSensor1TempChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void HoTTBridgeSettings::Limit_MaxSensor1TempChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void HoTTBridgeSettings::limitMinSensor2TempChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void HoTTBridgeSettings::Limit_MinSensor2TempChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void HoTTBridgeSettings::limitMaxSensor2TempChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void HoTTBridgeSettings::Limit_MaxSensor2TempChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void HoTTBridgeSettings::limitMaxServoTempChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void HoTTBridgeSettings::Limit_MaxServoTempChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void HoTTBridgeSettings::limitMinRPMChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void HoTTBridgeSettings::Limit_MinRPMChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void HoTTBridgeSettings::limitMaxRPMChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void HoTTBridgeSettings::Limit_MaxRPMChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void HoTTBridgeSettings::limitMinFuelChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void HoTTBridgeSettings::Limit_MinFuelChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void HoTTBridgeSettings::limitMaxServoDifferenceChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void HoTTBridgeSettings::Limit_MaxServoDifferenceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void HoTTBridgeSettings::sensorChanged(quint32 _t1, const HoTTBridgeSettings_Sensor::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void HoTTBridgeSettings::SensorChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void HoTTBridgeSettings::sensorVARIOChanged(const HoTTBridgeSettings_Sensor::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void HoTTBridgeSettings::Sensor_VARIOChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void HoTTBridgeSettings::sensorGPSChanged(const HoTTBridgeSettings_Sensor::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void HoTTBridgeSettings::Sensor_GPSChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void HoTTBridgeSettings::sensorEAMChanged(const HoTTBridgeSettings_Sensor::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void HoTTBridgeSettings::Sensor_EAMChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void HoTTBridgeSettings::sensorGAMChanged(const HoTTBridgeSettings_Sensor::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void HoTTBridgeSettings::Sensor_GAMChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void HoTTBridgeSettings::sensorESCChanged(const HoTTBridgeSettings_Sensor::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void HoTTBridgeSettings::Sensor_ESCChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void HoTTBridgeSettings::warningChanged(quint32 _t1, const HoTTBridgeSettings_Warning::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void HoTTBridgeSettings::WarningChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void HoTTBridgeSettings::warningAltitudeBeepChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void HoTTBridgeSettings::Warning_AltitudeBeepChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void HoTTBridgeSettings::warningMinSpeedChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void HoTTBridgeSettings::Warning_MinSpeedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void HoTTBridgeSettings::warningMaxSpeedChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void HoTTBridgeSettings::Warning_MaxSpeedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void HoTTBridgeSettings::warningNegDifference1Changed(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void HoTTBridgeSettings::Warning_NegDifference1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void HoTTBridgeSettings::warningPosDifference1Changed(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void HoTTBridgeSettings::Warning_PosDifference1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void HoTTBridgeSettings::warningNegDifference2Changed(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void HoTTBridgeSettings::Warning_NegDifference2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void HoTTBridgeSettings::warningPosDifference2Changed(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void HoTTBridgeSettings::Warning_PosDifference2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void HoTTBridgeSettings::warningMinHeightChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void HoTTBridgeSettings::Warning_MinHeightChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void HoTTBridgeSettings::warningMaxHeightChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void HoTTBridgeSettings::Warning_MaxHeightChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void HoTTBridgeSettings::warningMaxDistanceChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void HoTTBridgeSettings::Warning_MaxDistanceChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void HoTTBridgeSettings::warningMinPowerVoltageChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void HoTTBridgeSettings::Warning_MinPowerVoltageChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void HoTTBridgeSettings::warningMaxPowerVoltageChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void HoTTBridgeSettings::Warning_MaxPowerVoltageChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void HoTTBridgeSettings::warningMinSensor1VoltageChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void HoTTBridgeSettings::Warning_MinSensor1VoltageChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void HoTTBridgeSettings::warningMaxSensor1VoltageChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void HoTTBridgeSettings::Warning_MaxSensor1VoltageChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void HoTTBridgeSettings::warningMinSensor2VoltageChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void HoTTBridgeSettings::Warning_MinSensor2VoltageChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void HoTTBridgeSettings::warningMaxSensor2VoltageChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void HoTTBridgeSettings::Warning_MaxSensor2VoltageChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void HoTTBridgeSettings::warningMinCellVoltageChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void HoTTBridgeSettings::Warning_MinCellVoltageChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void HoTTBridgeSettings::warningMaxCurrentChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void HoTTBridgeSettings::Warning_MaxCurrentChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void HoTTBridgeSettings::warningMaxUsedCapacityChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void HoTTBridgeSettings::Warning_MaxUsedCapacityChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void HoTTBridgeSettings::warningMinSensor1TempChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void HoTTBridgeSettings::Warning_MinSensor1TempChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void HoTTBridgeSettings::warningMaxSensor1TempChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void HoTTBridgeSettings::Warning_MaxSensor1TempChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void HoTTBridgeSettings::warningMinSensor2TempChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void HoTTBridgeSettings::Warning_MinSensor2TempChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void HoTTBridgeSettings::warningMaxSensor2TempChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}

// SIGNAL 115
void HoTTBridgeSettings::Warning_MaxSensor2TempChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 115, _a);
}

// SIGNAL 116
void HoTTBridgeSettings::warningMaxServoTempChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 116, _a);
}

// SIGNAL 117
void HoTTBridgeSettings::Warning_MaxServoTempChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 117, _a);
}

// SIGNAL 118
void HoTTBridgeSettings::warningMinRPMChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 118, _a);
}

// SIGNAL 119
void HoTTBridgeSettings::Warning_MinRPMChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 119, _a);
}

// SIGNAL 120
void HoTTBridgeSettings::warningMaxRPMChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 120, _a);
}

// SIGNAL 121
void HoTTBridgeSettings::Warning_MaxRPMChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 121, _a);
}

// SIGNAL 122
void HoTTBridgeSettings::warningMinFuelChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 122, _a);
}

// SIGNAL 123
void HoTTBridgeSettings::Warning_MinFuelChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 123, _a);
}

// SIGNAL 124
void HoTTBridgeSettings::warningMaxServoDifferenceChanged(const HoTTBridgeSettings_Warning::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 124, _a);
}

// SIGNAL 125
void HoTTBridgeSettings::Warning_MaxServoDifferenceChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 125, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
