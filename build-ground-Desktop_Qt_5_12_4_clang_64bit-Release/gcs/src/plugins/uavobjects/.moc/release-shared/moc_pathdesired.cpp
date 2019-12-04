/****************************************************************************
** Meta object code from reading C++ file 'pathdesired.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pathdesired.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathdesired.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PathDesiredConstants_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathDesiredConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathDesiredConstants_t qt_meta_stringdata_PathDesiredConstants = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PathDesiredConstants"
QT_MOC_LITERAL(1, 21, 4), // "Enum"
QT_MOC_LITERAL(2, 26, 9) // "ModeCount"

    },
    "PathDesiredConstants\0Enum\0ModeCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathDesiredConstants[] = {

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
       2, uint(PathDesiredConstants::ModeCount),

       0        // eod
};

void PathDesiredConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathDesiredConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PathDesiredConstants.data,
    qt_meta_data_PathDesiredConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathDesiredConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathDesiredConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathDesiredConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PathDesiredConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathDesired_Mode_t {
    QByteArrayData data[13];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathDesired_Mode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathDesired_Mode_t qt_meta_stringdata_PathDesired_Mode = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PathDesired_Mode"
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
    "PathDesired_Mode\0Enum\0GoToEndpoint\0"
    "FollowVector\0CircleRight\0CircleLeft\0"
    "FixedAttitude\0SetAccessory\0DisarmAlarm\0"
    "Land\0Brake\0Velocity\0AutoTakeoff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathDesired_Mode[] = {

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
       2, uint(PathDesired_Mode::GoToEndpoint),
       3, uint(PathDesired_Mode::FollowVector),
       4, uint(PathDesired_Mode::CircleRight),
       5, uint(PathDesired_Mode::CircleLeft),
       6, uint(PathDesired_Mode::FixedAttitude),
       7, uint(PathDesired_Mode::SetAccessory),
       8, uint(PathDesired_Mode::DisarmAlarm),
       9, uint(PathDesired_Mode::Land),
      10, uint(PathDesired_Mode::Brake),
      11, uint(PathDesired_Mode::Velocity),
      12, uint(PathDesired_Mode::AutoTakeoff),

       0        // eod
};

void PathDesired_Mode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathDesired_Mode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PathDesired_Mode.data,
    qt_meta_data_PathDesired_Mode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathDesired_Mode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathDesired_Mode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathDesired_Mode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PathDesired_Mode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathDesired_t {
    QByteArrayData data[115];
    char stringdata0[1687];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathDesired_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathDesired_t qt_meta_stringdata_PathDesired = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PathDesired"
QT_MOC_LITERAL(1, 12, 12), // "startChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "index"
QT_MOC_LITERAL(4, 32, 5), // "value"
QT_MOC_LITERAL(5, 38, 12), // "StartChanged"
QT_MOC_LITERAL(6, 51, 17), // "startNorthChanged"
QT_MOC_LITERAL(7, 69, 18), // "Start_NorthChanged"
QT_MOC_LITERAL(8, 88, 16), // "startEastChanged"
QT_MOC_LITERAL(9, 105, 17), // "Start_EastChanged"
QT_MOC_LITERAL(10, 123, 16), // "startDownChanged"
QT_MOC_LITERAL(11, 140, 17), // "Start_DownChanged"
QT_MOC_LITERAL(12, 158, 10), // "endChanged"
QT_MOC_LITERAL(13, 169, 10), // "EndChanged"
QT_MOC_LITERAL(14, 180, 15), // "endNorthChanged"
QT_MOC_LITERAL(15, 196, 16), // "End_NorthChanged"
QT_MOC_LITERAL(16, 213, 14), // "endEastChanged"
QT_MOC_LITERAL(17, 228, 15), // "End_EastChanged"
QT_MOC_LITERAL(18, 244, 14), // "endDownChanged"
QT_MOC_LITERAL(19, 259, 15), // "End_DownChanged"
QT_MOC_LITERAL(20, 275, 23), // "startingVelocityChanged"
QT_MOC_LITERAL(21, 299, 23), // "StartingVelocityChanged"
QT_MOC_LITERAL(22, 323, 21), // "endingVelocityChanged"
QT_MOC_LITERAL(23, 345, 21), // "EndingVelocityChanged"
QT_MOC_LITERAL(24, 367, 21), // "modeParametersChanged"
QT_MOC_LITERAL(25, 389, 21), // "ModeParametersChanged"
QT_MOC_LITERAL(26, 411, 22), // "modeParameters0Changed"
QT_MOC_LITERAL(27, 434, 23), // "ModeParameters_0Changed"
QT_MOC_LITERAL(28, 458, 22), // "modeParameters1Changed"
QT_MOC_LITERAL(29, 481, 23), // "ModeParameters_1Changed"
QT_MOC_LITERAL(30, 505, 22), // "modeParameters2Changed"
QT_MOC_LITERAL(31, 528, 23), // "ModeParameters_2Changed"
QT_MOC_LITERAL(32, 552, 22), // "modeParameters3Changed"
QT_MOC_LITERAL(33, 575, 23), // "ModeParameters_3Changed"
QT_MOC_LITERAL(34, 599, 10), // "uidChanged"
QT_MOC_LITERAL(35, 610, 10), // "UIDChanged"
QT_MOC_LITERAL(36, 621, 11), // "modeChanged"
QT_MOC_LITERAL(37, 633, 22), // "PathDesired_Mode::Enum"
QT_MOC_LITERAL(38, 656, 11), // "ModeChanged"
QT_MOC_LITERAL(39, 668, 8), // "setStart"
QT_MOC_LITERAL(40, 677, 13), // "setStartNorth"
QT_MOC_LITERAL(41, 691, 14), // "setStart_North"
QT_MOC_LITERAL(42, 706, 12), // "setStartEast"
QT_MOC_LITERAL(43, 719, 13), // "setStart_East"
QT_MOC_LITERAL(44, 733, 12), // "setStartDown"
QT_MOC_LITERAL(45, 746, 13), // "setStart_Down"
QT_MOC_LITERAL(46, 760, 6), // "setEnd"
QT_MOC_LITERAL(47, 767, 11), // "setEndNorth"
QT_MOC_LITERAL(48, 779, 12), // "setEnd_North"
QT_MOC_LITERAL(49, 792, 10), // "setEndEast"
QT_MOC_LITERAL(50, 803, 11), // "setEnd_East"
QT_MOC_LITERAL(51, 815, 10), // "setEndDown"
QT_MOC_LITERAL(52, 826, 11), // "setEnd_Down"
QT_MOC_LITERAL(53, 838, 19), // "setStartingVelocity"
QT_MOC_LITERAL(54, 858, 17), // "setEndingVelocity"
QT_MOC_LITERAL(55, 876, 17), // "setModeParameters"
QT_MOC_LITERAL(56, 894, 18), // "setModeParameters0"
QT_MOC_LITERAL(57, 913, 19), // "setModeParameters_0"
QT_MOC_LITERAL(58, 933, 18), // "setModeParameters1"
QT_MOC_LITERAL(59, 952, 19), // "setModeParameters_1"
QT_MOC_LITERAL(60, 972, 18), // "setModeParameters2"
QT_MOC_LITERAL(61, 991, 19), // "setModeParameters_2"
QT_MOC_LITERAL(62, 1011, 18), // "setModeParameters3"
QT_MOC_LITERAL(63, 1030, 19), // "setModeParameters_3"
QT_MOC_LITERAL(64, 1050, 6), // "setUID"
QT_MOC_LITERAL(65, 1057, 7), // "setMode"
QT_MOC_LITERAL(66, 1065, 17), // "emitNotifications"
QT_MOC_LITERAL(67, 1083, 5), // "start"
QT_MOC_LITERAL(68, 1089, 8), // "getStart"
QT_MOC_LITERAL(69, 1098, 14), // "getStart_North"
QT_MOC_LITERAL(70, 1113, 13), // "getStart_East"
QT_MOC_LITERAL(71, 1127, 13), // "getStart_Down"
QT_MOC_LITERAL(72, 1141, 3), // "end"
QT_MOC_LITERAL(73, 1145, 6), // "getEnd"
QT_MOC_LITERAL(74, 1152, 12), // "getEnd_North"
QT_MOC_LITERAL(75, 1165, 11), // "getEnd_East"
QT_MOC_LITERAL(76, 1177, 11), // "getEnd_Down"
QT_MOC_LITERAL(77, 1189, 19), // "getStartingVelocity"
QT_MOC_LITERAL(78, 1209, 17), // "getEndingVelocity"
QT_MOC_LITERAL(79, 1227, 14), // "modeParameters"
QT_MOC_LITERAL(80, 1242, 17), // "getModeParameters"
QT_MOC_LITERAL(81, 1260, 19), // "getModeParameters_0"
QT_MOC_LITERAL(82, 1280, 19), // "getModeParameters_1"
QT_MOC_LITERAL(83, 1300, 19), // "getModeParameters_2"
QT_MOC_LITERAL(84, 1320, 19), // "getModeParameters_3"
QT_MOC_LITERAL(85, 1340, 6), // "getUID"
QT_MOC_LITERAL(86, 1347, 7), // "getMode"
QT_MOC_LITERAL(87, 1355, 10), // "startNorth"
QT_MOC_LITERAL(88, 1366, 9), // "startEast"
QT_MOC_LITERAL(89, 1376, 9), // "startDown"
QT_MOC_LITERAL(90, 1386, 8), // "endNorth"
QT_MOC_LITERAL(91, 1395, 7), // "endEast"
QT_MOC_LITERAL(92, 1403, 7), // "endDown"
QT_MOC_LITERAL(93, 1411, 16), // "startingVelocity"
QT_MOC_LITERAL(94, 1428, 14), // "endingVelocity"
QT_MOC_LITERAL(95, 1443, 15), // "modeParameters0"
QT_MOC_LITERAL(96, 1459, 15), // "modeParameters1"
QT_MOC_LITERAL(97, 1475, 15), // "modeParameters2"
QT_MOC_LITERAL(98, 1491, 15), // "modeParameters3"
QT_MOC_LITERAL(99, 1507, 3), // "uid"
QT_MOC_LITERAL(100, 1511, 4), // "mode"
QT_MOC_LITERAL(101, 1516, 11), // "Start_North"
QT_MOC_LITERAL(102, 1528, 10), // "Start_East"
QT_MOC_LITERAL(103, 1539, 10), // "Start_Down"
QT_MOC_LITERAL(104, 1550, 9), // "End_North"
QT_MOC_LITERAL(105, 1560, 8), // "End_East"
QT_MOC_LITERAL(106, 1569, 8), // "End_Down"
QT_MOC_LITERAL(107, 1578, 16), // "StartingVelocity"
QT_MOC_LITERAL(108, 1595, 14), // "EndingVelocity"
QT_MOC_LITERAL(109, 1610, 16), // "ModeParameters_0"
QT_MOC_LITERAL(110, 1627, 16), // "ModeParameters_1"
QT_MOC_LITERAL(111, 1644, 16), // "ModeParameters_2"
QT_MOC_LITERAL(112, 1661, 16), // "ModeParameters_3"
QT_MOC_LITERAL(113, 1678, 3), // "UID"
QT_MOC_LITERAL(114, 1682, 4) // "Mode"

    },
    "PathDesired\0startChanged\0\0index\0value\0"
    "StartChanged\0startNorthChanged\0"
    "Start_NorthChanged\0startEastChanged\0"
    "Start_EastChanged\0startDownChanged\0"
    "Start_DownChanged\0endChanged\0EndChanged\0"
    "endNorthChanged\0End_NorthChanged\0"
    "endEastChanged\0End_EastChanged\0"
    "endDownChanged\0End_DownChanged\0"
    "startingVelocityChanged\0StartingVelocityChanged\0"
    "endingVelocityChanged\0EndingVelocityChanged\0"
    "modeParametersChanged\0ModeParametersChanged\0"
    "modeParameters0Changed\0ModeParameters_0Changed\0"
    "modeParameters1Changed\0ModeParameters_1Changed\0"
    "modeParameters2Changed\0ModeParameters_2Changed\0"
    "modeParameters3Changed\0ModeParameters_3Changed\0"
    "uidChanged\0UIDChanged\0modeChanged\0"
    "PathDesired_Mode::Enum\0ModeChanged\0"
    "setStart\0setStartNorth\0setStart_North\0"
    "setStartEast\0setStart_East\0setStartDown\0"
    "setStart_Down\0setEnd\0setEndNorth\0"
    "setEnd_North\0setEndEast\0setEnd_East\0"
    "setEndDown\0setEnd_Down\0setStartingVelocity\0"
    "setEndingVelocity\0setModeParameters\0"
    "setModeParameters0\0setModeParameters_0\0"
    "setModeParameters1\0setModeParameters_1\0"
    "setModeParameters2\0setModeParameters_2\0"
    "setModeParameters3\0setModeParameters_3\0"
    "setUID\0setMode\0emitNotifications\0start\0"
    "getStart\0getStart_North\0getStart_East\0"
    "getStart_Down\0end\0getEnd\0getEnd_North\0"
    "getEnd_East\0getEnd_Down\0getStartingVelocity\0"
    "getEndingVelocity\0modeParameters\0"
    "getModeParameters\0getModeParameters_0\0"
    "getModeParameters_1\0getModeParameters_2\0"
    "getModeParameters_3\0getUID\0getMode\0"
    "startNorth\0startEast\0startDown\0endNorth\0"
    "endEast\0endDown\0startingVelocity\0"
    "endingVelocity\0modeParameters0\0"
    "modeParameters1\0modeParameters2\0"
    "modeParameters3\0uid\0mode\0Start_North\0"
    "Start_East\0Start_Down\0End_North\0"
    "End_East\0End_Down\0StartingVelocity\0"
    "EndingVelocity\0ModeParameters_0\0"
    "ModeParameters_1\0ModeParameters_2\0"
    "ModeParameters_3\0UID\0Mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathDesired[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      83,   14, // methods
      28,  666, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      34,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  429,    2, 0x06 /* Public */,
       5,    2,  434,    2, 0x06 /* Public */,
       6,    1,  439,    2, 0x06 /* Public */,
       7,    1,  442,    2, 0x06 /* Public */,
       8,    1,  445,    2, 0x06 /* Public */,
       9,    1,  448,    2, 0x06 /* Public */,
      10,    1,  451,    2, 0x06 /* Public */,
      11,    1,  454,    2, 0x06 /* Public */,
      12,    2,  457,    2, 0x06 /* Public */,
      13,    2,  462,    2, 0x06 /* Public */,
      14,    1,  467,    2, 0x06 /* Public */,
      15,    1,  470,    2, 0x06 /* Public */,
      16,    1,  473,    2, 0x06 /* Public */,
      17,    1,  476,    2, 0x06 /* Public */,
      18,    1,  479,    2, 0x06 /* Public */,
      19,    1,  482,    2, 0x06 /* Public */,
      20,    1,  485,    2, 0x06 /* Public */,
      21,    1,  488,    2, 0x06 /* Public */,
      22,    1,  491,    2, 0x06 /* Public */,
      23,    1,  494,    2, 0x06 /* Public */,
      24,    2,  497,    2, 0x06 /* Public */,
      25,    2,  502,    2, 0x06 /* Public */,
      26,    1,  507,    2, 0x06 /* Public */,
      27,    1,  510,    2, 0x06 /* Public */,
      28,    1,  513,    2, 0x06 /* Public */,
      29,    1,  516,    2, 0x06 /* Public */,
      30,    1,  519,    2, 0x06 /* Public */,
      31,    1,  522,    2, 0x06 /* Public */,
      32,    1,  525,    2, 0x06 /* Public */,
      33,    1,  528,    2, 0x06 /* Public */,
      34,    1,  531,    2, 0x06 /* Public */,
      35,    1,  534,    2, 0x06 /* Public */,
      36,    1,  537,    2, 0x06 /* Public */,
      38,    1,  540,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      39,    2,  543,    2, 0x0a /* Public */,
      40,    1,  548,    2, 0x0a /* Public */,
      41,    1,  551,    2, 0x0a /* Public */,
      42,    1,  554,    2, 0x0a /* Public */,
      43,    1,  557,    2, 0x0a /* Public */,
      44,    1,  560,    2, 0x0a /* Public */,
      45,    1,  563,    2, 0x0a /* Public */,
      46,    2,  566,    2, 0x0a /* Public */,
      47,    1,  571,    2, 0x0a /* Public */,
      48,    1,  574,    2, 0x0a /* Public */,
      49,    1,  577,    2, 0x0a /* Public */,
      50,    1,  580,    2, 0x0a /* Public */,
      51,    1,  583,    2, 0x0a /* Public */,
      52,    1,  586,    2, 0x0a /* Public */,
      53,    1,  589,    2, 0x0a /* Public */,
      54,    1,  592,    2, 0x0a /* Public */,
      55,    2,  595,    2, 0x0a /* Public */,
      56,    1,  600,    2, 0x0a /* Public */,
      57,    1,  603,    2, 0x0a /* Public */,
      58,    1,  606,    2, 0x0a /* Public */,
      59,    1,  609,    2, 0x0a /* Public */,
      60,    1,  612,    2, 0x0a /* Public */,
      61,    1,  615,    2, 0x0a /* Public */,
      62,    1,  618,    2, 0x0a /* Public */,
      63,    1,  621,    2, 0x0a /* Public */,
      64,    1,  624,    2, 0x0a /* Public */,
      65,    1,  627,    2, 0x0a /* Public */,
      65,    1,  630,    2, 0x0a /* Public */,
      66,    0,  633,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      67,    1,  634,    2, 0x02 /* Public */,
      68,    1,  637,    2, 0x02 /* Public */,
      69,    0,  640,    2, 0x02 /* Public */,
      70,    0,  641,    2, 0x02 /* Public */,
      71,    0,  642,    2, 0x02 /* Public */,
      72,    1,  643,    2, 0x02 /* Public */,
      73,    1,  646,    2, 0x02 /* Public */,
      74,    0,  649,    2, 0x02 /* Public */,
      75,    0,  650,    2, 0x02 /* Public */,
      76,    0,  651,    2, 0x02 /* Public */,
      77,    0,  652,    2, 0x02 /* Public */,
      78,    0,  653,    2, 0x02 /* Public */,
      79,    1,  654,    2, 0x02 /* Public */,
      80,    1,  657,    2, 0x02 /* Public */,
      81,    0,  660,    2, 0x02 /* Public */,
      82,    0,  661,    2, 0x02 /* Public */,
      83,    0,  662,    2, 0x02 /* Public */,
      84,    0,  663,    2, 0x02 /* Public */,
      85,    0,  664,    2, 0x02 /* Public */,
      86,    0,  665,    2, 0x02 /* Public */,

 // signals: parameters
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
    QMetaType::Void, 0x80000000 | 37,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
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
    QMetaType::Void, 0x80000000 | 37,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
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
    QMetaType::UChar,

 // properties: name, type, flags
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
      99, QMetaType::Short, 0x00495003,
     100, 0x80000000 | 37, 0x0049510b,
     101, QMetaType::Float, 0x00495103,
     102, QMetaType::Float, 0x00495103,
     103, QMetaType::Float, 0x00495103,
     104, QMetaType::Float, 0x00495103,
     105, QMetaType::Float, 0x00495103,
     106, QMetaType::Float, 0x00495103,
     107, QMetaType::Float, 0x00495103,
     108, QMetaType::Float, 0x00495103,
     109, QMetaType::Float, 0x00495103,
     110, QMetaType::Float, 0x00495103,
     111, QMetaType::Float, 0x00495103,
     112, QMetaType::Float, 0x00495103,
     113, QMetaType::Short, 0x00495103,
     114, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
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
       3,
       5,
       7,
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

       0        // eod
};

