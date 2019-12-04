/****************************************************************************
** Meta object code from reading C++ file 'pathsummary.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pathsummary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathsummary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PathSummaryConstants_t {
    QByteArrayData data[4];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathSummaryConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathSummaryConstants_t qt_meta_stringdata_PathSummaryConstants = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PathSummaryConstants"
QT_MOC_LITERAL(1, 21, 4), // "Enum"
QT_MOC_LITERAL(2, 26, 20), // "BrakeExitReasonCount"
QT_MOC_LITERAL(3, 47, 9) // "ModeCount"

    },
    "PathSummaryConstants\0Enum\0"
    "BrakeExitReasonCount\0ModeCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathSummaryConstants[] = {

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
       2, uint(PathSummaryConstants::BrakeExitReasonCount),
       3, uint(PathSummaryConstants::ModeCount),

       0        // eod
};

void PathSummaryConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathSummaryConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PathSummaryConstants.data,
    qt_meta_data_PathSummaryConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathSummaryConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathSummaryConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathSummaryConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PathSummaryConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathSummary_BrakeExitReason_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathSummary_BrakeExitReason_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathSummary_BrakeExitReason_t qt_meta_stringdata_PathSummary_BrakeExitReason = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PathSummary_BrakeExitReason"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 7), // "Timeout"
QT_MOC_LITERAL(3, 41, 13), // "PathCompleted"
QT_MOC_LITERAL(4, 55, 9) // "PathError"

    },
    "PathSummary_BrakeExitReason\0Enum\0"
    "Timeout\0PathCompleted\0PathError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathSummary_BrakeExitReason[] = {

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
       2, uint(PathSummary_BrakeExitReason::Timeout),
       3, uint(PathSummary_BrakeExitReason::PathCompleted),
       4, uint(PathSummary_BrakeExitReason::PathError),

       0        // eod
};

void PathSummary_BrakeExitReason::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathSummary_BrakeExitReason::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PathSummary_BrakeExitReason.data,
    qt_meta_data_PathSummary_BrakeExitReason,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathSummary_BrakeExitReason::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathSummary_BrakeExitReason::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathSummary_BrakeExitReason.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PathSummary_BrakeExitReason::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathSummary_Mode_t {
    QByteArrayData data[13];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathSummary_Mode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathSummary_Mode_t qt_meta_stringdata_PathSummary_Mode = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PathSummary_Mode"
QT_MOC_LITERAL(1, 17, 4), // "Enum"
QT_MOC_LITERAL(2, 22, 12), // "GoToEndpoint"
QT_MOC_LITERAL(3, 35, 12), // "FollowVector"
QT_MOC_LITERAL(4, 48, 11), // "CircleRight"
QT_MOC_LITERAL(5, 60, 10), // "CircleLeft"
QT_MOC_LITERAL(6, 71, 13), // "FixedAttitude"
QT_MOC_LITERAL(7, 85, 12), // "SetAccessory"
QT_MOC_LITERAL(8, 98, 11), // "DisarmAlarm"
QT_MOC_LITERAL(9, 110, 4), // "Land"
QT_MOC_LITERAL(10, 115, 5), // "Brake"
QT_MOC_LITERAL(11, 121, 8), // "Velocity"
QT_MOC_LITERAL(12, 130, 11) // "AutoTakeoff"

    },
    "PathSummary_Mode\0Enum\0GoToEndpoint\0"
    "FollowVector\0CircleRight\0CircleLeft\0"
    "FixedAttitude\0SetAccessory\0DisarmAlarm\0"
    "Land\0Brake\0Velocity\0AutoTakeoff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathSummary_Mode[] = {

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
       2, uint(PathSummary_Mode::GoToEndpoint),
       3, uint(PathSummary_Mode::FollowVector),
       4, uint(PathSummary_Mode::CircleRight),
       5, uint(PathSummary_Mode::CircleLeft),
       6, uint(PathSummary_Mode::FixedAttitude),
       7, uint(PathSummary_Mode::SetAccessory),
       8, uint(PathSummary_Mode::DisarmAlarm),
       9, uint(PathSummary_Mode::Land),
      10, uint(PathSummary_Mode::Brake),
      11, uint(PathSummary_Mode::Velocity),
      12, uint(PathSummary_Mode::AutoTakeoff),

       0        // eod
};

void PathSummary_Mode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathSummary_Mode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PathSummary_Mode.data,
    qt_meta_data_PathSummary_Mode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathSummary_Mode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathSummary_Mode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathSummary_Mode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PathSummary_Mode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathSummary_t {
    QByteArrayData data[61];
    char stringdata0[1110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathSummary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathSummary_t qt_meta_stringdata_PathSummary = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PathSummary"
QT_MOC_LITERAL(1, 12, 26), // "brakeDistanceOffsetChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "value"
QT_MOC_LITERAL(4, 46, 28), // "brake_distance_offsetChanged"
QT_MOC_LITERAL(5, 75, 20), // "timeRemainingChanged"
QT_MOC_LITERAL(6, 96, 21), // "time_remainingChanged"
QT_MOC_LITERAL(7, 118, 25), // "fractionalProgressChanged"
QT_MOC_LITERAL(8, 144, 26), // "fractional_progressChanged"
QT_MOC_LITERAL(9, 171, 16), // "decelrateChanged"
QT_MOC_LITERAL(10, 188, 34), // "brakeRateActualDesiredRatioCh..."
QT_MOC_LITERAL(11, 223, 23), // "velocityIntoHoldChanged"
QT_MOC_LITERAL(12, 247, 10), // "uidChanged"
QT_MOC_LITERAL(13, 258, 10), // "UIDChanged"
QT_MOC_LITERAL(14, 269, 22), // "brakeExitReasonChanged"
QT_MOC_LITERAL(15, 292, 33), // "PathSummary_BrakeExitReason::..."
QT_MOC_LITERAL(16, 326, 24), // "brake_exit_reasonChanged"
QT_MOC_LITERAL(17, 351, 11), // "modeChanged"
QT_MOC_LITERAL(18, 363, 22), // "PathSummary_Mode::Enum"
QT_MOC_LITERAL(19, 386, 11), // "ModeChanged"
QT_MOC_LITERAL(20, 398, 22), // "setBrakeDistanceOffset"
QT_MOC_LITERAL(21, 421, 24), // "setbrake_distance_offset"
QT_MOC_LITERAL(22, 446, 16), // "setTimeRemaining"
QT_MOC_LITERAL(23, 463, 17), // "settime_remaining"
QT_MOC_LITERAL(24, 481, 21), // "setFractionalProgress"
QT_MOC_LITERAL(25, 503, 22), // "setfractional_progress"
QT_MOC_LITERAL(26, 526, 12), // "setDecelrate"
QT_MOC_LITERAL(27, 539, 12), // "setdecelrate"
QT_MOC_LITERAL(28, 552, 30), // "setBrakeRateActualDesiredRatio"
QT_MOC_LITERAL(29, 583, 30), // "setbrakeRateActualDesiredRatio"
QT_MOC_LITERAL(30, 614, 19), // "setVelocityIntoHold"
QT_MOC_LITERAL(31, 634, 19), // "setvelocityIntoHold"
QT_MOC_LITERAL(32, 654, 6), // "setUID"
QT_MOC_LITERAL(33, 661, 18), // "setBrakeExitReason"
QT_MOC_LITERAL(34, 680, 20), // "setbrake_exit_reason"
QT_MOC_LITERAL(35, 701, 7), // "setMode"
QT_MOC_LITERAL(36, 709, 17), // "emitNotifications"
QT_MOC_LITERAL(37, 727, 24), // "getbrake_distance_offset"
QT_MOC_LITERAL(38, 752, 17), // "gettime_remaining"
QT_MOC_LITERAL(39, 770, 22), // "getfractional_progress"
QT_MOC_LITERAL(40, 793, 12), // "getdecelrate"
QT_MOC_LITERAL(41, 806, 30), // "getbrakeRateActualDesiredRatio"
QT_MOC_LITERAL(42, 837, 19), // "getvelocityIntoHold"
QT_MOC_LITERAL(43, 857, 6), // "getUID"
QT_MOC_LITERAL(44, 864, 20), // "getbrake_exit_reason"
QT_MOC_LITERAL(45, 885, 7), // "getMode"
QT_MOC_LITERAL(46, 893, 19), // "brakeDistanceOffset"
QT_MOC_LITERAL(47, 913, 13), // "timeRemaining"
QT_MOC_LITERAL(48, 927, 18), // "fractionalProgress"
QT_MOC_LITERAL(49, 946, 9), // "decelrate"
QT_MOC_LITERAL(50, 956, 27), // "brakeRateActualDesiredRatio"
QT_MOC_LITERAL(51, 984, 16), // "velocityIntoHold"
QT_MOC_LITERAL(52, 1001, 3), // "uid"
QT_MOC_LITERAL(53, 1005, 15), // "brakeExitReason"
QT_MOC_LITERAL(54, 1021, 4), // "mode"
QT_MOC_LITERAL(55, 1026, 21), // "brake_distance_offset"
QT_MOC_LITERAL(56, 1048, 14), // "time_remaining"
QT_MOC_LITERAL(57, 1063, 19), // "fractional_progress"
QT_MOC_LITERAL(58, 1083, 3), // "UID"
QT_MOC_LITERAL(59, 1087, 17), // "brake_exit_reason"
QT_MOC_LITERAL(60, 1105, 4) // "Mode"

    },
    "PathSummary\0brakeDistanceOffsetChanged\0"
    "\0value\0brake_distance_offsetChanged\0"
    "timeRemainingChanged\0time_remainingChanged\0"
    "fractionalProgressChanged\0"
    "fractional_progressChanged\0decelrateChanged\0"
    "brakeRateActualDesiredRatioChanged\0"
    "velocityIntoHoldChanged\0uidChanged\0"
    "UIDChanged\0brakeExitReasonChanged\0"
    "PathSummary_BrakeExitReason::Enum\0"
    "brake_exit_reasonChanged\0modeChanged\0"
    "PathSummary_Mode::Enum\0ModeChanged\0"
    "setBrakeDistanceOffset\0setbrake_distance_offset\0"
    "setTimeRemaining\0settime_remaining\0"
    "setFractionalProgress\0setfractional_progress\0"
    "setDecelrate\0setdecelrate\0"
    "setBrakeRateActualDesiredRatio\0"
    "setbrakeRateActualDesiredRatio\0"
    "setVelocityIntoHold\0setvelocityIntoHold\0"
    "setUID\0setBrakeExitReason\0"
    "setbrake_exit_reason\0setMode\0"
    "emitNotifications\0getbrake_distance_offset\0"
    "gettime_remaining\0getfractional_progress\0"
    "getdecelrate\0getbrakeRateActualDesiredRatio\0"
    "getvelocityIntoHold\0getUID\0"
    "getbrake_exit_reason\0getMode\0"
    "brakeDistanceOffset\0timeRemaining\0"
    "fractionalProgress\0decelrate\0"
    "brakeRateActualDesiredRatio\0"
    "velocityIntoHold\0uid\0brakeExitReason\0"
    "mode\0brake_distance_offset\0time_remaining\0"
    "fractional_progress\0UID\0brake_exit_reason\0"
    "Mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathSummary[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
      15,  330, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  224,    2, 0x06 /* Public */,
       4,    1,  227,    2, 0x06 /* Public */,
       5,    1,  230,    2, 0x06 /* Public */,
       6,    1,  233,    2, 0x06 /* Public */,
       7,    1,  236,    2, 0x06 /* Public */,
       8,    1,  239,    2, 0x06 /* Public */,
       9,    1,  242,    2, 0x06 /* Public */,
      10,    1,  245,    2, 0x06 /* Public */,
      11,    1,  248,    2, 0x06 /* Public */,
      12,    1,  251,    2, 0x06 /* Public */,
      13,    1,  254,    2, 0x06 /* Public */,
      14,    1,  257,    2, 0x06 /* Public */,
      16,    1,  260,    2, 0x06 /* Public */,
      17,    1,  263,    2, 0x06 /* Public */,
      19,    1,  266,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,  269,    2, 0x0a /* Public */,
      21,    1,  272,    2, 0x0a /* Public */,
      22,    1,  275,    2, 0x0a /* Public */,
      23,    1,  278,    2, 0x0a /* Public */,
      24,    1,  281,    2, 0x0a /* Public */,
      25,    1,  284,    2, 0x0a /* Public */,
      26,    1,  287,    2, 0x0a /* Public */,
      27,    1,  290,    2, 0x0a /* Public */,
      28,    1,  293,    2, 0x0a /* Public */,
      29,    1,  296,    2, 0x0a /* Public */,
      30,    1,  299,    2, 0x0a /* Public */,
      31,    1,  302,    2, 0x0a /* Public */,
      32,    1,  305,    2, 0x0a /* Public */,
      33,    1,  308,    2, 0x0a /* Public */,
      34,    1,  311,    2, 0x0a /* Public */,
      35,    1,  314,    2, 0x0a /* Public */,
      35,    1,  317,    2, 0x0a /* Public */,
      36,    0,  320,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      37,    0,  321,    2, 0x02 /* Public */,
      38,    0,  322,    2, 0x02 /* Public */,
      39,    0,  323,    2, 0x02 /* Public */,
      40,    0,  324,    2, 0x02 /* Public */,
      41,    0,  325,    2, 0x02 /* Public */,
      42,    0,  326,    2, 0x02 /* Public */,
      43,    0,  327,    2, 0x02 /* Public */,
      44,    0,  328,    2, 0x02 /* Public */,
      45,    0,  329,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, 0x80000000 | 15,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 18,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
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
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, 0x80000000 | 15,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 18,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Short,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      46, QMetaType::Float, 0x00495103,
      47, QMetaType::Float, 0x00495103,
      48, QMetaType::Float, 0x00495103,
      49, QMetaType::Float, 0x00495103,
      50, QMetaType::Float, 0x00495103,
      51, QMetaType::Float, 0x00495103,
      52, QMetaType::Short, 0x00495003,
      53, 0x80000000 | 15, 0x0049510b,
      54, 0x80000000 | 18, 0x0049510b,
      55, QMetaType::Float, 0x00495003,
      56, QMetaType::Float, 0x00495003,
      57, QMetaType::Float, 0x00495003,
      58, QMetaType::Short, 0x00495103,
      59, QMetaType::UChar, 0x00495003,
      60, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       7,
       8,
       9,
      11,
      13,
       1,
       3,
       5,
      10,
      12,
      14,

       0        // eod
};

