/****************************************************************************
** Meta object code from reading C++ file 'groundtruth.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../groundtruth.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groundtruth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GroundTruthConstants_t {
    QByteArrayData data[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroundTruthConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroundTruthConstants_t qt_meta_stringdata_GroundTruthConstants = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GroundTruthConstants"
QT_MOC_LITERAL(1, 21, 4) // "Enum"

    },
    "GroundTruthConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroundTruthConstants[] = {

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

void GroundTruthConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GroundTruthConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GroundTruthConstants.data,
    qt_meta_data_GroundTruthConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GroundTruthConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroundTruthConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroundTruthConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GroundTruthConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GroundTruth_t {
    QByteArrayData data[159];
    char stringdata0[2563];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroundTruth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroundTruth_t qt_meta_stringdata_GroundTruth = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GroundTruth"
QT_MOC_LITERAL(1, 12, 22), // "accelerationXYZChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "index"
QT_MOC_LITERAL(4, 42, 5), // "value"
QT_MOC_LITERAL(5, 48, 22), // "AccelerationXYZChanged"
QT_MOC_LITERAL(6, 71, 23), // "accelerationXYZ0Changed"
QT_MOC_LITERAL(7, 95, 24), // "AccelerationXYZ_0Changed"
QT_MOC_LITERAL(8, 120, 23), // "accelerationXYZ1Changed"
QT_MOC_LITERAL(9, 144, 24), // "AccelerationXYZ_1Changed"
QT_MOC_LITERAL(10, 169, 23), // "accelerationXYZ2Changed"
QT_MOC_LITERAL(11, 193, 24), // "AccelerationXYZ_2Changed"
QT_MOC_LITERAL(12, 218, 18), // "positionNEDChanged"
QT_MOC_LITERAL(13, 237, 18), // "PositionNEDChanged"
QT_MOC_LITERAL(14, 256, 19), // "positionNED0Changed"
QT_MOC_LITERAL(15, 276, 20), // "PositionNED_0Changed"
QT_MOC_LITERAL(16, 297, 19), // "positionNED1Changed"
QT_MOC_LITERAL(17, 317, 20), // "PositionNED_1Changed"
QT_MOC_LITERAL(18, 338, 19), // "positionNED2Changed"
QT_MOC_LITERAL(19, 358, 20), // "PositionNED_2Changed"
QT_MOC_LITERAL(20, 379, 18), // "velocityNEDChanged"
QT_MOC_LITERAL(21, 398, 18), // "VelocityNEDChanged"
QT_MOC_LITERAL(22, 417, 19), // "velocityNED0Changed"
QT_MOC_LITERAL(23, 437, 20), // "VelocityNED_0Changed"
QT_MOC_LITERAL(24, 458, 19), // "velocityNED1Changed"
QT_MOC_LITERAL(25, 478, 20), // "VelocityNED_1Changed"
QT_MOC_LITERAL(26, 499, 19), // "velocityNED2Changed"
QT_MOC_LITERAL(27, 519, 20), // "VelocityNED_2Changed"
QT_MOC_LITERAL(28, 540, 10), // "rpyChanged"
QT_MOC_LITERAL(29, 551, 10), // "RPYChanged"
QT_MOC_LITERAL(30, 562, 11), // "rpy0Changed"
QT_MOC_LITERAL(31, 574, 12), // "RPY_0Changed"
QT_MOC_LITERAL(32, 587, 11), // "rpy1Changed"
QT_MOC_LITERAL(33, 599, 12), // "RPY_1Changed"
QT_MOC_LITERAL(34, 612, 11), // "rpy2Changed"
QT_MOC_LITERAL(35, 624, 12), // "RPY_2Changed"
QT_MOC_LITERAL(36, 637, 19), // "angularRatesChanged"
QT_MOC_LITERAL(37, 657, 19), // "AngularRatesChanged"
QT_MOC_LITERAL(38, 677, 20), // "angularRates0Changed"
QT_MOC_LITERAL(39, 698, 21), // "AngularRates_0Changed"
QT_MOC_LITERAL(40, 720, 20), // "angularRates1Changed"
QT_MOC_LITERAL(41, 741, 21), // "AngularRates_1Changed"
QT_MOC_LITERAL(42, 763, 20), // "angularRates2Changed"
QT_MOC_LITERAL(43, 784, 21), // "AngularRates_2Changed"
QT_MOC_LITERAL(44, 806, 19), // "trueAirspeedChanged"
QT_MOC_LITERAL(45, 826, 19), // "TrueAirspeedChanged"
QT_MOC_LITERAL(46, 846, 25), // "calibratedAirspeedChanged"
QT_MOC_LITERAL(47, 872, 25), // "CalibratedAirspeedChanged"
QT_MOC_LITERAL(48, 898, 20), // "angleOfAttackChanged"
QT_MOC_LITERAL(49, 919, 20), // "AngleOfAttackChanged"
QT_MOC_LITERAL(50, 940, 18), // "angleOfSlipChanged"
QT_MOC_LITERAL(51, 959, 18), // "AngleOfSlipChanged"
QT_MOC_LITERAL(52, 978, 18), // "setAccelerationXYZ"
QT_MOC_LITERAL(53, 997, 19), // "setAccelerationXYZ0"
QT_MOC_LITERAL(54, 1017, 20), // "setAccelerationXYZ_0"
QT_MOC_LITERAL(55, 1038, 19), // "setAccelerationXYZ1"
QT_MOC_LITERAL(56, 1058, 20), // "setAccelerationXYZ_1"
QT_MOC_LITERAL(57, 1079, 19), // "setAccelerationXYZ2"
QT_MOC_LITERAL(58, 1099, 20), // "setAccelerationXYZ_2"
QT_MOC_LITERAL(59, 1120, 14), // "setPositionNED"
QT_MOC_LITERAL(60, 1135, 15), // "setPositionNED0"
QT_MOC_LITERAL(61, 1151, 16), // "setPositionNED_0"
QT_MOC_LITERAL(62, 1168, 15), // "setPositionNED1"
QT_MOC_LITERAL(63, 1184, 16), // "setPositionNED_1"
QT_MOC_LITERAL(64, 1201, 15), // "setPositionNED2"
QT_MOC_LITERAL(65, 1217, 16), // "setPositionNED_2"
QT_MOC_LITERAL(66, 1234, 14), // "setVelocityNED"
QT_MOC_LITERAL(67, 1249, 15), // "setVelocityNED0"
QT_MOC_LITERAL(68, 1265, 16), // "setVelocityNED_0"
QT_MOC_LITERAL(69, 1282, 15), // "setVelocityNED1"
QT_MOC_LITERAL(70, 1298, 16), // "setVelocityNED_1"
QT_MOC_LITERAL(71, 1315, 15), // "setVelocityNED2"
QT_MOC_LITERAL(72, 1331, 16), // "setVelocityNED_2"
QT_MOC_LITERAL(73, 1348, 6), // "setRPY"
QT_MOC_LITERAL(74, 1355, 7), // "setRPY0"
QT_MOC_LITERAL(75, 1363, 8), // "setRPY_0"
QT_MOC_LITERAL(76, 1372, 7), // "setRPY1"
QT_MOC_LITERAL(77, 1380, 8), // "setRPY_1"
QT_MOC_LITERAL(78, 1389, 7), // "setRPY2"
QT_MOC_LITERAL(79, 1397, 8), // "setRPY_2"
QT_MOC_LITERAL(80, 1406, 15), // "setAngularRates"
QT_MOC_LITERAL(81, 1422, 16), // "setAngularRates0"
QT_MOC_LITERAL(82, 1439, 17), // "setAngularRates_0"
QT_MOC_LITERAL(83, 1457, 16), // "setAngularRates1"
QT_MOC_LITERAL(84, 1474, 17), // "setAngularRates_1"
QT_MOC_LITERAL(85, 1492, 16), // "setAngularRates2"
QT_MOC_LITERAL(86, 1509, 17), // "setAngularRates_2"
QT_MOC_LITERAL(87, 1527, 15), // "setTrueAirspeed"
QT_MOC_LITERAL(88, 1543, 21), // "setCalibratedAirspeed"
QT_MOC_LITERAL(89, 1565, 16), // "setAngleOfAttack"
QT_MOC_LITERAL(90, 1582, 14), // "setAngleOfSlip"
QT_MOC_LITERAL(91, 1597, 17), // "emitNotifications"
QT_MOC_LITERAL(92, 1615, 15), // "accelerationXYZ"
QT_MOC_LITERAL(93, 1631, 18), // "getAccelerationXYZ"
QT_MOC_LITERAL(94, 1650, 20), // "getAccelerationXYZ_0"
QT_MOC_LITERAL(95, 1671, 20), // "getAccelerationXYZ_1"
QT_MOC_LITERAL(96, 1692, 20), // "getAccelerationXYZ_2"
QT_MOC_LITERAL(97, 1713, 11), // "positionNED"
QT_MOC_LITERAL(98, 1725, 14), // "getPositionNED"
QT_MOC_LITERAL(99, 1740, 16), // "getPositionNED_0"
QT_MOC_LITERAL(100, 1757, 16), // "getPositionNED_1"
QT_MOC_LITERAL(101, 1774, 16), // "getPositionNED_2"
QT_MOC_LITERAL(102, 1791, 11), // "velocityNED"
QT_MOC_LITERAL(103, 1803, 14), // "getVelocityNED"
QT_MOC_LITERAL(104, 1818, 16), // "getVelocityNED_0"
QT_MOC_LITERAL(105, 1835, 16), // "getVelocityNED_1"
QT_MOC_LITERAL(106, 1852, 16), // "getVelocityNED_2"
QT_MOC_LITERAL(107, 1869, 3), // "rpy"
QT_MOC_LITERAL(108, 1873, 6), // "getRPY"
QT_MOC_LITERAL(109, 1880, 8), // "getRPY_0"
QT_MOC_LITERAL(110, 1889, 8), // "getRPY_1"
QT_MOC_LITERAL(111, 1898, 8), // "getRPY_2"
QT_MOC_LITERAL(112, 1907, 12), // "angularRates"
QT_MOC_LITERAL(113, 1920, 15), // "getAngularRates"
QT_MOC_LITERAL(114, 1936, 17), // "getAngularRates_0"
QT_MOC_LITERAL(115, 1954, 17), // "getAngularRates_1"
QT_MOC_LITERAL(116, 1972, 17), // "getAngularRates_2"
QT_MOC_LITERAL(117, 1990, 15), // "getTrueAirspeed"
QT_MOC_LITERAL(118, 2006, 21), // "getCalibratedAirspeed"
QT_MOC_LITERAL(119, 2028, 16), // "getAngleOfAttack"
QT_MOC_LITERAL(120, 2045, 14), // "getAngleOfSlip"
QT_MOC_LITERAL(121, 2060, 16), // "accelerationXYZ0"
QT_MOC_LITERAL(122, 2077, 16), // "accelerationXYZ1"
QT_MOC_LITERAL(123, 2094, 16), // "accelerationXYZ2"
QT_MOC_LITERAL(124, 2111, 12), // "positionNED0"
QT_MOC_LITERAL(125, 2124, 12), // "positionNED1"
QT_MOC_LITERAL(126, 2137, 12), // "positionNED2"
QT_MOC_LITERAL(127, 2150, 12), // "velocityNED0"
QT_MOC_LITERAL(128, 2163, 12), // "velocityNED1"
QT_MOC_LITERAL(129, 2176, 12), // "velocityNED2"
QT_MOC_LITERAL(130, 2189, 4), // "rpy0"
QT_MOC_LITERAL(131, 2194, 4), // "rpy1"
QT_MOC_LITERAL(132, 2199, 4), // "rpy2"
QT_MOC_LITERAL(133, 2204, 13), // "angularRates0"
QT_MOC_LITERAL(134, 2218, 13), // "angularRates1"
QT_MOC_LITERAL(135, 2232, 13), // "angularRates2"
QT_MOC_LITERAL(136, 2246, 12), // "trueAirspeed"
QT_MOC_LITERAL(137, 2259, 18), // "calibratedAirspeed"
QT_MOC_LITERAL(138, 2278, 13), // "angleOfAttack"
QT_MOC_LITERAL(139, 2292, 11), // "angleOfSlip"
QT_MOC_LITERAL(140, 2304, 17), // "AccelerationXYZ_0"
QT_MOC_LITERAL(141, 2322, 17), // "AccelerationXYZ_1"
QT_MOC_LITERAL(142, 2340, 17), // "AccelerationXYZ_2"
QT_MOC_LITERAL(143, 2358, 13), // "PositionNED_0"
QT_MOC_LITERAL(144, 2372, 13), // "PositionNED_1"
QT_MOC_LITERAL(145, 2386, 13), // "PositionNED_2"
QT_MOC_LITERAL(146, 2400, 13), // "VelocityNED_0"
QT_MOC_LITERAL(147, 2414, 13), // "VelocityNED_1"
QT_MOC_LITERAL(148, 2428, 13), // "VelocityNED_2"
QT_MOC_LITERAL(149, 2442, 5), // "RPY_0"
QT_MOC_LITERAL(150, 2448, 5), // "RPY_1"
QT_MOC_LITERAL(151, 2454, 5), // "RPY_2"
QT_MOC_LITERAL(152, 2460, 14), // "AngularRates_0"
QT_MOC_LITERAL(153, 2475, 14), // "AngularRates_1"
QT_MOC_LITERAL(154, 2490, 14), // "AngularRates_2"
QT_MOC_LITERAL(155, 2505, 12), // "TrueAirspeed"
QT_MOC_LITERAL(156, 2518, 18), // "CalibratedAirspeed"
QT_MOC_LITERAL(157, 2537, 13), // "AngleOfAttack"
QT_MOC_LITERAL(158, 2551, 11) // "AngleOfSlip"

    },
    "GroundTruth\0accelerationXYZChanged\0\0"
    "index\0value\0AccelerationXYZChanged\0"
    "accelerationXYZ0Changed\0"
    "AccelerationXYZ_0Changed\0"
    "accelerationXYZ1Changed\0"
    "AccelerationXYZ_1Changed\0"
    "accelerationXYZ2Changed\0"
    "AccelerationXYZ_2Changed\0positionNEDChanged\0"
    "PositionNEDChanged\0positionNED0Changed\0"
    "PositionNED_0Changed\0positionNED1Changed\0"
    "PositionNED_1Changed\0positionNED2Changed\0"
    "PositionNED_2Changed\0velocityNEDChanged\0"
    "VelocityNEDChanged\0velocityNED0Changed\0"
    "VelocityNED_0Changed\0velocityNED1Changed\0"
    "VelocityNED_1Changed\0velocityNED2Changed\0"
    "VelocityNED_2Changed\0rpyChanged\0"
    "RPYChanged\0rpy0Changed\0RPY_0Changed\0"
    "rpy1Changed\0RPY_1Changed\0rpy2Changed\0"
    "RPY_2Changed\0angularRatesChanged\0"
    "AngularRatesChanged\0angularRates0Changed\0"
    "AngularRates_0Changed\0angularRates1Changed\0"
    "AngularRates_1Changed\0angularRates2Changed\0"
    "AngularRates_2Changed\0trueAirspeedChanged\0"
    "TrueAirspeedChanged\0calibratedAirspeedChanged\0"
    "CalibratedAirspeedChanged\0"
    "angleOfAttackChanged\0AngleOfAttackChanged\0"
    "angleOfSlipChanged\0AngleOfSlipChanged\0"
    "setAccelerationXYZ\0setAccelerationXYZ0\0"
    "setAccelerationXYZ_0\0setAccelerationXYZ1\0"
    "setAccelerationXYZ_1\0setAccelerationXYZ2\0"
    "setAccelerationXYZ_2\0setPositionNED\0"
    "setPositionNED0\0setPositionNED_0\0"
    "setPositionNED1\0setPositionNED_1\0"
    "setPositionNED2\0setPositionNED_2\0"
    "setVelocityNED\0setVelocityNED0\0"
    "setVelocityNED_0\0setVelocityNED1\0"
    "setVelocityNED_1\0setVelocityNED2\0"
    "setVelocityNED_2\0setRPY\0setRPY0\0"
    "setRPY_0\0setRPY1\0setRPY_1\0setRPY2\0"
    "setRPY_2\0setAngularRates\0setAngularRates0\0"
    "setAngularRates_0\0setAngularRates1\0"
    "setAngularRates_1\0setAngularRates2\0"
    "setAngularRates_2\0setTrueAirspeed\0"
    "setCalibratedAirspeed\0setAngleOfAttack\0"
    "setAngleOfSlip\0emitNotifications\0"
    "accelerationXYZ\0getAccelerationXYZ\0"
    "getAccelerationXYZ_0\0getAccelerationXYZ_1\0"
    "getAccelerationXYZ_2\0positionNED\0"
    "getPositionNED\0getPositionNED_0\0"
    "getPositionNED_1\0getPositionNED_2\0"
    "velocityNED\0getVelocityNED\0getVelocityNED_0\0"
    "getVelocityNED_1\0getVelocityNED_2\0rpy\0"
    "getRPY\0getRPY_0\0getRPY_1\0getRPY_2\0"
    "angularRates\0getAngularRates\0"
    "getAngularRates_0\0getAngularRates_1\0"
    "getAngularRates_2\0getTrueAirspeed\0"
    "getCalibratedAirspeed\0getAngleOfAttack\0"
    "getAngleOfSlip\0accelerationXYZ0\0"
    "accelerationXYZ1\0accelerationXYZ2\0"
    "positionNED0\0positionNED1\0positionNED2\0"
    "velocityNED0\0velocityNED1\0velocityNED2\0"
    "rpy0\0rpy1\0rpy2\0angularRates0\0angularRates1\0"
    "angularRates2\0trueAirspeed\0"
    "calibratedAirspeed\0angleOfAttack\0"
    "angleOfSlip\0AccelerationXYZ_0\0"
    "AccelerationXYZ_1\0AccelerationXYZ_2\0"
    "PositionNED_0\0PositionNED_1\0PositionNED_2\0"
    "VelocityNED_0\0VelocityNED_1\0VelocityNED_2\0"
    "RPY_0\0RPY_1\0RPY_2\0AngularRates_0\0"
    "AngularRates_1\0AngularRates_2\0"
    "TrueAirspeed\0CalibratedAirspeed\0"
    "AngleOfAttack\0AngleOfSlip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroundTruth[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     117,   14, // methods
      38,  940, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      48,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  599,    2, 0x06 /* Public */,
       5,    2,  604,    2, 0x06 /* Public */,
       6,    1,  609,    2, 0x06 /* Public */,
       7,    1,  612,    2, 0x06 /* Public */,
       8,    1,  615,    2, 0x06 /* Public */,
       9,    1,  618,    2, 0x06 /* Public */,
      10,    1,  621,    2, 0x06 /* Public */,
      11,    1,  624,    2, 0x06 /* Public */,
      12,    2,  627,    2, 0x06 /* Public */,
      13,    2,  632,    2, 0x06 /* Public */,
      14,    1,  637,    2, 0x06 /* Public */,
      15,    1,  640,    2, 0x06 /* Public */,
      16,    1,  643,    2, 0x06 /* Public */,
      17,    1,  646,    2, 0x06 /* Public */,
      18,    1,  649,    2, 0x06 /* Public */,
      19,    1,  652,    2, 0x06 /* Public */,
      20,    2,  655,    2, 0x06 /* Public */,
      21,    2,  660,    2, 0x06 /* Public */,
      22,    1,  665,    2, 0x06 /* Public */,
      23,    1,  668,    2, 0x06 /* Public */,
      24,    1,  671,    2, 0x06 /* Public */,
      25,    1,  674,    2, 0x06 /* Public */,
      26,    1,  677,    2, 0x06 /* Public */,
      27,    1,  680,    2, 0x06 /* Public */,
      28,    2,  683,    2, 0x06 /* Public */,
      29,    2,  688,    2, 0x06 /* Public */,
      30,    1,  693,    2, 0x06 /* Public */,
      31,    1,  696,    2, 0x06 /* Public */,
      32,    1,  699,    2, 0x06 /* Public */,
      33,    1,  702,    2, 0x06 /* Public */,
      34,    1,  705,    2, 0x06 /* Public */,
      35,    1,  708,    2, 0x06 /* Public */,
      36,    2,  711,    2, 0x06 /* Public */,
      37,    2,  716,    2, 0x06 /* Public */,
      38,    1,  721,    2, 0x06 /* Public */,
      39,    1,  724,    2, 0x06 /* Public */,
      40,    1,  727,    2, 0x06 /* Public */,
      41,    1,  730,    2, 0x06 /* Public */,
      42,    1,  733,    2, 0x06 /* Public */,
      43,    1,  736,    2, 0x06 /* Public */,
      44,    1,  739,    2, 0x06 /* Public */,
      45,    1,  742,    2, 0x06 /* Public */,
      46,    1,  745,    2, 0x06 /* Public */,
      47,    1,  748,    2, 0x06 /* Public */,
      48,    1,  751,    2, 0x06 /* Public */,
      49,    1,  754,    2, 0x06 /* Public */,
      50,    1,  757,    2, 0x06 /* Public */,
      51,    1,  760,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      52,    2,  763,    2, 0x0a /* Public */,
      53,    1,  768,    2, 0x0a /* Public */,
      54,    1,  771,    2, 0x0a /* Public */,
      55,    1,  774,    2, 0x0a /* Public */,
      56,    1,  777,    2, 0x0a /* Public */,
      57,    1,  780,    2, 0x0a /* Public */,
      58,    1,  783,    2, 0x0a /* Public */,
      59,    2,  786,    2, 0x0a /* Public */,
      60,    1,  791,    2, 0x0a /* Public */,
      61,    1,  794,    2, 0x0a /* Public */,
      62,    1,  797,    2, 0x0a /* Public */,
      63,    1,  800,    2, 0x0a /* Public */,
      64,    1,  803,    2, 0x0a /* Public */,
      65,    1,  806,    2, 0x0a /* Public */,
      66,    2,  809,    2, 0x0a /* Public */,
      67,    1,  814,    2, 0x0a /* Public */,
      68,    1,  817,    2, 0x0a /* Public */,
      69,    1,  820,    2, 0x0a /* Public */,
      70,    1,  823,    2, 0x0a /* Public */,
      71,    1,  826,    2, 0x0a /* Public */,
      72,    1,  829,    2, 0x0a /* Public */,
      73,    2,  832,    2, 0x0a /* Public */,
      74,    1,  837,    2, 0x0a /* Public */,
      75,    1,  840,    2, 0x0a /* Public */,
      76,    1,  843,    2, 0x0a /* Public */,
      77,    1,  846,    2, 0x0a /* Public */,
      78,    1,  849,    2, 0x0a /* Public */,
      79,    1,  852,    2, 0x0a /* Public */,
      80,    2,  855,    2, 0x0a /* Public */,
      81,    1,  860,    2, 0x0a /* Public */,
      82,    1,  863,    2, 0x0a /* Public */,
      83,    1,  866,    2, 0x0a /* Public */,
      84,    1,  869,    2, 0x0a /* Public */,
      85,    1,  872,    2, 0x0a /* Public */,
      86,    1,  875,    2, 0x0a /* Public */,
      87,    1,  878,    2, 0x0a /* Public */,
      88,    1,  881,    2, 0x0a /* Public */,
      89,    1,  884,    2, 0x0a /* Public */,
      90,    1,  887,    2, 0x0a /* Public */,
      91,    0,  890,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      92,    1,  891,    2, 0x02 /* Public */,
      93,    1,  894,    2, 0x02 /* Public */,
      94,    0,  897,    2, 0x02 /* Public */,
      95,    0,  898,    2, 0x02 /* Public */,
      96,    0,  899,    2, 0x02 /* Public */,
      97,    1,  900,    2, 0x02 /* Public */,
      98,    1,  903,    2, 0x02 /* Public */,
      99,    0,  906,    2, 0x02 /* Public */,
     100,    0,  907,    2, 0x02 /* Public */,
     101,    0,  908,    2, 0x02 /* Public */,
     102,    1,  909,    2, 0x02 /* Public */,
     103,    1,  912,    2, 0x02 /* Public */,
     104,    0,  915,    2, 0x02 /* Public */,
     105,    0,  916,    2, 0x02 /* Public */,
     106,    0,  917,    2, 0x02 /* Public */,
     107,    1,  918,    2, 0x02 /* Public */,
     108,    1,  921,    2, 0x02 /* Public */,
     109,    0,  924,    2, 0x02 /* Public */,
     110,    0,  925,    2, 0x02 /* Public */,
     111,    0,  926,    2, 0x02 /* Public */,
     112,    1,  927,    2, 0x02 /* Public */,
     113,    1,  930,    2, 0x02 /* Public */,
     114,    0,  933,    2, 0x02 /* Public */,
     115,    0,  934,    2, 0x02 /* Public */,
     116,    0,  935,    2, 0x02 /* Public */,
     117,    0,  936,    2, 0x02 /* Public */,
     118,    0,  937,    2, 0x02 /* Public */,
     119,    0,  938,    2, 0x02 /* Public */,
     120,    0,  939,    2, 0x02 /* Public */,

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
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
     121, QMetaType::Float, 0x00495103,
     122, QMetaType::Float, 0x00495103,
     123, QMetaType::Float, 0x00495103,
     124, QMetaType::Float, 0x00495103,
     125, QMetaType::Float, 0x00495103,
     126, QMetaType::Float, 0x00495103,
     127, QMetaType::Float, 0x00495103,
     128, QMetaType::Float, 0x00495103,
     129, QMetaType::Float, 0x00495103,
     130, QMetaType::Float, 0x00495003,
     131, QMetaType::Float, 0x00495003,
     132, QMetaType::Float, 0x00495003,
     133, QMetaType::Float, 0x00495103,
     134, QMetaType::Float, 0x00495103,
     135, QMetaType::Float, 0x00495103,
     136, QMetaType::Float, 0x00495103,
     137, QMetaType::Float, 0x00495103,
     138, QMetaType::Float, 0x00495103,
     139, QMetaType::Float, 0x00495103,
     140, QMetaType::Float, 0x00495103,
     141, QMetaType::Float, 0x00495103,
     142, QMetaType::Float, 0x00495103,
     143, QMetaType::Float, 0x00495103,
     144, QMetaType::Float, 0x00495103,
     145, QMetaType::Float, 0x00495103,
     146, QMetaType::Float, 0x00495103,
     147, QMetaType::Float, 0x00495103,
     148, QMetaType::Float, 0x00495103,
     149, QMetaType::Float, 0x00495103,
     150, QMetaType::Float, 0x00495103,
     151, QMetaType::Float, 0x00495103,
     152, QMetaType::Float, 0x00495103,
     153, QMetaType::Float, 0x00495103,
     154, QMetaType::Float, 0x00495103,
     155, QMetaType::Float, 0x00495103,
     156, QMetaType::Float, 0x00495103,
     157, QMetaType::Float, 0x00495103,
     158, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
      10,
      12,
      14,
      18,
      20,
      22,
      26,
      28,
      30,
      34,
      36,
      38,
      40,
      42,
      44,
      46,
       3,
       5,
       7,
      11,
      13,
      15,
      19,
      21,
      23,
      27,
      29,
      31,
      35,
      37,
      39,
      41,
      43,
      45,
      47,

       0        // eod
};

