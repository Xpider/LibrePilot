/****************************************************************************
** Meta object code from reading C++ file 'manualcontrolsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../manualcontrolsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manualcontrolsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ManualControlSettingsConstants_t {
    QByteArrayData data[3];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ManualControlSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ManualControlSettingsConstants_t qt_meta_stringdata_ManualControlSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 30), // "ManualControlSettingsConstants"
QT_MOC_LITERAL(1, 31, 4), // "Enum"
QT_MOC_LITERAL(2, 36, 18) // "ChannelGroupsCount"

    },
    "ManualControlSettingsConstants\0Enum\0"
    "ChannelGroupsCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManualControlSettingsConstants[] = {

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
       1,    1, 0x0,    1,   19,

 // enum data: key, value
       2, uint(ManualControlSettingsConstants::ChannelGroupsCount),

       0        // eod
};

void ManualControlSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ManualControlSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ManualControlSettingsConstants.data,
    qt_meta_data_ManualControlSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ManualControlSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManualControlSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ManualControlSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ManualControlSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ManualControlSettings_ChannelGroups_t {
    QByteArrayData data[16];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ManualControlSettings_ChannelGroups_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ManualControlSettings_ChannelGroups_t qt_meta_stringdata_ManualControlSettings_ChannelGroups = {
    {
QT_MOC_LITERAL(0, 0, 35), // "ManualControlSettings_Channel..."
QT_MOC_LITERAL(1, 36, 4), // "Enum"
QT_MOC_LITERAL(2, 41, 3), // "PWM"
QT_MOC_LITERAL(3, 45, 3), // "PPM"
QT_MOC_LITERAL(4, 49, 11), // "DSMMainPort"
QT_MOC_LITERAL(5, 61, 12), // "DSMFlexiPort"
QT_MOC_LITERAL(6, 74, 11), // "DSMRcvrPort"
QT_MOC_LITERAL(7, 86, 4), // "SBus"
QT_MOC_LITERAL(8, 91, 5), // "EXBus"
QT_MOC_LITERAL(9, 97, 4), // "HoTT"
QT_MOC_LITERAL(10, 102, 4), // "SRXL"
QT_MOC_LITERAL(11, 107, 4), // "IBus"
QT_MOC_LITERAL(12, 112, 3), // "GCS"
QT_MOC_LITERAL(13, 116, 6), // "OPLink"
QT_MOC_LITERAL(14, 123, 7), // "OpenLRS"
QT_MOC_LITERAL(15, 131, 4) // "None"

    },
    "ManualControlSettings_ChannelGroups\0"
    "Enum\0PWM\0PPM\0DSMMainPort\0DSMFlexiPort\0"
    "DSMRcvrPort\0SBus\0EXBus\0HoTT\0SRXL\0IBus\0"
    "GCS\0OPLink\0OpenLRS\0None"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManualControlSettings_ChannelGroups[] = {

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
       1,    1, 0x0,   14,   19,

 // enum data: key, value
       2, uint(ManualControlSettings_ChannelGroups::PWM),
       3, uint(ManualControlSettings_ChannelGroups::PPM),
       4, uint(ManualControlSettings_ChannelGroups::DSMMainPort),
       5, uint(ManualControlSettings_ChannelGroups::DSMFlexiPort),
       6, uint(ManualControlSettings_ChannelGroups::DSMRcvrPort),
       7, uint(ManualControlSettings_ChannelGroups::SBus),
       8, uint(ManualControlSettings_ChannelGroups::EXBus),
       9, uint(ManualControlSettings_ChannelGroups::HoTT),
      10, uint(ManualControlSettings_ChannelGroups::SRXL),
      11, uint(ManualControlSettings_ChannelGroups::IBus),
      12, uint(ManualControlSettings_ChannelGroups::GCS),
      13, uint(ManualControlSettings_ChannelGroups::OPLink),
      14, uint(ManualControlSettings_ChannelGroups::OpenLRS),
      15, uint(ManualControlSettings_ChannelGroups::None),

       0        // eod
};

void ManualControlSettings_ChannelGroups::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ManualControlSettings_ChannelGroups::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ManualControlSettings_ChannelGroups.data,
    qt_meta_data_ManualControlSettings_ChannelGroups,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ManualControlSettings_ChannelGroups::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManualControlSettings_ChannelGroups::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ManualControlSettings_ChannelGroups.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ManualControlSettings_ChannelGroups::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ManualControlSettings_t {
    QByteArrayData data[576];
    char stringdata0[13978];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ManualControlSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ManualControlSettings_t qt_meta_stringdata_ManualControlSettings = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ManualControlSettings"
QT_MOC_LITERAL(1, 22, 22), // "failsafeChannelChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5), // "index"
QT_MOC_LITERAL(4, 52, 5), // "value"
QT_MOC_LITERAL(5, 58, 22), // "FailsafeChannelChanged"
QT_MOC_LITERAL(6, 81, 30), // "failsafeChannelThrottleChanged"
QT_MOC_LITERAL(7, 112, 31), // "FailsafeChannel_ThrottleChanged"
QT_MOC_LITERAL(8, 144, 26), // "failsafeChannelRollChanged"
QT_MOC_LITERAL(9, 171, 27), // "FailsafeChannel_RollChanged"
QT_MOC_LITERAL(10, 199, 27), // "failsafeChannelPitchChanged"
QT_MOC_LITERAL(11, 227, 28), // "FailsafeChannel_PitchChanged"
QT_MOC_LITERAL(12, 256, 25), // "failsafeChannelYawChanged"
QT_MOC_LITERAL(13, 282, 26), // "FailsafeChannel_YawChanged"
QT_MOC_LITERAL(14, 309, 32), // "failsafeChannelCollectiveChanged"
QT_MOC_LITERAL(15, 342, 33), // "FailsafeChannel_CollectiveCha..."
QT_MOC_LITERAL(16, 376, 32), // "failsafeChannelAccessory0Changed"
QT_MOC_LITERAL(17, 409, 33), // "FailsafeChannel_Accessory0Cha..."
QT_MOC_LITERAL(18, 443, 32), // "failsafeChannelAccessory1Changed"
QT_MOC_LITERAL(19, 476, 33), // "FailsafeChannel_Accessory1Cha..."
QT_MOC_LITERAL(20, 510, 32), // "failsafeChannelAccessory2Changed"
QT_MOC_LITERAL(21, 543, 33), // "FailsafeChannel_Accessory2Cha..."
QT_MOC_LITERAL(22, 577, 32), // "failsafeChannelAccessory3Changed"
QT_MOC_LITERAL(23, 610, 33), // "FailsafeChannel_Accessory3Cha..."
QT_MOC_LITERAL(24, 644, 17), // "channelMinChanged"
QT_MOC_LITERAL(25, 662, 17), // "ChannelMinChanged"
QT_MOC_LITERAL(26, 680, 25), // "channelMinThrottleChanged"
QT_MOC_LITERAL(27, 706, 26), // "ChannelMin_ThrottleChanged"
QT_MOC_LITERAL(28, 733, 21), // "channelMinRollChanged"
QT_MOC_LITERAL(29, 755, 22), // "ChannelMin_RollChanged"
QT_MOC_LITERAL(30, 778, 22), // "channelMinPitchChanged"
QT_MOC_LITERAL(31, 801, 23), // "ChannelMin_PitchChanged"
QT_MOC_LITERAL(32, 825, 20), // "channelMinYawChanged"
QT_MOC_LITERAL(33, 846, 21), // "ChannelMin_YawChanged"
QT_MOC_LITERAL(34, 868, 27), // "channelMinFlightModeChanged"
QT_MOC_LITERAL(35, 896, 28), // "ChannelMin_FlightModeChanged"
QT_MOC_LITERAL(36, 925, 27), // "channelMinCollectiveChanged"
QT_MOC_LITERAL(37, 953, 28), // "ChannelMin_CollectiveChanged"
QT_MOC_LITERAL(38, 982, 27), // "channelMinAccessory0Changed"
QT_MOC_LITERAL(39, 1010, 28), // "ChannelMin_Accessory0Changed"
QT_MOC_LITERAL(40, 1039, 27), // "channelMinAccessory1Changed"
QT_MOC_LITERAL(41, 1067, 28), // "ChannelMin_Accessory1Changed"
QT_MOC_LITERAL(42, 1096, 27), // "channelMinAccessory2Changed"
QT_MOC_LITERAL(43, 1124, 28), // "ChannelMin_Accessory2Changed"
QT_MOC_LITERAL(44, 1153, 27), // "channelMinAccessory3Changed"
QT_MOC_LITERAL(45, 1181, 28), // "ChannelMin_Accessory3Changed"
QT_MOC_LITERAL(46, 1210, 21), // "channelMinRssiChanged"
QT_MOC_LITERAL(47, 1232, 22), // "ChannelMin_RssiChanged"
QT_MOC_LITERAL(48, 1255, 21), // "channelNeutralChanged"
QT_MOC_LITERAL(49, 1277, 21), // "ChannelNeutralChanged"
QT_MOC_LITERAL(50, 1299, 29), // "channelNeutralThrottleChanged"
QT_MOC_LITERAL(51, 1329, 30), // "ChannelNeutral_ThrottleChanged"
QT_MOC_LITERAL(52, 1360, 25), // "channelNeutralRollChanged"
QT_MOC_LITERAL(53, 1386, 26), // "ChannelNeutral_RollChanged"
QT_MOC_LITERAL(54, 1413, 26), // "channelNeutralPitchChanged"
QT_MOC_LITERAL(55, 1440, 27), // "ChannelNeutral_PitchChanged"
QT_MOC_LITERAL(56, 1468, 24), // "channelNeutralYawChanged"
QT_MOC_LITERAL(57, 1493, 25), // "ChannelNeutral_YawChanged"
QT_MOC_LITERAL(58, 1519, 31), // "channelNeutralFlightModeChanged"
QT_MOC_LITERAL(59, 1551, 32), // "ChannelNeutral_FlightModeChanged"
QT_MOC_LITERAL(60, 1584, 31), // "channelNeutralCollectiveChanged"
QT_MOC_LITERAL(61, 1616, 32), // "ChannelNeutral_CollectiveChanged"
QT_MOC_LITERAL(62, 1649, 31), // "channelNeutralAccessory0Changed"
QT_MOC_LITERAL(63, 1681, 32), // "ChannelNeutral_Accessory0Changed"
QT_MOC_LITERAL(64, 1714, 31), // "channelNeutralAccessory1Changed"
QT_MOC_LITERAL(65, 1746, 32), // "ChannelNeutral_Accessory1Changed"
QT_MOC_LITERAL(66, 1779, 31), // "channelNeutralAccessory2Changed"
QT_MOC_LITERAL(67, 1811, 32), // "ChannelNeutral_Accessory2Changed"
QT_MOC_LITERAL(68, 1844, 31), // "channelNeutralAccessory3Changed"
QT_MOC_LITERAL(69, 1876, 32), // "ChannelNeutral_Accessory3Changed"
QT_MOC_LITERAL(70, 1909, 25), // "channelNeutralRssiChanged"
QT_MOC_LITERAL(71, 1935, 26), // "ChannelNeutral_RssiChanged"
QT_MOC_LITERAL(72, 1962, 17), // "channelMaxChanged"
QT_MOC_LITERAL(73, 1980, 17), // "ChannelMaxChanged"
QT_MOC_LITERAL(74, 1998, 25), // "channelMaxThrottleChanged"
QT_MOC_LITERAL(75, 2024, 26), // "ChannelMax_ThrottleChanged"
QT_MOC_LITERAL(76, 2051, 21), // "channelMaxRollChanged"
QT_MOC_LITERAL(77, 2073, 22), // "ChannelMax_RollChanged"
QT_MOC_LITERAL(78, 2096, 22), // "channelMaxPitchChanged"
QT_MOC_LITERAL(79, 2119, 23), // "ChannelMax_PitchChanged"
QT_MOC_LITERAL(80, 2143, 20), // "channelMaxYawChanged"
QT_MOC_LITERAL(81, 2164, 21), // "ChannelMax_YawChanged"
QT_MOC_LITERAL(82, 2186, 27), // "channelMaxFlightModeChanged"
QT_MOC_LITERAL(83, 2214, 28), // "ChannelMax_FlightModeChanged"
QT_MOC_LITERAL(84, 2243, 27), // "channelMaxCollectiveChanged"
QT_MOC_LITERAL(85, 2271, 28), // "ChannelMax_CollectiveChanged"
QT_MOC_LITERAL(86, 2300, 27), // "channelMaxAccessory0Changed"
QT_MOC_LITERAL(87, 2328, 28), // "ChannelMax_Accessory0Changed"
QT_MOC_LITERAL(88, 2357, 27), // "channelMaxAccessory1Changed"
QT_MOC_LITERAL(89, 2385, 28), // "ChannelMax_Accessory1Changed"
QT_MOC_LITERAL(90, 2414, 27), // "channelMaxAccessory2Changed"
QT_MOC_LITERAL(91, 2442, 28), // "ChannelMax_Accessory2Changed"
QT_MOC_LITERAL(92, 2471, 27), // "channelMaxAccessory3Changed"
QT_MOC_LITERAL(93, 2499, 28), // "ChannelMax_Accessory3Changed"
QT_MOC_LITERAL(94, 2528, 21), // "channelMaxRssiChanged"
QT_MOC_LITERAL(95, 2550, 22), // "ChannelMax_RssiChanged"
QT_MOC_LITERAL(96, 2573, 19), // "responseTimeChanged"
QT_MOC_LITERAL(97, 2593, 19), // "ResponseTimeChanged"
QT_MOC_LITERAL(98, 2613, 23), // "responseTimeRollChanged"
QT_MOC_LITERAL(99, 2637, 24), // "ResponseTime_RollChanged"
QT_MOC_LITERAL(100, 2662, 24), // "responseTimePitchChanged"
QT_MOC_LITERAL(101, 2687, 25), // "ResponseTime_PitchChanged"
QT_MOC_LITERAL(102, 2713, 22), // "responseTimeYawChanged"
QT_MOC_LITERAL(103, 2736, 23), // "ResponseTime_YawChanged"
QT_MOC_LITERAL(104, 2760, 29), // "responseTimeCollectiveChanged"
QT_MOC_LITERAL(105, 2790, 30), // "ResponseTime_CollectiveChanged"
QT_MOC_LITERAL(106, 2821, 29), // "responseTimeAccessory0Changed"
QT_MOC_LITERAL(107, 2851, 30), // "ResponseTime_Accessory0Changed"
QT_MOC_LITERAL(108, 2882, 29), // "responseTimeAccessory1Changed"
QT_MOC_LITERAL(109, 2912, 30), // "ResponseTime_Accessory1Changed"
QT_MOC_LITERAL(110, 2943, 29), // "responseTimeAccessory2Changed"
QT_MOC_LITERAL(111, 2973, 30), // "ResponseTime_Accessory2Changed"
QT_MOC_LITERAL(112, 3004, 29), // "responseTimeAccessory3Changed"
QT_MOC_LITERAL(113, 3034, 30), // "ResponseTime_Accessory3Changed"
QT_MOC_LITERAL(114, 3065, 23), // "responseTimeRssiChanged"
QT_MOC_LITERAL(115, 3089, 24), // "ResponseTime_RssiChanged"
QT_MOC_LITERAL(116, 3114, 20), // "channelGroupsChanged"
QT_MOC_LITERAL(117, 3135, 41), // "ManualControlSettings_Channel..."
QT_MOC_LITERAL(118, 3177, 20), // "ChannelGroupsChanged"
QT_MOC_LITERAL(119, 3198, 28), // "channelGroupsThrottleChanged"
QT_MOC_LITERAL(120, 3227, 29), // "ChannelGroups_ThrottleChanged"
QT_MOC_LITERAL(121, 3257, 24), // "channelGroupsRollChanged"
QT_MOC_LITERAL(122, 3282, 25), // "ChannelGroups_RollChanged"
QT_MOC_LITERAL(123, 3308, 25), // "channelGroupsPitchChanged"
QT_MOC_LITERAL(124, 3334, 26), // "ChannelGroups_PitchChanged"
QT_MOC_LITERAL(125, 3361, 23), // "channelGroupsYawChanged"
QT_MOC_LITERAL(126, 3385, 24), // "ChannelGroups_YawChanged"
QT_MOC_LITERAL(127, 3410, 30), // "channelGroupsFlightModeChanged"
QT_MOC_LITERAL(128, 3441, 31), // "ChannelGroups_FlightModeChanged"
QT_MOC_LITERAL(129, 3473, 30), // "channelGroupsCollectiveChanged"
QT_MOC_LITERAL(130, 3504, 31), // "ChannelGroups_CollectiveChanged"
QT_MOC_LITERAL(131, 3536, 30), // "channelGroupsAccessory0Changed"
QT_MOC_LITERAL(132, 3567, 31), // "ChannelGroups_Accessory0Changed"
QT_MOC_LITERAL(133, 3599, 30), // "channelGroupsAccessory1Changed"
QT_MOC_LITERAL(134, 3630, 31), // "ChannelGroups_Accessory1Changed"
QT_MOC_LITERAL(135, 3662, 30), // "channelGroupsAccessory2Changed"
QT_MOC_LITERAL(136, 3693, 31), // "ChannelGroups_Accessory2Changed"
QT_MOC_LITERAL(137, 3725, 30), // "channelGroupsAccessory3Changed"
QT_MOC_LITERAL(138, 3756, 31), // "ChannelGroups_Accessory3Changed"
QT_MOC_LITERAL(139, 3788, 24), // "channelGroupsRssiChanged"
QT_MOC_LITERAL(140, 3813, 25), // "ChannelGroups_RssiChanged"
QT_MOC_LITERAL(141, 3839, 20), // "channelNumberChanged"
QT_MOC_LITERAL(142, 3860, 20), // "ChannelNumberChanged"
QT_MOC_LITERAL(143, 3881, 28), // "channelNumberThrottleChanged"
QT_MOC_LITERAL(144, 3910, 29), // "ChannelNumber_ThrottleChanged"
QT_MOC_LITERAL(145, 3940, 24), // "channelNumberRollChanged"
QT_MOC_LITERAL(146, 3965, 25), // "ChannelNumber_RollChanged"
QT_MOC_LITERAL(147, 3991, 25), // "channelNumberPitchChanged"
QT_MOC_LITERAL(148, 4017, 26), // "ChannelNumber_PitchChanged"
QT_MOC_LITERAL(149, 4044, 23), // "channelNumberYawChanged"
QT_MOC_LITERAL(150, 4068, 24), // "ChannelNumber_YawChanged"
QT_MOC_LITERAL(151, 4093, 30), // "channelNumberFlightModeChanged"
QT_MOC_LITERAL(152, 4124, 31), // "ChannelNumber_FlightModeChanged"
QT_MOC_LITERAL(153, 4156, 30), // "channelNumberCollectiveChanged"
QT_MOC_LITERAL(154, 4187, 31), // "ChannelNumber_CollectiveChanged"
QT_MOC_LITERAL(155, 4219, 30), // "channelNumberAccessory0Changed"
QT_MOC_LITERAL(156, 4250, 31), // "ChannelNumber_Accessory0Changed"
QT_MOC_LITERAL(157, 4282, 30), // "channelNumberAccessory1Changed"
QT_MOC_LITERAL(158, 4313, 31), // "ChannelNumber_Accessory1Changed"
QT_MOC_LITERAL(159, 4345, 30), // "channelNumberAccessory2Changed"
QT_MOC_LITERAL(160, 4376, 31), // "ChannelNumber_Accessory2Changed"
QT_MOC_LITERAL(161, 4408, 30), // "channelNumberAccessory3Changed"
QT_MOC_LITERAL(162, 4439, 31), // "ChannelNumber_Accessory3Changed"
QT_MOC_LITERAL(163, 4471, 24), // "channelNumberRssiChanged"
QT_MOC_LITERAL(164, 4496, 25), // "ChannelNumber_RssiChanged"
QT_MOC_LITERAL(165, 4522, 15), // "deadbandChanged"
QT_MOC_LITERAL(166, 4538, 15), // "DeadbandChanged"
QT_MOC_LITERAL(167, 4554, 30), // "deadbandAssistedControlChanged"
QT_MOC_LITERAL(168, 4585, 30), // "DeadbandAssistedControlChanged"
QT_MOC_LITERAL(169, 4616, 23), // "flightModeNumberChanged"
QT_MOC_LITERAL(170, 4640, 23), // "FlightModeNumberChanged"
QT_MOC_LITERAL(171, 4664, 39), // "failsafeFlightModeSwitchPosit..."
QT_MOC_LITERAL(172, 4704, 39), // "FailsafeFlightModeSwitchPosit..."
QT_MOC_LITERAL(173, 4744, 18), // "setFailsafeChannel"
QT_MOC_LITERAL(174, 4763, 26), // "setFailsafeChannelThrottle"
QT_MOC_LITERAL(175, 4790, 27), // "setFailsafeChannel_Throttle"
QT_MOC_LITERAL(176, 4818, 22), // "setFailsafeChannelRoll"
QT_MOC_LITERAL(177, 4841, 23), // "setFailsafeChannel_Roll"
QT_MOC_LITERAL(178, 4865, 23), // "setFailsafeChannelPitch"
QT_MOC_LITERAL(179, 4889, 24), // "setFailsafeChannel_Pitch"
QT_MOC_LITERAL(180, 4914, 21), // "setFailsafeChannelYaw"
QT_MOC_LITERAL(181, 4936, 22), // "setFailsafeChannel_Yaw"
QT_MOC_LITERAL(182, 4959, 28), // "setFailsafeChannelCollective"
QT_MOC_LITERAL(183, 4988, 29), // "setFailsafeChannel_Collective"
QT_MOC_LITERAL(184, 5018, 28), // "setFailsafeChannelAccessory0"
QT_MOC_LITERAL(185, 5047, 29), // "setFailsafeChannel_Accessory0"
QT_MOC_LITERAL(186, 5077, 28), // "setFailsafeChannelAccessory1"
QT_MOC_LITERAL(187, 5106, 29), // "setFailsafeChannel_Accessory1"
QT_MOC_LITERAL(188, 5136, 28), // "setFailsafeChannelAccessory2"
QT_MOC_LITERAL(189, 5165, 29), // "setFailsafeChannel_Accessory2"
QT_MOC_LITERAL(190, 5195, 28), // "setFailsafeChannelAccessory3"
QT_MOC_LITERAL(191, 5224, 29), // "setFailsafeChannel_Accessory3"
QT_MOC_LITERAL(192, 5254, 13), // "setChannelMin"
QT_MOC_LITERAL(193, 5268, 21), // "setChannelMinThrottle"
QT_MOC_LITERAL(194, 5290, 22), // "setChannelMin_Throttle"
QT_MOC_LITERAL(195, 5313, 17), // "setChannelMinRoll"
QT_MOC_LITERAL(196, 5331, 18), // "setChannelMin_Roll"
QT_MOC_LITERAL(197, 5350, 18), // "setChannelMinPitch"
QT_MOC_LITERAL(198, 5369, 19), // "setChannelMin_Pitch"
QT_MOC_LITERAL(199, 5389, 16), // "setChannelMinYaw"
QT_MOC_LITERAL(200, 5406, 17), // "setChannelMin_Yaw"
QT_MOC_LITERAL(201, 5424, 23), // "setChannelMinFlightMode"
QT_MOC_LITERAL(202, 5448, 24), // "setChannelMin_FlightMode"
QT_MOC_LITERAL(203, 5473, 23), // "setChannelMinCollective"
QT_MOC_LITERAL(204, 5497, 24), // "setChannelMin_Collective"
QT_MOC_LITERAL(205, 5522, 23), // "setChannelMinAccessory0"
QT_MOC_LITERAL(206, 5546, 24), // "setChannelMin_Accessory0"
QT_MOC_LITERAL(207, 5571, 23), // "setChannelMinAccessory1"
QT_MOC_LITERAL(208, 5595, 24), // "setChannelMin_Accessory1"
QT_MOC_LITERAL(209, 5620, 23), // "setChannelMinAccessory2"
QT_MOC_LITERAL(210, 5644, 24), // "setChannelMin_Accessory2"
QT_MOC_LITERAL(211, 5669, 23), // "setChannelMinAccessory3"
QT_MOC_LITERAL(212, 5693, 24), // "setChannelMin_Accessory3"
QT_MOC_LITERAL(213, 5718, 17), // "setChannelMinRssi"
QT_MOC_LITERAL(214, 5736, 18), // "setChannelMin_Rssi"
QT_MOC_LITERAL(215, 5755, 17), // "setChannelNeutral"
QT_MOC_LITERAL(216, 5773, 25), // "setChannelNeutralThrottle"
QT_MOC_LITERAL(217, 5799, 26), // "setChannelNeutral_Throttle"
QT_MOC_LITERAL(218, 5826, 21), // "setChannelNeutralRoll"
QT_MOC_LITERAL(219, 5848, 22), // "setChannelNeutral_Roll"
QT_MOC_LITERAL(220, 5871, 22), // "setChannelNeutralPitch"
QT_MOC_LITERAL(221, 5894, 23), // "setChannelNeutral_Pitch"
QT_MOC_LITERAL(222, 5918, 20), // "setChannelNeutralYaw"
QT_MOC_LITERAL(223, 5939, 21), // "setChannelNeutral_Yaw"
QT_MOC_LITERAL(224, 5961, 27), // "setChannelNeutralFlightMode"
QT_MOC_LITERAL(225, 5989, 28), // "setChannelNeutral_FlightMode"
QT_MOC_LITERAL(226, 6018, 27), // "setChannelNeutralCollective"
QT_MOC_LITERAL(227, 6046, 28), // "setChannelNeutral_Collective"
QT_MOC_LITERAL(228, 6075, 27), // "setChannelNeutralAccessory0"
QT_MOC_LITERAL(229, 6103, 28), // "setChannelNeutral_Accessory0"
QT_MOC_LITERAL(230, 6132, 27), // "setChannelNeutralAccessory1"
QT_MOC_LITERAL(231, 6160, 28), // "setChannelNeutral_Accessory1"
QT_MOC_LITERAL(232, 6189, 27), // "setChannelNeutralAccessory2"
QT_MOC_LITERAL(233, 6217, 28), // "setChannelNeutral_Accessory2"
QT_MOC_LITERAL(234, 6246, 27), // "setChannelNeutralAccessory3"
QT_MOC_LITERAL(235, 6274, 28), // "setChannelNeutral_Accessory3"
QT_MOC_LITERAL(236, 6303, 21), // "setChannelNeutralRssi"
QT_MOC_LITERAL(237, 6325, 22), // "setChannelNeutral_Rssi"
QT_MOC_LITERAL(238, 6348, 13), // "setChannelMax"
QT_MOC_LITERAL(239, 6362, 21), // "setChannelMaxThrottle"
QT_MOC_LITERAL(240, 6384, 22), // "setChannelMax_Throttle"
QT_MOC_LITERAL(241, 6407, 17), // "setChannelMaxRoll"
QT_MOC_LITERAL(242, 6425, 18), // "setChannelMax_Roll"
QT_MOC_LITERAL(243, 6444, 18), // "setChannelMaxPitch"
QT_MOC_LITERAL(244, 6463, 19), // "setChannelMax_Pitch"
QT_MOC_LITERAL(245, 6483, 16), // "setChannelMaxYaw"
QT_MOC_LITERAL(246, 6500, 17), // "setChannelMax_Yaw"
QT_MOC_LITERAL(247, 6518, 23), // "setChannelMaxFlightMode"
QT_MOC_LITERAL(248, 6542, 24), // "setChannelMax_FlightMode"
QT_MOC_LITERAL(249, 6567, 23), // "setChannelMaxCollective"
QT_MOC_LITERAL(250, 6591, 24), // "setChannelMax_Collective"
QT_MOC_LITERAL(251, 6616, 23), // "setChannelMaxAccessory0"
QT_MOC_LITERAL(252, 6640, 24), // "setChannelMax_Accessory0"
QT_MOC_LITERAL(253, 6665, 23), // "setChannelMaxAccessory1"
QT_MOC_LITERAL(254, 6689, 24), // "setChannelMax_Accessory1"
QT_MOC_LITERAL(255, 6714, 23), // "setChannelMaxAccessory2"
QT_MOC_LITERAL(256, 6738, 24), // "setChannelMax_Accessory2"
QT_MOC_LITERAL(257, 6763, 23), // "setChannelMaxAccessory3"
QT_MOC_LITERAL(258, 6787, 24), // "setChannelMax_Accessory3"
QT_MOC_LITERAL(259, 6812, 17), // "setChannelMaxRssi"
QT_MOC_LITERAL(260, 6830, 18), // "setChannelMax_Rssi"
QT_MOC_LITERAL(261, 6849, 15), // "setResponseTime"
QT_MOC_LITERAL(262, 6865, 19), // "setResponseTimeRoll"
QT_MOC_LITERAL(263, 6885, 20), // "setResponseTime_Roll"
QT_MOC_LITERAL(264, 6906, 20), // "setResponseTimePitch"
QT_MOC_LITERAL(265, 6927, 21), // "setResponseTime_Pitch"
QT_MOC_LITERAL(266, 6949, 18), // "setResponseTimeYaw"
QT_MOC_LITERAL(267, 6968, 19), // "setResponseTime_Yaw"
QT_MOC_LITERAL(268, 6988, 25), // "setResponseTimeCollective"
QT_MOC_LITERAL(269, 7014, 26), // "setResponseTime_Collective"
QT_MOC_LITERAL(270, 7041, 25), // "setResponseTimeAccessory0"
QT_MOC_LITERAL(271, 7067, 26), // "setResponseTime_Accessory0"
QT_MOC_LITERAL(272, 7094, 25), // "setResponseTimeAccessory1"
QT_MOC_LITERAL(273, 7120, 26), // "setResponseTime_Accessory1"
QT_MOC_LITERAL(274, 7147, 25), // "setResponseTimeAccessory2"
QT_MOC_LITERAL(275, 7173, 26), // "setResponseTime_Accessory2"
QT_MOC_LITERAL(276, 7200, 25), // "setResponseTimeAccessory3"
QT_MOC_LITERAL(277, 7226, 26), // "setResponseTime_Accessory3"
QT_MOC_LITERAL(278, 7253, 19), // "setResponseTimeRssi"
QT_MOC_LITERAL(279, 7273, 20), // "setResponseTime_Rssi"
QT_MOC_LITERAL(280, 7294, 16), // "setChannelGroups"
QT_MOC_LITERAL(281, 7311, 24), // "setChannelGroupsThrottle"
QT_MOC_LITERAL(282, 7336, 25), // "setChannelGroups_Throttle"
QT_MOC_LITERAL(283, 7362, 20), // "setChannelGroupsRoll"
QT_MOC_LITERAL(284, 7383, 21), // "setChannelGroups_Roll"
QT_MOC_LITERAL(285, 7405, 21), // "setChannelGroupsPitch"
QT_MOC_LITERAL(286, 7427, 22), // "setChannelGroups_Pitch"
QT_MOC_LITERAL(287, 7450, 19), // "setChannelGroupsYaw"
QT_MOC_LITERAL(288, 7470, 20), // "setChannelGroups_Yaw"
QT_MOC_LITERAL(289, 7491, 26), // "setChannelGroupsFlightMode"
QT_MOC_LITERAL(290, 7518, 27), // "setChannelGroups_FlightMode"
QT_MOC_LITERAL(291, 7546, 26), // "setChannelGroupsCollective"
QT_MOC_LITERAL(292, 7573, 27), // "setChannelGroups_Collective"
QT_MOC_LITERAL(293, 7601, 26), // "setChannelGroupsAccessory0"
QT_MOC_LITERAL(294, 7628, 27), // "setChannelGroups_Accessory0"
QT_MOC_LITERAL(295, 7656, 26), // "setChannelGroupsAccessory1"
QT_MOC_LITERAL(296, 7683, 27), // "setChannelGroups_Accessory1"
QT_MOC_LITERAL(297, 7711, 26), // "setChannelGroupsAccessory2"
QT_MOC_LITERAL(298, 7738, 27), // "setChannelGroups_Accessory2"
QT_MOC_LITERAL(299, 7766, 26), // "setChannelGroupsAccessory3"
QT_MOC_LITERAL(300, 7793, 27), // "setChannelGroups_Accessory3"
QT_MOC_LITERAL(301, 7821, 20), // "setChannelGroupsRssi"
QT_MOC_LITERAL(302, 7842, 21), // "setChannelGroups_Rssi"
QT_MOC_LITERAL(303, 7864, 16), // "setChannelNumber"
QT_MOC_LITERAL(304, 7881, 24), // "setChannelNumberThrottle"
QT_MOC_LITERAL(305, 7906, 25), // "setChannelNumber_Throttle"
QT_MOC_LITERAL(306, 7932, 20), // "setChannelNumberRoll"
QT_MOC_LITERAL(307, 7953, 21), // "setChannelNumber_Roll"
QT_MOC_LITERAL(308, 7975, 21), // "setChannelNumberPitch"
QT_MOC_LITERAL(309, 7997, 22), // "setChannelNumber_Pitch"
QT_MOC_LITERAL(310, 8020, 19), // "setChannelNumberYaw"
QT_MOC_LITERAL(311, 8040, 20), // "setChannelNumber_Yaw"
QT_MOC_LITERAL(312, 8061, 26), // "setChannelNumberFlightMode"
QT_MOC_LITERAL(313, 8088, 27), // "setChannelNumber_FlightMode"
QT_MOC_LITERAL(314, 8116, 26), // "setChannelNumberCollective"
QT_MOC_LITERAL(315, 8143, 27), // "setChannelNumber_Collective"
QT_MOC_LITERAL(316, 8171, 26), // "setChannelNumberAccessory0"
QT_MOC_LITERAL(317, 8198, 27), // "setChannelNumber_Accessory0"
QT_MOC_LITERAL(318, 8226, 26), // "setChannelNumberAccessory1"
QT_MOC_LITERAL(319, 8253, 27), // "setChannelNumber_Accessory1"
QT_MOC_LITERAL(320, 8281, 26), // "setChannelNumberAccessory2"
QT_MOC_LITERAL(321, 8308, 27), // "setChannelNumber_Accessory2"
QT_MOC_LITERAL(322, 8336, 26), // "setChannelNumberAccessory3"
QT_MOC_LITERAL(323, 8363, 27), // "setChannelNumber_Accessory3"
QT_MOC_LITERAL(324, 8391, 20), // "setChannelNumberRssi"
QT_MOC_LITERAL(325, 8412, 21), // "setChannelNumber_Rssi"
QT_MOC_LITERAL(326, 8434, 11), // "setDeadband"
QT_MOC_LITERAL(327, 8446, 26), // "setDeadbandAssistedControl"
QT_MOC_LITERAL(328, 8473, 19), // "setFlightModeNumber"
QT_MOC_LITERAL(329, 8493, 35), // "setFailsafeFlightModeSwitchPo..."
QT_MOC_LITERAL(330, 8529, 17), // "emitNotifications"
QT_MOC_LITERAL(331, 8547, 15), // "failsafeChannel"
QT_MOC_LITERAL(332, 8563, 18), // "getFailsafeChannel"
QT_MOC_LITERAL(333, 8582, 27), // "getFailsafeChannel_Throttle"
QT_MOC_LITERAL(334, 8610, 23), // "getFailsafeChannel_Roll"
QT_MOC_LITERAL(335, 8634, 24), // "getFailsafeChannel_Pitch"
QT_MOC_LITERAL(336, 8659, 22), // "getFailsafeChannel_Yaw"
QT_MOC_LITERAL(337, 8682, 29), // "getFailsafeChannel_Collective"
QT_MOC_LITERAL(338, 8712, 29), // "getFailsafeChannel_Accessory0"
QT_MOC_LITERAL(339, 8742, 29), // "getFailsafeChannel_Accessory1"
QT_MOC_LITERAL(340, 8772, 29), // "getFailsafeChannel_Accessory2"
QT_MOC_LITERAL(341, 8802, 29), // "getFailsafeChannel_Accessory3"
QT_MOC_LITERAL(342, 8832, 10), // "channelMin"
QT_MOC_LITERAL(343, 8843, 13), // "getChannelMin"
QT_MOC_LITERAL(344, 8857, 22), // "getChannelMin_Throttle"
QT_MOC_LITERAL(345, 8880, 18), // "getChannelMin_Roll"
QT_MOC_LITERAL(346, 8899, 19), // "getChannelMin_Pitch"
QT_MOC_LITERAL(347, 8919, 17), // "getChannelMin_Yaw"
QT_MOC_LITERAL(348, 8937, 24), // "getChannelMin_FlightMode"
QT_MOC_LITERAL(349, 8962, 24), // "getChannelMin_Collective"
QT_MOC_LITERAL(350, 8987, 24), // "getChannelMin_Accessory0"
QT_MOC_LITERAL(351, 9012, 24), // "getChannelMin_Accessory1"
QT_MOC_LITERAL(352, 9037, 24), // "getChannelMin_Accessory2"
QT_MOC_LITERAL(353, 9062, 24), // "getChannelMin_Accessory3"
QT_MOC_LITERAL(354, 9087, 18), // "getChannelMin_Rssi"
QT_MOC_LITERAL(355, 9106, 14), // "channelNeutral"
QT_MOC_LITERAL(356, 9121, 17), // "getChannelNeutral"
QT_MOC_LITERAL(357, 9139, 26), // "getChannelNeutral_Throttle"
QT_MOC_LITERAL(358, 9166, 22), // "getChannelNeutral_Roll"
QT_MOC_LITERAL(359, 9189, 23), // "getChannelNeutral_Pitch"
QT_MOC_LITERAL(360, 9213, 21), // "getChannelNeutral_Yaw"
QT_MOC_LITERAL(361, 9235, 28), // "getChannelNeutral_FlightMode"
QT_MOC_LITERAL(362, 9264, 28), // "getChannelNeutral_Collective"
QT_MOC_LITERAL(363, 9293, 28), // "getChannelNeutral_Accessory0"
QT_MOC_LITERAL(364, 9322, 28), // "getChannelNeutral_Accessory1"
QT_MOC_LITERAL(365, 9351, 28), // "getChannelNeutral_Accessory2"
QT_MOC_LITERAL(366, 9380, 28), // "getChannelNeutral_Accessory3"
QT_MOC_LITERAL(367, 9409, 22), // "getChannelNeutral_Rssi"
QT_MOC_LITERAL(368, 9432, 10), // "channelMax"
QT_MOC_LITERAL(369, 9443, 13), // "getChannelMax"
QT_MOC_LITERAL(370, 9457, 22), // "getChannelMax_Throttle"
QT_MOC_LITERAL(371, 9480, 18), // "getChannelMax_Roll"
QT_MOC_LITERAL(372, 9499, 19), // "getChannelMax_Pitch"
QT_MOC_LITERAL(373, 9519, 17), // "getChannelMax_Yaw"
QT_MOC_LITERAL(374, 9537, 24), // "getChannelMax_FlightMode"
QT_MOC_LITERAL(375, 9562, 24), // "getChannelMax_Collective"
QT_MOC_LITERAL(376, 9587, 24), // "getChannelMax_Accessory0"
QT_MOC_LITERAL(377, 9612, 24), // "getChannelMax_Accessory1"
QT_MOC_LITERAL(378, 9637, 24), // "getChannelMax_Accessory2"
QT_MOC_LITERAL(379, 9662, 24), // "getChannelMax_Accessory3"
QT_MOC_LITERAL(380, 9687, 18), // "getChannelMax_Rssi"
QT_MOC_LITERAL(381, 9706, 12), // "responseTime"
QT_MOC_LITERAL(382, 9719, 15), // "getResponseTime"
QT_MOC_LITERAL(383, 9735, 20), // "getResponseTime_Roll"
QT_MOC_LITERAL(384, 9756, 21), // "getResponseTime_Pitch"
QT_MOC_LITERAL(385, 9778, 19), // "getResponseTime_Yaw"
QT_MOC_LITERAL(386, 9798, 26), // "getResponseTime_Collective"
QT_MOC_LITERAL(387, 9825, 26), // "getResponseTime_Accessory0"
QT_MOC_LITERAL(388, 9852, 26), // "getResponseTime_Accessory1"
QT_MOC_LITERAL(389, 9879, 26), // "getResponseTime_Accessory2"
QT_MOC_LITERAL(390, 9906, 26), // "getResponseTime_Accessory3"
QT_MOC_LITERAL(391, 9933, 20), // "getResponseTime_Rssi"
QT_MOC_LITERAL(392, 9954, 13), // "channelGroups"
QT_MOC_LITERAL(393, 9968, 16), // "getChannelGroups"
QT_MOC_LITERAL(394, 9985, 25), // "getChannelGroups_Throttle"
QT_MOC_LITERAL(395, 10011, 21), // "getChannelGroups_Roll"
QT_MOC_LITERAL(396, 10033, 22), // "getChannelGroups_Pitch"
QT_MOC_LITERAL(397, 10056, 20), // "getChannelGroups_Yaw"
QT_MOC_LITERAL(398, 10077, 27), // "getChannelGroups_FlightMode"
QT_MOC_LITERAL(399, 10105, 27), // "getChannelGroups_Collective"
QT_MOC_LITERAL(400, 10133, 27), // "getChannelGroups_Accessory0"
QT_MOC_LITERAL(401, 10161, 27), // "getChannelGroups_Accessory1"
QT_MOC_LITERAL(402, 10189, 27), // "getChannelGroups_Accessory2"
QT_MOC_LITERAL(403, 10217, 27), // "getChannelGroups_Accessory3"
QT_MOC_LITERAL(404, 10245, 21), // "getChannelGroups_Rssi"
QT_MOC_LITERAL(405, 10267, 13), // "channelNumber"
QT_MOC_LITERAL(406, 10281, 16), // "getChannelNumber"
QT_MOC_LITERAL(407, 10298, 25), // "getChannelNumber_Throttle"
QT_MOC_LITERAL(408, 10324, 21), // "getChannelNumber_Roll"
QT_MOC_LITERAL(409, 10346, 22), // "getChannelNumber_Pitch"
QT_MOC_LITERAL(410, 10369, 20), // "getChannelNumber_Yaw"
QT_MOC_LITERAL(411, 10390, 27), // "getChannelNumber_FlightMode"
QT_MOC_LITERAL(412, 10418, 27), // "getChannelNumber_Collective"
QT_MOC_LITERAL(413, 10446, 27), // "getChannelNumber_Accessory0"
QT_MOC_LITERAL(414, 10474, 27), // "getChannelNumber_Accessory1"
QT_MOC_LITERAL(415, 10502, 27), // "getChannelNumber_Accessory2"
QT_MOC_LITERAL(416, 10530, 27), // "getChannelNumber_Accessory3"
QT_MOC_LITERAL(417, 10558, 21), // "getChannelNumber_Rssi"
QT_MOC_LITERAL(418, 10580, 11), // "getDeadband"
QT_MOC_LITERAL(419, 10592, 26), // "getDeadbandAssistedControl"
QT_MOC_LITERAL(420, 10619, 19), // "getFlightModeNumber"
QT_MOC_LITERAL(421, 10639, 35), // "getFailsafeFlightModeSwitchPo..."
QT_MOC_LITERAL(422, 10675, 23), // "failsafeChannelThrottle"
QT_MOC_LITERAL(423, 10699, 19), // "failsafeChannelRoll"
QT_MOC_LITERAL(424, 10719, 20), // "failsafeChannelPitch"
QT_MOC_LITERAL(425, 10740, 18), // "failsafeChannelYaw"
QT_MOC_LITERAL(426, 10759, 25), // "failsafeChannelCollective"
QT_MOC_LITERAL(427, 10785, 25), // "failsafeChannelAccessory0"
QT_MOC_LITERAL(428, 10811, 25), // "failsafeChannelAccessory1"
QT_MOC_LITERAL(429, 10837, 25), // "failsafeChannelAccessory2"
QT_MOC_LITERAL(430, 10863, 25), // "failsafeChannelAccessory3"
QT_MOC_LITERAL(431, 10889, 18), // "channelMinThrottle"
QT_MOC_LITERAL(432, 10908, 14), // "channelMinRoll"
QT_MOC_LITERAL(433, 10923, 15), // "channelMinPitch"
QT_MOC_LITERAL(434, 10939, 13), // "channelMinYaw"
QT_MOC_LITERAL(435, 10953, 20), // "channelMinFlightMode"
QT_MOC_LITERAL(436, 10974, 20), // "channelMinCollective"
QT_MOC_LITERAL(437, 10995, 20), // "channelMinAccessory0"
QT_MOC_LITERAL(438, 11016, 20), // "channelMinAccessory1"
QT_MOC_LITERAL(439, 11037, 20), // "channelMinAccessory2"
QT_MOC_LITERAL(440, 11058, 20), // "channelMinAccessory3"
QT_MOC_LITERAL(441, 11079, 14), // "channelMinRssi"
QT_MOC_LITERAL(442, 11094, 22), // "channelNeutralThrottle"
QT_MOC_LITERAL(443, 11117, 18), // "channelNeutralRoll"
QT_MOC_LITERAL(444, 11136, 19), // "channelNeutralPitch"
QT_MOC_LITERAL(445, 11156, 17), // "channelNeutralYaw"
QT_MOC_LITERAL(446, 11174, 24), // "channelNeutralFlightMode"
QT_MOC_LITERAL(447, 11199, 24), // "channelNeutralCollective"
QT_MOC_LITERAL(448, 11224, 24), // "channelNeutralAccessory0"
QT_MOC_LITERAL(449, 11249, 24), // "channelNeutralAccessory1"
QT_MOC_LITERAL(450, 11274, 24), // "channelNeutralAccessory2"
QT_MOC_LITERAL(451, 11299, 24), // "channelNeutralAccessory3"
QT_MOC_LITERAL(452, 11324, 18), // "channelNeutralRssi"
QT_MOC_LITERAL(453, 11343, 18), // "channelMaxThrottle"
QT_MOC_LITERAL(454, 11362, 14), // "channelMaxRoll"
QT_MOC_LITERAL(455, 11377, 15), // "channelMaxPitch"
QT_MOC_LITERAL(456, 11393, 13), // "channelMaxYaw"
QT_MOC_LITERAL(457, 11407, 20), // "channelMaxFlightMode"
QT_MOC_LITERAL(458, 11428, 20), // "channelMaxCollective"
QT_MOC_LITERAL(459, 11449, 20), // "channelMaxAccessory0"
QT_MOC_LITERAL(460, 11470, 20), // "channelMaxAccessory1"
QT_MOC_LITERAL(461, 11491, 20), // "channelMaxAccessory2"
QT_MOC_LITERAL(462, 11512, 20), // "channelMaxAccessory3"
QT_MOC_LITERAL(463, 11533, 14), // "channelMaxRssi"
QT_MOC_LITERAL(464, 11548, 16), // "responseTimeRoll"
QT_MOC_LITERAL(465, 11565, 17), // "responseTimePitch"
QT_MOC_LITERAL(466, 11583, 15), // "responseTimeYaw"
QT_MOC_LITERAL(467, 11599, 22), // "responseTimeCollective"
QT_MOC_LITERAL(468, 11622, 22), // "responseTimeAccessory0"
QT_MOC_LITERAL(469, 11645, 22), // "responseTimeAccessory1"
QT_MOC_LITERAL(470, 11668, 22), // "responseTimeAccessory2"
QT_MOC_LITERAL(471, 11691, 22), // "responseTimeAccessory3"
QT_MOC_LITERAL(472, 11714, 16), // "responseTimeRssi"
QT_MOC_LITERAL(473, 11731, 21), // "channelGroupsThrottle"
QT_MOC_LITERAL(474, 11753, 17), // "channelGroupsRoll"
QT_MOC_LITERAL(475, 11771, 18), // "channelGroupsPitch"
QT_MOC_LITERAL(476, 11790, 16), // "channelGroupsYaw"
QT_MOC_LITERAL(477, 11807, 23), // "channelGroupsFlightMode"
QT_MOC_LITERAL(478, 11831, 23), // "channelGroupsCollective"
QT_MOC_LITERAL(479, 11855, 23), // "channelGroupsAccessory0"
QT_MOC_LITERAL(480, 11879, 23), // "channelGroupsAccessory1"
QT_MOC_LITERAL(481, 11903, 23), // "channelGroupsAccessory2"
QT_MOC_LITERAL(482, 11927, 23), // "channelGroupsAccessory3"
QT_MOC_LITERAL(483, 11951, 17), // "channelGroupsRssi"
QT_MOC_LITERAL(484, 11969, 21), // "channelNumberThrottle"
QT_MOC_LITERAL(485, 11991, 17), // "channelNumberRoll"
QT_MOC_LITERAL(486, 12009, 18), // "channelNumberPitch"
QT_MOC_LITERAL(487, 12028, 16), // "channelNumberYaw"
QT_MOC_LITERAL(488, 12045, 23), // "channelNumberFlightMode"
QT_MOC_LITERAL(489, 12069, 23), // "channelNumberCollective"
QT_MOC_LITERAL(490, 12093, 23), // "channelNumberAccessory0"
QT_MOC_LITERAL(491, 12117, 23), // "channelNumberAccessory1"
QT_MOC_LITERAL(492, 12141, 23), // "channelNumberAccessory2"
QT_MOC_LITERAL(493, 12165, 23), // "channelNumberAccessory3"
QT_MOC_LITERAL(494, 12189, 17), // "channelNumberRssi"
QT_MOC_LITERAL(495, 12207, 8), // "deadband"
QT_MOC_LITERAL(496, 12216, 23), // "deadbandAssistedControl"
QT_MOC_LITERAL(497, 12240, 16), // "flightModeNumber"
QT_MOC_LITERAL(498, 12257, 32), // "failsafeFlightModeSwitchPosition"
QT_MOC_LITERAL(499, 12290, 24), // "FailsafeChannel_Throttle"
QT_MOC_LITERAL(500, 12315, 20), // "FailsafeChannel_Roll"
QT_MOC_LITERAL(501, 12336, 21), // "FailsafeChannel_Pitch"
QT_MOC_LITERAL(502, 12358, 19), // "FailsafeChannel_Yaw"
QT_MOC_LITERAL(503, 12378, 26), // "FailsafeChannel_Collective"
QT_MOC_LITERAL(504, 12405, 26), // "FailsafeChannel_Accessory0"
QT_MOC_LITERAL(505, 12432, 26), // "FailsafeChannel_Accessory1"
QT_MOC_LITERAL(506, 12459, 26), // "FailsafeChannel_Accessory2"
QT_MOC_LITERAL(507, 12486, 26), // "FailsafeChannel_Accessory3"
QT_MOC_LITERAL(508, 12513, 19), // "ChannelMin_Throttle"
QT_MOC_LITERAL(509, 12533, 15), // "ChannelMin_Roll"
QT_MOC_LITERAL(510, 12549, 16), // "ChannelMin_Pitch"
QT_MOC_LITERAL(511, 12566, 14), // "ChannelMin_Yaw"
QT_MOC_LITERAL(512, 12581, 21), // "ChannelMin_FlightMode"
QT_MOC_LITERAL(513, 12603, 21), // "ChannelMin_Collective"
QT_MOC_LITERAL(514, 12625, 21), // "ChannelMin_Accessory0"
QT_MOC_LITERAL(515, 12647, 21), // "ChannelMin_Accessory1"
QT_MOC_LITERAL(516, 12669, 21), // "ChannelMin_Accessory2"
QT_MOC_LITERAL(517, 12691, 21), // "ChannelMin_Accessory3"
QT_MOC_LITERAL(518, 12713, 15), // "ChannelMin_Rssi"
QT_MOC_LITERAL(519, 12729, 23), // "ChannelNeutral_Throttle"
QT_MOC_LITERAL(520, 12753, 19), // "ChannelNeutral_Roll"
QT_MOC_LITERAL(521, 12773, 20), // "ChannelNeutral_Pitch"
QT_MOC_LITERAL(522, 12794, 18), // "ChannelNeutral_Yaw"
QT_MOC_LITERAL(523, 12813, 25), // "ChannelNeutral_FlightMode"
QT_MOC_LITERAL(524, 12839, 25), // "ChannelNeutral_Collective"
QT_MOC_LITERAL(525, 12865, 25), // "ChannelNeutral_Accessory0"
QT_MOC_LITERAL(526, 12891, 25), // "ChannelNeutral_Accessory1"
QT_MOC_LITERAL(527, 12917, 25), // "ChannelNeutral_Accessory2"
QT_MOC_LITERAL(528, 12943, 25), // "ChannelNeutral_Accessory3"
QT_MOC_LITERAL(529, 12969, 19), // "ChannelNeutral_Rssi"
QT_MOC_LITERAL(530, 12989, 19), // "ChannelMax_Throttle"
QT_MOC_LITERAL(531, 13009, 15), // "ChannelMax_Roll"
QT_MOC_LITERAL(532, 13025, 16), // "ChannelMax_Pitch"
QT_MOC_LITERAL(533, 13042, 14), // "ChannelMax_Yaw"
QT_MOC_LITERAL(534, 13057, 21), // "ChannelMax_FlightMode"
QT_MOC_LITERAL(535, 13079, 21), // "ChannelMax_Collective"
QT_MOC_LITERAL(536, 13101, 21), // "ChannelMax_Accessory0"
QT_MOC_LITERAL(537, 13123, 21), // "ChannelMax_Accessory1"
QT_MOC_LITERAL(538, 13145, 21), // "ChannelMax_Accessory2"
QT_MOC_LITERAL(539, 13167, 21), // "ChannelMax_Accessory3"
QT_MOC_LITERAL(540, 13189, 15), // "ChannelMax_Rssi"
QT_MOC_LITERAL(541, 13205, 17), // "ResponseTime_Roll"
QT_MOC_LITERAL(542, 13223, 18), // "ResponseTime_Pitch"
QT_MOC_LITERAL(543, 13242, 16), // "ResponseTime_Yaw"
QT_MOC_LITERAL(544, 13259, 23), // "ResponseTime_Collective"
QT_MOC_LITERAL(545, 13283, 23), // "ResponseTime_Accessory0"
QT_MOC_LITERAL(546, 13307, 23), // "ResponseTime_Accessory1"
QT_MOC_LITERAL(547, 13331, 23), // "ResponseTime_Accessory2"
QT_MOC_LITERAL(548, 13355, 23), // "ResponseTime_Accessory3"
QT_MOC_LITERAL(549, 13379, 17), // "ResponseTime_Rssi"
QT_MOC_LITERAL(550, 13397, 22), // "ChannelGroups_Throttle"
QT_MOC_LITERAL(551, 13420, 18), // "ChannelGroups_Roll"
QT_MOC_LITERAL(552, 13439, 19), // "ChannelGroups_Pitch"
QT_MOC_LITERAL(553, 13459, 17), // "ChannelGroups_Yaw"
QT_MOC_LITERAL(554, 13477, 24), // "ChannelGroups_FlightMode"
QT_MOC_LITERAL(555, 13502, 24), // "ChannelGroups_Collective"
QT_MOC_LITERAL(556, 13527, 24), // "ChannelGroups_Accessory0"
QT_MOC_LITERAL(557, 13552, 24), // "ChannelGroups_Accessory1"
QT_MOC_LITERAL(558, 13577, 24), // "ChannelGroups_Accessory2"
QT_MOC_LITERAL(559, 13602, 24), // "ChannelGroups_Accessory3"
QT_MOC_LITERAL(560, 13627, 18), // "ChannelGroups_Rssi"
QT_MOC_LITERAL(561, 13646, 22), // "ChannelNumber_Throttle"
QT_MOC_LITERAL(562, 13669, 18), // "ChannelNumber_Roll"
QT_MOC_LITERAL(563, 13688, 19), // "ChannelNumber_Pitch"
QT_MOC_LITERAL(564, 13708, 17), // "ChannelNumber_Yaw"
QT_MOC_LITERAL(565, 13726, 24), // "ChannelNumber_FlightMode"
QT_MOC_LITERAL(566, 13751, 24), // "ChannelNumber_Collective"
QT_MOC_LITERAL(567, 13776, 24), // "ChannelNumber_Accessory0"
QT_MOC_LITERAL(568, 13801, 24), // "ChannelNumber_Accessory1"
QT_MOC_LITERAL(569, 13826, 24), // "ChannelNumber_Accessory2"
QT_MOC_LITERAL(570, 13851, 24), // "ChannelNumber_Accessory3"
QT_MOC_LITERAL(571, 13876, 18), // "ChannelNumber_Rssi"
QT_MOC_LITERAL(572, 13895, 8), // "Deadband"
QT_MOC_LITERAL(573, 13904, 23), // "DeadbandAssistedControl"
QT_MOC_LITERAL(574, 13928, 16), // "FlightModeNumber"
QT_MOC_LITERAL(575, 13945, 32) // "FailsafeFlightModeSwitchPosition"

    },
    "ManualControlSettings\0failsafeChannelChanged\0"
    "\0index\0value\0FailsafeChannelChanged\0"
    "failsafeChannelThrottleChanged\0"
    "FailsafeChannel_ThrottleChanged\0"
    "failsafeChannelRollChanged\0"
    "FailsafeChannel_RollChanged\0"
    "failsafeChannelPitchChanged\0"
    "FailsafeChannel_PitchChanged\0"
    "failsafeChannelYawChanged\0"
    "FailsafeChannel_YawChanged\0"
    "failsafeChannelCollectiveChanged\0"
    "FailsafeChannel_CollectiveChanged\0"
    "failsafeChannelAccessory0Changed\0"
    "FailsafeChannel_Accessory0Changed\0"
    "failsafeChannelAccessory1Changed\0"
    "FailsafeChannel_Accessory1Changed\0"
    "failsafeChannelAccessory2Changed\0"
    "FailsafeChannel_Accessory2Changed\0"
    "failsafeChannelAccessory3Changed\0"
    "FailsafeChannel_Accessory3Changed\0"
    "channelMinChanged\0ChannelMinChanged\0"
    "channelMinThrottleChanged\0"
    "ChannelMin_ThrottleChanged\0"
    "channelMinRollChanged\0ChannelMin_RollChanged\0"
    "channelMinPitchChanged\0ChannelMin_PitchChanged\0"
    "channelMinYawChanged\0ChannelMin_YawChanged\0"
    "channelMinFlightModeChanged\0"
    "ChannelMin_FlightModeChanged\0"
    "channelMinCollectiveChanged\0"
    "ChannelMin_CollectiveChanged\0"
    "channelMinAccessory0Changed\0"
    "ChannelMin_Accessory0Changed\0"
    "channelMinAccessory1Changed\0"
    "ChannelMin_Accessory1Changed\0"
    "channelMinAccessory2Changed\0"
    "ChannelMin_Accessory2Changed\0"
    "channelMinAccessory3Changed\0"
    "ChannelMin_Accessory3Changed\0"
    "channelMinRssiChanged\0ChannelMin_RssiChanged\0"
    "channelNeutralChanged\0ChannelNeutralChanged\0"
    "channelNeutralThrottleChanged\0"
    "ChannelNeutral_ThrottleChanged\0"
    "channelNeutralRollChanged\0"
    "ChannelNeutral_RollChanged\0"
    "channelNeutralPitchChanged\0"
    "ChannelNeutral_PitchChanged\0"
    "channelNeutralYawChanged\0"
    "ChannelNeutral_YawChanged\0"
    "channelNeutralFlightModeChanged\0"
    "ChannelNeutral_FlightModeChanged\0"
    "channelNeutralCollectiveChanged\0"
    "ChannelNeutral_CollectiveChanged\0"
    "channelNeutralAccessory0Changed\0"
    "ChannelNeutral_Accessory0Changed\0"
    "channelNeutralAccessory1Changed\0"
    "ChannelNeutral_Accessory1Changed\0"
    "channelNeutralAccessory2Changed\0"
    "ChannelNeutral_Accessory2Changed\0"
    "channelNeutralAccessory3Changed\0"
    "ChannelNeutral_Accessory3Changed\0"
    "channelNeutralRssiChanged\0"
    "ChannelNeutral_RssiChanged\0channelMaxChanged\0"
    "ChannelMaxChanged\0channelMaxThrottleChanged\0"
    "ChannelMax_ThrottleChanged\0"
    "channelMaxRollChanged\0ChannelMax_RollChanged\0"
    "channelMaxPitchChanged\0ChannelMax_PitchChanged\0"
    "channelMaxYawChanged\0ChannelMax_YawChanged\0"
    "channelMaxFlightModeChanged\0"
    "ChannelMax_FlightModeChanged\0"
    "channelMaxCollectiveChanged\0"
    "ChannelMax_CollectiveChanged\0"
    "channelMaxAccessory0Changed\0"
    "ChannelMax_Accessory0Changed\0"
    "channelMaxAccessory1Changed\0"
    "ChannelMax_Accessory1Changed\0"
    "channelMaxAccessory2Changed\0"
    "ChannelMax_Accessory2Changed\0"
    "channelMaxAccessory3Changed\0"
    "ChannelMax_Accessory3Changed\0"
    "channelMaxRssiChanged\0ChannelMax_RssiChanged\0"
    "responseTimeChanged\0ResponseTimeChanged\0"
    "responseTimeRollChanged\0"
    "ResponseTime_RollChanged\0"
    "responseTimePitchChanged\0"
    "ResponseTime_PitchChanged\0"
    "responseTimeYawChanged\0ResponseTime_YawChanged\0"
    "responseTimeCollectiveChanged\0"
    "ResponseTime_CollectiveChanged\0"
    "responseTimeAccessory0Changed\0"
    "ResponseTime_Accessory0Changed\0"
    "responseTimeAccessory1Changed\0"
    "ResponseTime_Accessory1Changed\0"
    "responseTimeAccessory2Changed\0"
    "ResponseTime_Accessory2Changed\0"
    "responseTimeAccessory3Changed\0"
    "ResponseTime_Accessory3Changed\0"
    "responseTimeRssiChanged\0"
    "ResponseTime_RssiChanged\0channelGroupsChanged\0"
    "ManualControlSettings_ChannelGroups::Enum\0"
    "ChannelGroupsChanged\0channelGroupsThrottleChanged\0"
    "ChannelGroups_ThrottleChanged\0"
    "channelGroupsRollChanged\0"
    "ChannelGroups_RollChanged\0"
    "channelGroupsPitchChanged\0"
    "ChannelGroups_PitchChanged\0"
    "channelGroupsYawChanged\0"
    "ChannelGroups_YawChanged\0"
    "channelGroupsFlightModeChanged\0"
    "ChannelGroups_FlightModeChanged\0"
    "channelGroupsCollectiveChanged\0"
    "ChannelGroups_CollectiveChanged\0"
    "channelGroupsAccessory0Changed\0"
    "ChannelGroups_Accessory0Changed\0"
    "channelGroupsAccessory1Changed\0"
    "ChannelGroups_Accessory1Changed\0"
    "channelGroupsAccessory2Changed\0"
    "ChannelGroups_Accessory2Changed\0"
    "channelGroupsAccessory3Changed\0"
    "ChannelGroups_Accessory3Changed\0"
    "channelGroupsRssiChanged\0"
    "ChannelGroups_RssiChanged\0"
    "channelNumberChanged\0ChannelNumberChanged\0"
    "channelNumberThrottleChanged\0"
    "ChannelNumber_ThrottleChanged\0"
    "channelNumberRollChanged\0"
    "ChannelNumber_RollChanged\0"
    "channelNumberPitchChanged\0"
    "ChannelNumber_PitchChanged\0"
    "channelNumberYawChanged\0"
    "ChannelNumber_YawChanged\0"
    "channelNumberFlightModeChanged\0"
    "ChannelNumber_FlightModeChanged\0"
    "channelNumberCollectiveChanged\0"
    "ChannelNumber_CollectiveChanged\0"
    "channelNumberAccessory0Changed\0"
    "ChannelNumber_Accessory0Changed\0"
    "channelNumberAccessory1Changed\0"
    "ChannelNumber_Accessory1Changed\0"
    "channelNumberAccessory2Changed\0"
    "ChannelNumber_Accessory2Changed\0"
    "channelNumberAccessory3Changed\0"
    "ChannelNumber_Accessory3Changed\0"
    "channelNumberRssiChanged\0"
    "ChannelNumber_RssiChanged\0deadbandChanged\0"
    "DeadbandChanged\0deadbandAssistedControlChanged\0"
    "DeadbandAssistedControlChanged\0"
    "flightModeNumberChanged\0FlightModeNumberChanged\0"
    "failsafeFlightModeSwitchPositionChanged\0"
    "FailsafeFlightModeSwitchPositionChanged\0"
    "setFailsafeChannel\0setFailsafeChannelThrottle\0"
    "setFailsafeChannel_Throttle\0"
    "setFailsafeChannelRoll\0setFailsafeChannel_Roll\0"
    "setFailsafeChannelPitch\0"
    "setFailsafeChannel_Pitch\0setFailsafeChannelYaw\0"
    "setFailsafeChannel_Yaw\0"
    "setFailsafeChannelCollective\0"
    "setFailsafeChannel_Collective\0"
    "setFailsafeChannelAccessory0\0"
    "setFailsafeChannel_Accessory0\0"
    "setFailsafeChannelAccessory1\0"
    "setFailsafeChannel_Accessory1\0"
    "setFailsafeChannelAccessory2\0"
    "setFailsafeChannel_Accessory2\0"
    "setFailsafeChannelAccessory3\0"
    "setFailsafeChannel_Accessory3\0"
    "setChannelMin\0setChannelMinThrottle\0"
    "setChannelMin_Throttle\0setChannelMinRoll\0"
    "setChannelMin_Roll\0setChannelMinPitch\0"
    "setChannelMin_Pitch\0setChannelMinYaw\0"
    "setChannelMin_Yaw\0setChannelMinFlightMode\0"
    "setChannelMin_FlightMode\0"
    "setChannelMinCollective\0"
    "setChannelMin_Collective\0"
    "setChannelMinAccessory0\0"
    "setChannelMin_Accessory0\0"
    "setChannelMinAccessory1\0"
    "setChannelMin_Accessory1\0"
    "setChannelMinAccessory2\0"
    "setChannelMin_Accessory2\0"
    "setChannelMinAccessory3\0"
    "setChannelMin_Accessory3\0setChannelMinRssi\0"
    "setChannelMin_Rssi\0setChannelNeutral\0"
    "setChannelNeutralThrottle\0"
    "setChannelNeutral_Throttle\0"
    "setChannelNeutralRoll\0setChannelNeutral_Roll\0"
    "setChannelNeutralPitch\0setChannelNeutral_Pitch\0"
    "setChannelNeutralYaw\0setChannelNeutral_Yaw\0"
    "setChannelNeutralFlightMode\0"
    "setChannelNeutral_FlightMode\0"
    "setChannelNeutralCollective\0"
    "setChannelNeutral_Collective\0"
    "setChannelNeutralAccessory0\0"
    "setChannelNeutral_Accessory0\0"
    "setChannelNeutralAccessory1\0"
    "setChannelNeutral_Accessory1\0"
    "setChannelNeutralAccessory2\0"
    "setChannelNeutral_Accessory2\0"
    "setChannelNeutralAccessory3\0"
    "setChannelNeutral_Accessory3\0"
    "setChannelNeutralRssi\0setChannelNeutral_Rssi\0"
    "setChannelMax\0setChannelMaxThrottle\0"
    "setChannelMax_Throttle\0setChannelMaxRoll\0"
    "setChannelMax_Roll\0setChannelMaxPitch\0"
    "setChannelMax_Pitch\0setChannelMaxYaw\0"
    "setChannelMax_Yaw\0setChannelMaxFlightMode\0"
    "setChannelMax_FlightMode\0"
    "setChannelMaxCollective\0"
    "setChannelMax_Collective\0"
    "setChannelMaxAccessory0\0"
    "setChannelMax_Accessory0\0"
    "setChannelMaxAccessory1\0"
    "setChannelMax_Accessory1\0"
    "setChannelMaxAccessory2\0"
    "setChannelMax_Accessory2\0"
    "setChannelMaxAccessory3\0"
    "setChannelMax_Accessory3\0setChannelMaxRssi\0"
    "setChannelMax_Rssi\0setResponseTime\0"
    "setResponseTimeRoll\0setResponseTime_Roll\0"
    "setResponseTimePitch\0setResponseTime_Pitch\0"
    "setResponseTimeYaw\0setResponseTime_Yaw\0"
    "setResponseTimeCollective\0"
    "setResponseTime_Collective\0"
    "setResponseTimeAccessory0\0"
    "setResponseTime_Accessory0\0"
    "setResponseTimeAccessory1\0"
    "setResponseTime_Accessory1\0"
    "setResponseTimeAccessory2\0"
    "setResponseTime_Accessory2\0"
    "setResponseTimeAccessory3\0"
    "setResponseTime_Accessory3\0"
    "setResponseTimeRssi\0setResponseTime_Rssi\0"
    "setChannelGroups\0setChannelGroupsThrottle\0"
    "setChannelGroups_Throttle\0"
    "setChannelGroupsRoll\0setChannelGroups_Roll\0"
    "setChannelGroupsPitch\0setChannelGroups_Pitch\0"
    "setChannelGroupsYaw\0setChannelGroups_Yaw\0"
    "setChannelGroupsFlightMode\0"
    "setChannelGroups_FlightMode\0"
    "setChannelGroupsCollective\0"
    "setChannelGroups_Collective\0"
    "setChannelGroupsAccessory0\0"
    "setChannelGroups_Accessory0\0"
    "setChannelGroupsAccessory1\0"
    "setChannelGroups_Accessory1\0"
    "setChannelGroupsAccessory2\0"
    "setChannelGroups_Accessory2\0"
    "setChannelGroupsAccessory3\0"
    "setChannelGroups_Accessory3\0"
    "setChannelGroupsRssi\0setChannelGroups_Rssi\0"
    "setChannelNumber\0setChannelNumberThrottle\0"
    "setChannelNumber_Throttle\0"
    "setChannelNumberRoll\0setChannelNumber_Roll\0"
    "setChannelNumberPitch\0setChannelNumber_Pitch\0"
    "setChannelNumberYaw\0setChannelNumber_Yaw\0"
    "setChannelNumberFlightMode\0"
    "setChannelNumber_FlightMode\0"
    "setChannelNumberCollective\0"
    "setChannelNumber_Collective\0"
    "setChannelNumberAccessory0\0"
    "setChannelNumber_Accessory0\0"
    "setChannelNumberAccessory1\0"
    "setChannelNumber_Accessory1\0"
    "setChannelNumberAccessory2\0"
    "setChannelNumber_Accessory2\0"
    "setChannelNumberAccessory3\0"
    "setChannelNumber_Accessory3\0"
    "setChannelNumberRssi\0setChannelNumber_Rssi\0"
    "setDeadband\0setDeadbandAssistedControl\0"
    "setFlightModeNumber\0"
    "setFailsafeFlightModeSwitchPosition\0"
    "emitNotifications\0failsafeChannel\0"
    "getFailsafeChannel\0getFailsafeChannel_Throttle\0"
    "getFailsafeChannel_Roll\0"
    "getFailsafeChannel_Pitch\0"
    "getFailsafeChannel_Yaw\0"
    "getFailsafeChannel_Collective\0"
    "getFailsafeChannel_Accessory0\0"
    "getFailsafeChannel_Accessory1\0"
    "getFailsafeChannel_Accessory2\0"
    "getFailsafeChannel_Accessory3\0channelMin\0"
    "getChannelMin\0getChannelMin_Throttle\0"
    "getChannelMin_Roll\0getChannelMin_Pitch\0"
    "getChannelMin_Yaw\0getChannelMin_FlightMode\0"
    "getChannelMin_Collective\0"
    "getChannelMin_Accessory0\0"
    "getChannelMin_Accessory1\0"
    "getChannelMin_Accessory2\0"
    "getChannelMin_Accessory3\0getChannelMin_Rssi\0"
    "channelNeutral\0getChannelNeutral\0"
    "getChannelNeutral_Throttle\0"
    "getChannelNeutral_Roll\0getChannelNeutral_Pitch\0"
    "getChannelNeutral_Yaw\0"
    "getChannelNeutral_FlightMode\0"
    "getChannelNeutral_Collective\0"
    "getChannelNeutral_Accessory0\0"
    "getChannelNeutral_Accessory1\0"
    "getChannelNeutral_Accessory2\0"
    "getChannelNeutral_Accessory3\0"
    "getChannelNeutral_Rssi\0channelMax\0"
    "getChannelMax\0getChannelMax_Throttle\0"
    "getChannelMax_Roll\0getChannelMax_Pitch\0"
    "getChannelMax_Yaw\0getChannelMax_FlightMode\0"
    "getChannelMax_Collective\0"
    "getChannelMax_Accessory0\0"
    "getChannelMax_Accessory1\0"
    "getChannelMax_Accessory2\0"
    "getChannelMax_Accessory3\0getChannelMax_Rssi\0"
    "responseTime\0getResponseTime\0"
    "getResponseTime_Roll\0getResponseTime_Pitch\0"
    "getResponseTime_Yaw\0getResponseTime_Collective\0"
    "getResponseTime_Accessory0\0"
    "getResponseTime_Accessory1\0"
    "getResponseTime_Accessory2\0"
    "getResponseTime_Accessory3\0"
    "getResponseTime_Rssi\0channelGroups\0"
    "getChannelGroups\0getChannelGroups_Throttle\0"
    "getChannelGroups_Roll\0getChannelGroups_Pitch\0"
    "getChannelGroups_Yaw\0getChannelGroups_FlightMode\0"
    "getChannelGroups_Collective\0"
    "getChannelGroups_Accessory0\0"
    "getChannelGroups_Accessory1\0"
    "getChannelGroups_Accessory2\0"
    "getChannelGroups_Accessory3\0"
    "getChannelGroups_Rssi\0channelNumber\0"
    "getChannelNumber\0getChannelNumber_Throttle\0"
    "getChannelNumber_Roll\0getChannelNumber_Pitch\0"
    "getChannelNumber_Yaw\0getChannelNumber_FlightMode\0"
    "getChannelNumber_Collective\0"
    "getChannelNumber_Accessory0\0"
    "getChannelNumber_Accessory1\0"
    "getChannelNumber_Accessory2\0"
    "getChannelNumber_Accessory3\0"
    "getChannelNumber_Rssi\0getDeadband\0"
    "getDeadbandAssistedControl\0"
    "getFlightModeNumber\0"
    "getFailsafeFlightModeSwitchPosition\0"
    "failsafeChannelThrottle\0failsafeChannelRoll\0"
    "failsafeChannelPitch\0failsafeChannelYaw\0"
    "failsafeChannelCollective\0"
    "failsafeChannelAccessory0\0"
    "failsafeChannelAccessory1\0"
    "failsafeChannelAccessory2\0"
    "failsafeChannelAccessory3\0channelMinThrottle\0"
    "channelMinRoll\0channelMinPitch\0"
    "channelMinYaw\0channelMinFlightMode\0"
    "channelMinCollective\0channelMinAccessory0\0"
    "channelMinAccessory1\0channelMinAccessory2\0"
    "channelMinAccessory3\0channelMinRssi\0"
    "channelNeutralThrottle\0channelNeutralRoll\0"
    "channelNeutralPitch\0channelNeutralYaw\0"
    "channelNeutralFlightMode\0"
    "channelNeutralCollective\0"
    "channelNeutralAccessory0\0"
    "channelNeutralAccessory1\0"
    "channelNeutralAccessory2\0"
    "channelNeutralAccessory3\0channelNeutralRssi\0"
    "channelMaxThrottle\0channelMaxRoll\0"
    "channelMaxPitch\0channelMaxYaw\0"
    "channelMaxFlightMode\0channelMaxCollective\0"
    "channelMaxAccessory0\0channelMaxAccessory1\0"
    "channelMaxAccessory2\0channelMaxAccessory3\0"
    "channelMaxRssi\0responseTimeRoll\0"
    "responseTimePitch\0responseTimeYaw\0"
    "responseTimeCollective\0responseTimeAccessory0\0"
    "responseTimeAccessory1\0responseTimeAccessory2\0"
    "responseTimeAccessory3\0responseTimeRssi\0"
    "channelGroupsThrottle\0channelGroupsRoll\0"
    "channelGroupsPitch\0channelGroupsYaw\0"
    "channelGroupsFlightMode\0channelGroupsCollective\0"
    "channelGroupsAccessory0\0channelGroupsAccessory1\0"
    "channelGroupsAccessory2\0channelGroupsAccessory3\0"
    "channelGroupsRssi\0channelNumberThrottle\0"
    "channelNumberRoll\0channelNumberPitch\0"
    "channelNumberYaw\0channelNumberFlightMode\0"
    "channelNumberCollective\0channelNumberAccessory0\0"
    "channelNumberAccessory1\0channelNumberAccessory2\0"
    "channelNumberAccessory3\0channelNumberRssi\0"
    "deadband\0deadbandAssistedControl\0"
    "flightModeNumber\0failsafeFlightModeSwitchPosition\0"
    "FailsafeChannel_Throttle\0FailsafeChannel_Roll\0"
    "FailsafeChannel_Pitch\0FailsafeChannel_Yaw\0"
    "FailsafeChannel_Collective\0"
    "FailsafeChannel_Accessory0\0"
    "FailsafeChannel_Accessory1\0"
    "FailsafeChannel_Accessory2\0"
    "FailsafeChannel_Accessory3\0"
    "ChannelMin_Throttle\0ChannelMin_Roll\0"
    "ChannelMin_Pitch\0ChannelMin_Yaw\0"
    "ChannelMin_FlightMode\0ChannelMin_Collective\0"
    "ChannelMin_Accessory0\0ChannelMin_Accessory1\0"
    "ChannelMin_Accessory2\0ChannelMin_Accessory3\0"
    "ChannelMin_Rssi\0ChannelNeutral_Throttle\0"
    "ChannelNeutral_Roll\0ChannelNeutral_Pitch\0"
    "ChannelNeutral_Yaw\0ChannelNeutral_FlightMode\0"
    "ChannelNeutral_Collective\0"
    "ChannelNeutral_Accessory0\0"
    "ChannelNeutral_Accessory1\0"
    "ChannelNeutral_Accessory2\0"
    "ChannelNeutral_Accessory3\0ChannelNeutral_Rssi\0"
    "ChannelMax_Throttle\0ChannelMax_Roll\0"
    "ChannelMax_Pitch\0ChannelMax_Yaw\0"
    "ChannelMax_FlightMode\0ChannelMax_Collective\0"
    "ChannelMax_Accessory0\0ChannelMax_Accessory1\0"
    "ChannelMax_Accessory2\0ChannelMax_Accessory3\0"
    "ChannelMax_Rssi\0ResponseTime_Roll\0"
    "ResponseTime_Pitch\0ResponseTime_Yaw\0"
    "ResponseTime_Collective\0ResponseTime_Accessory0\0"
    "ResponseTime_Accessory1\0ResponseTime_Accessory2\0"
    "ResponseTime_Accessory3\0ResponseTime_Rssi\0"
    "ChannelGroups_Throttle\0ChannelGroups_Roll\0"
    "ChannelGroups_Pitch\0ChannelGroups_Yaw\0"
    "ChannelGroups_FlightMode\0"
    "ChannelGroups_Collective\0"
    "ChannelGroups_Accessory0\0"
    "ChannelGroups_Accessory1\0"
    "ChannelGroups_Accessory2\0"
    "ChannelGroups_Accessory3\0ChannelGroups_Rssi\0"
    "ChannelNumber_Throttle\0ChannelNumber_Roll\0"
    "ChannelNumber_Pitch\0ChannelNumber_Yaw\0"
    "ChannelNumber_FlightMode\0"
    "ChannelNumber_Collective\0"
    "ChannelNumber_Accessory0\0"
    "ChannelNumber_Accessory1\0"
    "ChannelNumber_Accessory2\0"
    "ChannelNumber_Accessory3\0ChannelNumber_Rssi\0"
    "Deadband\0DeadbandAssistedControl\0"
    "FlightModeNumber\0FailsafeFlightModeSwitchPosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManualControlSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     423,   14, // methods
     154, 3288, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     168,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2, 2129,    2, 0x06 /* Public */,
       5,    2, 2134,    2, 0x06 /* Public */,
       6,    1, 2139,    2, 0x06 /* Public */,
       7,    1, 2142,    2, 0x06 /* Public */,
       8,    1, 2145,    2, 0x06 /* Public */,
       9,    1, 2148,    2, 0x06 /* Public */,
      10,    1, 2151,    2, 0x06 /* Public */,
      11,    1, 2154,    2, 0x06 /* Public */,
      12,    1, 2157,    2, 0x06 /* Public */,
      13,    1, 2160,    2, 0x06 /* Public */,
      14,    1, 2163,    2, 0x06 /* Public */,
      15,    1, 2166,    2, 0x06 /* Public */,
      16,    1, 2169,    2, 0x06 /* Public */,
      17,    1, 2172,    2, 0x06 /* Public */,
      18,    1, 2175,    2, 0x06 /* Public */,
      19,    1, 2178,    2, 0x06 /* Public */,
      20,    1, 2181,    2, 0x06 /* Public */,
      21,    1, 2184,    2, 0x06 /* Public */,
      22,    1, 2187,    2, 0x06 /* Public */,
      23,    1, 2190,    2, 0x06 /* Public */,
      24,    2, 2193,    2, 0x06 /* Public */,
      25,    2, 2198,    2, 0x06 /* Public */,
      26,    1, 2203,    2, 0x06 /* Public */,
      27,    1, 2206,    2, 0x06 /* Public */,
      28,    1, 2209,    2, 0x06 /* Public */,
      29,    1, 2212,    2, 0x06 /* Public */,
      30,    1, 2215,    2, 0x06 /* Public */,
      31,    1, 2218,    2, 0x06 /* Public */,
      32,    1, 2221,    2, 0x06 /* Public */,
      33,    1, 2224,    2, 0x06 /* Public */,
      34,    1, 2227,    2, 0x06 /* Public */,
      35,    1, 2230,    2, 0x06 /* Public */,
      36,    1, 2233,    2, 0x06 /* Public */,
      37,    1, 2236,    2, 0x06 /* Public */,
      38,    1, 2239,    2, 0x06 /* Public */,
      39,    1, 2242,    2, 0x06 /* Public */,
      40,    1, 2245,    2, 0x06 /* Public */,
      41,    1, 2248,    2, 0x06 /* Public */,
      42,    1, 2251,    2, 0x06 /* Public */,
      43,    1, 2254,    2, 0x06 /* Public */,
      44,    1, 2257,    2, 0x06 /* Public */,
      45,    1, 2260,    2, 0x06 /* Public */,
      46,    1, 2263,    2, 0x06 /* Public */,
      47,    1, 2266,    2, 0x06 /* Public */,
      48,    2, 2269,    2, 0x06 /* Public */,
      49,    2, 2274,    2, 0x06 /* Public */,
      50,    1, 2279,    2, 0x06 /* Public */,
      51,    1, 2282,    2, 0x06 /* Public */,
      52,    1, 2285,    2, 0x06 /* Public */,
      53,    1, 2288,    2, 0x06 /* Public */,
      54,    1, 2291,    2, 0x06 /* Public */,
      55,    1, 2294,    2, 0x06 /* Public */,
      56,    1, 2297,    2, 0x06 /* Public */,
      57,    1, 2300,    2, 0x06 /* Public */,
      58,    1, 2303,    2, 0x06 /* Public */,
      59,    1, 2306,    2, 0x06 /* Public */,
      60,    1, 2309,    2, 0x06 /* Public */,
      61,    1, 2312,    2, 0x06 /* Public */,
      62,    1, 2315,    2, 0x06 /* Public */,
      63,    1, 2318,    2, 0x06 /* Public */,
      64,    1, 2321,    2, 0x06 /* Public */,
      65,    1, 2324,    2, 0x06 /* Public */,
      66,    1, 2327,    2, 0x06 /* Public */,
      67,    1, 2330,    2, 0x06 /* Public */,
      68,    1, 2333,    2, 0x06 /* Public */,
      69,    1, 2336,    2, 0x06 /* Public */,
      70,    1, 2339,    2, 0x06 /* Public */,
      71,    1, 2342,    2, 0x06 /* Public */,
      72,    2, 2345,    2, 0x06 /* Public */,
      73,    2, 2350,    2, 0x06 /* Public */,
      74,    1, 2355,    2, 0x06 /* Public */,
      75,    1, 2358,    2, 0x06 /* Public */,
      76,    1, 2361,    2, 0x06 /* Public */,
      77,    1, 2364,    2, 0x06 /* Public */,
      78,    1, 2367,    2, 0x06 /* Public */,
      79,    1, 2370,    2, 0x06 /* Public */,
      80,    1, 2373,    2, 0x06 /* Public */,
      81,    1, 2376,    2, 0x06 /* Public */,
      82,    1, 2379,    2, 0x06 /* Public */,
      83,    1, 2382,    2, 0x06 /* Public */,
      84,    1, 2385,    2, 0x06 /* Public */,
      85,    1, 2388,    2, 0x06 /* Public */,
      86,    1, 2391,    2, 0x06 /* Public */,
      87,    1, 2394,    2, 0x06 /* Public */,
      88,    1, 2397,    2, 0x06 /* Public */,
      89,    1, 2400,    2, 0x06 /* Public */,
      90,    1, 2403,    2, 0x06 /* Public */,
      91,    1, 2406,    2, 0x06 /* Public */,
      92,    1, 2409,    2, 0x06 /* Public */,
      93,    1, 2412,    2, 0x06 /* Public */,
      94,    1, 2415,    2, 0x06 /* Public */,
      95,    1, 2418,    2, 0x06 /* Public */,
      96,    2, 2421,    2, 0x06 /* Public */,
      97,    2, 2426,    2, 0x06 /* Public */,
      98,    1, 2431,    2, 0x06 /* Public */,
      99,    1, 2434,    2, 0x06 /* Public */,
     100,    1, 2437,    2, 0x06 /* Public */,
     101,    1, 2440,    2, 0x06 /* Public */,
     102,    1, 2443,    2, 0x06 /* Public */,
     103,    1, 2446,    2, 0x06 /* Public */,
     104,    1, 2449,    2, 0x06 /* Public */,
     105,    1, 2452,    2, 0x06 /* Public */,
     106,    1, 2455,    2, 0x06 /* Public */,
     107,    1, 2458,    2, 0x06 /* Public */,
     108,    1, 2461,    2, 0x06 /* Public */,
     109,    1, 2464,    2, 0x06 /* Public */,
     110,    1, 2467,    2, 0x06 /* Public */,
     111,    1, 2470,    2, 0x06 /* Public */,
     112,    1, 2473,    2, 0x06 /* Public */,
     113,    1, 2476,    2, 0x06 /* Public */,
     114,    1, 2479,    2, 0x06 /* Public */,
     115,    1, 2482,    2, 0x06 /* Public */,
     116,    2, 2485,    2, 0x06 /* Public */,
     118,    2, 2490,    2, 0x06 /* Public */,
     119,    1, 2495,    2, 0x06 /* Public */,
     120,    1, 2498,    2, 0x06 /* Public */,
     121,    1, 2501,    2, 0x06 /* Public */,
     122,    1, 2504,    2, 0x06 /* Public */,
     123,    1, 2507,    2, 0x06 /* Public */,
     124,    1, 2510,    2, 0x06 /* Public */,
     125,    1, 2513,    2, 0x06 /* Public */,
     126,    1, 2516,    2, 0x06 /* Public */,
     127,    1, 2519,    2, 0x06 /* Public */,
     128,    1, 2522,    2, 0x06 /* Public */,
     129,    1, 2525,    2, 0x06 /* Public */,
     130,    1, 2528,    2, 0x06 /* Public */,
     131,    1, 2531,    2, 0x06 /* Public */,
     132,    1, 2534,    2, 0x06 /* Public */,
     133,    1, 2537,    2, 0x06 /* Public */,
     134,    1, 2540,    2, 0x06 /* Public */,
     135,    1, 2543,    2, 0x06 /* Public */,
     136,    1, 2546,    2, 0x06 /* Public */,
     137,    1, 2549,    2, 0x06 /* Public */,
     138,    1, 2552,    2, 0x06 /* Public */,
     139,    1, 2555,    2, 0x06 /* Public */,
     140,    1, 2558,    2, 0x06 /* Public */,
     141,    2, 2561,    2, 0x06 /* Public */,
     142,    2, 2566,    2, 0x06 /* Public */,
     143,    1, 2571,    2, 0x06 /* Public */,
     144,    1, 2574,    2, 0x06 /* Public */,
     145,    1, 2577,    2, 0x06 /* Public */,
     146,    1, 2580,    2, 0x06 /* Public */,
     147,    1, 2583,    2, 0x06 /* Public */,
     148,    1, 2586,    2, 0x06 /* Public */,
     149,    1, 2589,    2, 0x06 /* Public */,
     150,    1, 2592,    2, 0x06 /* Public */,
     151,    1, 2595,    2, 0x06 /* Public */,
     152,    1, 2598,    2, 0x06 /* Public */,
     153,    1, 2601,    2, 0x06 /* Public */,
     154,    1, 2604,    2, 0x06 /* Public */,
     155,    1, 2607,    2, 0x06 /* Public */,
     156,    1, 2610,    2, 0x06 /* Public */,
     157,    1, 2613,    2, 0x06 /* Public */,
     158,    1, 2616,    2, 0x06 /* Public */,
     159,    1, 2619,    2, 0x06 /* Public */,
     160,    1, 2622,    2, 0x06 /* Public */,
     161,    1, 2625,    2, 0x06 /* Public */,
     162,    1, 2628,    2, 0x06 /* Public */,
     163,    1, 2631,    2, 0x06 /* Public */,
     164,    1, 2634,    2, 0x06 /* Public */,
     165,    1, 2637,    2, 0x06 /* Public */,
     166,    1, 2640,    2, 0x06 /* Public */,
     167,    1, 2643,    2, 0x06 /* Public */,
     168,    1, 2646,    2, 0x06 /* Public */,
     169,    1, 2649,    2, 0x06 /* Public */,
     170,    1, 2652,    2, 0x06 /* Public */,
     171,    1, 2655,    2, 0x06 /* Public */,
     172,    1, 2658,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     173,    2, 2661,    2, 0x0a /* Public */,
     174,    1, 2666,    2, 0x0a /* Public */,
     175,    1, 2669,    2, 0x0a /* Public */,
     176,    1, 2672,    2, 0x0a /* Public */,
     177,    1, 2675,    2, 0x0a /* Public */,
     178,    1, 2678,    2, 0x0a /* Public */,
     179,    1, 2681,    2, 0x0a /* Public */,
     180,    1, 2684,    2, 0x0a /* Public */,
     181,    1, 2687,    2, 0x0a /* Public */,
     182,    1, 2690,    2, 0x0a /* Public */,
     183,    1, 2693,    2, 0x0a /* Public */,
     184,    1, 2696,    2, 0x0a /* Public */,
     185,    1, 2699,    2, 0x0a /* Public */,
     186,    1, 2702,    2, 0x0a /* Public */,
     187,    1, 2705,    2, 0x0a /* Public */,
     188,    1, 2708,    2, 0x0a /* Public */,
     189,    1, 2711,    2, 0x0a /* Public */,
     190,    1, 2714,    2, 0x0a /* Public */,
     191,    1, 2717,    2, 0x0a /* Public */,
     192,    2, 2720,    2, 0x0a /* Public */,
     193,    1, 2725,    2, 0x0a /* Public */,
     194,    1, 2728,    2, 0x0a /* Public */,
     195,    1, 2731,    2, 0x0a /* Public */,
     196,    1, 2734,    2, 0x0a /* Public */,
     197,    1, 2737,    2, 0x0a /* Public */,
     198,    1, 2740,    2, 0x0a /* Public */,
     199,    1, 2743,    2, 0x0a /* Public */,
     200,    1, 2746,    2, 0x0a /* Public */,
     201,    1, 2749,    2, 0x0a /* Public */,
     202,    1, 2752,    2, 0x0a /* Public */,
     203,    1, 2755,    2, 0x0a /* Public */,
     204,    1, 2758,    2, 0x0a /* Public */,
     205,    1, 2761,    2, 0x0a /* Public */,
     206,    1, 2764,    2, 0x0a /* Public */,
     207,    1, 2767,    2, 0x0a /* Public */,
     208,    1, 2770,    2, 0x0a /* Public */,
     209,    1, 2773,    2, 0x0a /* Public */,
     210,    1, 2776,    2, 0x0a /* Public */,
     211,    1, 2779,    2, 0x0a /* Public */,
     212,    1, 2782,    2, 0x0a /* Public */,
     213,    1, 2785,    2, 0x0a /* Public */,
     214,    1, 2788,    2, 0x0a /* Public */,
     215,    2, 2791,    2, 0x0a /* Public */,
     216,    1, 2796,    2, 0x0a /* Public */,
     217,    1, 2799,    2, 0x0a /* Public */,
     218,    1, 2802,    2, 0x0a /* Public */,
     219,    1, 2805,    2, 0x0a /* Public */,
     220,    1, 2808,    2, 0x0a /* Public */,
     221,    1, 2811,    2, 0x0a /* Public */,
     222,    1, 2814,    2, 0x0a /* Public */,
     223,    1, 2817,    2, 0x0a /* Public */,
     224,    1, 2820,    2, 0x0a /* Public */,
     225,    1, 2823,    2, 0x0a /* Public */,
     226,    1, 2826,    2, 0x0a /* Public */,
     227,    1, 2829,    2, 0x0a /* Public */,
     228,    1, 2832,    2, 0x0a /* Public */,
     229,    1, 2835,    2, 0x0a /* Public */,
     230,    1, 2838,    2, 0x0a /* Public */,
     231,    1, 2841,    2, 0x0a /* Public */,
     232,    1, 2844,    2, 0x0a /* Public */,
     233,    1, 2847,    2, 0x0a /* Public */,
     234,    1, 2850,    2, 0x0a /* Public */,
     235,    1, 2853,    2, 0x0a /* Public */,
     236,    1, 2856,    2, 0x0a /* Public */,
     237,    1, 2859,    2, 0x0a /* Public */,
     238,    2, 2862,    2, 0x0a /* Public */,
     239,    1, 2867,    2, 0x0a /* Public */,
     240,    1, 2870,    2, 0x0a /* Public */,
     241,    1, 2873,    2, 0x0a /* Public */,
     242,    1, 2876,    2, 0x0a /* Public */,
     243,    1, 2879,    2, 0x0a /* Public */,
     244,    1, 2882,    2, 0x0a /* Public */,
     245,    1, 2885,    2, 0x0a /* Public */,
     246,    1, 2888,    2, 0x0a /* Public */,
     247,    1, 2891,    2, 0x0a /* Public */,
     248,    1, 2894,    2, 0x0a /* Public */,
     249,    1, 2897,    2, 0x0a /* Public */,
     250,    1, 2900,    2, 0x0a /* Public */,
     251,    1, 2903,    2, 0x0a /* Public */,
     252,    1, 2906,    2, 0x0a /* Public */,
     253,    1, 2909,    2, 0x0a /* Public */,
     254,    1, 2912,    2, 0x0a /* Public */,
     255,    1, 2915,    2, 0x0a /* Public */,
     256,    1, 2918,    2, 0x0a /* Public */,
     257,    1, 2921,    2, 0x0a /* Public */,
     258,    1, 2924,    2, 0x0a /* Public */,
     259,    1, 2927,    2, 0x0a /* Public */,
     260,    1, 2930,    2, 0x0a /* Public */,
     261,    2, 2933,    2, 0x0a /* Public */,
     262,    1, 2938,    2, 0x0a /* Public */,
     263,    1, 2941,    2, 0x0a /* Public */,
     264,    1, 2944,    2, 0x0a /* Public */,
     265,    1, 2947,    2, 0x0a /* Public */,
     266,    1, 2950,    2, 0x0a /* Public */,
     267,    1, 2953,    2, 0x0a /* Public */,
     268,    1, 2956,    2, 0x0a /* Public */,
     269,    1, 2959,    2, 0x0a /* Public */,
     270,    1, 2962,    2, 0x0a /* Public */,
     271,    1, 2965,    2, 0x0a /* Public */,
     272,    1, 2968,    2, 0x0a /* Public */,
     273,    1, 2971,    2, 0x0a /* Public */,
     274,    1, 2974,    2, 0x0a /* Public */,
     275,    1, 2977,    2, 0x0a /* Public */,
     276,    1, 2980,    2, 0x0a /* Public */,
     277,    1, 2983,    2, 0x0a /* Public */,
     278,    1, 2986,    2, 0x0a /* Public */,
     279,    1, 2989,    2, 0x0a /* Public */,
     280,    2, 2992,    2, 0x0a /* Public */,
     280,    2, 2997,    2, 0x0a /* Public */,
     281,    1, 3002,    2, 0x0a /* Public */,
     282,    1, 3005,    2, 0x0a /* Public */,
     283,    1, 3008,    2, 0x0a /* Public */,
     284,    1, 3011,    2, 0x0a /* Public */,
     285,    1, 3014,    2, 0x0a /* Public */,
     286,    1, 3017,    2, 0x0a /* Public */,
     287,    1, 3020,    2, 0x0a /* Public */,
     288,    1, 3023,    2, 0x0a /* Public */,
     289,    1, 3026,    2, 0x0a /* Public */,
     290,    1, 3029,    2, 0x0a /* Public */,
     291,    1, 3032,    2, 0x0a /* Public */,
     292,    1, 3035,    2, 0x0a /* Public */,
     293,    1, 3038,    2, 0x0a /* Public */,
     294,    1, 3041,    2, 0x0a /* Public */,
     295,    1, 3044,    2, 0x0a /* Public */,
     296,    1, 3047,    2, 0x0a /* Public */,
     297,    1, 3050,    2, 0x0a /* Public */,
     298,    1, 3053,    2, 0x0a /* Public */,
     299,    1, 3056,    2, 0x0a /* Public */,
     300,    1, 3059,    2, 0x0a /* Public */,
     301,    1, 3062,    2, 0x0a /* Public */,
     302,    1, 3065,    2, 0x0a /* Public */,
     303,    2, 3068,    2, 0x0a /* Public */,
     303,    2, 3073,    2, 0x0a /* Public */,
     304,    1, 3078,    2, 0x0a /* Public */,
     305,    1, 3081,    2, 0x0a /* Public */,
     306,    1, 3084,    2, 0x0a /* Public */,
     307,    1, 3087,    2, 0x0a /* Public */,
     308,    1, 3090,    2, 0x0a /* Public */,
     309,    1, 3093,    2, 0x0a /* Public */,
     310,    1, 3096,    2, 0x0a /* Public */,
     311,    1, 3099,    2, 0x0a /* Public */,
     312,    1, 3102,    2, 0x0a /* Public */,
     313,    1, 3105,    2, 0x0a /* Public */,
     314,    1, 3108,    2, 0x0a /* Public */,
     315,    1, 3111,    2, 0x0a /* Public */,
     316,    1, 3114,    2, 0x0a /* Public */,
     317,    1, 3117,    2, 0x0a /* Public */,
     318,    1, 3120,    2, 0x0a /* Public */,
     319,    1, 3123,    2, 0x0a /* Public */,
     320,    1, 3126,    2, 0x0a /* Public */,
     321,    1, 3129,    2, 0x0a /* Public */,
     322,    1, 3132,    2, 0x0a /* Public */,
     323,    1, 3135,    2, 0x0a /* Public */,
     324,    1, 3138,    2, 0x0a /* Public */,
     325,    1, 3141,    2, 0x0a /* Public */,
     326,    1, 3144,    2, 0x0a /* Public */,
     326,    1, 3147,    2, 0x0a /* Public */,
     327,    1, 3150,    2, 0x0a /* Public */,
     327,    1, 3153,    2, 0x0a /* Public */,
     328,    1, 3156,    2, 0x0a /* Public */,
     328,    1, 3159,    2, 0x0a /* Public */,
     329,    1, 3162,    2, 0x0a /* Public */,
     329,    1, 3165,    2, 0x0a /* Public */,
     330,    0, 3168,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     331,    1, 3169,    2, 0x02 /* Public */,
     332,    1, 3172,    2, 0x02 /* Public */,
     333,    0, 3175,    2, 0x02 /* Public */,
     334,    0, 3176,    2, 0x02 /* Public */,
     335,    0, 3177,    2, 0x02 /* Public */,
     336,    0, 3178,    2, 0x02 /* Public */,
     337,    0, 3179,    2, 0x02 /* Public */,
     338,    0, 3180,    2, 0x02 /* Public */,
     339,    0, 3181,    2, 0x02 /* Public */,
     340,    0, 3182,    2, 0x02 /* Public */,
     341,    0, 3183,    2, 0x02 /* Public */,
     342,    1, 3184,    2, 0x02 /* Public */,
     343,    1, 3187,    2, 0x02 /* Public */,
     344,    0, 3190,    2, 0x02 /* Public */,
     345,    0, 3191,    2, 0x02 /* Public */,
     346,    0, 3192,    2, 0x02 /* Public */,
     347,    0, 3193,    2, 0x02 /* Public */,
     348,    0, 3194,    2, 0x02 /* Public */,
     349,    0, 3195,    2, 0x02 /* Public */,
     350,    0, 3196,    2, 0x02 /* Public */,
     351,    0, 3197,    2, 0x02 /* Public */,
     352,    0, 3198,    2, 0x02 /* Public */,
     353,    0, 3199,    2, 0x02 /* Public */,
     354,    0, 3200,    2, 0x02 /* Public */,
     355,    1, 3201,    2, 0x02 /* Public */,
     356,    1, 3204,    2, 0x02 /* Public */,
     357,    0, 3207,    2, 0x02 /* Public */,
     358,    0, 3208,    2, 0x02 /* Public */,
     359,    0, 3209,    2, 0x02 /* Public */,
     360,    0, 3210,    2, 0x02 /* Public */,
     361,    0, 3211,    2, 0x02 /* Public */,
     362,    0, 3212,    2, 0x02 /* Public */,
     363,    0, 3213,    2, 0x02 /* Public */,
     364,    0, 3214,    2, 0x02 /* Public */,
     365,    0, 3215,    2, 0x02 /* Public */,
     366,    0, 3216,    2, 0x02 /* Public */,
     367,    0, 3217,    2, 0x02 /* Public */,
     368,    1, 3218,    2, 0x02 /* Public */,
     369,    1, 3221,    2, 0x02 /* Public */,
     370,    0, 3224,    2, 0x02 /* Public */,
     371,    0, 3225,    2, 0x02 /* Public */,
     372,    0, 3226,    2, 0x02 /* Public */,
     373,    0, 3227,    2, 0x02 /* Public */,
     374,    0, 3228,    2, 0x02 /* Public */,
     375,    0, 3229,    2, 0x02 /* Public */,
     376,    0, 3230,    2, 0x02 /* Public */,
     377,    0, 3231,    2, 0x02 /* Public */,
     378,    0, 3232,    2, 0x02 /* Public */,
     379,    0, 3233,    2, 0x02 /* Public */,
     380,    0, 3234,    2, 0x02 /* Public */,
     381,    1, 3235,    2, 0x02 /* Public */,
     382,    1, 3238,    2, 0x02 /* Public */,
     383,    0, 3241,    2, 0x02 /* Public */,
     384,    0, 3242,    2, 0x02 /* Public */,
     385,    0, 3243,    2, 0x02 /* Public */,
     386,    0, 3244,    2, 0x02 /* Public */,
     387,    0, 3245,    2, 0x02 /* Public */,
     388,    0, 3246,    2, 0x02 /* Public */,
     389,    0, 3247,    2, 0x02 /* Public */,
     390,    0, 3248,    2, 0x02 /* Public */,
     391,    0, 3249,    2, 0x02 /* Public */,
     392,    1, 3250,    2, 0x02 /* Public */,
     393,    1, 3253,    2, 0x02 /* Public */,
     394,    0, 3256,    2, 0x02 /* Public */,
     395,    0, 3257,    2, 0x02 /* Public */,
     396,    0, 3258,    2, 0x02 /* Public */,
     397,    0, 3259,    2, 0x02 /* Public */,
     398,    0, 3260,    2, 0x02 /* Public */,
     399,    0, 3261,    2, 0x02 /* Public */,
     400,    0, 3262,    2, 0x02 /* Public */,
     401,    0, 3263,    2, 0x02 /* Public */,
     402,    0, 3264,    2, 0x02 /* Public */,
     403,    0, 3265,    2, 0x02 /* Public */,
     404,    0, 3266,    2, 0x02 /* Public */,
     405,    1, 3267,    2, 0x02 /* Public */,
     406,    1, 3270,    2, 0x02 /* Public */,
     407,    0, 3273,    2, 0x02 /* Public */,
     408,    0, 3274,    2, 0x02 /* Public */,
     409,    0, 3275,    2, 0x02 /* Public */,
     410,    0, 3276,    2, 0x02 /* Public */,
     411,    0, 3277,    2, 0x02 /* Public */,
     412,    0, 3278,    2, 0x02 /* Public */,
     413,    0, 3279,    2, 0x02 /* Public */,
     414,    0, 3280,    2, 0x02 /* Public */,
     415,    0, 3281,    2, 0x02 /* Public */,
     416,    0, 3282,    2, 0x02 /* Public */,
     417,    0, 3283,    2, 0x02 /* Public */,
     418,    0, 3284,    2, 0x02 /* Public */,
     419,    0, 3285,    2, 0x02 /* Public */,
     420,    0, 3286,    2, 0x02 /* Public */,
     421,    0, 3287,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 117,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,

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
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 117,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
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
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    0x80000000 | 117, QMetaType::UInt,    3,
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
    QMetaType::UShort, QMetaType::UInt,    3,
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
    QMetaType::SChar,

 // properties: name, type, flags
     422, QMetaType::Float, 0x00495103,
     423, QMetaType::Float, 0x00495103,
     424, QMetaType::Float, 0x00495103,
     425, QMetaType::Float, 0x00495103,
     426, QMetaType::Float, 0x00495103,
     427, QMetaType::Float, 0x00495103,
     428, QMetaType::Float, 0x00495103,
     429, QMetaType::Float, 0x00495103,
     430, QMetaType::Float, 0x00495103,
     431, QMetaType::Short, 0x00495103,
     432, QMetaType::Short, 0x00495103,
     433, QMetaType::Short, 0x00495103,
     434, QMetaType::Short, 0x00495103,
     435, QMetaType::Short, 0x00495103,
     436, QMetaType::Short, 0x00495103,
     437, QMetaType::Short, 0x00495103,
     438, QMetaType::Short, 0x00495103,
     439, QMetaType::Short, 0x00495103,
     440, QMetaType::Short, 0x00495103,
     441, QMetaType::Short, 0x00495103,
     442, QMetaType::Short, 0x00495103,
     443, QMetaType::Short, 0x00495103,
     444, QMetaType::Short, 0x00495103,
     445, QMetaType::Short, 0x00495103,
     446, QMetaType::Short, 0x00495103,
     447, QMetaType::Short, 0x00495103,
     448, QMetaType::Short, 0x00495103,
     449, QMetaType::Short, 0x00495103,
     450, QMetaType::Short, 0x00495103,
     451, QMetaType::Short, 0x00495103,
     452, QMetaType::Short, 0x00495103,
     453, QMetaType::Short, 0x00495103,
     454, QMetaType::Short, 0x00495103,
     455, QMetaType::Short, 0x00495103,
     456, QMetaType::Short, 0x00495103,
     457, QMetaType::Short, 0x00495103,
     458, QMetaType::Short, 0x00495103,
     459, QMetaType::Short, 0x00495103,
     460, QMetaType::Short, 0x00495103,
     461, QMetaType::Short, 0x00495103,
     462, QMetaType::Short, 0x00495103,
     463, QMetaType::Short, 0x00495103,
     464, QMetaType::UShort, 0x00495103,
     465, QMetaType::UShort, 0x00495103,
     466, QMetaType::UShort, 0x00495103,
     467, QMetaType::UShort, 0x00495103,
     468, QMetaType::UShort, 0x00495103,
     469, QMetaType::UShort, 0x00495103,
     470, QMetaType::UShort, 0x00495103,
     471, QMetaType::UShort, 0x00495103,
     472, QMetaType::UShort, 0x00495103,
     473, 0x80000000 | 117, 0x0049510b,
     474, 0x80000000 | 117, 0x0049510b,
     475, 0x80000000 | 117, 0x0049510b,
     476, 0x80000000 | 117, 0x0049510b,
     477, 0x80000000 | 117, 0x0049510b,
     478, 0x80000000 | 117, 0x0049510b,
     479, 0x80000000 | 117, 0x0049510b,
     480, 0x80000000 | 117, 0x0049510b,
     481, 0x80000000 | 117, 0x0049510b,
     482, 0x80000000 | 117, 0x0049510b,
     483, 0x80000000 | 117, 0x0049510b,
     484, QMetaType::UShort, 0x00495103,
     485, QMetaType::UShort, 0x00495103,
     486, QMetaType::UShort, 0x00495103,
     487, QMetaType::UShort, 0x00495103,
     488, QMetaType::UShort, 0x00495103,
     489, QMetaType::UShort, 0x00495103,
     490, QMetaType::UShort, 0x00495103,
     491, QMetaType::UShort, 0x00495103,
     492, QMetaType::UShort, 0x00495103,
     493, QMetaType::UShort, 0x00495103,
     494, QMetaType::UShort, 0x00495103,
     495, QMetaType::UShort, 0x00495103,
     496, QMetaType::UShort, 0x00495103,
     497, QMetaType::UShort, 0x00495103,
     498, QMetaType::Short, 0x00495103,
     499, QMetaType::Float, 0x00495103,
     500, QMetaType::Float, 0x00495103,
     501, QMetaType::Float, 0x00495103,
     502, QMetaType::Float, 0x00495103,
     503, QMetaType::Float, 0x00495103,
     504, QMetaType::Float, 0x00495103,
     505, QMetaType::Float, 0x00495103,
     506, QMetaType::Float, 0x00495103,
     507, QMetaType::Float, 0x00495103,
     508, QMetaType::Short, 0x00495103,
     509, QMetaType::Short, 0x00495103,
     510, QMetaType::Short, 0x00495103,
     511, QMetaType::Short, 0x00495103,
     512, QMetaType::Short, 0x00495103,
     513, QMetaType::Short, 0x00495103,
     514, QMetaType::Short, 0x00495103,
     515, QMetaType::Short, 0x00495103,
     516, QMetaType::Short, 0x00495103,
     517, QMetaType::Short, 0x00495103,
     518, QMetaType::Short, 0x00495103,
     519, QMetaType::Short, 0x00495103,
     520, QMetaType::Short, 0x00495103,
     521, QMetaType::Short, 0x00495103,
     522, QMetaType::Short, 0x00495103,
     523, QMetaType::Short, 0x00495103,
     524, QMetaType::Short, 0x00495103,
     525, QMetaType::Short, 0x00495103,
     526, QMetaType::Short, 0x00495103,
     527, QMetaType::Short, 0x00495103,
     528, QMetaType::Short, 0x00495103,
     529, QMetaType::Short, 0x00495103,
     530, QMetaType::Short, 0x00495103,
     531, QMetaType::Short, 0x00495103,
     532, QMetaType::Short, 0x00495103,
     533, QMetaType::Short, 0x00495103,
     534, QMetaType::Short, 0x00495103,
     535, QMetaType::Short, 0x00495103,
     536, QMetaType::Short, 0x00495103,
     537, QMetaType::Short, 0x00495103,
     538, QMetaType::Short, 0x00495103,
     539, QMetaType::Short, 0x00495103,
     540, QMetaType::Short, 0x00495103,
     541, QMetaType::UShort, 0x00495103,
     542, QMetaType::UShort, 0x00495103,
     543, QMetaType::UShort, 0x00495103,
     544, QMetaType::UShort, 0x00495103,
     545, QMetaType::UShort, 0x00495103,
     546, QMetaType::UShort, 0x00495103,
     547, QMetaType::UShort, 0x00495103,
     548, QMetaType::UShort, 0x00495103,
     549, QMetaType::UShort, 0x00495103,
     550, QMetaType::UChar, 0x00495103,
     551, QMetaType::UChar, 0x00495103,
     552, QMetaType::UChar, 0x00495103,
     553, QMetaType::UChar, 0x00495103,
     554, QMetaType::UChar, 0x00495103,
     555, QMetaType::UChar, 0x00495103,
     556, QMetaType::UChar, 0x00495103,
     557, QMetaType::UChar, 0x00495103,
     558, QMetaType::UChar, 0x00495103,
     559, QMetaType::UChar, 0x00495103,
     560, QMetaType::UChar, 0x00495103,
     561, QMetaType::UChar, 0x00495103,
     562, QMetaType::UChar, 0x00495103,
     563, QMetaType::UChar, 0x00495103,
     564, QMetaType::UChar, 0x00495103,
     565, QMetaType::UChar, 0x00495103,
     566, QMetaType::UChar, 0x00495103,
     567, QMetaType::UChar, 0x00495103,
     568, QMetaType::UChar, 0x00495103,
     569, QMetaType::UChar, 0x00495103,
     570, QMetaType::UChar, 0x00495103,
     571, QMetaType::UChar, 0x00495103,
     572, QMetaType::UChar, 0x00495103,
     573, QMetaType::UChar, 0x00495103,
     574, QMetaType::UChar, 0x00495103,
     575, QMetaType::SChar, 0x00495103,

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
      46,
      48,
      50,
      52,
      54,
      56,
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
      94,
      96,
      98,
     100,
     102,
     104,
     106,
     108,
     110,
     114,
     116,
     118,
     120,
     122,
     124,
     126,
     128,
     130,
     132,
     134,
     138,
     140,
     142,
     144,
     146,
     148,
     150,
     152,
     154,
     156,
     158,
     160,
     162,
     164,
     166,
       3,
       5,
       7,
       9,
      11,
      13,
      15,
      17,
      19,
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
      47,
      49,
      51,
      53,
      55,
      57,
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
      95,
      97,
      99,
     101,
     103,
     105,
     107,
     109,
     111,
     115,
     117,
     119,
     121,
     123,
     125,
     127,
     129,
     131,
     133,
     135,
     139,
     141,
     143,
     145,
     147,
     149,
     151,
     153,
     155,
     157,
     159,
     161,
     163,
     165,
     167,

       0        // eod
};

void ManualControlSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManualControlSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->failsafeChannelChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->FailsafeChannelChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->failsafeChannelThrottleChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->FailsafeChannel_ThrottleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->failsafeChannelRollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->FailsafeChannel_RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->failsafeChannelPitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->FailsafeChannel_PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->failsafeChannelYawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->FailsafeChannel_YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->failsafeChannelCollectiveChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->FailsafeChannel_CollectiveChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->failsafeChannelAccessory0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->FailsafeChannel_Accessory0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->failsafeChannelAccessory1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->FailsafeChannel_Accessory1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->failsafeChannelAccessory2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->FailsafeChannel_Accessory2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->failsafeChannelAccessory3Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->FailsafeChannel_Accessory3Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->channelMinChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 21: _t->ChannelMinChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 22: _t->channelMinThrottleChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 23: _t->ChannelMin_ThrottleChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 24: _t->channelMinRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 25: _t->ChannelMin_RollChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 26: _t->channelMinPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 27: _t->ChannelMin_PitchChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 28: _t->channelMinYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 29: _t->ChannelMin_YawChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 30: _t->channelMinFlightModeChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 31: _t->ChannelMin_FlightModeChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 32: _t->channelMinCollectiveChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 33: _t->ChannelMin_CollectiveChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 34: _t->channelMinAccessory0Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 35: _t->ChannelMin_Accessory0Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 36: _t->channelMinAccessory1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 37: _t->ChannelMin_Accessory1Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 38: _t->channelMinAccessory2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 39: _t->ChannelMin_Accessory2Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 40: _t->channelMinAccessory3Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 41: _t->ChannelMin_Accessory3Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 42: _t->channelMinRssiChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 43: _t->ChannelMin_RssiChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 44: _t->channelNeutralChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 45: _t->ChannelNeutralChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 46: _t->channelNeutralThrottleChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 47: _t->ChannelNeutral_ThrottleChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 48: _t->channelNeutralRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 49: _t->ChannelNeutral_RollChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 50: _t->channelNeutralPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 51: _t->ChannelNeutral_PitchChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 52: _t->channelNeutralYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 53: _t->ChannelNeutral_YawChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 54: _t->channelNeutralFlightModeChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 55: _t->ChannelNeutral_FlightModeChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 56: _t->channelNeutralCollectiveChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 57: _t->ChannelNeutral_CollectiveChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 58: _t->channelNeutralAccessory0Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 59: _t->ChannelNeutral_Accessory0Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 60: _t->channelNeutralAccessory1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 61: _t->ChannelNeutral_Accessory1Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 62: _t->channelNeutralAccessory2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 63: _t->ChannelNeutral_Accessory2Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 64: _t->channelNeutralAccessory3Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 65: _t->ChannelNeutral_Accessory3Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 66: _t->channelNeutralRssiChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 67: _t->ChannelNeutral_RssiChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 68: _t->channelMaxChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 69: _t->ChannelMaxChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 70: _t->channelMaxThrottleChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 71: _t->ChannelMax_ThrottleChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 72: _t->channelMaxRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 73: _t->ChannelMax_RollChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 74: _t->channelMaxPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 75: _t->ChannelMax_PitchChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 76: _t->channelMaxYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 77: _t->ChannelMax_YawChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 78: _t->channelMaxFlightModeChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 79: _t->ChannelMax_FlightModeChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 80: _t->channelMaxCollectiveChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 81: _t->ChannelMax_CollectiveChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 82: _t->channelMaxAccessory0Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 83: _t->ChannelMax_Accessory0Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 84: _t->channelMaxAccessory1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 85: _t->ChannelMax_Accessory1Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 86: _t->channelMaxAccessory2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 87: _t->ChannelMax_Accessory2Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 88: _t->channelMaxAccessory3Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 89: _t->ChannelMax_Accessory3Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 90: _t->channelMaxRssiChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 91: _t->ChannelMax_RssiChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 92: _t->responseTimeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 93: _t->ResponseTimeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 94: _t->responseTimeRollChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 95: _t->ResponseTime_RollChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 96: _t->responseTimePitchChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 97: _t->ResponseTime_PitchChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 98: _t->responseTimeYawChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 99: _t->ResponseTime_YawChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 100: _t->responseTimeCollectiveChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 101: _t->ResponseTime_CollectiveChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 102: _t->responseTimeAccessory0Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 103: _t->ResponseTime_Accessory0Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 104: _t->responseTimeAccessory1Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 105: _t->ResponseTime_Accessory1Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 106: _t->responseTimeAccessory2Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 107: _t->ResponseTime_Accessory2Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 108: _t->responseTimeAccessory3Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 109: _t->ResponseTime_Accessory3Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 110: _t->responseTimeRssiChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 111: _t->ResponseTime_RssiChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 112: _t->channelGroupsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[2]))); break;
        case 113: _t->ChannelGroupsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 114: _t->channelGroupsThrottleChanged((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 115: _t->ChannelGroups_ThrottleChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 116: _t->channelGroupsRollChanged((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 117: _t->ChannelGroups_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 118: _t->channelGroupsPitchChanged((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 119: _t->ChannelGroups_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 120: _t->channelGroupsYawChanged((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 121: _t->ChannelGroups_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 122: _t->channelGroupsFlightModeChanged((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 123: _t->ChannelGroups_FlightModeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 124: _t->channelGroupsCollectiveChanged((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 125: _t->ChannelGroups_CollectiveChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 126: _t->channelGroupsAccessory0Changed((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 127: _t->ChannelGroups_Accessory0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 128: _t->channelGroupsAccessory1Changed((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 129: _t->ChannelGroups_Accessory1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 130: _t->channelGroupsAccessory2Changed((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 131: _t->ChannelGroups_Accessory2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 132: _t->channelGroupsAccessory3Changed((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 133: _t->ChannelGroups_Accessory3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 134: _t->channelGroupsRssiChanged((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 135: _t->ChannelGroups_RssiChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 136: _t->channelNumberChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 137: _t->ChannelNumberChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 138: _t->channelNumberThrottleChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 139: _t->ChannelNumber_ThrottleChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 140: _t->channelNumberRollChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 141: _t->ChannelNumber_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 142: _t->channelNumberPitchChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 143: _t->ChannelNumber_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 144: _t->channelNumberYawChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 145: _t->ChannelNumber_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 146: _t->channelNumberFlightModeChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 147: _t->ChannelNumber_FlightModeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 148: _t->channelNumberCollectiveChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 149: _t->ChannelNumber_CollectiveChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 150: _t->channelNumberAccessory0Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 151: _t->ChannelNumber_Accessory0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 152: _t->channelNumberAccessory1Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 153: _t->ChannelNumber_Accessory1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 154: _t->channelNumberAccessory2Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 155: _t->ChannelNumber_Accessory2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 156: _t->channelNumberAccessory3Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 157: _t->ChannelNumber_Accessory3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 158: _t->channelNumberRssiChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 159: _t->ChannelNumber_RssiChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 160: _t->deadbandChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 161: _t->DeadbandChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 162: _t->deadbandAssistedControlChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 163: _t->DeadbandAssistedControlChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 164: _t->flightModeNumberChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 165: _t->FlightModeNumberChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 166: _t->failsafeFlightModeSwitchPositionChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 167: _t->FailsafeFlightModeSwitchPositionChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 168: _t->setFailsafeChannel((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 169: _t->setFailsafeChannelThrottle((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 170: _t->setFailsafeChannel_Throttle((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 171: _t->setFailsafeChannelRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 172: _t->setFailsafeChannel_Roll((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 173: _t->setFailsafeChannelPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 174: _t->setFailsafeChannel_Pitch((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 175: _t->setFailsafeChannelYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 176: _t->setFailsafeChannel_Yaw((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 177: _t->setFailsafeChannelCollective((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 178: _t->setFailsafeChannel_Collective((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 179: _t->setFailsafeChannelAccessory0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 180: _t->setFailsafeChannel_Accessory0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 181: _t->setFailsafeChannelAccessory1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 182: _t->setFailsafeChannel_Accessory1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 183: _t->setFailsafeChannelAccessory2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 184: _t->setFailsafeChannel_Accessory2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 185: _t->setFailsafeChannelAccessory3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 186: _t->setFailsafeChannel_Accessory3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 187: _t->setChannelMin((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 188: _t->setChannelMinThrottle((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 189: _t->setChannelMin_Throttle((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 190: _t->setChannelMinRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 191: _t->setChannelMin_Roll((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 192: _t->setChannelMinPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 193: _t->setChannelMin_Pitch((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 194: _t->setChannelMinYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 195: _t->setChannelMin_Yaw((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 196: _t->setChannelMinFlightMode((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 197: _t->setChannelMin_FlightMode((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 198: _t->setChannelMinCollective((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 199: _t->setChannelMin_Collective((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 200: _t->setChannelMinAccessory0((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 201: _t->setChannelMin_Accessory0((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 202: _t->setChannelMinAccessory1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 203: _t->setChannelMin_Accessory1((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 204: _t->setChannelMinAccessory2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 205: _t->setChannelMin_Accessory2((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 206: _t->setChannelMinAccessory3((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 207: _t->setChannelMin_Accessory3((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 208: _t->setChannelMinRssi((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 209: _t->setChannelMin_Rssi((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 210: _t->setChannelNeutral((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 211: _t->setChannelNeutralThrottle((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 212: _t->setChannelNeutral_Throttle((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 213: _t->setChannelNeutralRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 214: _t->setChannelNeutral_Roll((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 215: _t->setChannelNeutralPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 216: _t->setChannelNeutral_Pitch((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 217: _t->setChannelNeutralYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 218: _t->setChannelNeutral_Yaw((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 219: _t->setChannelNeutralFlightMode((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 220: _t->setChannelNeutral_FlightMode((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 221: _t->setChannelNeutralCollective((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 222: _t->setChannelNeutral_Collective((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 223: _t->setChannelNeutralAccessory0((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 224: _t->setChannelNeutral_Accessory0((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 225: _t->setChannelNeutralAccessory1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 226: _t->setChannelNeutral_Accessory1((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 227: _t->setChannelNeutralAccessory2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 228: _t->setChannelNeutral_Accessory2((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 229: _t->setChannelNeutralAccessory3((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 230: _t->setChannelNeutral_Accessory3((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 231: _t->setChannelNeutralRssi((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 232: _t->setChannelNeutral_Rssi((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 233: _t->setChannelMax((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 234: _t->setChannelMaxThrottle((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 235: _t->setChannelMax_Throttle((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 236: _t->setChannelMaxRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 237: _t->setChannelMax_Roll((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 238: _t->setChannelMaxPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 239: _t->setChannelMax_Pitch((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 240: _t->setChannelMaxYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 241: _t->setChannelMax_Yaw((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 242: _t->setChannelMaxFlightMode((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 243: _t->setChannelMax_FlightMode((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 244: _t->setChannelMaxCollective((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 245: _t->setChannelMax_Collective((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 246: _t->setChannelMaxAccessory0((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 247: _t->setChannelMax_Accessory0((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 248: _t->setChannelMaxAccessory1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 249: _t->setChannelMax_Accessory1((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 250: _t->setChannelMaxAccessory2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 251: _t->setChannelMax_Accessory2((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 252: _t->setChannelMaxAccessory3((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 253: _t->setChannelMax_Accessory3((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 254: _t->setChannelMaxRssi((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 255: _t->setChannelMax_Rssi((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 256: _t->setResponseTime((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 257: _t->setResponseTimeRoll((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 258: _t->setResponseTime_Roll((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 259: _t->setResponseTimePitch((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 260: _t->setResponseTime_Pitch((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 261: _t->setResponseTimeYaw((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 262: _t->setResponseTime_Yaw((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 263: _t->setResponseTimeCollective((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 264: _t->setResponseTime_Collective((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 265: _t->setResponseTimeAccessory0((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 266: _t->setResponseTime_Accessory0((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 267: _t->setResponseTimeAccessory1((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 268: _t->setResponseTime_Accessory1((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 269: _t->setResponseTimeAccessory2((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 270: _t->setResponseTime_Accessory2((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 271: _t->setResponseTimeAccessory3((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 272: _t->setResponseTime_Accessory3((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 273: _t->setResponseTimeRssi((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 274: _t->setResponseTime_Rssi((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 275: _t->setChannelGroups((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[2]))); break;
        case 276: _t->setChannelGroups((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 277: _t->setChannelGroupsThrottle((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 278: _t->setChannelGroups_Throttle((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 279: _t->setChannelGroupsRoll((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 280: _t->setChannelGroups_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 281: _t->setChannelGroupsPitch((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 282: _t->setChannelGroups_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 283: _t->setChannelGroupsYaw((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 284: _t->setChannelGroups_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 285: _t->setChannelGroupsFlightMode((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 286: _t->setChannelGroups_FlightMode((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 287: _t->setChannelGroupsCollective((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 288: _t->setChannelGroups_Collective((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 289: _t->setChannelGroupsAccessory0((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 290: _t->setChannelGroups_Accessory0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 291: _t->setChannelGroupsAccessory1((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 292: _t->setChannelGroups_Accessory1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 293: _t->setChannelGroupsAccessory2((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 294: _t->setChannelGroups_Accessory2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 295: _t->setChannelGroupsAccessory3((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 296: _t->setChannelGroups_Accessory3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 297: _t->setChannelGroupsRssi((*reinterpret_cast< const ManualControlSettings_ChannelGroups::Enum(*)>(_a[1]))); break;
        case 298: _t->setChannelGroups_Rssi((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 299: _t->setChannelNumber((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 300: _t->setChannelNumber((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 301: _t->setChannelNumberThrottle((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 302: _t->setChannelNumber_Throttle((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 303: _t->setChannelNumberRoll((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 304: _t->setChannelNumber_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 305: _t->setChannelNumberPitch((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 306: _t->setChannelNumber_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 307: _t->setChannelNumberYaw((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 308: _t->setChannelNumber_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 309: _t->setChannelNumberFlightMode((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 310: _t->setChannelNumber_FlightMode((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 311: _t->setChannelNumberCollective((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 312: _t->setChannelNumber_Collective((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 313: _t->setChannelNumberAccessory0((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 314: _t->setChannelNumber_Accessory0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 315: _t->setChannelNumberAccessory1((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 316: _t->setChannelNumber_Accessory1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 317: _t->setChannelNumberAccessory2((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 318: _t->setChannelNumber_Accessory2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 319: _t->setChannelNumberAccessory3((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 320: _t->setChannelNumber_Accessory3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 321: _t->setChannelNumberRssi((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 322: _t->setChannelNumber_Rssi((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 323: _t->setDeadband((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 324: _t->setDeadband((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 325: _t->setDeadbandAssistedControl((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 326: _t->setDeadbandAssistedControl((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 327: _t->setFlightModeNumber((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 328: _t->setFlightModeNumber((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 329: _t->setFailsafeFlightModeSwitchPosition((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 330: _t->setFailsafeFlightModeSwitchPosition((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 331: _t->emitNotifications(); break;
        case 332: { float _r = _t->failsafeChannel((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 333: { float _r = _t->getFailsafeChannel((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 334: { float _r = _t->getFailsafeChannel_Throttle();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 335: { float _r = _t->getFailsafeChannel_Roll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 336: { float _r = _t->getFailsafeChannel_Pitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 337: { float _r = _t->getFailsafeChannel_Yaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 338: { float _r = _t->getFailsafeChannel_Collective();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 339: { float _r = _t->getFailsafeChannel_Accessory0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 340: { float _r = _t->getFailsafeChannel_Accessory1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 341: { float _r = _t->getFailsafeChannel_Accessory2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 342: { float _r = _t->getFailsafeChannel_Accessory3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 343: { qint16 _r = _t->channelMin((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 344: { qint16 _r = _t->getChannelMin((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 345: { qint16 _r = _t->getChannelMin_Throttle();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 346: { qint16 _r = _t->getChannelMin_Roll();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 347: { qint16 _r = _t->getChannelMin_Pitch();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 348: { qint16 _r = _t->getChannelMin_Yaw();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 349: { qint16 _r = _t->getChannelMin_FlightMode();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 350: { qint16 _r = _t->getChannelMin_Collective();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 351: { qint16 _r = _t->getChannelMin_Accessory0();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 352: { qint16 _r = _t->getChannelMin_Accessory1();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 353: { qint16 _r = _t->getChannelMin_Accessory2();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 354: { qint16 _r = _t->getChannelMin_Accessory3();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 355: { qint16 _r = _t->getChannelMin_Rssi();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 356: { qint16 _r = _t->channelNeutral((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 357: { qint16 _r = _t->getChannelNeutral((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 358: { qint16 _r = _t->getChannelNeutral_Throttle();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 359: { qint16 _r = _t->getChannelNeutral_Roll();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 360: { qint16 _r = _t->getChannelNeutral_Pitch();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 361: { qint16 _r = _t->getChannelNeutral_Yaw();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 362: { qint16 _r = _t->getChannelNeutral_FlightMode();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 363: { qint16 _r = _t->getChannelNeutral_Collective();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 364: { qint16 _r = _t->getChannelNeutral_Accessory0();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 365: { qint16 _r = _t->getChannelNeutral_Accessory1();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 366: { qint16 _r = _t->getChannelNeutral_Accessory2();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 367: { qint16 _r = _t->getChannelNeutral_Accessory3();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 368: { qint16 _r = _t->getChannelNeutral_Rssi();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 369: { qint16 _r = _t->channelMax((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 370: { qint16 _r = _t->getChannelMax((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 371: { qint16 _r = _t->getChannelMax_Throttle();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 372: { qint16 _r = _t->getChannelMax_Roll();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 373: { qint16 _r = _t->getChannelMax_Pitch();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 374: { qint16 _r = _t->getChannelMax_Yaw();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 375: { qint16 _r = _t->getChannelMax_FlightMode();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 376: { qint16 _r = _t->getChannelMax_Collective();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 377: { qint16 _r = _t->getChannelMax_Accessory0();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 378: { qint16 _r = _t->getChannelMax_Accessory1();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 379: { qint16 _r = _t->getChannelMax_Accessory2();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 380: { qint16 _r = _t->getChannelMax_Accessory3();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 381: { qint16 _r = _t->getChannelMax_Rssi();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 382: { quint16 _r = _t->responseTime((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 383: { quint16 _r = _t->getResponseTime((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 384: { quint16 _r = _t->getResponseTime_Roll();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 385: { quint16 _r = _t->getResponseTime_Pitch();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 386: { quint16 _r = _t->getResponseTime_Yaw();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 387: { quint16 _r = _t->getResponseTime_Collective();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 388: { quint16 _r = _t->getResponseTime_Accessory0();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 389: { quint16 _r = _t->getResponseTime_Accessory1();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 390: { quint16 _r = _t->getResponseTime_Accessory2();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 391: { quint16 _r = _t->getResponseTime_Accessory3();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 392: { quint16 _r = _t->getResponseTime_Rssi();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 393: { ManualControlSettings_ChannelGroups::Enum _r = _t->channelGroups((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_a[0]) = std::move(_r); }  break;
        case 394: { quint8 _r = _t->getChannelGroups((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 395: { quint8 _r = _t->getChannelGroups_Throttle();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 396: { quint8 _r = _t->getChannelGroups_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 397: { quint8 _r = _t->getChannelGroups_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 398: { quint8 _r = _t->getChannelGroups_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 399: { quint8 _r = _t->getChannelGroups_FlightMode();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 400: { quint8 _r = _t->getChannelGroups_Collective();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 401: { quint8 _r = _t->getChannelGroups_Accessory0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 402: { quint8 _r = _t->getChannelGroups_Accessory1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 403: { quint8 _r = _t->getChannelGroups_Accessory2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 404: { quint8 _r = _t->getChannelGroups_Accessory3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 405: { quint8 _r = _t->getChannelGroups_Rssi();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 406: { quint16 _r = _t->channelNumber((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 407: { quint8 _r = _t->getChannelNumber((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 408: { quint8 _r = _t->getChannelNumber_Throttle();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 409: { quint8 _r = _t->getChannelNumber_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 410: { quint8 _r = _t->getChannelNumber_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 411: { quint8 _r = _t->getChannelNumber_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 412: { quint8 _r = _t->getChannelNumber_FlightMode();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 413: { quint8 _r = _t->getChannelNumber_Collective();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 414: { quint8 _r = _t->getChannelNumber_Accessory0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 415: { quint8 _r = _t->getChannelNumber_Accessory1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 416: { quint8 _r = _t->getChannelNumber_Accessory2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 417: { quint8 _r = _t->getChannelNumber_Accessory3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 418: { quint8 _r = _t->getChannelNumber_Rssi();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 419: { quint8 _r = _t->getDeadband();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 420: { quint8 _r = _t->getDeadbandAssistedControl();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 421: { quint8 _r = _t->getFlightModeNumber();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 422: { qint8 _r = _t->getFailsafeFlightModeSwitchPosition();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ManualControlSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::failsafeChannelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::FailsafeChannelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::failsafeChannelThrottleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::FailsafeChannel_ThrottleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::failsafeChannelRollChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::FailsafeChannel_RollChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::failsafeChannelPitchChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::FailsafeChannel_PitchChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::failsafeChannelYawChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::FailsafeChannel_YawChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::failsafeChannelCollectiveChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::FailsafeChannel_CollectiveChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::failsafeChannelAccessory0Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::FailsafeChannel_Accessory0Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::failsafeChannelAccessory1Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::FailsafeChannel_Accessory1Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::failsafeChannelAccessory2Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::FailsafeChannel_Accessory2Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::failsafeChannelAccessory3Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::FailsafeChannel_Accessory3Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMinChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMinChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMinThrottleChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMin_ThrottleChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMinRollChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMin_RollChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMinPitchChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMin_PitchChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMinYawChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMin_YawChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMinFlightModeChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMin_FlightModeChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMinCollectiveChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMin_CollectiveChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMinAccessory0Changed)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMin_Accessory0Changed)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMinAccessory1Changed)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMin_Accessory1Changed)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMinAccessory2Changed)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMin_Accessory2Changed)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMinAccessory3Changed)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMin_Accessory3Changed)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMinRssiChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMin_RssiChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNeutralChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNeutralChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNeutralThrottleChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNeutral_ThrottleChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNeutralRollChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNeutral_RollChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNeutralPitchChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNeutral_PitchChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNeutralYawChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNeutral_YawChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNeutralFlightModeChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNeutral_FlightModeChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNeutralCollectiveChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNeutral_CollectiveChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNeutralAccessory0Changed)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNeutral_Accessory0Changed)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNeutralAccessory1Changed)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNeutral_Accessory1Changed)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNeutralAccessory2Changed)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNeutral_Accessory2Changed)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNeutralAccessory3Changed)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNeutral_Accessory3Changed)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNeutralRssiChanged)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNeutral_RssiChanged)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMaxChanged)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMaxChanged)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMaxThrottleChanged)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMax_ThrottleChanged)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMaxRollChanged)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMax_RollChanged)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMaxPitchChanged)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMax_PitchChanged)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMaxYawChanged)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMax_YawChanged)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMaxFlightModeChanged)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMax_FlightModeChanged)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMaxCollectiveChanged)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMax_CollectiveChanged)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMaxAccessory0Changed)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMax_Accessory0Changed)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMaxAccessory1Changed)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMax_Accessory1Changed)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMaxAccessory2Changed)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMax_Accessory2Changed)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMaxAccessory3Changed)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMax_Accessory3Changed)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelMaxRssiChanged)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelMax_RssiChanged)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::responseTimeChanged)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ResponseTimeChanged)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::responseTimeRollChanged)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ResponseTime_RollChanged)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::responseTimePitchChanged)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ResponseTime_PitchChanged)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::responseTimeYawChanged)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ResponseTime_YawChanged)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::responseTimeCollectiveChanged)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ResponseTime_CollectiveChanged)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::responseTimeAccessory0Changed)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ResponseTime_Accessory0Changed)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::responseTimeAccessory1Changed)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ResponseTime_Accessory1Changed)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::responseTimeAccessory2Changed)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ResponseTime_Accessory2Changed)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::responseTimeAccessory3Changed)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ResponseTime_Accessory3Changed)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::responseTimeRssiChanged)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ResponseTime_RssiChanged)) {
                *result = 111;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , const ManualControlSettings_ChannelGroups::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelGroupsChanged)) {
                *result = 112;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelGroupsChanged)) {
                *result = 113;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const ManualControlSettings_ChannelGroups::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelGroupsThrottleChanged)) {
                *result = 114;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelGroups_ThrottleChanged)) {
                *result = 115;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const ManualControlSettings_ChannelGroups::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelGroupsRollChanged)) {
                *result = 116;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelGroups_RollChanged)) {
                *result = 117;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const ManualControlSettings_ChannelGroups::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelGroupsPitchChanged)) {
                *result = 118;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelGroups_PitchChanged)) {
                *result = 119;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const ManualControlSettings_ChannelGroups::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelGroupsYawChanged)) {
                *result = 120;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelGroups_YawChanged)) {
                *result = 121;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const ManualControlSettings_ChannelGroups::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelGroupsFlightModeChanged)) {
                *result = 122;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelGroups_FlightModeChanged)) {
                *result = 123;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const ManualControlSettings_ChannelGroups::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelGroupsCollectiveChanged)) {
                *result = 124;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelGroups_CollectiveChanged)) {
                *result = 125;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const ManualControlSettings_ChannelGroups::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelGroupsAccessory0Changed)) {
                *result = 126;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelGroups_Accessory0Changed)) {
                *result = 127;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const ManualControlSettings_ChannelGroups::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelGroupsAccessory1Changed)) {
                *result = 128;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelGroups_Accessory1Changed)) {
                *result = 129;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const ManualControlSettings_ChannelGroups::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelGroupsAccessory2Changed)) {
                *result = 130;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelGroups_Accessory2Changed)) {
                *result = 131;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const ManualControlSettings_ChannelGroups::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelGroupsAccessory3Changed)) {
                *result = 132;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelGroups_Accessory3Changed)) {
                *result = 133;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const ManualControlSettings_ChannelGroups::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelGroupsRssiChanged)) {
                *result = 134;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelGroups_RssiChanged)) {
                *result = 135;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNumberChanged)) {
                *result = 136;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNumberChanged)) {
                *result = 137;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNumberThrottleChanged)) {
                *result = 138;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNumber_ThrottleChanged)) {
                *result = 139;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNumberRollChanged)) {
                *result = 140;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNumber_RollChanged)) {
                *result = 141;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNumberPitchChanged)) {
                *result = 142;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNumber_PitchChanged)) {
                *result = 143;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNumberYawChanged)) {
                *result = 144;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNumber_YawChanged)) {
                *result = 145;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNumberFlightModeChanged)) {
                *result = 146;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNumber_FlightModeChanged)) {
                *result = 147;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNumberCollectiveChanged)) {
                *result = 148;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNumber_CollectiveChanged)) {
                *result = 149;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNumberAccessory0Changed)) {
                *result = 150;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNumber_Accessory0Changed)) {
                *result = 151;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNumberAccessory1Changed)) {
                *result = 152;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNumber_Accessory1Changed)) {
                *result = 153;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNumberAccessory2Changed)) {
                *result = 154;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNumber_Accessory2Changed)) {
                *result = 155;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNumberAccessory3Changed)) {
                *result = 156;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNumber_Accessory3Changed)) {
                *result = 157;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::channelNumberRssiChanged)) {
                *result = 158;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::ChannelNumber_RssiChanged)) {
                *result = 159;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::deadbandChanged)) {
                *result = 160;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::DeadbandChanged)) {
                *result = 161;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::deadbandAssistedControlChanged)) {
                *result = 162;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::DeadbandAssistedControlChanged)) {
                *result = 163;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::flightModeNumberChanged)) {
                *result = 164;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::FlightModeNumberChanged)) {
                *result = 165;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::failsafeFlightModeSwitchPositionChanged)) {
                *result = 166;
                return;
            }
        }
        {
            using _t = void (ManualControlSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualControlSettings::FailsafeFlightModeSwitchPositionChanged)) {
                *result = 167;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ManualControlSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->failsafeChannelThrottle(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->failsafeChannelRoll(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->failsafeChannelPitch(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->failsafeChannelYaw(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->failsafeChannelCollective(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->failsafeChannelAccessory0(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->failsafeChannelAccessory1(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->failsafeChannelAccessory2(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->failsafeChannelAccessory3(); break;
        case 9: *reinterpret_cast< qint16*>(_v) = _t->channelMinThrottle(); break;
        case 10: *reinterpret_cast< qint16*>(_v) = _t->channelMinRoll(); break;
        case 11: *reinterpret_cast< qint16*>(_v) = _t->channelMinPitch(); break;
        case 12: *reinterpret_cast< qint16*>(_v) = _t->channelMinYaw(); break;
        case 13: *reinterpret_cast< qint16*>(_v) = _t->channelMinFlightMode(); break;
        case 14: *reinterpret_cast< qint16*>(_v) = _t->channelMinCollective(); break;
        case 15: *reinterpret_cast< qint16*>(_v) = _t->channelMinAccessory0(); break;
        case 16: *reinterpret_cast< qint16*>(_v) = _t->channelMinAccessory1(); break;
        case 17: *reinterpret_cast< qint16*>(_v) = _t->channelMinAccessory2(); break;
        case 18: *reinterpret_cast< qint16*>(_v) = _t->channelMinAccessory3(); break;
        case 19: *reinterpret_cast< qint16*>(_v) = _t->channelMinRssi(); break;
        case 20: *reinterpret_cast< qint16*>(_v) = _t->channelNeutralThrottle(); break;
        case 21: *reinterpret_cast< qint16*>(_v) = _t->channelNeutralRoll(); break;
        case 22: *reinterpret_cast< qint16*>(_v) = _t->channelNeutralPitch(); break;
        case 23: *reinterpret_cast< qint16*>(_v) = _t->channelNeutralYaw(); break;
        case 24: *reinterpret_cast< qint16*>(_v) = _t->channelNeutralFlightMode(); break;
        case 25: *reinterpret_cast< qint16*>(_v) = _t->channelNeutralCollective(); break;
        case 26: *reinterpret_cast< qint16*>(_v) = _t->channelNeutralAccessory0(); break;
        case 27: *reinterpret_cast< qint16*>(_v) = _t->channelNeutralAccessory1(); break;
        case 28: *reinterpret_cast< qint16*>(_v) = _t->channelNeutralAccessory2(); break;
        case 29: *reinterpret_cast< qint16*>(_v) = _t->channelNeutralAccessory3(); break;
        case 30: *reinterpret_cast< qint16*>(_v) = _t->channelNeutralRssi(); break;
        case 31: *reinterpret_cast< qint16*>(_v) = _t->channelMaxThrottle(); break;
        case 32: *reinterpret_cast< qint16*>(_v) = _t->channelMaxRoll(); break;
        case 33: *reinterpret_cast< qint16*>(_v) = _t->channelMaxPitch(); break;
        case 34: *reinterpret_cast< qint16*>(_v) = _t->channelMaxYaw(); break;
        case 35: *reinterpret_cast< qint16*>(_v) = _t->channelMaxFlightMode(); break;
        case 36: *reinterpret_cast< qint16*>(_v) = _t->channelMaxCollective(); break;
        case 37: *reinterpret_cast< qint16*>(_v) = _t->channelMaxAccessory0(); break;
        case 38: *reinterpret_cast< qint16*>(_v) = _t->channelMaxAccessory1(); break;
        case 39: *reinterpret_cast< qint16*>(_v) = _t->channelMaxAccessory2(); break;
        case 40: *reinterpret_cast< qint16*>(_v) = _t->channelMaxAccessory3(); break;
        case 41: *reinterpret_cast< qint16*>(_v) = _t->channelMaxRssi(); break;
        case 42: *reinterpret_cast< quint16*>(_v) = _t->responseTimeRoll(); break;
        case 43: *reinterpret_cast< quint16*>(_v) = _t->responseTimePitch(); break;
        case 44: *reinterpret_cast< quint16*>(_v) = _t->responseTimeYaw(); break;
        case 45: *reinterpret_cast< quint16*>(_v) = _t->responseTimeCollective(); break;
        case 46: *reinterpret_cast< quint16*>(_v) = _t->responseTimeAccessory0(); break;
        case 47: *reinterpret_cast< quint16*>(_v) = _t->responseTimeAccessory1(); break;
        case 48: *reinterpret_cast< quint16*>(_v) = _t->responseTimeAccessory2(); break;
        case 49: *reinterpret_cast< quint16*>(_v) = _t->responseTimeAccessory3(); break;
        case 50: *reinterpret_cast< quint16*>(_v) = _t->responseTimeRssi(); break;
        case 51: *reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v) = _t->channelGroupsThrottle(); break;
        case 52: *reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v) = _t->channelGroupsRoll(); break;
        case 53: *reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v) = _t->channelGroupsPitch(); break;
        case 54: *reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v) = _t->channelGroupsYaw(); break;
        case 55: *reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v) = _t->channelGroupsFlightMode(); break;
        case 56: *reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v) = _t->channelGroupsCollective(); break;
        case 57: *reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v) = _t->channelGroupsAccessory0(); break;
        case 58: *reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v) = _t->channelGroupsAccessory1(); break;
        case 59: *reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v) = _t->channelGroupsAccessory2(); break;
        case 60: *reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v) = _t->channelGroupsAccessory3(); break;
        case 61: *reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v) = _t->channelGroupsRssi(); break;
        case 62: *reinterpret_cast< quint16*>(_v) = _t->channelNumberThrottle(); break;
        case 63: *reinterpret_cast< quint16*>(_v) = _t->channelNumberRoll(); break;
        case 64: *reinterpret_cast< quint16*>(_v) = _t->channelNumberPitch(); break;
        case 65: *reinterpret_cast< quint16*>(_v) = _t->channelNumberYaw(); break;
        case 66: *reinterpret_cast< quint16*>(_v) = _t->channelNumberFlightMode(); break;
        case 67: *reinterpret_cast< quint16*>(_v) = _t->channelNumberCollective(); break;
        case 68: *reinterpret_cast< quint16*>(_v) = _t->channelNumberAccessory0(); break;
        case 69: *reinterpret_cast< quint16*>(_v) = _t->channelNumberAccessory1(); break;
        case 70: *reinterpret_cast< quint16*>(_v) = _t->channelNumberAccessory2(); break;
        case 71: *reinterpret_cast< quint16*>(_v) = _t->channelNumberAccessory3(); break;
        case 72: *reinterpret_cast< quint16*>(_v) = _t->channelNumberRssi(); break;
        case 73: *reinterpret_cast< quint16*>(_v) = _t->deadband(); break;
        case 74: *reinterpret_cast< quint16*>(_v) = _t->deadbandAssistedControl(); break;
        case 75: *reinterpret_cast< quint16*>(_v) = _t->flightModeNumber(); break;
        case 76: *reinterpret_cast< qint16*>(_v) = _t->failsafeFlightModeSwitchPosition(); break;
        case 77: *reinterpret_cast< float*>(_v) = _t->getFailsafeChannel_Throttle(); break;
        case 78: *reinterpret_cast< float*>(_v) = _t->getFailsafeChannel_Roll(); break;
        case 79: *reinterpret_cast< float*>(_v) = _t->getFailsafeChannel_Pitch(); break;
        case 80: *reinterpret_cast< float*>(_v) = _t->getFailsafeChannel_Yaw(); break;
        case 81: *reinterpret_cast< float*>(_v) = _t->getFailsafeChannel_Collective(); break;
        case 82: *reinterpret_cast< float*>(_v) = _t->getFailsafeChannel_Accessory0(); break;
        case 83: *reinterpret_cast< float*>(_v) = _t->getFailsafeChannel_Accessory1(); break;
        case 84: *reinterpret_cast< float*>(_v) = _t->getFailsafeChannel_Accessory2(); break;
        case 85: *reinterpret_cast< float*>(_v) = _t->getFailsafeChannel_Accessory3(); break;
        case 86: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_Throttle(); break;
        case 87: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_Roll(); break;
        case 88: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_Pitch(); break;
        case 89: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_Yaw(); break;
        case 90: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_FlightMode(); break;
        case 91: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_Collective(); break;
        case 92: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_Accessory0(); break;
        case 93: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_Accessory1(); break;
        case 94: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_Accessory2(); break;
        case 95: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_Accessory3(); break;
        case 96: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_Rssi(); break;
        case 97: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_Throttle(); break;
        case 98: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_Roll(); break;
        case 99: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_Pitch(); break;
        case 100: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_Yaw(); break;
        case 101: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_FlightMode(); break;
        case 102: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_Collective(); break;
        case 103: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_Accessory0(); break;
        case 104: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_Accessory1(); break;
        case 105: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_Accessory2(); break;
        case 106: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_Accessory3(); break;
        case 107: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_Rssi(); break;
        case 108: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_Throttle(); break;
        case 109: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_Roll(); break;
        case 110: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_Pitch(); break;
        case 111: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_Yaw(); break;
        case 112: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_FlightMode(); break;
        case 113: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_Collective(); break;
        case 114: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_Accessory0(); break;
        case 115: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_Accessory1(); break;
        case 116: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_Accessory2(); break;
        case 117: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_Accessory3(); break;
        case 118: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_Rssi(); break;
        case 119: *reinterpret_cast< quint16*>(_v) = _t->getResponseTime_Roll(); break;
        case 120: *reinterpret_cast< quint16*>(_v) = _t->getResponseTime_Pitch(); break;
        case 121: *reinterpret_cast< quint16*>(_v) = _t->getResponseTime_Yaw(); break;
        case 122: *reinterpret_cast< quint16*>(_v) = _t->getResponseTime_Collective(); break;
        case 123: *reinterpret_cast< quint16*>(_v) = _t->getResponseTime_Accessory0(); break;
        case 124: *reinterpret_cast< quint16*>(_v) = _t->getResponseTime_Accessory1(); break;
        case 125: *reinterpret_cast< quint16*>(_v) = _t->getResponseTime_Accessory2(); break;
        case 126: *reinterpret_cast< quint16*>(_v) = _t->getResponseTime_Accessory3(); break;
        case 127: *reinterpret_cast< quint16*>(_v) = _t->getResponseTime_Rssi(); break;
        case 128: *reinterpret_cast< quint8*>(_v) = _t->getChannelGroups_Throttle(); break;
        case 129: *reinterpret_cast< quint8*>(_v) = _t->getChannelGroups_Roll(); break;
        case 130: *reinterpret_cast< quint8*>(_v) = _t->getChannelGroups_Pitch(); break;
        case 131: *reinterpret_cast< quint8*>(_v) = _t->getChannelGroups_Yaw(); break;
        case 132: *reinterpret_cast< quint8*>(_v) = _t->getChannelGroups_FlightMode(); break;
        case 133: *reinterpret_cast< quint8*>(_v) = _t->getChannelGroups_Collective(); break;
        case 134: *reinterpret_cast< quint8*>(_v) = _t->getChannelGroups_Accessory0(); break;
        case 135: *reinterpret_cast< quint8*>(_v) = _t->getChannelGroups_Accessory1(); break;
        case 136: *reinterpret_cast< quint8*>(_v) = _t->getChannelGroups_Accessory2(); break;
        case 137: *reinterpret_cast< quint8*>(_v) = _t->getChannelGroups_Accessory3(); break;
        case 138: *reinterpret_cast< quint8*>(_v) = _t->getChannelGroups_Rssi(); break;
        case 139: *reinterpret_cast< quint8*>(_v) = _t->getChannelNumber_Throttle(); break;
        case 140: *reinterpret_cast< quint8*>(_v) = _t->getChannelNumber_Roll(); break;
        case 141: *reinterpret_cast< quint8*>(_v) = _t->getChannelNumber_Pitch(); break;
        case 142: *reinterpret_cast< quint8*>(_v) = _t->getChannelNumber_Yaw(); break;
        case 143: *reinterpret_cast< quint8*>(_v) = _t->getChannelNumber_FlightMode(); break;
        case 144: *reinterpret_cast< quint8*>(_v) = _t->getChannelNumber_Collective(); break;
        case 145: *reinterpret_cast< quint8*>(_v) = _t->getChannelNumber_Accessory0(); break;
        case 146: *reinterpret_cast< quint8*>(_v) = _t->getChannelNumber_Accessory1(); break;
        case 147: *reinterpret_cast< quint8*>(_v) = _t->getChannelNumber_Accessory2(); break;
        case 148: *reinterpret_cast< quint8*>(_v) = _t->getChannelNumber_Accessory3(); break;
        case 149: *reinterpret_cast< quint8*>(_v) = _t->getChannelNumber_Rssi(); break;
        case 150: *reinterpret_cast< quint8*>(_v) = _t->getDeadband(); break;
        case 151: *reinterpret_cast< quint8*>(_v) = _t->getDeadbandAssistedControl(); break;
        case 152: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeNumber(); break;
        case 153: *reinterpret_cast< qint8*>(_v) = _t->getFailsafeFlightModeSwitchPosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ManualControlSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFailsafeChannelThrottle(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setFailsafeChannelRoll(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setFailsafeChannelPitch(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setFailsafeChannelYaw(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setFailsafeChannelCollective(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setFailsafeChannelAccessory0(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setFailsafeChannelAccessory1(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setFailsafeChannelAccessory2(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setFailsafeChannelAccessory3(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setChannelMinThrottle(*reinterpret_cast< qint16*>(_v)); break;
        case 10: _t->setChannelMinRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 11: _t->setChannelMinPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 12: _t->setChannelMinYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 13: _t->setChannelMinFlightMode(*reinterpret_cast< qint16*>(_v)); break;
        case 14: _t->setChannelMinCollective(*reinterpret_cast< qint16*>(_v)); break;
        case 15: _t->setChannelMinAccessory0(*reinterpret_cast< qint16*>(_v)); break;
        case 16: _t->setChannelMinAccessory1(*reinterpret_cast< qint16*>(_v)); break;
        case 17: _t->setChannelMinAccessory2(*reinterpret_cast< qint16*>(_v)); break;
        case 18: _t->setChannelMinAccessory3(*reinterpret_cast< qint16*>(_v)); break;
        case 19: _t->setChannelMinRssi(*reinterpret_cast< qint16*>(_v)); break;
        case 20: _t->setChannelNeutralThrottle(*reinterpret_cast< qint16*>(_v)); break;
        case 21: _t->setChannelNeutralRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 22: _t->setChannelNeutralPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 23: _t->setChannelNeutralYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 24: _t->setChannelNeutralFlightMode(*reinterpret_cast< qint16*>(_v)); break;
        case 25: _t->setChannelNeutralCollective(*reinterpret_cast< qint16*>(_v)); break;
        case 26: _t->setChannelNeutralAccessory0(*reinterpret_cast< qint16*>(_v)); break;
        case 27: _t->setChannelNeutralAccessory1(*reinterpret_cast< qint16*>(_v)); break;
        case 28: _t->setChannelNeutralAccessory2(*reinterpret_cast< qint16*>(_v)); break;
        case 29: _t->setChannelNeutralAccessory3(*reinterpret_cast< qint16*>(_v)); break;
        case 30: _t->setChannelNeutralRssi(*reinterpret_cast< qint16*>(_v)); break;
        case 31: _t->setChannelMaxThrottle(*reinterpret_cast< qint16*>(_v)); break;
        case 32: _t->setChannelMaxRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 33: _t->setChannelMaxPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 34: _t->setChannelMaxYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 35: _t->setChannelMaxFlightMode(*reinterpret_cast< qint16*>(_v)); break;
        case 36: _t->setChannelMaxCollective(*reinterpret_cast< qint16*>(_v)); break;
        case 37: _t->setChannelMaxAccessory0(*reinterpret_cast< qint16*>(_v)); break;
        case 38: _t->setChannelMaxAccessory1(*reinterpret_cast< qint16*>(_v)); break;
        case 39: _t->setChannelMaxAccessory2(*reinterpret_cast< qint16*>(_v)); break;
        case 40: _t->setChannelMaxAccessory3(*reinterpret_cast< qint16*>(_v)); break;
        case 41: _t->setChannelMaxRssi(*reinterpret_cast< qint16*>(_v)); break;
        case 42: _t->setResponseTimeRoll(*reinterpret_cast< quint16*>(_v)); break;
        case 43: _t->setResponseTimePitch(*reinterpret_cast< quint16*>(_v)); break;
        case 44: _t->setResponseTimeYaw(*reinterpret_cast< quint16*>(_v)); break;
        case 45: _t->setResponseTimeCollective(*reinterpret_cast< quint16*>(_v)); break;
        case 46: _t->setResponseTimeAccessory0(*reinterpret_cast< quint16*>(_v)); break;
        case 47: _t->setResponseTimeAccessory1(*reinterpret_cast< quint16*>(_v)); break;
        case 48: _t->setResponseTimeAccessory2(*reinterpret_cast< quint16*>(_v)); break;
        case 49: _t->setResponseTimeAccessory3(*reinterpret_cast< quint16*>(_v)); break;
        case 50: _t->setResponseTimeRssi(*reinterpret_cast< quint16*>(_v)); break;
        case 51: _t->setChannelGroupsThrottle(*reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v)); break;
        case 52: _t->setChannelGroupsRoll(*reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v)); break;
        case 53: _t->setChannelGroupsPitch(*reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v)); break;
        case 54: _t->setChannelGroupsYaw(*reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v)); break;
        case 55: _t->setChannelGroupsFlightMode(*reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v)); break;
        case 56: _t->setChannelGroupsCollective(*reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v)); break;
        case 57: _t->setChannelGroupsAccessory0(*reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v)); break;
        case 58: _t->setChannelGroupsAccessory1(*reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v)); break;
        case 59: _t->setChannelGroupsAccessory2(*reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v)); break;
        case 60: _t->setChannelGroupsAccessory3(*reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v)); break;
        case 61: _t->setChannelGroupsRssi(*reinterpret_cast< ManualControlSettings_ChannelGroups::Enum*>(_v)); break;
        case 62: _t->setChannelNumberThrottle(*reinterpret_cast< quint16*>(_v)); break;
        case 63: _t->setChannelNumberRoll(*reinterpret_cast< quint16*>(_v)); break;
        case 64: _t->setChannelNumberPitch(*reinterpret_cast< quint16*>(_v)); break;
        case 65: _t->setChannelNumberYaw(*reinterpret_cast< quint16*>(_v)); break;
        case 66: _t->setChannelNumberFlightMode(*reinterpret_cast< quint16*>(_v)); break;
        case 67: _t->setChannelNumberCollective(*reinterpret_cast< quint16*>(_v)); break;
        case 68: _t->setChannelNumberAccessory0(*reinterpret_cast< quint16*>(_v)); break;
        case 69: _t->setChannelNumberAccessory1(*reinterpret_cast< quint16*>(_v)); break;
        case 70: _t->setChannelNumberAccessory2(*reinterpret_cast< quint16*>(_v)); break;
        case 71: _t->setChannelNumberAccessory3(*reinterpret_cast< quint16*>(_v)); break;
        case 72: _t->setChannelNumberRssi(*reinterpret_cast< quint16*>(_v)); break;
        case 73: _t->setDeadband(*reinterpret_cast< quint16*>(_v)); break;
        case 74: _t->setDeadbandAssistedControl(*reinterpret_cast< quint16*>(_v)); break;
        case 75: _t->setFlightModeNumber(*reinterpret_cast< quint16*>(_v)); break;
        case 76: _t->setFailsafeFlightModeSwitchPosition(*reinterpret_cast< qint16*>(_v)); break;
        case 77: _t->setFailsafeChannel_Throttle(*reinterpret_cast< float*>(_v)); break;
        case 78: _t->setFailsafeChannel_Roll(*reinterpret_cast< float*>(_v)); break;
        case 79: _t->setFailsafeChannel_Pitch(*reinterpret_cast< float*>(_v)); break;
        case 80: _t->setFailsafeChannel_Yaw(*reinterpret_cast< float*>(_v)); break;
        case 81: _t->setFailsafeChannel_Collective(*reinterpret_cast< float*>(_v)); break;
        case 82: _t->setFailsafeChannel_Accessory0(*reinterpret_cast< float*>(_v)); break;
        case 83: _t->setFailsafeChannel_Accessory1(*reinterpret_cast< float*>(_v)); break;
        case 84: _t->setFailsafeChannel_Accessory2(*reinterpret_cast< float*>(_v)); break;
        case 85: _t->setFailsafeChannel_Accessory3(*reinterpret_cast< float*>(_v)); break;
        case 86: _t->setChannelMin_Throttle(*reinterpret_cast< qint16*>(_v)); break;
        case 87: _t->setChannelMin_Roll(*reinterpret_cast< qint16*>(_v)); break;
        case 88: _t->setChannelMin_Pitch(*reinterpret_cast< qint16*>(_v)); break;
        case 89: _t->setChannelMin_Yaw(*reinterpret_cast< qint16*>(_v)); break;
        case 90: _t->setChannelMin_FlightMode(*reinterpret_cast< qint16*>(_v)); break;
        case 91: _t->setChannelMin_Collective(*reinterpret_cast< qint16*>(_v)); break;
        case 92: _t->setChannelMin_Accessory0(*reinterpret_cast< qint16*>(_v)); break;
        case 93: _t->setChannelMin_Accessory1(*reinterpret_cast< qint16*>(_v)); break;
        case 94: _t->setChannelMin_Accessory2(*reinterpret_cast< qint16*>(_v)); break;
        case 95: _t->setChannelMin_Accessory3(*reinterpret_cast< qint16*>(_v)); break;
        case 96: _t->setChannelMin_Rssi(*reinterpret_cast< qint16*>(_v)); break;
        case 97: _t->setChannelNeutral_Throttle(*reinterpret_cast< qint16*>(_v)); break;
        case 98: _t->setChannelNeutral_Roll(*reinterpret_cast< qint16*>(_v)); break;
        case 99: _t->setChannelNeutral_Pitch(*reinterpret_cast< qint16*>(_v)); break;
        case 100: _t->setChannelNeutral_Yaw(*reinterpret_cast< qint16*>(_v)); break;
        case 101: _t->setChannelNeutral_FlightMode(*reinterpret_cast< qint16*>(_v)); break;
        case 102: _t->setChannelNeutral_Collective(*reinterpret_cast< qint16*>(_v)); break;
        case 103: _t->setChannelNeutral_Accessory0(*reinterpret_cast< qint16*>(_v)); break;
        case 104: _t->setChannelNeutral_Accessory1(*reinterpret_cast< qint16*>(_v)); break;
        case 105: _t->setChannelNeutral_Accessory2(*reinterpret_cast< qint16*>(_v)); break;
        case 106: _t->setChannelNeutral_Accessory3(*reinterpret_cast< qint16*>(_v)); break;
        case 107: _t->setChannelNeutral_Rssi(*reinterpret_cast< qint16*>(_v)); break;
        case 108: _t->setChannelMax_Throttle(*reinterpret_cast< qint16*>(_v)); break;
        case 109: _t->setChannelMax_Roll(*reinterpret_cast< qint16*>(_v)); break;
        case 110: _t->setChannelMax_Pitch(*reinterpret_cast< qint16*>(_v)); break;
        case 111: _t->setChannelMax_Yaw(*reinterpret_cast< qint16*>(_v)); break;
        case 112: _t->setChannelMax_FlightMode(*reinterpret_cast< qint16*>(_v)); break;
        case 113: _t->setChannelMax_Collective(*reinterpret_cast< qint16*>(_v)); break;
        case 114: _t->setChannelMax_Accessory0(*reinterpret_cast< qint16*>(_v)); break;
        case 115: _t->setChannelMax_Accessory1(*reinterpret_cast< qint16*>(_v)); break;
        case 116: _t->setChannelMax_Accessory2(*reinterpret_cast< qint16*>(_v)); break;
        case 117: _t->setChannelMax_Accessory3(*reinterpret_cast< qint16*>(_v)); break;
        case 118: _t->setChannelMax_Rssi(*reinterpret_cast< qint16*>(_v)); break;
        case 119: _t->setResponseTime_Roll(*reinterpret_cast< quint16*>(_v)); break;
        case 120: _t->setResponseTime_Pitch(*reinterpret_cast< quint16*>(_v)); break;
        case 121: _t->setResponseTime_Yaw(*reinterpret_cast< quint16*>(_v)); break;
        case 122: _t->setResponseTime_Collective(*reinterpret_cast< quint16*>(_v)); break;
        case 123: _t->setResponseTime_Accessory0(*reinterpret_cast< quint16*>(_v)); break;
        case 124: _t->setResponseTime_Accessory1(*reinterpret_cast< quint16*>(_v)); break;
        case 125: _t->setResponseTime_Accessory2(*reinterpret_cast< quint16*>(_v)); break;
        case 126: _t->setResponseTime_Accessory3(*reinterpret_cast< quint16*>(_v)); break;
        case 127: _t->setResponseTime_Rssi(*reinterpret_cast< quint16*>(_v)); break;
        case 128: _t->setChannelGroups_Throttle(*reinterpret_cast< quint8*>(_v)); break;
        case 129: _t->setChannelGroups_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 130: _t->setChannelGroups_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 131: _t->setChannelGroups_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 132: _t->setChannelGroups_FlightMode(*reinterpret_cast< quint8*>(_v)); break;
        case 133: _t->setChannelGroups_Collective(*reinterpret_cast< quint8*>(_v)); break;
        case 134: _t->setChannelGroups_Accessory0(*reinterpret_cast< quint8*>(_v)); break;
        case 135: _t->setChannelGroups_Accessory1(*reinterpret_cast< quint8*>(_v)); break;
        case 136: _t->setChannelGroups_Accessory2(*reinterpret_cast< quint8*>(_v)); break;
        case 137: _t->setChannelGroups_Accessory3(*reinterpret_cast< quint8*>(_v)); break;
        case 138: _t->setChannelGroups_Rssi(*reinterpret_cast< quint8*>(_v)); break;
        case 139: _t->setChannelNumber_Throttle(*reinterpret_cast< quint8*>(_v)); break;
        case 140: _t->setChannelNumber_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 141: _t->setChannelNumber_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 142: _t->setChannelNumber_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 143: _t->setChannelNumber_FlightMode(*reinterpret_cast< quint8*>(_v)); break;
        case 144: _t->setChannelNumber_Collective(*reinterpret_cast< quint8*>(_v)); break;
        case 145: _t->setChannelNumber_Accessory0(*reinterpret_cast< quint8*>(_v)); break;
        case 146: _t->setChannelNumber_Accessory1(*reinterpret_cast< quint8*>(_v)); break;
        case 147: _t->setChannelNumber_Accessory2(*reinterpret_cast< quint8*>(_v)); break;
        case 148: _t->setChannelNumber_Accessory3(*reinterpret_cast< quint8*>(_v)); break;
        case 149: _t->setChannelNumber_Rssi(*reinterpret_cast< quint8*>(_v)); break;
        case 150: _t->setDeadband(*reinterpret_cast< quint8*>(_v)); break;
        case 151: _t->setDeadbandAssistedControl(*reinterpret_cast< quint8*>(_v)); break;
        case 152: _t->setFlightModeNumber(*reinterpret_cast< quint8*>(_v)); break;
        case 153: _t->setFailsafeFlightModeSwitchPosition(*reinterpret_cast< qint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_ManualControlSettings[] = {
        &ManualControlSettings_ChannelGroups::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ManualControlSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_ManualControlSettings.data,
    qt_meta_data_ManualControlSettings,
    qt_static_metacall,
    qt_meta_extradata_ManualControlSettings,
    nullptr
} };


const QMetaObject *ManualControlSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManualControlSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ManualControlSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int ManualControlSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 423)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 423;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 423)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 423;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 154;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 154;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 154;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 154;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 154;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 154;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ManualControlSettings::failsafeChannelChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ManualControlSettings::FailsafeChannelChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ManualControlSettings::failsafeChannelThrottleChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ManualControlSettings::FailsafeChannel_ThrottleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ManualControlSettings::failsafeChannelRollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ManualControlSettings::FailsafeChannel_RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ManualControlSettings::failsafeChannelPitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ManualControlSettings::FailsafeChannel_PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ManualControlSettings::failsafeChannelYawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ManualControlSettings::FailsafeChannel_YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ManualControlSettings::failsafeChannelCollectiveChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ManualControlSettings::FailsafeChannel_CollectiveChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ManualControlSettings::failsafeChannelAccessory0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ManualControlSettings::FailsafeChannel_Accessory0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ManualControlSettings::failsafeChannelAccessory1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ManualControlSettings::FailsafeChannel_Accessory1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void ManualControlSettings::failsafeChannelAccessory2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void ManualControlSettings::FailsafeChannel_Accessory2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void ManualControlSettings::failsafeChannelAccessory3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void ManualControlSettings::FailsafeChannel_Accessory3Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void ManualControlSettings::channelMinChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void ManualControlSettings::ChannelMinChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void ManualControlSettings::channelMinThrottleChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void ManualControlSettings::ChannelMin_ThrottleChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void ManualControlSettings::channelMinRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void ManualControlSettings::ChannelMin_RollChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void ManualControlSettings::channelMinPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void ManualControlSettings::ChannelMin_PitchChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void ManualControlSettings::channelMinYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void ManualControlSettings::ChannelMin_YawChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void ManualControlSettings::channelMinFlightModeChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void ManualControlSettings::ChannelMin_FlightModeChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void ManualControlSettings::channelMinCollectiveChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void ManualControlSettings::ChannelMin_CollectiveChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void ManualControlSettings::channelMinAccessory0Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void ManualControlSettings::ChannelMin_Accessory0Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void ManualControlSettings::channelMinAccessory1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void ManualControlSettings::ChannelMin_Accessory1Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void ManualControlSettings::channelMinAccessory2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void ManualControlSettings::ChannelMin_Accessory2Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void ManualControlSettings::channelMinAccessory3Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void ManualControlSettings::ChannelMin_Accessory3Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void ManualControlSettings::channelMinRssiChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void ManualControlSettings::ChannelMin_RssiChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void ManualControlSettings::channelNeutralChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void ManualControlSettings::ChannelNeutralChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void ManualControlSettings::channelNeutralThrottleChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void ManualControlSettings::ChannelNeutral_ThrottleChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void ManualControlSettings::channelNeutralRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void ManualControlSettings::ChannelNeutral_RollChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void ManualControlSettings::channelNeutralPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void ManualControlSettings::ChannelNeutral_PitchChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void ManualControlSettings::channelNeutralYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void ManualControlSettings::ChannelNeutral_YawChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void ManualControlSettings::channelNeutralFlightModeChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void ManualControlSettings::ChannelNeutral_FlightModeChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void ManualControlSettings::channelNeutralCollectiveChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void ManualControlSettings::ChannelNeutral_CollectiveChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void ManualControlSettings::channelNeutralAccessory0Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void ManualControlSettings::ChannelNeutral_Accessory0Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void ManualControlSettings::channelNeutralAccessory1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void ManualControlSettings::ChannelNeutral_Accessory1Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void ManualControlSettings::channelNeutralAccessory2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void ManualControlSettings::ChannelNeutral_Accessory2Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void ManualControlSettings::channelNeutralAccessory3Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void ManualControlSettings::ChannelNeutral_Accessory3Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void ManualControlSettings::channelNeutralRssiChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void ManualControlSettings::ChannelNeutral_RssiChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void ManualControlSettings::channelMaxChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void ManualControlSettings::ChannelMaxChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void ManualControlSettings::channelMaxThrottleChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void ManualControlSettings::ChannelMax_ThrottleChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void ManualControlSettings::channelMaxRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void ManualControlSettings::ChannelMax_RollChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void ManualControlSettings::channelMaxPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void ManualControlSettings::ChannelMax_PitchChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void ManualControlSettings::channelMaxYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void ManualControlSettings::ChannelMax_YawChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void ManualControlSettings::channelMaxFlightModeChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void ManualControlSettings::ChannelMax_FlightModeChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void ManualControlSettings::channelMaxCollectiveChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void ManualControlSettings::ChannelMax_CollectiveChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void ManualControlSettings::channelMaxAccessory0Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void ManualControlSettings::ChannelMax_Accessory0Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void ManualControlSettings::channelMaxAccessory1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void ManualControlSettings::ChannelMax_Accessory1Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void ManualControlSettings::channelMaxAccessory2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void ManualControlSettings::ChannelMax_Accessory2Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void ManualControlSettings::channelMaxAccessory3Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void ManualControlSettings::ChannelMax_Accessory3Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void ManualControlSettings::channelMaxRssiChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void ManualControlSettings::ChannelMax_RssiChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void ManualControlSettings::responseTimeChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void ManualControlSettings::ResponseTimeChanged(quint32 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void ManualControlSettings::responseTimeRollChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void ManualControlSettings::ResponseTime_RollChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void ManualControlSettings::responseTimePitchChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void ManualControlSettings::ResponseTime_PitchChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void ManualControlSettings::responseTimeYawChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void ManualControlSettings::ResponseTime_YawChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void ManualControlSettings::responseTimeCollectiveChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void ManualControlSettings::ResponseTime_CollectiveChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void ManualControlSettings::responseTimeAccessory0Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void ManualControlSettings::ResponseTime_Accessory0Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void ManualControlSettings::responseTimeAccessory1Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void ManualControlSettings::ResponseTime_Accessory1Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void ManualControlSettings::responseTimeAccessory2Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void ManualControlSettings::ResponseTime_Accessory2Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void ManualControlSettings::responseTimeAccessory3Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void ManualControlSettings::ResponseTime_Accessory3Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void ManualControlSettings::responseTimeRssiChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void ManualControlSettings::ResponseTime_RssiChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void ManualControlSettings::channelGroupsChanged(quint32 _t1, const ManualControlSettings_ChannelGroups::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void ManualControlSettings::ChannelGroupsChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void ManualControlSettings::channelGroupsThrottleChanged(const ManualControlSettings_ChannelGroups::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}

// SIGNAL 115
void ManualControlSettings::ChannelGroups_ThrottleChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 115, _a);
}

// SIGNAL 116
void ManualControlSettings::channelGroupsRollChanged(const ManualControlSettings_ChannelGroups::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 116, _a);
}

// SIGNAL 117
void ManualControlSettings::ChannelGroups_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 117, _a);
}

// SIGNAL 118
void ManualControlSettings::channelGroupsPitchChanged(const ManualControlSettings_ChannelGroups::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 118, _a);
}

// SIGNAL 119
void ManualControlSettings::ChannelGroups_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 119, _a);
}

// SIGNAL 120
void ManualControlSettings::channelGroupsYawChanged(const ManualControlSettings_ChannelGroups::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 120, _a);
}

// SIGNAL 121
void ManualControlSettings::ChannelGroups_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 121, _a);
}

// SIGNAL 122
void ManualControlSettings::channelGroupsFlightModeChanged(const ManualControlSettings_ChannelGroups::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 122, _a);
}

// SIGNAL 123
void ManualControlSettings::ChannelGroups_FlightModeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 123, _a);
}

// SIGNAL 124
void ManualControlSettings::channelGroupsCollectiveChanged(const ManualControlSettings_ChannelGroups::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 124, _a);
}

// SIGNAL 125
void ManualControlSettings::ChannelGroups_CollectiveChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 125, _a);
}

// SIGNAL 126
void ManualControlSettings::channelGroupsAccessory0Changed(const ManualControlSettings_ChannelGroups::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 126, _a);
}

// SIGNAL 127
void ManualControlSettings::ChannelGroups_Accessory0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 127, _a);
}

// SIGNAL 128
void ManualControlSettings::channelGroupsAccessory1Changed(const ManualControlSettings_ChannelGroups::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 128, _a);
}

// SIGNAL 129
void ManualControlSettings::ChannelGroups_Accessory1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 129, _a);
}

// SIGNAL 130
void ManualControlSettings::channelGroupsAccessory2Changed(const ManualControlSettings_ChannelGroups::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 130, _a);
}

// SIGNAL 131
void ManualControlSettings::ChannelGroups_Accessory2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 131, _a);
}

// SIGNAL 132
void ManualControlSettings::channelGroupsAccessory3Changed(const ManualControlSettings_ChannelGroups::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 132, _a);
}

// SIGNAL 133
void ManualControlSettings::ChannelGroups_Accessory3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 133, _a);
}

// SIGNAL 134
void ManualControlSettings::channelGroupsRssiChanged(const ManualControlSettings_ChannelGroups::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 134, _a);
}

// SIGNAL 135
void ManualControlSettings::ChannelGroups_RssiChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 135, _a);
}

// SIGNAL 136
void ManualControlSettings::channelNumberChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 136, _a);
}

// SIGNAL 137
void ManualControlSettings::ChannelNumberChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 137, _a);
}

// SIGNAL 138
void ManualControlSettings::channelNumberThrottleChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 138, _a);
}

// SIGNAL 139
void ManualControlSettings::ChannelNumber_ThrottleChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 139, _a);
}

// SIGNAL 140
void ManualControlSettings::channelNumberRollChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 140, _a);
}

// SIGNAL 141
void ManualControlSettings::ChannelNumber_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 141, _a);
}

// SIGNAL 142
void ManualControlSettings::channelNumberPitchChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 142, _a);
}

// SIGNAL 143
void ManualControlSettings::ChannelNumber_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 143, _a);
}

// SIGNAL 144
void ManualControlSettings::channelNumberYawChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 144, _a);
}

// SIGNAL 145
void ManualControlSettings::ChannelNumber_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 145, _a);
}

// SIGNAL 146
void ManualControlSettings::channelNumberFlightModeChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 146, _a);
}

// SIGNAL 147
void ManualControlSettings::ChannelNumber_FlightModeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 147, _a);
}

// SIGNAL 148
void ManualControlSettings::channelNumberCollectiveChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 148, _a);
}

// SIGNAL 149
void ManualControlSettings::ChannelNumber_CollectiveChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 149, _a);
}

// SIGNAL 150
void ManualControlSettings::channelNumberAccessory0Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 150, _a);
}

// SIGNAL 151
void ManualControlSettings::ChannelNumber_Accessory0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 151, _a);
}

// SIGNAL 152
void ManualControlSettings::channelNumberAccessory1Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 152, _a);
}

// SIGNAL 153
void ManualControlSettings::ChannelNumber_Accessory1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 153, _a);
}

// SIGNAL 154
void ManualControlSettings::channelNumberAccessory2Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 154, _a);
}

// SIGNAL 155
void ManualControlSettings::ChannelNumber_Accessory2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 155, _a);
}

// SIGNAL 156
void ManualControlSettings::channelNumberAccessory3Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 156, _a);
}

// SIGNAL 157
void ManualControlSettings::ChannelNumber_Accessory3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 157, _a);
}

// SIGNAL 158
void ManualControlSettings::channelNumberRssiChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 158, _a);
}

// SIGNAL 159
void ManualControlSettings::ChannelNumber_RssiChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 159, _a);
}

// SIGNAL 160
void ManualControlSettings::deadbandChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 160, _a);
}

// SIGNAL 161
void ManualControlSettings::DeadbandChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 161, _a);
}

// SIGNAL 162
void ManualControlSettings::deadbandAssistedControlChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 162, _a);
}

// SIGNAL 163
void ManualControlSettings::DeadbandAssistedControlChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 163, _a);
}

// SIGNAL 164
void ManualControlSettings::flightModeNumberChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 164, _a);
}

// SIGNAL 165
void ManualControlSettings::FlightModeNumberChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 165, _a);
}

// SIGNAL 166
void ManualControlSettings::failsafeFlightModeSwitchPositionChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 166, _a);
}

// SIGNAL 167
void ManualControlSettings::FailsafeFlightModeSwitchPositionChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 167, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