void PathDesired::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PathDesired *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->StartChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->startNorthChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->Start_NorthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->startEastChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->Start_EastChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->startDownChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->Start_DownChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->endChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 9: _t->EndChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->endNorthChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->End_NorthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->endEastChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->End_EastChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->endDownChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->End_DownChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->startingVelocityChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->StartingVelocityChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->endingVelocityChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->EndingVelocityChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->modeParametersChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 21: _t->ModeParametersChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 22: _t->modeParameters0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->ModeParameters_0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->modeParameters1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->ModeParameters_1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->modeParameters2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->ModeParameters_2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->modeParameters3Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 29: _t->ModeParameters_3Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->uidChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 31: _t->UIDChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 32: _t->modeChanged((*reinterpret_cast< const PathDesired_Mode::Enum(*)>(_a[1]))); break;
        case 33: _t->ModeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->setStart((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 35: _t->setStartNorth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 36: _t->setStart_North((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 37: _t->setStartEast((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 38: _t->setStart_East((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->setStartDown((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 40: _t->setStart_Down((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 41: _t->setEnd((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 42: _t->setEndNorth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 43: _t->setEnd_North((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->setEndEast((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 45: _t->setEnd_East((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->setEndDown((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->setEnd_Down((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->setStartingVelocity((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 49: _t->setEndingVelocity((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 50: _t->setModeParameters((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 51: _t->setModeParameters0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 52: _t->setModeParameters_0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 53: _t->setModeParameters1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 54: _t->setModeParameters_1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 55: _t->setModeParameters2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 56: _t->setModeParameters_2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 57: _t->setModeParameters3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 58: _t->setModeParameters_3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 59: _t->setUID((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 60: _t->setMode((*reinterpret_cast< const PathDesired_Mode::Enum(*)>(_a[1]))); break;
        case 61: _t->setMode((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 62: _t->emitNotifications(); break;
        case 63: { float _r = _t->start((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 64: { float _r = _t->getStart((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 65: { float _r = _t->getStart_North();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 66: { float _r = _t->getStart_East();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 67: { float _r = _t->getStart_Down();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 68: { float _r = _t->end((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 69: { float _r = _t->getEnd((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 70: { float _r = _t->getEnd_North();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 71: { float _r = _t->getEnd_East();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 72: { float _r = _t->getEnd_Down();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 73: { float _r = _t->getStartingVelocity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 74: { float _r = _t->getEndingVelocity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 75: { float _r = _t->modeParameters((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 76: { float _r = _t->getModeParameters((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 77: { float _r = _t->getModeParameters_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 78: { float _r = _t->getModeParameters_1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 79: { float _r = _t->getModeParameters_2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 80: { float _r = _t->getModeParameters_3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 81: { qint16 _r = _t->getUID();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 82: { quint8 _r = _t->getMode();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PathDesired::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::startChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::StartChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::startNorthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::Start_NorthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::startEastChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::Start_EastChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::startDownChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::Start_DownChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::endChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::EndChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::endNorthChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::End_NorthChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::endEastChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::End_EastChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::endDownChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::End_DownChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::startingVelocityChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::StartingVelocityChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::endingVelocityChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::EndingVelocityChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::modeParametersChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::ModeParametersChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::modeParameters0Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::ModeParameters_0Changed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::modeParameters1Changed)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::ModeParameters_1Changed)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::modeParameters2Changed)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::ModeParameters_2Changed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::modeParameters3Changed)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::ModeParameters_3Changed)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::uidChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::UIDChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(const PathDesired_Mode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::modeChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (PathDesired::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathDesired::ModeChanged)) {
                *result = 33;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PathDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->startNorth(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->startEast(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->startDown(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->endNorth(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->endEast(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->endDown(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->startingVelocity(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->endingVelocity(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->modeParameters0(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->modeParameters1(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->modeParameters2(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->modeParameters3(); break;
        case 12: *reinterpret_cast< qint16*>(_v) = _t->uid(); break;
        case 13: *reinterpret_cast< PathDesired_Mode::Enum*>(_v) = _t->mode(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getStart_North(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getStart_East(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getStart_Down(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getEnd_North(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getEnd_East(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getEnd_Down(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getStartingVelocity(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getEndingVelocity(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getModeParameters_0(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getModeParameters_1(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getModeParameters_2(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->getModeParameters_3(); break;
        case 26: *reinterpret_cast< qint16*>(_v) = _t->getUID(); break;
        case 27: *reinterpret_cast< quint8*>(_v) = _t->getMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PathDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStartNorth(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setStartEast(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setStartDown(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setEndNorth(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setEndEast(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setEndDown(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setStartingVelocity(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setEndingVelocity(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setModeParameters0(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setModeParameters1(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setModeParameters2(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setModeParameters3(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setUID(*reinterpret_cast< qint16*>(_v)); break;
        case 13: _t->setMode(*reinterpret_cast< PathDesired_Mode::Enum*>(_v)); break;
        case 14: _t->setStart_North(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setStart_East(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setStart_Down(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setEnd_North(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setEnd_East(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setEnd_Down(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setStartingVelocity(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setEndingVelocity(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setModeParameters_0(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setModeParameters_1(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setModeParameters_2(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setModeParameters_3(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setUID(*reinterpret_cast< qint16*>(_v)); break;
        case 27: _t->setMode(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_PathDesired[] = {
        &PathDesired_Mode::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject PathDesired::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_PathDesired.data,
    qt_meta_data_PathDesired,
    qt_static_metacall,
    qt_meta_extradata_PathDesired,
    nullptr
} };


const QMetaObject *PathDesired::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathDesired::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathDesired.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int PathDesired::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 83)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 83;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 83)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 83;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 28;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PathDesired::startChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PathDesired::StartChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PathDesired::startNorthChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PathDesired::Start_NorthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PathDesired::startEastChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PathDesired::Start_EastChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PathDesired::startDownChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PathDesired::Start_DownChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PathDesired::endChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PathDesired::EndChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PathDesired::endNorthChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PathDesired::End_NorthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PathDesired::endEastChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void PathDesired::End_EastChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void PathDesired::endDownChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void PathDesired::End_DownChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void PathDesired::startingVelocityChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void PathDesired::StartingVelocityChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void PathDesired::endingVelocityChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void PathDesired::EndingVelocityChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void PathDesired::modeParametersChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void PathDesired::ModeParametersChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void PathDesired::modeParameters0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void PathDesired::ModeParameters_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void PathDesired::modeParameters1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void PathDesired::ModeParameters_1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void PathDesired::modeParameters2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void PathDesired::ModeParameters_2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void PathDesired::modeParameters3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void PathDesired::ModeParameters_3Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void PathDesired::uidChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void PathDesired::UIDChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void PathDesired::modeChanged(const PathDesired_Mode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void PathDesired::ModeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
