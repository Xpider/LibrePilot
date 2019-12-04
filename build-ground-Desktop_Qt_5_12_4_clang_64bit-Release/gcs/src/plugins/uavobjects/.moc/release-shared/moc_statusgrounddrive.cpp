/****************************************************************************
** Meta object code from reading C++ file 'statusgrounddrive.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../statusgrounddrive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusgrounddrive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StatusGroundDriveConstants_t {
    QByteArrayData data[3];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusGroundDriveConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusGroundDriveConstants_t qt_meta_stringdata_StatusGroundDriveConstants = {
    {
QT_MOC_LITERAL(0, 0, 26), // "StatusGroundDriveConstants"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 17) // "ControlStateCount"

    },
    "StatusGroundDriveConstants\0Enum\0"
    "ControlStateCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusGroundDriveConstants[] = {

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
       2, uint(StatusGroundDriveConstants::ControlStateCount),

       0        // eod
};

void StatusGroundDriveConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusGroundDriveConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StatusGroundDriveConstants.data,
    qt_meta_data_StatusGroundDriveConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusGroundDriveConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusGroundDriveConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusGroundDriveConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusGroundDriveConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StatusGroundDrive_ControlState_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusGroundDrive_ControlState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusGroundDrive_ControlState_t qt_meta_stringdata_StatusGroundDrive_ControlState = {
    {
QT_MOC_LITERAL(0, 0, 30), // "StatusGroundDrive_ControlState"
QT_MOC_LITERAL(1, 31, 4), // "Enum"
QT_MOC_LITERAL(2, 36, 8), // "Inactive"
QT_MOC_LITERAL(3, 45, 7), // "OnTrack"
QT_MOC_LITERAL(4, 53, 15), // "TurnAroundRight"
QT_MOC_LITERAL(5, 69, 14), // "TurnAroundLeft"
QT_MOC_LITERAL(6, 84, 5) // "Brake"

    },
    "StatusGroundDrive_ControlState\0Enum\0"
    "Inactive\0OnTrack\0TurnAroundRight\0"
    "TurnAroundLeft\0Brake"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusGroundDrive_ControlState[] = {

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
       2, uint(StatusGroundDrive_ControlState::Inactive),
       3, uint(StatusGroundDrive_ControlState::OnTrack),
       4, uint(StatusGroundDrive_ControlState::TurnAroundRight),
       5, uint(StatusGroundDrive_ControlState::TurnAroundLeft),
       6, uint(StatusGroundDrive_ControlState::Brake),

       0        // eod
};

void StatusGroundDrive_ControlState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusGroundDrive_ControlState::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StatusGroundDrive_ControlState.data,
    qt_meta_data_StatusGroundDrive_ControlState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusGroundDrive_ControlState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusGroundDrive_ControlState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusGroundDrive_ControlState.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusGroundDrive_ControlState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StatusGroundDrive_t {
    QByteArrayData data[95];
    char stringdata0[1709];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusGroundDrive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusGroundDrive_t qt_meta_stringdata_StatusGroundDrive = {
    {
QT_MOC_LITERAL(0, 0, 17), // "StatusGroundDrive"
QT_MOC_LITERAL(1, 18, 16), // "neCommandChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "index"
QT_MOC_LITERAL(4, 42, 5), // "value"
QT_MOC_LITERAL(5, 48, 16), // "NECommandChanged"
QT_MOC_LITERAL(6, 65, 21), // "neCommandNorthChanged"
QT_MOC_LITERAL(7, 87, 22), // "NECommand_NorthChanged"
QT_MOC_LITERAL(8, 110, 20), // "neCommandEastChanged"
QT_MOC_LITERAL(9, 131, 21), // "NECommand_EastChanged"
QT_MOC_LITERAL(10, 153, 12), // "stateChanged"
QT_MOC_LITERAL(11, 166, 12), // "StateChanged"
QT_MOC_LITERAL(12, 179, 15), // "stateYawChanged"
QT_MOC_LITERAL(13, 195, 16), // "State_YawChanged"
QT_MOC_LITERAL(14, 212, 20), // "stateVelocityChanged"
QT_MOC_LITERAL(15, 233, 21), // "State_VelocityChanged"
QT_MOC_LITERAL(16, 255, 18), // "stateThrustChanged"
QT_MOC_LITERAL(17, 274, 19), // "State_ThrustChanged"
QT_MOC_LITERAL(18, 294, 18), // "bodyCommandChanged"
QT_MOC_LITERAL(19, 313, 18), // "BodyCommandChanged"
QT_MOC_LITERAL(20, 332, 25), // "bodyCommandForwardChanged"
QT_MOC_LITERAL(21, 358, 26), // "BodyCommand_ForwardChanged"
QT_MOC_LITERAL(22, 385, 23), // "bodyCommandRightChanged"
QT_MOC_LITERAL(23, 409, 24), // "BodyCommand_RightChanged"
QT_MOC_LITERAL(24, 434, 21), // "controlCommandChanged"
QT_MOC_LITERAL(25, 456, 21), // "ControlCommandChanged"
QT_MOC_LITERAL(26, 478, 26), // "controlCommandSpeedChanged"
QT_MOC_LITERAL(27, 505, 27), // "ControlCommand_SpeedChanged"
QT_MOC_LITERAL(28, 533, 27), // "controlCommandCourseChanged"
QT_MOC_LITERAL(29, 561, 28), // "ControlCommand_CourseChanged"
QT_MOC_LITERAL(30, 590, 19), // "controlStateChanged"
QT_MOC_LITERAL(31, 610, 36), // "StatusGroundDrive_ControlStat..."
QT_MOC_LITERAL(32, 647, 19), // "ControlStateChanged"
QT_MOC_LITERAL(33, 667, 12), // "setNECommand"
QT_MOC_LITERAL(34, 680, 17), // "setNECommandNorth"
QT_MOC_LITERAL(35, 698, 18), // "setNECommand_North"
QT_MOC_LITERAL(36, 717, 16), // "setNECommandEast"
QT_MOC_LITERAL(37, 734, 17), // "setNECommand_East"
QT_MOC_LITERAL(38, 752, 8), // "setState"
QT_MOC_LITERAL(39, 761, 11), // "setStateYaw"
QT_MOC_LITERAL(40, 773, 12), // "setState_Yaw"
QT_MOC_LITERAL(41, 786, 16), // "setStateVelocity"
QT_MOC_LITERAL(42, 803, 17), // "setState_Velocity"
QT_MOC_LITERAL(43, 821, 14), // "setStateThrust"
QT_MOC_LITERAL(44, 836, 15), // "setState_Thrust"
QT_MOC_LITERAL(45, 852, 14), // "setBodyCommand"
QT_MOC_LITERAL(46, 867, 21), // "setBodyCommandForward"
QT_MOC_LITERAL(47, 889, 22), // "setBodyCommand_Forward"
QT_MOC_LITERAL(48, 912, 19), // "setBodyCommandRight"
QT_MOC_LITERAL(49, 932, 20), // "setBodyCommand_Right"
QT_MOC_LITERAL(50, 953, 17), // "setControlCommand"
QT_MOC_LITERAL(51, 971, 22), // "setControlCommandSpeed"
QT_MOC_LITERAL(52, 994, 23), // "setControlCommand_Speed"
QT_MOC_LITERAL(53, 1018, 23), // "setControlCommandCourse"
QT_MOC_LITERAL(54, 1042, 24), // "setControlCommand_Course"
QT_MOC_LITERAL(55, 1067, 15), // "setControlState"
QT_MOC_LITERAL(56, 1083, 17), // "emitNotifications"
QT_MOC_LITERAL(57, 1101, 9), // "neCommand"
QT_MOC_LITERAL(58, 1111, 12), // "getNECommand"
QT_MOC_LITERAL(59, 1124, 18), // "getNECommand_North"
QT_MOC_LITERAL(60, 1143, 17), // "getNECommand_East"
QT_MOC_LITERAL(61, 1161, 5), // "state"
QT_MOC_LITERAL(62, 1167, 8), // "getState"
QT_MOC_LITERAL(63, 1176, 12), // "getState_Yaw"
QT_MOC_LITERAL(64, 1189, 17), // "getState_Velocity"
QT_MOC_LITERAL(65, 1207, 15), // "getState_Thrust"
QT_MOC_LITERAL(66, 1223, 11), // "bodyCommand"
QT_MOC_LITERAL(67, 1235, 14), // "getBodyCommand"
QT_MOC_LITERAL(68, 1250, 22), // "getBodyCommand_Forward"
QT_MOC_LITERAL(69, 1273, 20), // "getBodyCommand_Right"
QT_MOC_LITERAL(70, 1294, 14), // "controlCommand"
QT_MOC_LITERAL(71, 1309, 17), // "getControlCommand"
QT_MOC_LITERAL(72, 1327, 23), // "getControlCommand_Speed"
QT_MOC_LITERAL(73, 1351, 24), // "getControlCommand_Course"
QT_MOC_LITERAL(74, 1376, 15), // "getControlState"
QT_MOC_LITERAL(75, 1392, 14), // "neCommandNorth"
QT_MOC_LITERAL(76, 1407, 13), // "neCommandEast"
QT_MOC_LITERAL(77, 1421, 8), // "stateYaw"
QT_MOC_LITERAL(78, 1430, 13), // "stateVelocity"
QT_MOC_LITERAL(79, 1444, 11), // "stateThrust"
QT_MOC_LITERAL(80, 1456, 18), // "bodyCommandForward"
QT_MOC_LITERAL(81, 1475, 16), // "bodyCommandRight"
QT_MOC_LITERAL(82, 1492, 19), // "controlCommandSpeed"
QT_MOC_LITERAL(83, 1512, 20), // "controlCommandCourse"
QT_MOC_LITERAL(84, 1533, 12), // "controlState"
QT_MOC_LITERAL(85, 1546, 15), // "NECommand_North"
QT_MOC_LITERAL(86, 1562, 14), // "NECommand_East"
QT_MOC_LITERAL(87, 1577, 9), // "State_Yaw"
QT_MOC_LITERAL(88, 1587, 14), // "State_Velocity"
QT_MOC_LITERAL(89, 1602, 12), // "State_Thrust"
QT_MOC_LITERAL(90, 1615, 19), // "BodyCommand_Forward"
QT_MOC_LITERAL(91, 1635, 17), // "BodyCommand_Right"
QT_MOC_LITERAL(92, 1653, 20), // "ControlCommand_Speed"
QT_MOC_LITERAL(93, 1674, 21), // "ControlCommand_Course"
QT_MOC_LITERAL(94, 1696, 12) // "ControlState"

    },
    "StatusGroundDrive\0neCommandChanged\0\0"
    "index\0value\0NECommandChanged\0"
    "neCommandNorthChanged\0NECommand_NorthChanged\0"
    "neCommandEastChanged\0NECommand_EastChanged\0"
    "stateChanged\0StateChanged\0stateYawChanged\0"
    "State_YawChanged\0stateVelocityChanged\0"
    "State_VelocityChanged\0stateThrustChanged\0"
    "State_ThrustChanged\0bodyCommandChanged\0"
    "BodyCommandChanged\0bodyCommandForwardChanged\0"
    "BodyCommand_ForwardChanged\0"
    "bodyCommandRightChanged\0"
    "BodyCommand_RightChanged\0controlCommandChanged\0"
    "ControlCommandChanged\0controlCommandSpeedChanged\0"
    "ControlCommand_SpeedChanged\0"
    "controlCommandCourseChanged\0"
    "ControlCommand_CourseChanged\0"
    "controlStateChanged\0"
    "StatusGroundDrive_ControlState::Enum\0"
    "ControlStateChanged\0setNECommand\0"
    "setNECommandNorth\0setNECommand_North\0"
    "setNECommandEast\0setNECommand_East\0"
    "setState\0setStateYaw\0setState_Yaw\0"
    "setStateVelocity\0setState_Velocity\0"
    "setStateThrust\0setState_Thrust\0"
    "setBodyCommand\0setBodyCommandForward\0"
    "setBodyCommand_Forward\0setBodyCommandRight\0"
    "setBodyCommand_Right\0setControlCommand\0"
    "setControlCommandSpeed\0setControlCommand_Speed\0"
    "setControlCommandCourse\0"
    "setControlCommand_Course\0setControlState\0"
    "emitNotifications\0neCommand\0getNECommand\0"
    "getNECommand_North\0getNECommand_East\0"
    "state\0getState\0getState_Yaw\0"
    "getState_Velocity\0getState_Thrust\0"
    "bodyCommand\0getBodyCommand\0"
    "getBodyCommand_Forward\0getBodyCommand_Right\0"
    "controlCommand\0getControlCommand\0"
    "getControlCommand_Speed\0"
    "getControlCommand_Course\0getControlState\0"
    "neCommandNorth\0neCommandEast\0stateYaw\0"
    "stateVelocity\0stateThrust\0bodyCommandForward\0"
    "bodyCommandRight\0controlCommandSpeed\0"
    "controlCommandCourse\0controlState\0"
    "NECommand_North\0NECommand_East\0State_Yaw\0"
    "State_Velocity\0State_Thrust\0"
    "BodyCommand_Forward\0BodyCommand_Right\0"
    "ControlCommand_Speed\0ControlCommand_Course\0"
    "ControlState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusGroundDrive[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      71,   14, // methods
      20,  584, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      28,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  369,    2, 0x06 /* Public */,
       5,    2,  374,    2, 0x06 /* Public */,
       6,    1,  379,    2, 0x06 /* Public */,
       7,    1,  382,    2, 0x06 /* Public */,
       8,    1,  385,    2, 0x06 /* Public */,
       9,    1,  388,    2, 0x06 /* Public */,
      10,    2,  391,    2, 0x06 /* Public */,
      11,    2,  396,    2, 0x06 /* Public */,
      12,    1,  401,    2, 0x06 /* Public */,
      13,    1,  404,    2, 0x06 /* Public */,
      14,    1,  407,    2, 0x06 /* Public */,
      15,    1,  410,    2, 0x06 /* Public */,
      16,    1,  413,    2, 0x06 /* Public */,
      17,    1,  416,    2, 0x06 /* Public */,
      18,    2,  419,    2, 0x06 /* Public */,
      19,    2,  424,    2, 0x06 /* Public */,
      20,    1,  429,    2, 0x06 /* Public */,
      21,    1,  432,    2, 0x06 /* Public */,
      22,    1,  435,    2, 0x06 /* Public */,
      23,    1,  438,    2, 0x06 /* Public */,
      24,    2,  441,    2, 0x06 /* Public */,
      25,    2,  446,    2, 0x06 /* Public */,
      26,    1,  451,    2, 0x06 /* Public */,
      27,    1,  454,    2, 0x06 /* Public */,
      28,    1,  457,    2, 0x06 /* Public */,
      29,    1,  460,    2, 0x06 /* Public */,
      30,    1,  463,    2, 0x06 /* Public */,
      32,    1,  466,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    2,  469,    2, 0x0a /* Public */,
      34,    1,  474,    2, 0x0a /* Public */,
      35,    1,  477,    2, 0x0a /* Public */,
      36,    1,  480,    2, 0x0a /* Public */,
      37,    1,  483,    2, 0x0a /* Public */,
      38,    2,  486,    2, 0x0a /* Public */,
      39,    1,  491,    2, 0x0a /* Public */,
      40,    1,  494,    2, 0x0a /* Public */,
      41,    1,  497,    2, 0x0a /* Public */,
      42,    1,  500,    2, 0x0a /* Public */,
      43,    1,  503,    2, 0x0a /* Public */,
      44,    1,  506,    2, 0x0a /* Public */,
      45,    2,  509,    2, 0x0a /* Public */,
      46,    1,  514,    2, 0x0a /* Public */,
      47,    1,  517,    2, 0x0a /* Public */,
      48,    1,  520,    2, 0x0a /* Public */,
      49,    1,  523,    2, 0x0a /* Public */,
      50,    2,  526,    2, 0x0a /* Public */,
      51,    1,  531,    2, 0x0a /* Public */,
      52,    1,  534,    2, 0x0a /* Public */,
      53,    1,  537,    2, 0x0a /* Public */,
      54,    1,  540,    2, 0x0a /* Public */,
      55,    1,  543,    2, 0x0a /* Public */,
      55,    1,  546,    2, 0x0a /* Public */,
      56,    0,  549,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      57,    1,  550,    2, 0x02 /* Public */,
      58,    1,  553,    2, 0x02 /* Public */,
      59,    0,  556,    2, 0x02 /* Public */,
      60,    0,  557,    2, 0x02 /* Public */,
      61,    1,  558,    2, 0x02 /* Public */,
      62,    1,  561,    2, 0x02 /* Public */,
      63,    0,  564,    2, 0x02 /* Public */,
      64,    0,  565,    2, 0x02 /* Public */,
      65,    0,  566,    2, 0x02 /* Public */,
      66,    1,  567,    2, 0x02 /* Public */,
      67,    1,  570,    2, 0x02 /* Public */,
      68,    0,  573,    2, 0x02 /* Public */,
      69,    0,  574,    2, 0x02 /* Public */,
      70,    1,  575,    2, 0x02 /* Public */,
      71,    1,  578,    2, 0x02 /* Public */,
      72,    0,  581,    2, 0x02 /* Public */,
      73,    0,  582,    2, 0x02 /* Public */,
      74,    0,  583,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
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
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
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
    QMetaType::Void, 0x80000000 | 31,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
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
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, 0x80000000 | 31,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,

 // properties: name, type, flags
      75, QMetaType::Float, 0x00495003,
      76, QMetaType::Float, 0x00495003,
      77, QMetaType::Float, 0x00495103,
      78, QMetaType::Float, 0x00495103,
      79, QMetaType::Float, 0x00495103,
      80, QMetaType::Float, 0x00495103,
      81, QMetaType::Float, 0x00495103,
      82, QMetaType::Float, 0x00495103,
      83, QMetaType::Float, 0x00495103,
      84, 0x80000000 | 31, 0x0049510b,
      85, QMetaType::Float, 0x00495103,
      86, QMetaType::Float, 0x00495103,
      87, QMetaType::Float, 0x00495103,
      88, QMetaType::Float, 0x00495103,
      89, QMetaType::Float, 0x00495103,
      90, QMetaType::Float, 0x00495103,
      91, QMetaType::Float, 0x00495103,
      92, QMetaType::Float, 0x00495103,
      93, QMetaType::Float, 0x00495103,
      94, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       8,
      10,
      12,
      16,
      18,
      22,
      24,
      26,
       3,
       5,
       9,
      11,
      13,
      17,
      19,
      23,
      25,
      27,

       0        // eod
};

