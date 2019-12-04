/****************************************************************************
** Meta object code from reading C++ file 'ekfstatevariance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ekfstatevariance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ekfstatevariance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EKFStateVarianceConstants_t {
    QByteArrayData data[2];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EKFStateVarianceConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EKFStateVarianceConstants_t qt_meta_stringdata_EKFStateVarianceConstants = {
    {
QT_MOC_LITERAL(0, 0, 25), // "EKFStateVarianceConstants"
QT_MOC_LITERAL(1, 26, 4) // "Enum"

    },
    "EKFStateVarianceConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EKFStateVarianceConstants[] = {

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

void EKFStateVarianceConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EKFStateVarianceConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_EKFStateVarianceConstants.data,
    qt_meta_data_EKFStateVarianceConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EKFStateVarianceConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EKFStateVarianceConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EKFStateVarianceConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EKFStateVarianceConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EKFStateVariance_t {
    QByteArrayData data[101];
    char stringdata0[1619];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EKFStateVariance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EKFStateVariance_t qt_meta_stringdata_EKFStateVariance = {
    {
QT_MOC_LITERAL(0, 0, 16), // "EKFStateVariance"
QT_MOC_LITERAL(1, 17, 8), // "pChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "index"
QT_MOC_LITERAL(4, 33, 5), // "value"
QT_MOC_LITERAL(5, 39, 8), // "PChanged"
QT_MOC_LITERAL(6, 48, 21), // "pPositionNorthChanged"
QT_MOC_LITERAL(7, 70, 22), // "P_PositionNorthChanged"
QT_MOC_LITERAL(8, 93, 20), // "pPositionEastChanged"
QT_MOC_LITERAL(9, 114, 21), // "P_PositionEastChanged"
QT_MOC_LITERAL(10, 136, 20), // "pPositionDownChanged"
QT_MOC_LITERAL(11, 157, 21), // "P_PositionDownChanged"
QT_MOC_LITERAL(12, 179, 21), // "pVelocityNorthChanged"
QT_MOC_LITERAL(13, 201, 22), // "P_VelocityNorthChanged"
QT_MOC_LITERAL(14, 224, 20), // "pVelocityEastChanged"
QT_MOC_LITERAL(15, 245, 21), // "P_VelocityEastChanged"
QT_MOC_LITERAL(16, 267, 20), // "pVelocityDownChanged"
QT_MOC_LITERAL(17, 288, 21), // "P_VelocityDownChanged"
QT_MOC_LITERAL(18, 310, 18), // "pAttitudeQ1Changed"
QT_MOC_LITERAL(19, 329, 19), // "P_AttitudeQ1Changed"
QT_MOC_LITERAL(20, 349, 18), // "pAttitudeQ2Changed"
QT_MOC_LITERAL(21, 368, 19), // "P_AttitudeQ2Changed"
QT_MOC_LITERAL(22, 388, 18), // "pAttitudeQ3Changed"
QT_MOC_LITERAL(23, 407, 19), // "P_AttitudeQ3Changed"
QT_MOC_LITERAL(24, 427, 18), // "pAttitudeQ4Changed"
QT_MOC_LITERAL(25, 446, 19), // "P_AttitudeQ4Changed"
QT_MOC_LITERAL(26, 466, 18), // "pGyroDriftXChanged"
QT_MOC_LITERAL(27, 485, 19), // "P_GyroDriftXChanged"
QT_MOC_LITERAL(28, 505, 18), // "pGyroDriftYChanged"
QT_MOC_LITERAL(29, 524, 19), // "P_GyroDriftYChanged"
QT_MOC_LITERAL(30, 544, 18), // "pGyroDriftZChanged"
QT_MOC_LITERAL(31, 563, 19), // "P_GyroDriftZChanged"
QT_MOC_LITERAL(32, 583, 4), // "setP"
QT_MOC_LITERAL(33, 588, 17), // "setPPositionNorth"
QT_MOC_LITERAL(34, 606, 18), // "setP_PositionNorth"
QT_MOC_LITERAL(35, 625, 16), // "setPPositionEast"
QT_MOC_LITERAL(36, 642, 17), // "setP_PositionEast"
QT_MOC_LITERAL(37, 660, 16), // "setPPositionDown"
QT_MOC_LITERAL(38, 677, 17), // "setP_PositionDown"
QT_MOC_LITERAL(39, 695, 17), // "setPVelocityNorth"
QT_MOC_LITERAL(40, 713, 18), // "setP_VelocityNorth"
QT_MOC_LITERAL(41, 732, 16), // "setPVelocityEast"
QT_MOC_LITERAL(42, 749, 17), // "setP_VelocityEast"
QT_MOC_LITERAL(43, 767, 16), // "setPVelocityDown"
QT_MOC_LITERAL(44, 784, 17), // "setP_VelocityDown"
QT_MOC_LITERAL(45, 802, 14), // "setPAttitudeQ1"
QT_MOC_LITERAL(46, 817, 15), // "setP_AttitudeQ1"
QT_MOC_LITERAL(47, 833, 14), // "setPAttitudeQ2"
QT_MOC_LITERAL(48, 848, 15), // "setP_AttitudeQ2"
QT_MOC_LITERAL(49, 864, 14), // "setPAttitudeQ3"
QT_MOC_LITERAL(50, 879, 15), // "setP_AttitudeQ3"
QT_MOC_LITERAL(51, 895, 14), // "setPAttitudeQ4"
QT_MOC_LITERAL(52, 910, 15), // "setP_AttitudeQ4"
QT_MOC_LITERAL(53, 926, 14), // "setPGyroDriftX"
QT_MOC_LITERAL(54, 941, 15), // "setP_GyroDriftX"
QT_MOC_LITERAL(55, 957, 14), // "setPGyroDriftY"
QT_MOC_LITERAL(56, 972, 15), // "setP_GyroDriftY"
QT_MOC_LITERAL(57, 988, 14), // "setPGyroDriftZ"
QT_MOC_LITERAL(58, 1003, 15), // "setP_GyroDriftZ"
QT_MOC_LITERAL(59, 1019, 17), // "emitNotifications"
QT_MOC_LITERAL(60, 1037, 1), // "p"
QT_MOC_LITERAL(61, 1039, 4), // "getP"
QT_MOC_LITERAL(62, 1044, 18), // "getP_PositionNorth"
QT_MOC_LITERAL(63, 1063, 17), // "getP_PositionEast"
QT_MOC_LITERAL(64, 1081, 17), // "getP_PositionDown"
QT_MOC_LITERAL(65, 1099, 18), // "getP_VelocityNorth"
QT_MOC_LITERAL(66, 1118, 17), // "getP_VelocityEast"
QT_MOC_LITERAL(67, 1136, 17), // "getP_VelocityDown"
QT_MOC_LITERAL(68, 1154, 15), // "getP_AttitudeQ1"
QT_MOC_LITERAL(69, 1170, 15), // "getP_AttitudeQ2"
QT_MOC_LITERAL(70, 1186, 15), // "getP_AttitudeQ3"
QT_MOC_LITERAL(71, 1202, 15), // "getP_AttitudeQ4"
QT_MOC_LITERAL(72, 1218, 15), // "getP_GyroDriftX"
QT_MOC_LITERAL(73, 1234, 15), // "getP_GyroDriftY"
QT_MOC_LITERAL(74, 1250, 15), // "getP_GyroDriftZ"
QT_MOC_LITERAL(75, 1266, 14), // "pPositionNorth"
QT_MOC_LITERAL(76, 1281, 13), // "pPositionEast"
QT_MOC_LITERAL(77, 1295, 13), // "pPositionDown"
QT_MOC_LITERAL(78, 1309, 14), // "pVelocityNorth"
QT_MOC_LITERAL(79, 1324, 13), // "pVelocityEast"
QT_MOC_LITERAL(80, 1338, 13), // "pVelocityDown"
QT_MOC_LITERAL(81, 1352, 11), // "pAttitudeQ1"
QT_MOC_LITERAL(82, 1364, 11), // "pAttitudeQ2"
QT_MOC_LITERAL(83, 1376, 11), // "pAttitudeQ3"
QT_MOC_LITERAL(84, 1388, 11), // "pAttitudeQ4"
QT_MOC_LITERAL(85, 1400, 11), // "pGyroDriftX"
QT_MOC_LITERAL(86, 1412, 11), // "pGyroDriftY"
QT_MOC_LITERAL(87, 1424, 11), // "pGyroDriftZ"
QT_MOC_LITERAL(88, 1436, 15), // "P_PositionNorth"
QT_MOC_LITERAL(89, 1452, 14), // "P_PositionEast"
QT_MOC_LITERAL(90, 1467, 14), // "P_PositionDown"
QT_MOC_LITERAL(91, 1482, 15), // "P_VelocityNorth"
QT_MOC_LITERAL(92, 1498, 14), // "P_VelocityEast"
QT_MOC_LITERAL(93, 1513, 14), // "P_VelocityDown"
QT_MOC_LITERAL(94, 1528, 12), // "P_AttitudeQ1"
QT_MOC_LITERAL(95, 1541, 12), // "P_AttitudeQ2"
QT_MOC_LITERAL(96, 1554, 12), // "P_AttitudeQ3"
QT_MOC_LITERAL(97, 1567, 12), // "P_AttitudeQ4"
QT_MOC_LITERAL(98, 1580, 12), // "P_GyroDriftX"
QT_MOC_LITERAL(99, 1593, 12), // "P_GyroDriftY"
QT_MOC_LITERAL(100, 1606, 12) // "P_GyroDriftZ"

    },
    "EKFStateVariance\0pChanged\0\0index\0value\0"
    "PChanged\0pPositionNorthChanged\0"
    "P_PositionNorthChanged\0pPositionEastChanged\0"
    "P_PositionEastChanged\0pPositionDownChanged\0"
    "P_PositionDownChanged\0pVelocityNorthChanged\0"
    "P_VelocityNorthChanged\0pVelocityEastChanged\0"
    "P_VelocityEastChanged\0pVelocityDownChanged\0"
    "P_VelocityDownChanged\0pAttitudeQ1Changed\0"
    "P_AttitudeQ1Changed\0pAttitudeQ2Changed\0"
    "P_AttitudeQ2Changed\0pAttitudeQ3Changed\0"
    "P_AttitudeQ3Changed\0pAttitudeQ4Changed\0"
    "P_AttitudeQ4Changed\0pGyroDriftXChanged\0"
    "P_GyroDriftXChanged\0pGyroDriftYChanged\0"
    "P_GyroDriftYChanged\0pGyroDriftZChanged\0"
    "P_GyroDriftZChanged\0setP\0setPPositionNorth\0"
    "setP_PositionNorth\0setPPositionEast\0"
    "setP_PositionEast\0setPPositionDown\0"
    "setP_PositionDown\0setPVelocityNorth\0"
    "setP_VelocityNorth\0setPVelocityEast\0"
    "setP_VelocityEast\0setPVelocityDown\0"
    "setP_VelocityDown\0setPAttitudeQ1\0"
    "setP_AttitudeQ1\0setPAttitudeQ2\0"
    "setP_AttitudeQ2\0setPAttitudeQ3\0"
    "setP_AttitudeQ3\0setPAttitudeQ4\0"
    "setP_AttitudeQ4\0setPGyroDriftX\0"
    "setP_GyroDriftX\0setPGyroDriftY\0"
    "setP_GyroDriftY\0setPGyroDriftZ\0"
    "setP_GyroDriftZ\0emitNotifications\0p\0"
    "getP\0getP_PositionNorth\0getP_PositionEast\0"
    "getP_PositionDown\0getP_VelocityNorth\0"
    "getP_VelocityEast\0getP_VelocityDown\0"
    "getP_AttitudeQ1\0getP_AttitudeQ2\0"
    "getP_AttitudeQ3\0getP_AttitudeQ4\0"
    "getP_GyroDriftX\0getP_GyroDriftY\0"
    "getP_GyroDriftZ\0pPositionNorth\0"
    "pPositionEast\0pPositionDown\0pVelocityNorth\0"
    "pVelocityEast\0pVelocityDown\0pAttitudeQ1\0"
    "pAttitudeQ2\0pAttitudeQ3\0pAttitudeQ4\0"
    "pGyroDriftX\0pGyroDriftY\0pGyroDriftZ\0"
    "P_PositionNorth\0P_PositionEast\0"
    "P_PositionDown\0P_VelocityNorth\0"
    "P_VelocityEast\0P_VelocityDown\0"
    "P_AttitudeQ1\0P_AttitudeQ2\0P_AttitudeQ3\0"
    "P_AttitudeQ4\0P_GyroDriftX\0P_GyroDriftY\0"
    "P_GyroDriftZ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EKFStateVariance[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      71,   14, // methods
      26,  560, // properties
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
      10,    1,  391,    2, 0x06 /* Public */,
      11,    1,  394,    2, 0x06 /* Public */,
      12,    1,  397,    2, 0x06 /* Public */,
      13,    1,  400,    2, 0x06 /* Public */,
      14,    1,  403,    2, 0x06 /* Public */,
      15,    1,  406,    2, 0x06 /* Public */,
      16,    1,  409,    2, 0x06 /* Public */,
      17,    1,  412,    2, 0x06 /* Public */,
      18,    1,  415,    2, 0x06 /* Public */,
      19,    1,  418,    2, 0x06 /* Public */,
      20,    1,  421,    2, 0x06 /* Public */,
      21,    1,  424,    2, 0x06 /* Public */,
      22,    1,  427,    2, 0x06 /* Public */,
      23,    1,  430,    2, 0x06 /* Public */,
      24,    1,  433,    2, 0x06 /* Public */,
      25,    1,  436,    2, 0x06 /* Public */,
      26,    1,  439,    2, 0x06 /* Public */,
      27,    1,  442,    2, 0x06 /* Public */,
      28,    1,  445,    2, 0x06 /* Public */,
      29,    1,  448,    2, 0x06 /* Public */,
      30,    1,  451,    2, 0x06 /* Public */,
      31,    1,  454,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      32,    2,  457,    2, 0x0a /* Public */,
      33,    1,  462,    2, 0x0a /* Public */,
      34,    1,  465,    2, 0x0a /* Public */,
      35,    1,  468,    2, 0x0a /* Public */,
      36,    1,  471,    2, 0x0a /* Public */,
      37,    1,  474,    2, 0x0a /* Public */,
      38,    1,  477,    2, 0x0a /* Public */,
      39,    1,  480,    2, 0x0a /* Public */,
      40,    1,  483,    2, 0x0a /* Public */,
      41,    1,  486,    2, 0x0a /* Public */,
      42,    1,  489,    2, 0x0a /* Public */,
      43,    1,  492,    2, 0x0a /* Public */,
      44,    1,  495,    2, 0x0a /* Public */,
      45,    1,  498,    2, 0x0a /* Public */,
      46,    1,  501,    2, 0x0a /* Public */,
      47,    1,  504,    2, 0x0a /* Public */,
      48,    1,  507,    2, 0x0a /* Public */,
      49,    1,  510,    2, 0x0a /* Public */,
      50,    1,  513,    2, 0x0a /* Public */,
      51,    1,  516,    2, 0x0a /* Public */,
      52,    1,  519,    2, 0x0a /* Public */,
      53,    1,  522,    2, 0x0a /* Public */,
      54,    1,  525,    2, 0x0a /* Public */,
      55,    1,  528,    2, 0x0a /* Public */,
      56,    1,  531,    2, 0x0a /* Public */,
      57,    1,  534,    2, 0x0a /* Public */,
      58,    1,  537,    2, 0x0a /* Public */,
      59,    0,  540,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      60,    1,  541,    2, 0x02 /* Public */,
      61,    1,  544,    2, 0x02 /* Public */,
      62,    0,  547,    2, 0x02 /* Public */,
      63,    0,  548,    2, 0x02 /* Public */,
      64,    0,  549,    2, 0x02 /* Public */,
      65,    0,  550,    2, 0x02 /* Public */,
      66,    0,  551,    2, 0x02 /* Public */,
      67,    0,  552,    2, 0x02 /* Public */,
      68,    0,  553,    2, 0x02 /* Public */,
      69,    0,  554,    2, 0x02 /* Public */,
      70,    0,  555,    2, 0x02 /* Public */,
      71,    0,  556,    2, 0x02 /* Public */,
      72,    0,  557,    2, 0x02 /* Public */,
      73,    0,  558,    2, 0x02 /* Public */,
      74,    0,  559,    2, 0x02 /* Public */,

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

 // properties: name, type, flags
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
      95, QMetaType::Float, 0x00495103,
      96, QMetaType::Float, 0x00495103,
      97, QMetaType::Float, 0x00495103,
      98, QMetaType::Float, 0x00495103,
      99, QMetaType::Float, 0x00495103,
     100, QMetaType::Float, 0x00495103,

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

       0        // eod
};