void PathSummary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PathSummary *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->brakeDistanceOffsetChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->brake_distance_offsetChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->timeRemainingChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->time_remainingChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->fractionalProgressChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->fractional_progressChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->decelrateChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->brakeRateActualDesiredRatioChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 8: _t->velocityIntoHoldChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->uidChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 10: _t->UIDChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 11: _t->brakeExitReasonChanged((*reinterpret_cast< const PathSummary_BrakeExitReason::Enum(*)>(_a[1]))); break;
        case 12: _t->brake_exit_reasonChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 13: _t->modeChanged((*reinterpret_cast< const PathSummary_Mode::Enum(*)>(_a[1]))); break;
        case 14: _t->ModeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 15: _t->setBrakeDistanceOffset((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 16: _t->setbrake_distance_offset((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 17: _t->setTimeRemaining((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 18: _t->settime_remaining((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 19: _t->setFractionalProgress((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 20: _t->setfractional_progress((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 21: _t->setDecelrate((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 22: _t->setdecelrate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 23: _t->setBrakeRateActualDesiredRatio((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 24: _t->setbrakeRateActualDesiredRatio((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 25: _t->setVelocityIntoHold((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 26: _t->setvelocityIntoHold((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 27: _t->setUID((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 28: _t->setBrakeExitReason((*reinterpret_cast< const PathSummary_BrakeExitReason::Enum(*)>(_a[1]))); break;
        case 29: _t->setbrake_exit_reason((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->setMode((*reinterpret_cast< const PathSummary_Mode::Enum(*)>(_a[1]))); break;
        case 31: _t->setMode((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->emitNotifications(); break;
        case 33: { float _r = _t->getbrake_distance_offset();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 34: { float _r = _t->gettime_remaining();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 35: { float _r = _t->getfractional_progress();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 36: { float _r = _t->getdecelrate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 37: { float _r = _t->getbrakeRateActualDesiredRatio();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 38: { float _r = _t->getvelocityIntoHold();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 39: { qint16 _r = _t->getUID();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 40: { quint8 _r = _t->getbrake_exit_reason();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 41: { quint8 _r = _t->getMode();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PathSummary::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::brakeDistanceOffsetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::brake_distance_offsetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::timeRemainingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::time_remainingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::fractionalProgressChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::fractional_progressChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::decelrateChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::brakeRateActualDesiredRatioChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::velocityIntoHoldChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::uidChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::UIDChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(const PathSummary_BrakeExitReason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::brakeExitReasonChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::brake_exit_reasonChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(const PathSummary_Mode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::modeChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PathSummary::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathSummary::ModeChanged)) {
                *result = 14;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PathSummary *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->brakeDistanceOffset(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->timeRemaining(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->fractionalProgress(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->decelrate(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->brakeRateActualDesiredRatio(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->velocityIntoHold(); break;
        case 6: *reinterpret_cast< qint16*>(_v) = _t->uid(); break;
        case 7: *reinterpret_cast< PathSummary_BrakeExitReason::Enum*>(_v) = _t->brakeExitReason(); break;
        case 8: *reinterpret_cast< PathSummary_Mode::Enum*>(_v) = _t->mode(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getbrake_distance_offset(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->gettime_remaining(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getfractional_progress(); break;
        case 12: *reinterpret_cast< qint16*>(_v) = _t->getUID(); break;
        case 13: *reinterpret_cast< quint8*>(_v) = _t->getbrake_exit_reason(); break;
        case 14: *reinterpret_cast< quint8*>(_v) = _t->getMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PathSummary *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBrakeDistanceOffset(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setTimeRemaining(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setFractionalProgress(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setDecelrate(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setBrakeRateActualDesiredRatio(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setVelocityIntoHold(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setUID(*reinterpret_cast< qint16*>(_v)); break;
        case 7: _t->setBrakeExitReason(*reinterpret_cast< PathSummary_BrakeExitReason::Enum*>(_v)); break;
        case 8: _t->setMode(*reinterpret_cast< PathSummary_Mode::Enum*>(_v)); break;
        case 9: _t->setbrake_distance_offset(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->settime_remaining(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setfractional_progress(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setUID(*reinterpret_cast< qint16*>(_v)); break;
        case 13: _t->setbrake_exit_reason(*reinterpret_cast< quint8*>(_v)); break;
        case 14: _t->setMode(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_PathSummary[] = {
        &PathSummary_BrakeExitReason::staticMetaObject,
    &PathSummary_Mode::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject PathSummary::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_PathSummary.data,
    qt_meta_data_PathSummary,
    qt_static_metacall,
    qt_meta_extradata_PathSummary,
    nullptr
} };


const QMetaObject *PathSummary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathSummary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathSummary.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int PathSummary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 42;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PathSummary::brakeDistanceOffsetChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PathSummary::brake_distance_offsetChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PathSummary::timeRemainingChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PathSummary::time_remainingChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PathSummary::fractionalProgressChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PathSummary::fractional_progressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PathSummary::decelrateChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PathSummary::brakeRateActualDesiredRatioChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PathSummary::velocityIntoHoldChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PathSummary::uidChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PathSummary::UIDChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PathSummary::brakeExitReasonChanged(const PathSummary_BrakeExitReason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PathSummary::brake_exit_reasonChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void PathSummary::modeChanged(const PathSummary_Mode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void PathSummary::ModeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
