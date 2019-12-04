/****************************************************************************
** Meta object code from reading C++ file 'stabilizationstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stabilizationstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stabilizationstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StabilizationStatusConstants_t {
    QByteArrayData data[4];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationStatusConstants_t qt_meta_stringdata_StabilizationStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 28), // "StabilizationStatusConstants"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 14), // "OuterLoopCount"
QT_MOC_LITERAL(3, 49, 14) // "InnerLoopCount"

    },
    "StabilizationStatusConstants\0Enum\0"
    "OuterLoopCount\0InnerLoopCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationStatusConstants[] = {

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
       2, uint(StabilizationStatusConstants::OuterLoopCount),
       3, uint(StabilizationStatusConstants::InnerLoopCount),

       0        // eod
};

void StabilizationStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationStatusConstants.data,
    qt_meta_data_StabilizationStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationStatus_OuterLoop_t {
    QByteArrayData data[10];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationStatus_OuterLoop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationStatus_OuterLoop_t qt_meta_stringdata_StabilizationStatus_OuterLoop = {
    {
QT_MOC_LITERAL(0, 0, 29), // "StabilizationStatus_OuterLoop"
QT_MOC_LITERAL(1, 30, 4), // "Enum"
QT_MOC_LITERAL(2, 35, 6), // "Direct"
QT_MOC_LITERAL(3, 42, 16), // "DirectWithLimits"
QT_MOC_LITERAL(4, 59, 8), // "Attitude"
QT_MOC_LITERAL(5, 68, 9), // "Rattitude"
QT_MOC_LITERAL(6, 78, 12), // "Weakleveling"
QT_MOC_LITERAL(7, 91, 8), // "Altitude"
QT_MOC_LITERAL(8, 100, 13), // "AltitudeVario"
QT_MOC_LITERAL(9, 114, 11) // "SystemIdent"

    },
    "StabilizationStatus_OuterLoop\0Enum\0"
    "Direct\0DirectWithLimits\0Attitude\0"
    "Rattitude\0Weakleveling\0Altitude\0"
    "AltitudeVario\0SystemIdent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationStatus_OuterLoop[] = {

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
       1,    1, 0x0,    8,   19,

 // enum data: key, value
       2, uint(StabilizationStatus_OuterLoop::Direct),
       3, uint(StabilizationStatus_OuterLoop::DirectWithLimits),
       4, uint(StabilizationStatus_OuterLoop::Attitude),
       5, uint(StabilizationStatus_OuterLoop::Rattitude),
       6, uint(StabilizationStatus_OuterLoop::Weakleveling),
       7, uint(StabilizationStatus_OuterLoop::Altitude),
       8, uint(StabilizationStatus_OuterLoop::AltitudeVario),
       9, uint(StabilizationStatus_OuterLoop::SystemIdent),

       0        // eod
};

void StabilizationStatus_OuterLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationStatus_OuterLoop::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationStatus_OuterLoop.data,
    qt_meta_data_StabilizationStatus_OuterLoop,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationStatus_OuterLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationStatus_OuterLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationStatus_OuterLoop.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationStatus_OuterLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationStatus_InnerLoop_t {
    QByteArrayData data[9];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationStatus_InnerLoop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationStatus_InnerLoop_t qt_meta_stringdata_StabilizationStatus_InnerLoop = {
    {
QT_MOC_LITERAL(0, 0, 29), // "StabilizationStatus_InnerLoop"
QT_MOC_LITERAL(1, 30, 4), // "Enum"
QT_MOC_LITERAL(2, 35, 6), // "Direct"
QT_MOC_LITERAL(3, 42, 13), // "VirtualFlyBar"
QT_MOC_LITERAL(4, 56, 4), // "Acro"
QT_MOC_LITERAL(5, 61, 8), // "AxisLock"
QT_MOC_LITERAL(6, 70, 4), // "Rate"
QT_MOC_LITERAL(7, 75, 13), // "CruiseControl"
QT_MOC_LITERAL(8, 89, 11) // "SystemIdent"

    },
    "StabilizationStatus_InnerLoop\0Enum\0"
    "Direct\0VirtualFlyBar\0Acro\0AxisLock\0"
    "Rate\0CruiseControl\0SystemIdent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationStatus_InnerLoop[] = {

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
       2, uint(StabilizationStatus_InnerLoop::Direct),
       3, uint(StabilizationStatus_InnerLoop::VirtualFlyBar),
       4, uint(StabilizationStatus_InnerLoop::Acro),
       5, uint(StabilizationStatus_InnerLoop::AxisLock),
       6, uint(StabilizationStatus_InnerLoop::Rate),
       7, uint(StabilizationStatus_InnerLoop::CruiseControl),
       8, uint(StabilizationStatus_InnerLoop::SystemIdent),

       0        // eod
};

void StabilizationStatus_InnerLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationStatus_InnerLoop::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationStatus_InnerLoop.data,
    qt_meta_data_StabilizationStatus_InnerLoop,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationStatus_InnerLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationStatus_InnerLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationStatus_InnerLoop.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationStatus_InnerLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationStatus_t {
    QByteArrayData data[73];
    char stringdata0[1291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationStatus_t qt_meta_stringdata_StabilizationStatus = {
    {
QT_MOC_LITERAL(0, 0, 19), // "StabilizationStatus"
QT_MOC_LITERAL(1, 20, 16), // "outerLoopChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "index"
QT_MOC_LITERAL(4, 44, 35), // "StabilizationStatus_OuterLoop..."
QT_MOC_LITERAL(5, 80, 5), // "value"
QT_MOC_LITERAL(6, 86, 16), // "OuterLoopChanged"
QT_MOC_LITERAL(7, 103, 20), // "outerLoopRollChanged"
QT_MOC_LITERAL(8, 124, 21), // "OuterLoop_RollChanged"
QT_MOC_LITERAL(9, 146, 21), // "outerLoopPitchChanged"
QT_MOC_LITERAL(10, 168, 22), // "OuterLoop_PitchChanged"
QT_MOC_LITERAL(11, 191, 19), // "outerLoopYawChanged"
QT_MOC_LITERAL(12, 211, 20), // "OuterLoop_YawChanged"
QT_MOC_LITERAL(13, 232, 22), // "outerLoopThrustChanged"
QT_MOC_LITERAL(14, 255, 23), // "OuterLoop_ThrustChanged"
QT_MOC_LITERAL(15, 279, 16), // "innerLoopChanged"
QT_MOC_LITERAL(16, 296, 35), // "StabilizationStatus_InnerLoop..."
QT_MOC_LITERAL(17, 332, 16), // "InnerLoopChanged"
QT_MOC_LITERAL(18, 349, 20), // "innerLoopRollChanged"
QT_MOC_LITERAL(19, 370, 21), // "InnerLoop_RollChanged"
QT_MOC_LITERAL(20, 392, 21), // "innerLoopPitchChanged"
QT_MOC_LITERAL(21, 414, 22), // "InnerLoop_PitchChanged"
QT_MOC_LITERAL(22, 437, 19), // "innerLoopYawChanged"
QT_MOC_LITERAL(23, 457, 20), // "InnerLoop_YawChanged"
QT_MOC_LITERAL(24, 478, 22), // "innerLoopThrustChanged"
QT_MOC_LITERAL(25, 501, 23), // "InnerLoop_ThrustChanged"
QT_MOC_LITERAL(26, 525, 12), // "setOuterLoop"
QT_MOC_LITERAL(27, 538, 16), // "setOuterLoopRoll"
QT_MOC_LITERAL(28, 555, 17), // "setOuterLoop_Roll"
QT_MOC_LITERAL(29, 573, 17), // "setOuterLoopPitch"
QT_MOC_LITERAL(30, 591, 18), // "setOuterLoop_Pitch"
QT_MOC_LITERAL(31, 610, 15), // "setOuterLoopYaw"
QT_MOC_LITERAL(32, 626, 16), // "setOuterLoop_Yaw"
QT_MOC_LITERAL(33, 643, 18), // "setOuterLoopThrust"
QT_MOC_LITERAL(34, 662, 19), // "setOuterLoop_Thrust"
QT_MOC_LITERAL(35, 682, 12), // "setInnerLoop"
QT_MOC_LITERAL(36, 695, 16), // "setInnerLoopRoll"
QT_MOC_LITERAL(37, 712, 17), // "setInnerLoop_Roll"
QT_MOC_LITERAL(38, 730, 17), // "setInnerLoopPitch"
QT_MOC_LITERAL(39, 748, 18), // "setInnerLoop_Pitch"
QT_MOC_LITERAL(40, 767, 15), // "setInnerLoopYaw"
QT_MOC_LITERAL(41, 783, 16), // "setInnerLoop_Yaw"
QT_MOC_LITERAL(42, 800, 18), // "setInnerLoopThrust"
QT_MOC_LITERAL(43, 819, 19), // "setInnerLoop_Thrust"
QT_MOC_LITERAL(44, 839, 17), // "emitNotifications"
QT_MOC_LITERAL(45, 857, 9), // "outerLoop"
QT_MOC_LITERAL(46, 867, 12), // "getOuterLoop"
QT_MOC_LITERAL(47, 880, 17), // "getOuterLoop_Roll"
QT_MOC_LITERAL(48, 898, 18), // "getOuterLoop_Pitch"
QT_MOC_LITERAL(49, 917, 16), // "getOuterLoop_Yaw"
QT_MOC_LITERAL(50, 934, 19), // "getOuterLoop_Thrust"
QT_MOC_LITERAL(51, 954, 9), // "innerLoop"
QT_MOC_LITERAL(52, 964, 12), // "getInnerLoop"
QT_MOC_LITERAL(53, 977, 17), // "getInnerLoop_Roll"
QT_MOC_LITERAL(54, 995, 18), // "getInnerLoop_Pitch"
QT_MOC_LITERAL(55, 1014, 16), // "getInnerLoop_Yaw"
QT_MOC_LITERAL(56, 1031, 19), // "getInnerLoop_Thrust"
QT_MOC_LITERAL(57, 1051, 13), // "outerLoopRoll"
QT_MOC_LITERAL(58, 1065, 14), // "outerLoopPitch"
QT_MOC_LITERAL(59, 1080, 12), // "outerLoopYaw"
QT_MOC_LITERAL(60, 1093, 15), // "outerLoopThrust"
QT_MOC_LITERAL(61, 1109, 13), // "innerLoopRoll"
QT_MOC_LITERAL(62, 1123, 14), // "innerLoopPitch"
QT_MOC_LITERAL(63, 1138, 12), // "innerLoopYaw"
QT_MOC_LITERAL(64, 1151, 15), // "innerLoopThrust"
QT_MOC_LITERAL(65, 1167, 14), // "OuterLoop_Roll"
QT_MOC_LITERAL(66, 1182, 15), // "OuterLoop_Pitch"
QT_MOC_LITERAL(67, 1198, 13), // "OuterLoop_Yaw"
QT_MOC_LITERAL(68, 1212, 16), // "OuterLoop_Thrust"
QT_MOC_LITERAL(69, 1229, 14), // "InnerLoop_Roll"
QT_MOC_LITERAL(70, 1244, 15), // "InnerLoop_Pitch"
QT_MOC_LITERAL(71, 1260, 13), // "InnerLoop_Yaw"
QT_MOC_LITERAL(72, 1274, 16) // "InnerLoop_Thrust"

    },
    "StabilizationStatus\0outerLoopChanged\0"
    "\0index\0StabilizationStatus_OuterLoop::Enum\0"
    "value\0OuterLoopChanged\0outerLoopRollChanged\0"
    "OuterLoop_RollChanged\0outerLoopPitchChanged\0"
    "OuterLoop_PitchChanged\0outerLoopYawChanged\0"
    "OuterLoop_YawChanged\0outerLoopThrustChanged\0"
    "OuterLoop_ThrustChanged\0innerLoopChanged\0"
    "StabilizationStatus_InnerLoop::Enum\0"
    "InnerLoopChanged\0innerLoopRollChanged\0"
    "InnerLoop_RollChanged\0innerLoopPitchChanged\0"
    "InnerLoop_PitchChanged\0innerLoopYawChanged\0"
    "InnerLoop_YawChanged\0innerLoopThrustChanged\0"
    "InnerLoop_ThrustChanged\0setOuterLoop\0"
    "setOuterLoopRoll\0setOuterLoop_Roll\0"
    "setOuterLoopPitch\0setOuterLoop_Pitch\0"
    "setOuterLoopYaw\0setOuterLoop_Yaw\0"
    "setOuterLoopThrust\0setOuterLoop_Thrust\0"
    "setInnerLoop\0setInnerLoopRoll\0"
    "setInnerLoop_Roll\0setInnerLoopPitch\0"
    "setInnerLoop_Pitch\0setInnerLoopYaw\0"
    "setInnerLoop_Yaw\0setInnerLoopThrust\0"
    "setInnerLoop_Thrust\0emitNotifications\0"
    "outerLoop\0getOuterLoop\0getOuterLoop_Roll\0"
    "getOuterLoop_Pitch\0getOuterLoop_Yaw\0"
    "getOuterLoop_Thrust\0innerLoop\0"
    "getInnerLoop\0getInnerLoop_Roll\0"
    "getInnerLoop_Pitch\0getInnerLoop_Yaw\0"
    "getInnerLoop_Thrust\0outerLoopRoll\0"
    "outerLoopPitch\0outerLoopYaw\0outerLoopThrust\0"
    "innerLoopRoll\0innerLoopPitch\0innerLoopYaw\0"
    "innerLoopThrust\0OuterLoop_Roll\0"
    "OuterLoop_Pitch\0OuterLoop_Yaw\0"
    "OuterLoop_Thrust\0InnerLoop_Roll\0"
    "InnerLoop_Pitch\0InnerLoop_Yaw\0"
    "InnerLoop_Thrust"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      53,   14, // methods
      16,  436, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  279,    2, 0x06 /* Public */,
       6,    2,  284,    2, 0x06 /* Public */,
       7,    1,  289,    2, 0x06 /* Public */,
       8,    1,  292,    2, 0x06 /* Public */,
       9,    1,  295,    2, 0x06 /* Public */,
      10,    1,  298,    2, 0x06 /* Public */,
      11,    1,  301,    2, 0x06 /* Public */,
      12,    1,  304,    2, 0x06 /* Public */,
      13,    1,  307,    2, 0x06 /* Public */,
      14,    1,  310,    2, 0x06 /* Public */,
      15,    2,  313,    2, 0x06 /* Public */,
      17,    2,  318,    2, 0x06 /* Public */,
      18,    1,  323,    2, 0x06 /* Public */,
      19,    1,  326,    2, 0x06 /* Public */,
      20,    1,  329,    2, 0x06 /* Public */,
      21,    1,  332,    2, 0x06 /* Public */,
      22,    1,  335,    2, 0x06 /* Public */,
      23,    1,  338,    2, 0x06 /* Public */,
      24,    1,  341,    2, 0x06 /* Public */,
      25,    1,  344,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    2,  347,    2, 0x0a /* Public */,
      26,    2,  352,    2, 0x0a /* Public */,
      27,    1,  357,    2, 0x0a /* Public */,
      28,    1,  360,    2, 0x0a /* Public */,
      29,    1,  363,    2, 0x0a /* Public */,
      30,    1,  366,    2, 0x0a /* Public */,
      31,    1,  369,    2, 0x0a /* Public */,
      32,    1,  372,    2, 0x0a /* Public */,
      33,    1,  375,    2, 0x0a /* Public */,
      34,    1,  378,    2, 0x0a /* Public */,
      35,    2,  381,    2, 0x0a /* Public */,
      35,    2,  386,    2, 0x0a /* Public */,
      36,    1,  391,    2, 0x0a /* Public */,
      37,    1,  394,    2, 0x0a /* Public */,
      38,    1,  397,    2, 0x0a /* Public */,
      39,    1,  400,    2, 0x0a /* Public */,
      40,    1,  403,    2, 0x0a /* Public */,
      41,    1,  406,    2, 0x0a /* Public */,
      42,    1,  409,    2, 0x0a /* Public */,
      43,    1,  412,    2, 0x0a /* Public */,
      44,    0,  415,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      45,    1,  416,    2, 0x02 /* Public */,
      46,    1,  419,    2, 0x02 /* Public */,
      47,    0,  422,    2, 0x02 /* Public */,
      48,    0,  423,    2, 0x02 /* Public */,
      49,    0,  424,    2, 0x02 /* Public */,
      50,    0,  425,    2, 0x02 /* Public */,
      51,    1,  426,    2, 0x02 /* Public */,
      52,    1,  429,    2, 0x02 /* Public */,
      53,    0,  432,    2, 0x02 /* Public */,
      54,    0,  433,    2, 0x02 /* Public */,
      55,    0,  434,    2, 0x02 /* Public */,
      56,    0,  435,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 16,    3,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    5,
    QMetaType::Void, 0x80000000 | 16,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 16,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 16,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 16,    5,
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
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 16,    3,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    5,
    QMetaType::Void, 0x80000000 | 16,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 16,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 16,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 16,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    0x80000000 | 16, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      57, 0x80000000 | 4, 0x0049510b,
      58, 0x80000000 | 4, 0x0049510b,
      59, 0x80000000 | 4, 0x0049510b,
      60, 0x80000000 | 4, 0x0049510b,
      61, 0x80000000 | 16, 0x0049510b,
      62, 0x80000000 | 16, 0x0049510b,
      63, 0x80000000 | 16, 0x0049510b,
      64, 0x80000000 | 16, 0x0049510b,
      65, QMetaType::UChar, 0x00495103,
      66, QMetaType::UChar, 0x00495103,
      67, QMetaType::UChar, 0x00495103,
      68, QMetaType::UChar, 0x00495103,
      69, QMetaType::UChar, 0x00495103,
      70, QMetaType::UChar, 0x00495103,
      71, QMetaType::UChar, 0x00495103,
      72, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
       8,
      12,
      14,
      16,
      18,
       3,
       5,
       7,
       9,
      13,
      15,
      17,
      19,

       0        // eod
};

void StabilizationStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StabilizationStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outerLoopChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StabilizationStatus_OuterLoop::Enum(*)>(_a[2]))); break;
        case 1: _t->OuterLoopChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 2: _t->outerLoopRollChanged((*reinterpret_cast< const StabilizationStatus_OuterLoop::Enum(*)>(_a[1]))); break;
        case 3: _t->OuterLoop_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->outerLoopPitchChanged((*reinterpret_cast< const StabilizationStatus_OuterLoop::Enum(*)>(_a[1]))); break;
        case 5: _t->OuterLoop_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->outerLoopYawChanged((*reinterpret_cast< const StabilizationStatus_OuterLoop::Enum(*)>(_a[1]))); break;
        case 7: _t->OuterLoop_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->outerLoopThrustChanged((*reinterpret_cast< const StabilizationStatus_OuterLoop::Enum(*)>(_a[1]))); break;
        case 9: _t->OuterLoop_ThrustChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->innerLoopChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StabilizationStatus_InnerLoop::Enum(*)>(_a[2]))); break;
        case 11: _t->InnerLoopChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 12: _t->innerLoopRollChanged((*reinterpret_cast< const StabilizationStatus_InnerLoop::Enum(*)>(_a[1]))); break;
        case 13: _t->InnerLoop_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 14: _t->innerLoopPitchChanged((*reinterpret_cast< const StabilizationStatus_InnerLoop::Enum(*)>(_a[1]))); break;
        case 15: _t->InnerLoop_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 16: _t->innerLoopYawChanged((*reinterpret_cast< const StabilizationStatus_InnerLoop::Enum(*)>(_a[1]))); break;
        case 17: _t->InnerLoop_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->innerLoopThrustChanged((*reinterpret_cast< const StabilizationStatus_InnerLoop::Enum(*)>(_a[1]))); break;
        case 19: _t->InnerLoop_ThrustChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->setOuterLoop((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StabilizationStatus_OuterLoop::Enum(*)>(_a[2]))); break;
        case 21: _t->setOuterLoop((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 22: _t->setOuterLoopRoll((*reinterpret_cast< const StabilizationStatus_OuterLoop::Enum(*)>(_a[1]))); break;
        case 23: _t->setOuterLoop_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->setOuterLoopPitch((*reinterpret_cast< const StabilizationStatus_OuterLoop::Enum(*)>(_a[1]))); break;
        case 25: _t->setOuterLoop_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->setOuterLoopYaw((*reinterpret_cast< const StabilizationStatus_OuterLoop::Enum(*)>(_a[1]))); break;
        case 27: _t->setOuterLoop_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->setOuterLoopThrust((*reinterpret_cast< const StabilizationStatus_OuterLoop::Enum(*)>(_a[1]))); break;
        case 29: _t->setOuterLoop_Thrust((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->setInnerLoop((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StabilizationStatus_InnerLoop::Enum(*)>(_a[2]))); break;
        case 31: _t->setInnerLoop((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 32: _t->setInnerLoopRoll((*reinterpret_cast< const StabilizationStatus_InnerLoop::Enum(*)>(_a[1]))); break;
        case 33: _t->setInnerLoop_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->setInnerLoopPitch((*reinterpret_cast< const StabilizationStatus_InnerLoop::Enum(*)>(_a[1]))); break;
        case 35: _t->setInnerLoop_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->setInnerLoopYaw((*reinterpret_cast< const StabilizationStatus_InnerLoop::Enum(*)>(_a[1]))); break;
        case 37: _t->setInnerLoop_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->setInnerLoopThrust((*reinterpret_cast< const StabilizationStatus_InnerLoop::Enum(*)>(_a[1]))); break;
        case 39: _t->setInnerLoop_Thrust((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->emitNotifications(); break;
        case 41: { StabilizationStatus_OuterLoop::Enum _r = _t->outerLoop((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< StabilizationStatus_OuterLoop::Enum*>(_a[0]) = std::move(_r); }  break;
        case 42: { quint8 _r = _t->getOuterLoop((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 43: { quint8 _r = _t->getOuterLoop_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 44: { quint8 _r = _t->getOuterLoop_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 45: { quint8 _r = _t->getOuterLoop_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 46: { quint8 _r = _t->getOuterLoop_Thrust();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 47: { StabilizationStatus_InnerLoop::Enum _r = _t->innerLoop((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< StabilizationStatus_InnerLoop::Enum*>(_a[0]) = std::move(_r); }  break;
        case 48: { quint8 _r = _t->getInnerLoop((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 49: { quint8 _r = _t->getInnerLoop_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 50: { quint8 _r = _t->getInnerLoop_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 51: { quint8 _r = _t->getInnerLoop_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 52: { quint8 _r = _t->getInnerLoop_Thrust();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StabilizationStatus::*)(quint32 , const StabilizationStatus_OuterLoop::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::outerLoopChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::OuterLoopChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(const StabilizationStatus_OuterLoop::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::outerLoopRollChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::OuterLoop_RollChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(const StabilizationStatus_OuterLoop::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::outerLoopPitchChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::OuterLoop_PitchChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(const StabilizationStatus_OuterLoop::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::outerLoopYawChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::OuterLoop_YawChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(const StabilizationStatus_OuterLoop::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::outerLoopThrustChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::OuterLoop_ThrustChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(quint32 , const StabilizationStatus_InnerLoop::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::innerLoopChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::InnerLoopChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(const StabilizationStatus_InnerLoop::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::innerLoopRollChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::InnerLoop_RollChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(const StabilizationStatus_InnerLoop::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::innerLoopPitchChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::InnerLoop_PitchChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(const StabilizationStatus_InnerLoop::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::innerLoopYawChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::InnerLoop_YawChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(const StabilizationStatus_InnerLoop::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::innerLoopThrustChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (StabilizationStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationStatus::InnerLoop_ThrustChanged)) {
                *result = 19;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StabilizationStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< StabilizationStatus_OuterLoop::Enum*>(_v) = _t->outerLoopRoll(); break;
        case 1: *reinterpret_cast< StabilizationStatus_OuterLoop::Enum*>(_v) = _t->outerLoopPitch(); break;
        case 2: *reinterpret_cast< StabilizationStatus_OuterLoop::Enum*>(_v) = _t->outerLoopYaw(); break;
        case 3: *reinterpret_cast< StabilizationStatus_OuterLoop::Enum*>(_v) = _t->outerLoopThrust(); break;
        case 4: *reinterpret_cast< StabilizationStatus_InnerLoop::Enum*>(_v) = _t->innerLoopRoll(); break;
        case 5: *reinterpret_cast< StabilizationStatus_InnerLoop::Enum*>(_v) = _t->innerLoopPitch(); break;
        case 6: *reinterpret_cast< StabilizationStatus_InnerLoop::Enum*>(_v) = _t->innerLoopYaw(); break;
        case 7: *reinterpret_cast< StabilizationStatus_InnerLoop::Enum*>(_v) = _t->innerLoopThrust(); break;
        case 8: *reinterpret_cast< quint8*>(_v) = _t->getOuterLoop_Roll(); break;
        case 9: *reinterpret_cast< quint8*>(_v) = _t->getOuterLoop_Pitch(); break;
        case 10: *reinterpret_cast< quint8*>(_v) = _t->getOuterLoop_Yaw(); break;
        case 11: *reinterpret_cast< quint8*>(_v) = _t->getOuterLoop_Thrust(); break;
        case 12: *reinterpret_cast< quint8*>(_v) = _t->getInnerLoop_Roll(); break;
        case 13: *reinterpret_cast< quint8*>(_v) = _t->getInnerLoop_Pitch(); break;
        case 14: *reinterpret_cast< quint8*>(_v) = _t->getInnerLoop_Yaw(); break;
        case 15: *reinterpret_cast< quint8*>(_v) = _t->getInnerLoop_Thrust(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StabilizationStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOuterLoopRoll(*reinterpret_cast< StabilizationStatus_OuterLoop::Enum*>(_v)); break;
        case 1: _t->setOuterLoopPitch(*reinterpret_cast< StabilizationStatus_OuterLoop::Enum*>(_v)); break;
        case 2: _t->setOuterLoopYaw(*reinterpret_cast< StabilizationStatus_OuterLoop::Enum*>(_v)); break;
        case 3: _t->setOuterLoopThrust(*reinterpret_cast< StabilizationStatus_OuterLoop::Enum*>(_v)); break;
        case 4: _t->setInnerLoopRoll(*reinterpret_cast< StabilizationStatus_InnerLoop::Enum*>(_v)); break;
        case 5: _t->setInnerLoopPitch(*reinterpret_cast< StabilizationStatus_InnerLoop::Enum*>(_v)); break;
        case 6: _t->setInnerLoopYaw(*reinterpret_cast< StabilizationStatus_InnerLoop::Enum*>(_v)); break;
        case 7: _t->setInnerLoopThrust(*reinterpret_cast< StabilizationStatus_InnerLoop::Enum*>(_v)); break;
        case 8: _t->setOuterLoop_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 9: _t->setOuterLoop_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 10: _t->setOuterLoop_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 11: _t->setOuterLoop_Thrust(*reinterpret_cast< quint8*>(_v)); break;
        case 12: _t->setInnerLoop_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 13: _t->setInnerLoop_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 14: _t->setInnerLoop_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 15: _t->setInnerLoop_Thrust(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_StabilizationStatus[] = {
        &StabilizationStatus_OuterLoop::staticMetaObject,
    &StabilizationStatus_InnerLoop::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject StabilizationStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_StabilizationStatus.data,
    qt_meta_data_StabilizationStatus,
    qt_static_metacall,
    qt_meta_extradata_StabilizationStatus,
    nullptr
} };


const QMetaObject *StabilizationStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int StabilizationStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 53)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 53;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StabilizationStatus::outerLoopChanged(quint32 _t1, const StabilizationStatus_OuterLoop::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StabilizationStatus::OuterLoopChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StabilizationStatus::outerLoopRollChanged(const StabilizationStatus_OuterLoop::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StabilizationStatus::OuterLoop_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StabilizationStatus::outerLoopPitchChanged(const StabilizationStatus_OuterLoop::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StabilizationStatus::OuterLoop_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StabilizationStatus::outerLoopYawChanged(const StabilizationStatus_OuterLoop::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StabilizationStatus::OuterLoop_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void StabilizationStatus::outerLoopThrustChanged(const StabilizationStatus_OuterLoop::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void StabilizationStatus::OuterLoop_ThrustChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void StabilizationStatus::innerLoopChanged(quint32 _t1, const StabilizationStatus_InnerLoop::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void StabilizationStatus::InnerLoopChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void StabilizationStatus::innerLoopRollChanged(const StabilizationStatus_InnerLoop::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void StabilizationStatus::InnerLoop_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void StabilizationStatus::innerLoopPitchChanged(const StabilizationStatus_InnerLoop::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void StabilizationStatus::InnerLoop_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void StabilizationStatus::innerLoopYawChanged(const StabilizationStatus_InnerLoop::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void StabilizationStatus::InnerLoop_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void StabilizationStatus::innerLoopThrustChanged(const StabilizationStatus_InnerLoop::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void StabilizationStatus::InnerLoop_ThrustChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
