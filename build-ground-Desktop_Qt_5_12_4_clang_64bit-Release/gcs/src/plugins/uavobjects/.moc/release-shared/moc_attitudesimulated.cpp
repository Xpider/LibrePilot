/****************************************************************************
** Meta object code from reading C++ file 'attitudesimulated.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../attitudesimulated.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attitudesimulated.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AttitudeSimulatedConstants_t {
    QByteArrayData data[2];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttitudeSimulatedConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttitudeSimulatedConstants_t qt_meta_stringdata_AttitudeSimulatedConstants = {
    {
QT_MOC_LITERAL(0, 0, 26), // "AttitudeSimulatedConstants"
QT_MOC_LITERAL(1, 27, 4) // "Enum"

    },
    "AttitudeSimulatedConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttitudeSimulatedConstants[] = {

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

void AttitudeSimulatedConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AttitudeSimulatedConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AttitudeSimulatedConstants.data,
    qt_meta_data_AttitudeSimulatedConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AttitudeSimulatedConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttitudeSimulatedConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttitudeSimulatedConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AttitudeSimulatedConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AttitudeSimulated_t {
    QByteArrayData data[95];
    char stringdata0[1175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttitudeSimulated_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttitudeSimulated_t qt_meta_stringdata_AttitudeSimulated = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AttitudeSimulated"
QT_MOC_LITERAL(1, 18, 9), // "q1Changed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "value"
QT_MOC_LITERAL(4, 35, 9), // "q2Changed"
QT_MOC_LITERAL(5, 45, 9), // "q3Changed"
QT_MOC_LITERAL(6, 55, 9), // "q4Changed"
QT_MOC_LITERAL(7, 65, 11), // "rollChanged"
QT_MOC_LITERAL(8, 77, 11), // "RollChanged"
QT_MOC_LITERAL(9, 89, 12), // "pitchChanged"
QT_MOC_LITERAL(10, 102, 12), // "PitchChanged"
QT_MOC_LITERAL(11, 115, 10), // "yawChanged"
QT_MOC_LITERAL(12, 126, 10), // "YawChanged"
QT_MOC_LITERAL(13, 137, 15), // "velocityChanged"
QT_MOC_LITERAL(14, 153, 5), // "index"
QT_MOC_LITERAL(15, 159, 15), // "VelocityChanged"
QT_MOC_LITERAL(16, 175, 20), // "velocityNorthChanged"
QT_MOC_LITERAL(17, 196, 21), // "Velocity_NorthChanged"
QT_MOC_LITERAL(18, 218, 19), // "velocityEastChanged"
QT_MOC_LITERAL(19, 238, 20), // "Velocity_EastChanged"
QT_MOC_LITERAL(20, 259, 19), // "velocityDownChanged"
QT_MOC_LITERAL(21, 279, 20), // "Velocity_DownChanged"
QT_MOC_LITERAL(22, 300, 15), // "positionChanged"
QT_MOC_LITERAL(23, 316, 15), // "PositionChanged"
QT_MOC_LITERAL(24, 332, 20), // "positionNorthChanged"
QT_MOC_LITERAL(25, 353, 21), // "Position_NorthChanged"
QT_MOC_LITERAL(26, 375, 19), // "positionEastChanged"
QT_MOC_LITERAL(27, 395, 20), // "Position_EastChanged"
QT_MOC_LITERAL(28, 416, 19), // "positionDownChanged"
QT_MOC_LITERAL(29, 436, 20), // "Position_DownChanged"
QT_MOC_LITERAL(30, 457, 5), // "setQ1"
QT_MOC_LITERAL(31, 463, 5), // "setq1"
QT_MOC_LITERAL(32, 469, 5), // "setQ2"
QT_MOC_LITERAL(33, 475, 5), // "setq2"
QT_MOC_LITERAL(34, 481, 5), // "setQ3"
QT_MOC_LITERAL(35, 487, 5), // "setq3"
QT_MOC_LITERAL(36, 493, 5), // "setQ4"
QT_MOC_LITERAL(37, 499, 5), // "setq4"
QT_MOC_LITERAL(38, 505, 7), // "setRoll"
QT_MOC_LITERAL(39, 513, 8), // "setPitch"
QT_MOC_LITERAL(40, 522, 6), // "setYaw"
QT_MOC_LITERAL(41, 529, 11), // "setVelocity"
QT_MOC_LITERAL(42, 541, 16), // "setVelocityNorth"
QT_MOC_LITERAL(43, 558, 17), // "setVelocity_North"
QT_MOC_LITERAL(44, 576, 15), // "setVelocityEast"
QT_MOC_LITERAL(45, 592, 16), // "setVelocity_East"
QT_MOC_LITERAL(46, 609, 15), // "setVelocityDown"
QT_MOC_LITERAL(47, 625, 16), // "setVelocity_Down"
QT_MOC_LITERAL(48, 642, 11), // "setPosition"
QT_MOC_LITERAL(49, 654, 16), // "setPositionNorth"
QT_MOC_LITERAL(50, 671, 17), // "setPosition_North"
QT_MOC_LITERAL(51, 689, 15), // "setPositionEast"
QT_MOC_LITERAL(52, 705, 16), // "setPosition_East"
QT_MOC_LITERAL(53, 722, 15), // "setPositionDown"
QT_MOC_LITERAL(54, 738, 16), // "setPosition_Down"
QT_MOC_LITERAL(55, 755, 17), // "emitNotifications"
QT_MOC_LITERAL(56, 773, 5), // "getq1"
QT_MOC_LITERAL(57, 779, 5), // "getq2"
QT_MOC_LITERAL(58, 785, 5), // "getq3"
QT_MOC_LITERAL(59, 791, 5), // "getq4"
QT_MOC_LITERAL(60, 797, 7), // "getRoll"
QT_MOC_LITERAL(61, 805, 8), // "getPitch"
QT_MOC_LITERAL(62, 814, 6), // "getYaw"
QT_MOC_LITERAL(63, 821, 8), // "velocity"
QT_MOC_LITERAL(64, 830, 11), // "getVelocity"
QT_MOC_LITERAL(65, 842, 17), // "getVelocity_North"
QT_MOC_LITERAL(66, 860, 16), // "getVelocity_East"
QT_MOC_LITERAL(67, 877, 16), // "getVelocity_Down"
QT_MOC_LITERAL(68, 894, 8), // "position"
QT_MOC_LITERAL(69, 903, 11), // "getPosition"
QT_MOC_LITERAL(70, 915, 17), // "getPosition_North"
QT_MOC_LITERAL(71, 933, 16), // "getPosition_East"
QT_MOC_LITERAL(72, 950, 16), // "getPosition_Down"
QT_MOC_LITERAL(73, 967, 2), // "q1"
QT_MOC_LITERAL(74, 970, 2), // "q2"
QT_MOC_LITERAL(75, 973, 2), // "q3"
QT_MOC_LITERAL(76, 976, 2), // "q4"
QT_MOC_LITERAL(77, 979, 4), // "roll"
QT_MOC_LITERAL(78, 984, 5), // "pitch"
QT_MOC_LITERAL(79, 990, 3), // "yaw"
QT_MOC_LITERAL(80, 994, 13), // "velocityNorth"
QT_MOC_LITERAL(81, 1008, 12), // "velocityEast"
QT_MOC_LITERAL(82, 1021, 12), // "velocityDown"
QT_MOC_LITERAL(83, 1034, 13), // "positionNorth"
QT_MOC_LITERAL(84, 1048, 12), // "positionEast"
QT_MOC_LITERAL(85, 1061, 12), // "positionDown"
QT_MOC_LITERAL(86, 1074, 4), // "Roll"
QT_MOC_LITERAL(87, 1079, 5), // "Pitch"
QT_MOC_LITERAL(88, 1085, 3), // "Yaw"
QT_MOC_LITERAL(89, 1089, 14), // "Velocity_North"
QT_MOC_LITERAL(90, 1104, 13), // "Velocity_East"
QT_MOC_LITERAL(91, 1118, 13), // "Velocity_Down"
QT_MOC_LITERAL(92, 1132, 14), // "Position_North"
QT_MOC_LITERAL(93, 1147, 13), // "Position_East"
QT_MOC_LITERAL(94, 1161, 13) // "Position_Down"

    },
    "AttitudeSimulated\0q1Changed\0\0value\0"
    "q2Changed\0q3Changed\0q4Changed\0rollChanged\0"
    "RollChanged\0pitchChanged\0PitchChanged\0"
    "yawChanged\0YawChanged\0velocityChanged\0"
    "index\0VelocityChanged\0velocityNorthChanged\0"
    "Velocity_NorthChanged\0velocityEastChanged\0"
    "Velocity_EastChanged\0velocityDownChanged\0"
    "Velocity_DownChanged\0positionChanged\0"
    "PositionChanged\0positionNorthChanged\0"
    "Position_NorthChanged\0positionEastChanged\0"
    "Position_EastChanged\0positionDownChanged\0"
    "Position_DownChanged\0setQ1\0setq1\0setQ2\0"
    "setq2\0setQ3\0setq3\0setQ4\0setq4\0setRoll\0"
    "setPitch\0setYaw\0setVelocity\0"
    "setVelocityNorth\0setVelocity_North\0"
    "setVelocityEast\0setVelocity_East\0"
    "setVelocityDown\0setVelocity_Down\0"
    "setPosition\0setPositionNorth\0"
    "setPosition_North\0setPositionEast\0"
    "setPosition_East\0setPositionDown\0"
    "setPosition_Down\0emitNotifications\0"
    "getq1\0getq2\0getq3\0getq4\0getRoll\0"
    "getPitch\0getYaw\0velocity\0getVelocity\0"
    "getVelocity_North\0getVelocity_East\0"
    "getVelocity_Down\0position\0getPosition\0"
    "getPosition_North\0getPosition_East\0"
    "getPosition_Down\0q1\0q2\0q3\0q4\0roll\0"
    "pitch\0yaw\0velocityNorth\0velocityEast\0"
    "velocityDown\0positionNorth\0positionEast\0"
    "positionDown\0Roll\0Pitch\0Yaw\0Velocity_North\0"
    "Velocity_East\0Velocity_Down\0Position_North\0"
    "Position_East\0Position_Down"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttitudeSimulated[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      69,   14, // methods
      22,  550, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  359,    2, 0x06 /* Public */,
       4,    1,  362,    2, 0x06 /* Public */,
       5,    1,  365,    2, 0x06 /* Public */,
       6,    1,  368,    2, 0x06 /* Public */,
       7,    1,  371,    2, 0x06 /* Public */,
       8,    1,  374,    2, 0x06 /* Public */,
       9,    1,  377,    2, 0x06 /* Public */,
      10,    1,  380,    2, 0x06 /* Public */,
      11,    1,  383,    2, 0x06 /* Public */,
      12,    1,  386,    2, 0x06 /* Public */,
      13,    2,  389,    2, 0x06 /* Public */,
      15,    2,  394,    2, 0x06 /* Public */,
      16,    1,  399,    2, 0x06 /* Public */,
      17,    1,  402,    2, 0x06 /* Public */,
      18,    1,  405,    2, 0x06 /* Public */,
      19,    1,  408,    2, 0x06 /* Public */,
      20,    1,  411,    2, 0x06 /* Public */,
      21,    1,  414,    2, 0x06 /* Public */,
      22,    2,  417,    2, 0x06 /* Public */,
      23,    2,  422,    2, 0x06 /* Public */,
      24,    1,  427,    2, 0x06 /* Public */,
      25,    1,  430,    2, 0x06 /* Public */,
      26,    1,  433,    2, 0x06 /* Public */,
      27,    1,  436,    2, 0x06 /* Public */,
      28,    1,  439,    2, 0x06 /* Public */,
      29,    1,  442,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    1,  445,    2, 0x0a /* Public */,
      31,    1,  448,    2, 0x0a /* Public */,
      32,    1,  451,    2, 0x0a /* Public */,
      33,    1,  454,    2, 0x0a /* Public */,
      34,    1,  457,    2, 0x0a /* Public */,
      35,    1,  460,    2, 0x0a /* Public */,
      36,    1,  463,    2, 0x0a /* Public */,
      37,    1,  466,    2, 0x0a /* Public */,
      38,    1,  469,    2, 0x0a /* Public */,
      39,    1,  472,    2, 0x0a /* Public */,
      40,    1,  475,    2, 0x0a /* Public */,
      41,    2,  478,    2, 0x0a /* Public */,
      42,    1,  483,    2, 0x0a /* Public */,
      43,    1,  486,    2, 0x0a /* Public */,
      44,    1,  489,    2, 0x0a /* Public */,
      45,    1,  492,    2, 0x0a /* Public */,
      46,    1,  495,    2, 0x0a /* Public */,
      47,    1,  498,    2, 0x0a /* Public */,
      48,    2,  501,    2, 0x0a /* Public */,
      49,    1,  506,    2, 0x0a /* Public */,
      50,    1,  509,    2, 0x0a /* Public */,
      51,    1,  512,    2, 0x0a /* Public */,
      52,    1,  515,    2, 0x0a /* Public */,
      53,    1,  518,    2, 0x0a /* Public */,
      54,    1,  521,    2, 0x0a /* Public */,
      55,    0,  524,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      56,    0,  525,    2, 0x02 /* Public */,
      57,    0,  526,    2, 0x02 /* Public */,
      58,    0,  527,    2, 0x02 /* Public */,
      59,    0,  528,    2, 0x02 /* Public */,
      60,    0,  529,    2, 0x02 /* Public */,
      61,    0,  530,    2, 0x02 /* Public */,
      62,    0,  531,    2, 0x02 /* Public */,
      63,    1,  532,    2, 0x02 /* Public */,
      64,    1,  535,    2, 0x02 /* Public */,
      65,    0,  538,    2, 0x02 /* Public */,
      66,    0,  539,    2, 0x02 /* Public */,
      67,    0,  540,    2, 0x02 /* Public */,
      68,    1,  541,    2, 0x02 /* Public */,
      69,    1,  544,    2, 0x02 /* Public */,
      70,    0,  547,    2, 0x02 /* Public */,
      71,    0,  548,    2, 0x02 /* Public */,
      72,    0,  549,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,

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
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,   14,    3,
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
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
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
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float, QMetaType::UInt,   14,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      73, QMetaType::Float, 0x00495103,
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
      86, QMetaType::Float, 0x00495103,
      87, QMetaType::Float, 0x00495103,
      88, QMetaType::Float, 0x00495103,
      89, QMetaType::Float, 0x00495103,
      90, QMetaType::Float, 0x00495103,
      91, QMetaType::Float, 0x00495103,
      92, QMetaType::Float, 0x00495103,
      93, QMetaType::Float, 0x00495103,
      94, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       6,
       8,
      12,
      14,
      16,
      20,
      22,
      24,
       5,
       7,
       9,
      13,
      15,
      17,
      21,
      23,
      25,

       0        // eod
};