void GroundTruth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GroundTruth *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accelerationXYZChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->AccelerationXYZChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->accelerationXYZ0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->AccelerationXYZ_0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->accelerationXYZ1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->AccelerationXYZ_1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->accelerationXYZ2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->AccelerationXYZ_2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->positionNEDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 9: _t->PositionNEDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->positionNED0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->PositionNED_0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->positionNED1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->PositionNED_1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->positionNED2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->PositionNED_2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->velocityNEDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 17: _t->VelocityNEDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 18: _t->velocityNED0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->VelocityNED_0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->velocityNED1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->VelocityNED_1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->velocityNED2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->VelocityNED_2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->rpyChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 25: _t->RPYChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 26: _t->rpy0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->RPY_0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->rpy1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 29: _t->RPY_1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->rpy2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 31: _t->RPY_2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 32: _t->angularRatesChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 33: _t->AngularRatesChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 34: _t->angularRates0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->AngularRates_0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 36: _t->angularRates1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 37: _t->AngularRates_1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->angularRates2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 39: _t->AngularRates_2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->trueAirspeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 41: _t->TrueAirspeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->calibratedAirspeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 43: _t->CalibratedAirspeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->angleOfAttackChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 45: _t->AngleOfAttackChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->angleOfSlipChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->AngleOfSlipChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->setAccelerationXYZ((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 49: _t->setAccelerationXYZ0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 50: _t->setAccelerationXYZ_0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 51: _t->setAccelerationXYZ1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 52: _t->setAccelerationXYZ_1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 53: _t->setAccelerationXYZ2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 54: _t->setAccelerationXYZ_2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 55: _t->setPositionNED((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 56: _t->setPositionNED0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 57: _t->setPositionNED_0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 58: _t->setPositionNED1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 59: _t->setPositionNED_1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 60: _t->setPositionNED2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 61: _t->setPositionNED_2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 62: _t->setVelocityNED((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 63: _t->setVelocityNED0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 64: _t->setVelocityNED_0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 65: _t->setVelocityNED1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 66: _t->setVelocityNED_1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 67: _t->setVelocityNED2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 68: _t->setVelocityNED_2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 69: _t->setRPY((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 70: _t->setRPY0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 71: _t->setRPY_0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 72: _t->setRPY1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 73: _t->setRPY_1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 74: _t->setRPY2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 75: _t->setRPY_2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 76: _t->setAngularRates((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 77: _t->setAngularRates0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 78: _t->setAngularRates_0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 79: _t->setAngularRates1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 80: _t->setAngularRates_1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 81: _t->setAngularRates2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 82: _t->setAngularRates_2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 83: _t->setTrueAirspeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 84: _t->setCalibratedAirspeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 85: _t->setAngleOfAttack((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 86: _t->setAngleOfSlip((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 87: _t->emitNotifications(); break;
        case 88: { float _r = _t->accelerationXYZ((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 89: { float _r = _t->getAccelerationXYZ((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 90: { float _r = _t->getAccelerationXYZ_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 91: { float _r = _t->getAccelerationXYZ_1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 92: { float _r = _t->getAccelerationXYZ_2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 93: { float _r = _t->positionNED((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 94: { float _r = _t->getPositionNED((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 95: { float _r = _t->getPositionNED_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 96: { float _r = _t->getPositionNED_1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 97: { float _r = _t->getPositionNED_2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 98: { float _r = _t->velocityNED((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 99: { float _r = _t->getVelocityNED((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 100: { float _r = _t->getVelocityNED_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 101: { float _r = _t->getVelocityNED_1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 102: { float _r = _t->getVelocityNED_2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 103: { float _r = _t->rpy((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 104: { float _r = _t->getRPY((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 105: { float _r = _t->getRPY_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 106: { float _r = _t->getRPY_1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 107: { float _r = _t->getRPY_2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 108: { float _r = _t->angularRates((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 109: { float _r = _t->getAngularRates((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 110: { float _r = _t->getAngularRates_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 111: { float _r = _t->getAngularRates_1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 112: { float _r = _t->getAngularRates_2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 113: { float _r = _t->getTrueAirspeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 114: { float _r = _t->getCalibratedAirspeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 115: { float _r = _t->getAngleOfAttack();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 116: { float _r = _t->getAngleOfSlip();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GroundTruth::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::accelerationXYZChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::AccelerationXYZChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::accelerationXYZ0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::AccelerationXYZ_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::accelerationXYZ1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::AccelerationXYZ_1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::accelerationXYZ2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::AccelerationXYZ_2Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::positionNEDChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::PositionNEDChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::positionNED0Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::PositionNED_0Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::positionNED1Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::PositionNED_1Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::positionNED2Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::PositionNED_2Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::velocityNEDChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::VelocityNEDChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::velocityNED0Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::VelocityNED_0Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::velocityNED1Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::VelocityNED_1Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::velocityNED2Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::VelocityNED_2Changed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::rpyChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::RPYChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::rpy0Changed)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::RPY_0Changed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::rpy1Changed)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::RPY_1Changed)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::rpy2Changed)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::RPY_2Changed)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::angularRatesChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::AngularRatesChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::angularRates0Changed)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::AngularRates_0Changed)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::angularRates1Changed)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::AngularRates_1Changed)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::angularRates2Changed)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::AngularRates_2Changed)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::trueAirspeedChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::TrueAirspeedChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::calibratedAirspeedChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::CalibratedAirspeedChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::angleOfAttackChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::AngleOfAttackChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::angleOfSlipChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (GroundTruth::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroundTruth::AngleOfSlipChanged)) {
                *result = 47;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GroundTruth *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->accelerationXYZ0(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->accelerationXYZ1(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->accelerationXYZ2(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->positionNED0(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->positionNED1(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->positionNED2(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->velocityNED0(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->velocityNED1(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->velocityNED2(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->rpy0(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->rpy1(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->rpy2(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->angularRates0(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->angularRates1(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->angularRates2(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->trueAirspeed(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->calibratedAirspeed(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->angleOfAttack(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->angleOfSlip(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getAccelerationXYZ_0(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getAccelerationXYZ_1(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getAccelerationXYZ_2(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getPositionNED_0(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getPositionNED_1(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getPositionNED_2(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->getVelocityNED_0(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->getVelocityNED_1(); break;
        case 27: *reinterpret_cast< float*>(_v) = _t->getVelocityNED_2(); break;
        case 28: *reinterpret_cast< float*>(_v) = _t->getRPY_0(); break;
        case 29: *reinterpret_cast< float*>(_v) = _t->getRPY_1(); break;
        case 30: *reinterpret_cast< float*>(_v) = _t->getRPY_2(); break;
        case 31: *reinterpret_cast< float*>(_v) = _t->getAngularRates_0(); break;
        case 32: *reinterpret_cast< float*>(_v) = _t->getAngularRates_1(); break;
        case 33: *reinterpret_cast< float*>(_v) = _t->getAngularRates_2(); break;
        case 34: *reinterpret_cast< float*>(_v) = _t->getTrueAirspeed(); break;
        case 35: *reinterpret_cast< float*>(_v) = _t->getCalibratedAirspeed(); break;
        case 36: *reinterpret_cast< float*>(_v) = _t->getAngleOfAttack(); break;
        case 37: *reinterpret_cast< float*>(_v) = _t->getAngleOfSlip(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GroundTruth *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccelerationXYZ0(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setAccelerationXYZ1(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setAccelerationXYZ2(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setPositionNED0(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setPositionNED1(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setPositionNED2(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setVelocityNED0(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setVelocityNED1(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setVelocityNED2(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setRPY0(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setRPY1(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setRPY2(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setAngularRates0(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setAngularRates1(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setAngularRates2(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setTrueAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setCalibratedAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setAngleOfAttack(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setAngleOfSlip(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setAccelerationXYZ_0(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setAccelerationXYZ_1(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setAccelerationXYZ_2(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setPositionNED_0(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setPositionNED_1(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setPositionNED_2(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setVelocityNED_0(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setVelocityNED_1(*reinterpret_cast< float*>(_v)); break;
        case 27: _t->setVelocityNED_2(*reinterpret_cast< float*>(_v)); break;
        case 28: _t->setRPY_0(*reinterpret_cast< float*>(_v)); break;
        case 29: _t->setRPY_1(*reinterpret_cast< float*>(_v)); break;
        case 30: _t->setRPY_2(*reinterpret_cast< float*>(_v)); break;
        case 31: _t->setAngularRates_0(*reinterpret_cast< float*>(_v)); break;
        case 32: _t->setAngularRates_1(*reinterpret_cast< float*>(_v)); break;
        case 33: _t->setAngularRates_2(*reinterpret_cast< float*>(_v)); break;
        case 34: _t->setTrueAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 35: _t->setCalibratedAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 36: _t->setAngleOfAttack(*reinterpret_cast< float*>(_v)); break;
        case 37: _t->setAngleOfSlip(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GroundTruth::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_GroundTruth.data,
    qt_meta_data_GroundTruth,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GroundTruth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroundTruth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroundTruth.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int GroundTruth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 117)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 117;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 117)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 117;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 38;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 38;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 38;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 38;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 38;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GroundTruth::accelerationXYZChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GroundTruth::AccelerationXYZChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GroundTruth::accelerationXYZ0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GroundTruth::AccelerationXYZ_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GroundTruth::accelerationXYZ1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GroundTruth::AccelerationXYZ_1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GroundTruth::accelerationXYZ2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GroundTruth::AccelerationXYZ_2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GroundTruth::positionNEDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GroundTruth::PositionNEDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GroundTruth::positionNED0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GroundTruth::PositionNED_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GroundTruth::positionNED1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GroundTruth::PositionNED_1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GroundTruth::positionNED2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GroundTruth::PositionNED_2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GroundTruth::velocityNEDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GroundTruth::VelocityNEDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void GroundTruth::velocityNED0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void GroundTruth::VelocityNED_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void GroundTruth::velocityNED1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void GroundTruth::VelocityNED_1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void GroundTruth::velocityNED2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void GroundTruth::VelocityNED_2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void GroundTruth::rpyChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void GroundTruth::RPYChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void GroundTruth::rpy0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void GroundTruth::RPY_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void GroundTruth::rpy1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void GroundTruth::RPY_1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void GroundTruth::rpy2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void GroundTruth::RPY_2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void GroundTruth::angularRatesChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void GroundTruth::AngularRatesChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void GroundTruth::angularRates0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void GroundTruth::AngularRates_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void GroundTruth::angularRates1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void GroundTruth::AngularRates_1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void GroundTruth::angularRates2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void GroundTruth::AngularRates_2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void GroundTruth::trueAirspeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void GroundTruth::TrueAirspeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void GroundTruth::calibratedAirspeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void GroundTruth::CalibratedAirspeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void GroundTruth::angleOfAttackChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void GroundTruth::AngleOfAttackChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void GroundTruth::angleOfSlipChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void GroundTruth::AngleOfSlipChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
