/****************************************************************************
** Meta object code from reading C++ file 'groundpathfollowersettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../groundpathfollowersettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groundpathfollowersettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GroundPathFollowerSettingsConstants_t {
    QByteArrayData data[2];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroundPathFollowerSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroundPathFollowerSettingsConstants_t qt_meta_stringdata_GroundPathFollowerSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 35), // "GroundPathFollowerSettingsCon..."
QT_MOC_LITERAL(1, 36, 4) // "Enum"

    },
    "GroundPathFollowerSettingsConstants\0"
    "Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroundPathFollowerSettingsConstants[] = {

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

void GroundPathFollowerSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GroundPathFollowerSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GroundPathFollowerSettingsConstants.data,
    qt_meta_data_GroundPathFollowerSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GroundPathFollowerSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroundPathFollowerSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroundPathFollowerSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GroundPathFollowerSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GroundPathFollowerSettings_t {
    QByteArrayData data[100];
    char stringdata0[1772];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroundPathFollowerSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroundPathFollowerSettings_t qt_meta_stringdata_GroundPathFollowerSettings = {
    {
QT_MOC_LITERAL(0, 0, 26), // "GroundPathFollowerSettings"
QT_MOC_LITERAL(1, 27, 23), // "horizontalVelMaxChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 5), // "value"
QT_MOC_LITERAL(4, 58, 23), // "HorizontalVelMaxChanged"
QT_MOC_LITERAL(5, 82, 23), // "horizontalVelMinChanged"
QT_MOC_LITERAL(6, 106, 23), // "HorizontalVelMinChanged"
QT_MOC_LITERAL(7, 130, 24), // "courseFeedForwardChanged"
QT_MOC_LITERAL(8, 155, 24), // "CourseFeedForwardChanged"
QT_MOC_LITERAL(9, 180, 26), // "velocityFeedForwardChanged"
QT_MOC_LITERAL(10, 207, 26), // "VelocityFeedForwardChanged"
QT_MOC_LITERAL(11, 234, 21), // "horizontalPosPChanged"
QT_MOC_LITERAL(12, 256, 21), // "HorizontalPosPChanged"
QT_MOC_LITERAL(13, 278, 14), // "speedPIChanged"
QT_MOC_LITERAL(14, 293, 5), // "index"
QT_MOC_LITERAL(15, 299, 14), // "SpeedPIChanged"
QT_MOC_LITERAL(16, 314, 16), // "speedPIKpChanged"
QT_MOC_LITERAL(17, 331, 17), // "SpeedPI_KpChanged"
QT_MOC_LITERAL(18, 349, 16), // "speedPIKiChanged"
QT_MOC_LITERAL(19, 366, 17), // "SpeedPI_KiChanged"
QT_MOC_LITERAL(20, 384, 16), // "speedPIKdChanged"
QT_MOC_LITERAL(21, 401, 17), // "SpeedPI_KdChanged"
QT_MOC_LITERAL(22, 419, 18), // "speedPIBetaChanged"
QT_MOC_LITERAL(23, 438, 19), // "SpeedPI_BetaChanged"
QT_MOC_LITERAL(24, 458, 18), // "thrustLimitChanged"
QT_MOC_LITERAL(25, 477, 18), // "ThrustLimitChanged"
QT_MOC_LITERAL(26, 496, 21), // "thrustLimitMinChanged"
QT_MOC_LITERAL(27, 518, 22), // "ThrustLimit_MinChanged"
QT_MOC_LITERAL(28, 541, 29), // "thrustLimitSlowForwardChanged"
QT_MOC_LITERAL(29, 571, 30), // "ThrustLimit_SlowForwardChanged"
QT_MOC_LITERAL(30, 602, 21), // "thrustLimitMaxChanged"
QT_MOC_LITERAL(31, 624, 22), // "ThrustLimit_MaxChanged"
QT_MOC_LITERAL(32, 647, 19), // "updatePeriodChanged"
QT_MOC_LITERAL(33, 667, 19), // "UpdatePeriodChanged"
QT_MOC_LITERAL(34, 687, 19), // "setHorizontalVelMax"
QT_MOC_LITERAL(35, 707, 19), // "setHorizontalVelMin"
QT_MOC_LITERAL(36, 727, 20), // "setCourseFeedForward"
QT_MOC_LITERAL(37, 748, 22), // "setVelocityFeedForward"
QT_MOC_LITERAL(38, 771, 17), // "setHorizontalPosP"
QT_MOC_LITERAL(39, 789, 10), // "setSpeedPI"
QT_MOC_LITERAL(40, 800, 12), // "setSpeedPIKp"
QT_MOC_LITERAL(41, 813, 13), // "setSpeedPI_Kp"
QT_MOC_LITERAL(42, 827, 12), // "setSpeedPIKi"
QT_MOC_LITERAL(43, 840, 13), // "setSpeedPI_Ki"
QT_MOC_LITERAL(44, 854, 12), // "setSpeedPIKd"
QT_MOC_LITERAL(45, 867, 13), // "setSpeedPI_Kd"
QT_MOC_LITERAL(46, 881, 14), // "setSpeedPIBeta"
QT_MOC_LITERAL(47, 896, 15), // "setSpeedPI_Beta"
QT_MOC_LITERAL(48, 912, 14), // "setThrustLimit"
QT_MOC_LITERAL(49, 927, 17), // "setThrustLimitMin"
QT_MOC_LITERAL(50, 945, 18), // "setThrustLimit_Min"
QT_MOC_LITERAL(51, 964, 25), // "setThrustLimitSlowForward"
QT_MOC_LITERAL(52, 990, 26), // "setThrustLimit_SlowForward"
QT_MOC_LITERAL(53, 1017, 17), // "setThrustLimitMax"
QT_MOC_LITERAL(54, 1035, 18), // "setThrustLimit_Max"
QT_MOC_LITERAL(55, 1054, 15), // "setUpdatePeriod"
QT_MOC_LITERAL(56, 1070, 17), // "emitNotifications"
QT_MOC_LITERAL(57, 1088, 19), // "getHorizontalVelMax"
QT_MOC_LITERAL(58, 1108, 19), // "getHorizontalVelMin"
QT_MOC_LITERAL(59, 1128, 20), // "getCourseFeedForward"
QT_MOC_LITERAL(60, 1149, 22), // "getVelocityFeedForward"
QT_MOC_LITERAL(61, 1172, 17), // "getHorizontalPosP"
QT_MOC_LITERAL(62, 1190, 7), // "speedPI"
QT_MOC_LITERAL(63, 1198, 10), // "getSpeedPI"
QT_MOC_LITERAL(64, 1209, 13), // "getSpeedPI_Kp"
QT_MOC_LITERAL(65, 1223, 13), // "getSpeedPI_Ki"
QT_MOC_LITERAL(66, 1237, 13), // "getSpeedPI_Kd"
QT_MOC_LITERAL(67, 1251, 15), // "getSpeedPI_Beta"
QT_MOC_LITERAL(68, 1267, 11), // "thrustLimit"
QT_MOC_LITERAL(69, 1279, 14), // "getThrustLimit"
QT_MOC_LITERAL(70, 1294, 18), // "getThrustLimit_Min"
QT_MOC_LITERAL(71, 1313, 26), // "getThrustLimit_SlowForward"
QT_MOC_LITERAL(72, 1340, 18), // "getThrustLimit_Max"
QT_MOC_LITERAL(73, 1359, 15), // "getUpdatePeriod"
QT_MOC_LITERAL(74, 1375, 16), // "horizontalVelMax"
QT_MOC_LITERAL(75, 1392, 16), // "horizontalVelMin"
QT_MOC_LITERAL(76, 1409, 17), // "courseFeedForward"
QT_MOC_LITERAL(77, 1427, 19), // "velocityFeedForward"
QT_MOC_LITERAL(78, 1447, 14), // "horizontalPosP"
QT_MOC_LITERAL(79, 1462, 9), // "speedPIKp"
QT_MOC_LITERAL(80, 1472, 9), // "speedPIKi"
QT_MOC_LITERAL(81, 1482, 9), // "speedPIKd"
QT_MOC_LITERAL(82, 1492, 11), // "speedPIBeta"
QT_MOC_LITERAL(83, 1504, 14), // "thrustLimitMin"
QT_MOC_LITERAL(84, 1519, 22), // "thrustLimitSlowForward"
QT_MOC_LITERAL(85, 1542, 14), // "thrustLimitMax"
QT_MOC_LITERAL(86, 1557, 12), // "updatePeriod"
QT_MOC_LITERAL(87, 1570, 16), // "HorizontalVelMax"
QT_MOC_LITERAL(88, 1587, 16), // "HorizontalVelMin"
QT_MOC_LITERAL(89, 1604, 17), // "CourseFeedForward"
QT_MOC_LITERAL(90, 1622, 19), // "VelocityFeedForward"
QT_MOC_LITERAL(91, 1642, 14), // "HorizontalPosP"
QT_MOC_LITERAL(92, 1657, 10), // "SpeedPI_Kp"
QT_MOC_LITERAL(93, 1668, 10), // "SpeedPI_Ki"
QT_MOC_LITERAL(94, 1679, 10), // "SpeedPI_Kd"
QT_MOC_LITERAL(95, 1690, 12), // "SpeedPI_Beta"
QT_MOC_LITERAL(96, 1703, 15), // "ThrustLimit_Min"
QT_MOC_LITERAL(97, 1719, 23), // "ThrustLimit_SlowForward"
QT_MOC_LITERAL(98, 1743, 15), // "ThrustLimit_Max"
QT_MOC_LITERAL(99, 1759, 12) // "UpdatePeriod"

    },
    "GroundPathFollowerSettings\0"
    "horizontalVelMaxChanged\0\0value\0"
    "HorizontalVelMaxChanged\0horizontalVelMinChanged\0"
    "HorizontalVelMinChanged\0"
    "courseFeedForwardChanged\0"
    "CourseFeedForwardChanged\0"
    "velocityFeedForwardChanged\0"
    "VelocityFeedForwardChanged\0"
    "horizontalPosPChanged\0HorizontalPosPChanged\0"
    "speedPIChanged\0index\0SpeedPIChanged\0"
    "speedPIKpChanged\0SpeedPI_KpChanged\0"
    "speedPIKiChanged\0SpeedPI_KiChanged\0"
    "speedPIKdChanged\0SpeedPI_KdChanged\0"
    "speedPIBetaChanged\0SpeedPI_BetaChanged\0"
    "thrustLimitChanged\0ThrustLimitChanged\0"
    "thrustLimitMinChanged\0ThrustLimit_MinChanged\0"
    "thrustLimitSlowForwardChanged\0"
    "ThrustLimit_SlowForwardChanged\0"
    "thrustLimitMaxChanged\0ThrustLimit_MaxChanged\0"
    "updatePeriodChanged\0UpdatePeriodChanged\0"
    "setHorizontalVelMax\0setHorizontalVelMin\0"
    "setCourseFeedForward\0setVelocityFeedForward\0"
    "setHorizontalPosP\0setSpeedPI\0setSpeedPIKp\0"
    "setSpeedPI_Kp\0setSpeedPIKi\0setSpeedPI_Ki\0"
    "setSpeedPIKd\0setSpeedPI_Kd\0setSpeedPIBeta\0"
    "setSpeedPI_Beta\0setThrustLimit\0"
    "setThrustLimitMin\0setThrustLimit_Min\0"
    "setThrustLimitSlowForward\0"
    "setThrustLimit_SlowForward\0setThrustLimitMax\0"
    "setThrustLimit_Max\0setUpdatePeriod\0"
    "emitNotifications\0getHorizontalVelMax\0"
    "getHorizontalVelMin\0getCourseFeedForward\0"
    "getVelocityFeedForward\0getHorizontalPosP\0"
    "speedPI\0getSpeedPI\0getSpeedPI_Kp\0"
    "getSpeedPI_Ki\0getSpeedPI_Kd\0getSpeedPI_Beta\0"
    "thrustLimit\0getThrustLimit\0"
    "getThrustLimit_Min\0getThrustLimit_SlowForward\0"
    "getThrustLimit_Max\0getUpdatePeriod\0"
    "horizontalVelMax\0horizontalVelMin\0"
    "courseFeedForward\0velocityFeedForward\0"
    "horizontalPosP\0speedPIKp\0speedPIKi\0"
    "speedPIKd\0speedPIBeta\0thrustLimitMin\0"
    "thrustLimitSlowForward\0thrustLimitMax\0"
    "updatePeriod\0HorizontalVelMax\0"
    "HorizontalVelMin\0CourseFeedForward\0"
    "VelocityFeedForward\0HorizontalPosP\0"
    "SpeedPI_Kp\0SpeedPI_Ki\0SpeedPI_Kd\0"
    "SpeedPI_Beta\0ThrustLimit_Min\0"
    "ThrustLimit_SlowForward\0ThrustLimit_Max\0"
    "UpdatePeriod"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroundPathFollowerSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      70,   14, // methods
      26,  558, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      30,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  364,    2, 0x06 /* Public */,
       4,    1,  367,    2, 0x06 /* Public */,
       5,    1,  370,    2, 0x06 /* Public */,
       6,    1,  373,    2, 0x06 /* Public */,
       7,    1,  376,    2, 0x06 /* Public */,
       8,    1,  379,    2, 0x06 /* Public */,
       9,    1,  382,    2, 0x06 /* Public */,
      10,    1,  385,    2, 0x06 /* Public */,
      11,    1,  388,    2, 0x06 /* Public */,
      12,    1,  391,    2, 0x06 /* Public */,
      13,    2,  394,    2, 0x06 /* Public */,
      15,    2,  399,    2, 0x06 /* Public */,
      16,    1,  404,    2, 0x06 /* Public */,
      17,    1,  407,    2, 0x06 /* Public */,
      18,    1,  410,    2, 0x06 /* Public */,
      19,    1,  413,    2, 0x06 /* Public */,
      20,    1,  416,    2, 0x06 /* Public */,
      21,    1,  419,    2, 0x06 /* Public */,
      22,    1,  422,    2, 0x06 /* Public */,
      23,    1,  425,    2, 0x06 /* Public */,
      24,    2,  428,    2, 0x06 /* Public */,
      25,    2,  433,    2, 0x06 /* Public */,
      26,    1,  438,    2, 0x06 /* Public */,
      27,    1,  441,    2, 0x06 /* Public */,
      28,    1,  444,    2, 0x06 /* Public */,
      29,    1,  447,    2, 0x06 /* Public */,
      30,    1,  450,    2, 0x06 /* Public */,
      31,    1,  453,    2, 0x06 /* Public */,
      32,    1,  456,    2, 0x06 /* Public */,
      33,    1,  459,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    1,  462,    2, 0x0a /* Public */,
      35,    1,  465,    2, 0x0a /* Public */,
      36,    1,  468,    2, 0x0a /* Public */,
      37,    1,  471,    2, 0x0a /* Public */,
      38,    1,  474,    2, 0x0a /* Public */,
      39,    2,  477,    2, 0x0a /* Public */,
      40,    1,  482,    2, 0x0a /* Public */,
      41,    1,  485,    2, 0x0a /* Public */,
      42,    1,  488,    2, 0x0a /* Public */,
      43,    1,  491,    2, 0x0a /* Public */,
      44,    1,  494,    2, 0x0a /* Public */,
      45,    1,  497,    2, 0x0a /* Public */,
      46,    1,  500,    2, 0x0a /* Public */,
      47,    1,  503,    2, 0x0a /* Public */,
      48,    2,  506,    2, 0x0a /* Public */,
      49,    1,  511,    2, 0x0a /* Public */,
      50,    1,  514,    2, 0x0a /* Public */,
      51,    1,  517,    2, 0x0a /* Public */,
      52,    1,  520,    2, 0x0a /* Public */,
      53,    1,  523,    2, 0x0a /* Public */,
      54,    1,  526,    2, 0x0a /* Public */,
      55,    1,  529,    2, 0x0a /* Public */,
      56,    0,  532,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      57,    0,  533,    2, 0x02 /* Public */,
      58,    0,  534,    2, 0x02 /* Public */,
      59,    0,  535,    2, 0x02 /* Public */,
      60,    0,  536,    2, 0x02 /* Public */,
      61,    0,  537,    2, 0x02 /* Public */,
      62,    1,  538,    2, 0x02 /* Public */,
      63,    1,  541,    2, 0x02 /* Public */,
      64,    0,  544,    2, 0x02 /* Public */,
      65,    0,  545,    2, 0x02 /* Public */,
      66,    0,  546,    2, 0x02 /* Public */,
      67,    0,  547,    2, 0x02 /* Public */,
      68,    1,  548,    2, 0x02 /* Public */,
      69,    1,  551,    2, 0x02 /* Public */,
      70,    0,  554,    2, 0x02 /* Public */,
      71,    0,  555,    2, 0x02 /* Public */,
      72,    0,  556,    2, 0x02 /* Public */,
      73,    0,  557,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

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
    QMetaType::Void, QMetaType::Int,    3,
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
    QMetaType::Int,

 // properties: name, type, flags
      74, QMetaType::Float, 0x00495103,
      75, QMetaType::Float, 0x00495103,
      76, QMetaType::Float, 0x00495103,
      77, QMetaType::Float, 0x00495103,
      78, QMetaType::Float, 0x00495103,
      79, QMetaType::Float, 0x00495103,
      80, QMetaType::Float, 0x00495103,
      81, QMetaType::Float, 0x00495103,
      82, QMetaType::Float, 0x00495103,
      83, QMetaType::Float, 0x00495103,
      84, QMetaType::Float, 0x00495103,
      85, QMetaType::Float, 0x00495103,
      86, QMetaType::Int, 0x00495103,
      87, QMetaType::Float, 0x00495103,
      88, QMetaType::Float, 0x00495103,
      89, QMetaType::Float, 0x00495103,
      90, QMetaType::Float, 0x00495103,
      91, QMetaType::Float, 0x00495103,
      92, QMetaType::Float, 0x00495103,
      93, QMetaType::Float, 0x00495103,
      94, QMetaType::Float, 0x00495103,
      95, QMetaType::Float, 0x00495103,
      96, QMetaType::Float, 0x00495103,
      97, QMetaType::Float, 0x00495103,
      98, QMetaType::Float, 0x00495103,
      99, QMetaType::Int, 0x00495103,

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

       0        // eod
};

void GroundPathFollowerSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GroundPathFollowerSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->horizontalVelMaxChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->HorizontalVelMaxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->horizontalVelMinChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->HorizontalVelMinChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->courseFeedForwardChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->CourseFeedForwardChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->velocityFeedForwardChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->VelocityFeedForwardChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->horizontalPosPChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->HorizontalPosPChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->speedPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 11: _t->SpeedPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 12: _t->speedPIKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->SpeedPI_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->speedPIKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->SpeedPI_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->speedPIKdChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->SpeedPI_KdChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->speedPIBetaChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->SpeedPI_BetaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->thrustLimitChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 21: _t->ThrustLimitChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 22: _t->thrustLimitMinChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->ThrustLimit_MinChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->thrustLimitSlowForwardChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->ThrustLimit_SlowForwardChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->thrustLimitMaxChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->ThrustLimit_MaxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->updatePeriodChanged((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 29: _t->UpdatePeriodChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 30: _t->setHorizontalVelMax((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 31: _t->setHorizontalVelMin((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 32: _t->setCourseFeedForward((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 33: _t->setVelocityFeedForward((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 34: _t->setHorizontalPosP((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->setSpeedPI((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 36: _t->setSpeedPIKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 37: _t->setSpeedPI_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->setSpeedPIKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 39: _t->setSpeedPI_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->setSpeedPIKd((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 41: _t->setSpeedPI_Kd((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->setSpeedPIBeta((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 43: _t->setSpeedPI_Beta((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->setThrustLimit((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 45: _t->setThrustLimitMin((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 46: _t->setThrustLimit_Min((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 47: _t->setThrustLimitSlowForward((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 48: _t->setThrustLimit_SlowForward((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 49: _t->setThrustLimitMax((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 50: _t->setThrustLimit_Max((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 51: _t->setUpdatePeriod((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 52: _t->emitNotifications(); break;
        case 53: { float _r = _t->getHorizontalVelMax();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 54: { float _r = _t->getHorizontalVelMin();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 55: { float _r = _t->getCourseFeedForward();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 56: { float _r = _t->getVelocityFeedForward();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 57: { float _r = _t->getHorizontalPosP();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 58: { float _r = _t->speedPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 59: { float _r = _t->getSpeedPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 60: { float _r = _t->getSpeedPI_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 61: { float _r = _t->getSpeedPI_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 62: { float _r = _t->getSpeedPI_Kd();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 63: { float _r = _t->getSpeedPI_Beta();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 64: { float _r = _t->thrustLimit((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 65: { float _r = _t->getThrustLimit((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 66: { float _r = _t->getThrustLimit_Min();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 67: { float _r = _t->getThrustLimit_SlowForward();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 68: { float _r = _t->getThrustLimit_Max();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 69: { qint32 _r = _t->getUpdatePeriod();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GroundPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::horizontalVelMaxChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::HorizontalVelMaxChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::horizontalVelMinChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::HorizontalVelMinChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::courseFeedForwardChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::CourseFeedForwardChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::velocityFeedForwardChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::VelocityFeedForwardChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::horizontalPosPChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::HorizontalPosPChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::speedPIChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::SpeedPIChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::speedPIKpChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::SpeedPI_KpChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::speedPIKiChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::SpeedPI_KiChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::speedPIKdChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::SpeedPI_KdChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::speedPIBetaChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::SpeedPI_BetaChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::thrustLimitChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::ThrustLimitChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::thrustLimitMinChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::ThrustLimit_MinChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::thrustLimitSlowForwardChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::ThrustLimit_SlowForwardChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::thrustLimitMaxChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::ThrustLimit_MaxChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(const qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::updatePeriodChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (GroundPathFollowerSettings::*)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundPathFollowerSettings::UpdatePeriodChanged)) {
                *result = 29;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GroundPathFollowerSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->horizontalVelMax(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->horizontalVelMin(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->courseFeedForward(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->velocityFeedForward(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->horizontalPosP(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->speedPIKp(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->speedPIKi(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->speedPIKd(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->speedPIBeta(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->thrustLimitMin(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->thrustLimitSlowForward(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->thrustLimitMax(); break;
        case 12: *reinterpret_cast< qint32*>(_v) = _t->updatePeriod(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getHorizontalVelMax(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getHorizontalVelMin(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getCourseFeedForward(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getVelocityFeedForward(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getHorizontalPosP(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getSpeedPI_Kp(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getSpeedPI_Ki(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getSpeedPI_Kd(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getSpeedPI_Beta(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getThrustLimit_Min(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getThrustLimit_SlowForward(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getThrustLimit_Max(); break;
        case 25: *reinterpret_cast< qint32*>(_v) = _t->getUpdatePeriod(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GroundPathFollowerSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHorizontalVelMax(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setHorizontalVelMin(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setCourseFeedForward(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setVelocityFeedForward(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setHorizontalPosP(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setSpeedPIKp(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setSpeedPIKi(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setSpeedPIKd(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setSpeedPIBeta(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setThrustLimitMin(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setThrustLimitSlowForward(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setThrustLimitMax(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setUpdatePeriod(*reinterpret_cast< qint32*>(_v)); break;
        case 13: _t->setHorizontalVelMax(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setHorizontalVelMin(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setCourseFeedForward(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setVelocityFeedForward(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setHorizontalPosP(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setSpeedPI_Kp(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setSpeedPI_Ki(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setSpeedPI_Kd(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setSpeedPI_Beta(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setThrustLimit_Min(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setThrustLimit_SlowForward(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setThrustLimit_Max(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setUpdatePeriod(*reinterpret_cast< qint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GroundPathFollowerSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_GroundPathFollowerSettings.data,
    qt_meta_data_GroundPathFollowerSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GroundPathFollowerSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroundPathFollowerSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroundPathFollowerSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int GroundPathFollowerSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 70)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 70;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 26;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GroundPathFollowerSettings::horizontalVelMaxChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GroundPathFollowerSettings::HorizontalVelMaxChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GroundPathFollowerSettings::horizontalVelMinChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GroundPathFollowerSettings::HorizontalVelMinChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GroundPathFollowerSettings::courseFeedForwardChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GroundPathFollowerSettings::CourseFeedForwardChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GroundPathFollowerSettings::velocityFeedForwardChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GroundPathFollowerSettings::VelocityFeedForwardChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GroundPathFollowerSettings::horizontalPosPChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GroundPathFollowerSettings::HorizontalPosPChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GroundPathFollowerSettings::speedPIChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GroundPathFollowerSettings::SpeedPIChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GroundPathFollowerSettings::speedPIKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GroundPathFollowerSettings::SpeedPI_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GroundPathFollowerSettings::speedPIKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GroundPathFollowerSettings::SpeedPI_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GroundPathFollowerSettings::speedPIKdChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GroundPathFollowerSettings::SpeedPI_KdChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void GroundPathFollowerSettings::speedPIBetaChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void GroundPathFollowerSettings::SpeedPI_BetaChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void GroundPathFollowerSettings::thrustLimitChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void GroundPathFollowerSettings::ThrustLimitChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void GroundPathFollowerSettings::thrustLimitMinChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void GroundPathFollowerSettings::ThrustLimit_MinChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void GroundPathFollowerSettings::thrustLimitSlowForwardChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void GroundPathFollowerSettings::ThrustLimit_SlowForwardChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void GroundPathFollowerSettings::thrustLimitMaxChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void GroundPathFollowerSettings::ThrustLimit_MaxChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void GroundPathFollowerSettings::updatePeriodChanged(const qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void GroundPathFollowerSettings::UpdatePeriodChanged(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
