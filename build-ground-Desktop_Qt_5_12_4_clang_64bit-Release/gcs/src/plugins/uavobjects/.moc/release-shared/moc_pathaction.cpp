/****************************************************************************
** Meta object code from reading C++ file 'pathaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pathaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PathActionConstants_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathActionConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathActionConstants_t qt_meta_stringdata_PathActionConstants = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PathActionConstants"
QT_MOC_LITERAL(1, 20, 4), // "Enum"
QT_MOC_LITERAL(2, 25, 9), // "ModeCount"
QT_MOC_LITERAL(3, 35, 17), // "EndConditionCount"
QT_MOC_LITERAL(4, 53, 12) // "CommandCount"

    },
    "PathActionConstants\0Enum\0ModeCount\0"
    "EndConditionCount\0CommandCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathActionConstants[] = {

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
       2, uint(PathActionConstants::ModeCount),
       3, uint(PathActionConstants::EndConditionCount),
       4, uint(PathActionConstants::CommandCount),

       0        // eod
};

void PathActionConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathActionConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PathActionConstants.data,
    qt_meta_data_PathActionConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathActionConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathActionConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathActionConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PathActionConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathAction_Mode_t {
    QByteArrayData data[13];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathAction_Mode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathAction_Mode_t qt_meta_stringdata_PathAction_Mode = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PathAction_Mode"
QT_MOC_LITERAL(1, 16, 4), // "Enum"
QT_MOC_LITERAL(2, 21, 12), // "GoToEndpoint"
QT_MOC_LITERAL(3, 34, 12), // "FollowVector"
QT_MOC_LITERAL(4, 47, 11), // "CircleRight"
QT_MOC_LITERAL(5, 59, 10), // "CircleLeft"
QT_MOC_LITERAL(6, 70, 13), // "FixedAttitude"
QT_MOC_LITERAL(7, 84, 12), // "SetAccessory"
QT_MOC_LITERAL(8, 97, 11), // "DisarmAlarm"
QT_MOC_LITERAL(9, 109, 4), // "Land"
QT_MOC_LITERAL(10, 114, 5), // "Brake"
QT_MOC_LITERAL(11, 120, 8), // "Velocity"
QT_MOC_LITERAL(12, 129, 11) // "AutoTakeoff"

    },
    "PathAction_Mode\0Enum\0GoToEndpoint\0"
    "FollowVector\0CircleRight\0CircleLeft\0"
    "FixedAttitude\0SetAccessory\0DisarmAlarm\0"
    "Land\0Brake\0Velocity\0AutoTakeoff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathAction_Mode[] = {

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
       1,    1, 0x0,   11,   19,

 // enum data: key, value
       2, uint(PathAction_Mode::GoToEndpoint),
       3, uint(PathAction_Mode::FollowVector),
       4, uint(PathAction_Mode::CircleRight),
       5, uint(PathAction_Mode::CircleLeft),
       6, uint(PathAction_Mode::FixedAttitude),
       7, uint(PathAction_Mode::SetAccessory),
       8, uint(PathAction_Mode::DisarmAlarm),
       9, uint(PathAction_Mode::Land),
      10, uint(PathAction_Mode::Brake),
      11, uint(PathAction_Mode::Velocity),
      12, uint(PathAction_Mode::AutoTakeoff),

       0        // eod
};

void PathAction_Mode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathAction_Mode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PathAction_Mode.data,
    qt_meta_data_PathAction_Mode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathAction_Mode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathAction_Mode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathAction_Mode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PathAction_Mode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathAction_EndCondition_t {
    QByteArrayData data[12];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathAction_EndCondition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathAction_EndCondition_t qt_meta_stringdata_PathAction_EndCondition = {
    {
QT_MOC_LITERAL(0, 0, 23), // "PathAction_EndCondition"
QT_MOC_LITERAL(1, 24, 4), // "Enum"
QT_MOC_LITERAL(2, 29, 4), // "None"
QT_MOC_LITERAL(3, 34, 7), // "TimeOut"
QT_MOC_LITERAL(4, 42, 16), // "DistanceToTarget"
QT_MOC_LITERAL(5, 59, 12), // "LegRemaining"
QT_MOC_LITERAL(6, 72, 10), // "BelowError"
QT_MOC_LITERAL(7, 83, 13), // "AboveAltitude"
QT_MOC_LITERAL(8, 97, 10), // "AboveSpeed"
QT_MOC_LITERAL(9, 108, 19), // "PointingTowardsNext"
QT_MOC_LITERAL(10, 128, 12), // "PythonScript"
QT_MOC_LITERAL(11, 141, 9) // "Immediate"

    },
    "PathAction_EndCondition\0Enum\0None\0"
    "TimeOut\0DistanceToTarget\0LegRemaining\0"
    "BelowError\0AboveAltitude\0AboveSpeed\0"
    "PointingTowardsNext\0PythonScript\0"
    "Immediate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathAction_EndCondition[] = {

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
       1,    1, 0x0,   10,   19,

 // enum data: key, value
       2, uint(PathAction_EndCondition::None),
       3, uint(PathAction_EndCondition::TimeOut),
       4, uint(PathAction_EndCondition::DistanceToTarget),
       5, uint(PathAction_EndCondition::LegRemaining),
       6, uint(PathAction_EndCondition::BelowError),
       7, uint(PathAction_EndCondition::AboveAltitude),
       8, uint(PathAction_EndCondition::AboveSpeed),
       9, uint(PathAction_EndCondition::PointingTowardsNext),
      10, uint(PathAction_EndCondition::PythonScript),
      11, uint(PathAction_EndCondition::Immediate),

       0        // eod
};

void PathAction_EndCondition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathAction_EndCondition::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PathAction_EndCondition.data,
    qt_meta_data_PathAction_EndCondition,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathAction_EndCondition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathAction_EndCondition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathAction_EndCondition.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PathAction_EndCondition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathAction_Command_t {
    QByteArrayData data[7];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathAction_Command_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathAction_Command_t qt_meta_stringdata_PathAction_Command = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PathAction_Command"
QT_MOC_LITERAL(1, 19, 4), // "Enum"
QT_MOC_LITERAL(2, 24, 23), // "OnConditionNextWaypoint"
QT_MOC_LITERAL(3, 48, 26), // "OnNotConditionNextWaypoint"
QT_MOC_LITERAL(4, 75, 23), // "OnConditionJumpWaypoint"
QT_MOC_LITERAL(5, 99, 26), // "OnNotConditionJumpWaypoint"
QT_MOC_LITERAL(6, 126, 39) // "IfConditionJumpWaypointElseNe..."

    },
    "PathAction_Command\0Enum\0OnConditionNextWaypoint\0"
    "OnNotConditionNextWaypoint\0"
    "OnConditionJumpWaypoint\0"
    "OnNotConditionJumpWaypoint\0"
    "IfConditionJumpWaypointElseNextWaypoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathAction_Command[] = {

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
       2, uint(PathAction_Command::OnConditionNextWaypoint),
       3, uint(PathAction_Command::OnNotConditionNextWaypoint),
       4, uint(PathAction_Command::OnConditionJumpWaypoint),
       5, uint(PathAction_Command::OnNotConditionJumpWaypoint),
       6, uint(PathAction_Command::IfConditionJumpWaypointElseNextWaypoint),

       0        // eod
};

void PathAction_Command::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathAction_Command::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PathAction_Command.data,
    qt_meta_data_PathAction_Command,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathAction_Command::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathAction_Command::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathAction_Command.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PathAction_Command::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathAction_t {
    QByteArrayData data[104];
    char stringdata0[2040];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathAction_t qt_meta_stringdata_PathAction = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PathAction"
QT_MOC_LITERAL(1, 11, 21), // "modeParametersChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "index"
QT_MOC_LITERAL(4, 40, 5), // "value"
QT_MOC_LITERAL(5, 46, 21), // "ModeParametersChanged"
QT_MOC_LITERAL(6, 68, 22), // "modeParameters0Changed"
QT_MOC_LITERAL(7, 91, 23), // "ModeParameters_0Changed"
QT_MOC_LITERAL(8, 115, 22), // "modeParameters1Changed"
QT_MOC_LITERAL(9, 138, 23), // "ModeParameters_1Changed"
QT_MOC_LITERAL(10, 162, 22), // "modeParameters2Changed"
QT_MOC_LITERAL(11, 185, 23), // "ModeParameters_2Changed"
QT_MOC_LITERAL(12, 209, 22), // "modeParameters3Changed"
QT_MOC_LITERAL(13, 232, 23), // "ModeParameters_3Changed"
QT_MOC_LITERAL(14, 256, 26), // "conditionParametersChanged"
QT_MOC_LITERAL(15, 283, 26), // "ConditionParametersChanged"
QT_MOC_LITERAL(16, 310, 27), // "conditionParameters0Changed"
QT_MOC_LITERAL(17, 338, 28), // "ConditionParameters_0Changed"
QT_MOC_LITERAL(18, 367, 27), // "conditionParameters1Changed"
QT_MOC_LITERAL(19, 395, 28), // "ConditionParameters_1Changed"
QT_MOC_LITERAL(20, 424, 27), // "conditionParameters2Changed"
QT_MOC_LITERAL(21, 452, 28), // "ConditionParameters_2Changed"
QT_MOC_LITERAL(22, 481, 27), // "conditionParameters3Changed"
QT_MOC_LITERAL(23, 509, 28), // "ConditionParameters_3Changed"
QT_MOC_LITERAL(24, 538, 22), // "jumpDestinationChanged"
QT_MOC_LITERAL(25, 561, 22), // "JumpDestinationChanged"
QT_MOC_LITERAL(26, 584, 23), // "errorDestinationChanged"
QT_MOC_LITERAL(27, 608, 23), // "ErrorDestinationChanged"
QT_MOC_LITERAL(28, 632, 11), // "modeChanged"
QT_MOC_LITERAL(29, 644, 21), // "PathAction_Mode::Enum"
QT_MOC_LITERAL(30, 666, 11), // "ModeChanged"
QT_MOC_LITERAL(31, 678, 19), // "endConditionChanged"
QT_MOC_LITERAL(32, 698, 29), // "PathAction_EndCondition::Enum"
QT_MOC_LITERAL(33, 728, 19), // "EndConditionChanged"
QT_MOC_LITERAL(34, 748, 14), // "commandChanged"
QT_MOC_LITERAL(35, 763, 24), // "PathAction_Command::Enum"
QT_MOC_LITERAL(36, 788, 14), // "CommandChanged"
QT_MOC_LITERAL(37, 803, 17), // "setModeParameters"
QT_MOC_LITERAL(38, 821, 18), // "setModeParameters0"
QT_MOC_LITERAL(39, 840, 19), // "setModeParameters_0"
QT_MOC_LITERAL(40, 860, 18), // "setModeParameters1"
QT_MOC_LITERAL(41, 879, 19), // "setModeParameters_1"
QT_MOC_LITERAL(42, 899, 18), // "setModeParameters2"
QT_MOC_LITERAL(43, 918, 19), // "setModeParameters_2"
QT_MOC_LITERAL(44, 938, 18), // "setModeParameters3"
QT_MOC_LITERAL(45, 957, 19), // "setModeParameters_3"
QT_MOC_LITERAL(46, 977, 22), // "setConditionParameters"
QT_MOC_LITERAL(47, 1000, 23), // "setConditionParameters0"
QT_MOC_LITERAL(48, 1024, 24), // "setConditionParameters_0"
QT_MOC_LITERAL(49, 1049, 23), // "setConditionParameters1"
QT_MOC_LITERAL(50, 1073, 24), // "setConditionParameters_1"
QT_MOC_LITERAL(51, 1098, 23), // "setConditionParameters2"
QT_MOC_LITERAL(52, 1122, 24), // "setConditionParameters_2"
QT_MOC_LITERAL(53, 1147, 23), // "setConditionParameters3"
QT_MOC_LITERAL(54, 1171, 24), // "setConditionParameters_3"
QT_MOC_LITERAL(55, 1196, 18), // "setJumpDestination"
QT_MOC_LITERAL(56, 1215, 19), // "setErrorDestination"
QT_MOC_LITERAL(57, 1235, 7), // "setMode"
QT_MOC_LITERAL(58, 1243, 15), // "setEndCondition"
QT_MOC_LITERAL(59, 1259, 10), // "setCommand"
QT_MOC_LITERAL(60, 1270, 17), // "emitNotifications"
QT_MOC_LITERAL(61, 1288, 14), // "modeParameters"
QT_MOC_LITERAL(62, 1303, 17), // "getModeParameters"
QT_MOC_LITERAL(63, 1321, 19), // "getModeParameters_0"
QT_MOC_LITERAL(64, 1341, 19), // "getModeParameters_1"
QT_MOC_LITERAL(65, 1361, 19), // "getModeParameters_2"
QT_MOC_LITERAL(66, 1381, 19), // "getModeParameters_3"
QT_MOC_LITERAL(67, 1401, 19), // "conditionParameters"
QT_MOC_LITERAL(68, 1421, 22), // "getConditionParameters"
QT_MOC_LITERAL(69, 1444, 24), // "getConditionParameters_0"
QT_MOC_LITERAL(70, 1469, 24), // "getConditionParameters_1"
QT_MOC_LITERAL(71, 1494, 24), // "getConditionParameters_2"
QT_MOC_LITERAL(72, 1519, 24), // "getConditionParameters_3"
QT_MOC_LITERAL(73, 1544, 18), // "getJumpDestination"
QT_MOC_LITERAL(74, 1563, 19), // "getErrorDestination"
QT_MOC_LITERAL(75, 1583, 7), // "getMode"
QT_MOC_LITERAL(76, 1591, 15), // "getEndCondition"
QT_MOC_LITERAL(77, 1607, 10), // "getCommand"
QT_MOC_LITERAL(78, 1618, 15), // "modeParameters0"
QT_MOC_LITERAL(79, 1634, 15), // "modeParameters1"
QT_MOC_LITERAL(80, 1650, 15), // "modeParameters2"
QT_MOC_LITERAL(81, 1666, 15), // "modeParameters3"
QT_MOC_LITERAL(82, 1682, 20), // "conditionParameters0"
QT_MOC_LITERAL(83, 1703, 20), // "conditionParameters1"
QT_MOC_LITERAL(84, 1724, 20), // "conditionParameters2"
QT_MOC_LITERAL(85, 1745, 20), // "conditionParameters3"
QT_MOC_LITERAL(86, 1766, 15), // "jumpDestination"
QT_MOC_LITERAL(87, 1782, 16), // "errorDestination"
QT_MOC_LITERAL(88, 1799, 4), // "mode"
QT_MOC_LITERAL(89, 1804, 12), // "endCondition"
QT_MOC_LITERAL(90, 1817, 7), // "command"
QT_MOC_LITERAL(91, 1825, 16), // "ModeParameters_0"
QT_MOC_LITERAL(92, 1842, 16), // "ModeParameters_1"
QT_MOC_LITERAL(93, 1859, 16), // "ModeParameters_2"
QT_MOC_LITERAL(94, 1876, 16), // "ModeParameters_3"
QT_MOC_LITERAL(95, 1893, 21), // "ConditionParameters_0"
QT_MOC_LITERAL(96, 1915, 21), // "ConditionParameters_1"
QT_MOC_LITERAL(97, 1937, 21), // "ConditionParameters_2"
QT_MOC_LITERAL(98, 1959, 21), // "ConditionParameters_3"
QT_MOC_LITERAL(99, 1981, 15), // "JumpDestination"
QT_MOC_LITERAL(100, 1997, 16), // "ErrorDestination"
QT_MOC_LITERAL(101, 2014, 4), // "Mode"
QT_MOC_LITERAL(102, 2019, 12), // "EndCondition"
QT_MOC_LITERAL(103, 2032, 7) // "Command"

    },
    "PathAction\0modeParametersChanged\0\0"
    "index\0value\0ModeParametersChanged\0"
    "modeParameters0Changed\0ModeParameters_0Changed\0"
    "modeParameters1Changed\0ModeParameters_1Changed\0"
    "modeParameters2Changed\0ModeParameters_2Changed\0"
    "modeParameters3Changed\0ModeParameters_3Changed\0"
    "conditionParametersChanged\0"
    "ConditionParametersChanged\0"
    "conditionParameters0Changed\0"
    "ConditionParameters_0Changed\0"
    "conditionParameters1Changed\0"
    "ConditionParameters_1Changed\0"
    "conditionParameters2Changed\0"
    "ConditionParameters_2Changed\0"
    "conditionParameters3Changed\0"
    "ConditionParameters_3Changed\0"
    "jumpDestinationChanged\0JumpDestinationChanged\0"
    "errorDestinationChanged\0ErrorDestinationChanged\0"
    "modeChanged\0PathAction_Mode::Enum\0"
    "ModeChanged\0endConditionChanged\0"
    "PathAction_EndCondition::Enum\0"
    "EndConditionChanged\0commandChanged\0"
    "PathAction_Command::Enum\0CommandChanged\0"
    "setModeParameters\0setModeParameters0\0"
    "setModeParameters_0\0setModeParameters1\0"
    "setModeParameters_1\0setModeParameters2\0"
    "setModeParameters_2\0setModeParameters3\0"
    "setModeParameters_3\0setConditionParameters\0"
    "setConditionParameters0\0"
    "setConditionParameters_0\0"
    "setConditionParameters1\0"
    "setConditionParameters_1\0"
    "setConditionParameters2\0"
    "setConditionParameters_2\0"
    "setConditionParameters3\0"
    "setConditionParameters_3\0setJumpDestination\0"
    "setErrorDestination\0setMode\0setEndCondition\0"
    "setCommand\0emitNotifications\0"
    "modeParameters\0getModeParameters\0"
    "getModeParameters_0\0getModeParameters_1\0"
    "getModeParameters_2\0getModeParameters_3\0"
    "conditionParameters\0getConditionParameters\0"
    "getConditionParameters_0\0"
    "getConditionParameters_1\0"
    "getConditionParameters_2\0"
    "getConditionParameters_3\0getJumpDestination\0"
    "getErrorDestination\0getMode\0getEndCondition\0"
    "getCommand\0modeParameters0\0modeParameters1\0"
    "modeParameters2\0modeParameters3\0"
    "conditionParameters0\0conditionParameters1\0"
    "conditionParameters2\0conditionParameters3\0"
    "jumpDestination\0errorDestination\0mode\0"
    "endCondition\0command\0ModeParameters_0\0"
    "ModeParameters_1\0ModeParameters_2\0"
    "ModeParameters_3\0ConditionParameters_0\0"
    "ConditionParameters_1\0ConditionParameters_2\0"
    "ConditionParameters_3\0JumpDestination\0"
    "ErrorDestination\0Mode\0EndCondition\0"
    "Command"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
      26,  590, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      30,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  384,    2, 0x06 /* Public */,
       5,    2,  389,    2, 0x06 /* Public */,
       6,    1,  394,    2, 0x06 /* Public */,
       7,    1,  397,    2, 0x06 /* Public */,
       8,    1,  400,    2, 0x06 /* Public */,
       9,    1,  403,    2, 0x06 /* Public */,
      10,    1,  406,    2, 0x06 /* Public */,
      11,    1,  409,    2, 0x06 /* Public */,
      12,    1,  412,    2, 0x06 /* Public */,
      13,    1,  415,    2, 0x06 /* Public */,
      14,    2,  418,    2, 0x06 /* Public */,
      15,    2,  423,    2, 0x06 /* Public */,
      16,    1,  428,    2, 0x06 /* Public */,
      17,    1,  431,    2, 0x06 /* Public */,
      18,    1,  434,    2, 0x06 /* Public */,
      19,    1,  437,    2, 0x06 /* Public */,
      20,    1,  440,    2, 0x06 /* Public */,
      21,    1,  443,    2, 0x06 /* Public */,
      22,    1,  446,    2, 0x06 /* Public */,
      23,    1,  449,    2, 0x06 /* Public */,
      24,    1,  452,    2, 0x06 /* Public */,
      25,    1,  455,    2, 0x06 /* Public */,
      26,    1,  458,    2, 0x06 /* Public */,
      27,    1,  461,    2, 0x06 /* Public */,
      28,    1,  464,    2, 0x06 /* Public */,
      30,    1,  467,    2, 0x06 /* Public */,
      31,    1,  470,    2, 0x06 /* Public */,
      33,    1,  473,    2, 0x06 /* Public */,
      34,    1,  476,    2, 0x06 /* Public */,
      36,    1,  479,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      37,    2,  482,    2, 0x0a /* Public */,
      38,    1,  487,    2, 0x0a /* Public */,
      39,    1,  490,    2, 0x0a /* Public */,
      40,    1,  493,    2, 0x0a /* Public */,
      41,    1,  496,    2, 0x0a /* Public */,
      42,    1,  499,    2, 0x0a /* Public */,
      43,    1,  502,    2, 0x0a /* Public */,
      44,    1,  505,    2, 0x0a /* Public */,
      45,    1,  508,    2, 0x0a /* Public */,
      46,    2,  511,    2, 0x0a /* Public */,
      47,    1,  516,    2, 0x0a /* Public */,
      48,    1,  519,    2, 0x0a /* Public */,
      49,    1,  522,    2, 0x0a /* Public */,
      50,    1,  525,    2, 0x0a /* Public */,
      51,    1,  528,    2, 0x0a /* Public */,
      52,    1,  531,    2, 0x0a /* Public */,
      53,    1,  534,    2, 0x0a /* Public */,
      54,    1,  537,    2, 0x0a /* Public */,
      55,    1,  540,    2, 0x0a /* Public */,
      56,    1,  543,    2, 0x0a /* Public */,
      57,    1,  546,    2, 0x0a /* Public */,
      57,    1,  549,    2, 0x0a /* Public */,
      58,    1,  552,    2, 0x0a /* Public */,
      58,    1,  555,    2, 0x0a /* Public */,
      59,    1,  558,    2, 0x0a /* Public */,
      59,    1,  561,    2, 0x0a /* Public */,
      60,    0,  564,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      61,    1,  565,    2, 0x02 /* Public */,
      62,    1,  568,    2, 0x02 /* Public */,
      63,    0,  571,    2, 0x02 /* Public */,
      64,    0,  572,    2, 0x02 /* Public */,
      65,    0,  573,    2, 0x02 /* Public */,
      66,    0,  574,    2, 0x02 /* Public */,
      67,    1,  575,    2, 0x02 /* Public */,
      68,    1,  578,    2, 0x02 /* Public */,
      69,    0,  581,    2, 0x02 /* Public */,
      70,    0,  582,    2, 0x02 /* Public */,
      71,    0,  583,    2, 0x02 /* Public */,
      72,    0,  584,    2, 0x02 /* Public */,
      73,    0,  585,    2, 0x02 /* Public */,
      74,    0,  586,    2, 0x02 /* Public */,
      75,    0,  587,    2, 0x02 /* Public */,
      76,    0,  588,    2, 0x02 /* Public */,
      77,    0,  589,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, 0x80000000 | 29,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 32,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 35,    4,
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
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, 0x80000000 | 29,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 32,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 35,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      78, QMetaType::Float, 0x00495103,
      79, QMetaType::Float, 0x00495103,
      80, QMetaType::Float, 0x00495103,
      81, QMetaType::Float, 0x00495103,
      82, QMetaType::Float, 0x00495103,
      83, QMetaType::Float, 0x00495103,
      84, QMetaType::Float, 0x00495103,
      85, QMetaType::Float, 0x00495103,
      86, QMetaType::Short, 0x00495103,
      87, QMetaType::Short, 0x00495103,
      88, 0x80000000 | 29, 0x0049510b,
      89, 0x80000000 | 32, 0x0049510b,
      90, 0x80000000 | 35, 0x0049510b,
      91, QMetaType::Float, 0x00495103,
      92, QMetaType::Float, 0x00495103,
      93, QMetaType::Float, 0x00495103,
      94, QMetaType::Float, 0x00495103,
      95, QMetaType::Float, 0x00495103,
      96, QMetaType::Float, 0x00495103,
      97, QMetaType::Float, 0x00495103,
      98, QMetaType::Float, 0x00495103,
      99, QMetaType::Short, 0x00495103,
     100, QMetaType::Short, 0x00495103,
     101, QMetaType::UChar, 0x00495103,
     102, QMetaType::UChar, 0x00495103,
     103, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
       8,
      12,
      14,
      16,
      18,
      20,
      22,
      24,
      26,
      28,
       3,
       5,
       7,
       9,
      13,
      15,
      17,
      19,
      21,
      23,
      25,
      27,
      29,

       0        // eod
};

void PathAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PathAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modeParametersChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->ModeParametersChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->modeParameters0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->ModeParameters_0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->modeParameters1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->ModeParameters_1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->modeParameters2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->ModeParameters_2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->modeParameters3Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->ModeParameters_3Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->conditionParametersChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 11: _t->ConditionParametersChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 12: _t->conditionParameters0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->ConditionParameters_0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->conditionParameters1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->ConditionParameters_1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->conditionParameters2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->ConditionParameters_2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->conditionParameters3Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->ConditionParameters_3Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->jumpDestinationChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 21: _t->JumpDestinationChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 22: _t->errorDestinationChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 23: _t->ErrorDestinationChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 24: _t->modeChanged((*reinterpret_cast< const PathAction_Mode::Enum(*)>(_a[1]))); break;
        case 25: _t->ModeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->endConditionChanged((*reinterpret_cast< const PathAction_EndCondition::Enum(*)>(_a[1]))); break;
        case 27: _t->EndConditionChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->commandChanged((*reinterpret_cast< const PathAction_Command::Enum(*)>(_a[1]))); break;
        case 29: _t->CommandChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->setModeParameters((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 31: _t->setModeParameters0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 32: _t->setModeParameters_0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 33: _t->setModeParameters1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 34: _t->setModeParameters_1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 35: _t->setModeParameters2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 36: _t->setModeParameters_2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 37: _t->setModeParameters3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 38: _t->setModeParameters_3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->setConditionParameters((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 40: _t->setConditionParameters0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 41: _t->setConditionParameters_0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->setConditionParameters1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 43: _t->setConditionParameters_1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->setConditionParameters2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 45: _t->setConditionParameters_2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->setConditionParameters3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->setConditionParameters_3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->setJumpDestination((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 49: _t->setErrorDestination((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 50: _t->setMode((*reinterpret_cast< const PathAction_Mode::Enum(*)>(_a[1]))); break;
        case 51: _t->setMode((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->setEndCondition((*reinterpret_cast< const PathAction_EndCondition::Enum(*)>(_a[1]))); break;
        case 53: _t->setEndCondition((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 54: _t->setCommand((*reinterpret_cast< const PathAction_Command::Enum(*)>(_a[1]))); break;
        case 55: _t->setCommand((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 56: _t->emitNotifications(); break;
        case 57: { float _r = _t->modeParameters((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 58: { float _r = _t->getModeParameters((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 59: { float _r = _t->getModeParameters_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 60: { float _r = _t->getModeParameters_1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 61: { float _r = _t->getModeParameters_2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 62: { float _r = _t->getModeParameters_3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 63: { float _r = _t->conditionParameters((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 64: { float _r = _t->getConditionParameters((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 65: { float _r = _t->getConditionParameters_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 66: { float _r = _t->getConditionParameters_1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 67: { float _r = _t->getConditionParameters_2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 68: { float _r = _t->getConditionParameters_3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 69: { qint16 _r = _t->getJumpDestination();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 70: { qint16 _r = _t->getErrorDestination();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 71: { quint8 _r = _t->getMode();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 72: { quint8 _r = _t->getEndCondition();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 73: { quint8 _r = _t->getCommand();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PathAction::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::modeParametersChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::ModeParametersChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::modeParameters0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::ModeParameters_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::modeParameters1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::ModeParameters_1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::modeParameters2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::ModeParameters_2Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::modeParameters3Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::ModeParameters_3Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::conditionParametersChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::ConditionParametersChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::conditionParameters0Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::ConditionParameters_0Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::conditionParameters1Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::ConditionParameters_1Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::conditionParameters2Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::ConditionParameters_2Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::conditionParameters3Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::ConditionParameters_3Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::jumpDestinationChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::JumpDestinationChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::errorDestinationChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::ErrorDestinationChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const PathAction_Mode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::modeChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::ModeChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const PathAction_EndCondition::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::endConditionChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::EndConditionChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(const PathAction_Command::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::commandChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (PathAction::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathAction::CommandChanged)) {
                *result = 29;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PathAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->modeParameters0(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->modeParameters1(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->modeParameters2(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->modeParameters3(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->conditionParameters0(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->conditionParameters1(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->conditionParameters2(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->conditionParameters3(); break;
        case 8: *reinterpret_cast< qint16*>(_v) = _t->jumpDestination(); break;
        case 9: *reinterpret_cast< qint16*>(_v) = _t->errorDestination(); break;
        case 10: *reinterpret_cast< PathAction_Mode::Enum*>(_v) = _t->mode(); break;
        case 11: *reinterpret_cast< PathAction_EndCondition::Enum*>(_v) = _t->endCondition(); break;
        case 12: *reinterpret_cast< PathAction_Command::Enum*>(_v) = _t->command(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getModeParameters_0(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getModeParameters_1(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getModeParameters_2(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getModeParameters_3(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getConditionParameters_0(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getConditionParameters_1(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getConditionParameters_2(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getConditionParameters_3(); break;
        case 21: *reinterpret_cast< qint16*>(_v) = _t->getJumpDestination(); break;
        case 22: *reinterpret_cast< qint16*>(_v) = _t->getErrorDestination(); break;
        case 23: *reinterpret_cast< quint8*>(_v) = _t->getMode(); break;
        case 24: *reinterpret_cast< quint8*>(_v) = _t->getEndCondition(); break;
        case 25: *reinterpret_cast< quint8*>(_v) = _t->getCommand(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PathAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModeParameters0(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setModeParameters1(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setModeParameters2(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setModeParameters3(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setConditionParameters0(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setConditionParameters1(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setConditionParameters2(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setConditionParameters3(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setJumpDestination(*reinterpret_cast< qint16*>(_v)); break;
        case 9: _t->setErrorDestination(*reinterpret_cast< qint16*>(_v)); break;
        case 10: _t->setMode(*reinterpret_cast< PathAction_Mode::Enum*>(_v)); break;
        case 11: _t->setEndCondition(*reinterpret_cast< PathAction_EndCondition::Enum*>(_v)); break;
        case 12: _t->setCommand(*reinterpret_cast< PathAction_Command::Enum*>(_v)); break;
        case 13: _t->setModeParameters_0(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setModeParameters_1(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setModeParameters_2(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setModeParameters_3(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setConditionParameters_0(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setConditionParameters_1(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setConditionParameters_2(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setConditionParameters_3(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setJumpDestination(*reinterpret_cast< qint16*>(_v)); break;
        case 22: _t->setErrorDestination(*reinterpret_cast< qint16*>(_v)); break;
        case 23: _t->setMode(*reinterpret_cast< quint8*>(_v)); break;
        case 24: _t->setEndCondition(*reinterpret_cast< quint8*>(_v)); break;
        case 25: _t->setCommand(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_PathAction[] = {
        &PathAction_Mode::staticMetaObject,
    &PathAction_EndCondition::staticMetaObject,
    &PathAction_Command::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject PathAction::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_PathAction.data,
    qt_meta_data_PathAction,
    qt_static_metacall,
    qt_meta_extradata_PathAction,
    nullptr
} };


const QMetaObject *PathAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathAction.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int PathAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 74)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 74;
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
void PathAction::modeParametersChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PathAction::ModeParametersChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PathAction::modeParameters0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PathAction::ModeParameters_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PathAction::modeParameters1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PathAction::ModeParameters_1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PathAction::modeParameters2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PathAction::ModeParameters_2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PathAction::modeParameters3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PathAction::ModeParameters_3Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PathAction::conditionParametersChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PathAction::ConditionParametersChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PathAction::conditionParameters0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void PathAction::ConditionParameters_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void PathAction::conditionParameters1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void PathAction::ConditionParameters_1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void PathAction::conditionParameters2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void PathAction::ConditionParameters_2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void PathAction::conditionParameters3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void PathAction::ConditionParameters_3Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void PathAction::jumpDestinationChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void PathAction::JumpDestinationChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void PathAction::errorDestinationChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void PathAction::ErrorDestinationChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void PathAction::modeChanged(const PathAction_Mode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void PathAction::ModeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void PathAction::endConditionChanged(const PathAction_EndCondition::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void PathAction::EndConditionChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void PathAction::commandChanged(const PathAction_Command::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void PathAction::CommandChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