void StatusGroundDrive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatusGroundDrive *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->neCommandChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->NECommandChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->neCommandNorthChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->NECommand_NorthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->neCommandEastChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->NECommand_EastChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->stateChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 7: _t->StateChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 8: _t->stateYawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->State_YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->stateVelocityChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->State_VelocityChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->stateThrustChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->State_ThrustChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->bodyCommandChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 15: _t->BodyCommandChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 16: _t->bodyCommandForwardChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->BodyCommand_ForwardChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->bodyCommandRightChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->BodyCommand_RightChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->controlCommandChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 21: _t->ControlCommandChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 22: _t->controlCommandSpeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->ControlCommand_SpeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->controlCommandCourseChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->ControlCommand_CourseChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->controlStateChanged((*reinterpret_cast< const StatusGroundDrive_ControlState::Enum(*)>(_a[1]))); break;
        case 27: _t->ControlStateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->setNECommand((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 29: _t->setNECommandNorth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 30: _t->setNECommand_North((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 31: _t->setNECommandEast((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 32: _t->setNECommand_East((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 33: _t->setState((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 34: _t->setStateYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->setState_Yaw((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 36: _t->setStateVelocity((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 37: _t->setState_Velocity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->setStateThrust((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 39: _t->setState_Thrust((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->setBodyCommand((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 41: _t->setBodyCommandForward((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 42: _t->setBodyCommand_Forward((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 43: _t->setBodyCommandRight((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 44: _t->setBodyCommand_Right((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 45: _t->setControlCommand((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 46: _t->setControlCommandSpeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->setControlCommand_Speed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->setControlCommandCourse((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 49: _t->setControlCommand_Course((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 50: _t->setControlState((*reinterpret_cast< const StatusGroundDrive_ControlState::Enum(*)>(_a[1]))); break;
        case 51: _t->setControlState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->emitNotifications(); break;
        case 53: { float _r = _t->neCommand((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 54: { float _r = _t->getNECommand((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 55: { float _r = _t->getNECommand_North();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 56: { float _r = _t->getNECommand_East();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 57: { float _r = _t->state((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 58: { float _r = _t->getState((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 59: { float _r = _t->getState_Yaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 60: { float _r = _t->getState_Velocity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 61: { float _r = _t->getState_Thrust();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 62: { float _r = _t->bodyCommand((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 63: { float _r = _t->getBodyCommand((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 64: { float _r = _t->getBodyCommand_Forward();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 65: { float _r = _t->getBodyCommand_Right();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 66: { float _r = _t->controlCommand((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 67: { float _r = _t->getControlCommand((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 68: { float _r = _t->getControlCommand_Speed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 69: { float _r = _t->getControlCommand_Course();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 70: { quint8 _r = _t->getControlState();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatusGroundDrive::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::neCommandChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::NECommandChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::neCommandNorthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::NECommand_NorthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::neCommandEastChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::NECommand_EastChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::stateChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::StateChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::stateYawChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::State_YawChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::stateVelocityChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::State_VelocityChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::stateThrustChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::State_ThrustChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::bodyCommandChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::BodyCommandChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::bodyCommandForwardChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::BodyCommand_ForwardChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::bodyCommandRightChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::BodyCommand_RightChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::controlCommandChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::ControlCommandChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::controlCommandSpeedChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::ControlCommand_SpeedChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::controlCommandCourseChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::ControlCommand_CourseChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(const StatusGroundDrive_ControlState::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::controlStateChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (StatusGroundDrive::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusGroundDrive::ControlStateChanged)) {
                *result = 27;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StatusGroundDrive *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->neCommandNorth(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->neCommandEast(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->stateYaw(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->stateVelocity(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->stateThrust(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->bodyCommandForward(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->bodyCommandRight(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->controlCommandSpeed(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->controlCommandCourse(); break;
        case 9: *reinterpret_cast< StatusGroundDrive_ControlState::Enum*>(_v) = _t->controlState(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getNECommand_North(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getNECommand_East(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->getState_Yaw(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getState_Velocity(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getState_Thrust(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getBodyCommand_Forward(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getBodyCommand_Right(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getControlCommand_Speed(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getControlCommand_Course(); break;
        case 19: *reinterpret_cast< quint8*>(_v) = _t->getControlState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StatusGroundDrive *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNECommandNorth(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setNECommandEast(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setStateYaw(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setStateVelocity(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setStateThrust(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setBodyCommandForward(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setBodyCommandRight(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setControlCommandSpeed(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setControlCommandCourse(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setControlState(*reinterpret_cast< StatusGroundDrive_ControlState::Enum*>(_v)); break;
        case 10: _t->setNECommand_North(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setNECommand_East(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setState_Yaw(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setState_Velocity(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setState_Thrust(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setBodyCommand_Forward(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setBodyCommand_Right(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setControlCommand_Speed(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setControlCommand_Course(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setControlState(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_StatusGroundDrive[] = {
        &StatusGroundDrive_ControlState::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject StatusGroundDrive::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_StatusGroundDrive.data,
    qt_meta_data_StatusGroundDrive,
    qt_static_metacall,
    qt_meta_extradata_StatusGroundDrive,
    nullptr
} };


const QMetaObject *StatusGroundDrive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusGroundDrive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusGroundDrive.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int StatusGroundDrive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 71)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 71;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 71)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 71;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 20;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StatusGroundDrive::neCommandChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StatusGroundDrive::NECommandChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StatusGroundDrive::neCommandNorthChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StatusGroundDrive::NECommand_NorthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StatusGroundDrive::neCommandEastChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StatusGroundDrive::NECommand_EastChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StatusGroundDrive::stateChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StatusGroundDrive::StateChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void StatusGroundDrive::stateYawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void StatusGroundDrive::State_YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void StatusGroundDrive::stateVelocityChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void StatusGroundDrive::State_VelocityChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void StatusGroundDrive::stateThrustChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void StatusGroundDrive::State_ThrustChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void StatusGroundDrive::bodyCommandChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void StatusGroundDrive::BodyCommandChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void StatusGroundDrive::bodyCommandForwardChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void StatusGroundDrive::BodyCommand_ForwardChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void StatusGroundDrive::bodyCommandRightChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void StatusGroundDrive::BodyCommand_RightChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void StatusGroundDrive::controlCommandChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void StatusGroundDrive::ControlCommandChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void StatusGroundDrive::controlCommandSpeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void StatusGroundDrive::ControlCommand_SpeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void StatusGroundDrive::controlCommandCourseChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void StatusGroundDrive::ControlCommand_CourseChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void StatusGroundDrive::controlStateChanged(const StatusGroundDrive_ControlState::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void StatusGroundDrive::ControlStateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
