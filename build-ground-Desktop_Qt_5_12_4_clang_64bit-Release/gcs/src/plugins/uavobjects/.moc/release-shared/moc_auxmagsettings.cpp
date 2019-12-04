/****************************************************************************
** Meta object code from reading C++ file 'auxmagsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../auxmagsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auxmagsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AuxMagSettingsConstants_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuxMagSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuxMagSettingsConstants_t qt_meta_stringdata_AuxMagSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AuxMagSettingsConstants"
QT_MOC_LITERAL(1, 24, 4), // "Enum"
QT_MOC_LITERAL(2, 29, 9), // "TypeCount"
QT_MOC_LITERAL(3, 39, 10) // "UsageCount"

    },
    "AuxMagSettingsConstants\0Enum\0TypeCount\0"
    "UsageCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuxMagSettingsConstants[] = {

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
       2, uint(AuxMagSettingsConstants::TypeCount),
       3, uint(AuxMagSettingsConstants::UsageCount),

       0        // eod
};

void AuxMagSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AuxMagSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AuxMagSettingsConstants.data,
    qt_meta_data_AuxMagSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AuxMagSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuxMagSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuxMagSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AuxMagSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AuxMagSettings_Type_t {
    QByteArrayData data[6];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuxMagSettings_Type_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuxMagSettings_Type_t qt_meta_stringdata_AuxMagSettings_Type = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AuxMagSettings_Type"
QT_MOC_LITERAL(1, 20, 4), // "Enum"
QT_MOC_LITERAL(2, 25, 5), // "GPSV9"
QT_MOC_LITERAL(3, 31, 5), // "Flexi"
QT_MOC_LITERAL(4, 37, 3), // "I2C"
QT_MOC_LITERAL(5, 41, 3) // "DJI"

    },
    "AuxMagSettings_Type\0Enum\0GPSV9\0Flexi\0"
    "I2C\0DJI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuxMagSettings_Type[] = {

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
       1,    1, 0x0,    4,   19,

 // enum data: key, value
       2, uint(AuxMagSettings_Type::GPSV9),
       3, uint(AuxMagSettings_Type::Flexi),
       4, uint(AuxMagSettings_Type::I2C),
       5, uint(AuxMagSettings_Type::DJI),

       0        // eod
};

void AuxMagSettings_Type::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AuxMagSettings_Type::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AuxMagSettings_Type.data,
    qt_meta_data_AuxMagSettings_Type,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AuxMagSettings_Type::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuxMagSettings_Type::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuxMagSettings_Type.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AuxMagSettings_Type::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AuxMagSettings_Usage_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuxMagSettings_Usage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuxMagSettings_Usage_t qt_meta_stringdata_AuxMagSettings_Usage = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AuxMagSettings_Usage"
QT_MOC_LITERAL(1, 21, 4), // "Enum"
QT_MOC_LITERAL(2, 26, 4), // "Both"
QT_MOC_LITERAL(3, 31, 11), // "OnboardOnly"
QT_MOC_LITERAL(4, 43, 7) // "AuxOnly"

    },
    "AuxMagSettings_Usage\0Enum\0Both\0"
    "OnboardOnly\0AuxOnly"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuxMagSettings_Usage[] = {

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
       2, uint(AuxMagSettings_Usage::Both),
       3, uint(AuxMagSettings_Usage::OnboardOnly),
       4, uint(AuxMagSettings_Usage::AuxOnly),

       0        // eod
};

void AuxMagSettings_Usage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AuxMagSettings_Usage::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AuxMagSettings_Usage.data,
    qt_meta_data_AuxMagSettings_Usage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AuxMagSettings_Usage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuxMagSettings_Usage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuxMagSettings_Usage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AuxMagSettings_Usage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AuxMagSettings_t {
    QByteArrayData data[147];
    char stringdata0[2698];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuxMagSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuxMagSettings_t qt_meta_stringdata_AuxMagSettings = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AuxMagSettings"
QT_MOC_LITERAL(1, 15, 14), // "magBiasChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "index"
QT_MOC_LITERAL(4, 37, 5), // "value"
QT_MOC_LITERAL(5, 43, 15), // "mag_biasChanged"
QT_MOC_LITERAL(6, 59, 15), // "magBiasXChanged"
QT_MOC_LITERAL(7, 75, 17), // "mag_bias_XChanged"
QT_MOC_LITERAL(8, 93, 15), // "magBiasYChanged"
QT_MOC_LITERAL(9, 109, 17), // "mag_bias_YChanged"
QT_MOC_LITERAL(10, 127, 15), // "magBiasZChanged"
QT_MOC_LITERAL(11, 143, 17), // "mag_bias_ZChanged"
QT_MOC_LITERAL(12, 161, 19), // "magTransformChanged"
QT_MOC_LITERAL(13, 181, 20), // "mag_transformChanged"
QT_MOC_LITERAL(14, 202, 23), // "magTransformr0c0Changed"
QT_MOC_LITERAL(15, 226, 25), // "mag_transform_r0c0Changed"
QT_MOC_LITERAL(16, 252, 23), // "magTransformr0c1Changed"
QT_MOC_LITERAL(17, 276, 25), // "mag_transform_r0c1Changed"
QT_MOC_LITERAL(18, 302, 23), // "magTransformr0c2Changed"
QT_MOC_LITERAL(19, 326, 25), // "mag_transform_r0c2Changed"
QT_MOC_LITERAL(20, 352, 23), // "magTransformr1c0Changed"
QT_MOC_LITERAL(21, 376, 25), // "mag_transform_r1c0Changed"
QT_MOC_LITERAL(22, 402, 23), // "magTransformr1c1Changed"
QT_MOC_LITERAL(23, 426, 25), // "mag_transform_r1c1Changed"
QT_MOC_LITERAL(24, 452, 23), // "magTransformr1c2Changed"
QT_MOC_LITERAL(25, 476, 25), // "mag_transform_r1c2Changed"
QT_MOC_LITERAL(26, 502, 23), // "magTransformr2c0Changed"
QT_MOC_LITERAL(27, 526, 25), // "mag_transform_r2c0Changed"
QT_MOC_LITERAL(28, 552, 23), // "magTransformr2c1Changed"
QT_MOC_LITERAL(29, 576, 25), // "mag_transform_r2c1Changed"
QT_MOC_LITERAL(30, 602, 23), // "magTransformr2c2Changed"
QT_MOC_LITERAL(31, 626, 25), // "mag_transform_r2c2Changed"
QT_MOC_LITERAL(32, 652, 25), // "magBiasNullingRateChanged"
QT_MOC_LITERAL(33, 678, 25), // "MagBiasNullingRateChanged"
QT_MOC_LITERAL(34, 704, 20), // "boardRotationChanged"
QT_MOC_LITERAL(35, 725, 20), // "BoardRotationChanged"
QT_MOC_LITERAL(36, 746, 24), // "boardRotationRollChanged"
QT_MOC_LITERAL(37, 771, 25), // "BoardRotation_RollChanged"
QT_MOC_LITERAL(38, 797, 25), // "boardRotationPitchChanged"
QT_MOC_LITERAL(39, 823, 26), // "BoardRotation_PitchChanged"
QT_MOC_LITERAL(40, 850, 23), // "boardRotationYawChanged"
QT_MOC_LITERAL(41, 874, 24), // "BoardRotation_YawChanged"
QT_MOC_LITERAL(42, 899, 11), // "typeChanged"
QT_MOC_LITERAL(43, 911, 25), // "AuxMagSettings_Type::Enum"
QT_MOC_LITERAL(44, 937, 11), // "TypeChanged"
QT_MOC_LITERAL(45, 949, 12), // "usageChanged"
QT_MOC_LITERAL(46, 962, 26), // "AuxMagSettings_Usage::Enum"
QT_MOC_LITERAL(47, 989, 12), // "UsageChanged"
QT_MOC_LITERAL(48, 1002, 10), // "setMagBias"
QT_MOC_LITERAL(49, 1013, 11), // "setmag_bias"
QT_MOC_LITERAL(50, 1025, 11), // "setMagBiasX"
QT_MOC_LITERAL(51, 1037, 13), // "setmag_bias_X"
QT_MOC_LITERAL(52, 1051, 11), // "setMagBiasY"
QT_MOC_LITERAL(53, 1063, 13), // "setmag_bias_Y"
QT_MOC_LITERAL(54, 1077, 11), // "setMagBiasZ"
QT_MOC_LITERAL(55, 1089, 13), // "setmag_bias_Z"
QT_MOC_LITERAL(56, 1103, 15), // "setMagTransform"
QT_MOC_LITERAL(57, 1119, 16), // "setmag_transform"
QT_MOC_LITERAL(58, 1136, 19), // "setMagTransformr0c0"
QT_MOC_LITERAL(59, 1156, 21), // "setmag_transform_r0c0"
QT_MOC_LITERAL(60, 1178, 19), // "setMagTransformr0c1"
QT_MOC_LITERAL(61, 1198, 21), // "setmag_transform_r0c1"
QT_MOC_LITERAL(62, 1220, 19), // "setMagTransformr0c2"
QT_MOC_LITERAL(63, 1240, 21), // "setmag_transform_r0c2"
QT_MOC_LITERAL(64, 1262, 19), // "setMagTransformr1c0"
QT_MOC_LITERAL(65, 1282, 21), // "setmag_transform_r1c0"
QT_MOC_LITERAL(66, 1304, 19), // "setMagTransformr1c1"
QT_MOC_LITERAL(67, 1324, 21), // "setmag_transform_r1c1"
QT_MOC_LITERAL(68, 1346, 19), // "setMagTransformr1c2"
QT_MOC_LITERAL(69, 1366, 21), // "setmag_transform_r1c2"
QT_MOC_LITERAL(70, 1388, 19), // "setMagTransformr2c0"
QT_MOC_LITERAL(71, 1408, 21), // "setmag_transform_r2c0"
QT_MOC_LITERAL(72, 1430, 19), // "setMagTransformr2c1"
QT_MOC_LITERAL(73, 1450, 21), // "setmag_transform_r2c1"
QT_MOC_LITERAL(74, 1472, 19), // "setMagTransformr2c2"
QT_MOC_LITERAL(75, 1492, 21), // "setmag_transform_r2c2"
QT_MOC_LITERAL(76, 1514, 21), // "setMagBiasNullingRate"
QT_MOC_LITERAL(77, 1536, 16), // "setBoardRotation"
QT_MOC_LITERAL(78, 1553, 20), // "setBoardRotationRoll"
QT_MOC_LITERAL(79, 1574, 21), // "setBoardRotation_Roll"
QT_MOC_LITERAL(80, 1596, 21), // "setBoardRotationPitch"
QT_MOC_LITERAL(81, 1618, 22), // "setBoardRotation_Pitch"
QT_MOC_LITERAL(82, 1641, 19), // "setBoardRotationYaw"
QT_MOC_LITERAL(83, 1661, 20), // "setBoardRotation_Yaw"
QT_MOC_LITERAL(84, 1682, 7), // "setType"
QT_MOC_LITERAL(85, 1690, 8), // "setUsage"
QT_MOC_LITERAL(86, 1699, 17), // "emitNotifications"
QT_MOC_LITERAL(87, 1717, 7), // "magBias"
QT_MOC_LITERAL(88, 1725, 11), // "getmag_bias"
QT_MOC_LITERAL(89, 1737, 13), // "getmag_bias_X"
QT_MOC_LITERAL(90, 1751, 13), // "getmag_bias_Y"
QT_MOC_LITERAL(91, 1765, 13), // "getmag_bias_Z"
QT_MOC_LITERAL(92, 1779, 12), // "magTransform"
QT_MOC_LITERAL(93, 1792, 16), // "getmag_transform"
QT_MOC_LITERAL(94, 1809, 21), // "getmag_transform_r0c0"
QT_MOC_LITERAL(95, 1831, 21), // "getmag_transform_r0c1"
QT_MOC_LITERAL(96, 1853, 21), // "getmag_transform_r0c2"
QT_MOC_LITERAL(97, 1875, 21), // "getmag_transform_r1c0"
QT_MOC_LITERAL(98, 1897, 21), // "getmag_transform_r1c1"
QT_MOC_LITERAL(99, 1919, 21), // "getmag_transform_r1c2"
QT_MOC_LITERAL(100, 1941, 21), // "getmag_transform_r2c0"
QT_MOC_LITERAL(101, 1963, 21), // "getmag_transform_r2c1"
QT_MOC_LITERAL(102, 1985, 21), // "getmag_transform_r2c2"
QT_MOC_LITERAL(103, 2007, 21), // "getMagBiasNullingRate"
QT_MOC_LITERAL(104, 2029, 13), // "boardRotation"
QT_MOC_LITERAL(105, 2043, 16), // "getBoardRotation"
QT_MOC_LITERAL(106, 2060, 21), // "getBoardRotation_Roll"
QT_MOC_LITERAL(107, 2082, 22), // "getBoardRotation_Pitch"
QT_MOC_LITERAL(108, 2105, 20), // "getBoardRotation_Yaw"
QT_MOC_LITERAL(109, 2126, 7), // "getType"
QT_MOC_LITERAL(110, 2134, 8), // "getUsage"
QT_MOC_LITERAL(111, 2143, 8), // "magBiasX"
QT_MOC_LITERAL(112, 2152, 8), // "magBiasY"
QT_MOC_LITERAL(113, 2161, 8), // "magBiasZ"
QT_MOC_LITERAL(114, 2170, 16), // "magTransformr0c0"
QT_MOC_LITERAL(115, 2187, 16), // "magTransformr0c1"
QT_MOC_LITERAL(116, 2204, 16), // "magTransformr0c2"
QT_MOC_LITERAL(117, 2221, 16), // "magTransformr1c0"
QT_MOC_LITERAL(118, 2238, 16), // "magTransformr1c1"
QT_MOC_LITERAL(119, 2255, 16), // "magTransformr1c2"
QT_MOC_LITERAL(120, 2272, 16), // "magTransformr2c0"
QT_MOC_LITERAL(121, 2289, 16), // "magTransformr2c1"
QT_MOC_LITERAL(122, 2306, 16), // "magTransformr2c2"
QT_MOC_LITERAL(123, 2323, 18), // "magBiasNullingRate"
QT_MOC_LITERAL(124, 2342, 17), // "boardRotationRoll"
QT_MOC_LITERAL(125, 2360, 18), // "boardRotationPitch"
QT_MOC_LITERAL(126, 2379, 16), // "boardRotationYaw"
QT_MOC_LITERAL(127, 2396, 4), // "type"
QT_MOC_LITERAL(128, 2401, 5), // "usage"
QT_MOC_LITERAL(129, 2407, 10), // "mag_bias_X"
QT_MOC_LITERAL(130, 2418, 10), // "mag_bias_Y"
QT_MOC_LITERAL(131, 2429, 10), // "mag_bias_Z"
QT_MOC_LITERAL(132, 2440, 18), // "mag_transform_r0c0"
QT_MOC_LITERAL(133, 2459, 18), // "mag_transform_r0c1"
QT_MOC_LITERAL(134, 2478, 18), // "mag_transform_r0c2"
QT_MOC_LITERAL(135, 2497, 18), // "mag_transform_r1c0"
QT_MOC_LITERAL(136, 2516, 18), // "mag_transform_r1c1"
QT_MOC_LITERAL(137, 2535, 18), // "mag_transform_r1c2"
QT_MOC_LITERAL(138, 2554, 18), // "mag_transform_r2c0"
QT_MOC_LITERAL(139, 2573, 18), // "mag_transform_r2c1"
QT_MOC_LITERAL(140, 2592, 18), // "mag_transform_r2c2"
QT_MOC_LITERAL(141, 2611, 18), // "MagBiasNullingRate"
QT_MOC_LITERAL(142, 2630, 18), // "BoardRotation_Roll"
QT_MOC_LITERAL(143, 2649, 19), // "BoardRotation_Pitch"
QT_MOC_LITERAL(144, 2669, 17), // "BoardRotation_Yaw"
QT_MOC_LITERAL(145, 2687, 4), // "Type"
QT_MOC_LITERAL(146, 2692, 5) // "Usage"

    },
    "AuxMagSettings\0magBiasChanged\0\0index\0"
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
    "boardRotationChanged\0BoardRotationChanged\0"
    "boardRotationRollChanged\0"
    "BoardRotation_RollChanged\0"
    "boardRotationPitchChanged\0"
    "BoardRotation_PitchChanged\0"
    "boardRotationYawChanged\0"
    "BoardRotation_YawChanged\0typeChanged\0"
    "AuxMagSettings_Type::Enum\0TypeChanged\0"
    "usageChanged\0AuxMagSettings_Usage::Enum\0"
    "UsageChanged\0setMagBias\0setmag_bias\0"
    "setMagBiasX\0setmag_bias_X\0setMagBiasY\0"
    "setmag_bias_Y\0setMagBiasZ\0setmag_bias_Z\0"
    "setMagTransform\0setmag_transform\0"
    "setMagTransformr0c0\0setmag_transform_r0c0\0"
    "setMagTransformr0c1\0setmag_transform_r0c1\0"
    "setMagTransformr0c2\0setmag_transform_r0c2\0"
    "setMagTransformr1c0\0setmag_transform_r1c0\0"
    "setMagTransformr1c1\0setmag_transform_r1c1\0"
    "setMagTransformr1c2\0setmag_transform_r1c2\0"
    "setMagTransformr2c0\0setmag_transform_r2c0\0"
    "setMagTransformr2c1\0setmag_transform_r2c1\0"
    "setMagTransformr2c2\0setmag_transform_r2c2\0"
    "setMagBiasNullingRate\0setBoardRotation\0"
    "setBoardRotationRoll\0setBoardRotation_Roll\0"
    "setBoardRotationPitch\0setBoardRotation_Pitch\0"
    "setBoardRotationYaw\0setBoardRotation_Yaw\0"
    "setType\0setUsage\0emitNotifications\0"
    "magBias\0getmag_bias\0getmag_bias_X\0"
    "getmag_bias_Y\0getmag_bias_Z\0magTransform\0"
    "getmag_transform\0getmag_transform_r0c0\0"
    "getmag_transform_r0c1\0getmag_transform_r0c2\0"
    "getmag_transform_r1c0\0getmag_transform_r1c1\0"
    "getmag_transform_r1c2\0getmag_transform_r2c0\0"
    "getmag_transform_r2c1\0getmag_transform_r2c2\0"
    "getMagBiasNullingRate\0boardRotation\0"
    "getBoardRotation\0getBoardRotation_Roll\0"
    "getBoardRotation_Pitch\0getBoardRotation_Yaw\0"
    "getType\0getUsage\0magBiasX\0magBiasY\0"
    "magBiasZ\0magTransformr0c0\0magTransformr0c1\0"
    "magTransformr0c2\0magTransformr1c0\0"
    "magTransformr1c1\0magTransformr1c2\0"
    "magTransformr2c0\0magTransformr2c1\0"
    "magTransformr2c2\0magBiasNullingRate\0"
    "boardRotationRoll\0boardRotationPitch\0"
    "boardRotationYaw\0type\0usage\0mag_bias_X\0"
    "mag_bias_Y\0mag_bias_Z\0mag_transform_r0c0\0"
    "mag_transform_r0c1\0mag_transform_r0c2\0"
    "mag_transform_r1c0\0mag_transform_r1c1\0"
    "mag_transform_r1c2\0mag_transform_r2c0\0"
    "mag_transform_r2c1\0mag_transform_r2c2\0"
    "MagBiasNullingRate\0BoardRotation_Roll\0"
    "BoardRotation_Pitch\0BoardRotation_Yaw\0"
    "Type\0Usage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuxMagSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     107,   14, // methods
      36,  854, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      42,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  549,    2, 0x06 /* Public */,
       5,    2,  554,    2, 0x06 /* Public */,
       6,    1,  559,    2, 0x06 /* Public */,
       7,    1,  562,    2, 0x06 /* Public */,
       8,    1,  565,    2, 0x06 /* Public */,
       9,    1,  568,    2, 0x06 /* Public */,
      10,    1,  571,    2, 0x06 /* Public */,
      11,    1,  574,    2, 0x06 /* Public */,
      12,    2,  577,    2, 0x06 /* Public */,
      13,    2,  582,    2, 0x06 /* Public */,
      14,    1,  587,    2, 0x06 /* Public */,
      15,    1,  590,    2, 0x06 /* Public */,
      16,    1,  593,    2, 0x06 /* Public */,
      17,    1,  596,    2, 0x06 /* Public */,
      18,    1,  599,    2, 0x06 /* Public */,
      19,    1,  602,    2, 0x06 /* Public */,
      20,    1,  605,    2, 0x06 /* Public */,
      21,    1,  608,    2, 0x06 /* Public */,
      22,    1,  611,    2, 0x06 /* Public */,
      23,    1,  614,    2, 0x06 /* Public */,
      24,    1,  617,    2, 0x06 /* Public */,
      25,    1,  620,    2, 0x06 /* Public */,
      26,    1,  623,    2, 0x06 /* Public */,
      27,    1,  626,    2, 0x06 /* Public */,
      28,    1,  629,    2, 0x06 /* Public */,
      29,    1,  632,    2, 0x06 /* Public */,
      30,    1,  635,    2, 0x06 /* Public */,
      31,    1,  638,    2, 0x06 /* Public */,
      32,    1,  641,    2, 0x06 /* Public */,
      33,    1,  644,    2, 0x06 /* Public */,
      34,    2,  647,    2, 0x06 /* Public */,
      35,    2,  652,    2, 0x06 /* Public */,
      36,    1,  657,    2, 0x06 /* Public */,
      37,    1,  660,    2, 0x06 /* Public */,
      38,    1,  663,    2, 0x06 /* Public */,
      39,    1,  666,    2, 0x06 /* Public */,
      40,    1,  669,    2, 0x06 /* Public */,
      41,    1,  672,    2, 0x06 /* Public */,
      42,    1,  675,    2, 0x06 /* Public */,
      44,    1,  678,    2, 0x06 /* Public */,
      45,    1,  681,    2, 0x06 /* Public */,
      47,    1,  684,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      48,    2,  687,    2, 0x0a /* Public */,
      49,    2,  692,    2, 0x0a /* Public */,
      50,    1,  697,    2, 0x0a /* Public */,
      51,    1,  700,    2, 0x0a /* Public */,
      52,    1,  703,    2, 0x0a /* Public */,
      53,    1,  706,    2, 0x0a /* Public */,
      54,    1,  709,    2, 0x0a /* Public */,
      55,    1,  712,    2, 0x0a /* Public */,
      56,    2,  715,    2, 0x0a /* Public */,
      57,    2,  720,    2, 0x0a /* Public */,
      58,    1,  725,    2, 0x0a /* Public */,
      59,    1,  728,    2, 0x0a /* Public */,
      60,    1,  731,    2, 0x0a /* Public */,
      61,    1,  734,    2, 0x0a /* Public */,
      62,    1,  737,    2, 0x0a /* Public */,
      63,    1,  740,    2, 0x0a /* Public */,
      64,    1,  743,    2, 0x0a /* Public */,
      65,    1,  746,    2, 0x0a /* Public */,
      66,    1,  749,    2, 0x0a /* Public */,
      67,    1,  752,    2, 0x0a /* Public */,
      68,    1,  755,    2, 0x0a /* Public */,
      69,    1,  758,    2, 0x0a /* Public */,
      70,    1,  761,    2, 0x0a /* Public */,
      71,    1,  764,    2, 0x0a /* Public */,
      72,    1,  767,    2, 0x0a /* Public */,
      73,    1,  770,    2, 0x0a /* Public */,
      74,    1,  773,    2, 0x0a /* Public */,
      75,    1,  776,    2, 0x0a /* Public */,
      76,    1,  779,    2, 0x0a /* Public */,
      77,    2,  782,    2, 0x0a /* Public */,
      78,    1,  787,    2, 0x0a /* Public */,
      79,    1,  790,    2, 0x0a /* Public */,
      80,    1,  793,    2, 0x0a /* Public */,
      81,    1,  796,    2, 0x0a /* Public */,
      82,    1,  799,    2, 0x0a /* Public */,
      83,    1,  802,    2, 0x0a /* Public */,
      84,    1,  805,    2, 0x0a /* Public */,
      84,    1,  808,    2, 0x0a /* Public */,
      85,    1,  811,    2, 0x0a /* Public */,
      85,    1,  814,    2, 0x0a /* Public */,
      86,    0,  817,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      87,    1,  818,    2, 0x02 /* Public */,
      88,    1,  821,    2, 0x02 /* Public */,
      89,    0,  824,    2, 0x02 /* Public */,
      90,    0,  825,    2, 0x02 /* Public */,
      91,    0,  826,    2, 0x02 /* Public */,
      92,    1,  827,    2, 0x02 /* Public */,
      93,    1,  830,    2, 0x02 /* Public */,
      94,    0,  833,    2, 0x02 /* Public */,
      95,    0,  834,    2, 0x02 /* Public */,
      96,    0,  835,    2, 0x02 /* Public */,
      97,    0,  836,    2, 0x02 /* Public */,
      98,    0,  837,    2, 0x02 /* Public */,
      99,    0,  838,    2, 0x02 /* Public */,
     100,    0,  839,    2, 0x02 /* Public */,
     101,    0,  840,    2, 0x02 /* Public */,
     102,    0,  841,    2, 0x02 /* Public */,
     103,    0,  842,    2, 0x02 /* Public */,
     104,    1,  843,    2, 0x02 /* Public */,
     105,    1,  846,    2, 0x02 /* Public */,
     106,    0,  849,    2, 0x02 /* Public */,
     107,    0,  850,    2, 0x02 /* Public */,
     108,    0,  851,    2, 0x02 /* Public */,
     109,    0,  852,    2, 0x02 /* Public */,
     110,    0,  853,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, 0x80000000 | 43,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 46,    4,
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
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, 0x80000000 | 43,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 46,    4,
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
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
     111, QMetaType::Float, 0x00495103,
     112, QMetaType::Float, 0x00495103,
     113, QMetaType::Float, 0x00495103,
     114, QMetaType::Float, 0x00495103,
     115, QMetaType::Float, 0x00495103,
     116, QMetaType::Float, 0x00495103,
     117, QMetaType::Float, 0x00495103,
     118, QMetaType::Float, 0x00495103,
     119, QMetaType::Float, 0x00495103,
     120, QMetaType::Float, 0x00495103,
     121, QMetaType::Float, 0x00495103,
     122, QMetaType::Float, 0x00495103,
     123, QMetaType::Float, 0x00495103,
     124, QMetaType::Short, 0x00495103,
     125, QMetaType::Short, 0x00495103,
     126, QMetaType::Short, 0x00495103,
     127, 0x80000000 | 43, 0x0049510b,
     128, 0x80000000 | 46, 0x0049510b,
     129, QMetaType::Float, 0x00495003,
     130, QMetaType::Float, 0x00495003,
     131, QMetaType::Float, 0x00495003,
     132, QMetaType::Float, 0x00495003,
     133, QMetaType::Float, 0x00495003,
     134, QMetaType::Float, 0x00495003,
     135, QMetaType::Float, 0x00495003,
     136, QMetaType::Float, 0x00495003,
     137, QMetaType::Float, 0x00495003,
     138, QMetaType::Float, 0x00495003,
     139, QMetaType::Float, 0x00495003,
     140, QMetaType::Float, 0x00495003,
     141, QMetaType::Float, 0x00495103,
     142, QMetaType::Short, 0x00495103,
     143, QMetaType::Short, 0x00495103,
     144, QMetaType::Short, 0x00495103,
     145, QMetaType::UChar, 0x00495103,
     146, QMetaType::UChar, 0x00495103,

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
      32,
      34,
      36,
      38,
      40,
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
      33,
      35,
      37,
      39,
      41,

       0        // eod
};

void AuxMagSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AuxMagSettings *>(_o);
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
        case 30: _t->boardRotationChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 31: _t->BoardRotationChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 32: _t->boardRotationRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 33: _t->BoardRotation_RollChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 34: _t->boardRotationPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 35: _t->BoardRotation_PitchChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 36: _t->boardRotationYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 37: _t->BoardRotation_YawChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 38: _t->typeChanged((*reinterpret_cast< const AuxMagSettings_Type::Enum(*)>(_a[1]))); break;
        case 39: _t->TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->usageChanged((*reinterpret_cast< const AuxMagSettings_Usage::Enum(*)>(_a[1]))); break;
        case 41: _t->UsageChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->setMagBias((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 43: _t->setmag_bias((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 44: _t->setMagBiasX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 45: _t->setmag_bias_X((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->setMagBiasY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->setmag_bias_Y((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->setMagBiasZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 49: _t->setmag_bias_Z((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 50: _t->setMagTransform((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 51: _t->setmag_transform((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 52: _t->setMagTransformr0c0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 53: _t->setmag_transform_r0c0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 54: _t->setMagTransformr0c1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 55: _t->setmag_transform_r0c1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 56: _t->setMagTransformr0c2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 57: _t->setmag_transform_r0c2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 58: _t->setMagTransformr1c0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 59: _t->setmag_transform_r1c0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 60: _t->setMagTransformr1c1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 61: _t->setmag_transform_r1c1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 62: _t->setMagTransformr1c2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 63: _t->setmag_transform_r1c2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 64: _t->setMagTransformr2c0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 65: _t->setmag_transform_r2c0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 66: _t->setMagTransformr2c1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 67: _t->setmag_transform_r2c1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 68: _t->setMagTransformr2c2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 69: _t->setmag_transform_r2c2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 70: _t->setMagBiasNullingRate((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 71: _t->setBoardRotation((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 72: _t->setBoardRotationRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 73: _t->setBoardRotation_Roll((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 74: _t->setBoardRotationPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 75: _t->setBoardRotation_Pitch((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 76: _t->setBoardRotationYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 77: _t->setBoardRotation_Yaw((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 78: _t->setType((*reinterpret_cast< const AuxMagSettings_Type::Enum(*)>(_a[1]))); break;
        case 79: _t->setType((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 80: _t->setUsage((*reinterpret_cast< const AuxMagSettings_Usage::Enum(*)>(_a[1]))); break;
        case 81: _t->setUsage((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 82: _t->emitNotifications(); break;
        case 83: { float _r = _t->magBias((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 84: { float _r = _t->getmag_bias((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 85: { float _r = _t->getmag_bias_X();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 86: { float _r = _t->getmag_bias_Y();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 87: { float _r = _t->getmag_bias_Z();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 88: { float _r = _t->magTransform((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 89: { float _r = _t->getmag_transform((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 90: { float _r = _t->getmag_transform_r0c0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 91: { float _r = _t->getmag_transform_r0c1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 92: { float _r = _t->getmag_transform_r0c2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 93: { float _r = _t->getmag_transform_r1c0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 94: { float _r = _t->getmag_transform_r1c1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 95: { float _r = _t->getmag_transform_r1c2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 96: { float _r = _t->getmag_transform_r2c0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 97: { float _r = _t->getmag_transform_r2c1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 98: { float _r = _t->getmag_transform_r2c2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 99: { float _r = _t->getMagBiasNullingRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 100: { qint16 _r = _t->boardRotation((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 101: { qint16 _r = _t->getBoardRotation((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 102: { qint16 _r = _t->getBoardRotation_Roll();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 103: { qint16 _r = _t->getBoardRotation_Pitch();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 104: { qint16 _r = _t->getBoardRotation_Yaw();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 105: { quint8 _r = _t->getType();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 106: { quint8 _r = _t->getUsage();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AuxMagSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magBiasChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_biasChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magBiasXChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_bias_XChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magBiasYChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_bias_YChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magBiasZChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_bias_ZChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magTransformChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_transformChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magTransformr0c0Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_transform_r0c0Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magTransformr0c1Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_transform_r0c1Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magTransformr0c2Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_transform_r0c2Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magTransformr1c0Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_transform_r1c0Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magTransformr1c1Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_transform_r1c1Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magTransformr1c2Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_transform_r1c2Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magTransformr2c0Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_transform_r2c0Changed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magTransformr2c1Changed)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_transform_r2c1Changed)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magTransformr2c2Changed)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::mag_transform_r2c2Changed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::magBiasNullingRateChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::MagBiasNullingRateChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::boardRotationChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::BoardRotationChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::boardRotationRollChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::BoardRotation_RollChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::boardRotationPitchChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::BoardRotation_PitchChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::boardRotationYawChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::BoardRotation_YawChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const AuxMagSettings_Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::typeChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::TypeChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(const AuxMagSettings_Usage::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::usageChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (AuxMagSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSettings::UsageChanged)) {
                *result = 41;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AuxMagSettings *>(_o);
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
        case 13: *reinterpret_cast< qint16*>(_v) = _t->boardRotationRoll(); break;
        case 14: *reinterpret_cast< qint16*>(_v) = _t->boardRotationPitch(); break;
        case 15: *reinterpret_cast< qint16*>(_v) = _t->boardRotationYaw(); break;
        case 16: *reinterpret_cast< AuxMagSettings_Type::Enum*>(_v) = _t->type(); break;
        case 17: *reinterpret_cast< AuxMagSettings_Usage::Enum*>(_v) = _t->usage(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getmag_bias_X(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getmag_bias_Y(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getmag_bias_Z(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r0c0(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r0c1(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r0c2(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r1c0(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r1c1(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r1c2(); break;
        case 27: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r2c0(); break;
        case 28: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r2c1(); break;
        case 29: *reinterpret_cast< float*>(_v) = _t->getmag_transform_r2c2(); break;
        case 30: *reinterpret_cast< float*>(_v) = _t->getMagBiasNullingRate(); break;
        case 31: *reinterpret_cast< qint16*>(_v) = _t->getBoardRotation_Roll(); break;
        case 32: *reinterpret_cast< qint16*>(_v) = _t->getBoardRotation_Pitch(); break;
        case 33: *reinterpret_cast< qint16*>(_v) = _t->getBoardRotation_Yaw(); break;
        case 34: *reinterpret_cast< quint8*>(_v) = _t->getType(); break;
        case 35: *reinterpret_cast< quint8*>(_v) = _t->getUsage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AuxMagSettings *>(_o);
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
        case 13: _t->setBoardRotationRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 14: _t->setBoardRotationPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 15: _t->setBoardRotationYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 16: _t->setType(*reinterpret_cast< AuxMagSettings_Type::Enum*>(_v)); break;
        case 17: _t->setUsage(*reinterpret_cast< AuxMagSettings_Usage::Enum*>(_v)); break;
        case 18: _t->setmag_bias_X(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setmag_bias_Y(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setmag_bias_Z(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setmag_transform_r0c0(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setmag_transform_r0c1(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setmag_transform_r0c2(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setmag_transform_r1c0(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setmag_transform_r1c1(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setmag_transform_r1c2(*reinterpret_cast< float*>(_v)); break;
        case 27: _t->setmag_transform_r2c0(*reinterpret_cast< float*>(_v)); break;
        case 28: _t->setmag_transform_r2c1(*reinterpret_cast< float*>(_v)); break;
        case 29: _t->setmag_transform_r2c2(*reinterpret_cast< float*>(_v)); break;
        case 30: _t->setMagBiasNullingRate(*reinterpret_cast< float*>(_v)); break;
        case 31: _t->setBoardRotation_Roll(*reinterpret_cast< qint16*>(_v)); break;
        case 32: _t->setBoardRotation_Pitch(*reinterpret_cast< qint16*>(_v)); break;
        case 33: _t->setBoardRotation_Yaw(*reinterpret_cast< qint16*>(_v)); break;
        case 34: _t->setType(*reinterpret_cast< quint8*>(_v)); break;
        case 35: _t->setUsage(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_AuxMagSettings[] = {
        &AuxMagSettings_Type::staticMetaObject,
    &AuxMagSettings_Usage::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject AuxMagSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_AuxMagSettings.data,
    qt_meta_data_AuxMagSettings,
    qt_static_metacall,
    qt_meta_extradata_AuxMagSettings,
    nullptr
} };


const QMetaObject *AuxMagSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuxMagSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuxMagSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AuxMagSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 107)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 107;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 107)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 107;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 36;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AuxMagSettings::magBiasChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AuxMagSettings::mag_biasChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AuxMagSettings::magBiasXChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AuxMagSettings::mag_bias_XChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AuxMagSettings::magBiasYChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AuxMagSettings::mag_bias_YChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AuxMagSettings::magBiasZChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AuxMagSettings::mag_bias_ZChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AuxMagSettings::magTransformChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AuxMagSettings::mag_transformChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void AuxMagSettings::magTransformr0c0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void AuxMagSettings::mag_transform_r0c0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void AuxMagSettings::magTransformr0c1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void AuxMagSettings::mag_transform_r0c1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void AuxMagSettings::magTransformr0c2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void AuxMagSettings::mag_transform_r0c2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void AuxMagSettings::magTransformr1c0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void AuxMagSettings::mag_transform_r1c0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void AuxMagSettings::magTransformr1c1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void AuxMagSettings::mag_transform_r1c1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void AuxMagSettings::magTransformr1c2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void AuxMagSettings::mag_transform_r1c2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void AuxMagSettings::magTransformr2c0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void AuxMagSettings::mag_transform_r2c0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void AuxMagSettings::magTransformr2c1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void AuxMagSettings::mag_transform_r2c1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void AuxMagSettings::magTransformr2c2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void AuxMagSettings::mag_transform_r2c2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void AuxMagSettings::magBiasNullingRateChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void AuxMagSettings::MagBiasNullingRateChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void AuxMagSettings::boardRotationChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void AuxMagSettings::BoardRotationChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void AuxMagSettings::boardRotationRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void AuxMagSettings::BoardRotation_RollChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void AuxMagSettings::boardRotationPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void AuxMagSettings::BoardRotation_PitchChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void AuxMagSettings::boardRotationYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void AuxMagSettings::BoardRotation_YawChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void AuxMagSettings::typeChanged(const AuxMagSettings_Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void AuxMagSettings::TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void AuxMagSettings::usageChanged(const AuxMagSettings_Usage::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void AuxMagSettings::UsageChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
