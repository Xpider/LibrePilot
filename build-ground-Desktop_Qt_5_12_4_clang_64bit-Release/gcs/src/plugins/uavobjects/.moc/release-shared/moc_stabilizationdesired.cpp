/****************************************************************************
** Meta object code from reading C++ file 'stabilizationdesired.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stabilizationdesired.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stabilizationdesired.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StabilizationDesiredConstants_t {
    QByteArrayData data[3];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationDesiredConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationDesiredConstants_t qt_meta_stringdata_StabilizationDesiredConstants = {
    {
QT_MOC_LITERAL(0, 0, 29), // "StabilizationDesiredConstants"
QT_MOC_LITERAL(1, 30, 4), // "Enum"
QT_MOC_LITERAL(2, 35, 22) // "StabilizationModeCount"

    },
    "StabilizationDesiredConstants\0Enum\0"
    "StabilizationModeCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationDesiredConstants[] = {

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
       2, uint(StabilizationDesiredConstants::StabilizationModeCount),

       0        // eod
};

void StabilizationDesiredConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationDesiredConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationDesiredConstants.data,
    qt_meta_data_StabilizationDesiredConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationDesiredConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationDesiredConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationDesiredConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationDesiredConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationDesired_StabilizationMode_t {
    QByteArrayData data[15];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationDesired_StabilizationMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationDesired_StabilizationMode_t qt_meta_stringdata_StabilizationDesired_StabilizationMode = {
    {
QT_MOC_LITERAL(0, 0, 38), // "StabilizationDesired_Stabiliz..."
QT_MOC_LITERAL(1, 39, 4), // "Enum"
QT_MOC_LITERAL(2, 44, 6), // "Manual"
QT_MOC_LITERAL(3, 51, 4), // "Rate"
QT_MOC_LITERAL(4, 56, 11), // "RateTrainer"
QT_MOC_LITERAL(5, 68, 8), // "Attitude"
QT_MOC_LITERAL(6, 77, 8), // "AxisLock"
QT_MOC_LITERAL(7, 86, 12), // "WeakLeveling"
QT_MOC_LITERAL(8, 99, 10), // "VirtualBar"
QT_MOC_LITERAL(9, 110, 4), // "Acro"
QT_MOC_LITERAL(10, 115, 9), // "Rattitude"
QT_MOC_LITERAL(11, 125, 12), // "AltitudeHold"
QT_MOC_LITERAL(12, 138, 13), // "AltitudeVario"
QT_MOC_LITERAL(13, 152, 13), // "CruiseControl"
QT_MOC_LITERAL(14, 166, 11) // "SystemIdent"

    },
    "StabilizationDesired_StabilizationMode\0"
    "Enum\0Manual\0Rate\0RateTrainer\0Attitude\0"
    "AxisLock\0WeakLeveling\0VirtualBar\0Acro\0"
    "Rattitude\0AltitudeHold\0AltitudeVario\0"
    "CruiseControl\0SystemIdent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationDesired_StabilizationMode[] = {

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
       1,    1, 0x0,   13,   19,

 // enum data: key, value
       2, uint(StabilizationDesired_StabilizationMode::Manual),
       3, uint(StabilizationDesired_StabilizationMode::Rate),
       4, uint(StabilizationDesired_StabilizationMode::RateTrainer),
       5, uint(StabilizationDesired_StabilizationMode::Attitude),
       6, uint(StabilizationDesired_StabilizationMode::AxisLock),
       7, uint(StabilizationDesired_StabilizationMode::WeakLeveling),
       8, uint(StabilizationDesired_StabilizationMode::VirtualBar),
       9, uint(StabilizationDesired_StabilizationMode::Acro),
      10, uint(StabilizationDesired_StabilizationMode::Rattitude),
      11, uint(StabilizationDesired_StabilizationMode::AltitudeHold),
      12, uint(StabilizationDesired_StabilizationMode::AltitudeVario),
      13, uint(StabilizationDesired_StabilizationMode::CruiseControl),
      14, uint(StabilizationDesired_StabilizationMode::SystemIdent),

       0        // eod
};

void StabilizationDesired_StabilizationMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationDesired_StabilizationMode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationDesired_StabilizationMode.data,
    qt_meta_data_StabilizationDesired_StabilizationMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationDesired_StabilizationMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationDesired_StabilizationMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationDesired_StabilizationMode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationDesired_StabilizationMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationDesired_t {
    QByteArrayData data[63];
    char stringdata0[1157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationDesired_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationDesired_t qt_meta_stringdata_StabilizationDesired = {
    {
QT_MOC_LITERAL(0, 0, 20), // "StabilizationDesired"
QT_MOC_LITERAL(1, 21, 11), // "rollChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "value"
QT_MOC_LITERAL(4, 40, 11), // "RollChanged"
QT_MOC_LITERAL(5, 52, 12), // "pitchChanged"
QT_MOC_LITERAL(6, 65, 12), // "PitchChanged"
QT_MOC_LITERAL(7, 78, 10), // "yawChanged"
QT_MOC_LITERAL(8, 89, 10), // "YawChanged"
QT_MOC_LITERAL(9, 100, 13), // "thrustChanged"
QT_MOC_LITERAL(10, 114, 13), // "ThrustChanged"
QT_MOC_LITERAL(11, 128, 24), // "stabilizationModeChanged"
QT_MOC_LITERAL(12, 153, 5), // "index"
QT_MOC_LITERAL(13, 159, 44), // "StabilizationDesired_Stabiliz..."
QT_MOC_LITERAL(14, 204, 24), // "StabilizationModeChanged"
QT_MOC_LITERAL(15, 229, 28), // "stabilizationModeRollChanged"
QT_MOC_LITERAL(16, 258, 29), // "StabilizationMode_RollChanged"
QT_MOC_LITERAL(17, 288, 29), // "stabilizationModePitchChanged"
QT_MOC_LITERAL(18, 318, 30), // "StabilizationMode_PitchChanged"
QT_MOC_LITERAL(19, 349, 27), // "stabilizationModeYawChanged"
QT_MOC_LITERAL(20, 377, 28), // "StabilizationMode_YawChanged"
QT_MOC_LITERAL(21, 406, 30), // "stabilizationModeThrustChanged"
QT_MOC_LITERAL(22, 437, 31), // "StabilizationMode_ThrustChanged"
QT_MOC_LITERAL(23, 469, 7), // "setRoll"
QT_MOC_LITERAL(24, 477, 8), // "setPitch"
QT_MOC_LITERAL(25, 486, 6), // "setYaw"
QT_MOC_LITERAL(26, 493, 9), // "setThrust"
QT_MOC_LITERAL(27, 503, 20), // "setStabilizationMode"
QT_MOC_LITERAL(28, 524, 24), // "setStabilizationModeRoll"
QT_MOC_LITERAL(29, 549, 25), // "setStabilizationMode_Roll"
QT_MOC_LITERAL(30, 575, 25), // "setStabilizationModePitch"
QT_MOC_LITERAL(31, 601, 26), // "setStabilizationMode_Pitch"
QT_MOC_LITERAL(32, 628, 23), // "setStabilizationModeYaw"
QT_MOC_LITERAL(33, 652, 24), // "setStabilizationMode_Yaw"
QT_MOC_LITERAL(34, 677, 26), // "setStabilizationModeThrust"
QT_MOC_LITERAL(35, 704, 27), // "setStabilizationMode_Thrust"
QT_MOC_LITERAL(36, 732, 17), // "emitNotifications"
QT_MOC_LITERAL(37, 750, 7), // "getRoll"
QT_MOC_LITERAL(38, 758, 8), // "getPitch"
QT_MOC_LITERAL(39, 767, 6), // "getYaw"
QT_MOC_LITERAL(40, 774, 9), // "getThrust"
QT_MOC_LITERAL(41, 784, 17), // "stabilizationMode"
QT_MOC_LITERAL(42, 802, 20), // "getStabilizationMode"
QT_MOC_LITERAL(43, 823, 25), // "getStabilizationMode_Roll"
QT_MOC_LITERAL(44, 849, 26), // "getStabilizationMode_Pitch"
QT_MOC_LITERAL(45, 876, 24), // "getStabilizationMode_Yaw"
QT_MOC_LITERAL(46, 901, 27), // "getStabilizationMode_Thrust"
QT_MOC_LITERAL(47, 929, 4), // "roll"
QT_MOC_LITERAL(48, 934, 5), // "pitch"
QT_MOC_LITERAL(49, 940, 3), // "yaw"
QT_MOC_LITERAL(50, 944, 6), // "thrust"
QT_MOC_LITERAL(51, 951, 21), // "stabilizationModeRoll"
QT_MOC_LITERAL(52, 973, 22), // "stabilizationModePitch"
QT_MOC_LITERAL(53, 996, 20), // "stabilizationModeYaw"
QT_MOC_LITERAL(54, 1017, 23), // "stabilizationModeThrust"
QT_MOC_LITERAL(55, 1041, 4), // "Roll"
QT_MOC_LITERAL(56, 1046, 5), // "Pitch"
QT_MOC_LITERAL(57, 1052, 3), // "Yaw"
QT_MOC_LITERAL(58, 1056, 6), // "Thrust"
QT_MOC_LITERAL(59, 1063, 22), // "StabilizationMode_Roll"
QT_MOC_LITERAL(60, 1086, 23), // "StabilizationMode_Pitch"
QT_MOC_LITERAL(61, 1110, 21), // "StabilizationMode_Yaw"
QT_MOC_LITERAL(62, 1132, 24) // "StabilizationMode_Thrust"

    },
    "StabilizationDesired\0rollChanged\0\0"
    "value\0RollChanged\0pitchChanged\0"
    "PitchChanged\0yawChanged\0YawChanged\0"
    "thrustChanged\0ThrustChanged\0"
    "stabilizationModeChanged\0index\0"
    "StabilizationDesired_StabilizationMode::Enum\0"
    "StabilizationModeChanged\0"
    "stabilizationModeRollChanged\0"
    "StabilizationMode_RollChanged\0"
    "stabilizationModePitchChanged\0"
    "StabilizationMode_PitchChanged\0"
    "stabilizationModeYawChanged\0"
    "StabilizationMode_YawChanged\0"
    "stabilizationModeThrustChanged\0"
    "StabilizationMode_ThrustChanged\0setRoll\0"
    "setPitch\0setYaw\0setThrust\0"
    "setStabilizationMode\0setStabilizationModeRoll\0"
    "setStabilizationMode_Roll\0"
    "setStabilizationModePitch\0"
    "setStabilizationMode_Pitch\0"
    "setStabilizationModeYaw\0"
    "setStabilizationMode_Yaw\0"
    "setStabilizationModeThrust\0"
    "setStabilizationMode_Thrust\0"
    "emitNotifications\0getRoll\0getPitch\0"
    "getYaw\0getThrust\0stabilizationMode\0"
    "getStabilizationMode\0getStabilizationMode_Roll\0"
    "getStabilizationMode_Pitch\0"
    "getStabilizationMode_Yaw\0"
    "getStabilizationMode_Thrust\0roll\0pitch\0"
    "yaw\0thrust\0stabilizationModeRoll\0"
    "stabilizationModePitch\0stabilizationModeYaw\0"
    "stabilizationModeThrust\0Roll\0Pitch\0"
    "Yaw\0Thrust\0StabilizationMode_Roll\0"
    "StabilizationMode_Pitch\0StabilizationMode_Yaw\0"
    "StabilizationMode_Thrust"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationDesired[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
      16,  348, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  229,    2, 0x06 /* Public */,
       4,    1,  232,    2, 0x06 /* Public */,
       5,    1,  235,    2, 0x06 /* Public */,
       6,    1,  238,    2, 0x06 /* Public */,
       7,    1,  241,    2, 0x06 /* Public */,
       8,    1,  244,    2, 0x06 /* Public */,
       9,    1,  247,    2, 0x06 /* Public */,
      10,    1,  250,    2, 0x06 /* Public */,
      11,    2,  253,    2, 0x06 /* Public */,
      14,    2,  258,    2, 0x06 /* Public */,
      15,    1,  263,    2, 0x06 /* Public */,
      16,    1,  266,    2, 0x06 /* Public */,
      17,    1,  269,    2, 0x06 /* Public */,
      18,    1,  272,    2, 0x06 /* Public */,
      19,    1,  275,    2, 0x06 /* Public */,
      20,    1,  278,    2, 0x06 /* Public */,
      21,    1,  281,    2, 0x06 /* Public */,
      22,    1,  284,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    1,  287,    2, 0x0a /* Public */,
      24,    1,  290,    2, 0x0a /* Public */,
      25,    1,  293,    2, 0x0a /* Public */,
      26,    1,  296,    2, 0x0a /* Public */,
      27,    2,  299,    2, 0x0a /* Public */,
      27,    2,  304,    2, 0x0a /* Public */,
      28,    1,  309,    2, 0x0a /* Public */,
      29,    1,  312,    2, 0x0a /* Public */,
      30,    1,  315,    2, 0x0a /* Public */,
      31,    1,  318,    2, 0x0a /* Public */,
      32,    1,  321,    2, 0x0a /* Public */,
      33,    1,  324,    2, 0x0a /* Public */,
      34,    1,  327,    2, 0x0a /* Public */,
      35,    1,  330,    2, 0x0a /* Public */,
      36,    0,  333,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      37,    0,  334,    2, 0x02 /* Public */,
      38,    0,  335,    2, 0x02 /* Public */,
      39,    0,  336,    2, 0x02 /* Public */,
      40,    0,  337,    2, 0x02 /* Public */,
      41,    1,  338,    2, 0x02 /* Public */,
      42,    1,  341,    2, 0x02 /* Public */,
      43,    0,  344,    2, 0x02 /* Public */,
      44,    0,  345,    2, 0x02 /* Public */,
      45,    0,  346,    2, 0x02 /* Public */,
      46,    0,  347,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 13,   12,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   12,    3,
    QMetaType::Void, 0x80000000 | 13,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 13,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 13,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 13,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 13,   12,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   12,    3,
    QMetaType::Void, 0x80000000 | 13,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 13,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 13,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 13,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    0x80000000 | 13, QMetaType::UInt,   12,
    QMetaType::UChar, QMetaType::UInt,   12,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      47, QMetaType::Float, 0x00495103,
      48, QMetaType::Float, 0x00495103,
      49, QMetaType::Float, 0x00495103,
      50, QMetaType::Float, 0x00495103,
      51, 0x80000000 | 13, 0x0049510b,
      52, 0x80000000 | 13, 0x0049510b,
      53, 0x80000000 | 13, 0x0049510b,
      54, 0x80000000 | 13, 0x0049510b,
      55, QMetaType::Float, 0x00495103,
      56, QMetaType::Float, 0x00495103,
      57, QMetaType::Float, 0x00495103,
      58, QMetaType::Float, 0x00495103,
      59, QMetaType::UChar, 0x00495103,
      60, QMetaType::UChar, 0x00495103,
      61, QMetaType::UChar, 0x00495103,
      62, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
      10,
      12,
      14,
      16,
       1,
       3,
       5,
       7,
      11,
      13,
      15,
      17,

       0        // eod
};