void EKFStateVariance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EKFStateVariance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->PChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->pPositionNorthChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->P_PositionNorthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->pPositionEastChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->P_PositionEastChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->pPositionDownChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->P_PositionDownChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->pVelocityNorthChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->P_VelocityNorthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->pVelocityEastChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->P_VelocityEastChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->pVelocityDownChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->P_VelocityDownChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->pAttitudeQ1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->P_AttitudeQ1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->pAttitudeQ2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->P_AttitudeQ2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->pAttitudeQ3Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->P_AttitudeQ3Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->pAttitudeQ4Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->P_AttitudeQ4Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->pGyroDriftXChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->P_GyroDriftXChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->pGyroDriftYChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->P_GyroDriftYChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->pGyroDriftZChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->P_GyroDriftZChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->setP((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 29: _t->setPPositionNorth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 30: _t->setP_PositionNorth((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 31: _t->setPPositionEast((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 32: _t->setP_PositionEast((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 33: _t->setPPositionDown((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 34: _t->setP_PositionDown((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 35: _t->setPVelocityNorth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 36: _t->setP_VelocityNorth((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 37: _t->setPVelocityEast((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 38: _t->setP_VelocityEast((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->setPVelocityDown((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 40: _t->setP_VelocityDown((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 41: _t->setPAttitudeQ1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 42: _t->setP_AttitudeQ1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 43: _t->setPAttitudeQ2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 44: _t->setP_AttitudeQ2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 45: _t->setPAttitudeQ3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 46: _t->setP_AttitudeQ3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 47: _t->setPAttitudeQ4((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 48: _t->setP_AttitudeQ4((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 49: _t->setPGyroDriftX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 50: _t->setP_GyroDriftX((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 51: _t->setPGyroDriftY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 52: _t->setP_GyroDriftY((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 53: _t->setPGyroDriftZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 54: _t->setP_GyroDriftZ((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 55: _t->emitNotifications(); break;
        case 56: { float _r = _t->p((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 57: { float _r = _t->getP((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 58: { float _r = _t->getP_PositionNorth();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 59: { float _r = _t->getP_PositionEast();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 60: { float _r = _t->getP_PositionDown();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 61: { float _r = _t->getP_VelocityNorth();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 62: { float _r = _t->getP_VelocityEast();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 63: { float _r = _t->getP_VelocityDown();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 64: { float _r = _t->getP_AttitudeQ1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 65: { float _r = _t->getP_AttitudeQ2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 66: { float _r = _t->getP_AttitudeQ3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 67: { float _r = _t->getP_AttitudeQ4();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 68: { float _r = _t->getP_GyroDriftX();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 69: { float _r = _t->getP_GyroDriftY();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 70: { float _r = _t->getP_GyroDriftZ();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EKFStateVariance::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::PChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pPositionNorthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_PositionNorthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pPositionEastChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_PositionEastChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pPositionDownChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_PositionDownChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pVelocityNorthChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_VelocityNorthChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pVelocityEastChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_VelocityEastChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pVelocityDownChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_VelocityDownChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pAttitudeQ1Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_AttitudeQ1Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pAttitudeQ2Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_AttitudeQ2Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pAttitudeQ3Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_AttitudeQ3Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pAttitudeQ4Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_AttitudeQ4Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pGyroDriftXChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_GyroDriftXChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pGyroDriftYChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_GyroDriftYChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::pGyroDriftZChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (EKFStateVariance::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EKFStateVariance::P_GyroDriftZChanged)) {
                *result = 27;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EKFStateVariance *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->pPositionNorth(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->pPositionEast(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->pPositionDown(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->pVelocityNorth(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->pVelocityEast(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->pVelocityDown(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->pAttitudeQ1(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->pAttitudeQ2(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->pAttitudeQ3(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->pAttitudeQ4(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->pGyroDriftX(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->pGyroDriftY(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->pGyroDriftZ(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getP_PositionNorth(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getP_PositionEast(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getP_PositionDown(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getP_VelocityNorth(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getP_VelocityEast(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getP_VelocityDown(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getP_AttitudeQ1(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getP_AttitudeQ2(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getP_AttitudeQ3(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getP_AttitudeQ4(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getP_GyroDriftX(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getP_GyroDriftY(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->getP_GyroDriftZ(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<EKFStateVariance *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPPositionNorth(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setPPositionEast(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setPPositionDown(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setPVelocityNorth(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setPVelocityEast(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setPVelocityDown(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setPAttitudeQ1(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setPAttitudeQ2(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setPAttitudeQ3(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setPAttitudeQ4(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setPGyroDriftX(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setPGyroDriftY(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setPGyroDriftZ(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setP_PositionNorth(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setP_PositionEast(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setP_PositionDown(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setP_VelocityNorth(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setP_VelocityEast(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setP_VelocityDown(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setP_AttitudeQ1(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setP_AttitudeQ2(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setP_AttitudeQ3(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setP_AttitudeQ4(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setP_GyroDriftX(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setP_GyroDriftY(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setP_GyroDriftZ(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject EKFStateVariance::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_EKFStateVariance.data,
    qt_meta_data_EKFStateVariance,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EKFStateVariance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EKFStateVariance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EKFStateVariance.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int EKFStateVariance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EKFStateVariance::pChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EKFStateVariance::PChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EKFStateVariance::pPositionNorthChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EKFStateVariance::P_PositionNorthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void EKFStateVariance::pPositionEastChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void EKFStateVariance::P_PositionEastChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void EKFStateVariance::pPositionDownChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void EKFStateVariance::P_PositionDownChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void EKFStateVariance::pVelocityNorthChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void EKFStateVariance::P_VelocityNorthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void EKFStateVariance::pVelocityEastChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void EKFStateVariance::P_VelocityEastChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void EKFStateVariance::pVelocityDownChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void EKFStateVariance::P_VelocityDownChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void EKFStateVariance::pAttitudeQ1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void EKFStateVariance::P_AttitudeQ1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void EKFStateVariance::pAttitudeQ2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void EKFStateVariance::P_AttitudeQ2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void EKFStateVariance::pAttitudeQ3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void EKFStateVariance::P_AttitudeQ3Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void EKFStateVariance::pAttitudeQ4Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void EKFStateVariance::P_AttitudeQ4Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void EKFStateVariance::pGyroDriftXChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void EKFStateVariance::P_GyroDriftXChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void EKFStateVariance::pGyroDriftYChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void EKFStateVariance::P_GyroDriftYChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void EKFStateVariance::pGyroDriftZChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void EKFStateVariance::P_GyroDriftZChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
