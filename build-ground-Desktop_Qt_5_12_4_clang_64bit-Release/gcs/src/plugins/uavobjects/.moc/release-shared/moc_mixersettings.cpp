/****************************************************************************
** Meta object code from reading C++ file 'mixersettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mixersettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mixersettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MixerSettingsConstants_t {
    QByteArrayData data[4];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MixerSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MixerSettingsConstants_t qt_meta_stringdata_MixerSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MixerSettingsConstants"
QT_MOC_LITERAL(1, 23, 4), // "Enum"
QT_MOC_LITERAL(2, 28, 17), // "Curve2SourceCount"
QT_MOC_LITERAL(3, 46, 15) // "Mixer1TypeCount"

    },
    "MixerSettingsConstants\0Enum\0"
    "Curve2SourceCount\0Mixer1TypeCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MixerSettingsConstants[] = {

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
       2, uint(MixerSettingsConstants::Curve2SourceCount),
       3, uint(MixerSettingsConstants::Mixer1TypeCount),

       0        // eod
};

void MixerSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MixerSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MixerSettingsConstants.data,
    qt_meta_data_MixerSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MixerSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MixerSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MixerSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MixerSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MixerSettings_Curve2Source_t {
    QByteArrayData data[13];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MixerSettings_Curve2Source_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MixerSettings_Curve2Source_t qt_meta_stringdata_MixerSettings_Curve2Source = {
    {
QT_MOC_LITERAL(0, 0, 26), // "MixerSettings_Curve2Source"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 8), // "Throttle"
QT_MOC_LITERAL(3, 41, 4), // "Roll"
QT_MOC_LITERAL(4, 46, 5), // "Pitch"
QT_MOC_LITERAL(5, 52, 3), // "Yaw"
QT_MOC_LITERAL(6, 56, 10), // "Collective"
QT_MOC_LITERAL(7, 67, 10), // "Accessory0"
QT_MOC_LITERAL(8, 78, 10), // "Accessory1"
QT_MOC_LITERAL(9, 89, 10), // "Accessory2"
QT_MOC_LITERAL(10, 100, 10), // "Accessory3"
QT_MOC_LITERAL(11, 111, 10), // "Accessory4"
QT_MOC_LITERAL(12, 122, 10) // "Accessory5"

    },
    "MixerSettings_Curve2Source\0Enum\0"
    "Throttle\0Roll\0Pitch\0Yaw\0Collective\0"
    "Accessory0\0Accessory1\0Accessory2\0"
    "Accessory3\0Accessory4\0Accessory5"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MixerSettings_Curve2Source[] = {

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
       2, uint(MixerSettings_Curve2Source::Throttle),
       3, uint(MixerSettings_Curve2Source::Roll),
       4, uint(MixerSettings_Curve2Source::Pitch),
       5, uint(MixerSettings_Curve2Source::Yaw),
       6, uint(MixerSettings_Curve2Source::Collective),
       7, uint(MixerSettings_Curve2Source::Accessory0),
       8, uint(MixerSettings_Curve2Source::Accessory1),
       9, uint(MixerSettings_Curve2Source::Accessory2),
      10, uint(MixerSettings_Curve2Source::Accessory3),
      11, uint(MixerSettings_Curve2Source::Accessory4),
      12, uint(MixerSettings_Curve2Source::Accessory5),

       0        // eod
};

void MixerSettings_Curve2Source::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MixerSettings_Curve2Source::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MixerSettings_Curve2Source.data,
    qt_meta_data_MixerSettings_Curve2Source,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MixerSettings_Curve2Source::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MixerSettings_Curve2Source::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MixerSettings_Curve2Source.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MixerSettings_Curve2Source::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MixerSettings_Mixer1Type_t {
    QByteArrayData data[16];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MixerSettings_Mixer1Type_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MixerSettings_Mixer1Type_t qt_meta_stringdata_MixerSettings_Mixer1Type = {
    {
QT_MOC_LITERAL(0, 0, 24), // "MixerSettings_Mixer1Type"
QT_MOC_LITERAL(1, 25, 4), // "Enum"
QT_MOC_LITERAL(2, 30, 8), // "Disabled"
QT_MOC_LITERAL(3, 39, 5), // "Motor"
QT_MOC_LITERAL(4, 45, 15), // "ReversableMotor"
QT_MOC_LITERAL(5, 61, 5), // "Servo"
QT_MOC_LITERAL(6, 67, 18), // "CameraRollOrServo1"
QT_MOC_LITERAL(7, 86, 19), // "CameraPitchOrServo2"
QT_MOC_LITERAL(8, 106, 9), // "CameraYaw"
QT_MOC_LITERAL(9, 116, 13), // "CameraTrigger"
QT_MOC_LITERAL(10, 130, 10), // "Accessory0"
QT_MOC_LITERAL(11, 141, 10), // "Accessory1"
QT_MOC_LITERAL(12, 152, 10), // "Accessory2"
QT_MOC_LITERAL(13, 163, 10), // "Accessory3"
QT_MOC_LITERAL(14, 174, 10), // "Accessory4"
QT_MOC_LITERAL(15, 185, 10) // "Accessory5"

    },
    "MixerSettings_Mixer1Type\0Enum\0Disabled\0"
    "Motor\0ReversableMotor\0Servo\0"
    "CameraRollOrServo1\0CameraPitchOrServo2\0"
    "CameraYaw\0CameraTrigger\0Accessory0\0"
    "Accessory1\0Accessory2\0Accessory3\0"
    "Accessory4\0Accessory5"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MixerSettings_Mixer1Type[] = {

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
       1,    1, 0x0,   14,   19,

 // enum data: key, value
       2, uint(MixerSettings_Mixer1Type::Disabled),
       3, uint(MixerSettings_Mixer1Type::Motor),
       4, uint(MixerSettings_Mixer1Type::ReversableMotor),
       5, uint(MixerSettings_Mixer1Type::Servo),
       6, uint(MixerSettings_Mixer1Type::CameraRollOrServo1),
       7, uint(MixerSettings_Mixer1Type::CameraPitchOrServo2),
       8, uint(MixerSettings_Mixer1Type::CameraYaw),
       9, uint(MixerSettings_Mixer1Type::CameraTrigger),
      10, uint(MixerSettings_Mixer1Type::Accessory0),
      11, uint(MixerSettings_Mixer1Type::Accessory1),
      12, uint(MixerSettings_Mixer1Type::Accessory2),
      13, uint(MixerSettings_Mixer1Type::Accessory3),
      14, uint(MixerSettings_Mixer1Type::Accessory4),
      15, uint(MixerSettings_Mixer1Type::Accessory5),

       0        // eod
};

void MixerSettings_Mixer1Type::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MixerSettings_Mixer1Type::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MixerSettings_Mixer1Type.data,
    qt_meta_data_MixerSettings_Mixer1Type,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MixerSettings_Mixer1Type::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MixerSettings_Mixer1Type::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MixerSettings_Mixer1Type.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MixerSettings_Mixer1Type::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MixerSettings_t {
    QByteArrayData data[676];
    char stringdata0[15213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MixerSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MixerSettings_t qt_meta_stringdata_MixerSettings = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MixerSettings"
QT_MOC_LITERAL(1, 14, 21), // "throttleCurve1Changed"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "index"
QT_MOC_LITERAL(4, 43, 5), // "value"
QT_MOC_LITERAL(5, 49, 21), // "ThrottleCurve1Changed"
QT_MOC_LITERAL(6, 71, 23), // "throttleCurve1_0Changed"
QT_MOC_LITERAL(7, 95, 23), // "ThrottleCurve1_0Changed"
QT_MOC_LITERAL(8, 119, 24), // "throttleCurve1_25Changed"
QT_MOC_LITERAL(9, 144, 24), // "ThrottleCurve1_25Changed"
QT_MOC_LITERAL(10, 169, 24), // "throttleCurve1_50Changed"
QT_MOC_LITERAL(11, 194, 24), // "ThrottleCurve1_50Changed"
QT_MOC_LITERAL(12, 219, 24), // "throttleCurve1_75Changed"
QT_MOC_LITERAL(13, 244, 24), // "ThrottleCurve1_75Changed"
QT_MOC_LITERAL(14, 269, 25), // "throttleCurve1_100Changed"
QT_MOC_LITERAL(15, 295, 25), // "ThrottleCurve1_100Changed"
QT_MOC_LITERAL(16, 321, 21), // "throttleCurve2Changed"
QT_MOC_LITERAL(17, 343, 21), // "ThrottleCurve2Changed"
QT_MOC_LITERAL(18, 365, 23), // "throttleCurve2_0Changed"
QT_MOC_LITERAL(19, 389, 23), // "ThrottleCurve2_0Changed"
QT_MOC_LITERAL(20, 413, 24), // "throttleCurve2_25Changed"
QT_MOC_LITERAL(21, 438, 24), // "ThrottleCurve2_25Changed"
QT_MOC_LITERAL(22, 463, 24), // "throttleCurve2_50Changed"
QT_MOC_LITERAL(23, 488, 24), // "ThrottleCurve2_50Changed"
QT_MOC_LITERAL(24, 513, 24), // "throttleCurve2_75Changed"
QT_MOC_LITERAL(25, 538, 24), // "ThrottleCurve2_75Changed"
QT_MOC_LITERAL(26, 563, 25), // "throttleCurve2_100Changed"
QT_MOC_LITERAL(27, 589, 25), // "ThrottleCurve2_100Changed"
QT_MOC_LITERAL(28, 615, 21), // "mixerValueRollChanged"
QT_MOC_LITERAL(29, 637, 21), // "MixerValueRollChanged"
QT_MOC_LITERAL(30, 659, 22), // "mixerValuePitchChanged"
QT_MOC_LITERAL(31, 682, 22), // "MixerValuePitchChanged"
QT_MOC_LITERAL(32, 705, 20), // "mixerValueYawChanged"
QT_MOC_LITERAL(33, 726, 20), // "MixerValueYawChanged"
QT_MOC_LITERAL(34, 747, 23), // "rollDifferentialChanged"
QT_MOC_LITERAL(35, 771, 23), // "RollDifferentialChanged"
QT_MOC_LITERAL(36, 795, 21), // "firstRollServoChanged"
QT_MOC_LITERAL(37, 817, 21), // "FirstRollServoChanged"
QT_MOC_LITERAL(38, 839, 19), // "curve2SourceChanged"
QT_MOC_LITERAL(39, 859, 32), // "MixerSettings_Curve2Source::Enum"
QT_MOC_LITERAL(40, 892, 19), // "Curve2SourceChanged"
QT_MOC_LITERAL(41, 912, 17), // "mixer1TypeChanged"
QT_MOC_LITERAL(42, 930, 30), // "MixerSettings_Mixer1Type::Enum"
QT_MOC_LITERAL(43, 961, 17), // "Mixer1TypeChanged"
QT_MOC_LITERAL(44, 979, 19), // "mixer1VectorChanged"
QT_MOC_LITERAL(45, 999, 19), // "Mixer1VectorChanged"
QT_MOC_LITERAL(46, 1019, 33), // "mixer1VectorThrottleCurve1Cha..."
QT_MOC_LITERAL(47, 1053, 34), // "Mixer1Vector_ThrottleCurve1Ch..."
QT_MOC_LITERAL(48, 1088, 33), // "mixer1VectorThrottleCurve2Cha..."
QT_MOC_LITERAL(49, 1122, 34), // "Mixer1Vector_ThrottleCurve2Ch..."
QT_MOC_LITERAL(50, 1157, 23), // "mixer1VectorRollChanged"
QT_MOC_LITERAL(51, 1181, 24), // "Mixer1Vector_RollChanged"
QT_MOC_LITERAL(52, 1206, 24), // "mixer1VectorPitchChanged"
QT_MOC_LITERAL(53, 1231, 25), // "Mixer1Vector_PitchChanged"
QT_MOC_LITERAL(54, 1257, 22), // "mixer1VectorYawChanged"
QT_MOC_LITERAL(55, 1280, 23), // "Mixer1Vector_YawChanged"
QT_MOC_LITERAL(56, 1304, 17), // "mixer2TypeChanged"
QT_MOC_LITERAL(57, 1322, 30), // "MixerSettings_Mixer2Type::Enum"
QT_MOC_LITERAL(58, 1353, 17), // "Mixer2TypeChanged"
QT_MOC_LITERAL(59, 1371, 19), // "mixer2VectorChanged"
QT_MOC_LITERAL(60, 1391, 19), // "Mixer2VectorChanged"
QT_MOC_LITERAL(61, 1411, 33), // "mixer2VectorThrottleCurve1Cha..."
QT_MOC_LITERAL(62, 1445, 34), // "Mixer2Vector_ThrottleCurve1Ch..."
QT_MOC_LITERAL(63, 1480, 33), // "mixer2VectorThrottleCurve2Cha..."
QT_MOC_LITERAL(64, 1514, 34), // "Mixer2Vector_ThrottleCurve2Ch..."
QT_MOC_LITERAL(65, 1549, 23), // "mixer2VectorRollChanged"
QT_MOC_LITERAL(66, 1573, 24), // "Mixer2Vector_RollChanged"
QT_MOC_LITERAL(67, 1598, 24), // "mixer2VectorPitchChanged"
QT_MOC_LITERAL(68, 1623, 25), // "Mixer2Vector_PitchChanged"
QT_MOC_LITERAL(69, 1649, 22), // "mixer2VectorYawChanged"
QT_MOC_LITERAL(70, 1672, 23), // "Mixer2Vector_YawChanged"
QT_MOC_LITERAL(71, 1696, 17), // "mixer3TypeChanged"
QT_MOC_LITERAL(72, 1714, 30), // "MixerSettings_Mixer3Type::Enum"
QT_MOC_LITERAL(73, 1745, 17), // "Mixer3TypeChanged"
QT_MOC_LITERAL(74, 1763, 19), // "mixer3VectorChanged"
QT_MOC_LITERAL(75, 1783, 19), // "Mixer3VectorChanged"
QT_MOC_LITERAL(76, 1803, 33), // "mixer3VectorThrottleCurve1Cha..."
QT_MOC_LITERAL(77, 1837, 34), // "Mixer3Vector_ThrottleCurve1Ch..."
QT_MOC_LITERAL(78, 1872, 33), // "mixer3VectorThrottleCurve2Cha..."
QT_MOC_LITERAL(79, 1906, 34), // "Mixer3Vector_ThrottleCurve2Ch..."
QT_MOC_LITERAL(80, 1941, 23), // "mixer3VectorRollChanged"
QT_MOC_LITERAL(81, 1965, 24), // "Mixer3Vector_RollChanged"
QT_MOC_LITERAL(82, 1990, 24), // "mixer3VectorPitchChanged"
QT_MOC_LITERAL(83, 2015, 25), // "Mixer3Vector_PitchChanged"
QT_MOC_LITERAL(84, 2041, 22), // "mixer3VectorYawChanged"
QT_MOC_LITERAL(85, 2064, 23), // "Mixer3Vector_YawChanged"
QT_MOC_LITERAL(86, 2088, 17), // "mixer4TypeChanged"
QT_MOC_LITERAL(87, 2106, 30), // "MixerSettings_Mixer4Type::Enum"
QT_MOC_LITERAL(88, 2137, 17), // "Mixer4TypeChanged"
QT_MOC_LITERAL(89, 2155, 19), // "mixer4VectorChanged"
QT_MOC_LITERAL(90, 2175, 19), // "Mixer4VectorChanged"
QT_MOC_LITERAL(91, 2195, 33), // "mixer4VectorThrottleCurve1Cha..."
QT_MOC_LITERAL(92, 2229, 34), // "Mixer4Vector_ThrottleCurve1Ch..."
QT_MOC_LITERAL(93, 2264, 33), // "mixer4VectorThrottleCurve2Cha..."
QT_MOC_LITERAL(94, 2298, 34), // "Mixer4Vector_ThrottleCurve2Ch..."
QT_MOC_LITERAL(95, 2333, 23), // "mixer4VectorRollChanged"
QT_MOC_LITERAL(96, 2357, 24), // "Mixer4Vector_RollChanged"
QT_MOC_LITERAL(97, 2382, 24), // "mixer4VectorPitchChanged"
QT_MOC_LITERAL(98, 2407, 25), // "Mixer4Vector_PitchChanged"
QT_MOC_LITERAL(99, 2433, 22), // "mixer4VectorYawChanged"
QT_MOC_LITERAL(100, 2456, 23), // "Mixer4Vector_YawChanged"
QT_MOC_LITERAL(101, 2480, 17), // "mixer5TypeChanged"
QT_MOC_LITERAL(102, 2498, 30), // "MixerSettings_Mixer5Type::Enum"
QT_MOC_LITERAL(103, 2529, 17), // "Mixer5TypeChanged"
QT_MOC_LITERAL(104, 2547, 19), // "mixer5VectorChanged"
QT_MOC_LITERAL(105, 2567, 19), // "Mixer5VectorChanged"
QT_MOC_LITERAL(106, 2587, 33), // "mixer5VectorThrottleCurve1Cha..."
QT_MOC_LITERAL(107, 2621, 34), // "Mixer5Vector_ThrottleCurve1Ch..."
QT_MOC_LITERAL(108, 2656, 33), // "mixer5VectorThrottleCurve2Cha..."
QT_MOC_LITERAL(109, 2690, 34), // "Mixer5Vector_ThrottleCurve2Ch..."
QT_MOC_LITERAL(110, 2725, 23), // "mixer5VectorRollChanged"
QT_MOC_LITERAL(111, 2749, 24), // "Mixer5Vector_RollChanged"
QT_MOC_LITERAL(112, 2774, 24), // "mixer5VectorPitchChanged"
QT_MOC_LITERAL(113, 2799, 25), // "Mixer5Vector_PitchChanged"
QT_MOC_LITERAL(114, 2825, 22), // "mixer5VectorYawChanged"
QT_MOC_LITERAL(115, 2848, 23), // "Mixer5Vector_YawChanged"
QT_MOC_LITERAL(116, 2872, 17), // "mixer6TypeChanged"
QT_MOC_LITERAL(117, 2890, 30), // "MixerSettings_Mixer6Type::Enum"
QT_MOC_LITERAL(118, 2921, 17), // "Mixer6TypeChanged"
QT_MOC_LITERAL(119, 2939, 19), // "mixer6VectorChanged"
QT_MOC_LITERAL(120, 2959, 19), // "Mixer6VectorChanged"
QT_MOC_LITERAL(121, 2979, 33), // "mixer6VectorThrottleCurve1Cha..."
QT_MOC_LITERAL(122, 3013, 34), // "Mixer6Vector_ThrottleCurve1Ch..."
QT_MOC_LITERAL(123, 3048, 33), // "mixer6VectorThrottleCurve2Cha..."
QT_MOC_LITERAL(124, 3082, 34), // "Mixer6Vector_ThrottleCurve2Ch..."
QT_MOC_LITERAL(125, 3117, 23), // "mixer6VectorRollChanged"
QT_MOC_LITERAL(126, 3141, 24), // "Mixer6Vector_RollChanged"
QT_MOC_LITERAL(127, 3166, 24), // "mixer6VectorPitchChanged"
QT_MOC_LITERAL(128, 3191, 25), // "Mixer6Vector_PitchChanged"
QT_MOC_LITERAL(129, 3217, 22), // "mixer6VectorYawChanged"
QT_MOC_LITERAL(130, 3240, 23), // "Mixer6Vector_YawChanged"
QT_MOC_LITERAL(131, 3264, 17), // "mixer7TypeChanged"
QT_MOC_LITERAL(132, 3282, 30), // "MixerSettings_Mixer7Type::Enum"
QT_MOC_LITERAL(133, 3313, 17), // "Mixer7TypeChanged"
QT_MOC_LITERAL(134, 3331, 19), // "mixer7VectorChanged"
QT_MOC_LITERAL(135, 3351, 19), // "Mixer7VectorChanged"
QT_MOC_LITERAL(136, 3371, 33), // "mixer7VectorThrottleCurve1Cha..."
QT_MOC_LITERAL(137, 3405, 34), // "Mixer7Vector_ThrottleCurve1Ch..."
QT_MOC_LITERAL(138, 3440, 33), // "mixer7VectorThrottleCurve2Cha..."
QT_MOC_LITERAL(139, 3474, 34), // "Mixer7Vector_ThrottleCurve2Ch..."
QT_MOC_LITERAL(140, 3509, 23), // "mixer7VectorRollChanged"
QT_MOC_LITERAL(141, 3533, 24), // "Mixer7Vector_RollChanged"
QT_MOC_LITERAL(142, 3558, 24), // "mixer7VectorPitchChanged"
QT_MOC_LITERAL(143, 3583, 25), // "Mixer7Vector_PitchChanged"
QT_MOC_LITERAL(144, 3609, 22), // "mixer7VectorYawChanged"
QT_MOC_LITERAL(145, 3632, 23), // "Mixer7Vector_YawChanged"
QT_MOC_LITERAL(146, 3656, 17), // "mixer8TypeChanged"
QT_MOC_LITERAL(147, 3674, 30), // "MixerSettings_Mixer8Type::Enum"
QT_MOC_LITERAL(148, 3705, 17), // "Mixer8TypeChanged"
QT_MOC_LITERAL(149, 3723, 19), // "mixer8VectorChanged"
QT_MOC_LITERAL(150, 3743, 19), // "Mixer8VectorChanged"
QT_MOC_LITERAL(151, 3763, 33), // "mixer8VectorThrottleCurve1Cha..."
QT_MOC_LITERAL(152, 3797, 34), // "Mixer8Vector_ThrottleCurve1Ch..."
QT_MOC_LITERAL(153, 3832, 33), // "mixer8VectorThrottleCurve2Cha..."
QT_MOC_LITERAL(154, 3866, 34), // "Mixer8Vector_ThrottleCurve2Ch..."
QT_MOC_LITERAL(155, 3901, 23), // "mixer8VectorRollChanged"
QT_MOC_LITERAL(156, 3925, 24), // "Mixer8Vector_RollChanged"
QT_MOC_LITERAL(157, 3950, 24), // "mixer8VectorPitchChanged"
QT_MOC_LITERAL(158, 3975, 25), // "Mixer8Vector_PitchChanged"
QT_MOC_LITERAL(159, 4001, 22), // "mixer8VectorYawChanged"
QT_MOC_LITERAL(160, 4024, 23), // "Mixer8Vector_YawChanged"
QT_MOC_LITERAL(161, 4048, 17), // "mixer9TypeChanged"
QT_MOC_LITERAL(162, 4066, 30), // "MixerSettings_Mixer9Type::Enum"
QT_MOC_LITERAL(163, 4097, 17), // "Mixer9TypeChanged"
QT_MOC_LITERAL(164, 4115, 19), // "mixer9VectorChanged"
QT_MOC_LITERAL(165, 4135, 19), // "Mixer9VectorChanged"
QT_MOC_LITERAL(166, 4155, 33), // "mixer9VectorThrottleCurve1Cha..."
QT_MOC_LITERAL(167, 4189, 34), // "Mixer9Vector_ThrottleCurve1Ch..."
QT_MOC_LITERAL(168, 4224, 33), // "mixer9VectorThrottleCurve2Cha..."
QT_MOC_LITERAL(169, 4258, 34), // "Mixer9Vector_ThrottleCurve2Ch..."
QT_MOC_LITERAL(170, 4293, 23), // "mixer9VectorRollChanged"
QT_MOC_LITERAL(171, 4317, 24), // "Mixer9Vector_RollChanged"
QT_MOC_LITERAL(172, 4342, 24), // "mixer9VectorPitchChanged"
QT_MOC_LITERAL(173, 4367, 25), // "Mixer9Vector_PitchChanged"
QT_MOC_LITERAL(174, 4393, 22), // "mixer9VectorYawChanged"
QT_MOC_LITERAL(175, 4416, 23), // "Mixer9Vector_YawChanged"
QT_MOC_LITERAL(176, 4440, 18), // "mixer10TypeChanged"
QT_MOC_LITERAL(177, 4459, 31), // "MixerSettings_Mixer10Type::Enum"
QT_MOC_LITERAL(178, 4491, 18), // "Mixer10TypeChanged"
QT_MOC_LITERAL(179, 4510, 20), // "mixer10VectorChanged"
QT_MOC_LITERAL(180, 4531, 20), // "Mixer10VectorChanged"
QT_MOC_LITERAL(181, 4552, 34), // "mixer10VectorThrottleCurve1Ch..."
QT_MOC_LITERAL(182, 4587, 35), // "Mixer10Vector_ThrottleCurve1C..."
QT_MOC_LITERAL(183, 4623, 34), // "mixer10VectorThrottleCurve2Ch..."
QT_MOC_LITERAL(184, 4658, 35), // "Mixer10Vector_ThrottleCurve2C..."
QT_MOC_LITERAL(185, 4694, 24), // "mixer10VectorRollChanged"
QT_MOC_LITERAL(186, 4719, 25), // "Mixer10Vector_RollChanged"
QT_MOC_LITERAL(187, 4745, 25), // "mixer10VectorPitchChanged"
QT_MOC_LITERAL(188, 4771, 26), // "Mixer10Vector_PitchChanged"
QT_MOC_LITERAL(189, 4798, 23), // "mixer10VectorYawChanged"
QT_MOC_LITERAL(190, 4822, 24), // "Mixer10Vector_YawChanged"
QT_MOC_LITERAL(191, 4847, 18), // "mixer11TypeChanged"
QT_MOC_LITERAL(192, 4866, 31), // "MixerSettings_Mixer11Type::Enum"
QT_MOC_LITERAL(193, 4898, 18), // "Mixer11TypeChanged"
QT_MOC_LITERAL(194, 4917, 20), // "mixer11VectorChanged"
QT_MOC_LITERAL(195, 4938, 20), // "Mixer11VectorChanged"
QT_MOC_LITERAL(196, 4959, 34), // "mixer11VectorThrottleCurve1Ch..."
QT_MOC_LITERAL(197, 4994, 35), // "Mixer11Vector_ThrottleCurve1C..."
QT_MOC_LITERAL(198, 5030, 34), // "mixer11VectorThrottleCurve2Ch..."
QT_MOC_LITERAL(199, 5065, 35), // "Mixer11Vector_ThrottleCurve2C..."
QT_MOC_LITERAL(200, 5101, 24), // "mixer11VectorRollChanged"
QT_MOC_LITERAL(201, 5126, 25), // "Mixer11Vector_RollChanged"
QT_MOC_LITERAL(202, 5152, 25), // "mixer11VectorPitchChanged"
QT_MOC_LITERAL(203, 5178, 26), // "Mixer11Vector_PitchChanged"
QT_MOC_LITERAL(204, 5205, 23), // "mixer11VectorYawChanged"
QT_MOC_LITERAL(205, 5229, 24), // "Mixer11Vector_YawChanged"
QT_MOC_LITERAL(206, 5254, 18), // "mixer12TypeChanged"
QT_MOC_LITERAL(207, 5273, 31), // "MixerSettings_Mixer12Type::Enum"
QT_MOC_LITERAL(208, 5305, 18), // "Mixer12TypeChanged"
QT_MOC_LITERAL(209, 5324, 20), // "mixer12VectorChanged"
QT_MOC_LITERAL(210, 5345, 20), // "Mixer12VectorChanged"
QT_MOC_LITERAL(211, 5366, 34), // "mixer12VectorThrottleCurve1Ch..."
QT_MOC_LITERAL(212, 5401, 35), // "Mixer12Vector_ThrottleCurve1C..."
QT_MOC_LITERAL(213, 5437, 34), // "mixer12VectorThrottleCurve2Ch..."
QT_MOC_LITERAL(214, 5472, 35), // "Mixer12Vector_ThrottleCurve2C..."
QT_MOC_LITERAL(215, 5508, 24), // "mixer12VectorRollChanged"
QT_MOC_LITERAL(216, 5533, 25), // "Mixer12Vector_RollChanged"
QT_MOC_LITERAL(217, 5559, 25), // "mixer12VectorPitchChanged"
QT_MOC_LITERAL(218, 5585, 26), // "Mixer12Vector_PitchChanged"
QT_MOC_LITERAL(219, 5612, 23), // "mixer12VectorYawChanged"
QT_MOC_LITERAL(220, 5636, 24), // "Mixer12Vector_YawChanged"
QT_MOC_LITERAL(221, 5661, 17), // "setThrottleCurve1"
QT_MOC_LITERAL(222, 5679, 19), // "setThrottleCurve1_0"
QT_MOC_LITERAL(223, 5699, 20), // "setThrottleCurve1_25"
QT_MOC_LITERAL(224, 5720, 20), // "setThrottleCurve1_50"
QT_MOC_LITERAL(225, 5741, 20), // "setThrottleCurve1_75"
QT_MOC_LITERAL(226, 5762, 21), // "setThrottleCurve1_100"
QT_MOC_LITERAL(227, 5784, 17), // "setThrottleCurve2"
QT_MOC_LITERAL(228, 5802, 19), // "setThrottleCurve2_0"
QT_MOC_LITERAL(229, 5822, 20), // "setThrottleCurve2_25"
QT_MOC_LITERAL(230, 5843, 20), // "setThrottleCurve2_50"
QT_MOC_LITERAL(231, 5864, 20), // "setThrottleCurve2_75"
QT_MOC_LITERAL(232, 5885, 21), // "setThrottleCurve2_100"
QT_MOC_LITERAL(233, 5907, 17), // "setMixerValueRoll"
QT_MOC_LITERAL(234, 5925, 18), // "setMixerValuePitch"
QT_MOC_LITERAL(235, 5944, 16), // "setMixerValueYaw"
QT_MOC_LITERAL(236, 5961, 19), // "setRollDifferential"
QT_MOC_LITERAL(237, 5981, 17), // "setFirstRollServo"
QT_MOC_LITERAL(238, 5999, 15), // "setCurve2Source"
QT_MOC_LITERAL(239, 6015, 13), // "setMixer1Type"
QT_MOC_LITERAL(240, 6029, 15), // "setMixer1Vector"
QT_MOC_LITERAL(241, 6045, 29), // "setMixer1VectorThrottleCurve1"
QT_MOC_LITERAL(242, 6075, 30), // "setMixer1Vector_ThrottleCurve1"
QT_MOC_LITERAL(243, 6106, 29), // "setMixer1VectorThrottleCurve2"
QT_MOC_LITERAL(244, 6136, 30), // "setMixer1Vector_ThrottleCurve2"
QT_MOC_LITERAL(245, 6167, 19), // "setMixer1VectorRoll"
QT_MOC_LITERAL(246, 6187, 20), // "setMixer1Vector_Roll"
QT_MOC_LITERAL(247, 6208, 20), // "setMixer1VectorPitch"
QT_MOC_LITERAL(248, 6229, 21), // "setMixer1Vector_Pitch"
QT_MOC_LITERAL(249, 6251, 18), // "setMixer1VectorYaw"
QT_MOC_LITERAL(250, 6270, 19), // "setMixer1Vector_Yaw"
QT_MOC_LITERAL(251, 6290, 13), // "setMixer2Type"
QT_MOC_LITERAL(252, 6304, 15), // "setMixer2Vector"
QT_MOC_LITERAL(253, 6320, 29), // "setMixer2VectorThrottleCurve1"
QT_MOC_LITERAL(254, 6350, 30), // "setMixer2Vector_ThrottleCurve1"
QT_MOC_LITERAL(255, 6381, 29), // "setMixer2VectorThrottleCurve2"
QT_MOC_LITERAL(256, 6411, 30), // "setMixer2Vector_ThrottleCurve2"
QT_MOC_LITERAL(257, 6442, 19), // "setMixer2VectorRoll"
QT_MOC_LITERAL(258, 6462, 20), // "setMixer2Vector_Roll"
QT_MOC_LITERAL(259, 6483, 20), // "setMixer2VectorPitch"
QT_MOC_LITERAL(260, 6504, 21), // "setMixer2Vector_Pitch"
QT_MOC_LITERAL(261, 6526, 18), // "setMixer2VectorYaw"
QT_MOC_LITERAL(262, 6545, 19), // "setMixer2Vector_Yaw"
QT_MOC_LITERAL(263, 6565, 13), // "setMixer3Type"
QT_MOC_LITERAL(264, 6579, 15), // "setMixer3Vector"
QT_MOC_LITERAL(265, 6595, 29), // "setMixer3VectorThrottleCurve1"
QT_MOC_LITERAL(266, 6625, 30), // "setMixer3Vector_ThrottleCurve1"
QT_MOC_LITERAL(267, 6656, 29), // "setMixer3VectorThrottleCurve2"
QT_MOC_LITERAL(268, 6686, 30), // "setMixer3Vector_ThrottleCurve2"
QT_MOC_LITERAL(269, 6717, 19), // "setMixer3VectorRoll"
QT_MOC_LITERAL(270, 6737, 20), // "setMixer3Vector_Roll"
QT_MOC_LITERAL(271, 6758, 20), // "setMixer3VectorPitch"
QT_MOC_LITERAL(272, 6779, 21), // "setMixer3Vector_Pitch"
QT_MOC_LITERAL(273, 6801, 18), // "setMixer3VectorYaw"
QT_MOC_LITERAL(274, 6820, 19), // "setMixer3Vector_Yaw"
QT_MOC_LITERAL(275, 6840, 13), // "setMixer4Type"
QT_MOC_LITERAL(276, 6854, 15), // "setMixer4Vector"
QT_MOC_LITERAL(277, 6870, 29), // "setMixer4VectorThrottleCurve1"
QT_MOC_LITERAL(278, 6900, 30), // "setMixer4Vector_ThrottleCurve1"
QT_MOC_LITERAL(279, 6931, 29), // "setMixer4VectorThrottleCurve2"
QT_MOC_LITERAL(280, 6961, 30), // "setMixer4Vector_ThrottleCurve2"
QT_MOC_LITERAL(281, 6992, 19), // "setMixer4VectorRoll"
QT_MOC_LITERAL(282, 7012, 20), // "setMixer4Vector_Roll"
QT_MOC_LITERAL(283, 7033, 20), // "setMixer4VectorPitch"
QT_MOC_LITERAL(284, 7054, 21), // "setMixer4Vector_Pitch"
QT_MOC_LITERAL(285, 7076, 18), // "setMixer4VectorYaw"
QT_MOC_LITERAL(286, 7095, 19), // "setMixer4Vector_Yaw"
QT_MOC_LITERAL(287, 7115, 13), // "setMixer5Type"
QT_MOC_LITERAL(288, 7129, 15), // "setMixer5Vector"
QT_MOC_LITERAL(289, 7145, 29), // "setMixer5VectorThrottleCurve1"
QT_MOC_LITERAL(290, 7175, 30), // "setMixer5Vector_ThrottleCurve1"
QT_MOC_LITERAL(291, 7206, 29), // "setMixer5VectorThrottleCurve2"
QT_MOC_LITERAL(292, 7236, 30), // "setMixer5Vector_ThrottleCurve2"
QT_MOC_LITERAL(293, 7267, 19), // "setMixer5VectorRoll"
QT_MOC_LITERAL(294, 7287, 20), // "setMixer5Vector_Roll"
QT_MOC_LITERAL(295, 7308, 20), // "setMixer5VectorPitch"
QT_MOC_LITERAL(296, 7329, 21), // "setMixer5Vector_Pitch"
QT_MOC_LITERAL(297, 7351, 18), // "setMixer5VectorYaw"
QT_MOC_LITERAL(298, 7370, 19), // "setMixer5Vector_Yaw"
QT_MOC_LITERAL(299, 7390, 13), // "setMixer6Type"
QT_MOC_LITERAL(300, 7404, 15), // "setMixer6Vector"
QT_MOC_LITERAL(301, 7420, 29), // "setMixer6VectorThrottleCurve1"
QT_MOC_LITERAL(302, 7450, 30), // "setMixer6Vector_ThrottleCurve1"
QT_MOC_LITERAL(303, 7481, 29), // "setMixer6VectorThrottleCurve2"
QT_MOC_LITERAL(304, 7511, 30), // "setMixer6Vector_ThrottleCurve2"
QT_MOC_LITERAL(305, 7542, 19), // "setMixer6VectorRoll"
QT_MOC_LITERAL(306, 7562, 20), // "setMixer6Vector_Roll"
QT_MOC_LITERAL(307, 7583, 20), // "setMixer6VectorPitch"
QT_MOC_LITERAL(308, 7604, 21), // "setMixer6Vector_Pitch"
QT_MOC_LITERAL(309, 7626, 18), // "setMixer6VectorYaw"
QT_MOC_LITERAL(310, 7645, 19), // "setMixer6Vector_Yaw"
QT_MOC_LITERAL(311, 7665, 13), // "setMixer7Type"
QT_MOC_LITERAL(312, 7679, 15), // "setMixer7Vector"
QT_MOC_LITERAL(313, 7695, 29), // "setMixer7VectorThrottleCurve1"
QT_MOC_LITERAL(314, 7725, 30), // "setMixer7Vector_ThrottleCurve1"
QT_MOC_LITERAL(315, 7756, 29), // "setMixer7VectorThrottleCurve2"
QT_MOC_LITERAL(316, 7786, 30), // "setMixer7Vector_ThrottleCurve2"
QT_MOC_LITERAL(317, 7817, 19), // "setMixer7VectorRoll"
QT_MOC_LITERAL(318, 7837, 20), // "setMixer7Vector_Roll"
QT_MOC_LITERAL(319, 7858, 20), // "setMixer7VectorPitch"
QT_MOC_LITERAL(320, 7879, 21), // "setMixer7Vector_Pitch"
QT_MOC_LITERAL(321, 7901, 18), // "setMixer7VectorYaw"
QT_MOC_LITERAL(322, 7920, 19), // "setMixer7Vector_Yaw"
QT_MOC_LITERAL(323, 7940, 13), // "setMixer8Type"
QT_MOC_LITERAL(324, 7954, 15), // "setMixer8Vector"
QT_MOC_LITERAL(325, 7970, 29), // "setMixer8VectorThrottleCurve1"
QT_MOC_LITERAL(326, 8000, 30), // "setMixer8Vector_ThrottleCurve1"
QT_MOC_LITERAL(327, 8031, 29), // "setMixer8VectorThrottleCurve2"
QT_MOC_LITERAL(328, 8061, 30), // "setMixer8Vector_ThrottleCurve2"
QT_MOC_LITERAL(329, 8092, 19), // "setMixer8VectorRoll"
QT_MOC_LITERAL(330, 8112, 20), // "setMixer8Vector_Roll"
QT_MOC_LITERAL(331, 8133, 20), // "setMixer8VectorPitch"
QT_MOC_LITERAL(332, 8154, 21), // "setMixer8Vector_Pitch"
QT_MOC_LITERAL(333, 8176, 18), // "setMixer8VectorYaw"
QT_MOC_LITERAL(334, 8195, 19), // "setMixer8Vector_Yaw"
QT_MOC_LITERAL(335, 8215, 13), // "setMixer9Type"
QT_MOC_LITERAL(336, 8229, 15), // "setMixer9Vector"
QT_MOC_LITERAL(337, 8245, 29), // "setMixer9VectorThrottleCurve1"
QT_MOC_LITERAL(338, 8275, 30), // "setMixer9Vector_ThrottleCurve1"
QT_MOC_LITERAL(339, 8306, 29), // "setMixer9VectorThrottleCurve2"
QT_MOC_LITERAL(340, 8336, 30), // "setMixer9Vector_ThrottleCurve2"
QT_MOC_LITERAL(341, 8367, 19), // "setMixer9VectorRoll"
QT_MOC_LITERAL(342, 8387, 20), // "setMixer9Vector_Roll"
QT_MOC_LITERAL(343, 8408, 20), // "setMixer9VectorPitch"
QT_MOC_LITERAL(344, 8429, 21), // "setMixer9Vector_Pitch"
QT_MOC_LITERAL(345, 8451, 18), // "setMixer9VectorYaw"
QT_MOC_LITERAL(346, 8470, 19), // "setMixer9Vector_Yaw"
QT_MOC_LITERAL(347, 8490, 14), // "setMixer10Type"
QT_MOC_LITERAL(348, 8505, 16), // "setMixer10Vector"
QT_MOC_LITERAL(349, 8522, 30), // "setMixer10VectorThrottleCurve1"
QT_MOC_LITERAL(350, 8553, 31), // "setMixer10Vector_ThrottleCurve1"
QT_MOC_LITERAL(351, 8585, 30), // "setMixer10VectorThrottleCurve2"
QT_MOC_LITERAL(352, 8616, 31), // "setMixer10Vector_ThrottleCurve2"
QT_MOC_LITERAL(353, 8648, 20), // "setMixer10VectorRoll"
QT_MOC_LITERAL(354, 8669, 21), // "setMixer10Vector_Roll"
QT_MOC_LITERAL(355, 8691, 21), // "setMixer10VectorPitch"
QT_MOC_LITERAL(356, 8713, 22), // "setMixer10Vector_Pitch"
QT_MOC_LITERAL(357, 8736, 19), // "setMixer10VectorYaw"
QT_MOC_LITERAL(358, 8756, 20), // "setMixer10Vector_Yaw"
QT_MOC_LITERAL(359, 8777, 14), // "setMixer11Type"
QT_MOC_LITERAL(360, 8792, 16), // "setMixer11Vector"
QT_MOC_LITERAL(361, 8809, 30), // "setMixer11VectorThrottleCurve1"
QT_MOC_LITERAL(362, 8840, 31), // "setMixer11Vector_ThrottleCurve1"
QT_MOC_LITERAL(363, 8872, 30), // "setMixer11VectorThrottleCurve2"
QT_MOC_LITERAL(364, 8903, 31), // "setMixer11Vector_ThrottleCurve2"
QT_MOC_LITERAL(365, 8935, 20), // "setMixer11VectorRoll"
QT_MOC_LITERAL(366, 8956, 21), // "setMixer11Vector_Roll"
QT_MOC_LITERAL(367, 8978, 21), // "setMixer11VectorPitch"
QT_MOC_LITERAL(368, 9000, 22), // "setMixer11Vector_Pitch"
QT_MOC_LITERAL(369, 9023, 19), // "setMixer11VectorYaw"
QT_MOC_LITERAL(370, 9043, 20), // "setMixer11Vector_Yaw"
QT_MOC_LITERAL(371, 9064, 14), // "setMixer12Type"
QT_MOC_LITERAL(372, 9079, 16), // "setMixer12Vector"
QT_MOC_LITERAL(373, 9096, 30), // "setMixer12VectorThrottleCurve1"
QT_MOC_LITERAL(374, 9127, 31), // "setMixer12Vector_ThrottleCurve1"
QT_MOC_LITERAL(375, 9159, 30), // "setMixer12VectorThrottleCurve2"
QT_MOC_LITERAL(376, 9190, 31), // "setMixer12Vector_ThrottleCurve2"
QT_MOC_LITERAL(377, 9222, 20), // "setMixer12VectorRoll"
QT_MOC_LITERAL(378, 9243, 21), // "setMixer12Vector_Roll"
QT_MOC_LITERAL(379, 9265, 21), // "setMixer12VectorPitch"
QT_MOC_LITERAL(380, 9287, 22), // "setMixer12Vector_Pitch"
QT_MOC_LITERAL(381, 9310, 19), // "setMixer12VectorYaw"
QT_MOC_LITERAL(382, 9330, 20), // "setMixer12Vector_Yaw"
QT_MOC_LITERAL(383, 9351, 17), // "emitNotifications"
QT_MOC_LITERAL(384, 9369, 14), // "throttleCurve1"
QT_MOC_LITERAL(385, 9384, 17), // "getThrottleCurve1"
QT_MOC_LITERAL(386, 9402, 19), // "getThrottleCurve1_0"
QT_MOC_LITERAL(387, 9422, 20), // "getThrottleCurve1_25"
QT_MOC_LITERAL(388, 9443, 20), // "getThrottleCurve1_50"
QT_MOC_LITERAL(389, 9464, 20), // "getThrottleCurve1_75"
QT_MOC_LITERAL(390, 9485, 21), // "getThrottleCurve1_100"
QT_MOC_LITERAL(391, 9507, 14), // "throttleCurve2"
QT_MOC_LITERAL(392, 9522, 17), // "getThrottleCurve2"
QT_MOC_LITERAL(393, 9540, 19), // "getThrottleCurve2_0"
QT_MOC_LITERAL(394, 9560, 20), // "getThrottleCurve2_25"
QT_MOC_LITERAL(395, 9581, 20), // "getThrottleCurve2_50"
QT_MOC_LITERAL(396, 9602, 20), // "getThrottleCurve2_75"
QT_MOC_LITERAL(397, 9623, 21), // "getThrottleCurve2_100"
QT_MOC_LITERAL(398, 9645, 17), // "getMixerValueRoll"
QT_MOC_LITERAL(399, 9663, 18), // "getMixerValuePitch"
QT_MOC_LITERAL(400, 9682, 16), // "getMixerValueYaw"
QT_MOC_LITERAL(401, 9699, 19), // "getRollDifferential"
QT_MOC_LITERAL(402, 9719, 17), // "getFirstRollServo"
QT_MOC_LITERAL(403, 9737, 15), // "getCurve2Source"
QT_MOC_LITERAL(404, 9753, 13), // "getMixer1Type"
QT_MOC_LITERAL(405, 9767, 12), // "mixer1Vector"
QT_MOC_LITERAL(406, 9780, 15), // "getMixer1Vector"
QT_MOC_LITERAL(407, 9796, 30), // "getMixer1Vector_ThrottleCurve1"
QT_MOC_LITERAL(408, 9827, 30), // "getMixer1Vector_ThrottleCurve2"
QT_MOC_LITERAL(409, 9858, 20), // "getMixer1Vector_Roll"
QT_MOC_LITERAL(410, 9879, 21), // "getMixer1Vector_Pitch"
QT_MOC_LITERAL(411, 9901, 19), // "getMixer1Vector_Yaw"
QT_MOC_LITERAL(412, 9921, 13), // "getMixer2Type"
QT_MOC_LITERAL(413, 9935, 12), // "mixer2Vector"
QT_MOC_LITERAL(414, 9948, 15), // "getMixer2Vector"
QT_MOC_LITERAL(415, 9964, 30), // "getMixer2Vector_ThrottleCurve1"
QT_MOC_LITERAL(416, 9995, 30), // "getMixer2Vector_ThrottleCurve2"
QT_MOC_LITERAL(417, 10026, 20), // "getMixer2Vector_Roll"
QT_MOC_LITERAL(418, 10047, 21), // "getMixer2Vector_Pitch"
QT_MOC_LITERAL(419, 10069, 19), // "getMixer2Vector_Yaw"
QT_MOC_LITERAL(420, 10089, 13), // "getMixer3Type"
QT_MOC_LITERAL(421, 10103, 12), // "mixer3Vector"
QT_MOC_LITERAL(422, 10116, 15), // "getMixer3Vector"
QT_MOC_LITERAL(423, 10132, 30), // "getMixer3Vector_ThrottleCurve1"
QT_MOC_LITERAL(424, 10163, 30), // "getMixer3Vector_ThrottleCurve2"
QT_MOC_LITERAL(425, 10194, 20), // "getMixer3Vector_Roll"
QT_MOC_LITERAL(426, 10215, 21), // "getMixer3Vector_Pitch"
QT_MOC_LITERAL(427, 10237, 19), // "getMixer3Vector_Yaw"
QT_MOC_LITERAL(428, 10257, 13), // "getMixer4Type"
QT_MOC_LITERAL(429, 10271, 12), // "mixer4Vector"
QT_MOC_LITERAL(430, 10284, 15), // "getMixer4Vector"
QT_MOC_LITERAL(431, 10300, 30), // "getMixer4Vector_ThrottleCurve1"
QT_MOC_LITERAL(432, 10331, 30), // "getMixer4Vector_ThrottleCurve2"
QT_MOC_LITERAL(433, 10362, 20), // "getMixer4Vector_Roll"
QT_MOC_LITERAL(434, 10383, 21), // "getMixer4Vector_Pitch"
QT_MOC_LITERAL(435, 10405, 19), // "getMixer4Vector_Yaw"
QT_MOC_LITERAL(436, 10425, 13), // "getMixer5Type"
QT_MOC_LITERAL(437, 10439, 12), // "mixer5Vector"
QT_MOC_LITERAL(438, 10452, 15), // "getMixer5Vector"
QT_MOC_LITERAL(439, 10468, 30), // "getMixer5Vector_ThrottleCurve1"
QT_MOC_LITERAL(440, 10499, 30), // "getMixer5Vector_ThrottleCurve2"
QT_MOC_LITERAL(441, 10530, 20), // "getMixer5Vector_Roll"
QT_MOC_LITERAL(442, 10551, 21), // "getMixer5Vector_Pitch"
QT_MOC_LITERAL(443, 10573, 19), // "getMixer5Vector_Yaw"
QT_MOC_LITERAL(444, 10593, 13), // "getMixer6Type"
QT_MOC_LITERAL(445, 10607, 12), // "mixer6Vector"
QT_MOC_LITERAL(446, 10620, 15), // "getMixer6Vector"
QT_MOC_LITERAL(447, 10636, 30), // "getMixer6Vector_ThrottleCurve1"
QT_MOC_LITERAL(448, 10667, 30), // "getMixer6Vector_ThrottleCurve2"
QT_MOC_LITERAL(449, 10698, 20), // "getMixer6Vector_Roll"
QT_MOC_LITERAL(450, 10719, 21), // "getMixer6Vector_Pitch"
QT_MOC_LITERAL(451, 10741, 19), // "getMixer6Vector_Yaw"
QT_MOC_LITERAL(452, 10761, 13), // "getMixer7Type"
QT_MOC_LITERAL(453, 10775, 12), // "mixer7Vector"
QT_MOC_LITERAL(454, 10788, 15), // "getMixer7Vector"
QT_MOC_LITERAL(455, 10804, 30), // "getMixer7Vector_ThrottleCurve1"
QT_MOC_LITERAL(456, 10835, 30), // "getMixer7Vector_ThrottleCurve2"
QT_MOC_LITERAL(457, 10866, 20), // "getMixer7Vector_Roll"
QT_MOC_LITERAL(458, 10887, 21), // "getMixer7Vector_Pitch"
QT_MOC_LITERAL(459, 10909, 19), // "getMixer7Vector_Yaw"
QT_MOC_LITERAL(460, 10929, 13), // "getMixer8Type"
QT_MOC_LITERAL(461, 10943, 12), // "mixer8Vector"
QT_MOC_LITERAL(462, 10956, 15), // "getMixer8Vector"
QT_MOC_LITERAL(463, 10972, 30), // "getMixer8Vector_ThrottleCurve1"
QT_MOC_LITERAL(464, 11003, 30), // "getMixer8Vector_ThrottleCurve2"
QT_MOC_LITERAL(465, 11034, 20), // "getMixer8Vector_Roll"
QT_MOC_LITERAL(466, 11055, 21), // "getMixer8Vector_Pitch"
QT_MOC_LITERAL(467, 11077, 19), // "getMixer8Vector_Yaw"
QT_MOC_LITERAL(468, 11097, 13), // "getMixer9Type"
QT_MOC_LITERAL(469, 11111, 12), // "mixer9Vector"
QT_MOC_LITERAL(470, 11124, 15), // "getMixer9Vector"
QT_MOC_LITERAL(471, 11140, 30), // "getMixer9Vector_ThrottleCurve1"
QT_MOC_LITERAL(472, 11171, 30), // "getMixer9Vector_ThrottleCurve2"
QT_MOC_LITERAL(473, 11202, 20), // "getMixer9Vector_Roll"
QT_MOC_LITERAL(474, 11223, 21), // "getMixer9Vector_Pitch"
QT_MOC_LITERAL(475, 11245, 19), // "getMixer9Vector_Yaw"
QT_MOC_LITERAL(476, 11265, 14), // "getMixer10Type"
QT_MOC_LITERAL(477, 11280, 13), // "mixer10Vector"
QT_MOC_LITERAL(478, 11294, 16), // "getMixer10Vector"
QT_MOC_LITERAL(479, 11311, 31), // "getMixer10Vector_ThrottleCurve1"
QT_MOC_LITERAL(480, 11343, 31), // "getMixer10Vector_ThrottleCurve2"
QT_MOC_LITERAL(481, 11375, 21), // "getMixer10Vector_Roll"
QT_MOC_LITERAL(482, 11397, 22), // "getMixer10Vector_Pitch"
QT_MOC_LITERAL(483, 11420, 20), // "getMixer10Vector_Yaw"
QT_MOC_LITERAL(484, 11441, 14), // "getMixer11Type"
QT_MOC_LITERAL(485, 11456, 13), // "mixer11Vector"
QT_MOC_LITERAL(486, 11470, 16), // "getMixer11Vector"
QT_MOC_LITERAL(487, 11487, 31), // "getMixer11Vector_ThrottleCurve1"
QT_MOC_LITERAL(488, 11519, 31), // "getMixer11Vector_ThrottleCurve2"
QT_MOC_LITERAL(489, 11551, 21), // "getMixer11Vector_Roll"
QT_MOC_LITERAL(490, 11573, 22), // "getMixer11Vector_Pitch"
QT_MOC_LITERAL(491, 11596, 20), // "getMixer11Vector_Yaw"
QT_MOC_LITERAL(492, 11617, 14), // "getMixer12Type"
QT_MOC_LITERAL(493, 11632, 13), // "mixer12Vector"
QT_MOC_LITERAL(494, 11646, 16), // "getMixer12Vector"
QT_MOC_LITERAL(495, 11663, 31), // "getMixer12Vector_ThrottleCurve1"
QT_MOC_LITERAL(496, 11695, 31), // "getMixer12Vector_ThrottleCurve2"
QT_MOC_LITERAL(497, 11727, 21), // "getMixer12Vector_Roll"
QT_MOC_LITERAL(498, 11749, 22), // "getMixer12Vector_Pitch"
QT_MOC_LITERAL(499, 11772, 20), // "getMixer12Vector_Yaw"
QT_MOC_LITERAL(500, 11793, 16), // "throttleCurve1_0"
QT_MOC_LITERAL(501, 11810, 17), // "throttleCurve1_25"
QT_MOC_LITERAL(502, 11828, 17), // "throttleCurve1_50"
QT_MOC_LITERAL(503, 11846, 17), // "throttleCurve1_75"
QT_MOC_LITERAL(504, 11864, 18), // "throttleCurve1_100"
QT_MOC_LITERAL(505, 11883, 16), // "throttleCurve2_0"
QT_MOC_LITERAL(506, 11900, 17), // "throttleCurve2_25"
QT_MOC_LITERAL(507, 11918, 17), // "throttleCurve2_50"
QT_MOC_LITERAL(508, 11936, 17), // "throttleCurve2_75"
QT_MOC_LITERAL(509, 11954, 18), // "throttleCurve2_100"
QT_MOC_LITERAL(510, 11973, 14), // "mixerValueRoll"
QT_MOC_LITERAL(511, 11988, 15), // "mixerValuePitch"
QT_MOC_LITERAL(512, 12004, 13), // "mixerValueYaw"
QT_MOC_LITERAL(513, 12018, 16), // "rollDifferential"
QT_MOC_LITERAL(514, 12035, 14), // "firstRollServo"
QT_MOC_LITERAL(515, 12050, 12), // "curve2Source"
QT_MOC_LITERAL(516, 12063, 10), // "mixer1Type"
QT_MOC_LITERAL(517, 12074, 26), // "mixer1VectorThrottleCurve1"
QT_MOC_LITERAL(518, 12101, 26), // "mixer1VectorThrottleCurve2"
QT_MOC_LITERAL(519, 12128, 16), // "mixer1VectorRoll"
QT_MOC_LITERAL(520, 12145, 17), // "mixer1VectorPitch"
QT_MOC_LITERAL(521, 12163, 15), // "mixer1VectorYaw"
QT_MOC_LITERAL(522, 12179, 10), // "mixer2Type"
QT_MOC_LITERAL(523, 12190, 26), // "mixer2VectorThrottleCurve1"
QT_MOC_LITERAL(524, 12217, 26), // "mixer2VectorThrottleCurve2"
QT_MOC_LITERAL(525, 12244, 16), // "mixer2VectorRoll"
QT_MOC_LITERAL(526, 12261, 17), // "mixer2VectorPitch"
QT_MOC_LITERAL(527, 12279, 15), // "mixer2VectorYaw"
QT_MOC_LITERAL(528, 12295, 10), // "mixer3Type"
QT_MOC_LITERAL(529, 12306, 26), // "mixer3VectorThrottleCurve1"
QT_MOC_LITERAL(530, 12333, 26), // "mixer3VectorThrottleCurve2"
QT_MOC_LITERAL(531, 12360, 16), // "mixer3VectorRoll"
QT_MOC_LITERAL(532, 12377, 17), // "mixer3VectorPitch"
QT_MOC_LITERAL(533, 12395, 15), // "mixer3VectorYaw"
QT_MOC_LITERAL(534, 12411, 10), // "mixer4Type"
QT_MOC_LITERAL(535, 12422, 26), // "mixer4VectorThrottleCurve1"
QT_MOC_LITERAL(536, 12449, 26), // "mixer4VectorThrottleCurve2"
QT_MOC_LITERAL(537, 12476, 16), // "mixer4VectorRoll"
QT_MOC_LITERAL(538, 12493, 17), // "mixer4VectorPitch"
QT_MOC_LITERAL(539, 12511, 15), // "mixer4VectorYaw"
QT_MOC_LITERAL(540, 12527, 10), // "mixer5Type"
QT_MOC_LITERAL(541, 12538, 26), // "mixer5VectorThrottleCurve1"
QT_MOC_LITERAL(542, 12565, 26), // "mixer5VectorThrottleCurve2"
QT_MOC_LITERAL(543, 12592, 16), // "mixer5VectorRoll"
QT_MOC_LITERAL(544, 12609, 17), // "mixer5VectorPitch"
QT_MOC_LITERAL(545, 12627, 15), // "mixer5VectorYaw"
QT_MOC_LITERAL(546, 12643, 10), // "mixer6Type"
QT_MOC_LITERAL(547, 12654, 26), // "mixer6VectorThrottleCurve1"
QT_MOC_LITERAL(548, 12681, 26), // "mixer6VectorThrottleCurve2"
QT_MOC_LITERAL(549, 12708, 16), // "mixer6VectorRoll"
QT_MOC_LITERAL(550, 12725, 17), // "mixer6VectorPitch"
QT_MOC_LITERAL(551, 12743, 15), // "mixer6VectorYaw"
QT_MOC_LITERAL(552, 12759, 10), // "mixer7Type"
QT_MOC_LITERAL(553, 12770, 26), // "mixer7VectorThrottleCurve1"
QT_MOC_LITERAL(554, 12797, 26), // "mixer7VectorThrottleCurve2"
QT_MOC_LITERAL(555, 12824, 16), // "mixer7VectorRoll"
QT_MOC_LITERAL(556, 12841, 17), // "mixer7VectorPitch"
QT_MOC_LITERAL(557, 12859, 15), // "mixer7VectorYaw"
QT_MOC_LITERAL(558, 12875, 10), // "mixer8Type"
QT_MOC_LITERAL(559, 12886, 26), // "mixer8VectorThrottleCurve1"
QT_MOC_LITERAL(560, 12913, 26), // "mixer8VectorThrottleCurve2"
QT_MOC_LITERAL(561, 12940, 16), // "mixer8VectorRoll"
QT_MOC_LITERAL(562, 12957, 17), // "mixer8VectorPitch"
QT_MOC_LITERAL(563, 12975, 15), // "mixer8VectorYaw"
QT_MOC_LITERAL(564, 12991, 10), // "mixer9Type"
QT_MOC_LITERAL(565, 13002, 26), // "mixer9VectorThrottleCurve1"
QT_MOC_LITERAL(566, 13029, 26), // "mixer9VectorThrottleCurve2"
QT_MOC_LITERAL(567, 13056, 16), // "mixer9VectorRoll"
QT_MOC_LITERAL(568, 13073, 17), // "mixer9VectorPitch"
QT_MOC_LITERAL(569, 13091, 15), // "mixer9VectorYaw"
QT_MOC_LITERAL(570, 13107, 11), // "mixer10Type"
QT_MOC_LITERAL(571, 13119, 27), // "mixer10VectorThrottleCurve1"
QT_MOC_LITERAL(572, 13147, 27), // "mixer10VectorThrottleCurve2"
QT_MOC_LITERAL(573, 13175, 17), // "mixer10VectorRoll"
QT_MOC_LITERAL(574, 13193, 18), // "mixer10VectorPitch"
QT_MOC_LITERAL(575, 13212, 16), // "mixer10VectorYaw"
QT_MOC_LITERAL(576, 13229, 11), // "mixer11Type"
QT_MOC_LITERAL(577, 13241, 27), // "mixer11VectorThrottleCurve1"
QT_MOC_LITERAL(578, 13269, 27), // "mixer11VectorThrottleCurve2"
QT_MOC_LITERAL(579, 13297, 17), // "mixer11VectorRoll"
QT_MOC_LITERAL(580, 13315, 18), // "mixer11VectorPitch"
QT_MOC_LITERAL(581, 13334, 16), // "mixer11VectorYaw"
QT_MOC_LITERAL(582, 13351, 11), // "mixer12Type"
QT_MOC_LITERAL(583, 13363, 27), // "mixer12VectorThrottleCurve1"
QT_MOC_LITERAL(584, 13391, 27), // "mixer12VectorThrottleCurve2"
QT_MOC_LITERAL(585, 13419, 17), // "mixer12VectorRoll"
QT_MOC_LITERAL(586, 13437, 18), // "mixer12VectorPitch"
QT_MOC_LITERAL(587, 13456, 16), // "mixer12VectorYaw"
QT_MOC_LITERAL(588, 13473, 16), // "ThrottleCurve1_0"
QT_MOC_LITERAL(589, 13490, 17), // "ThrottleCurve1_25"
QT_MOC_LITERAL(590, 13508, 17), // "ThrottleCurve1_50"
QT_MOC_LITERAL(591, 13526, 17), // "ThrottleCurve1_75"
QT_MOC_LITERAL(592, 13544, 18), // "ThrottleCurve1_100"
QT_MOC_LITERAL(593, 13563, 16), // "ThrottleCurve2_0"
QT_MOC_LITERAL(594, 13580, 17), // "ThrottleCurve2_25"
QT_MOC_LITERAL(595, 13598, 17), // "ThrottleCurve2_50"
QT_MOC_LITERAL(596, 13616, 17), // "ThrottleCurve2_75"
QT_MOC_LITERAL(597, 13634, 18), // "ThrottleCurve2_100"
QT_MOC_LITERAL(598, 13653, 14), // "MixerValueRoll"
QT_MOC_LITERAL(599, 13668, 15), // "MixerValuePitch"
QT_MOC_LITERAL(600, 13684, 13), // "MixerValueYaw"
QT_MOC_LITERAL(601, 13698, 16), // "RollDifferential"
QT_MOC_LITERAL(602, 13715, 14), // "FirstRollServo"
QT_MOC_LITERAL(603, 13730, 12), // "Curve2Source"
QT_MOC_LITERAL(604, 13743, 10), // "Mixer1Type"
QT_MOC_LITERAL(605, 13754, 27), // "Mixer1Vector_ThrottleCurve1"
QT_MOC_LITERAL(606, 13782, 27), // "Mixer1Vector_ThrottleCurve2"
QT_MOC_LITERAL(607, 13810, 17), // "Mixer1Vector_Roll"
QT_MOC_LITERAL(608, 13828, 18), // "Mixer1Vector_Pitch"
QT_MOC_LITERAL(609, 13847, 16), // "Mixer1Vector_Yaw"
QT_MOC_LITERAL(610, 13864, 10), // "Mixer2Type"
QT_MOC_LITERAL(611, 13875, 27), // "Mixer2Vector_ThrottleCurve1"
QT_MOC_LITERAL(612, 13903, 27), // "Mixer2Vector_ThrottleCurve2"
QT_MOC_LITERAL(613, 13931, 17), // "Mixer2Vector_Roll"
QT_MOC_LITERAL(614, 13949, 18), // "Mixer2Vector_Pitch"
QT_MOC_LITERAL(615, 13968, 16), // "Mixer2Vector_Yaw"
QT_MOC_LITERAL(616, 13985, 10), // "Mixer3Type"
QT_MOC_LITERAL(617, 13996, 27), // "Mixer3Vector_ThrottleCurve1"
QT_MOC_LITERAL(618, 14024, 27), // "Mixer3Vector_ThrottleCurve2"
QT_MOC_LITERAL(619, 14052, 17), // "Mixer3Vector_Roll"
QT_MOC_LITERAL(620, 14070, 18), // "Mixer3Vector_Pitch"
QT_MOC_LITERAL(621, 14089, 16), // "Mixer3Vector_Yaw"
QT_MOC_LITERAL(622, 14106, 10), // "Mixer4Type"
QT_MOC_LITERAL(623, 14117, 27), // "Mixer4Vector_ThrottleCurve1"
QT_MOC_LITERAL(624, 14145, 27), // "Mixer4Vector_ThrottleCurve2"
QT_MOC_LITERAL(625, 14173, 17), // "Mixer4Vector_Roll"
QT_MOC_LITERAL(626, 14191, 18), // "Mixer4Vector_Pitch"
QT_MOC_LITERAL(627, 14210, 16), // "Mixer4Vector_Yaw"
QT_MOC_LITERAL(628, 14227, 10), // "Mixer5Type"
QT_MOC_LITERAL(629, 14238, 27), // "Mixer5Vector_ThrottleCurve1"
QT_MOC_LITERAL(630, 14266, 27), // "Mixer5Vector_ThrottleCurve2"
QT_MOC_LITERAL(631, 14294, 17), // "Mixer5Vector_Roll"
QT_MOC_LITERAL(632, 14312, 18), // "Mixer5Vector_Pitch"
QT_MOC_LITERAL(633, 14331, 16), // "Mixer5Vector_Yaw"
QT_MOC_LITERAL(634, 14348, 10), // "Mixer6Type"
QT_MOC_LITERAL(635, 14359, 27), // "Mixer6Vector_ThrottleCurve1"
QT_MOC_LITERAL(636, 14387, 27), // "Mixer6Vector_ThrottleCurve2"
QT_MOC_LITERAL(637, 14415, 17), // "Mixer6Vector_Roll"
QT_MOC_LITERAL(638, 14433, 18), // "Mixer6Vector_Pitch"
QT_MOC_LITERAL(639, 14452, 16), // "Mixer6Vector_Yaw"
QT_MOC_LITERAL(640, 14469, 10), // "Mixer7Type"
QT_MOC_LITERAL(641, 14480, 27), // "Mixer7Vector_ThrottleCurve1"
QT_MOC_LITERAL(642, 14508, 27), // "Mixer7Vector_ThrottleCurve2"
QT_MOC_LITERAL(643, 14536, 17), // "Mixer7Vector_Roll"
QT_MOC_LITERAL(644, 14554, 18), // "Mixer7Vector_Pitch"
QT_MOC_LITERAL(645, 14573, 16), // "Mixer7Vector_Yaw"
QT_MOC_LITERAL(646, 14590, 10), // "Mixer8Type"
QT_MOC_LITERAL(647, 14601, 27), // "Mixer8Vector_ThrottleCurve1"
QT_MOC_LITERAL(648, 14629, 27), // "Mixer8Vector_ThrottleCurve2"
QT_MOC_LITERAL(649, 14657, 17), // "Mixer8Vector_Roll"
QT_MOC_LITERAL(650, 14675, 18), // "Mixer8Vector_Pitch"
QT_MOC_LITERAL(651, 14694, 16), // "Mixer8Vector_Yaw"
QT_MOC_LITERAL(652, 14711, 10), // "Mixer9Type"
QT_MOC_LITERAL(653, 14722, 27), // "Mixer9Vector_ThrottleCurve1"
QT_MOC_LITERAL(654, 14750, 27), // "Mixer9Vector_ThrottleCurve2"
QT_MOC_LITERAL(655, 14778, 17), // "Mixer9Vector_Roll"
QT_MOC_LITERAL(656, 14796, 18), // "Mixer9Vector_Pitch"
QT_MOC_LITERAL(657, 14815, 16), // "Mixer9Vector_Yaw"
QT_MOC_LITERAL(658, 14832, 11), // "Mixer10Type"
QT_MOC_LITERAL(659, 14844, 28), // "Mixer10Vector_ThrottleCurve1"
QT_MOC_LITERAL(660, 14873, 28), // "Mixer10Vector_ThrottleCurve2"
QT_MOC_LITERAL(661, 14902, 18), // "Mixer10Vector_Roll"
QT_MOC_LITERAL(662, 14921, 19), // "Mixer10Vector_Pitch"
QT_MOC_LITERAL(663, 14941, 17), // "Mixer10Vector_Yaw"
QT_MOC_LITERAL(664, 14959, 11), // "Mixer11Type"
QT_MOC_LITERAL(665, 14971, 28), // "Mixer11Vector_ThrottleCurve1"
QT_MOC_LITERAL(666, 15000, 28), // "Mixer11Vector_ThrottleCurve2"
QT_MOC_LITERAL(667, 15029, 18), // "Mixer11Vector_Roll"
QT_MOC_LITERAL(668, 15048, 19), // "Mixer11Vector_Pitch"
QT_MOC_LITERAL(669, 15068, 17), // "Mixer11Vector_Yaw"
QT_MOC_LITERAL(670, 15086, 11), // "Mixer12Type"
QT_MOC_LITERAL(671, 15098, 28), // "Mixer12Vector_ThrottleCurve1"
QT_MOC_LITERAL(672, 15127, 28), // "Mixer12Vector_ThrottleCurve2"
QT_MOC_LITERAL(673, 15156, 18), // "Mixer12Vector_Roll"
QT_MOC_LITERAL(674, 15175, 19), // "Mixer12Vector_Pitch"
QT_MOC_LITERAL(675, 15195, 17) // "Mixer12Vector_Yaw"

    },
    "MixerSettings\0throttleCurve1Changed\0"
    "\0index\0value\0ThrottleCurve1Changed\0"
    "throttleCurve1_0Changed\0ThrottleCurve1_0Changed\0"
    "throttleCurve1_25Changed\0"
    "ThrottleCurve1_25Changed\0"
    "throttleCurve1_50Changed\0"
    "ThrottleCurve1_50Changed\0"
    "throttleCurve1_75Changed\0"
    "ThrottleCurve1_75Changed\0"
    "throttleCurve1_100Changed\0"
    "ThrottleCurve1_100Changed\0"
    "throttleCurve2Changed\0ThrottleCurve2Changed\0"
    "throttleCurve2_0Changed\0ThrottleCurve2_0Changed\0"
    "throttleCurve2_25Changed\0"
    "ThrottleCurve2_25Changed\0"
    "throttleCurve2_50Changed\0"
    "ThrottleCurve2_50Changed\0"
    "throttleCurve2_75Changed\0"
    "ThrottleCurve2_75Changed\0"
    "throttleCurve2_100Changed\0"
    "ThrottleCurve2_100Changed\0"
    "mixerValueRollChanged\0MixerValueRollChanged\0"
    "mixerValuePitchChanged\0MixerValuePitchChanged\0"
    "mixerValueYawChanged\0MixerValueYawChanged\0"
    "rollDifferentialChanged\0RollDifferentialChanged\0"
    "firstRollServoChanged\0FirstRollServoChanged\0"
    "curve2SourceChanged\0"
    "MixerSettings_Curve2Source::Enum\0"
    "Curve2SourceChanged\0mixer1TypeChanged\0"
    "MixerSettings_Mixer1Type::Enum\0"
    "Mixer1TypeChanged\0mixer1VectorChanged\0"
    "Mixer1VectorChanged\0"
    "mixer1VectorThrottleCurve1Changed\0"
    "Mixer1Vector_ThrottleCurve1Changed\0"
    "mixer1VectorThrottleCurve2Changed\0"
    "Mixer1Vector_ThrottleCurve2Changed\0"
    "mixer1VectorRollChanged\0"
    "Mixer1Vector_RollChanged\0"
    "mixer1VectorPitchChanged\0"
    "Mixer1Vector_PitchChanged\0"
    "mixer1VectorYawChanged\0Mixer1Vector_YawChanged\0"
    "mixer2TypeChanged\0MixerSettings_Mixer2Type::Enum\0"
    "Mixer2TypeChanged\0mixer2VectorChanged\0"
    "Mixer2VectorChanged\0"
    "mixer2VectorThrottleCurve1Changed\0"
    "Mixer2Vector_ThrottleCurve1Changed\0"
    "mixer2VectorThrottleCurve2Changed\0"
    "Mixer2Vector_ThrottleCurve2Changed\0"
    "mixer2VectorRollChanged\0"
    "Mixer2Vector_RollChanged\0"
    "mixer2VectorPitchChanged\0"
    "Mixer2Vector_PitchChanged\0"
    "mixer2VectorYawChanged\0Mixer2Vector_YawChanged\0"
    "mixer3TypeChanged\0MixerSettings_Mixer3Type::Enum\0"
    "Mixer3TypeChanged\0mixer3VectorChanged\0"
    "Mixer3VectorChanged\0"
    "mixer3VectorThrottleCurve1Changed\0"
    "Mixer3Vector_ThrottleCurve1Changed\0"
    "mixer3VectorThrottleCurve2Changed\0"
    "Mixer3Vector_ThrottleCurve2Changed\0"
    "mixer3VectorRollChanged\0"
    "Mixer3Vector_RollChanged\0"
    "mixer3VectorPitchChanged\0"
    "Mixer3Vector_PitchChanged\0"
    "mixer3VectorYawChanged\0Mixer3Vector_YawChanged\0"
    "mixer4TypeChanged\0MixerSettings_Mixer4Type::Enum\0"
    "Mixer4TypeChanged\0mixer4VectorChanged\0"
    "Mixer4VectorChanged\0"
    "mixer4VectorThrottleCurve1Changed\0"
    "Mixer4Vector_ThrottleCurve1Changed\0"
    "mixer4VectorThrottleCurve2Changed\0"
    "Mixer4Vector_ThrottleCurve2Changed\0"
    "mixer4VectorRollChanged\0"
    "Mixer4Vector_RollChanged\0"
    "mixer4VectorPitchChanged\0"
    "Mixer4Vector_PitchChanged\0"
    "mixer4VectorYawChanged\0Mixer4Vector_YawChanged\0"
    "mixer5TypeChanged\0MixerSettings_Mixer5Type::Enum\0"
    "Mixer5TypeChanged\0mixer5VectorChanged\0"
    "Mixer5VectorChanged\0"
    "mixer5VectorThrottleCurve1Changed\0"
    "Mixer5Vector_ThrottleCurve1Changed\0"
    "mixer5VectorThrottleCurve2Changed\0"
    "Mixer5Vector_ThrottleCurve2Changed\0"
    "mixer5VectorRollChanged\0"
    "Mixer5Vector_RollChanged\0"
    "mixer5VectorPitchChanged\0"
    "Mixer5Vector_PitchChanged\0"
    "mixer5VectorYawChanged\0Mixer5Vector_YawChanged\0"
    "mixer6TypeChanged\0MixerSettings_Mixer6Type::Enum\0"
    "Mixer6TypeChanged\0mixer6VectorChanged\0"
    "Mixer6VectorChanged\0"
    "mixer6VectorThrottleCurve1Changed\0"
    "Mixer6Vector_ThrottleCurve1Changed\0"
    "mixer6VectorThrottleCurve2Changed\0"
    "Mixer6Vector_ThrottleCurve2Changed\0"
    "mixer6VectorRollChanged\0"
    "Mixer6Vector_RollChanged\0"
    "mixer6VectorPitchChanged\0"
    "Mixer6Vector_PitchChanged\0"
    "mixer6VectorYawChanged\0Mixer6Vector_YawChanged\0"
    "mixer7TypeChanged\0MixerSettings_Mixer7Type::Enum\0"
    "Mixer7TypeChanged\0mixer7VectorChanged\0"
    "Mixer7VectorChanged\0"
    "mixer7VectorThrottleCurve1Changed\0"
    "Mixer7Vector_ThrottleCurve1Changed\0"
    "mixer7VectorThrottleCurve2Changed\0"
    "Mixer7Vector_ThrottleCurve2Changed\0"
    "mixer7VectorRollChanged\0"
    "Mixer7Vector_RollChanged\0"
    "mixer7VectorPitchChanged\0"
    "Mixer7Vector_PitchChanged\0"
    "mixer7VectorYawChanged\0Mixer7Vector_YawChanged\0"
    "mixer8TypeChanged\0MixerSettings_Mixer8Type::Enum\0"
    "Mixer8TypeChanged\0mixer8VectorChanged\0"
    "Mixer8VectorChanged\0"
    "mixer8VectorThrottleCurve1Changed\0"
    "Mixer8Vector_ThrottleCurve1Changed\0"
    "mixer8VectorThrottleCurve2Changed\0"
    "Mixer8Vector_ThrottleCurve2Changed\0"
    "mixer8VectorRollChanged\0"
    "Mixer8Vector_RollChanged\0"
    "mixer8VectorPitchChanged\0"
    "Mixer8Vector_PitchChanged\0"
    "mixer8VectorYawChanged\0Mixer8Vector_YawChanged\0"
    "mixer9TypeChanged\0MixerSettings_Mixer9Type::Enum\0"
    "Mixer9TypeChanged\0mixer9VectorChanged\0"
    "Mixer9VectorChanged\0"
    "mixer9VectorThrottleCurve1Changed\0"
    "Mixer9Vector_ThrottleCurve1Changed\0"
    "mixer9VectorThrottleCurve2Changed\0"
    "Mixer9Vector_ThrottleCurve2Changed\0"
    "mixer9VectorRollChanged\0"
    "Mixer9Vector_RollChanged\0"
    "mixer9VectorPitchChanged\0"
    "Mixer9Vector_PitchChanged\0"
    "mixer9VectorYawChanged\0Mixer9Vector_YawChanged\0"
    "mixer10TypeChanged\0MixerSettings_Mixer10Type::Enum\0"
    "Mixer10TypeChanged\0mixer10VectorChanged\0"
    "Mixer10VectorChanged\0"
    "mixer10VectorThrottleCurve1Changed\0"
    "Mixer10Vector_ThrottleCurve1Changed\0"
    "mixer10VectorThrottleCurve2Changed\0"
    "Mixer10Vector_ThrottleCurve2Changed\0"
    "mixer10VectorRollChanged\0"
    "Mixer10Vector_RollChanged\0"
    "mixer10VectorPitchChanged\0"
    "Mixer10Vector_PitchChanged\0"
    "mixer10VectorYawChanged\0"
    "Mixer10Vector_YawChanged\0mixer11TypeChanged\0"
    "MixerSettings_Mixer11Type::Enum\0"
    "Mixer11TypeChanged\0mixer11VectorChanged\0"
    "Mixer11VectorChanged\0"
    "mixer11VectorThrottleCurve1Changed\0"
    "Mixer11Vector_ThrottleCurve1Changed\0"
    "mixer11VectorThrottleCurve2Changed\0"
    "Mixer11Vector_ThrottleCurve2Changed\0"
    "mixer11VectorRollChanged\0"
    "Mixer11Vector_RollChanged\0"
    "mixer11VectorPitchChanged\0"
    "Mixer11Vector_PitchChanged\0"
    "mixer11VectorYawChanged\0"
    "Mixer11Vector_YawChanged\0mixer12TypeChanged\0"
    "MixerSettings_Mixer12Type::Enum\0"
    "Mixer12TypeChanged\0mixer12VectorChanged\0"
    "Mixer12VectorChanged\0"
    "mixer12VectorThrottleCurve1Changed\0"
    "Mixer12Vector_ThrottleCurve1Changed\0"
    "mixer12VectorThrottleCurve2Changed\0"
    "Mixer12Vector_ThrottleCurve2Changed\0"
    "mixer12VectorRollChanged\0"
    "Mixer12Vector_RollChanged\0"
    "mixer12VectorPitchChanged\0"
    "Mixer12Vector_PitchChanged\0"
    "mixer12VectorYawChanged\0"
    "Mixer12Vector_YawChanged\0setThrottleCurve1\0"
    "setThrottleCurve1_0\0setThrottleCurve1_25\0"
    "setThrottleCurve1_50\0setThrottleCurve1_75\0"
    "setThrottleCurve1_100\0setThrottleCurve2\0"
    "setThrottleCurve2_0\0setThrottleCurve2_25\0"
    "setThrottleCurve2_50\0setThrottleCurve2_75\0"
    "setThrottleCurve2_100\0setMixerValueRoll\0"
    "setMixerValuePitch\0setMixerValueYaw\0"
    "setRollDifferential\0setFirstRollServo\0"
    "setCurve2Source\0setMixer1Type\0"
    "setMixer1Vector\0setMixer1VectorThrottleCurve1\0"
    "setMixer1Vector_ThrottleCurve1\0"
    "setMixer1VectorThrottleCurve2\0"
    "setMixer1Vector_ThrottleCurve2\0"
    "setMixer1VectorRoll\0setMixer1Vector_Roll\0"
    "setMixer1VectorPitch\0setMixer1Vector_Pitch\0"
    "setMixer1VectorYaw\0setMixer1Vector_Yaw\0"
    "setMixer2Type\0setMixer2Vector\0"
    "setMixer2VectorThrottleCurve1\0"
    "setMixer2Vector_ThrottleCurve1\0"
    "setMixer2VectorThrottleCurve2\0"
    "setMixer2Vector_ThrottleCurve2\0"
    "setMixer2VectorRoll\0setMixer2Vector_Roll\0"
    "setMixer2VectorPitch\0setMixer2Vector_Pitch\0"
    "setMixer2VectorYaw\0setMixer2Vector_Yaw\0"
    "setMixer3Type\0setMixer3Vector\0"
    "setMixer3VectorThrottleCurve1\0"
    "setMixer3Vector_ThrottleCurve1\0"
    "setMixer3VectorThrottleCurve2\0"
    "setMixer3Vector_ThrottleCurve2\0"
    "setMixer3VectorRoll\0setMixer3Vector_Roll\0"
    "setMixer3VectorPitch\0setMixer3Vector_Pitch\0"
    "setMixer3VectorYaw\0setMixer3Vector_Yaw\0"
    "setMixer4Type\0setMixer4Vector\0"
    "setMixer4VectorThrottleCurve1\0"
    "setMixer4Vector_ThrottleCurve1\0"
    "setMixer4VectorThrottleCurve2\0"
    "setMixer4Vector_ThrottleCurve2\0"
    "setMixer4VectorRoll\0setMixer4Vector_Roll\0"
    "setMixer4VectorPitch\0setMixer4Vector_Pitch\0"
    "setMixer4VectorYaw\0setMixer4Vector_Yaw\0"
    "setMixer5Type\0setMixer5Vector\0"
    "setMixer5VectorThrottleCurve1\0"
    "setMixer5Vector_ThrottleCurve1\0"
    "setMixer5VectorThrottleCurve2\0"
    "setMixer5Vector_ThrottleCurve2\0"
    "setMixer5VectorRoll\0setMixer5Vector_Roll\0"
    "setMixer5VectorPitch\0setMixer5Vector_Pitch\0"
    "setMixer5VectorYaw\0setMixer5Vector_Yaw\0"
    "setMixer6Type\0setMixer6Vector\0"
    "setMixer6VectorThrottleCurve1\0"
    "setMixer6Vector_ThrottleCurve1\0"
    "setMixer6VectorThrottleCurve2\0"
    "setMixer6Vector_ThrottleCurve2\0"
    "setMixer6VectorRoll\0setMixer6Vector_Roll\0"
    "setMixer6VectorPitch\0setMixer6Vector_Pitch\0"
    "setMixer6VectorYaw\0setMixer6Vector_Yaw\0"
    "setMixer7Type\0setMixer7Vector\0"
    "setMixer7VectorThrottleCurve1\0"
    "setMixer7Vector_ThrottleCurve1\0"
    "setMixer7VectorThrottleCurve2\0"
    "setMixer7Vector_ThrottleCurve2\0"
    "setMixer7VectorRoll\0setMixer7Vector_Roll\0"
    "setMixer7VectorPitch\0setMixer7Vector_Pitch\0"
    "setMixer7VectorYaw\0setMixer7Vector_Yaw\0"
    "setMixer8Type\0setMixer8Vector\0"
    "setMixer8VectorThrottleCurve1\0"
    "setMixer8Vector_ThrottleCurve1\0"
    "setMixer8VectorThrottleCurve2\0"
    "setMixer8Vector_ThrottleCurve2\0"
    "setMixer8VectorRoll\0setMixer8Vector_Roll\0"
    "setMixer8VectorPitch\0setMixer8Vector_Pitch\0"
    "setMixer8VectorYaw\0setMixer8Vector_Yaw\0"
    "setMixer9Type\0setMixer9Vector\0"
    "setMixer9VectorThrottleCurve1\0"
    "setMixer9Vector_ThrottleCurve1\0"
    "setMixer9VectorThrottleCurve2\0"
    "setMixer9Vector_ThrottleCurve2\0"
    "setMixer9VectorRoll\0setMixer9Vector_Roll\0"
    "setMixer9VectorPitch\0setMixer9Vector_Pitch\0"
    "setMixer9VectorYaw\0setMixer9Vector_Yaw\0"
    "setMixer10Type\0setMixer10Vector\0"
    "setMixer10VectorThrottleCurve1\0"
    "setMixer10Vector_ThrottleCurve1\0"
    "setMixer10VectorThrottleCurve2\0"
    "setMixer10Vector_ThrottleCurve2\0"
    "setMixer10VectorRoll\0setMixer10Vector_Roll\0"
    "setMixer10VectorPitch\0setMixer10Vector_Pitch\0"
    "setMixer10VectorYaw\0setMixer10Vector_Yaw\0"
    "setMixer11Type\0setMixer11Vector\0"
    "setMixer11VectorThrottleCurve1\0"
    "setMixer11Vector_ThrottleCurve1\0"
    "setMixer11VectorThrottleCurve2\0"
    "setMixer11Vector_ThrottleCurve2\0"
    "setMixer11VectorRoll\0setMixer11Vector_Roll\0"
    "setMixer11VectorPitch\0setMixer11Vector_Pitch\0"
    "setMixer11VectorYaw\0setMixer11Vector_Yaw\0"
    "setMixer12Type\0setMixer12Vector\0"
    "setMixer12VectorThrottleCurve1\0"
    "setMixer12Vector_ThrottleCurve1\0"
    "setMixer12VectorThrottleCurve2\0"
    "setMixer12Vector_ThrottleCurve2\0"
    "setMixer12VectorRoll\0setMixer12Vector_Roll\0"
    "setMixer12VectorPitch\0setMixer12Vector_Pitch\0"
    "setMixer12VectorYaw\0setMixer12Vector_Yaw\0"
    "emitNotifications\0throttleCurve1\0"
    "getThrottleCurve1\0getThrottleCurve1_0\0"
    "getThrottleCurve1_25\0getThrottleCurve1_50\0"
    "getThrottleCurve1_75\0getThrottleCurve1_100\0"
    "throttleCurve2\0getThrottleCurve2\0"
    "getThrottleCurve2_0\0getThrottleCurve2_25\0"
    "getThrottleCurve2_50\0getThrottleCurve2_75\0"
    "getThrottleCurve2_100\0getMixerValueRoll\0"
    "getMixerValuePitch\0getMixerValueYaw\0"
    "getRollDifferential\0getFirstRollServo\0"
    "getCurve2Source\0getMixer1Type\0"
    "mixer1Vector\0getMixer1Vector\0"
    "getMixer1Vector_ThrottleCurve1\0"
    "getMixer1Vector_ThrottleCurve2\0"
    "getMixer1Vector_Roll\0getMixer1Vector_Pitch\0"
    "getMixer1Vector_Yaw\0getMixer2Type\0"
    "mixer2Vector\0getMixer2Vector\0"
    "getMixer2Vector_ThrottleCurve1\0"
    "getMixer2Vector_ThrottleCurve2\0"
    "getMixer2Vector_Roll\0getMixer2Vector_Pitch\0"
    "getMixer2Vector_Yaw\0getMixer3Type\0"
    "mixer3Vector\0getMixer3Vector\0"
    "getMixer3Vector_ThrottleCurve1\0"
    "getMixer3Vector_ThrottleCurve2\0"
    "getMixer3Vector_Roll\0getMixer3Vector_Pitch\0"
    "getMixer3Vector_Yaw\0getMixer4Type\0"
    "mixer4Vector\0getMixer4Vector\0"
    "getMixer4Vector_ThrottleCurve1\0"
    "getMixer4Vector_ThrottleCurve2\0"
    "getMixer4Vector_Roll\0getMixer4Vector_Pitch\0"
    "getMixer4Vector_Yaw\0getMixer5Type\0"
    "mixer5Vector\0getMixer5Vector\0"
    "getMixer5Vector_ThrottleCurve1\0"
    "getMixer5Vector_ThrottleCurve2\0"
    "getMixer5Vector_Roll\0getMixer5Vector_Pitch\0"
    "getMixer5Vector_Yaw\0getMixer6Type\0"
    "mixer6Vector\0getMixer6Vector\0"
    "getMixer6Vector_ThrottleCurve1\0"
    "getMixer6Vector_ThrottleCurve2\0"
    "getMixer6Vector_Roll\0getMixer6Vector_Pitch\0"
    "getMixer6Vector_Yaw\0getMixer7Type\0"
    "mixer7Vector\0getMixer7Vector\0"
    "getMixer7Vector_ThrottleCurve1\0"
    "getMixer7Vector_ThrottleCurve2\0"
    "getMixer7Vector_Roll\0getMixer7Vector_Pitch\0"
    "getMixer7Vector_Yaw\0getMixer8Type\0"
    "mixer8Vector\0getMixer8Vector\0"
    "getMixer8Vector_ThrottleCurve1\0"
    "getMixer8Vector_ThrottleCurve2\0"
    "getMixer8Vector_Roll\0getMixer8Vector_Pitch\0"
    "getMixer8Vector_Yaw\0getMixer9Type\0"
    "mixer9Vector\0getMixer9Vector\0"
    "getMixer9Vector_ThrottleCurve1\0"
    "getMixer9Vector_ThrottleCurve2\0"
    "getMixer9Vector_Roll\0getMixer9Vector_Pitch\0"
    "getMixer9Vector_Yaw\0getMixer10Type\0"
    "mixer10Vector\0getMixer10Vector\0"
    "getMixer10Vector_ThrottleCurve1\0"
    "getMixer10Vector_ThrottleCurve2\0"
    "getMixer10Vector_Roll\0getMixer10Vector_Pitch\0"
    "getMixer10Vector_Yaw\0getMixer11Type\0"
    "mixer11Vector\0getMixer11Vector\0"
    "getMixer11Vector_ThrottleCurve1\0"
    "getMixer11Vector_ThrottleCurve2\0"
    "getMixer11Vector_Roll\0getMixer11Vector_Pitch\0"
    "getMixer11Vector_Yaw\0getMixer12Type\0"
    "mixer12Vector\0getMixer12Vector\0"
    "getMixer12Vector_ThrottleCurve1\0"
    "getMixer12Vector_ThrottleCurve2\0"
    "getMixer12Vector_Roll\0getMixer12Vector_Pitch\0"
    "getMixer12Vector_Yaw\0throttleCurve1_0\0"
    "throttleCurve1_25\0throttleCurve1_50\0"
    "throttleCurve1_75\0throttleCurve1_100\0"
    "throttleCurve2_0\0throttleCurve2_25\0"
    "throttleCurve2_50\0throttleCurve2_75\0"
    "throttleCurve2_100\0mixerValueRoll\0"
    "mixerValuePitch\0mixerValueYaw\0"
    "rollDifferential\0firstRollServo\0"
    "curve2Source\0mixer1Type\0"
    "mixer1VectorThrottleCurve1\0"
    "mixer1VectorThrottleCurve2\0mixer1VectorRoll\0"
    "mixer1VectorPitch\0mixer1VectorYaw\0"
    "mixer2Type\0mixer2VectorThrottleCurve1\0"
    "mixer2VectorThrottleCurve2\0mixer2VectorRoll\0"
    "mixer2VectorPitch\0mixer2VectorYaw\0"
    "mixer3Type\0mixer3VectorThrottleCurve1\0"
    "mixer3VectorThrottleCurve2\0mixer3VectorRoll\0"
    "mixer3VectorPitch\0mixer3VectorYaw\0"
    "mixer4Type\0mixer4VectorThrottleCurve1\0"
    "mixer4VectorThrottleCurve2\0mixer4VectorRoll\0"
    "mixer4VectorPitch\0mixer4VectorYaw\0"
    "mixer5Type\0mixer5VectorThrottleCurve1\0"
    "mixer5VectorThrottleCurve2\0mixer5VectorRoll\0"
    "mixer5VectorPitch\0mixer5VectorYaw\0"
    "mixer6Type\0mixer6VectorThrottleCurve1\0"
    "mixer6VectorThrottleCurve2\0mixer6VectorRoll\0"
    "mixer6VectorPitch\0mixer6VectorYaw\0"
    "mixer7Type\0mixer7VectorThrottleCurve1\0"
    "mixer7VectorThrottleCurve2\0mixer7VectorRoll\0"
    "mixer7VectorPitch\0mixer7VectorYaw\0"
    "mixer8Type\0mixer8VectorThrottleCurve1\0"
    "mixer8VectorThrottleCurve2\0mixer8VectorRoll\0"
    "mixer8VectorPitch\0mixer8VectorYaw\0"
    "mixer9Type\0mixer9VectorThrottleCurve1\0"
    "mixer9VectorThrottleCurve2\0mixer9VectorRoll\0"
    "mixer9VectorPitch\0mixer9VectorYaw\0"
    "mixer10Type\0mixer10VectorThrottleCurve1\0"
    "mixer10VectorThrottleCurve2\0"
    "mixer10VectorRoll\0mixer10VectorPitch\0"
    "mixer10VectorYaw\0mixer11Type\0"
    "mixer11VectorThrottleCurve1\0"
    "mixer11VectorThrottleCurve2\0"
    "mixer11VectorRoll\0mixer11VectorPitch\0"
    "mixer11VectorYaw\0mixer12Type\0"
    "mixer12VectorThrottleCurve1\0"
    "mixer12VectorThrottleCurve2\0"
    "mixer12VectorRoll\0mixer12VectorPitch\0"
    "mixer12VectorYaw\0ThrottleCurve1_0\0"
    "ThrottleCurve1_25\0ThrottleCurve1_50\0"
    "ThrottleCurve1_75\0ThrottleCurve1_100\0"
    "ThrottleCurve2_0\0ThrottleCurve2_25\0"
    "ThrottleCurve2_50\0ThrottleCurve2_75\0"
    "ThrottleCurve2_100\0MixerValueRoll\0"
    "MixerValuePitch\0MixerValueYaw\0"
    "RollDifferential\0FirstRollServo\0"
    "Curve2Source\0Mixer1Type\0"
    "Mixer1Vector_ThrottleCurve1\0"
    "Mixer1Vector_ThrottleCurve2\0"
    "Mixer1Vector_Roll\0Mixer1Vector_Pitch\0"
    "Mixer1Vector_Yaw\0Mixer2Type\0"
    "Mixer2Vector_ThrottleCurve1\0"
    "Mixer2Vector_ThrottleCurve2\0"
    "Mixer2Vector_Roll\0Mixer2Vector_Pitch\0"
    "Mixer2Vector_Yaw\0Mixer3Type\0"
    "Mixer3Vector_ThrottleCurve1\0"
    "Mixer3Vector_ThrottleCurve2\0"
    "Mixer3Vector_Roll\0Mixer3Vector_Pitch\0"
    "Mixer3Vector_Yaw\0Mixer4Type\0"
    "Mixer4Vector_ThrottleCurve1\0"
    "Mixer4Vector_ThrottleCurve2\0"
    "Mixer4Vector_Roll\0Mixer4Vector_Pitch\0"
    "Mixer4Vector_Yaw\0Mixer5Type\0"
    "Mixer5Vector_ThrottleCurve1\0"
    "Mixer5Vector_ThrottleCurve2\0"
    "Mixer5Vector_Roll\0Mixer5Vector_Pitch\0"
    "Mixer5Vector_Yaw\0Mixer6Type\0"
    "Mixer6Vector_ThrottleCurve1\0"
    "Mixer6Vector_ThrottleCurve2\0"
    "Mixer6Vector_Roll\0Mixer6Vector_Pitch\0"
    "Mixer6Vector_Yaw\0Mixer7Type\0"
    "Mixer7Vector_ThrottleCurve1\0"
    "Mixer7Vector_ThrottleCurve2\0"
    "Mixer7Vector_Roll\0Mixer7Vector_Pitch\0"
    "Mixer7Vector_Yaw\0Mixer8Type\0"
    "Mixer8Vector_ThrottleCurve1\0"
    "Mixer8Vector_ThrottleCurve2\0"
    "Mixer8Vector_Roll\0Mixer8Vector_Pitch\0"
    "Mixer8Vector_Yaw\0Mixer9Type\0"
    "Mixer9Vector_ThrottleCurve1\0"
    "Mixer9Vector_ThrottleCurve2\0"
    "Mixer9Vector_Roll\0Mixer9Vector_Pitch\0"
    "Mixer9Vector_Yaw\0Mixer10Type\0"
    "Mixer10Vector_ThrottleCurve1\0"
    "Mixer10Vector_ThrottleCurve2\0"
    "Mixer10Vector_Roll\0Mixer10Vector_Pitch\0"
    "Mixer10Vector_Yaw\0Mixer11Type\0"
    "Mixer11Vector_ThrottleCurve1\0"
    "Mixer11Vector_ThrottleCurve2\0"
    "Mixer11Vector_Roll\0Mixer11Vector_Pitch\0"
    "Mixer11Vector_Yaw\0Mixer12Type\0"
    "Mixer12Vector_ThrottleCurve1\0"
    "Mixer12Vector_ThrottleCurve2\0"
    "Mixer12Vector_Roll\0Mixer12Vector_Pitch\0"
    "Mixer12Vector_Yaw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MixerSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     513,   14, // methods
     176, 4048, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     204,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2, 2579,    2, 0x06 /* Public */,
       5,    2, 2584,    2, 0x06 /* Public */,
       6,    1, 2589,    2, 0x06 /* Public */,
       7,    1, 2592,    2, 0x06 /* Public */,
       8,    1, 2595,    2, 0x06 /* Public */,
       9,    1, 2598,    2, 0x06 /* Public */,
      10,    1, 2601,    2, 0x06 /* Public */,
      11,    1, 2604,    2, 0x06 /* Public */,
      12,    1, 2607,    2, 0x06 /* Public */,
      13,    1, 2610,    2, 0x06 /* Public */,
      14,    1, 2613,    2, 0x06 /* Public */,
      15,    1, 2616,    2, 0x06 /* Public */,
      16,    2, 2619,    2, 0x06 /* Public */,
      17,    2, 2624,    2, 0x06 /* Public */,
      18,    1, 2629,    2, 0x06 /* Public */,
      19,    1, 2632,    2, 0x06 /* Public */,
      20,    1, 2635,    2, 0x06 /* Public */,
      21,    1, 2638,    2, 0x06 /* Public */,
      22,    1, 2641,    2, 0x06 /* Public */,
      23,    1, 2644,    2, 0x06 /* Public */,
      24,    1, 2647,    2, 0x06 /* Public */,
      25,    1, 2650,    2, 0x06 /* Public */,
      26,    1, 2653,    2, 0x06 /* Public */,
      27,    1, 2656,    2, 0x06 /* Public */,
      28,    1, 2659,    2, 0x06 /* Public */,
      29,    1, 2662,    2, 0x06 /* Public */,
      30,    1, 2665,    2, 0x06 /* Public */,
      31,    1, 2668,    2, 0x06 /* Public */,
      32,    1, 2671,    2, 0x06 /* Public */,
      33,    1, 2674,    2, 0x06 /* Public */,
      34,    1, 2677,    2, 0x06 /* Public */,
      35,    1, 2680,    2, 0x06 /* Public */,
      36,    1, 2683,    2, 0x06 /* Public */,
      37,    1, 2686,    2, 0x06 /* Public */,
      38,    1, 2689,    2, 0x06 /* Public */,
      40,    1, 2692,    2, 0x06 /* Public */,
      41,    1, 2695,    2, 0x06 /* Public */,
      43,    1, 2698,    2, 0x06 /* Public */,
      44,    2, 2701,    2, 0x06 /* Public */,
      45,    2, 2706,    2, 0x06 /* Public */,
      46,    1, 2711,    2, 0x06 /* Public */,
      47,    1, 2714,    2, 0x06 /* Public */,
      48,    1, 2717,    2, 0x06 /* Public */,
      49,    1, 2720,    2, 0x06 /* Public */,
      50,    1, 2723,    2, 0x06 /* Public */,
      51,    1, 2726,    2, 0x06 /* Public */,
      52,    1, 2729,    2, 0x06 /* Public */,
      53,    1, 2732,    2, 0x06 /* Public */,
      54,    1, 2735,    2, 0x06 /* Public */,
      55,    1, 2738,    2, 0x06 /* Public */,
      56,    1, 2741,    2, 0x06 /* Public */,
      58,    1, 2744,    2, 0x06 /* Public */,
      59,    2, 2747,    2, 0x06 /* Public */,
      60,    2, 2752,    2, 0x06 /* Public */,
      61,    1, 2757,    2, 0x06 /* Public */,
      62,    1, 2760,    2, 0x06 /* Public */,
      63,    1, 2763,    2, 0x06 /* Public */,
      64,    1, 2766,    2, 0x06 /* Public */,
      65,    1, 2769,    2, 0x06 /* Public */,
      66,    1, 2772,    2, 0x06 /* Public */,
      67,    1, 2775,    2, 0x06 /* Public */,
      68,    1, 2778,    2, 0x06 /* Public */,
      69,    1, 2781,    2, 0x06 /* Public */,
      70,    1, 2784,    2, 0x06 /* Public */,
      71,    1, 2787,    2, 0x06 /* Public */,
      73,    1, 2790,    2, 0x06 /* Public */,
      74,    2, 2793,    2, 0x06 /* Public */,
      75,    2, 2798,    2, 0x06 /* Public */,
      76,    1, 2803,    2, 0x06 /* Public */,
      77,    1, 2806,    2, 0x06 /* Public */,
      78,    1, 2809,    2, 0x06 /* Public */,
      79,    1, 2812,    2, 0x06 /* Public */,
      80,    1, 2815,    2, 0x06 /* Public */,
      81,    1, 2818,    2, 0x06 /* Public */,
      82,    1, 2821,    2, 0x06 /* Public */,
      83,    1, 2824,    2, 0x06 /* Public */,
      84,    1, 2827,    2, 0x06 /* Public */,
      85,    1, 2830,    2, 0x06 /* Public */,
      86,    1, 2833,    2, 0x06 /* Public */,
      88,    1, 2836,    2, 0x06 /* Public */,
      89,    2, 2839,    2, 0x06 /* Public */,
      90,    2, 2844,    2, 0x06 /* Public */,
      91,    1, 2849,    2, 0x06 /* Public */,
      92,    1, 2852,    2, 0x06 /* Public */,
      93,    1, 2855,    2, 0x06 /* Public */,
      94,    1, 2858,    2, 0x06 /* Public */,
      95,    1, 2861,    2, 0x06 /* Public */,
      96,    1, 2864,    2, 0x06 /* Public */,
      97,    1, 2867,    2, 0x06 /* Public */,
      98,    1, 2870,    2, 0x06 /* Public */,
      99,    1, 2873,    2, 0x06 /* Public */,
     100,    1, 2876,    2, 0x06 /* Public */,
     101,    1, 2879,    2, 0x06 /* Public */,
     103,    1, 2882,    2, 0x06 /* Public */,
     104,    2, 2885,    2, 0x06 /* Public */,
     105,    2, 2890,    2, 0x06 /* Public */,
     106,    1, 2895,    2, 0x06 /* Public */,
     107,    1, 2898,    2, 0x06 /* Public */,
     108,    1, 2901,    2, 0x06 /* Public */,
     109,    1, 2904,    2, 0x06 /* Public */,
     110,    1, 2907,    2, 0x06 /* Public */,
     111,    1, 2910,    2, 0x06 /* Public */,
     112,    1, 2913,    2, 0x06 /* Public */,
     113,    1, 2916,    2, 0x06 /* Public */,
     114,    1, 2919,    2, 0x06 /* Public */,
     115,    1, 2922,    2, 0x06 /* Public */,
     116,    1, 2925,    2, 0x06 /* Public */,
     118,    1, 2928,    2, 0x06 /* Public */,
     119,    2, 2931,    2, 0x06 /* Public */,
     120,    2, 2936,    2, 0x06 /* Public */,
     121,    1, 2941,    2, 0x06 /* Public */,
     122,    1, 2944,    2, 0x06 /* Public */,
     123,    1, 2947,    2, 0x06 /* Public */,
     124,    1, 2950,    2, 0x06 /* Public */,
     125,    1, 2953,    2, 0x06 /* Public */,
     126,    1, 2956,    2, 0x06 /* Public */,
     127,    1, 2959,    2, 0x06 /* Public */,
     128,    1, 2962,    2, 0x06 /* Public */,
     129,    1, 2965,    2, 0x06 /* Public */,
     130,    1, 2968,    2, 0x06 /* Public */,
     131,    1, 2971,    2, 0x06 /* Public */,
     133,    1, 2974,    2, 0x06 /* Public */,
     134,    2, 2977,    2, 0x06 /* Public */,
     135,    2, 2982,    2, 0x06 /* Public */,
     136,    1, 2987,    2, 0x06 /* Public */,
     137,    1, 2990,    2, 0x06 /* Public */,
     138,    1, 2993,    2, 0x06 /* Public */,
     139,    1, 2996,    2, 0x06 /* Public */,
     140,    1, 2999,    2, 0x06 /* Public */,
     141,    1, 3002,    2, 0x06 /* Public */,
     142,    1, 3005,    2, 0x06 /* Public */,
     143,    1, 3008,    2, 0x06 /* Public */,
     144,    1, 3011,    2, 0x06 /* Public */,
     145,    1, 3014,    2, 0x06 /* Public */,
     146,    1, 3017,    2, 0x06 /* Public */,
     148,    1, 3020,    2, 0x06 /* Public */,
     149,    2, 3023,    2, 0x06 /* Public */,
     150,    2, 3028,    2, 0x06 /* Public */,
     151,    1, 3033,    2, 0x06 /* Public */,
     152,    1, 3036,    2, 0x06 /* Public */,
     153,    1, 3039,    2, 0x06 /* Public */,
     154,    1, 3042,    2, 0x06 /* Public */,
     155,    1, 3045,    2, 0x06 /* Public */,
     156,    1, 3048,    2, 0x06 /* Public */,
     157,    1, 3051,    2, 0x06 /* Public */,
     158,    1, 3054,    2, 0x06 /* Public */,
     159,    1, 3057,    2, 0x06 /* Public */,
     160,    1, 3060,    2, 0x06 /* Public */,
     161,    1, 3063,    2, 0x06 /* Public */,
     163,    1, 3066,    2, 0x06 /* Public */,
     164,    2, 3069,    2, 0x06 /* Public */,
     165,    2, 3074,    2, 0x06 /* Public */,
     166,    1, 3079,    2, 0x06 /* Public */,
     167,    1, 3082,    2, 0x06 /* Public */,
     168,    1, 3085,    2, 0x06 /* Public */,
     169,    1, 3088,    2, 0x06 /* Public */,
     170,    1, 3091,    2, 0x06 /* Public */,
     171,    1, 3094,    2, 0x06 /* Public */,
     172,    1, 3097,    2, 0x06 /* Public */,
     173,    1, 3100,    2, 0x06 /* Public */,
     174,    1, 3103,    2, 0x06 /* Public */,
     175,    1, 3106,    2, 0x06 /* Public */,
     176,    1, 3109,    2, 0x06 /* Public */,
     178,    1, 3112,    2, 0x06 /* Public */,
     179,    2, 3115,    2, 0x06 /* Public */,
     180,    2, 3120,    2, 0x06 /* Public */,
     181,    1, 3125,    2, 0x06 /* Public */,
     182,    1, 3128,    2, 0x06 /* Public */,
     183,    1, 3131,    2, 0x06 /* Public */,
     184,    1, 3134,    2, 0x06 /* Public */,
     185,    1, 3137,    2, 0x06 /* Public */,
     186,    1, 3140,    2, 0x06 /* Public */,
     187,    1, 3143,    2, 0x06 /* Public */,
     188,    1, 3146,    2, 0x06 /* Public */,
     189,    1, 3149,    2, 0x06 /* Public */,
     190,    1, 3152,    2, 0x06 /* Public */,
     191,    1, 3155,    2, 0x06 /* Public */,
     193,    1, 3158,    2, 0x06 /* Public */,
     194,    2, 3161,    2, 0x06 /* Public */,
     195,    2, 3166,    2, 0x06 /* Public */,
     196,    1, 3171,    2, 0x06 /* Public */,
     197,    1, 3174,    2, 0x06 /* Public */,
     198,    1, 3177,    2, 0x06 /* Public */,
     199,    1, 3180,    2, 0x06 /* Public */,
     200,    1, 3183,    2, 0x06 /* Public */,
     201,    1, 3186,    2, 0x06 /* Public */,
     202,    1, 3189,    2, 0x06 /* Public */,
     203,    1, 3192,    2, 0x06 /* Public */,
     204,    1, 3195,    2, 0x06 /* Public */,
     205,    1, 3198,    2, 0x06 /* Public */,
     206,    1, 3201,    2, 0x06 /* Public */,
     208,    1, 3204,    2, 0x06 /* Public */,
     209,    2, 3207,    2, 0x06 /* Public */,
     210,    2, 3212,    2, 0x06 /* Public */,
     211,    1, 3217,    2, 0x06 /* Public */,
     212,    1, 3220,    2, 0x06 /* Public */,
     213,    1, 3223,    2, 0x06 /* Public */,
     214,    1, 3226,    2, 0x06 /* Public */,
     215,    1, 3229,    2, 0x06 /* Public */,
     216,    1, 3232,    2, 0x06 /* Public */,
     217,    1, 3235,    2, 0x06 /* Public */,
     218,    1, 3238,    2, 0x06 /* Public */,
     219,    1, 3241,    2, 0x06 /* Public */,
     220,    1, 3244,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     221,    2, 3247,    2, 0x0a /* Public */,
     222,    1, 3252,    2, 0x0a /* Public */,
     223,    1, 3255,    2, 0x0a /* Public */,
     224,    1, 3258,    2, 0x0a /* Public */,
     225,    1, 3261,    2, 0x0a /* Public */,
     226,    1, 3264,    2, 0x0a /* Public */,
     227,    2, 3267,    2, 0x0a /* Public */,
     228,    1, 3272,    2, 0x0a /* Public */,
     229,    1, 3275,    2, 0x0a /* Public */,
     230,    1, 3278,    2, 0x0a /* Public */,
     231,    1, 3281,    2, 0x0a /* Public */,
     232,    1, 3284,    2, 0x0a /* Public */,
     233,    1, 3287,    2, 0x0a /* Public */,
     233,    1, 3290,    2, 0x0a /* Public */,
     234,    1, 3293,    2, 0x0a /* Public */,
     234,    1, 3296,    2, 0x0a /* Public */,
     235,    1, 3299,    2, 0x0a /* Public */,
     235,    1, 3302,    2, 0x0a /* Public */,
     236,    1, 3305,    2, 0x0a /* Public */,
     236,    1, 3308,    2, 0x0a /* Public */,
     237,    1, 3311,    2, 0x0a /* Public */,
     237,    1, 3314,    2, 0x0a /* Public */,
     238,    1, 3317,    2, 0x0a /* Public */,
     238,    1, 3320,    2, 0x0a /* Public */,
     239,    1, 3323,    2, 0x0a /* Public */,
     239,    1, 3326,    2, 0x0a /* Public */,
     240,    2, 3329,    2, 0x0a /* Public */,
     240,    2, 3334,    2, 0x0a /* Public */,
     241,    1, 3339,    2, 0x0a /* Public */,
     242,    1, 3342,    2, 0x0a /* Public */,
     243,    1, 3345,    2, 0x0a /* Public */,
     244,    1, 3348,    2, 0x0a /* Public */,
     245,    1, 3351,    2, 0x0a /* Public */,
     246,    1, 3354,    2, 0x0a /* Public */,
     247,    1, 3357,    2, 0x0a /* Public */,
     248,    1, 3360,    2, 0x0a /* Public */,
     249,    1, 3363,    2, 0x0a /* Public */,
     250,    1, 3366,    2, 0x0a /* Public */,
     251,    1, 3369,    2, 0x0a /* Public */,
     251,    1, 3372,    2, 0x0a /* Public */,
     252,    2, 3375,    2, 0x0a /* Public */,
     252,    2, 3380,    2, 0x0a /* Public */,
     253,    1, 3385,    2, 0x0a /* Public */,
     254,    1, 3388,    2, 0x0a /* Public */,
     255,    1, 3391,    2, 0x0a /* Public */,
     256,    1, 3394,    2, 0x0a /* Public */,
     257,    1, 3397,    2, 0x0a /* Public */,
     258,    1, 3400,    2, 0x0a /* Public */,
     259,    1, 3403,    2, 0x0a /* Public */,
     260,    1, 3406,    2, 0x0a /* Public */,
     261,    1, 3409,    2, 0x0a /* Public */,
     262,    1, 3412,    2, 0x0a /* Public */,
     263,    1, 3415,    2, 0x0a /* Public */,
     263,    1, 3418,    2, 0x0a /* Public */,
     264,    2, 3421,    2, 0x0a /* Public */,
     264,    2, 3426,    2, 0x0a /* Public */,
     265,    1, 3431,    2, 0x0a /* Public */,
     266,    1, 3434,    2, 0x0a /* Public */,
     267,    1, 3437,    2, 0x0a /* Public */,
     268,    1, 3440,    2, 0x0a /* Public */,
     269,    1, 3443,    2, 0x0a /* Public */,
     270,    1, 3446,    2, 0x0a /* Public */,
     271,    1, 3449,    2, 0x0a /* Public */,
     272,    1, 3452,    2, 0x0a /* Public */,
     273,    1, 3455,    2, 0x0a /* Public */,
     274,    1, 3458,    2, 0x0a /* Public */,
     275,    1, 3461,    2, 0x0a /* Public */,
     275,    1, 3464,    2, 0x0a /* Public */,
     276,    2, 3467,    2, 0x0a /* Public */,
     276,    2, 3472,    2, 0x0a /* Public */,
     277,    1, 3477,    2, 0x0a /* Public */,
     278,    1, 3480,    2, 0x0a /* Public */,
     279,    1, 3483,    2, 0x0a /* Public */,
     280,    1, 3486,    2, 0x0a /* Public */,
     281,    1, 3489,    2, 0x0a /* Public */,
     282,    1, 3492,    2, 0x0a /* Public */,
     283,    1, 3495,    2, 0x0a /* Public */,
     284,    1, 3498,    2, 0x0a /* Public */,
     285,    1, 3501,    2, 0x0a /* Public */,
     286,    1, 3504,    2, 0x0a /* Public */,
     287,    1, 3507,    2, 0x0a /* Public */,
     287,    1, 3510,    2, 0x0a /* Public */,
     288,    2, 3513,    2, 0x0a /* Public */,
     288,    2, 3518,    2, 0x0a /* Public */,
     289,    1, 3523,    2, 0x0a /* Public */,
     290,    1, 3526,    2, 0x0a /* Public */,
     291,    1, 3529,    2, 0x0a /* Public */,
     292,    1, 3532,    2, 0x0a /* Public */,
     293,    1, 3535,    2, 0x0a /* Public */,
     294,    1, 3538,    2, 0x0a /* Public */,
     295,    1, 3541,    2, 0x0a /* Public */,
     296,    1, 3544,    2, 0x0a /* Public */,
     297,    1, 3547,    2, 0x0a /* Public */,
     298,    1, 3550,    2, 0x0a /* Public */,
     299,    1, 3553,    2, 0x0a /* Public */,
     299,    1, 3556,    2, 0x0a /* Public */,
     300,    2, 3559,    2, 0x0a /* Public */,
     300,    2, 3564,    2, 0x0a /* Public */,
     301,    1, 3569,    2, 0x0a /* Public */,
     302,    1, 3572,    2, 0x0a /* Public */,
     303,    1, 3575,    2, 0x0a /* Public */,
     304,    1, 3578,    2, 0x0a /* Public */,
     305,    1, 3581,    2, 0x0a /* Public */,
     306,    1, 3584,    2, 0x0a /* Public */,
     307,    1, 3587,    2, 0x0a /* Public */,
     308,    1, 3590,    2, 0x0a /* Public */,
     309,    1, 3593,    2, 0x0a /* Public */,
     310,    1, 3596,    2, 0x0a /* Public */,
     311,    1, 3599,    2, 0x0a /* Public */,
     311,    1, 3602,    2, 0x0a /* Public */,
     312,    2, 3605,    2, 0x0a /* Public */,
     312,    2, 3610,    2, 0x0a /* Public */,
     313,    1, 3615,    2, 0x0a /* Public */,
     314,    1, 3618,    2, 0x0a /* Public */,
     315,    1, 3621,    2, 0x0a /* Public */,
     316,    1, 3624,    2, 0x0a /* Public */,
     317,    1, 3627,    2, 0x0a /* Public */,
     318,    1, 3630,    2, 0x0a /* Public */,
     319,    1, 3633,    2, 0x0a /* Public */,
     320,    1, 3636,    2, 0x0a /* Public */,
     321,    1, 3639,    2, 0x0a /* Public */,
     322,    1, 3642,    2, 0x0a /* Public */,
     323,    1, 3645,    2, 0x0a /* Public */,
     323,    1, 3648,    2, 0x0a /* Public */,
     324,    2, 3651,    2, 0x0a /* Public */,
     324,    2, 3656,    2, 0x0a /* Public */,
     325,    1, 3661,    2, 0x0a /* Public */,
     326,    1, 3664,    2, 0x0a /* Public */,
     327,    1, 3667,    2, 0x0a /* Public */,
     328,    1, 3670,    2, 0x0a /* Public */,
     329,    1, 3673,    2, 0x0a /* Public */,
     330,    1, 3676,    2, 0x0a /* Public */,
     331,    1, 3679,    2, 0x0a /* Public */,
     332,    1, 3682,    2, 0x0a /* Public */,
     333,    1, 3685,    2, 0x0a /* Public */,
     334,    1, 3688,    2, 0x0a /* Public */,
     335,    1, 3691,    2, 0x0a /* Public */,
     335,    1, 3694,    2, 0x0a /* Public */,
     336,    2, 3697,    2, 0x0a /* Public */,
     336,    2, 3702,    2, 0x0a /* Public */,
     337,    1, 3707,    2, 0x0a /* Public */,
     338,    1, 3710,    2, 0x0a /* Public */,
     339,    1, 3713,    2, 0x0a /* Public */,
     340,    1, 3716,    2, 0x0a /* Public */,
     341,    1, 3719,    2, 0x0a /* Public */,
     342,    1, 3722,    2, 0x0a /* Public */,
     343,    1, 3725,    2, 0x0a /* Public */,
     344,    1, 3728,    2, 0x0a /* Public */,
     345,    1, 3731,    2, 0x0a /* Public */,
     346,    1, 3734,    2, 0x0a /* Public */,
     347,    1, 3737,    2, 0x0a /* Public */,
     347,    1, 3740,    2, 0x0a /* Public */,
     348,    2, 3743,    2, 0x0a /* Public */,
     348,    2, 3748,    2, 0x0a /* Public */,
     349,    1, 3753,    2, 0x0a /* Public */,
     350,    1, 3756,    2, 0x0a /* Public */,
     351,    1, 3759,    2, 0x0a /* Public */,
     352,    1, 3762,    2, 0x0a /* Public */,
     353,    1, 3765,    2, 0x0a /* Public */,
     354,    1, 3768,    2, 0x0a /* Public */,
     355,    1, 3771,    2, 0x0a /* Public */,
     356,    1, 3774,    2, 0x0a /* Public */,
     357,    1, 3777,    2, 0x0a /* Public */,
     358,    1, 3780,    2, 0x0a /* Public */,
     359,    1, 3783,    2, 0x0a /* Public */,
     359,    1, 3786,    2, 0x0a /* Public */,
     360,    2, 3789,    2, 0x0a /* Public */,
     360,    2, 3794,    2, 0x0a /* Public */,
     361,    1, 3799,    2, 0x0a /* Public */,
     362,    1, 3802,    2, 0x0a /* Public */,
     363,    1, 3805,    2, 0x0a /* Public */,
     364,    1, 3808,    2, 0x0a /* Public */,
     365,    1, 3811,    2, 0x0a /* Public */,
     366,    1, 3814,    2, 0x0a /* Public */,
     367,    1, 3817,    2, 0x0a /* Public */,
     368,    1, 3820,    2, 0x0a /* Public */,
     369,    1, 3823,    2, 0x0a /* Public */,
     370,    1, 3826,    2, 0x0a /* Public */,
     371,    1, 3829,    2, 0x0a /* Public */,
     371,    1, 3832,    2, 0x0a /* Public */,
     372,    2, 3835,    2, 0x0a /* Public */,
     372,    2, 3840,    2, 0x0a /* Public */,
     373,    1, 3845,    2, 0x0a /* Public */,
     374,    1, 3848,    2, 0x0a /* Public */,
     375,    1, 3851,    2, 0x0a /* Public */,
     376,    1, 3854,    2, 0x0a /* Public */,
     377,    1, 3857,    2, 0x0a /* Public */,
     378,    1, 3860,    2, 0x0a /* Public */,
     379,    1, 3863,    2, 0x0a /* Public */,
     380,    1, 3866,    2, 0x0a /* Public */,
     381,    1, 3869,    2, 0x0a /* Public */,
     382,    1, 3872,    2, 0x0a /* Public */,
     383,    0, 3875,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     384,    1, 3876,    2, 0x02 /* Public */,
     385,    1, 3879,    2, 0x02 /* Public */,
     386,    0, 3882,    2, 0x02 /* Public */,
     387,    0, 3883,    2, 0x02 /* Public */,
     388,    0, 3884,    2, 0x02 /* Public */,
     389,    0, 3885,    2, 0x02 /* Public */,
     390,    0, 3886,    2, 0x02 /* Public */,
     391,    1, 3887,    2, 0x02 /* Public */,
     392,    1, 3890,    2, 0x02 /* Public */,
     393,    0, 3893,    2, 0x02 /* Public */,
     394,    0, 3894,    2, 0x02 /* Public */,
     395,    0, 3895,    2, 0x02 /* Public */,
     396,    0, 3896,    2, 0x02 /* Public */,
     397,    0, 3897,    2, 0x02 /* Public */,
     398,    0, 3898,    2, 0x02 /* Public */,
     399,    0, 3899,    2, 0x02 /* Public */,
     400,    0, 3900,    2, 0x02 /* Public */,
     401,    0, 3901,    2, 0x02 /* Public */,
     402,    0, 3902,    2, 0x02 /* Public */,
     403,    0, 3903,    2, 0x02 /* Public */,
     404,    0, 3904,    2, 0x02 /* Public */,
     405,    1, 3905,    2, 0x02 /* Public */,
     406,    1, 3908,    2, 0x02 /* Public */,
     407,    0, 3911,    2, 0x02 /* Public */,
     408,    0, 3912,    2, 0x02 /* Public */,
     409,    0, 3913,    2, 0x02 /* Public */,
     410,    0, 3914,    2, 0x02 /* Public */,
     411,    0, 3915,    2, 0x02 /* Public */,
     412,    0, 3916,    2, 0x02 /* Public */,
     413,    1, 3917,    2, 0x02 /* Public */,
     414,    1, 3920,    2, 0x02 /* Public */,
     415,    0, 3923,    2, 0x02 /* Public */,
     416,    0, 3924,    2, 0x02 /* Public */,
     417,    0, 3925,    2, 0x02 /* Public */,
     418,    0, 3926,    2, 0x02 /* Public */,
     419,    0, 3927,    2, 0x02 /* Public */,
     420,    0, 3928,    2, 0x02 /* Public */,
     421,    1, 3929,    2, 0x02 /* Public */,
     422,    1, 3932,    2, 0x02 /* Public */,
     423,    0, 3935,    2, 0x02 /* Public */,
     424,    0, 3936,    2, 0x02 /* Public */,
     425,    0, 3937,    2, 0x02 /* Public */,
     426,    0, 3938,    2, 0x02 /* Public */,
     427,    0, 3939,    2, 0x02 /* Public */,
     428,    0, 3940,    2, 0x02 /* Public */,
     429,    1, 3941,    2, 0x02 /* Public */,
     430,    1, 3944,    2, 0x02 /* Public */,
     431,    0, 3947,    2, 0x02 /* Public */,
     432,    0, 3948,    2, 0x02 /* Public */,
     433,    0, 3949,    2, 0x02 /* Public */,
     434,    0, 3950,    2, 0x02 /* Public */,
     435,    0, 3951,    2, 0x02 /* Public */,
     436,    0, 3952,    2, 0x02 /* Public */,
     437,    1, 3953,    2, 0x02 /* Public */,
     438,    1, 3956,    2, 0x02 /* Public */,
     439,    0, 3959,    2, 0x02 /* Public */,
     440,    0, 3960,    2, 0x02 /* Public */,
     441,    0, 3961,    2, 0x02 /* Public */,
     442,    0, 3962,    2, 0x02 /* Public */,
     443,    0, 3963,    2, 0x02 /* Public */,
     444,    0, 3964,    2, 0x02 /* Public */,
     445,    1, 3965,    2, 0x02 /* Public */,
     446,    1, 3968,    2, 0x02 /* Public */,
     447,    0, 3971,    2, 0x02 /* Public */,
     448,    0, 3972,    2, 0x02 /* Public */,
     449,    0, 3973,    2, 0x02 /* Public */,
     450,    0, 3974,    2, 0x02 /* Public */,
     451,    0, 3975,    2, 0x02 /* Public */,
     452,    0, 3976,    2, 0x02 /* Public */,
     453,    1, 3977,    2, 0x02 /* Public */,
     454,    1, 3980,    2, 0x02 /* Public */,
     455,    0, 3983,    2, 0x02 /* Public */,
     456,    0, 3984,    2, 0x02 /* Public */,
     457,    0, 3985,    2, 0x02 /* Public */,
     458,    0, 3986,    2, 0x02 /* Public */,
     459,    0, 3987,    2, 0x02 /* Public */,
     460,    0, 3988,    2, 0x02 /* Public */,
     461,    1, 3989,    2, 0x02 /* Public */,
     462,    1, 3992,    2, 0x02 /* Public */,
     463,    0, 3995,    2, 0x02 /* Public */,
     464,    0, 3996,    2, 0x02 /* Public */,
     465,    0, 3997,    2, 0x02 /* Public */,
     466,    0, 3998,    2, 0x02 /* Public */,
     467,    0, 3999,    2, 0x02 /* Public */,
     468,    0, 4000,    2, 0x02 /* Public */,
     469,    1, 4001,    2, 0x02 /* Public */,
     470,    1, 4004,    2, 0x02 /* Public */,
     471,    0, 4007,    2, 0x02 /* Public */,
     472,    0, 4008,    2, 0x02 /* Public */,
     473,    0, 4009,    2, 0x02 /* Public */,
     474,    0, 4010,    2, 0x02 /* Public */,
     475,    0, 4011,    2, 0x02 /* Public */,
     476,    0, 4012,    2, 0x02 /* Public */,
     477,    1, 4013,    2, 0x02 /* Public */,
     478,    1, 4016,    2, 0x02 /* Public */,
     479,    0, 4019,    2, 0x02 /* Public */,
     480,    0, 4020,    2, 0x02 /* Public */,
     481,    0, 4021,    2, 0x02 /* Public */,
     482,    0, 4022,    2, 0x02 /* Public */,
     483,    0, 4023,    2, 0x02 /* Public */,
     484,    0, 4024,    2, 0x02 /* Public */,
     485,    1, 4025,    2, 0x02 /* Public */,
     486,    1, 4028,    2, 0x02 /* Public */,
     487,    0, 4031,    2, 0x02 /* Public */,
     488,    0, 4032,    2, 0x02 /* Public */,
     489,    0, 4033,    2, 0x02 /* Public */,
     490,    0, 4034,    2, 0x02 /* Public */,
     491,    0, 4035,    2, 0x02 /* Public */,
     492,    0, 4036,    2, 0x02 /* Public */,
     493,    1, 4037,    2, 0x02 /* Public */,
     494,    1, 4040,    2, 0x02 /* Public */,
     495,    0, 4043,    2, 0x02 /* Public */,
     496,    0, 4044,    2, 0x02 /* Public */,
     497,    0, 4045,    2, 0x02 /* Public */,
     498,    0, 4046,    2, 0x02 /* Public */,
     499,    0, 4047,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 39,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 42,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 57,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 72,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 87,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 102,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 132,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 147,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 162,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 177,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 192,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 207,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
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
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 39,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 42,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 57,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 72,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 87,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 102,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 132,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 147,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 162,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 177,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 192,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 207,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void,

 // methods: parameters
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
    QMetaType::Float,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,

 // properties: name, type, flags
     500, QMetaType::Float, 0x00495103,
     501, QMetaType::Float, 0x00495103,
     502, QMetaType::Float, 0x00495103,
     503, QMetaType::Float, 0x00495103,
     504, QMetaType::Float, 0x00495103,
     505, QMetaType::Float, 0x00495103,
     506, QMetaType::Float, 0x00495103,
     507, QMetaType::Float, 0x00495103,
     508, QMetaType::Float, 0x00495103,
     509, QMetaType::Float, 0x00495103,
     510, QMetaType::Short, 0x00495103,
     511, QMetaType::Short, 0x00495103,
     512, QMetaType::Short, 0x00495103,
     513, QMetaType::Short, 0x00495103,
     514, QMetaType::UShort, 0x00495103,
     515, 0x80000000 | 39, 0x0049510b,
     516, 0x80000000 | 42, 0x0049510b,
     517, QMetaType::Short, 0x00495103,
     518, QMetaType::Short, 0x00495103,
     519, QMetaType::Short, 0x00495103,
     520, QMetaType::Short, 0x00495103,
     521, QMetaType::Short, 0x00495103,
     522, 0x80000000 | 57, 0x0049510b,
     523, QMetaType::Short, 0x00495103,
     524, QMetaType::Short, 0x00495103,
     525, QMetaType::Short, 0x00495103,
     526, QMetaType::Short, 0x00495103,
     527, QMetaType::Short, 0x00495103,
     528, 0x80000000 | 72, 0x0049510b,
     529, QMetaType::Short, 0x00495103,
     530, QMetaType::Short, 0x00495103,
     531, QMetaType::Short, 0x00495103,
     532, QMetaType::Short, 0x00495103,
     533, QMetaType::Short, 0x00495103,
     534, 0x80000000 | 87, 0x0049510b,
     535, QMetaType::Short, 0x00495103,
     536, QMetaType::Short, 0x00495103,
     537, QMetaType::Short, 0x00495103,
     538, QMetaType::Short, 0x00495103,
     539, QMetaType::Short, 0x00495103,
     540, 0x80000000 | 102, 0x0049510b,
     541, QMetaType::Short, 0x00495103,
     542, QMetaType::Short, 0x00495103,
     543, QMetaType::Short, 0x00495103,
     544, QMetaType::Short, 0x00495103,
     545, QMetaType::Short, 0x00495103,
     546, 0x80000000 | 117, 0x0049510b,
     547, QMetaType::Short, 0x00495103,
     548, QMetaType::Short, 0x00495103,
     549, QMetaType::Short, 0x00495103,
     550, QMetaType::Short, 0x00495103,
     551, QMetaType::Short, 0x00495103,
     552, 0x80000000 | 132, 0x0049510b,
     553, QMetaType::Short, 0x00495103,
     554, QMetaType::Short, 0x00495103,
     555, QMetaType::Short, 0x00495103,
     556, QMetaType::Short, 0x00495103,
     557, QMetaType::Short, 0x00495103,
     558, 0x80000000 | 147, 0x0049510b,
     559, QMetaType::Short, 0x00495103,
     560, QMetaType::Short, 0x00495103,
     561, QMetaType::Short, 0x00495103,
     562, QMetaType::Short, 0x00495103,
     563, QMetaType::Short, 0x00495103,
     564, 0x80000000 | 162, 0x0049510b,
     565, QMetaType::Short, 0x00495103,
     566, QMetaType::Short, 0x00495103,
     567, QMetaType::Short, 0x00495103,
     568, QMetaType::Short, 0x00495103,
     569, QMetaType::Short, 0x00495103,
     570, 0x80000000 | 177, 0x0049510b,
     571, QMetaType::Short, 0x00495103,
     572, QMetaType::Short, 0x00495103,
     573, QMetaType::Short, 0x00495103,
     574, QMetaType::Short, 0x00495103,
     575, QMetaType::Short, 0x00495103,
     576, 0x80000000 | 192, 0x0049510b,
     577, QMetaType::Short, 0x00495103,
     578, QMetaType::Short, 0x00495103,
     579, QMetaType::Short, 0x00495103,
     580, QMetaType::Short, 0x00495103,
     581, QMetaType::Short, 0x00495103,
     582, 0x80000000 | 207, 0x0049510b,
     583, QMetaType::Short, 0x00495103,
     584, QMetaType::Short, 0x00495103,
     585, QMetaType::Short, 0x00495103,
     586, QMetaType::Short, 0x00495103,
     587, QMetaType::Short, 0x00495103,
     588, QMetaType::Float, 0x00495103,
     589, QMetaType::Float, 0x00495103,
     590, QMetaType::Float, 0x00495103,
     591, QMetaType::Float, 0x00495103,
     592, QMetaType::Float, 0x00495103,
     593, QMetaType::Float, 0x00495103,
     594, QMetaType::Float, 0x00495103,
     595, QMetaType::Float, 0x00495103,
     596, QMetaType::Float, 0x00495103,
     597, QMetaType::Float, 0x00495103,
     598, QMetaType::SChar, 0x00495103,
     599, QMetaType::SChar, 0x00495103,
     600, QMetaType::SChar, 0x00495103,
     601, QMetaType::SChar, 0x00495103,
     602, QMetaType::UChar, 0x00495103,
     603, QMetaType::UChar, 0x00495103,
     604, QMetaType::UChar, 0x00495103,
     605, QMetaType::SChar, 0x00495103,
     606, QMetaType::SChar, 0x00495103,
     607, QMetaType::SChar, 0x00495103,
     608, QMetaType::SChar, 0x00495103,
     609, QMetaType::SChar, 0x00495103,
     610, QMetaType::UChar, 0x00495103,
     611, QMetaType::SChar, 0x00495103,
     612, QMetaType::SChar, 0x00495103,
     613, QMetaType::SChar, 0x00495103,
     614, QMetaType::SChar, 0x00495103,
     615, QMetaType::SChar, 0x00495103,
     616, QMetaType::UChar, 0x00495103,
     617, QMetaType::SChar, 0x00495103,
     618, QMetaType::SChar, 0x00495103,
     619, QMetaType::SChar, 0x00495103,
     620, QMetaType::SChar, 0x00495103,
     621, QMetaType::SChar, 0x00495103,
     622, QMetaType::UChar, 0x00495103,
     623, QMetaType::SChar, 0x00495103,
     624, QMetaType::SChar, 0x00495103,
     625, QMetaType::SChar, 0x00495103,
     626, QMetaType::SChar, 0x00495103,
     627, QMetaType::SChar, 0x00495103,
     628, QMetaType::UChar, 0x00495103,
     629, QMetaType::SChar, 0x00495103,
     630, QMetaType::SChar, 0x00495103,
     631, QMetaType::SChar, 0x00495103,
     632, QMetaType::SChar, 0x00495103,
     633, QMetaType::SChar, 0x00495103,
     634, QMetaType::UChar, 0x00495103,
     635, QMetaType::SChar, 0x00495103,
     636, QMetaType::SChar, 0x00495103,
     637, QMetaType::SChar, 0x00495103,
     638, QMetaType::SChar, 0x00495103,
     639, QMetaType::SChar, 0x00495103,
     640, QMetaType::UChar, 0x00495103,
     641, QMetaType::SChar, 0x00495103,
     642, QMetaType::SChar, 0x00495103,
     643, QMetaType::SChar, 0x00495103,
     644, QMetaType::SChar, 0x00495103,
     645, QMetaType::SChar, 0x00495103,
     646, QMetaType::UChar, 0x00495103,
     647, QMetaType::SChar, 0x00495103,
     648, QMetaType::SChar, 0x00495103,
     649, QMetaType::SChar, 0x00495103,
     650, QMetaType::SChar, 0x00495103,
     651, QMetaType::SChar, 0x00495103,
     652, QMetaType::UChar, 0x00495103,
     653, QMetaType::SChar, 0x00495103,
     654, QMetaType::SChar, 0x00495103,
     655, QMetaType::SChar, 0x00495103,
     656, QMetaType::SChar, 0x00495103,
     657, QMetaType::SChar, 0x00495103,
     658, QMetaType::UChar, 0x00495103,
     659, QMetaType::SChar, 0x00495103,
     660, QMetaType::SChar, 0x00495103,
     661, QMetaType::SChar, 0x00495103,
     662, QMetaType::SChar, 0x00495103,
     663, QMetaType::SChar, 0x00495103,
     664, QMetaType::UChar, 0x00495103,
     665, QMetaType::SChar, 0x00495103,
     666, QMetaType::SChar, 0x00495103,
     667, QMetaType::SChar, 0x00495103,
     668, QMetaType::SChar, 0x00495103,
     669, QMetaType::SChar, 0x00495103,
     670, QMetaType::UChar, 0x00495103,
     671, QMetaType::SChar, 0x00495103,
     672, QMetaType::SChar, 0x00495103,
     673, QMetaType::SChar, 0x00495103,
     674, QMetaType::SChar, 0x00495103,
     675, QMetaType::SChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
       8,
      10,
      14,
      16,
      18,
      20,
      22,
      24,
      26,
      28,
      30,
      32,
      34,
      36,
      40,
      42,
      44,
      46,
      48,
      50,
      54,
      56,
      58,
      60,
      62,
      64,
      68,
      70,
      72,
      74,
      76,
      78,
      82,
      84,
      86,
      88,
      90,
      92,
      96,
      98,
     100,
     102,
     104,
     106,
     110,
     112,
     114,
     116,
     118,
     120,
     124,
     126,
     128,
     130,
     132,
     134,
     138,
     140,
     142,
     144,
     146,
     148,
     152,
     154,
     156,
     158,
     160,
     162,
     166,
     168,
     170,
     172,
     174,
     176,
     180,
     182,
     184,
     186,
     188,
     190,
     194,
     196,
     198,
     200,
     202,
       3,
       5,
       7,
       9,
      11,
      15,
      17,
      19,
      21,
      23,
      25,
      27,
      29,
      31,
      33,
      35,
      37,
      41,
      43,
      45,
      47,
      49,
      51,
      55,
      57,
      59,
      61,
      63,
      65,
      69,
      71,
      73,
      75,
      77,
      79,
      83,
      85,
      87,
      89,
      91,
      93,
      97,
      99,
     101,
     103,
     105,
     107,
     111,
     113,
     115,
     117,
     119,
     121,
     125,
     127,
     129,
     131,
     133,
     135,
     139,
     141,
     143,
     145,
     147,
     149,
     153,
     155,
     157,
     159,
     161,
     163,
     167,
     169,
     171,
     173,
     175,
     177,
     181,
     183,
     185,
     187,
     189,
     191,
     195,
     197,
     199,
     201,
     203,

       0        // eod
};

void MixerSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MixerSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->throttleCurve1Changed((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->ThrottleCurve1Changed((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->throttleCurve1_0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->ThrottleCurve1_0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->throttleCurve1_25Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->ThrottleCurve1_25Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->throttleCurve1_50Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->ThrottleCurve1_50Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->throttleCurve1_75Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->ThrottleCurve1_75Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->throttleCurve1_100Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->ThrottleCurve1_100Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->throttleCurve2Changed((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 13: _t->ThrottleCurve2Changed((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 14: _t->throttleCurve2_0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->ThrottleCurve2_0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->throttleCurve2_25Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->ThrottleCurve2_25Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->throttleCurve2_50Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->ThrottleCurve2_50Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->throttleCurve2_75Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->ThrottleCurve2_75Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->throttleCurve2_100Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->ThrottleCurve2_100Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->mixerValueRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 25: _t->MixerValueRollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 26: _t->mixerValuePitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 27: _t->MixerValuePitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 28: _t->mixerValueYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 29: _t->MixerValueYawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 30: _t->rollDifferentialChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 31: _t->RollDifferentialChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 32: _t->firstRollServoChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 33: _t->FirstRollServoChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->curve2SourceChanged((*reinterpret_cast< const MixerSettings_Curve2Source::Enum(*)>(_a[1]))); break;
        case 35: _t->Curve2SourceChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->mixer1TypeChanged((*reinterpret_cast< const MixerSettings_Mixer1Type::Enum(*)>(_a[1]))); break;
        case 37: _t->Mixer1TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->mixer1VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 39: _t->Mixer1VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 40: _t->mixer1VectorThrottleCurve1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 41: _t->Mixer1Vector_ThrottleCurve1Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 42: _t->mixer1VectorThrottleCurve2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 43: _t->Mixer1Vector_ThrottleCurve2Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 44: _t->mixer1VectorRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 45: _t->Mixer1Vector_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 46: _t->mixer1VectorPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 47: _t->Mixer1Vector_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 48: _t->mixer1VectorYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 49: _t->Mixer1Vector_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 50: _t->mixer2TypeChanged((*reinterpret_cast< const MixerSettings_Mixer2Type::Enum(*)>(_a[1]))); break;
        case 51: _t->Mixer2TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->mixer2VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 53: _t->Mixer2VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 54: _t->mixer2VectorThrottleCurve1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 55: _t->Mixer2Vector_ThrottleCurve1Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 56: _t->mixer2VectorThrottleCurve2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 57: _t->Mixer2Vector_ThrottleCurve2Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 58: _t->mixer2VectorRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 59: _t->Mixer2Vector_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 60: _t->mixer2VectorPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 61: _t->Mixer2Vector_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 62: _t->mixer2VectorYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 63: _t->Mixer2Vector_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 64: _t->mixer3TypeChanged((*reinterpret_cast< const MixerSettings_Mixer3Type::Enum(*)>(_a[1]))); break;
        case 65: _t->Mixer3TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 66: _t->mixer3VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 67: _t->Mixer3VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 68: _t->mixer3VectorThrottleCurve1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 69: _t->Mixer3Vector_ThrottleCurve1Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 70: _t->mixer3VectorThrottleCurve2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 71: _t->Mixer3Vector_ThrottleCurve2Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 72: _t->mixer3VectorRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 73: _t->Mixer3Vector_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 74: _t->mixer3VectorPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 75: _t->Mixer3Vector_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 76: _t->mixer3VectorYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 77: _t->Mixer3Vector_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 78: _t->mixer4TypeChanged((*reinterpret_cast< const MixerSettings_Mixer4Type::Enum(*)>(_a[1]))); break;
        case 79: _t->Mixer4TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 80: _t->mixer4VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 81: _t->Mixer4VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 82: _t->mixer4VectorThrottleCurve1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 83: _t->Mixer4Vector_ThrottleCurve1Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 84: _t->mixer4VectorThrottleCurve2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 85: _t->Mixer4Vector_ThrottleCurve2Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 86: _t->mixer4VectorRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 87: _t->Mixer4Vector_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 88: _t->mixer4VectorPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 89: _t->Mixer4Vector_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 90: _t->mixer4VectorYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 91: _t->Mixer4Vector_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 92: _t->mixer5TypeChanged((*reinterpret_cast< const MixerSettings_Mixer5Type::Enum(*)>(_a[1]))); break;
        case 93: _t->Mixer5TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 94: _t->mixer5VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 95: _t->Mixer5VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 96: _t->mixer5VectorThrottleCurve1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 97: _t->Mixer5Vector_ThrottleCurve1Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 98: _t->mixer5VectorThrottleCurve2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 99: _t->Mixer5Vector_ThrottleCurve2Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 100: _t->mixer5VectorRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 101: _t->Mixer5Vector_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 102: _t->mixer5VectorPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 103: _t->Mixer5Vector_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 104: _t->mixer5VectorYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 105: _t->Mixer5Vector_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 106: _t->mixer6TypeChanged((*reinterpret_cast< const MixerSettings_Mixer6Type::Enum(*)>(_a[1]))); break;
        case 107: _t->Mixer6TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 108: _t->mixer6VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 109: _t->Mixer6VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 110: _t->mixer6VectorThrottleCurve1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 111: _t->Mixer6Vector_ThrottleCurve1Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 112: _t->mixer6VectorThrottleCurve2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 113: _t->Mixer6Vector_ThrottleCurve2Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 114: _t->mixer6VectorRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 115: _t->Mixer6Vector_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 116: _t->mixer6VectorPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 117: _t->Mixer6Vector_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 118: _t->mixer6VectorYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 119: _t->Mixer6Vector_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 120: _t->mixer7TypeChanged((*reinterpret_cast< const MixerSettings_Mixer7Type::Enum(*)>(_a[1]))); break;
        case 121: _t->Mixer7TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 122: _t->mixer7VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 123: _t->Mixer7VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 124: _t->mixer7VectorThrottleCurve1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 125: _t->Mixer7Vector_ThrottleCurve1Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 126: _t->mixer7VectorThrottleCurve2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 127: _t->Mixer7Vector_ThrottleCurve2Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 128: _t->mixer7VectorRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 129: _t->Mixer7Vector_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 130: _t->mixer7VectorPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 131: _t->Mixer7Vector_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 132: _t->mixer7VectorYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 133: _t->Mixer7Vector_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 134: _t->mixer8TypeChanged((*reinterpret_cast< const MixerSettings_Mixer8Type::Enum(*)>(_a[1]))); break;
        case 135: _t->Mixer8TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 136: _t->mixer8VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 137: _t->Mixer8VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 138: _t->mixer8VectorThrottleCurve1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 139: _t->Mixer8Vector_ThrottleCurve1Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 140: _t->mixer8VectorThrottleCurve2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 141: _t->Mixer8Vector_ThrottleCurve2Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 142: _t->mixer8VectorRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 143: _t->Mixer8Vector_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 144: _t->mixer8VectorPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 145: _t->Mixer8Vector_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 146: _t->mixer8VectorYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 147: _t->Mixer8Vector_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 148: _t->mixer9TypeChanged((*reinterpret_cast< const MixerSettings_Mixer9Type::Enum(*)>(_a[1]))); break;
        case 149: _t->Mixer9TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 150: _t->mixer9VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 151: _t->Mixer9VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 152: _t->mixer9VectorThrottleCurve1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 153: _t->Mixer9Vector_ThrottleCurve1Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 154: _t->mixer9VectorThrottleCurve2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 155: _t->Mixer9Vector_ThrottleCurve2Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 156: _t->mixer9VectorRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 157: _t->Mixer9Vector_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 158: _t->mixer9VectorPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 159: _t->Mixer9Vector_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 160: _t->mixer9VectorYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 161: _t->Mixer9Vector_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 162: _t->mixer10TypeChanged((*reinterpret_cast< const MixerSettings_Mixer10Type::Enum(*)>(_a[1]))); break;
        case 163: _t->Mixer10TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 164: _t->mixer10VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 165: _t->Mixer10VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 166: _t->mixer10VectorThrottleCurve1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 167: _t->Mixer10Vector_ThrottleCurve1Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 168: _t->mixer10VectorThrottleCurve2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 169: _t->Mixer10Vector_ThrottleCurve2Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 170: _t->mixer10VectorRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 171: _t->Mixer10Vector_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 172: _t->mixer10VectorPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 173: _t->Mixer10Vector_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 174: _t->mixer10VectorYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 175: _t->Mixer10Vector_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 176: _t->mixer11TypeChanged((*reinterpret_cast< const MixerSettings_Mixer11Type::Enum(*)>(_a[1]))); break;
        case 177: _t->Mixer11TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 178: _t->mixer11VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 179: _t->Mixer11VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 180: _t->mixer11VectorThrottleCurve1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 181: _t->Mixer11Vector_ThrottleCurve1Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 182: _t->mixer11VectorThrottleCurve2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 183: _t->Mixer11Vector_ThrottleCurve2Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 184: _t->mixer11VectorRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 185: _t->Mixer11Vector_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 186: _t->mixer11VectorPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 187: _t->Mixer11Vector_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 188: _t->mixer11VectorYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 189: _t->Mixer11Vector_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 190: _t->mixer12TypeChanged((*reinterpret_cast< const MixerSettings_Mixer12Type::Enum(*)>(_a[1]))); break;
        case 191: _t->Mixer12TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 192: _t->mixer12VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 193: _t->Mixer12VectorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 194: _t->mixer12VectorThrottleCurve1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 195: _t->Mixer12Vector_ThrottleCurve1Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 196: _t->mixer12VectorThrottleCurve2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 197: _t->Mixer12Vector_ThrottleCurve2Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 198: _t->mixer12VectorRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 199: _t->Mixer12Vector_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 200: _t->mixer12VectorPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 201: _t->Mixer12Vector_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 202: _t->mixer12VectorYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 203: _t->Mixer12Vector_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 204: _t->setThrottleCurve1((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 205: _t->setThrottleCurve1_0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 206: _t->setThrottleCurve1_25((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 207: _t->setThrottleCurve1_50((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 208: _t->setThrottleCurve1_75((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 209: _t->setThrottleCurve1_100((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 210: _t->setThrottleCurve2((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 211: _t->setThrottleCurve2_0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 212: _t->setThrottleCurve2_25((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 213: _t->setThrottleCurve2_50((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 214: _t->setThrottleCurve2_75((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 215: _t->setThrottleCurve2_100((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 216: _t->setMixerValueRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 217: _t->setMixerValueRoll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 218: _t->setMixerValuePitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 219: _t->setMixerValuePitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 220: _t->setMixerValueYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 221: _t->setMixerValueYaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 222: _t->setRollDifferential((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 223: _t->setRollDifferential((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 224: _t->setFirstRollServo((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 225: _t->setFirstRollServo((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 226: _t->setCurve2Source((*reinterpret_cast< const MixerSettings_Curve2Source::Enum(*)>(_a[1]))); break;
        case 227: _t->setCurve2Source((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 228: _t->setMixer1Type((*reinterpret_cast< const MixerSettings_Mixer1Type::Enum(*)>(_a[1]))); break;
        case 229: _t->setMixer1Type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 230: _t->setMixer1Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 231: _t->setMixer1Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 232: _t->setMixer1VectorThrottleCurve1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 233: _t->setMixer1Vector_ThrottleCurve1((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 234: _t->setMixer1VectorThrottleCurve2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 235: _t->setMixer1Vector_ThrottleCurve2((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 236: _t->setMixer1VectorRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 237: _t->setMixer1Vector_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 238: _t->setMixer1VectorPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 239: _t->setMixer1Vector_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 240: _t->setMixer1VectorYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 241: _t->setMixer1Vector_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 242: _t->setMixer2Type((*reinterpret_cast< const MixerSettings_Mixer2Type::Enum(*)>(_a[1]))); break;
        case 243: _t->setMixer2Type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 244: _t->setMixer2Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 245: _t->setMixer2Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 246: _t->setMixer2VectorThrottleCurve1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 247: _t->setMixer2Vector_ThrottleCurve1((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 248: _t->setMixer2VectorThrottleCurve2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 249: _t->setMixer2Vector_ThrottleCurve2((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 250: _t->setMixer2VectorRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 251: _t->setMixer2Vector_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 252: _t->setMixer2VectorPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 253: _t->setMixer2Vector_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 254: _t->setMixer2VectorYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 255: _t->setMixer2Vector_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 256: _t->setMixer3Type((*reinterpret_cast< const MixerSettings_Mixer3Type::Enum(*)>(_a[1]))); break;
        case 257: _t->setMixer3Type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 258: _t->setMixer3Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 259: _t->setMixer3Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 260: _t->setMixer3VectorThrottleCurve1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 261: _t->setMixer3Vector_ThrottleCurve1((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 262: _t->setMixer3VectorThrottleCurve2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 263: _t->setMixer3Vector_ThrottleCurve2((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 264: _t->setMixer3VectorRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 265: _t->setMixer3Vector_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 266: _t->setMixer3VectorPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 267: _t->setMixer3Vector_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 268: _t->setMixer3VectorYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 269: _t->setMixer3Vector_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 270: _t->setMixer4Type((*reinterpret_cast< const MixerSettings_Mixer4Type::Enum(*)>(_a[1]))); break;
        case 271: _t->setMixer4Type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 272: _t->setMixer4Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 273: _t->setMixer4Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 274: _t->setMixer4VectorThrottleCurve1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 275: _t->setMixer4Vector_ThrottleCurve1((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 276: _t->setMixer4VectorThrottleCurve2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 277: _t->setMixer4Vector_ThrottleCurve2((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 278: _t->setMixer4VectorRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 279: _t->setMixer4Vector_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 280: _t->setMixer4VectorPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 281: _t->setMixer4Vector_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 282: _t->setMixer4VectorYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 283: _t->setMixer4Vector_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 284: _t->setMixer5Type((*reinterpret_cast< const MixerSettings_Mixer5Type::Enum(*)>(_a[1]))); break;
        case 285: _t->setMixer5Type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 286: _t->setMixer5Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 287: _t->setMixer5Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 288: _t->setMixer5VectorThrottleCurve1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 289: _t->setMixer5Vector_ThrottleCurve1((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 290: _t->setMixer5VectorThrottleCurve2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 291: _t->setMixer5Vector_ThrottleCurve2((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 292: _t->setMixer5VectorRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 293: _t->setMixer5Vector_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 294: _t->setMixer5VectorPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 295: _t->setMixer5Vector_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 296: _t->setMixer5VectorYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 297: _t->setMixer5Vector_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 298: _t->setMixer6Type((*reinterpret_cast< const MixerSettings_Mixer6Type::Enum(*)>(_a[1]))); break;
        case 299: _t->setMixer6Type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 300: _t->setMixer6Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 301: _t->setMixer6Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 302: _t->setMixer6VectorThrottleCurve1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 303: _t->setMixer6Vector_ThrottleCurve1((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 304: _t->setMixer6VectorThrottleCurve2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 305: _t->setMixer6Vector_ThrottleCurve2((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 306: _t->setMixer6VectorRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 307: _t->setMixer6Vector_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 308: _t->setMixer6VectorPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 309: _t->setMixer6Vector_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 310: _t->setMixer6VectorYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 311: _t->setMixer6Vector_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 312: _t->setMixer7Type((*reinterpret_cast< const MixerSettings_Mixer7Type::Enum(*)>(_a[1]))); break;
        case 313: _t->setMixer7Type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 314: _t->setMixer7Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 315: _t->setMixer7Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 316: _t->setMixer7VectorThrottleCurve1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 317: _t->setMixer7Vector_ThrottleCurve1((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 318: _t->setMixer7VectorThrottleCurve2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 319: _t->setMixer7Vector_ThrottleCurve2((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 320: _t->setMixer7VectorRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 321: _t->setMixer7Vector_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 322: _t->setMixer7VectorPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 323: _t->setMixer7Vector_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 324: _t->setMixer7VectorYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 325: _t->setMixer7Vector_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 326: _t->setMixer8Type((*reinterpret_cast< const MixerSettings_Mixer8Type::Enum(*)>(_a[1]))); break;
        case 327: _t->setMixer8Type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 328: _t->setMixer8Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 329: _t->setMixer8Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 330: _t->setMixer8VectorThrottleCurve1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 331: _t->setMixer8Vector_ThrottleCurve1((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 332: _t->setMixer8VectorThrottleCurve2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 333: _t->setMixer8Vector_ThrottleCurve2((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 334: _t->setMixer8VectorRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 335: _t->setMixer8Vector_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 336: _t->setMixer8VectorPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 337: _t->setMixer8Vector_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 338: _t->setMixer8VectorYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 339: _t->setMixer8Vector_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 340: _t->setMixer9Type((*reinterpret_cast< const MixerSettings_Mixer9Type::Enum(*)>(_a[1]))); break;
        case 341: _t->setMixer9Type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 342: _t->setMixer9Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 343: _t->setMixer9Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 344: _t->setMixer9VectorThrottleCurve1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 345: _t->setMixer9Vector_ThrottleCurve1((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 346: _t->setMixer9VectorThrottleCurve2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 347: _t->setMixer9Vector_ThrottleCurve2((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 348: _t->setMixer9VectorRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 349: _t->setMixer9Vector_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 350: _t->setMixer9VectorPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 351: _t->setMixer9Vector_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 352: _t->setMixer9VectorYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 353: _t->setMixer9Vector_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 354: _t->setMixer10Type((*reinterpret_cast< const MixerSettings_Mixer10Type::Enum(*)>(_a[1]))); break;
        case 355: _t->setMixer10Type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 356: _t->setMixer10Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 357: _t->setMixer10Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 358: _t->setMixer10VectorThrottleCurve1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 359: _t->setMixer10Vector_ThrottleCurve1((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 360: _t->setMixer10VectorThrottleCurve2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 361: _t->setMixer10Vector_ThrottleCurve2((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 362: _t->setMixer10VectorRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 363: _t->setMixer10Vector_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 364: _t->setMixer10VectorPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 365: _t->setMixer10Vector_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 366: _t->setMixer10VectorYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 367: _t->setMixer10Vector_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 368: _t->setMixer11Type((*reinterpret_cast< const MixerSettings_Mixer11Type::Enum(*)>(_a[1]))); break;
        case 369: _t->setMixer11Type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 370: _t->setMixer11Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 371: _t->setMixer11Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 372: _t->setMixer11VectorThrottleCurve1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 373: _t->setMixer11Vector_ThrottleCurve1((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 374: _t->setMixer11VectorThrottleCurve2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 375: _t->setMixer11Vector_ThrottleCurve2((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 376: _t->setMixer11VectorRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 377: _t->setMixer11Vector_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 378: _t->setMixer11VectorPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 379: _t->setMixer11Vector_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 380: _t->setMixer11VectorYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 381: _t->setMixer11Vector_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 382: _t->setMixer12Type((*reinterpret_cast< const MixerSettings_Mixer12Type::Enum(*)>(_a[1]))); break;
        case 383: _t->setMixer12Type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 384: _t->setMixer12Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 385: _t->setMixer12Vector((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 386: _t->setMixer12VectorThrottleCurve1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 387: _t->setMixer12Vector_ThrottleCurve1((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 388: _t->setMixer12VectorThrottleCurve2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 389: _t->setMixer12Vector_ThrottleCurve2((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 390: _t->setMixer12VectorRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 391: _t->setMixer12Vector_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 392: _t->setMixer12VectorPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 393: _t->setMixer12Vector_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 394: _t->setMixer12VectorYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 395: _t->setMixer12Vector_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 396: _t->emitNotifications(); break;
        case 397: { float _r = _t->throttleCurve1((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 398: { float _r = _t->getThrottleCurve1((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 399: { float _r = _t->getThrottleCurve1_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 400: { float _r = _t->getThrottleCurve1_25();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 401: { float _r = _t->getThrottleCurve1_50();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 402: { float _r = _t->getThrottleCurve1_75();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 403: { float _r = _t->getThrottleCurve1_100();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 404: { float _r = _t->throttleCurve2((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 405: { float _r = _t->getThrottleCurve2((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 406: { float _r = _t->getThrottleCurve2_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 407: { float _r = _t->getThrottleCurve2_25();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 408: { float _r = _t->getThrottleCurve2_50();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 409: { float _r = _t->getThrottleCurve2_75();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 410: { float _r = _t->getThrottleCurve2_100();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 411: { qint8 _r = _t->getMixerValueRoll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 412: { qint8 _r = _t->getMixerValuePitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 413: { qint8 _r = _t->getMixerValueYaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 414: { qint8 _r = _t->getRollDifferential();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 415: { quint8 _r = _t->getFirstRollServo();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 416: { quint8 _r = _t->getCurve2Source();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 417: { quint8 _r = _t->getMixer1Type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 418: { qint16 _r = _t->mixer1Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 419: { qint8 _r = _t->getMixer1Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 420: { qint8 _r = _t->getMixer1Vector_ThrottleCurve1();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 421: { qint8 _r = _t->getMixer1Vector_ThrottleCurve2();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 422: { qint8 _r = _t->getMixer1Vector_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 423: { qint8 _r = _t->getMixer1Vector_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 424: { qint8 _r = _t->getMixer1Vector_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 425: { quint8 _r = _t->getMixer2Type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 426: { qint16 _r = _t->mixer2Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 427: { qint8 _r = _t->getMixer2Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 428: { qint8 _r = _t->getMixer2Vector_ThrottleCurve1();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 429: { qint8 _r = _t->getMixer2Vector_ThrottleCurve2();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 430: { qint8 _r = _t->getMixer2Vector_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 431: { qint8 _r = _t->getMixer2Vector_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 432: { qint8 _r = _t->getMixer2Vector_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 433: { quint8 _r = _t->getMixer3Type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 434: { qint16 _r = _t->mixer3Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 435: { qint8 _r = _t->getMixer3Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 436: { qint8 _r = _t->getMixer3Vector_ThrottleCurve1();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 437: { qint8 _r = _t->getMixer3Vector_ThrottleCurve2();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 438: { qint8 _r = _t->getMixer3Vector_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 439: { qint8 _r = _t->getMixer3Vector_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 440: { qint8 _r = _t->getMixer3Vector_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 441: { quint8 _r = _t->getMixer4Type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 442: { qint16 _r = _t->mixer4Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 443: { qint8 _r = _t->getMixer4Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 444: { qint8 _r = _t->getMixer4Vector_ThrottleCurve1();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 445: { qint8 _r = _t->getMixer4Vector_ThrottleCurve2();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 446: { qint8 _r = _t->getMixer4Vector_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 447: { qint8 _r = _t->getMixer4Vector_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 448: { qint8 _r = _t->getMixer4Vector_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 449: { quint8 _r = _t->getMixer5Type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 450: { qint16 _r = _t->mixer5Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 451: { qint8 _r = _t->getMixer5Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 452: { qint8 _r = _t->getMixer5Vector_ThrottleCurve1();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 453: { qint8 _r = _t->getMixer5Vector_ThrottleCurve2();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 454: { qint8 _r = _t->getMixer5Vector_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 455: { qint8 _r = _t->getMixer5Vector_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 456: { qint8 _r = _t->getMixer5Vector_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 457: { quint8 _r = _t->getMixer6Type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 458: { qint16 _r = _t->mixer6Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 459: { qint8 _r = _t->getMixer6Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 460: { qint8 _r = _t->getMixer6Vector_ThrottleCurve1();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 461: { qint8 _r = _t->getMixer6Vector_ThrottleCurve2();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 462: { qint8 _r = _t->getMixer6Vector_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 463: { qint8 _r = _t->getMixer6Vector_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 464: { qint8 _r = _t->getMixer6Vector_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 465: { quint8 _r = _t->getMixer7Type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 466: { qint16 _r = _t->mixer7Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 467: { qint8 _r = _t->getMixer7Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 468: { qint8 _r = _t->getMixer7Vector_ThrottleCurve1();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 469: { qint8 _r = _t->getMixer7Vector_ThrottleCurve2();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 470: { qint8 _r = _t->getMixer7Vector_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 471: { qint8 _r = _t->getMixer7Vector_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 472: { qint8 _r = _t->getMixer7Vector_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 473: { quint8 _r = _t->getMixer8Type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 474: { qint16 _r = _t->mixer8Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 475: { qint8 _r = _t->getMixer8Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 476: { qint8 _r = _t->getMixer8Vector_ThrottleCurve1();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 477: { qint8 _r = _t->getMixer8Vector_ThrottleCurve2();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 478: { qint8 _r = _t->getMixer8Vector_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 479: { qint8 _r = _t->getMixer8Vector_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 480: { qint8 _r = _t->getMixer8Vector_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 481: { quint8 _r = _t->getMixer9Type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 482: { qint16 _r = _t->mixer9Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 483: { qint8 _r = _t->getMixer9Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 484: { qint8 _r = _t->getMixer9Vector_ThrottleCurve1();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 485: { qint8 _r = _t->getMixer9Vector_ThrottleCurve2();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 486: { qint8 _r = _t->getMixer9Vector_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 487: { qint8 _r = _t->getMixer9Vector_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 488: { qint8 _r = _t->getMixer9Vector_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 489: { quint8 _r = _t->getMixer10Type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 490: { qint16 _r = _t->mixer10Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 491: { qint8 _r = _t->getMixer10Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 492: { qint8 _r = _t->getMixer10Vector_ThrottleCurve1();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 493: { qint8 _r = _t->getMixer10Vector_ThrottleCurve2();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 494: { qint8 _r = _t->getMixer10Vector_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 495: { qint8 _r = _t->getMixer10Vector_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 496: { qint8 _r = _t->getMixer10Vector_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 497: { quint8 _r = _t->getMixer11Type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 498: { qint16 _r = _t->mixer11Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 499: { qint8 _r = _t->getMixer11Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 500: { qint8 _r = _t->getMixer11Vector_ThrottleCurve1();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 501: { qint8 _r = _t->getMixer11Vector_ThrottleCurve2();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 502: { qint8 _r = _t->getMixer11Vector_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 503: { qint8 _r = _t->getMixer11Vector_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 504: { qint8 _r = _t->getMixer11Vector_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 505: { quint8 _r = _t->getMixer12Type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 506: { qint16 _r = _t->mixer12Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 507: { qint8 _r = _t->getMixer12Vector((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 508: { qint8 _r = _t->getMixer12Vector_ThrottleCurve1();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 509: { qint8 _r = _t->getMixer12Vector_ThrottleCurve2();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 510: { qint8 _r = _t->getMixer12Vector_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 511: { qint8 _r = _t->getMixer12Vector_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 512: { qint8 _r = _t->getMixer12Vector_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MixerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::throttleCurve1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::ThrottleCurve1Changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::throttleCurve1_0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::ThrottleCurve1_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::throttleCurve1_25Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::ThrottleCurve1_25Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::throttleCurve1_50Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::ThrottleCurve1_50Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::throttleCurve1_75Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::ThrottleCurve1_75Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::throttleCurve1_100Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::ThrottleCurve1_100Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::throttleCurve2Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::ThrottleCurve2Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::throttleCurve2_0Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::ThrottleCurve2_0Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::throttleCurve2_25Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::ThrottleCurve2_25Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::throttleCurve2_50Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::ThrottleCurve2_50Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::throttleCurve2_75Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::ThrottleCurve2_75Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::throttleCurve2_100Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::ThrottleCurve2_100Changed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixerValueRollChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::MixerValueRollChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixerValuePitchChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::MixerValuePitchChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixerValueYawChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::MixerValueYawChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::rollDifferentialChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::RollDifferentialChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::firstRollServoChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::FirstRollServoChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Curve2Source::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::curve2SourceChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Curve2SourceChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Mixer1Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer1TypeChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer1TypeChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer1VectorChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer1VectorChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer1VectorThrottleCurve1Changed)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer1Vector_ThrottleCurve1Changed)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer1VectorThrottleCurve2Changed)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer1Vector_ThrottleCurve2Changed)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer1VectorRollChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer1Vector_RollChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer1VectorPitchChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer1Vector_PitchChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer1VectorYawChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer1Vector_YawChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Mixer2Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer2TypeChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer2TypeChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer2VectorChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer2VectorChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer2VectorThrottleCurve1Changed)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer2Vector_ThrottleCurve1Changed)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer2VectorThrottleCurve2Changed)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer2Vector_ThrottleCurve2Changed)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer2VectorRollChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer2Vector_RollChanged)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer2VectorPitchChanged)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer2Vector_PitchChanged)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer2VectorYawChanged)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer2Vector_YawChanged)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Mixer3Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer3TypeChanged)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer3TypeChanged)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer3VectorChanged)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer3VectorChanged)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer3VectorThrottleCurve1Changed)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer3Vector_ThrottleCurve1Changed)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer3VectorThrottleCurve2Changed)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer3Vector_ThrottleCurve2Changed)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer3VectorRollChanged)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer3Vector_RollChanged)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer3VectorPitchChanged)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer3Vector_PitchChanged)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer3VectorYawChanged)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer3Vector_YawChanged)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Mixer4Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer4TypeChanged)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer4TypeChanged)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer4VectorChanged)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer4VectorChanged)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer4VectorThrottleCurve1Changed)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer4Vector_ThrottleCurve1Changed)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer4VectorThrottleCurve2Changed)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer4Vector_ThrottleCurve2Changed)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer4VectorRollChanged)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer4Vector_RollChanged)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer4VectorPitchChanged)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer4Vector_PitchChanged)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer4VectorYawChanged)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer4Vector_YawChanged)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Mixer5Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer5TypeChanged)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer5TypeChanged)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer5VectorChanged)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer5VectorChanged)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer5VectorThrottleCurve1Changed)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer5Vector_ThrottleCurve1Changed)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer5VectorThrottleCurve2Changed)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer5Vector_ThrottleCurve2Changed)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer5VectorRollChanged)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer5Vector_RollChanged)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer5VectorPitchChanged)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer5Vector_PitchChanged)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer5VectorYawChanged)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer5Vector_YawChanged)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Mixer6Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer6TypeChanged)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer6TypeChanged)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer6VectorChanged)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer6VectorChanged)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer6VectorThrottleCurve1Changed)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer6Vector_ThrottleCurve1Changed)) {
                *result = 111;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer6VectorThrottleCurve2Changed)) {
                *result = 112;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer6Vector_ThrottleCurve2Changed)) {
                *result = 113;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer6VectorRollChanged)) {
                *result = 114;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer6Vector_RollChanged)) {
                *result = 115;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer6VectorPitchChanged)) {
                *result = 116;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer6Vector_PitchChanged)) {
                *result = 117;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer6VectorYawChanged)) {
                *result = 118;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer6Vector_YawChanged)) {
                *result = 119;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Mixer7Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer7TypeChanged)) {
                *result = 120;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer7TypeChanged)) {
                *result = 121;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer7VectorChanged)) {
                *result = 122;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer7VectorChanged)) {
                *result = 123;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer7VectorThrottleCurve1Changed)) {
                *result = 124;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer7Vector_ThrottleCurve1Changed)) {
                *result = 125;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer7VectorThrottleCurve2Changed)) {
                *result = 126;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer7Vector_ThrottleCurve2Changed)) {
                *result = 127;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer7VectorRollChanged)) {
                *result = 128;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer7Vector_RollChanged)) {
                *result = 129;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer7VectorPitchChanged)) {
                *result = 130;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer7Vector_PitchChanged)) {
                *result = 131;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer7VectorYawChanged)) {
                *result = 132;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer7Vector_YawChanged)) {
                *result = 133;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Mixer8Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer8TypeChanged)) {
                *result = 134;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer8TypeChanged)) {
                *result = 135;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer8VectorChanged)) {
                *result = 136;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer8VectorChanged)) {
                *result = 137;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer8VectorThrottleCurve1Changed)) {
                *result = 138;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer8Vector_ThrottleCurve1Changed)) {
                *result = 139;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer8VectorThrottleCurve2Changed)) {
                *result = 140;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer8Vector_ThrottleCurve2Changed)) {
                *result = 141;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer8VectorRollChanged)) {
                *result = 142;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer8Vector_RollChanged)) {
                *result = 143;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer8VectorPitchChanged)) {
                *result = 144;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer8Vector_PitchChanged)) {
                *result = 145;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer8VectorYawChanged)) {
                *result = 146;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer8Vector_YawChanged)) {
                *result = 147;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Mixer9Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer9TypeChanged)) {
                *result = 148;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer9TypeChanged)) {
                *result = 149;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer9VectorChanged)) {
                *result = 150;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer9VectorChanged)) {
                *result = 151;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer9VectorThrottleCurve1Changed)) {
                *result = 152;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer9Vector_ThrottleCurve1Changed)) {
                *result = 153;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer9VectorThrottleCurve2Changed)) {
                *result = 154;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer9Vector_ThrottleCurve2Changed)) {
                *result = 155;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer9VectorRollChanged)) {
                *result = 156;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer9Vector_RollChanged)) {
                *result = 157;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer9VectorPitchChanged)) {
                *result = 158;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer9Vector_PitchChanged)) {
                *result = 159;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer9VectorYawChanged)) {
                *result = 160;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer9Vector_YawChanged)) {
                *result = 161;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Mixer10Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer10TypeChanged)) {
                *result = 162;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer10TypeChanged)) {
                *result = 163;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer10VectorChanged)) {
                *result = 164;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer10VectorChanged)) {
                *result = 165;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer10VectorThrottleCurve1Changed)) {
                *result = 166;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer10Vector_ThrottleCurve1Changed)) {
                *result = 167;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer10VectorThrottleCurve2Changed)) {
                *result = 168;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer10Vector_ThrottleCurve2Changed)) {
                *result = 169;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer10VectorRollChanged)) {
                *result = 170;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer10Vector_RollChanged)) {
                *result = 171;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer10VectorPitchChanged)) {
                *result = 172;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer10Vector_PitchChanged)) {
                *result = 173;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer10VectorYawChanged)) {
                *result = 174;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer10Vector_YawChanged)) {
                *result = 175;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Mixer11Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer11TypeChanged)) {
                *result = 176;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer11TypeChanged)) {
                *result = 177;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer11VectorChanged)) {
                *result = 178;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer11VectorChanged)) {
                *result = 179;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer11VectorThrottleCurve1Changed)) {
                *result = 180;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer11Vector_ThrottleCurve1Changed)) {
                *result = 181;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer11VectorThrottleCurve2Changed)) {
                *result = 182;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer11Vector_ThrottleCurve2Changed)) {
                *result = 183;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer11VectorRollChanged)) {
                *result = 184;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer11Vector_RollChanged)) {
                *result = 185;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer11VectorPitchChanged)) {
                *result = 186;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer11Vector_PitchChanged)) {
                *result = 187;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer11VectorYawChanged)) {
                *result = 188;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer11Vector_YawChanged)) {
                *result = 189;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const MixerSettings_Mixer12Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer12TypeChanged)) {
                *result = 190;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer12TypeChanged)) {
                *result = 191;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer12VectorChanged)) {
                *result = 192;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer12VectorChanged)) {
                *result = 193;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer12VectorThrottleCurve1Changed)) {
                *result = 194;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer12Vector_ThrottleCurve1Changed)) {
                *result = 195;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer12VectorThrottleCurve2Changed)) {
                *result = 196;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer12Vector_ThrottleCurve2Changed)) {
                *result = 197;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer12VectorRollChanged)) {
                *result = 198;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer12Vector_RollChanged)) {
                *result = 199;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer12VectorPitchChanged)) {
                *result = 200;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer12Vector_PitchChanged)) {
                *result = 201;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::mixer12VectorYawChanged)) {
                *result = 202;
                return;
            }
        }
        {
            using _t = void (MixerSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerSettings::Mixer12Vector_YawChanged)) {
                *result = 203;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MixerSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->throttleCurve1_0(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->throttleCurve1_25(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->throttleCurve1_50(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->throttleCurve1_75(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->throttleCurve1_100(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->throttleCurve2_0(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->throttleCurve2_25(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->throttleCurve2_50(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->throttleCurve2_75(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->throttleCurve2_100(); break;
        case 10: *reinterpret_cast< qint16*>(_v) = _t->mixerValueRoll(); break;
        case 11: *reinterpret_cast< qint16*>(_v) = _t->mixerValuePitch(); break;
        case 12: *reinterpret_cast< qint16*>(_v) = _t->mixerValueYaw(); break;
        case 13: *reinterpret_cast< qint16*>(_v) = _t->rollDifferential(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->firstRollServo(); break;
        case 15: *reinterpret_cast< MixerSettings_Curve2Source::Enum*>(_v) = _t->curve2Source(); break;
        case 16: *reinterpret_cast< MixerSettings_Mixer1Type::Enum*>(_v) = _t->mixer1Type(); break;
        case 17: *reinterpret_cast< qint16*>(_v) = _t->mixer1VectorThrottleCurve1(); break;
        case 18: *reinterpret_cast< qint16*>(_v) = _t->mixer1VectorThrottleCurve2(); break;
        case 19: *reinterpret_cast< qint16*>(_v) = _t->mixer1VectorRoll(); break;
        case 20: *reinterpret_cast< qint16*>(_v) = _t->mixer1VectorPitch(); break;
        case 21: *reinterpret_cast< qint16*>(_v) = _t->mixer1VectorYaw(); break;
        case 22: *reinterpret_cast< MixerSettings_Mixer2Type::Enum*>(_v) = _t->mixer2Type(); break;
        case 23: *reinterpret_cast< qint16*>(_v) = _t->mixer2VectorThrottleCurve1(); break;
        case 24: *reinterpret_cast< qint16*>(_v) = _t->mixer2VectorThrottleCurve2(); break;
        case 25: *reinterpret_cast< qint16*>(_v) = _t->mixer2VectorRoll(); break;
        case 26: *reinterpret_cast< qint16*>(_v) = _t->mixer2VectorPitch(); break;
        case 27: *reinterpret_cast< qint16*>(_v) = _t->mixer2VectorYaw(); break;
        case 28: *reinterpret_cast< MixerSettings_Mixer3Type::Enum*>(_v) = _t->mixer3Type(); break;
        case 29: *reinterpret_cast< qint16*>(_v) = _t->mixer3VectorThrottleCurve1(); break;
        case 30: *reinterpret_cast< qint16*>(_v) = _t->mixer3VectorThrottleCurve2(); break;
        case 31: *reinterpret_cast< qint16*>(_v) = _t->mixer3VectorRoll(); break;
        case 32: *reinterpret_cast< qint16*>(_v) = _t->mixer3VectorPitch(); break;
        case 33: *reinterpret_cast< qint16*>(_v) = _t->mixer3VectorYaw(); break;
        case 34: *reinterpret_cast< MixerSettings_Mixer4Type::Enum*>(_v) = _t->mixer4Type(); break;
        case 35: *reinterpret_cast< qint16*>(_v) = _t->mixer4VectorThrottleCurve1(); break;
        case 36: *reinterpret_cast< qint16*>(_v) = _t->mixer4VectorThrottleCurve2(); break;
        case 37: *reinterpret_cast< qint16*>(_v) = _t->mixer4VectorRoll(); break;
        case 38: *reinterpret_cast< qint16*>(_v) = _t->mixer4VectorPitch(); break;
        case 39: *reinterpret_cast< qint16*>(_v) = _t->mixer4VectorYaw(); break;
        case 40: *reinterpret_cast< MixerSettings_Mixer5Type::Enum*>(_v) = _t->mixer5Type(); break;
        case 41: *reinterpret_cast< qint16*>(_v) = _t->mixer5VectorThrottleCurve1(); break;
        case 42: *reinterpret_cast< qint16*>(_v) = _t->mixer5VectorThrottleCurve2(); break;
        case 43: *reinterpret_cast< qint16*>(_v) = _t->mixer5VectorRoll(); break;
        case 44: *reinterpret_cast< qint16*>(_v) = _t->mixer5VectorPitch(); break;
        case 45: *reinterpret_cast< qint16*>(_v) = _t->mixer5VectorYaw(); break;
        case 46: *reinterpret_cast< MixerSettings_Mixer6Type::Enum*>(_v) = _t->mixer6Type(); break;
        case 47: *reinterpret_cast< qint16*>(_v) = _t->mixer6VectorThrottleCurve1(); break;
        case 48: *reinterpret_cast< qint16*>(_v) = _t->mixer6VectorThrottleCurve2(); break;
        case 49: *reinterpret_cast< qint16*>(_v) = _t->mixer6VectorRoll(); break;
        case 50: *reinterpret_cast< qint16*>(_v) = _t->mixer6VectorPitch(); break;
        case 51: *reinterpret_cast< qint16*>(_v) = _t->mixer6VectorYaw(); break;
        case 52: *reinterpret_cast< MixerSettings_Mixer7Type::Enum*>(_v) = _t->mixer7Type(); break;
        case 53: *reinterpret_cast< qint16*>(_v) = _t->mixer7VectorThrottleCurve1(); break;
        case 54: *reinterpret_cast< qint16*>(_v) = _t->mixer7VectorThrottleCurve2(); break;
        case 55: *reinterpret_cast< qint16*>(_v) = _t->mixer7VectorRoll(); break;
        case 56: *reinterpret_cast< qint16*>(_v) = _t->mixer7VectorPitch(); break;
        case 57: *reinterpret_cast< qint16*>(_v) = _t->mixer7VectorYaw(); break;
        case 58: *reinterpret_cast< MixerSettings_Mixer8Type::Enum*>(_v) = _t->mixer8Type(); break;
        case 59: *reinterpret_cast< qint16*>(_v) = _t->mixer8VectorThrottleCurve1(); break;
        case 60: *reinterpret_cast< qint16*>(_v) = _t->mixer8VectorThrottleCurve2(); break;
        case 61: *reinterpret_cast< qint16*>(_v) = _t->mixer8VectorRoll(); break;
        case 62: *reinterpret_cast< qint16*>(_v) = _t->mixer8VectorPitch(); break;
        case 63: *reinterpret_cast< qint16*>(_v) = _t->mixer8VectorYaw(); break;
        case 64: *reinterpret_cast< MixerSettings_Mixer9Type::Enum*>(_v) = _t->mixer9Type(); break;
        case 65: *reinterpret_cast< qint16*>(_v) = _t->mixer9VectorThrottleCurve1(); break;
        case 66: *reinterpret_cast< qint16*>(_v) = _t->mixer9VectorThrottleCurve2(); break;
        case 67: *reinterpret_cast< qint16*>(_v) = _t->mixer9VectorRoll(); break;
        case 68: *reinterpret_cast< qint16*>(_v) = _t->mixer9VectorPitch(); break;
        case 69: *reinterpret_cast< qint16*>(_v) = _t->mixer9VectorYaw(); break;
        case 70: *reinterpret_cast< MixerSettings_Mixer10Type::Enum*>(_v) = _t->mixer10Type(); break;
        case 71: *reinterpret_cast< qint16*>(_v) = _t->mixer10VectorThrottleCurve1(); break;
        case 72: *reinterpret_cast< qint16*>(_v) = _t->mixer10VectorThrottleCurve2(); break;
        case 73: *reinterpret_cast< qint16*>(_v) = _t->mixer10VectorRoll(); break;
        case 74: *reinterpret_cast< qint16*>(_v) = _t->mixer10VectorPitch(); break;
        case 75: *reinterpret_cast< qint16*>(_v) = _t->mixer10VectorYaw(); break;
        case 76: *reinterpret_cast< MixerSettings_Mixer11Type::Enum*>(_v) = _t->mixer11Type(); break;
        case 77: *reinterpret_cast< qint16*>(_v) = _t->mixer11VectorThrottleCurve1(); break;
        case 78: *reinterpret_cast< qint16*>(_v) = _t->mixer11VectorThrottleCurve2(); break;
        case 79: *reinterpret_cast< qint16*>(_v) = _t->mixer11VectorRoll(); break;
        case 80: *reinterpret_cast< qint16*>(_v) = _t->mixer11VectorPitch(); break;
        case 81: *reinterpret_cast< qint16*>(_v) = _t->mixer11VectorYaw(); break;
        case 82: *reinterpret_cast< MixerSettings_Mixer12Type::Enum*>(_v) = _t->mixer12Type(); break;
        case 83: *reinterpret_cast< qint16*>(_v) = _t->mixer12VectorThrottleCurve1(); break;
        case 84: *reinterpret_cast< qint16*>(_v) = _t->mixer12VectorThrottleCurve2(); break;
        case 85: *reinterpret_cast< qint16*>(_v) = _t->mixer12VectorRoll(); break;
        case 86: *reinterpret_cast< qint16*>(_v) = _t->mixer12VectorPitch(); break;
        case 87: *reinterpret_cast< qint16*>(_v) = _t->mixer12VectorYaw(); break;
        case 88: *reinterpret_cast< float*>(_v) = _t->getThrottleCurve1_0(); break;
        case 89: *reinterpret_cast< float*>(_v) = _t->getThrottleCurve1_25(); break;
        case 90: *reinterpret_cast< float*>(_v) = _t->getThrottleCurve1_50(); break;
        case 91: *reinterpret_cast< float*>(_v) = _t->getThrottleCurve1_75(); break;
        case 92: *reinterpret_cast< float*>(_v) = _t->getThrottleCurve1_100(); break;
        case 93: *reinterpret_cast< float*>(_v) = _t->getThrottleCurve2_0(); break;
        case 94: *reinterpret_cast< float*>(_v) = _t->getThrottleCurve2_25(); break;
        case 95: *reinterpret_cast< float*>(_v) = _t->getThrottleCurve2_50(); break;
        case 96: *reinterpret_cast< float*>(_v) = _t->getThrottleCurve2_75(); break;
        case 97: *reinterpret_cast< float*>(_v) = _t->getThrottleCurve2_100(); break;
        case 98: *reinterpret_cast< qint8*>(_v) = _t->getMixerValueRoll(); break;
        case 99: *reinterpret_cast< qint8*>(_v) = _t->getMixerValuePitch(); break;
        case 100: *reinterpret_cast< qint8*>(_v) = _t->getMixerValueYaw(); break;
        case 101: *reinterpret_cast< qint8*>(_v) = _t->getRollDifferential(); break;
        case 102: *reinterpret_cast< quint8*>(_v) = _t->getFirstRollServo(); break;
        case 103: *reinterpret_cast< quint8*>(_v) = _t->getCurve2Source(); break;
        case 104: *reinterpret_cast< quint8*>(_v) = _t->getMixer1Type(); break;
        case 105: *reinterpret_cast< qint8*>(_v) = _t->getMixer1Vector_ThrottleCurve1(); break;
        case 106: *reinterpret_cast< qint8*>(_v) = _t->getMixer1Vector_ThrottleCurve2(); break;
        case 107: *reinterpret_cast< qint8*>(_v) = _t->getMixer1Vector_Roll(); break;
        case 108: *reinterpret_cast< qint8*>(_v) = _t->getMixer1Vector_Pitch(); break;
        case 109: *reinterpret_cast< qint8*>(_v) = _t->getMixer1Vector_Yaw(); break;
        case 110: *reinterpret_cast< quint8*>(_v) = _t->getMixer2Type(); break;
        case 111: *reinterpret_cast< qint8*>(_v) = _t->getMixer2Vector_ThrottleCurve1(); break;
        case 112: *reinterpret_cast< qint8*>(_v) = _t->getMixer2Vector_ThrottleCurve2(); break;
        case 113: *reinterpret_cast< qint8*>(_v) = _t->getMixer2Vector_Roll(); break;
        case 114: *reinterpret_cast< qint8*>(_v) = _t->getMixer2Vector_Pitch(); break;
        case 115: *reinterpret_cast< qint8*>(_v) = _t->getMixer2Vector_Yaw(); break;
        case 116: *reinterpret_cast< quint8*>(_v) = _t->getMixer3Type(); break;
        case 117: *reinterpret_cast< qint8*>(_v) = _t->getMixer3Vector_ThrottleCurve1(); break;
        case 118: *reinterpret_cast< qint8*>(_v) = _t->getMixer3Vector_ThrottleCurve2(); break;
        case 119: *reinterpret_cast< qint8*>(_v) = _t->getMixer3Vector_Roll(); break;
        case 120: *reinterpret_cast< qint8*>(_v) = _t->getMixer3Vector_Pitch(); break;
        case 121: *reinterpret_cast< qint8*>(_v) = _t->getMixer3Vector_Yaw(); break;
        case 122: *reinterpret_cast< quint8*>(_v) = _t->getMixer4Type(); break;
        case 123: *reinterpret_cast< qint8*>(_v) = _t->getMixer4Vector_ThrottleCurve1(); break;
        case 124: *reinterpret_cast< qint8*>(_v) = _t->getMixer4Vector_ThrottleCurve2(); break;
        case 125: *reinterpret_cast< qint8*>(_v) = _t->getMixer4Vector_Roll(); break;
        case 126: *reinterpret_cast< qint8*>(_v) = _t->getMixer4Vector_Pitch(); break;
        case 127: *reinterpret_cast< qint8*>(_v) = _t->getMixer4Vector_Yaw(); break;
        case 128: *reinterpret_cast< quint8*>(_v) = _t->getMixer5Type(); break;
        case 129: *reinterpret_cast< qint8*>(_v) = _t->getMixer5Vector_ThrottleCurve1(); break;
        case 130: *reinterpret_cast< qint8*>(_v) = _t->getMixer5Vector_ThrottleCurve2(); break;
        case 131: *reinterpret_cast< qint8*>(_v) = _t->getMixer5Vector_Roll(); break;
        case 132: *reinterpret_cast< qint8*>(_v) = _t->getMixer5Vector_Pitch(); break;
        case 133: *reinterpret_cast< qint8*>(_v) = _t->getMixer5Vector_Yaw(); break;
        case 134: *reinterpret_cast< quint8*>(_v) = _t->getMixer6Type(); break;
        case 135: *reinterpret_cast< qint8*>(_v) = _t->getMixer6Vector_ThrottleCurve1(); break;
        case 136: *reinterpret_cast< qint8*>(_v) = _t->getMixer6Vector_ThrottleCurve2(); break;
        case 137: *reinterpret_cast< qint8*>(_v) = _t->getMixer6Vector_Roll(); break;
        case 138: *reinterpret_cast< qint8*>(_v) = _t->getMixer6Vector_Pitch(); break;
        case 139: *reinterpret_cast< qint8*>(_v) = _t->getMixer6Vector_Yaw(); break;
        case 140: *reinterpret_cast< quint8*>(_v) = _t->getMixer7Type(); break;
        case 141: *reinterpret_cast< qint8*>(_v) = _t->getMixer7Vector_ThrottleCurve1(); break;
        case 142: *reinterpret_cast< qint8*>(_v) = _t->getMixer7Vector_ThrottleCurve2(); break;
        case 143: *reinterpret_cast< qint8*>(_v) = _t->getMixer7Vector_Roll(); break;
        case 144: *reinterpret_cast< qint8*>(_v) = _t->getMixer7Vector_Pitch(); break;
        case 145: *reinterpret_cast< qint8*>(_v) = _t->getMixer7Vector_Yaw(); break;
        case 146: *reinterpret_cast< quint8*>(_v) = _t->getMixer8Type(); break;
        case 147: *reinterpret_cast< qint8*>(_v) = _t->getMixer8Vector_ThrottleCurve1(); break;
        case 148: *reinterpret_cast< qint8*>(_v) = _t->getMixer8Vector_ThrottleCurve2(); break;
        case 149: *reinterpret_cast< qint8*>(_v) = _t->getMixer8Vector_Roll(); break;
        case 150: *reinterpret_cast< qint8*>(_v) = _t->getMixer8Vector_Pitch(); break;
        case 151: *reinterpret_cast< qint8*>(_v) = _t->getMixer8Vector_Yaw(); break;
        case 152: *reinterpret_cast< quint8*>(_v) = _t->getMixer9Type(); break;
        case 153: *reinterpret_cast< qint8*>(_v) = _t->getMixer9Vector_ThrottleCurve1(); break;
        case 154: *reinterpret_cast< qint8*>(_v) = _t->getMixer9Vector_ThrottleCurve2(); break;
        case 155: *reinterpret_cast< qint8*>(_v) = _t->getMixer9Vector_Roll(); break;
        case 156: *reinterpret_cast< qint8*>(_v) = _t->getMixer9Vector_Pitch(); break;
        case 157: *reinterpret_cast< qint8*>(_v) = _t->getMixer9Vector_Yaw(); break;
        case 158: *reinterpret_cast< quint8*>(_v) = _t->getMixer10Type(); break;
        case 159: *reinterpret_cast< qint8*>(_v) = _t->getMixer10Vector_ThrottleCurve1(); break;
        case 160: *reinterpret_cast< qint8*>(_v) = _t->getMixer10Vector_ThrottleCurve2(); break;
        case 161: *reinterpret_cast< qint8*>(_v) = _t->getMixer10Vector_Roll(); break;
        case 162: *reinterpret_cast< qint8*>(_v) = _t->getMixer10Vector_Pitch(); break;
        case 163: *reinterpret_cast< qint8*>(_v) = _t->getMixer10Vector_Yaw(); break;
        case 164: *reinterpret_cast< quint8*>(_v) = _t->getMixer11Type(); break;
        case 165: *reinterpret_cast< qint8*>(_v) = _t->getMixer11Vector_ThrottleCurve1(); break;
        case 166: *reinterpret_cast< qint8*>(_v) = _t->getMixer11Vector_ThrottleCurve2(); break;
        case 167: *reinterpret_cast< qint8*>(_v) = _t->getMixer11Vector_Roll(); break;
        case 168: *reinterpret_cast< qint8*>(_v) = _t->getMixer11Vector_Pitch(); break;
        case 169: *reinterpret_cast< qint8*>(_v) = _t->getMixer11Vector_Yaw(); break;
        case 170: *reinterpret_cast< quint8*>(_v) = _t->getMixer12Type(); break;
        case 171: *reinterpret_cast< qint8*>(_v) = _t->getMixer12Vector_ThrottleCurve1(); break;
        case 172: *reinterpret_cast< qint8*>(_v) = _t->getMixer12Vector_ThrottleCurve2(); break;
        case 173: *reinterpret_cast< qint8*>(_v) = _t->getMixer12Vector_Roll(); break;
        case 174: *reinterpret_cast< qint8*>(_v) = _t->getMixer12Vector_Pitch(); break;
        case 175: *reinterpret_cast< qint8*>(_v) = _t->getMixer12Vector_Yaw(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MixerSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setThrottleCurve1_0(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setThrottleCurve1_25(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setThrottleCurve1_50(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setThrottleCurve1_75(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setThrottleCurve1_100(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setThrottleCurve2_0(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setThrottleCurve2_25(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setThrottleCurve2_50(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setThrottleCurve2_75(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setThrottleCurve2_100(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setMixerValueRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 11: _t->setMixerValuePitch(*reinterpret_cast< qint16*>(_v)); break;
        case 12: _t->setMixerValueYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 13: _t->setRollDifferential(*reinterpret_cast< qint16*>(_v)); break;
        case 14: _t->setFirstRollServo(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setCurve2Source(*reinterpret_cast< MixerSettings_Curve2Source::Enum*>(_v)); break;
        case 16: _t->setMixer1Type(*reinterpret_cast< MixerSettings_Mixer1Type::Enum*>(_v)); break;
        case 17: _t->setMixer1VectorThrottleCurve1(*reinterpret_cast< qint16*>(_v)); break;
        case 18: _t->setMixer1VectorThrottleCurve2(*reinterpret_cast< qint16*>(_v)); break;
        case 19: _t->setMixer1VectorRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 20: _t->setMixer1VectorPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 21: _t->setMixer1VectorYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 22: _t->setMixer2Type(*reinterpret_cast< MixerSettings_Mixer2Type::Enum*>(_v)); break;
        case 23: _t->setMixer2VectorThrottleCurve1(*reinterpret_cast< qint16*>(_v)); break;
        case 24: _t->setMixer2VectorThrottleCurve2(*reinterpret_cast< qint16*>(_v)); break;
        case 25: _t->setMixer2VectorRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 26: _t->setMixer2VectorPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 27: _t->setMixer2VectorYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 28: _t->setMixer3Type(*reinterpret_cast< MixerSettings_Mixer3Type::Enum*>(_v)); break;
        case 29: _t->setMixer3VectorThrottleCurve1(*reinterpret_cast< qint16*>(_v)); break;
        case 30: _t->setMixer3VectorThrottleCurve2(*reinterpret_cast< qint16*>(_v)); break;
        case 31: _t->setMixer3VectorRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 32: _t->setMixer3VectorPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 33: _t->setMixer3VectorYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 34: _t->setMixer4Type(*reinterpret_cast< MixerSettings_Mixer4Type::Enum*>(_v)); break;
        case 35: _t->setMixer4VectorThrottleCurve1(*reinterpret_cast< qint16*>(_v)); break;
        case 36: _t->setMixer4VectorThrottleCurve2(*reinterpret_cast< qint16*>(_v)); break;
        case 37: _t->setMixer4VectorRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 38: _t->setMixer4VectorPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 39: _t->setMixer4VectorYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 40: _t->setMixer5Type(*reinterpret_cast< MixerSettings_Mixer5Type::Enum*>(_v)); break;
        case 41: _t->setMixer5VectorThrottleCurve1(*reinterpret_cast< qint16*>(_v)); break;
        case 42: _t->setMixer5VectorThrottleCurve2(*reinterpret_cast< qint16*>(_v)); break;
        case 43: _t->setMixer5VectorRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 44: _t->setMixer5VectorPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 45: _t->setMixer5VectorYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 46: _t->setMixer6Type(*reinterpret_cast< MixerSettings_Mixer6Type::Enum*>(_v)); break;
        case 47: _t->setMixer6VectorThrottleCurve1(*reinterpret_cast< qint16*>(_v)); break;
        case 48: _t->setMixer6VectorThrottleCurve2(*reinterpret_cast< qint16*>(_v)); break;
        case 49: _t->setMixer6VectorRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 50: _t->setMixer6VectorPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 51: _t->setMixer6VectorYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 52: _t->setMixer7Type(*reinterpret_cast< MixerSettings_Mixer7Type::Enum*>(_v)); break;
        case 53: _t->setMixer7VectorThrottleCurve1(*reinterpret_cast< qint16*>(_v)); break;
        case 54: _t->setMixer7VectorThrottleCurve2(*reinterpret_cast< qint16*>(_v)); break;
        case 55: _t->setMixer7VectorRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 56: _t->setMixer7VectorPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 57: _t->setMixer7VectorYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 58: _t->setMixer8Type(*reinterpret_cast< MixerSettings_Mixer8Type::Enum*>(_v)); break;
        case 59: _t->setMixer8VectorThrottleCurve1(*reinterpret_cast< qint16*>(_v)); break;
        case 60: _t->setMixer8VectorThrottleCurve2(*reinterpret_cast< qint16*>(_v)); break;
        case 61: _t->setMixer8VectorRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 62: _t->setMixer8VectorPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 63: _t->setMixer8VectorYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 64: _t->setMixer9Type(*reinterpret_cast< MixerSettings_Mixer9Type::Enum*>(_v)); break;
        case 65: _t->setMixer9VectorThrottleCurve1(*reinterpret_cast< qint16*>(_v)); break;
        case 66: _t->setMixer9VectorThrottleCurve2(*reinterpret_cast< qint16*>(_v)); break;
        case 67: _t->setMixer9VectorRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 68: _t->setMixer9VectorPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 69: _t->setMixer9VectorYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 70: _t->setMixer10Type(*reinterpret_cast< MixerSettings_Mixer10Type::Enum*>(_v)); break;
        case 71: _t->setMixer10VectorThrottleCurve1(*reinterpret_cast< qint16*>(_v)); break;
        case 72: _t->setMixer10VectorThrottleCurve2(*reinterpret_cast< qint16*>(_v)); break;
        case 73: _t->setMixer10VectorRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 74: _t->setMixer10VectorPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 75: _t->setMixer10VectorYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 76: _t->setMixer11Type(*reinterpret_cast< MixerSettings_Mixer11Type::Enum*>(_v)); break;
        case 77: _t->setMixer11VectorThrottleCurve1(*reinterpret_cast< qint16*>(_v)); break;
        case 78: _t->setMixer11VectorThrottleCurve2(*reinterpret_cast< qint16*>(_v)); break;
        case 79: _t->setMixer11VectorRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 80: _t->setMixer11VectorPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 81: _t->setMixer11VectorYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 82: _t->setMixer12Type(*reinterpret_cast< MixerSettings_Mixer12Type::Enum*>(_v)); break;
        case 83: _t->setMixer12VectorThrottleCurve1(*reinterpret_cast< qint16*>(_v)); break;
        case 84: _t->setMixer12VectorThrottleCurve2(*reinterpret_cast< qint16*>(_v)); break;
        case 85: _t->setMixer12VectorRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 86: _t->setMixer12VectorPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 87: _t->setMixer12VectorYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 88: _t->setThrottleCurve1_0(*reinterpret_cast< float*>(_v)); break;
        case 89: _t->setThrottleCurve1_25(*reinterpret_cast< float*>(_v)); break;
        case 90: _t->setThrottleCurve1_50(*reinterpret_cast< float*>(_v)); break;
        case 91: _t->setThrottleCurve1_75(*reinterpret_cast< float*>(_v)); break;
        case 92: _t->setThrottleCurve1_100(*reinterpret_cast< float*>(_v)); break;
        case 93: _t->setThrottleCurve2_0(*reinterpret_cast< float*>(_v)); break;
        case 94: _t->setThrottleCurve2_25(*reinterpret_cast< float*>(_v)); break;
        case 95: _t->setThrottleCurve2_50(*reinterpret_cast< float*>(_v)); break;
        case 96: _t->setThrottleCurve2_75(*reinterpret_cast< float*>(_v)); break;
        case 97: _t->setThrottleCurve2_100(*reinterpret_cast< float*>(_v)); break;
        case 98: _t->setMixerValueRoll(*reinterpret_cast< qint8*>(_v)); break;
        case 99: _t->setMixerValuePitch(*reinterpret_cast< qint8*>(_v)); break;
        case 100: _t->setMixerValueYaw(*reinterpret_cast< qint8*>(_v)); break;
        case 101: _t->setRollDifferential(*reinterpret_cast< qint8*>(_v)); break;
        case 102: _t->setFirstRollServo(*reinterpret_cast< quint8*>(_v)); break;
        case 103: _t->setCurve2Source(*reinterpret_cast< quint8*>(_v)); break;
        case 104: _t->setMixer1Type(*reinterpret_cast< quint8*>(_v)); break;
        case 105: _t->setMixer1Vector_ThrottleCurve1(*reinterpret_cast< qint8*>(_v)); break;
        case 106: _t->setMixer1Vector_ThrottleCurve2(*reinterpret_cast< qint8*>(_v)); break;
        case 107: _t->setMixer1Vector_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 108: _t->setMixer1Vector_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 109: _t->setMixer1Vector_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        case 110: _t->setMixer2Type(*reinterpret_cast< quint8*>(_v)); break;
        case 111: _t->setMixer2Vector_ThrottleCurve1(*reinterpret_cast< qint8*>(_v)); break;
        case 112: _t->setMixer2Vector_ThrottleCurve2(*reinterpret_cast< qint8*>(_v)); break;
        case 113: _t->setMixer2Vector_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 114: _t->setMixer2Vector_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 115: _t->setMixer2Vector_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        case 116: _t->setMixer3Type(*reinterpret_cast< quint8*>(_v)); break;
        case 117: _t->setMixer3Vector_ThrottleCurve1(*reinterpret_cast< qint8*>(_v)); break;
        case 118: _t->setMixer3Vector_ThrottleCurve2(*reinterpret_cast< qint8*>(_v)); break;
        case 119: _t->setMixer3Vector_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 120: _t->setMixer3Vector_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 121: _t->setMixer3Vector_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        case 122: _t->setMixer4Type(*reinterpret_cast< quint8*>(_v)); break;
        case 123: _t->setMixer4Vector_ThrottleCurve1(*reinterpret_cast< qint8*>(_v)); break;
        case 124: _t->setMixer4Vector_ThrottleCurve2(*reinterpret_cast< qint8*>(_v)); break;
        case 125: _t->setMixer4Vector_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 126: _t->setMixer4Vector_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 127: _t->setMixer4Vector_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        case 128: _t->setMixer5Type(*reinterpret_cast< quint8*>(_v)); break;
        case 129: _t->setMixer5Vector_ThrottleCurve1(*reinterpret_cast< qint8*>(_v)); break;
        case 130: _t->setMixer5Vector_ThrottleCurve2(*reinterpret_cast< qint8*>(_v)); break;
        case 131: _t->setMixer5Vector_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 132: _t->setMixer5Vector_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 133: _t->setMixer5Vector_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        case 134: _t->setMixer6Type(*reinterpret_cast< quint8*>(_v)); break;
        case 135: _t->setMixer6Vector_ThrottleCurve1(*reinterpret_cast< qint8*>(_v)); break;
        case 136: _t->setMixer6Vector_ThrottleCurve2(*reinterpret_cast< qint8*>(_v)); break;
        case 137: _t->setMixer6Vector_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 138: _t->setMixer6Vector_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 139: _t->setMixer6Vector_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        case 140: _t->setMixer7Type(*reinterpret_cast< quint8*>(_v)); break;
        case 141: _t->setMixer7Vector_ThrottleCurve1(*reinterpret_cast< qint8*>(_v)); break;
        case 142: _t->setMixer7Vector_ThrottleCurve2(*reinterpret_cast< qint8*>(_v)); break;
        case 143: _t->setMixer7Vector_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 144: _t->setMixer7Vector_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 145: _t->setMixer7Vector_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        case 146: _t->setMixer8Type(*reinterpret_cast< quint8*>(_v)); break;
        case 147: _t->setMixer8Vector_ThrottleCurve1(*reinterpret_cast< qint8*>(_v)); break;
        case 148: _t->setMixer8Vector_ThrottleCurve2(*reinterpret_cast< qint8*>(_v)); break;
        case 149: _t->setMixer8Vector_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 150: _t->setMixer8Vector_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 151: _t->setMixer8Vector_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        case 152: _t->setMixer9Type(*reinterpret_cast< quint8*>(_v)); break;
        case 153: _t->setMixer9Vector_ThrottleCurve1(*reinterpret_cast< qint8*>(_v)); break;
        case 154: _t->setMixer9Vector_ThrottleCurve2(*reinterpret_cast< qint8*>(_v)); break;
        case 155: _t->setMixer9Vector_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 156: _t->setMixer9Vector_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 157: _t->setMixer9Vector_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        case 158: _t->setMixer10Type(*reinterpret_cast< quint8*>(_v)); break;
        case 159: _t->setMixer10Vector_ThrottleCurve1(*reinterpret_cast< qint8*>(_v)); break;
        case 160: _t->setMixer10Vector_ThrottleCurve2(*reinterpret_cast< qint8*>(_v)); break;
        case 161: _t->setMixer10Vector_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 162: _t->setMixer10Vector_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 163: _t->setMixer10Vector_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        case 164: _t->setMixer11Type(*reinterpret_cast< quint8*>(_v)); break;
        case 165: _t->setMixer11Vector_ThrottleCurve1(*reinterpret_cast< qint8*>(_v)); break;
        case 166: _t->setMixer11Vector_ThrottleCurve2(*reinterpret_cast< qint8*>(_v)); break;
        case 167: _t->setMixer11Vector_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 168: _t->setMixer11Vector_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 169: _t->setMixer11Vector_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        case 170: _t->setMixer12Type(*reinterpret_cast< quint8*>(_v)); break;
        case 171: _t->setMixer12Vector_ThrottleCurve1(*reinterpret_cast< qint8*>(_v)); break;
        case 172: _t->setMixer12Vector_ThrottleCurve2(*reinterpret_cast< qint8*>(_v)); break;
        case 173: _t->setMixer12Vector_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 174: _t->setMixer12Vector_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 175: _t->setMixer12Vector_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_MixerSettings[] = {
        &MixerSettings_Curve2Source::staticMetaObject,
    &MixerSettings_Mixer1Type::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject MixerSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_MixerSettings.data,
    qt_meta_data_MixerSettings,
    qt_static_metacall,
    qt_meta_extradata_MixerSettings,
    nullptr
} };


const QMetaObject *MixerSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MixerSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MixerSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int MixerSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 513)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 513;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 513)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 513;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 176;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 176;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 176;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 176;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 176;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 176;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MixerSettings::throttleCurve1Changed(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MixerSettings::ThrottleCurve1Changed(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MixerSettings::throttleCurve1_0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MixerSettings::ThrottleCurve1_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MixerSettings::throttleCurve1_25Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MixerSettings::ThrottleCurve1_25Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MixerSettings::throttleCurve1_50Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MixerSettings::ThrottleCurve1_50Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MixerSettings::throttleCurve1_75Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MixerSettings::ThrottleCurve1_75Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MixerSettings::throttleCurve1_100Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MixerSettings::ThrottleCurve1_100Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MixerSettings::throttleCurve2Changed(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MixerSettings::ThrottleCurve2Changed(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MixerSettings::throttleCurve2_0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MixerSettings::ThrottleCurve2_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MixerSettings::throttleCurve2_25Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MixerSettings::ThrottleCurve2_25Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MixerSettings::throttleCurve2_50Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MixerSettings::ThrottleCurve2_50Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MixerSettings::throttleCurve2_75Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MixerSettings::ThrottleCurve2_75Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MixerSettings::throttleCurve2_100Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MixerSettings::ThrottleCurve2_100Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void MixerSettings::mixerValueRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void MixerSettings::MixerValueRollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MixerSettings::mixerValuePitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void MixerSettings::MixerValuePitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void MixerSettings::mixerValueYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void MixerSettings::MixerValueYawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void MixerSettings::rollDifferentialChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void MixerSettings::RollDifferentialChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void MixerSettings::firstRollServoChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void MixerSettings::FirstRollServoChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MixerSettings::curve2SourceChanged(const MixerSettings_Curve2Source::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MixerSettings::Curve2SourceChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void MixerSettings::mixer1TypeChanged(const MixerSettings_Mixer1Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void MixerSettings::Mixer1TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void MixerSettings::mixer1VectorChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void MixerSettings::Mixer1VectorChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void MixerSettings::mixer1VectorThrottleCurve1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void MixerSettings::Mixer1Vector_ThrottleCurve1Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void MixerSettings::mixer1VectorThrottleCurve2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void MixerSettings::Mixer1Vector_ThrottleCurve2Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void MixerSettings::mixer1VectorRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void MixerSettings::Mixer1Vector_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void MixerSettings::mixer1VectorPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void MixerSettings::Mixer1Vector_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void MixerSettings::mixer1VectorYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void MixerSettings::Mixer1Vector_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void MixerSettings::mixer2TypeChanged(const MixerSettings_Mixer2Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void MixerSettings::Mixer2TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void MixerSettings::mixer2VectorChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void MixerSettings::Mixer2VectorChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void MixerSettings::mixer2VectorThrottleCurve1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void MixerSettings::Mixer2Vector_ThrottleCurve1Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void MixerSettings::mixer2VectorThrottleCurve2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void MixerSettings::Mixer2Vector_ThrottleCurve2Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void MixerSettings::mixer2VectorRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void MixerSettings::Mixer2Vector_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void MixerSettings::mixer2VectorPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void MixerSettings::Mixer2Vector_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void MixerSettings::mixer2VectorYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void MixerSettings::Mixer2Vector_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void MixerSettings::mixer3TypeChanged(const MixerSettings_Mixer3Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void MixerSettings::Mixer3TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void MixerSettings::mixer3VectorChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void MixerSettings::Mixer3VectorChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void MixerSettings::mixer3VectorThrottleCurve1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void MixerSettings::Mixer3Vector_ThrottleCurve1Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void MixerSettings::mixer3VectorThrottleCurve2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void MixerSettings::Mixer3Vector_ThrottleCurve2Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void MixerSettings::mixer3VectorRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void MixerSettings::Mixer3Vector_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void MixerSettings::mixer3VectorPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void MixerSettings::Mixer3Vector_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void MixerSettings::mixer3VectorYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void MixerSettings::Mixer3Vector_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void MixerSettings::mixer4TypeChanged(const MixerSettings_Mixer4Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void MixerSettings::Mixer4TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void MixerSettings::mixer4VectorChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void MixerSettings::Mixer4VectorChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void MixerSettings::mixer4VectorThrottleCurve1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void MixerSettings::Mixer4Vector_ThrottleCurve1Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void MixerSettings::mixer4VectorThrottleCurve2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void MixerSettings::Mixer4Vector_ThrottleCurve2Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void MixerSettings::mixer4VectorRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void MixerSettings::Mixer4Vector_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void MixerSettings::mixer4VectorPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void MixerSettings::Mixer4Vector_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void MixerSettings::mixer4VectorYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void MixerSettings::Mixer4Vector_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void MixerSettings::mixer5TypeChanged(const MixerSettings_Mixer5Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void MixerSettings::Mixer5TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void MixerSettings::mixer5VectorChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void MixerSettings::Mixer5VectorChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void MixerSettings::mixer5VectorThrottleCurve1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void MixerSettings::Mixer5Vector_ThrottleCurve1Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void MixerSettings::mixer5VectorThrottleCurve2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void MixerSettings::Mixer5Vector_ThrottleCurve2Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void MixerSettings::mixer5VectorRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void MixerSettings::Mixer5Vector_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void MixerSettings::mixer5VectorPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void MixerSettings::Mixer5Vector_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void MixerSettings::mixer5VectorYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void MixerSettings::Mixer5Vector_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void MixerSettings::mixer6TypeChanged(const MixerSettings_Mixer6Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void MixerSettings::Mixer6TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void MixerSettings::mixer6VectorChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void MixerSettings::Mixer6VectorChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void MixerSettings::mixer6VectorThrottleCurve1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void MixerSettings::Mixer6Vector_ThrottleCurve1Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void MixerSettings::mixer6VectorThrottleCurve2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void MixerSettings::Mixer6Vector_ThrottleCurve2Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void MixerSettings::mixer6VectorRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}

// SIGNAL 115
void MixerSettings::Mixer6Vector_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 115, _a);
}

// SIGNAL 116
void MixerSettings::mixer6VectorPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 116, _a);
}

// SIGNAL 117
void MixerSettings::Mixer6Vector_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 117, _a);
}

// SIGNAL 118
void MixerSettings::mixer6VectorYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 118, _a);
}

// SIGNAL 119
void MixerSettings::Mixer6Vector_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 119, _a);
}

// SIGNAL 120
void MixerSettings::mixer7TypeChanged(const MixerSettings_Mixer7Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 120, _a);
}

// SIGNAL 121
void MixerSettings::Mixer7TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 121, _a);
}

// SIGNAL 122
void MixerSettings::mixer7VectorChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 122, _a);
}

// SIGNAL 123
void MixerSettings::Mixer7VectorChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 123, _a);
}

// SIGNAL 124
void MixerSettings::mixer7VectorThrottleCurve1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 124, _a);
}

// SIGNAL 125
void MixerSettings::Mixer7Vector_ThrottleCurve1Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 125, _a);
}

// SIGNAL 126
void MixerSettings::mixer7VectorThrottleCurve2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 126, _a);
}

// SIGNAL 127
void MixerSettings::Mixer7Vector_ThrottleCurve2Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 127, _a);
}

// SIGNAL 128
void MixerSettings::mixer7VectorRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 128, _a);
}

// SIGNAL 129
void MixerSettings::Mixer7Vector_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 129, _a);
}

// SIGNAL 130
void MixerSettings::mixer7VectorPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 130, _a);
}

// SIGNAL 131
void MixerSettings::Mixer7Vector_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 131, _a);
}

// SIGNAL 132
void MixerSettings::mixer7VectorYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 132, _a);
}

// SIGNAL 133
void MixerSettings::Mixer7Vector_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 133, _a);
}

// SIGNAL 134
void MixerSettings::mixer8TypeChanged(const MixerSettings_Mixer8Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 134, _a);
}

// SIGNAL 135
void MixerSettings::Mixer8TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 135, _a);
}

// SIGNAL 136
void MixerSettings::mixer8VectorChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 136, _a);
}

// SIGNAL 137
void MixerSettings::Mixer8VectorChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 137, _a);
}

// SIGNAL 138
void MixerSettings::mixer8VectorThrottleCurve1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 138, _a);
}

// SIGNAL 139
void MixerSettings::Mixer8Vector_ThrottleCurve1Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 139, _a);
}

// SIGNAL 140
void MixerSettings::mixer8VectorThrottleCurve2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 140, _a);
}

// SIGNAL 141
void MixerSettings::Mixer8Vector_ThrottleCurve2Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 141, _a);
}

// SIGNAL 142
void MixerSettings::mixer8VectorRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 142, _a);
}

// SIGNAL 143
void MixerSettings::Mixer8Vector_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 143, _a);
}

// SIGNAL 144
void MixerSettings::mixer8VectorPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 144, _a);
}

// SIGNAL 145
void MixerSettings::Mixer8Vector_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 145, _a);
}

// SIGNAL 146
void MixerSettings::mixer8VectorYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 146, _a);
}

// SIGNAL 147
void MixerSettings::Mixer8Vector_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 147, _a);
}

// SIGNAL 148
void MixerSettings::mixer9TypeChanged(const MixerSettings_Mixer9Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 148, _a);
}

// SIGNAL 149
void MixerSettings::Mixer9TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 149, _a);
}

// SIGNAL 150
void MixerSettings::mixer9VectorChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 150, _a);
}

// SIGNAL 151
void MixerSettings::Mixer9VectorChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 151, _a);
}

// SIGNAL 152
void MixerSettings::mixer9VectorThrottleCurve1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 152, _a);
}

// SIGNAL 153
void MixerSettings::Mixer9Vector_ThrottleCurve1Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 153, _a);
}

// SIGNAL 154
void MixerSettings::mixer9VectorThrottleCurve2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 154, _a);
}

// SIGNAL 155
void MixerSettings::Mixer9Vector_ThrottleCurve2Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 155, _a);
}

// SIGNAL 156
void MixerSettings::mixer9VectorRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 156, _a);
}

// SIGNAL 157
void MixerSettings::Mixer9Vector_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 157, _a);
}

// SIGNAL 158
void MixerSettings::mixer9VectorPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 158, _a);
}

// SIGNAL 159
void MixerSettings::Mixer9Vector_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 159, _a);
}

// SIGNAL 160
void MixerSettings::mixer9VectorYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 160, _a);
}

// SIGNAL 161
void MixerSettings::Mixer9Vector_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 161, _a);
}