void StabilizationDesired::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StabilizationDesired *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->pitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->yawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->thrustChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->ThrustChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->stabilizationModeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StabilizationDesired_StabilizationMode::Enum(*)>(_a[2]))); break;
        case 9: _t->StabilizationModeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 10: _t->stabilizationModeRollChanged((*reinterpret_cast< const StabilizationDesired_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 11: _t->StabilizationMode_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->stabilizationModePitchChanged((*reinterpret_cast< const StabilizationDesired_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 13: _t->StabilizationMode_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 14: _t->stabilizationModeYawChanged((*reinterpret_cast< const StabilizationDesired_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 15: _t->StabilizationMode_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 16: _t->stabilizationModeThrustChanged((*reinterpret_cast< const StabilizationDesired_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 17: _t->StabilizationMode_ThrustChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->setRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->setPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 20: _t->setYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->setThrust((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 22: _t->setStabilizationMode((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StabilizationDesired_StabilizationMode::Enum(*)>(_a[2]))); break;
        case 23: _t->setStabilizationMode((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 24: _t->setStabilizationModeRoll((*reinterpret_cast< const StabilizationDesired_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 25: _t->setStabilizationMode_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->setStabilizationModePitch((*reinterpret_cast< const StabilizationDesired_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 27: _t->setStabilizationMode_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->setStabilizationModeYaw((*reinterpret_cast< const StabilizationDesired_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 29: _t->setStabilizationMode_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->setStabilizationModeThrust((*reinterpret_cast< const StabilizationDesired_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 31: _t->setStabilizationMode_Thrust((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->emitNotifications(); break;
        case 33: { float _r = _t->getRoll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 34: { float _r = _t->getPitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 35: { float _r = _t->getYaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 36: { float _r = _t->getThrust();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 37: { StabilizationDesired_StabilizationMode::Enum _r = _t->stabilizationMode((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< StabilizationDesired_StabilizationMode::Enum*>(_a[0]) = std::move(_r); }  break;
        case 38: { quint8 _r = _t->getStabilizationMode((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 39: { quint8 _r = _t->getStabilizationMode_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 40: { quint8 _r = _t->getStabilizationMode_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 41: { quint8 _r = _t->getStabilizationMode_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 42: { quint8 _r = _t->getStabilizationMode_Thrust();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StabilizationDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::rollChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::RollChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::pitchChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::PitchChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::yawChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::YawChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::thrustChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::ThrustChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(quint32 , const StabilizationDesired_StabilizationMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::stabilizationModeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::StabilizationModeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(const StabilizationDesired_StabilizationMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::stabilizationModeRollChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::StabilizationMode_RollChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(const StabilizationDesired_StabilizationMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::stabilizationModePitchChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::StabilizationMode_PitchChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(const StabilizationDesired_StabilizationMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::stabilizationModeYawChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::StabilizationMode_YawChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(const StabilizationDesired_StabilizationMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::stabilizationModeThrustChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (StabilizationDesired::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationDesired::StabilizationMode_ThrustChanged)) {
                *result = 17;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StabilizationDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->roll(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->pitch(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->yaw(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->thrust(); break;
        case 4: *reinterpret_cast< StabilizationDesired_StabilizationMode::Enum*>(_v) = _t->stabilizationModeRoll(); break;
        case 5: *reinterpret_cast< StabilizationDesired_StabilizationMode::Enum*>(_v) = _t->stabilizationModePitch(); break;
        case 6: *reinterpret_cast< StabilizationDesired_StabilizationMode::Enum*>(_v) = _t->stabilizationModeYaw(); break;
        case 7: *reinterpret_cast< StabilizationDesired_StabilizationMode::Enum*>(_v) = _t->stabilizationModeThrust(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getRoll(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getPitch(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getYaw(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getThrust(); break;
        case 12: *reinterpret_cast< quint8*>(_v) = _t->getStabilizationMode_Roll(); break;
        case 13: *reinterpret_cast< quint8*>(_v) = _t->getStabilizationMode_Pitch(); break;
        case 14: *reinterpret_cast< quint8*>(_v) = _t->getStabilizationMode_Yaw(); break;
        case 15: *reinterpret_cast< quint8*>(_v) = _t->getStabilizationMode_Thrust(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StabilizationDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoll(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setPitch(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setThrust(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setStabilizationModeRoll(*reinterpret_cast< StabilizationDesired_StabilizationMode::Enum*>(_v)); break;
        case 5: _t->setStabilizationModePitch(*reinterpret_cast< StabilizationDesired_StabilizationMode::Enum*>(_v)); break;
        case 6: _t->setStabilizationModeYaw(*reinterpret_cast< StabilizationDesired_StabilizationMode::Enum*>(_v)); break;
        case 7: _t->setStabilizationModeThrust(*reinterpret_cast< StabilizationDesired_StabilizationMode::Enum*>(_v)); break;
        case 8: _t->setRoll(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setPitch(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setThrust(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setStabilizationMode_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 13: _t->setStabilizationMode_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 14: _t->setStabilizationMode_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 15: _t->setStabilizationMode_Thrust(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_StabilizationDesired[] = {
        &StabilizationDesired_StabilizationMode::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject StabilizationDesired::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_StabilizationDesired.data,
    qt_meta_data_StabilizationDesired,
    qt_static_metacall,
    qt_meta_extradata_StabilizationDesired,
    nullptr
} };


const QMetaObject *StabilizationDesired::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationDesired::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationDesired.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int StabilizationDesired::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 43;
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
void StabilizationDesired::rollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StabilizationDesired::RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StabilizationDesired::pitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StabilizationDesired::PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StabilizationDesired::yawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StabilizationDesired::YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StabilizationDesired::thrustChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StabilizationDesired::ThrustChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void StabilizationDesired::stabilizationModeChanged(quint32 _t1, const StabilizationDesired_StabilizationMode::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void StabilizationDesired::StabilizationModeChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void StabilizationDesired::stabilizationModeRollChanged(const StabilizationDesired_StabilizationMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void StabilizationDesired::StabilizationMode_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void StabilizationDesired::stabilizationModePitchChanged(const StabilizationDesired_StabilizationMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void StabilizationDesired::StabilizationMode_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void StabilizationDesired::stabilizationModeYawChanged(const StabilizationDesired_StabilizationMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void StabilizationDesired::StabilizationMode_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void StabilizationDesired::stabilizationModeThrustChanged(const StabilizationDesired_StabilizationMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void StabilizationDesired::StabilizationMode_ThrustChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
