/****************************************************************************
** Meta object code from reading C++ file 'revocalibration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../revocalibration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'revocalibration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RevoCalibrationConstants_t {
    QByteArrayData data[3];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RevoCalibrationConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RevoCalibrationConstants_t qt_meta_stringdata_RevoCalibrationConstants = {
    {
QT_MOC_LITERAL(0, 0, 24), // "RevoCalibrationConstants"
QT_MOC_LITERAL(1, 25, 4), // "Enum"
QT_MOC_LITERAL(2, 30, 21) // "BiasCorrectedRawCount"

    },
    "RevoCalibrationConstants\0Enum\0"
    "BiasCorrectedRawCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RevoCalibrationConstants[] = {

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
       2, uint(RevoCalibrationConstants::BiasCorrectedRawCount),

       0        // eod
};

void RevoCalibrationConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RevoCalibrationConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_RevoCalibrationConstants.data,
    qt_meta_data_RevoCalibrationConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RevoCalibrationConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RevoCalibrationConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RevoCalibrationConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RevoCalibrationConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RevoCalibration_BiasCorrectedRaw_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RevoCalibration_BiasCorrectedRaw_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RevoCalibration_BiasCorrectedRaw_t qt_meta_stringdata_RevoCalibration_BiasCorrectedRaw = {
    {
QT_MOC_LITERAL(0, 0, 32), // "RevoCalibration_BiasCorrectedRaw"
QT_MOC_LITERAL(1, 33, 4), // "Enum"
QT_MOC_LITERAL(2, 38, 5), // "False"
QT_MOC_LITERAL(3, 44, 4) // "True"

    },
    "RevoCalibration_BiasCorrectedRaw\0Enum\0"
    "False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RevoCalibration_BiasCorrectedRaw[] = {

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
       2, uint(RevoCalibration_BiasCorrectedRaw::False),
       3, uint(RevoCalibration_BiasCorrectedRaw::True),

       0        // eod
};

void RevoCalibration_BiasCorrectedRaw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RevoCalibration_BiasCorrectedRaw::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_RevoCalibration_BiasCorrectedRaw.data,
    qt_meta_data_RevoCalibration_BiasCorrectedRaw,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RevoCalibration_BiasCorrectedRaw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RevoCalibration_BiasCorrectedRaw::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RevoCalibration_BiasCorrectedRaw.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RevoCalibration_BiasCorrectedRaw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RevoCalibration_t {
    QByteArrayData data[114];
    char stringdata0[2152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RevoCalibration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RevoCalibration_t qt_meta_stringdata_RevoCalibration = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RevoCalibration"
QT_MOC_LITERAL(1, 16, 14), // "magBiasChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "index"
QT_MOC_LITERAL(4, 38, 5), // "value"
QT_MOC_LITERAL(5, 44, 15), // "mag_biasChanged"
QT_MOC_LITERAL(6, 60, 15), // "magBiasXChanged"
QT_MOC_LITERAL(7, 76, 17), // "mag_bias_XChanged"
QT_MOC_LITERAL(8, 94, 15), // "magBiasYChanged"
QT_MOC_LITERAL(9, 110, 17), // "mag_bias_YChanged"
QT_MOC_LITERAL(10, 128, 15), // "magBiasZChanged"
QT_MOC_LITERAL(11, 144, 17), // "mag_bias_ZChanged"
QT_MOC_LITERAL(12, 162, 19), // "magTransformChanged"
QT_MOC_LITERAL(13, 182, 20), // "mag_transformChanged"
QT_MOC_LITERAL(14, 203, 23), // "magTransformr0c0Changed"
QT_MOC_LITERAL(15, 227, 25), // "mag_transform_r0c0Changed"
QT_MOC_LITERAL(16, 253, 23), // "magTransformr0c1Changed"
QT_MOC_LITERAL(17, 277, 25), // "mag_transform_r0c1Changed"
QT_MOC_LITERAL(18, 303, 23), // "magTransformr0c2Changed"
QT_MOC_LITERAL(19, 327, 25), // "mag_transform_r0c2Changed"
QT_MOC_LITERAL(20, 353, 23), // "magTransformr1c0Changed"
QT_MOC_LITERAL(21, 377, 25), // "mag_transform_r1c0Changed"
QT_MOC_LITERAL(22, 403, 23), // "magTransformr1c1Changed"
QT_MOC_LITERAL(23, 427, 25), // "mag_transform_r1c1Changed"
QT_MOC_LITERAL(24, 453, 23), // "magTransformr1c2Changed"
QT_MOC_LITERAL(25, 477, 25), // "mag_transform_r1c2Changed"
QT_MOC_LITERAL(26, 503, 23), // "magTransformr2c0Changed"
QT_MOC_LITERAL(27, 527, 25), // "mag_transform_r2c0Changed"
QT_MOC_LITERAL(28, 553, 23), // "magTransformr2c1Changed"
QT_MOC_LITERAL(29, 577, 25), // "mag_transform_r2c1Changed"
QT_MOC_LITERAL(30, 603, 23), // "magTransformr2c2Changed"
QT_MOC_LITERAL(31, 627, 25), // "mag_transform_r2c2Changed"
QT_MOC_LITERAL(32, 653, 25), // "magBiasNullingRateChanged"
QT_MOC_LITERAL(33, 679, 25), // "MagBiasNullingRateChanged"
QT_MOC_LITERAL(34, 705, 23), // "biasCorrectedRawChanged"
QT_MOC_LITERAL(35, 729, 38), // "RevoCalibration_BiasCorrected..."
QT_MOC_LITERAL(36, 768, 23), // "BiasCorrectedRawChanged"
QT_MOC_LITERAL(37, 792, 10), // "setMagBias"
QT_MOC_LITERAL(38, 803, 11), // "setmag_bias"
QT_MOC_LITERAL(39, 815, 11), // "setMagBiasX"
QT_MOC_LITERAL(40, 827, 13), // "setmag_bias_X"
QT_MOC_LITERAL(41, 841, 11), // "setMagBiasY"
QT_MOC_LITERAL(42, 853, 13), // "setmag_bias_Y"
QT_MOC_LITERAL(43, 867, 11), // "setMagBiasZ"
QT_MOC_LITERAL(44, 879, 13), // "setmag_bias_Z"
QT_MOC_LITERAL(45, 893, 15), // "setMagTransform"
QT_MOC_LITERAL(46, 909, 16), // "setmag_transform"
QT_MOC_LITERAL(47, 926, 19), // "setMagTransformr0c0"
QT_MOC_LITERAL(48, 946, 21), // "setmag_transform_r0c0"
QT_MOC_LITERAL(49, 968, 19), // "setMagTransformr0c1"
QT_MOC_LITERAL(50, 988, 21), // "setmag_transform_r0c1"
QT_MOC_LITERAL(51, 1010, 19), // "setMagTransformr0c2"
QT_MOC_LITERAL(52, 1030, 21), // "setmag_transform_r0c2"
QT_MOC_LITERAL(53, 1052, 19), // "setMagTransformr1c0"
QT_MOC_LITERAL(54, 1072, 21), // "setmag_transform_r1c0"
QT_MOC_LITERAL(55, 1094, 19), // "setMagTransformr1c1"
QT_MOC_LITERAL(56, 1114, 21), // "setmag_transform_r1c1"
QT_MOC_LITERAL(57, 1136, 19), // "setMagTransformr1c2"
QT_MOC_LITERAL(58, 1156, 21), // "setmag_transform_r1c2"
QT_MOC_LITERAL(59, 1178, 19), // "setMagTransformr2c0"
QT_MOC_LITERAL(60, 1198, 21), // "setmag_transform_r2c0"
QT_MOC_LITERAL(61, 1220, 19), // "setMagTransformr2c1"
QT_MOC_LITERAL(62, 1240, 21), // "setmag_transform_r2c1"
QT_MOC_LITERAL(63, 1262, 19), // "setMagTransformr2c2"
QT_MOC_LITERAL(64, 1282, 21), // "setmag_transform_r2c2"
QT_MOC_LITERAL(65, 1304, 21), // "setMagBiasNullingRate"
QT_MOC_LITERAL(66, 1326, 19), // "setBiasCorrectedRaw"
QT_MOC_LITERAL(67, 1346, 17), // "emitNotifications"
QT_MOC_LITERAL(68, 1364, 7), // "magBias"
QT_MOC_LITERAL(69, 1372, 11), // "getmag_bias"
QT_MOC_LITERAL(70, 1384, 13), // "getmag_bias_X"
QT_MOC_LITERAL(71, 1398, 13), // "getmag_bias_Y"
QT_MOC_LITERAL(72, 1412, 13), // "getmag_bias_Z"
QT_MOC_LITERAL(73, 1426, 12), // "magTransform"
QT_MOC_LITERAL(74, 1439, 16), // "getmag_transform"
QT_MOC_LITERAL(75, 1456, 21), // "getmag_transform_r0c0"
QT_MOC_LITERAL(76, 1478, 21), // "getmag_transform_r0c1"
QT_MOC_LITERAL(77, 1500, 21), // "getmag_transform_r0c2"
QT_MOC_LITERAL(78, 1522, 21), // "getmag_transform_r1c0"
QT_MOC_LITERAL(79, 1544, 21), // "getmag_transform_r1c1"
QT_MOC_LITERAL(80, 1566, 21), // "getmag_transform_r1c2"
QT_MOC_LITERAL(81, 1588, 21), // "getmag_transform_r2c0"
QT_MOC_LITERAL(82, 1610, 21), // "getmag_transform_r2c1"
QT_MOC_LITERAL(83, 1632, 21), // "getmag_transform_r2c2"
QT_MOC_LITERAL(84, 1654, 21), // "getMagBiasNullingRate"
QT_MOC_LITERAL(85, 1676, 19), // "getBiasCorrectedRaw"
QT_MOC_LITERAL(86, 1696, 8), // "magBiasX"
QT_MOC_LITERAL(87, 1705, 8), // "magBiasY"
QT_MOC_LITERAL(88, 1714, 8), // "magBiasZ"
QT_MOC_LITERAL(89, 1723, 16), // "magTransformr0c0"
QT_MOC_LITERAL(90, 1740, 16), // "magTransformr0c1"
QT_MOC_LITERAL(91, 1757, 16), // "magTransformr0c2"
QT_MOC_LITERAL(92, 1774, 16), // "magTransformr1c0"
QT_MOC_LITERAL(93, 1791, 16), // "magTransformr1c1"
QT_MOC_LITERAL(94, 1808, 16), // "magTransformr1c2"
QT_MOC_LITERAL(95, 1825, 16), // "magTransformr2c0"
QT_MOC_LITERAL(96, 1842, 16), // "magTransformr2c1"
QT_MOC_LITERAL(97, 1859, 16), // "magTransformr2c2"
QT_MOC_LITERAL(98, 1876, 18), // "magBiasNullingRate"
QT_MOC_LITERAL(99, 1895, 16), // "biasCorrectedRaw"
QT_MOC_LITERAL(100, 1912, 10), // "mag_bias_X"
QT_MOC_LITERAL(101, 1923, 10), // "mag_bias_Y"
QT_MOC_LITERAL(102, 1934, 10), // "mag_bias_Z"
QT_MOC_LITERAL(103, 1945, 18), // "mag_transform_r0c0"
QT_MOC_LITERAL(104, 1964, 18), // "mag_transform_r0c1"
QT_MOC_LITERAL(105, 1983, 18), // "mag_transform_r0c2"
QT_MOC_LITERAL(106, 2002, 18), // "mag_transform_r1c0"
QT_MOC_LITERAL(107, 2021, 18), // "mag_transform_r1c1"
QT_MOC_LITERAL(108, 2040, 18), // "mag_transform_r1c2"
QT_MOC_LITERAL(109, 2059, 18), // "mag_transform_r2c0"
QT_MOC_LITERAL(110, 2078, 18), // "mag_transform_r2c1"
QT_MOC_LITERAL(111, 2097, 18), // "mag_transform_r2c2"
QT_MOC_LITERAL(112, 2116, 18), // "MagBiasNullingRate"
QT_MOC_LITERAL(113, 2135, 16) // "BiasCorrectedRaw"

    },
    "RevoCalibration\0magBiasChanged\0\0index\0"
    "value\0mag_biasChanged\0magBiasXChanged\0"
    "mag_bias_XChanged\0magBiasYChanged\0"
    "mag_bias_YChanged\0magBiasZChanged\0"
    "mag_bias_ZChanged\0magTransformChanged\0"
    "mag_transformChanged\0magTransformr0c0Changed\0"
    "mag_transform_r0c0Changed\0"
    "magTransformr0c1Changed\0"
    "mag_transform_r0c1Changed\0"
    "magTransformr0c2Changed\0"
    "mag_transform_r0c2Changed\0"
    "magTransformr1c0Changed\0"
    "mag_transform_r1c0Changed\0"
    "magTransformr1c1Changed\0"
    "mag_transform_r1c1Changed\0"
    "magTransformr1c2Changed\0"
    "mag_transform_r1c2Changed\0"
    "magTransformr2c0Changed\0"
    "mag_transform_r2c0Changed\0"
    "magTransformr2c1Changed\0"
    "mag_transform_r2c1Changed\0"
    "magTransformr2c2Changed\0"
    "mag_transform_r2c2Changed\0"
    "magBiasNullingRateChanged\0"
    "MagBiasNullingRateChanged\0"
    "biasCorrectedRawChanged\0"
    "RevoCalibration_BiasCorrectedRaw::Enum\0"
    "BiasCorrectedRawChanged\0setMagBias\0"
    "setmag_bias\0setMagBiasX\0setmag_bias_X\0"
    "setMagBiasY\0setmag_bias_Y\0setMagBiasZ\0"
    "setmag_bias_Z\0setMagTransform\0"
    "setmag_transform\0setMagTransformr0c0\0"
    "setmag_transform_r0c0\0setMagTransformr0c1\0"
    "setmag_transform_r0c1\0setMagTransformr0c2\0"
    "setmag_transform_r0c2\0setMagTransformr1c0\0"
    "setmag_transform_r1c0\0setMagTransformr1c1\0"
    "setmag_transform_r1c1\0setMagTransformr1c2\0"
    "setmag_transform_r1c2\0setMagTransformr2c0\0"
    "setmag_transform_r2c0\0setMagTransformr2c1\0"
    "setmag_transform_r2c1\0setMagTransformr2c2\0"
    "setmag_transform_r2c2\0setMagBiasNullingRate\0"
    "setBiasCorrectedRaw\0emitNotifications\0"
    "magBias\0getmag_bias\0getmag_bias_X\0"
    "getmag_bias_Y\0getmag_bias_Z\0magTransform\0"
    "getmag_transform\0getmag_transform_r0c0\0"
    "getmag_transform_r0c1\0getmag_transform_r0c2\0"
    "getmag_transform_r1c0\0getmag_transform_r1c1\0"
    "getmag_transform_r1c2\0getmag_transform_r2c0\0"
    "getmag_transform_r2c1\0getmag_transform_r2c2\0"
    "getMagBiasNullingRate\0getBiasCorrectedRaw\0"
    "magBiasX\0magBiasY\0magBiasZ\0magTransformr0c0\0"
    "magTransformr0c1\0magTransformr0c2\0"
    "magTransformr1c0\0magTransformr1c1\0"
    "magTransformr1c2\0magTransformr2c0\0"
    "magTransformr2c1\0magTransformr2c2\0"
    "magBiasNullingRate\0biasCorrectedRaw\0"
    "mag_bias_X\0mag_bias_Y\0mag_bias_Z\0"
    "mag_transform_r0c0\0mag_transform_r0c1\0"
    "mag_transform_r0c2\0mag_transform_r1c0\0"
    "mag_transform_r1c1\0mag_transform_r1c2\0"
    "mag_transform_r2c0\0mag_transform_r2c1\0"
    "mag_transform_r2c2\0MagBiasNullingRate\0"
    "BiasCorrectedRaw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RevoCalibration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      82,   14, // methods
      28,  656, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      32,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  424,    2, 0x06 /* Public */,
       5,    2,  429,    2, 0x06 /* Public */,
       6,    1,  434,    2, 0x06 /* Public */,
       7,    1,  437,    2, 0x06 /* Public */,
       8,    1,  440,    2, 0x06 /* Public */,
       9,    1,  443,    2, 0x06 /* Public */,
      10,    1,  446,    2, 0x06 /* Public */,
      11,    1,  449,    2, 0x06 /* Public */,
      12,    2,  452,    2, 0x06 /* Public */,
      13,    2,  457,    2, 0x06 /* Public */,
      14,    1,  462,    2, 0x06 /* Public */,
      15,    1,  465,    2, 0x06 /* Public */,
      16,    1,  468,    2, 0x06 /* Public */,
      17,    1,  471,    2, 0x06 /* Public */,
      18,    1,  474,    2, 0x06 /* Public */,
      19,    1,  477,    2, 0x06 /* Public */,
      20,    1,  480,    2, 0x06 /* Public */,
      21,    1,  483,    2, 0x06 /* Public */,
      22,    1,  486,    2, 0x06 /* Public */,
      23,    1,  489,    2, 0x06 /* Public */,
      24,    1,  492,    2, 0x06 /* Public */,
      25,    1,  495,    2, 0x06 /* Public */,
      26,    1,  498,    2, 0x06 /* Public */,
      27,    1,  501,    2, 0x06 /* Public */,
      28,    1,  504,    2, 0x06 /* Public */,
      29,    1,  507,    2, 0x06 /* Public */,
      30,    1,  510,    2, 0x06 /* Public */,
      31,    1,  513,    2, 0x06 /* Public */,
      32,    1,  516,    2, 0x06 /* Public */,
      33,    1,  519,    2, 0x06 /* Public */,
      34,    1,  522,    2, 0x06 /* Public */,
      36,    1,  525,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      37,    2,  528,    2, 0x0a /* Public */,
      38,    2,  533,    2, 0x0a /* Public */,
      39,    1,  538,    2, 0x0a /* Public */,
      40,    1,  541,    2, 0x0a /* Public */,
      41,    1,  544,    2, 0x0a /* Public */,
      42,    1,  547,    2, 0x0a /* Public */,
      43,    1,  550,    2, 0x0a /* Public */,
      44,    1,  553,    2, 0x0a /* Public */,
      45,    2,  556,    2, 0x0a /* Public */,
      46,    2,  561,    2, 0x0a /* Public */,
      47,    1,  566,    2, 0x0a /* Public */,
      48,    1,  569,    2, 0x0a /* Public */,
      49,    1,  572,    2, 0x0a /* Public */,
      50,    1,  575,    2, 0x0a /* Public */,
      51,    1,  578,    2, 0x0a /* Public */,
      52,    1,  581,    2, 0x0a /* Public */,
      53,    1,  584,    2, 0x0a /* Public */,
      54,    1,  587,    2, 0x0a /* Public */,
      55,    1,  590,    2, 0x0a /* Public */,
      56,    1,  593,    2, 0x0a /* Public */,
      57,    1,  596,    2, 0x0a /* Public */,
      58,    1,  599,    2, 0x0a /* Public */,
      59,    1,  602,    2, 0x0a /* Public */,
      60,    1,  605,    2, 0x0a /* Public */,
      61,    1,  608,    2, 0x0a /* Public */,
      62,    1,  611,    2, 0x0a /* Public */,
      63,    1,  614,    2, 0x0a /* Public */,
      64,    1,  617,    2, 0x0a /* Public */,
      65,    1,  620,    2, 0x0a /* Public */,
      66,    1,  623,    2, 0x0a /* Public */,
      66,    1,  626,    2, 0x0a /* Public */,
      67,    0,  629,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      68,    1,  630,    2, 0x02 /* Public */,
      69,    1,  633,    2, 0x02 /* Public */,
      70,    0,  636,    2, 0x02 /* Public */,
      71,    0,  637,    2, 0x02 /* Public */,
      72,    0,  638,    2, 0x02 /* Public */,
      73,    1,  639,    2, 0x02 /* Public */,
      74,    1,  642,    2, 0x02 /* Public */,
      75,    0,  645,    2, 0x02 /* Public */,
      76,    0,  646,    2, 0x02 /* Public */,
      77,    0,  647,    2, 0x02 /* Public */,
      78,    0,  648,    2, 0x02 /* Public */,
      79,    0,  649,    2, 0x02 /* Public */,
      80,    0,  650,    2, 0x02 /* Public */,
      81,    0,  651,    2, 0x02 /* Public */,
      82,    0,  652,    2, 0x02 /* Public */,
      83,    0,  653,    2, 0x02 /* Public */,
      84,    0,  654,    2, 0x02 /* Public */,
      85,    0,  655,    2, 0x02 /* Public */,

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
    QMetaType::Void, 0x80000000 | 35,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
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
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, 0x80000000 | 35,    4,
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
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,

 // properties: name, type, flags
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
      99, 0x80000000 | 35, 0x0049510b,
     100, QMetaType::Float, 0x00495003,
     101, QMetaType::Float, 0x00495003,
     102, QMetaType::Float, 0x00495003,
     103, QMetaType::Float, 0x00495003,
     104, QMetaType::Float, 0x00495003,
     105, QMetaType::Float, 0x00495003,
     106, QMetaType::Float, 0x00495003,
     107, QMetaType::Float, 0x00495003,
     108, QMetaType::Float, 0x00495003,
     109, QMetaType::Float, 0x00495003,
     110, QMetaType::Float, 0x00495003,
     111, QMetaType::Float, 0x00495003,
     112, QMetaType::Float, 0x00495103,
     113, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
      10,
      12,
      14,
      16,
      18,
      20,
      22,
      24,
      26,
      28,
      30,
       3,
       5,
       7,
      11,
      13,
      15,
      17,
      19,
      21,
      23,
      25,
      27,
      29,
      31,

       0        // eod
};