// SIGNAL 162
void MixerSettings::mixer10TypeChanged(const MixerSettings_Mixer10Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 162, _a);
}

// SIGNAL 163
void MixerSettings::Mixer10TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 163, _a);
}

// SIGNAL 164
void MixerSettings::mixer10VectorChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 164, _a);
}

// SIGNAL 165
void MixerSettings::Mixer10VectorChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 165, _a);
}

// SIGNAL 166
void MixerSettings::mixer10VectorThrottleCurve1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 166, _a);
}

// SIGNAL 167
void MixerSettings::Mixer10Vector_ThrottleCurve1Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 167, _a);
}

// SIGNAL 168
void MixerSettings::mixer10VectorThrottleCurve2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 168, _a);
}

// SIGNAL 169
void MixerSettings::Mixer10Vector_ThrottleCurve2Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 169, _a);
}

// SIGNAL 170
void MixerSettings::mixer10VectorRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 170, _a);
}

// SIGNAL 171
void MixerSettings::Mixer10Vector_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 171, _a);
}

// SIGNAL 172
void MixerSettings::mixer10VectorPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 172, _a);
}

// SIGNAL 173
void MixerSettings::Mixer10Vector_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 173, _a);
}

// SIGNAL 174
void MixerSettings::mixer10VectorYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 174, _a);
}