void AttitudeSimulated::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AttitudeSimulated *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->q1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->q2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->q3Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->q4Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 4: _t->rollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->pitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->yawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->velocityChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 11: _t->VelocityChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 12: _t->velocityNorthChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->Velocity_NorthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->velocityEastChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->Velocity_EastChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->velocityDownChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->Velocity_DownChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->positionChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 19: _t->PositionChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 20: _t->positionNorthChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->Position_NorthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->positionEastChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->Position_EastChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->positionDownChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->Position_DownChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->setQ1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->setq1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->setQ2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 29: _t->setq2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->setQ3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 31: _t->setq3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 32: _t->setQ4((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 33: _t->setq4((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 34: _t->setRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->setPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 36: _t->setYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 37: _t->setVelocity((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 38: _t->setVelocityNorth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 39: _t->setVelocity_North((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->setVelocityEast((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 41: _t->setVelocity_East((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->setVelocityDown((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 43: _t->setVelocity_Down((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->setPosition((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 45: _t->setPositionNorth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 46: _t->setPosition_North((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 47: _t->setPositionEast((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 48: _t->setPosition_East((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 49: _t->setPositionDown((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 50: _t->setPosition_Down((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 51: _t->emitNotifications(); break;
        case 52: { float _r = _t->getq1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 53: { float _r = _t->getq2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 54: { float _r = _t->getq3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 55: { float _r = _t->getq4();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 56: { float _r = _t->getRoll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 57: { float _r = _t->getPitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 58: { float _r = _t->getYaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 59: { float _r = _t->velocity((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 60: { float _r = _t->getVelocity((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 61: { float _r = _t->getVelocity_North();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 62: { float _r = _t->getVelocity_East();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 63: { float _r = _t->getVelocity_Down();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 64: { float _r = _t->position((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 65: { float _r = _t->getPosition((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 66: { float _r = _t->getPosition_North();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 67: { float _r = _t->getPosition_East();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 68: { float _r = _t->getPosition_Down();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::q1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::q2Changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::q3Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::q4Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::rollChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::RollChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::pitchChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::PitchChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::yawChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::YawChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::velocityChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::VelocityChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::velocityNorthChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::Velocity_NorthChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::velocityEastChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::Velocity_EastChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::velocityDownChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::Velocity_DownChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::positionChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::PositionChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::positionNorthChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::Position_NorthChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::positionEastChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::Position_EastChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::positionDownChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (AttitudeSimulated::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSimulated::Position_DownChanged)) {
                *result = 25;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AttitudeSimulated *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->q1(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->q2(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->q3(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->q4(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->roll(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->pitch(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->yaw(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->velocityNorth(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->velocityEast(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->velocityDown(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->positionNorth(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->positionEast(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->positionDown(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getRoll(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getPitch(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getYaw(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getVelocity_North(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getVelocity_East(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getVelocity_Down(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getPosition_North(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getPosition_East(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getPosition_Down(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AttitudeSimulated *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setQ1(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setQ2(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setQ3(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setQ4(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setRoll(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setPitch(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setVelocityNorth(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setVelocityEast(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setVelocityDown(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setPositionNorth(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setPositionEast(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setPositionDown(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setRoll(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setPitch(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setVelocity_North(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setVelocity_East(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setVelocity_Down(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setPosition_North(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setPosition_East(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setPosition_Down(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AttitudeSimulated::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_AttitudeSimulated.data,
    qt_meta_data_AttitudeSimulated,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AttitudeSimulated::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttitudeSimulated::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttitudeSimulated.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AttitudeSimulated::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 69)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 69;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 22;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AttitudeSimulated::q1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AttitudeSimulated::q2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AttitudeSimulated::q3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AttitudeSimulated::q4Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AttitudeSimulated::rollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AttitudeSimulated::RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AttitudeSimulated::pitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AttitudeSimulated::PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AttitudeSimulated::yawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AttitudeSimulated::YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void AttitudeSimulated::velocityChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void AttitudeSimulated::VelocityChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void AttitudeSimulated::velocityNorthChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void AttitudeSimulated::Velocity_NorthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void AttitudeSimulated::velocityEastChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void AttitudeSimulated::Velocity_EastChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void AttitudeSimulated::velocityDownChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void AttitudeSimulated::Velocity_DownChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void AttitudeSimulated::positionChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void AttitudeSimulated::PositionChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void AttitudeSimulated::positionNorthChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void AttitudeSimulated::Position_NorthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void AttitudeSimulated::positionEastChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void AttitudeSimulated::Position_EastChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void AttitudeSimulated::positionDownChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void AttitudeSimulated::Position_DownChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