void RevoCalibration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RevoCalibration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->magBiasChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->mag_biasChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->magBiasXChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->mag_bias_XChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->magBiasYChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->mag_bias_YChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->magBiasZChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->mag_bias_ZChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->magTransformChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 9: _t->mag_transformChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->magTransformr0c0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->mag_transform_r0c0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->magTransformr0c1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->mag_transform_r0c1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->magTransformr0c2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->mag_transform_r0c2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->magTransformr1c0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->mag_transform_r1c0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->magTransformr1c1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->mag_transform_r1c1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->magTransformr1c2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->mag_transform_r1c2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->magTransformr2c0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->mag_transform_r2c0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->magTransformr2c1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->mag_transform_r2c1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->magTransformr2c2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->mag_transform_r2c2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->magBiasNullingRateChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 29: _t->MagBiasNullingRateChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->biasCorrectedRawChanged((*reinterpret_cast< const RevoCalibration_BiasCorrectedRaw::Enum(*)>(_a[1]))); break;
        case 31: _t->BiasCorrectedRawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->setMagBias((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 33: _t->setmag_bias((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 34: _t->setMagBiasX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->setmag_bias_X((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 36: _t->setMagBiasY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 37: _t->setmag_bias_Y((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->setMagBiasZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 39: _t->setmag_bias_Z((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->setMagTransform((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 41: _t->setmag_transform((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 42: _t->setMagTransformr0c0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 43: _t->setmag_transform_r0c0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->setMagTransformr0c1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 45: _t->setmag_transform_r0c1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->setMagTransformr0c2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->setmag_transform_r0c2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->setMagTransformr1c0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 49: _t->setmag_transform_r1c0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 50: _t->setMagTransformr1c1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 51: _t->setmag_transform_r1c1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 52: _t->setMagTransformr1c2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 53: _t->setmag_transform_r1c2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 54: _t->setMagTransformr2c0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 55: _t->setmag_transform_r2c0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 56: _t->setMagTransformr2c1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 57: _t->setmag_transform_r2c1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 58: _t->setMagTransformr2c2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 59: _t->setmag_transform_r2c2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 60: _t->setMagBiasNullingRate((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 61: _t->setBiasCorrectedRaw((*reinterpret_cast< const RevoCalibration_BiasCorrectedRaw::Enum(*)>(_a[1]))); break;
        case 62: _t->setBiasCorrectedRaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 63: _t->emitNotifications(); break;
        case 64: { float _r = _t->magBias((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 65: { float _r = _t->getmag_bias((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 66: { float _r = _t->getmag_bias_X();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 67: { float _r = _t->getmag_bias_Y();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 68: { float _r = _t->getmag_bias_Z();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 69: { float _r = _t->magTransform((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 70: { float _r = _t->getmag_transform((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 71: { float _r = _t->getmag_transform_r0c0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 72: { float _r = _t->getmag_transform_r0c1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 73: { float _r = _t->getmag_transform_r0c2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 74: { float _r = _t->getmag_transform_r1c0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 75: { float _r = _t->getmag_transform_r1c1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 76: { float _r = _t->getmag_transform_r1c2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 77: { float _r = _t->getmag_transform_r2c0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 78: { float _r = _t->getmag_transform_r2c1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 79: { float _r = _t->getmag_transform_r2c2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 80: { float _r = _t->getMagBiasNullingRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 81: { quint8 _r = _t->getBiasCorrectedRaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RevoCalibration::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magBiasChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_biasChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magBiasXChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_bias_XChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magBiasYChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_bias_YChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magBiasZChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_bias_ZChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magTransformChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_transformChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magTransformr0c0Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_transform_r0c0Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magTransformr0c1Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_transform_r0c1Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magTransformr0c2Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_transform_r0c2Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magTransformr1c0Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_transform_r1c0Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magTransformr1c1Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_transform_r1c1Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magTransformr1c2Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_transform_r1c2Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magTransformr2c0Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_transform_r2c0Changed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magTransformr2c1Changed)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_transform_r2c1Changed)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magTransformr2c2Changed)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::mag_transform_r2c2Changed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::magBiasNullingRateChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::MagBiasNullingRateChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(const RevoCalibration_BiasCorrectedRaw::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::biasCorrectedRawChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (RevoCalibration::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoCalibration::BiasCorrectedRawChanged)) {
                *result = 31;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RevoCalibration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->magBiasX(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->magBiasY(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->magBiasZ(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->magTransformr0c0(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->magTransformr0c1(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->magTransformr0c2(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->magTransformr1c0(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->magTransformr1c1(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->magTransformr1c2(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->magTransformr2c0(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->magTransformr2c1(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->magTransformr2c2(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->magBiasNullingRate(); break;
        case 13: *reinterpret_cast< RevoCalibration_BiasCorrectedRaw::Enum*>(_v) = _t->biasCorrectedRaw(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getmag_bias_X(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getmag_bias_Y(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getmag_bias_Z(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r0c0(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r0c1(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r0c2(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r1c0(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r1c1(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r1c2(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r2c0(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r2c1(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r2c2(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->getMagBiasNullingRate(); break;
        case 27: *reinterpret_cast< quint8*>(_v) = _t->getBiasCorrectedRaw(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RevoCalibration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMagBiasX(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setMagBiasY(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setMagBiasZ(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setMagTransformr0c0(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setMagTransformr0c1(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setMagTransformr0c2(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setMagTransformr1c0(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setMagTransformr1c1(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setMagTransformr1c2(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setMagTransformr2c0(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setMagTransformr2c1(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setMagTransformr2c2(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setMagBiasNullingRate(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setBiasCorrectedRaw(*reinterpret_cast< RevoCalibration_BiasCorrectedRaw::Enum*>(_v)); break;
        case 14: _t->setmag_bias_X(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setmag_bias_Y(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setmag_bias_Z(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setmag_transform_r0c0(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setmag_transform_r0c1(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setmag_transform_r0c2(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setmag_transform_r1c0(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setmag_transform_r1c1(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setmag_transform_r1c2(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setmag_transform_r2c0(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setmag_transform_r2c1(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setmag_transform_r2c2(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setMagBiasNullingRate(*reinterpret_cast< float*>(_v)); break;
        case 27: _t->setBiasCorrectedRaw(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_RevoCalibration[] = {
        &RevoCalibration_BiasCorrectedRaw::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject RevoCalibration::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_RevoCalibration.data,
    qt_meta_data_RevoCalibration,
    qt_static_metacall,
    qt_meta_extradata_RevoCalibration,
    nullptr
} };


const QMetaObject *RevoCalibration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RevoCalibration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RevoCalibration.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int RevoCalibration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 82)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 82;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 82)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 82;
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
void RevoCalibration::magBiasChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RevoCalibration::mag_biasChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RevoCalibration::magBiasXChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RevoCalibration::mag_bias_XChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RevoCalibration::magBiasYChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RevoCalibration::mag_bias_YChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RevoCalibration::magBiasZChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RevoCalibration::mag_bias_ZChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RevoCalibration::magTransformChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RevoCalibration::mag_transformChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RevoCalibration::magTransformr0c0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RevoCalibration::mag_transform_r0c0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RevoCalibration::magTransformr0c1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void RevoCalibration::mag_transform_r0c1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void RevoCalibration::magTransformr0c2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void RevoCalibration::mag_transform_r0c2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void RevoCalibration::magTransformr1c0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void RevoCalibration::mag_transform_r1c0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void RevoCalibration::magTransformr1c1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void RevoCalibration::mag_transform_r1c1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void RevoCalibration::magTransformr1c2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void RevoCalibration::mag_transform_r1c2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void RevoCalibration::magTransformr2c0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void RevoCalibration::mag_transform_r2c0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void RevoCalibration::magTransformr2c1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void RevoCalibration::mag_transform_r2c1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void RevoCalibration::magTransformr2c2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void RevoCalibration::mag_transform_r2c2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void RevoCalibration::magBiasNullingRateChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void RevoCalibration::MagBiasNullingRateChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void RevoCalibration::biasCorrectedRawChanged(const RevoCalibration_BiasCorrectedRaw::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void RevoCalibration::BiasCorrectedRawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