// SIGNAL 175
void MixerSettings::Mixer10Vector_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 175, _a);
}

// SIGNAL 176
void MixerSettings::mixer11TypeChanged(const MixerSettings_Mixer11Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 176, _a);
}

// SIGNAL 177
void MixerSettings::Mixer11TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 177, _a);
}

// SIGNAL 178
void MixerSettings::mixer11VectorChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 178, _a);
}

// SIGNAL 179
void MixerSettings::Mixer11VectorChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 179, _a);
}

// SIGNAL 180
void MixerSettings::mixer11VectorThrottleCurve1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 180, _a);
}

// SIGNAL 181
void MixerSettings::Mixer11Vector_ThrottleCurve1Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 181, _a);
}

// SIGNAL 182
void MixerSettings::mixer11VectorThrottleCurve2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 182, _a);
}

// SIGNAL 183
void MixerSettings::Mixer11Vector_ThrottleCurve2Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 183, _a);
}

// SIGNAL 184
void MixerSettings::mixer11VectorRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 184, _a);
}

// SIGNAL 185
void MixerSettings::Mixer11Vector_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 185, _a);
}

// SIGNAL 186
void MixerSettings::mixer11VectorPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 186, _a);
}

// SIGNAL 187
void MixerSettings::Mixer11Vector_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 187, _a);
}

