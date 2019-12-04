/****************************************************************************
** Meta object code from reading C++ file 'attitudesettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../attitudesettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attitudesettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AttitudeSettingsConstants_t {
    QByteArrayData data[6];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttitudeSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttitudeSettingsConstants_t qt_meta_stringdata_AttitudeSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AttitudeSettingsConstants"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 21), // "ZeroDuringArmingCount"
QT_MOC_LITERAL(3, 53, 20), // "BiasCorrectGyroCount"
QT_MOC_LITERAL(4, 74, 31), // "InitialZeroWhenBoardSteadyCount"
QT_MOC_LITERAL(5, 106, 15) // "TrimFlightCount"

    },
    "AttitudeSettingsConstants\0Enum\0"
    "ZeroDuringArmingCount\0BiasCorrectGyroCount\0"
    "InitialZeroWhenBoardSteadyCount\0"
    "TrimFlightCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttitudeSettingsConstants[] = {

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
       2, uint(AttitudeSettingsConstants::ZeroDuringArmingCount),
       3, uint(AttitudeSettingsConstants::BiasCorrectGyroCount),
       4, uint(AttitudeSettingsConstants::InitialZeroWhenBoardSteadyCount),
       5, uint(AttitudeSettingsConstants::TrimFlightCount),

       0        // eod
};

void AttitudeSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AttitudeSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AttitudeSettingsConstants.data,
    qt_meta_data_AttitudeSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AttitudeSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttitudeSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttitudeSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AttitudeSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AttitudeSettings_ZeroDuringArming_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttitudeSettings_ZeroDuringArming_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttitudeSettings_ZeroDuringArming_t qt_meta_stringdata_AttitudeSettings_ZeroDuringArming = {
    {
QT_MOC_LITERAL(0, 0, 33), // "AttitudeSettings_ZeroDuringAr..."
QT_MOC_LITERAL(1, 34, 4), // "Enum"
QT_MOC_LITERAL(2, 39, 5), // "False"
QT_MOC_LITERAL(3, 45, 4) // "True"

    },
    "AttitudeSettings_ZeroDuringArming\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttitudeSettings_ZeroDuringArming[] = {

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
       2, uint(AttitudeSettings_ZeroDuringArming::False),
       3, uint(AttitudeSettings_ZeroDuringArming::True),

       0        // eod
};

void AttitudeSettings_ZeroDuringArming::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AttitudeSettings_ZeroDuringArming::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AttitudeSettings_ZeroDuringArming.data,
    qt_meta_data_AttitudeSettings_ZeroDuringArming,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AttitudeSettings_ZeroDuringArming::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttitudeSettings_ZeroDuringArming::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttitudeSettings_ZeroDuringArming.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AttitudeSettings_ZeroDuringArming::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AttitudeSettings_BiasCorrectGyro_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttitudeSettings_BiasCorrectGyro_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttitudeSettings_BiasCorrectGyro_t qt_meta_stringdata_AttitudeSettings_BiasCorrectGyro = {
    {
QT_MOC_LITERAL(0, 0, 32), // "AttitudeSettings_BiasCorrectGyro"
QT_MOC_LITERAL(1, 33, 4), // "Enum"
QT_MOC_LITERAL(2, 38, 5), // "False"
QT_MOC_LITERAL(3, 44, 4) // "True"

    },
    "AttitudeSettings_BiasCorrectGyro\0Enum\0"
    "False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttitudeSettings_BiasCorrectGyro[] = {

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
       2, uint(AttitudeSettings_BiasCorrectGyro::False),
       3, uint(AttitudeSettings_BiasCorrectGyro::True),

       0        // eod
};

void AttitudeSettings_BiasCorrectGyro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AttitudeSettings_BiasCorrectGyro::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AttitudeSettings_BiasCorrectGyro.data,
    qt_meta_data_AttitudeSettings_BiasCorrectGyro,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AttitudeSettings_BiasCorrectGyro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttitudeSettings_BiasCorrectGyro::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttitudeSettings_BiasCorrectGyro.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AttitudeSettings_BiasCorrectGyro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AttitudeSettings_InitialZeroWhenBoardSteady_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttitudeSettings_InitialZeroWhenBoardSteady_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttitudeSettings_InitialZeroWhenBoardSteady_t qt_meta_stringdata_AttitudeSettings_InitialZeroWhenBoardSteady = {
    {
QT_MOC_LITERAL(0, 0, 43), // "AttitudeSettings_InitialZeroW..."
QT_MOC_LITERAL(1, 44, 4), // "Enum"
QT_MOC_LITERAL(2, 49, 5), // "False"
QT_MOC_LITERAL(3, 55, 4) // "True"

    },
    "AttitudeSettings_InitialZeroWhenBoardSteady\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttitudeSettings_InitialZeroWhenBoardSteady[] = {

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
       2, uint(AttitudeSettings_InitialZeroWhenBoardSteady::False),
       3, uint(AttitudeSettings_InitialZeroWhenBoardSteady::True),

       0        // eod
};

void AttitudeSettings_InitialZeroWhenBoardSteady::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AttitudeSettings_InitialZeroWhenBoardSteady::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AttitudeSettings_InitialZeroWhenBoardSteady.data,
    qt_meta_data_AttitudeSettings_InitialZeroWhenBoardSteady,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AttitudeSettings_InitialZeroWhenBoardSteady::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttitudeSettings_InitialZeroWhenBoardSteady::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttitudeSettings_InitialZeroWhenBoardSteady.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AttitudeSettings_InitialZeroWhenBoardSteady::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AttitudeSettings_TrimFlight_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttitudeSettings_TrimFlight_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttitudeSettings_TrimFlight_t qt_meta_stringdata_AttitudeSettings_TrimFlight = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AttitudeSettings_TrimFlight"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 6), // "NORMAL"
QT_MOC_LITERAL(3, 40, 5), // "START"
QT_MOC_LITERAL(4, 46, 4) // "LOAD"

    },
    "AttitudeSettings_TrimFlight\0Enum\0"
    "NORMAL\0START\0LOAD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttitudeSettings_TrimFlight[] = {

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
       2, uint(AttitudeSettings_TrimFlight::NORMAL),
       3, uint(AttitudeSettings_TrimFlight::START),
       4, uint(AttitudeSettings_TrimFlight::LOAD),

       0        // eod
};

void AttitudeSettings_TrimFlight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AttitudeSettings_TrimFlight::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AttitudeSettings_TrimFlight.data,
    qt_meta_data_AttitudeSettings_TrimFlight,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AttitudeSettings_TrimFlight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttitudeSettings_TrimFlight::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttitudeSettings_TrimFlight.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AttitudeSettings_TrimFlight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AttitudeSettings_t {
    QByteArrayData data[120];
    char stringdata0[2260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttitudeSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttitudeSettings_t qt_meta_stringdata_AttitudeSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AttitudeSettings"
QT_MOC_LITERAL(1, 17, 20), // "boardRotationChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 5), // "value"
QT_MOC_LITERAL(5, 51, 20), // "BoardRotationChanged"
QT_MOC_LITERAL(6, 72, 24), // "boardRotationRollChanged"
QT_MOC_LITERAL(7, 97, 25), // "BoardRotation_RollChanged"
QT_MOC_LITERAL(8, 123, 25), // "boardRotationPitchChanged"
QT_MOC_LITERAL(9, 149, 26), // "BoardRotation_PitchChanged"
QT_MOC_LITERAL(10, 176, 23), // "boardRotationYawChanged"
QT_MOC_LITERAL(11, 200, 24), // "BoardRotation_YawChanged"
QT_MOC_LITERAL(12, 225, 21), // "boardLevelTrimChanged"
QT_MOC_LITERAL(13, 247, 21), // "BoardLevelTrimChanged"
QT_MOC_LITERAL(14, 269, 25), // "boardLevelTrimRollChanged"
QT_MOC_LITERAL(15, 295, 26), // "BoardLevelTrim_RollChanged"
QT_MOC_LITERAL(16, 322, 26), // "boardLevelTrimPitchChanged"
QT_MOC_LITERAL(17, 349, 27), // "BoardLevelTrim_PitchChanged"
QT_MOC_LITERAL(18, 377, 14), // "accelKpChanged"
QT_MOC_LITERAL(19, 392, 14), // "AccelKpChanged"
QT_MOC_LITERAL(20, 407, 14), // "accelKiChanged"
QT_MOC_LITERAL(21, 422, 14), // "AccelKiChanged"
QT_MOC_LITERAL(22, 437, 12), // "magKiChanged"
QT_MOC_LITERAL(23, 450, 12), // "MagKiChanged"
QT_MOC_LITERAL(24, 463, 12), // "magKpChanged"
QT_MOC_LITERAL(25, 476, 12), // "MagKpChanged"
QT_MOC_LITERAL(26, 489, 15), // "accelTauChanged"
QT_MOC_LITERAL(27, 505, 15), // "AccelTauChanged"
QT_MOC_LITERAL(28, 521, 18), // "yawBiasRateChanged"
QT_MOC_LITERAL(29, 540, 18), // "YawBiasRateChanged"
QT_MOC_LITERAL(30, 559, 29), // "boardSteadyMaxVarianceChanged"
QT_MOC_LITERAL(31, 589, 29), // "BoardSteadyMaxVarianceChanged"
QT_MOC_LITERAL(32, 619, 23), // "zeroDuringArmingChanged"
QT_MOC_LITERAL(33, 643, 39), // "AttitudeSettings_ZeroDuringAr..."
QT_MOC_LITERAL(34, 683, 23), // "ZeroDuringArmingChanged"
QT_MOC_LITERAL(35, 707, 22), // "biasCorrectGyroChanged"
QT_MOC_LITERAL(36, 730, 38), // "AttitudeSettings_BiasCorrectG..."
QT_MOC_LITERAL(37, 769, 22), // "BiasCorrectGyroChanged"
QT_MOC_LITERAL(38, 792, 33), // "initialZeroWhenBoardSteadyCha..."
QT_MOC_LITERAL(39, 826, 49), // "AttitudeSettings_InitialZeroW..."
QT_MOC_LITERAL(40, 876, 33), // "InitialZeroWhenBoardSteadyCha..."
QT_MOC_LITERAL(41, 910, 17), // "trimFlightChanged"
QT_MOC_LITERAL(42, 928, 33), // "AttitudeSettings_TrimFlight::..."
QT_MOC_LITERAL(43, 962, 17), // "TrimFlightChanged"
QT_MOC_LITERAL(44, 980, 16), // "setBoardRotation"
QT_MOC_LITERAL(45, 997, 20), // "setBoardRotationRoll"
QT_MOC_LITERAL(46, 1018, 21), // "setBoardRotation_Roll"
QT_MOC_LITERAL(47, 1040, 21), // "setBoardRotationPitch"
QT_MOC_LITERAL(48, 1062, 22), // "setBoardRotation_Pitch"
QT_MOC_LITERAL(49, 1085, 19), // "setBoardRotationYaw"
QT_MOC_LITERAL(50, 1105, 20), // "setBoardRotation_Yaw"
QT_MOC_LITERAL(51, 1126, 17), // "setBoardLevelTrim"
QT_MOC_LITERAL(52, 1144, 21), // "setBoardLevelTrimRoll"
QT_MOC_LITERAL(53, 1166, 22), // "setBoardLevelTrim_Roll"
QT_MOC_LITERAL(54, 1189, 22), // "setBoardLevelTrimPitch"
QT_MOC_LITERAL(55, 1212, 23), // "setBoardLevelTrim_Pitch"
QT_MOC_LITERAL(56, 1236, 10), // "setAccelKp"
QT_MOC_LITERAL(57, 1247, 10), // "setAccelKi"
QT_MOC_LITERAL(58, 1258, 8), // "setMagKi"
QT_MOC_LITERAL(59, 1267, 8), // "setMagKp"
QT_MOC_LITERAL(60, 1276, 11), // "setAccelTau"
QT_MOC_LITERAL(61, 1288, 14), // "setYawBiasRate"
QT_MOC_LITERAL(62, 1303, 25), // "setBoardSteadyMaxVariance"
QT_MOC_LITERAL(63, 1329, 19), // "setZeroDuringArming"
QT_MOC_LITERAL(64, 1349, 18), // "setBiasCorrectGyro"
QT_MOC_LITERAL(65, 1368, 29), // "setInitialZeroWhenBoardSteady"
QT_MOC_LITERAL(66, 1398, 13), // "setTrimFlight"
QT_MOC_LITERAL(67, 1412, 17), // "emitNotifications"
QT_MOC_LITERAL(68, 1430, 13), // "boardRotation"
QT_MOC_LITERAL(69, 1444, 16), // "getBoardRotation"
QT_MOC_LITERAL(70, 1461, 21), // "getBoardRotation_Roll"
QT_MOC_LITERAL(71, 1483, 22), // "getBoardRotation_Pitch"
QT_MOC_LITERAL(72, 1506, 20), // "getBoardRotation_Yaw"
QT_MOC_LITERAL(73, 1527, 14), // "boardLevelTrim"
QT_MOC_LITERAL(74, 1542, 17), // "getBoardLevelTrim"
QT_MOC_LITERAL(75, 1560, 22), // "getBoardLevelTrim_Roll"
QT_MOC_LITERAL(76, 1583, 23), // "getBoardLevelTrim_Pitch"
QT_MOC_LITERAL(77, 1607, 10), // "getAccelKp"
QT_MOC_LITERAL(78, 1618, 10), // "getAccelKi"
QT_MOC_LITERAL(79, 1629, 8), // "getMagKi"
QT_MOC_LITERAL(80, 1638, 8), // "getMagKp"
QT_MOC_LITERAL(81, 1647, 11), // "getAccelTau"
QT_MOC_LITERAL(82, 1659, 14), // "getYawBiasRate"
QT_MOC_LITERAL(83, 1674, 25), // "getBoardSteadyMaxVariance"
QT_MOC_LITERAL(84, 1700, 19), // "getZeroDuringArming"
QT_MOC_LITERAL(85, 1720, 18), // "getBiasCorrectGyro"
QT_MOC_LITERAL(86, 1739, 29), // "getInitialZeroWhenBoardSteady"
QT_MOC_LITERAL(87, 1769, 13), // "getTrimFlight"
QT_MOC_LITERAL(88, 1783, 17), // "boardRotationRoll"
QT_MOC_LITERAL(89, 1801, 18), // "boardRotationPitch"
QT_MOC_LITERAL(90, 1820, 16), // "boardRotationYaw"
QT_MOC_LITERAL(91, 1837, 18), // "boardLevelTrimRoll"
QT_MOC_LITERAL(92, 1856, 19), // "boardLevelTrimPitch"
QT_MOC_LITERAL(93, 1876, 7), // "accelKp"
QT_MOC_LITERAL(94, 1884, 7), // "accelKi"
QT_MOC_LITERAL(95, 1892, 5), // "magKi"
QT_MOC_LITERAL(96, 1898, 5), // "magKp"
QT_MOC_LITERAL(97, 1904, 8), // "accelTau"
QT_MOC_LITERAL(98, 1913, 11), // "yawBiasRate"
QT_MOC_LITERAL(99, 1925, 22), // "boardSteadyMaxVariance"
QT_MOC_LITERAL(100, 1948, 16), // "zeroDuringArming"
QT_MOC_LITERAL(101, 1965, 15), // "biasCorrectGyro"
QT_MOC_LITERAL(102, 1981, 26), // "initialZeroWhenBoardSteady"
QT_MOC_LITERAL(103, 2008, 10), // "trimFlight"
QT_MOC_LITERAL(104, 2019, 18), // "BoardRotation_Roll"
QT_MOC_LITERAL(105, 2038, 19), // "BoardRotation_Pitch"
QT_MOC_LITERAL(106, 2058, 17), // "BoardRotation_Yaw"
QT_MOC_LITERAL(107, 2076, 19), // "BoardLevelTrim_Roll"
QT_MOC_LITERAL(108, 2096, 20), // "BoardLevelTrim_Pitch"
QT_MOC_LITERAL(109, 2117, 7), // "AccelKp"
QT_MOC_LITERAL(110, 2125, 7), // "AccelKi"
QT_MOC_LITERAL(111, 2133, 5), // "MagKi"
QT_MOC_LITERAL(112, 2139, 5), // "MagKp"
QT_MOC_LITERAL(113, 2145, 8), // "AccelTau"
QT_MOC_LITERAL(114, 2154, 11), // "YawBiasRate"
QT_MOC_LITERAL(115, 2166, 22), // "BoardSteadyMaxVariance"
QT_MOC_LITERAL(116, 2189, 16), // "ZeroDuringArming"
QT_MOC_LITERAL(117, 2206, 15), // "BiasCorrectGyro"
QT_MOC_LITERAL(118, 2222, 26), // "InitialZeroWhenBoardSteady"
QT_MOC_LITERAL(119, 2249, 10) // "TrimFlight"

    },
    "AttitudeSettings\0boardRotationChanged\0"
    "\0index\0value\0BoardRotationChanged\0"
    "boardRotationRollChanged\0"
    "BoardRotation_RollChanged\0"
    "boardRotationPitchChanged\0"
    "BoardRotation_PitchChanged\0"
    "boardRotationYawChanged\0"
    "BoardRotation_YawChanged\0boardLevelTrimChanged\0"
    "BoardLevelTrimChanged\0boardLevelTrimRollChanged\0"
    "BoardLevelTrim_RollChanged\0"
    "boardLevelTrimPitchChanged\0"
    "BoardLevelTrim_PitchChanged\0accelKpChanged\0"
    "AccelKpChanged\0accelKiChanged\0"
    "AccelKiChanged\0magKiChanged\0MagKiChanged\0"
    "magKpChanged\0MagKpChanged\0accelTauChanged\0"
    "AccelTauChanged\0yawBiasRateChanged\0"
    "YawBiasRateChanged\0boardSteadyMaxVarianceChanged\0"
    "BoardSteadyMaxVarianceChanged\0"
    "zeroDuringArmingChanged\0"
    "AttitudeSettings_ZeroDuringArming::Enum\0"
    "ZeroDuringArmingChanged\0biasCorrectGyroChanged\0"
    "AttitudeSettings_BiasCorrectGyro::Enum\0"
    "BiasCorrectGyroChanged\0"
    "initialZeroWhenBoardSteadyChanged\0"
    "AttitudeSettings_InitialZeroWhenBoardSteady::Enum\0"
    "InitialZeroWhenBoardSteadyChanged\0"
    "trimFlightChanged\0AttitudeSettings_TrimFlight::Enum\0"
    "TrimFlightChanged\0setBoardRotation\0"
    "setBoardRotationRoll\0setBoardRotation_Roll\0"
    "setBoardRotationPitch\0setBoardRotation_Pitch\0"
    "setBoardRotationYaw\0setBoardRotation_Yaw\0"
    "setBoardLevelTrim\0setBoardLevelTrimRoll\0"
    "setBoardLevelTrim_Roll\0setBoardLevelTrimPitch\0"
    "setBoardLevelTrim_Pitch\0setAccelKp\0"
    "setAccelKi\0setMagKi\0setMagKp\0setAccelTau\0"
    "setYawBiasRate\0setBoardSteadyMaxVariance\0"
    "setZeroDuringArming\0setBiasCorrectGyro\0"
    "setInitialZeroWhenBoardSteady\0"
    "setTrimFlight\0emitNotifications\0"
    "boardRotation\0getBoardRotation\0"
    "getBoardRotation_Roll\0getBoardRotation_Pitch\0"
    "getBoardRotation_Yaw\0boardLevelTrim\0"
    "getBoardLevelTrim\0getBoardLevelTrim_Roll\0"
    "getBoardLevelTrim_Pitch\0getAccelKp\0"
    "getAccelKi\0getMagKi\0getMagKp\0getAccelTau\0"
    "getYawBiasRate\0getBoardSteadyMaxVariance\0"
    "getZeroDuringArming\0getBiasCorrectGyro\0"
    "getInitialZeroWhenBoardSteady\0"
    "getTrimFlight\0boardRotationRoll\0"
    "boardRotationPitch\0boardRotationYaw\0"
    "boardLevelTrimRoll\0boardLevelTrimPitch\0"
    "accelKp\0accelKi\0magKi\0magKp\0accelTau\0"
    "yawBiasRate\0boardSteadyMaxVariance\0"
    "zeroDuringArming\0biasCorrectGyro\0"
    "initialZeroWhenBoardSteady\0trimFlight\0"
    "BoardRotation_Roll\0BoardRotation_Pitch\0"
    "BoardRotation_Yaw\0BoardLevelTrim_Roll\0"
    "BoardLevelTrim_Pitch\0AccelKp\0AccelKi\0"
    "MagKi\0MagKp\0AccelTau\0YawBiasRate\0"
    "BoardSteadyMaxVariance\0ZeroDuringArming\0"
    "BiasCorrectGyro\0InitialZeroWhenBoardSteady\0"
    "TrimFlight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttitudeSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      84,   14, // methods
      32,  664, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      36,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  434,    2, 0x06 /* Public */,
       5,    2,  439,    2, 0x06 /* Public */,
       6,    1,  444,    2, 0x06 /* Public */,
       7,    1,  447,    2, 0x06 /* Public */,
       8,    1,  450,    2, 0x06 /* Public */,
       9,    1,  453,    2, 0x06 /* Public */,
      10,    1,  456,    2, 0x06 /* Public */,
      11,    1,  459,    2, 0x06 /* Public */,
      12,    2,  462,    2, 0x06 /* Public */,
      13,    2,  467,    2, 0x06 /* Public */,
      14,    1,  472,    2, 0x06 /* Public */,
      15,    1,  475,    2, 0x06 /* Public */,
      16,    1,  478,    2, 0x06 /* Public */,
      17,    1,  481,    2, 0x06 /* Public */,
      18,    1,  484,    2, 0x06 /* Public */,
      19,    1,  487,    2, 0x06 /* Public */,
      20,    1,  490,    2, 0x06 /* Public */,
      21,    1,  493,    2, 0x06 /* Public */,
      22,    1,  496,    2, 0x06 /* Public */,
      23,    1,  499,    2, 0x06 /* Public */,
      24,    1,  502,    2, 0x06 /* Public */,
      25,    1,  505,    2, 0x06 /* Public */,
      26,    1,  508,    2, 0x06 /* Public */,
      27,    1,  511,    2, 0x06 /* Public */,
      28,    1,  514,    2, 0x06 /* Public */,
      29,    1,  517,    2, 0x06 /* Public */,
      30,    1,  520,    2, 0x06 /* Public */,
      31,    1,  523,    2, 0x06 /* Public */,
      32,    1,  526,    2, 0x06 /* Public */,
      34,    1,  529,    2, 0x06 /* Public */,
      35,    1,  532,    2, 0x06 /* Public */,
      37,    1,  535,    2, 0x06 /* Public */,
      38,    1,  538,    2, 0x06 /* Public */,
      40,    1,  541,    2, 0x06 /* Public */,
      41,    1,  544,    2, 0x06 /* Public */,
      43,    1,  547,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      44,    2,  550,    2, 0x0a /* Public */,
      45,    1,  555,    2, 0x0a /* Public */,
      46,    1,  558,    2, 0x0a /* Public */,
      47,    1,  561,    2, 0x0a /* Public */,
      48,    1,  564,    2, 0x0a /* Public */,
      49,    1,  567,    2, 0x0a /* Public */,
      50,    1,  570,    2, 0x0a /* Public */,
      51,    2,  573,    2, 0x0a /* Public */,
      52,    1,  578,    2, 0x0a /* Public */,
      53,    1,  581,    2, 0x0a /* Public */,
      54,    1,  584,    2, 0x0a /* Public */,
      55,    1,  587,    2, 0x0a /* Public */,
      56,    1,  590,    2, 0x0a /* Public */,
      57,    1,  593,    2, 0x0a /* Public */,
      58,    1,  596,    2, 0x0a /* Public */,
      59,    1,  599,    2, 0x0a /* Public */,
      60,    1,  602,    2, 0x0a /* Public */,
      61,    1,  605,    2, 0x0a /* Public */,
      62,    1,  608,    2, 0x0a /* Public */,
      63,    1,  611,    2, 0x0a /* Public */,
      63,    1,  614,    2, 0x0a /* Public */,
      64,    1,  617,    2, 0x0a /* Public */,
      64,    1,  620,    2, 0x0a /* Public */,
      65,    1,  623,    2, 0x0a /* Public */,
      65,    1,  626,    2, 0x0a /* Public */,
      66,    1,  629,    2, 0x0a /* Public */,
      66,    1,  632,    2, 0x0a /* Public */,
      67,    0,  635,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      68,    1,  636,    2, 0x02 /* Public */,
      69,    1,  639,    2, 0x02 /* Public */,
      70,    0,  642,    2, 0x02 /* Public */,
      71,    0,  643,    2, 0x02 /* Public */,
      72,    0,  644,    2, 0x02 /* Public */,
      73,    1,  645,    2, 0x02 /* Public */,
      74,    1,  648,    2, 0x02 /* Public */,
      75,    0,  651,    2, 0x02 /* Public */,
      76,    0,  652,    2, 0x02 /* Public */,
      77,    0,  653,    2, 0x02 /* Public */,
      78,    0,  654,    2, 0x02 /* Public */,
      79,    0,  655,    2, 0x02 /* Public */,
      80,    0,  656,    2, 0x02 /* Public */,
      81,    0,  657,    2, 0x02 /* Public */,
      82,    0,  658,    2, 0x02 /* Public */,
      83,    0,  659,    2, 0x02 /* Public */,
      84,    0,  660,    2, 0x02 /* Public */,
      85,    0,  661,    2, 0x02 /* Public */,
      86,    0,  662,    2, 0x02 /* Public */,
      87,    0,  663,    2, 0x02 /* Public */,

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
    QMetaType::Void, 0x80000000 | 33,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 36,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 39,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 42,    4,
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
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, 0x80000000 | 33,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 36,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 39,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 42,    4,
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
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
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
     100, 0x80000000 | 33, 0x0049510b,
     101, 0x80000000 | 36, 0x0049510b,
     102, 0x80000000 | 39, 0x0049510b,
     103, 0x80000000 | 42, 0x0049510b,
     104, QMetaType::Float, 0x00495103,
     105, QMetaType::Float, 0x00495103,
     106, QMetaType::Float, 0x00495103,
     107, QMetaType::Float, 0x00495103,
     108, QMetaType::Float, 0x00495103,
     109, QMetaType::Float, 0x00495103,
     110, QMetaType::Float, 0x00495103,
     111, QMetaType::Float, 0x00495103,
     112, QMetaType::Float, 0x00495103,
     113, QMetaType::Float, 0x00495103,
     114, QMetaType::Float, 0x00495103,
     115, QMetaType::Float, 0x00495103,
     116, QMetaType::UChar, 0x00495103,
     117, QMetaType::UChar, 0x00495103,
     118, QMetaType::UChar, 0x00495103,
     119, QMetaType::UChar, 0x00495103,

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
      32,
      34,
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
      33,
      35,

       0        // eod
};

void AttitudeSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AttitudeSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->boardRotationChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->BoardRotationChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->boardRotationRollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->BoardRotation_RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->boardRotationPitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->BoardRotation_PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->boardRotationYawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->BoardRotation_YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->boardLevelTrimChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 9: _t->BoardLevelTrimChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->boardLevelTrimRollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->BoardLevelTrim_RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->boardLevelTrimPitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->BoardLevelTrim_PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->accelKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->AccelKpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->accelKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->AccelKiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->magKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->MagKiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->magKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->MagKpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->accelTauChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->AccelTauChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->yawBiasRateChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->YawBiasRateChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->boardSteadyMaxVarianceChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->BoardSteadyMaxVarianceChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->zeroDuringArmingChanged((*reinterpret_cast< const AttitudeSettings_ZeroDuringArming::Enum(*)>(_a[1]))); break;
        case 29: _t->ZeroDuringArmingChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->biasCorrectGyroChanged((*reinterpret_cast< const AttitudeSettings_BiasCorrectGyro::Enum(*)>(_a[1]))); break;
        case 31: _t->BiasCorrectGyroChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->initialZeroWhenBoardSteadyChanged((*reinterpret_cast< const AttitudeSettings_InitialZeroWhenBoardSteady::Enum(*)>(_a[1]))); break;
        case 33: _t->InitialZeroWhenBoardSteadyChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->trimFlightChanged((*reinterpret_cast< const AttitudeSettings_TrimFlight::Enum(*)>(_a[1]))); break;
        case 35: _t->TrimFlightChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->setBoardRotation((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 37: _t->setBoardRotationRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 38: _t->setBoardRotation_Roll((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->setBoardRotationPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 40: _t->setBoardRotation_Pitch((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 41: _t->setBoardRotationYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 42: _t->setBoardRotation_Yaw((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 43: _t->setBoardLevelTrim((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 44: _t->setBoardLevelTrimRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 45: _t->setBoardLevelTrim_Roll((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->setBoardLevelTrimPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->setBoardLevelTrim_Pitch((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->setAccelKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 49: _t->setAccelKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 50: _t->setMagKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 51: _t->setMagKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 52: _t->setAccelTau((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 53: _t->setYawBiasRate((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 54: _t->setBoardSteadyMaxVariance((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 55: _t->setZeroDuringArming((*reinterpret_cast< const AttitudeSettings_ZeroDuringArming::Enum(*)>(_a[1]))); break;
        case 56: _t->setZeroDuringArming((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 57: _t->setBiasCorrectGyro((*reinterpret_cast< const AttitudeSettings_BiasCorrectGyro::Enum(*)>(_a[1]))); break;
        case 58: _t->setBiasCorrectGyro((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 59: _t->setInitialZeroWhenBoardSteady((*reinterpret_cast< const AttitudeSettings_InitialZeroWhenBoardSteady::Enum(*)>(_a[1]))); break;
        case 60: _t->setInitialZeroWhenBoardSteady((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 61: _t->setTrimFlight((*reinterpret_cast< const AttitudeSettings_TrimFlight::Enum(*)>(_a[1]))); break;
        case 62: _t->setTrimFlight((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 63: _t->emitNotifications(); break;
        case 64: { float _r = _t->boardRotation((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 65: { float _r = _t->getBoardRotation((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 66: { float _r = _t->getBoardRotation_Roll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 67: { float _r = _t->getBoardRotation_Pitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 68: { float _r = _t->getBoardRotation_Yaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 69: { float _r = _t->boardLevelTrim((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 70: { float _r = _t->getBoardLevelTrim((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 71: { float _r = _t->getBoardLevelTrim_Roll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 72: { float _r = _t->getBoardLevelTrim_Pitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 73: { float _r = _t->getAccelKp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 74: { float _r = _t->getAccelKi();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 75: { float _r = _t->getMagKi();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 76: { float _r = _t->getMagKp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 77: { float _r = _t->getAccelTau();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 78: { float _r = _t->getYawBiasRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 79: { float _r = _t->getBoardSteadyMaxVariance();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 80: { quint8 _r = _t->getZeroDuringArming();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 81: { quint8 _r = _t->getBiasCorrectGyro();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 82: { quint8 _r = _t->getInitialZeroWhenBoardSteady();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 83: { quint8 _r = _t->getTrimFlight();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AttitudeSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::boardRotationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::BoardRotationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::boardRotationRollChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::BoardRotation_RollChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::boardRotationPitchChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::BoardRotation_PitchChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::boardRotationYawChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::BoardRotation_YawChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::boardLevelTrimChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::BoardLevelTrimChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::boardLevelTrimRollChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::BoardLevelTrim_RollChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::boardLevelTrimPitchChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::BoardLevelTrim_PitchChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::accelKpChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::AccelKpChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::accelKiChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::AccelKiChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::magKiChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::MagKiChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::magKpChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::MagKpChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::accelTauChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::AccelTauChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::yawBiasRateChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::YawBiasRateChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::boardSteadyMaxVarianceChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::BoardSteadyMaxVarianceChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const AttitudeSettings_ZeroDuringArming::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::zeroDuringArmingChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::ZeroDuringArmingChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const AttitudeSettings_BiasCorrectGyro::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::biasCorrectGyroChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::BiasCorrectGyroChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const AttitudeSettings_InitialZeroWhenBoardSteady::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::initialZeroWhenBoardSteadyChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::InitialZeroWhenBoardSteadyChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(const AttitudeSettings_TrimFlight::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::trimFlightChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (AttitudeSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeSettings::TrimFlightChanged)) {
                *result = 35;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AttitudeSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->boardRotationRoll(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->boardRotationPitch(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->boardRotationYaw(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->boardLevelTrimRoll(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->boardLevelTrimPitch(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->accelKp(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->accelKi(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->magKi(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->magKp(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->accelTau(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->yawBiasRate(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->boardSteadyMaxVariance(); break;
        case 12: *reinterpret_cast< AttitudeSettings_ZeroDuringArming::Enum*>(_v) = _t->zeroDuringArming(); break;
        case 13: *reinterpret_cast< AttitudeSettings_BiasCorrectGyro::Enum*>(_v) = _t->biasCorrectGyro(); break;
        case 14: *reinterpret_cast< AttitudeSettings_InitialZeroWhenBoardSteady::Enum*>(_v) = _t->initialZeroWhenBoardSteady(); break;
        case 15: *reinterpret_cast< AttitudeSettings_TrimFlight::Enum*>(_v) = _t->trimFlight(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getBoardRotation_Roll(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getBoardRotation_Pitch(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getBoardRotation_Yaw(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getBoardLevelTrim_Roll(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getBoardLevelTrim_Pitch(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getAccelKp(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getAccelKi(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getMagKi(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getMagKp(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->getAccelTau(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->getYawBiasRate(); break;
        case 27: *reinterpret_cast< float*>(_v) = _t->getBoardSteadyMaxVariance(); break;
        case 28: *reinterpret_cast< quint8*>(_v) = _t->getZeroDuringArming(); break;
        case 29: *reinterpret_cast< quint8*>(_v) = _t->getBiasCorrectGyro(); break;
        case 30: *reinterpret_cast< quint8*>(_v) = _t->getInitialZeroWhenBoardSteady(); break;
        case 31: *reinterpret_cast< quint8*>(_v) = _t->getTrimFlight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AttitudeSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBoardRotationRoll(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setBoardRotationPitch(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setBoardRotationYaw(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setBoardLevelTrimRoll(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setBoardLevelTrimPitch(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setAccelKp(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setAccelKi(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setMagKi(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setMagKp(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setAccelTau(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setYawBiasRate(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setBoardSteadyMaxVariance(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setZeroDuringArming(*reinterpret_cast< AttitudeSettings_ZeroDuringArming::Enum*>(_v)); break;
        case 13: _t->setBiasCorrectGyro(*reinterpret_cast< AttitudeSettings_BiasCorrectGyro::Enum*>(_v)); break;
        case 14: _t->setInitialZeroWhenBoardSteady(*reinterpret_cast< AttitudeSettings_InitialZeroWhenBoardSteady::Enum*>(_v)); break;
        case 15: _t->setTrimFlight(*reinterpret_cast< AttitudeSettings_TrimFlight::Enum*>(_v)); break;
        case 16: _t->setBoardRotation_Roll(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setBoardRotation_Pitch(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setBoardRotation_Yaw(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setBoardLevelTrim_Roll(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setBoardLevelTrim_Pitch(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setAccelKp(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setAccelKi(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setMagKi(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setMagKp(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setAccelTau(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setYawBiasRate(*reinterpret_cast< float*>(_v)); break;
        case 27: _t->setBoardSteadyMaxVariance(*reinterpret_cast< float*>(_v)); break;
        case 28: _t->setZeroDuringArming(*reinterpret_cast< quint8*>(_v)); break;
        case 29: _t->setBiasCorrectGyro(*reinterpret_cast< quint8*>(_v)); break;
        case 30: _t->setInitialZeroWhenBoardSteady(*reinterpret_cast< quint8*>(_v)); break;
        case 31: _t->setTrimFlight(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_AttitudeSettings[] = {
        &AttitudeSettings_ZeroDuringArming::staticMetaObject,
    &AttitudeSettings_BiasCorrectGyro::staticMetaObject,
    &AttitudeSettings_InitialZeroWhenBoardSteady::staticMetaObject,
    &AttitudeSettings_TrimFlight::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject AttitudeSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_AttitudeSettings.data,
    qt_meta_data_AttitudeSettings,
    qt_static_metacall,
    qt_meta_extradata_AttitudeSettings,
    nullptr
} };


const QMetaObject *AttitudeSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttitudeSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttitudeSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AttitudeSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 84)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 84;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 84)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 84;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 32;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AttitudeSettings::boardRotationChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AttitudeSettings::BoardRotationChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AttitudeSettings::boardRotationRollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AttitudeSettings::BoardRotation_RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AttitudeSettings::boardRotationPitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AttitudeSettings::BoardRotation_PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AttitudeSettings::boardRotationYawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AttitudeSettings::BoardRotation_YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AttitudeSettings::boardLevelTrimChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AttitudeSettings::BoardLevelTrimChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void AttitudeSettings::boardLevelTrimRollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void AttitudeSettings::BoardLevelTrim_RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void AttitudeSettings::boardLevelTrimPitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void AttitudeSettings::BoardLevelTrim_PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void AttitudeSettings::accelKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void AttitudeSettings::AccelKpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void AttitudeSettings::accelKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void AttitudeSettings::AccelKiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void AttitudeSettings::magKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void AttitudeSettings::MagKiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void AttitudeSettings::magKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void AttitudeSettings::MagKpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void AttitudeSettings::accelTauChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void AttitudeSettings::AccelTauChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void AttitudeSettings::yawBiasRateChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void AttitudeSettings::YawBiasRateChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void AttitudeSettings::boardSteadyMaxVarianceChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void AttitudeSettings::BoardSteadyMaxVarianceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void AttitudeSettings::zeroDuringArmingChanged(const AttitudeSettings_ZeroDuringArming::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void AttitudeSettings::ZeroDuringArmingChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void AttitudeSettings::biasCorrectGyroChanged(const AttitudeSettings_BiasCorrectGyro::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void AttitudeSettings::BiasCorrectGyroChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void AttitudeSettings::initialZeroWhenBoardSteadyChanged(const AttitudeSettings_InitialZeroWhenBoardSteady::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void AttitudeSettings::InitialZeroWhenBoardSteadyChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void AttitudeSettings::trimFlightChanged(const AttitudeSettings_TrimFlight::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void AttitudeSettings::TrimFlightChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