// SIGNAL 188
void MixerSettings::mixer11VectorYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 188, _a);
}

// SIGNAL 189
void MixerSettings::Mixer11Vector_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 189, _a);
}

// SIGNAL 190
void MixerSettings::mixer12TypeChanged(const MixerSettings_Mixer12Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 190, _a);
}

// SIGNAL 191
void MixerSettings::Mixer12TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 191, _a);
}

// SIGNAL 192
void MixerSettings::mixer12VectorChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 192, _a);
}

// SIGNAL 193
void MixerSettings::Mixer12VectorChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 193, _a);
}

// SIGNAL 194
void MixerSettings::mixer12VectorThrottleCurve1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 194, _a);
}

// SIGNAL 195
void MixerSettings::Mixer12Vector_ThrottleCurve1Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 195, _a);
}

// SIGNAL 196
void MixerSettings::mixer12VectorThrottleCurve2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 196, _a);
}

// SIGNAL 197
void MixerSettings::Mixer12Vector_ThrottleCurve2Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 197, _a);
}

// SIGNAL 198
void MixerSettings::mixer12VectorRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 198, _a);
}

// SIGNAL 199
void MixerSettings::Mixer12Vector_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 199, _a);
}

// SIGNAL 200
void MixerSettings::mixer12VectorPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 200, _a);
}

// SIGNAL 201
void MixerSettings::Mixer12Vector_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 201, _a);
}

// SIGNAL 202
void MixerSettings::mixer12VectorYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 202, _a);
}

// SIGNAL 203
void MixerSettings::Mixer12Vector_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 203, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
