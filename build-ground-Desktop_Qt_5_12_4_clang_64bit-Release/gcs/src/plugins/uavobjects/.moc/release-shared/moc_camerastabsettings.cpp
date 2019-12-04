/****************************************************************************
** Meta object code from reading C++ file 'camerastabsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../camerastabsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camerastabsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraStabSettingsConstants_t {
    QByteArrayData data[7];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraStabSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraStabSettingsConstants_t qt_meta_stringdata_CameraStabSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 27), // "CameraStabSettingsConstants"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 10), // "InputCount"
QT_MOC_LITERAL(3, 44, 22), // "StabilizationModeCount"
QT_MOC_LITERAL(4, 67, 15), // "GimbalTypeCount"
QT_MOC_LITERAL(5, 83, 23), // "Servo1PitchReverseCount"
QT_MOC_LITERAL(6, 107, 23) // "Servo2PitchReverseCount"

    },
    "CameraStabSettingsConstants\0Enum\0"
    "InputCount\0StabilizationModeCount\0"
    "GimbalTypeCount\0Servo1PitchReverseCount\0"
    "Servo2PitchReverseCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraStabSettingsConstants[] = {

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
       1,    1, 0x0,    5,   19,

 // enum data: key, value
       2, uint(CameraStabSettingsConstants::InputCount),
       3, uint(CameraStabSettingsConstants::StabilizationModeCount),
       4, uint(CameraStabSettingsConstants::GimbalTypeCount),
       5, uint(CameraStabSettingsConstants::Servo1PitchReverseCount),
       6, uint(CameraStabSettingsConstants::Servo2PitchReverseCount),

       0        // eod
};

void CameraStabSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraStabSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraStabSettingsConstants.data,
    qt_meta_data_CameraStabSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraStabSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraStabSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraStabSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraStabSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraStabSettings_Input_t {
    QByteArrayData data[9];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraStabSettings_Input_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraStabSettings_Input_t qt_meta_stringdata_CameraStabSettings_Input = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CameraStabSettings_Input"
QT_MOC_LITERAL(1, 25, 4), // "Enum"
QT_MOC_LITERAL(2, 30, 10), // "Accessory0"
QT_MOC_LITERAL(3, 41, 10), // "Accessory1"
QT_MOC_LITERAL(4, 52, 10), // "Accessory2"
QT_MOC_LITERAL(5, 63, 10), // "Accessory3"
QT_MOC_LITERAL(6, 74, 10), // "Accessory4"
QT_MOC_LITERAL(7, 85, 10), // "Accessory5"
QT_MOC_LITERAL(8, 96, 4) // "None"

    },
    "CameraStabSettings_Input\0Enum\0Accessory0\0"
    "Accessory1\0Accessory2\0Accessory3\0"
    "Accessory4\0Accessory5\0None"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraStabSettings_Input[] = {

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
       2, uint(CameraStabSettings_Input::Accessory0),
       3, uint(CameraStabSettings_Input::Accessory1),
       4, uint(CameraStabSettings_Input::Accessory2),
       5, uint(CameraStabSettings_Input::Accessory3),
       6, uint(CameraStabSettings_Input::Accessory4),
       7, uint(CameraStabSettings_Input::Accessory5),
       8, uint(CameraStabSettings_Input::None),

       0        // eod
};

void CameraStabSettings_Input::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraStabSettings_Input::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraStabSettings_Input.data,
    qt_meta_data_CameraStabSettings_Input,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraStabSettings_Input::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraStabSettings_Input::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraStabSettings_Input.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraStabSettings_Input::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraStabSettings_StabilizationMode_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraStabSettings_StabilizationMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraStabSettings_StabilizationMode_t qt_meta_stringdata_CameraStabSettings_StabilizationMode = {
    {
QT_MOC_LITERAL(0, 0, 36), // "CameraStabSettings_Stabilizat..."
QT_MOC_LITERAL(1, 37, 4), // "Enum"
QT_MOC_LITERAL(2, 42, 8), // "Attitude"
QT_MOC_LITERAL(3, 51, 8) // "AxisLock"

    },
    "CameraStabSettings_StabilizationMode\0"
    "Enum\0Attitude\0AxisLock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraStabSettings_StabilizationMode[] = {

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
       2, uint(CameraStabSettings_StabilizationMode::Attitude),
       3, uint(CameraStabSettings_StabilizationMode::AxisLock),

       0        // eod
};

void CameraStabSettings_StabilizationMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraStabSettings_StabilizationMode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraStabSettings_StabilizationMode.data,
    qt_meta_data_CameraStabSettings_StabilizationMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraStabSettings_StabilizationMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraStabSettings_StabilizationMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraStabSettings_StabilizationMode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraStabSettings_StabilizationMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraStabSettings_GimbalType_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraStabSettings_GimbalType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraStabSettings_GimbalType_t qt_meta_stringdata_CameraStabSettings_GimbalType = {
    {
QT_MOC_LITERAL(0, 0, 29), // "CameraStabSettings_GimbalType"
QT_MOC_LITERAL(1, 30, 4), // "Enum"
QT_MOC_LITERAL(2, 35, 7), // "Generic"
QT_MOC_LITERAL(3, 43, 12), // "YawRollPitch"
QT_MOC_LITERAL(4, 56, 12), // "YawPitchRoll"
QT_MOC_LITERAL(5, 69, 14) // "RollPitchMixed"

    },
    "CameraStabSettings_GimbalType\0Enum\0"
    "Generic\0YawRollPitch\0YawPitchRoll\0"
    "RollPitchMixed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraStabSettings_GimbalType[] = {

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
       2, uint(CameraStabSettings_GimbalType::Generic),
       3, uint(CameraStabSettings_GimbalType::YawRollPitch),
       4, uint(CameraStabSettings_GimbalType::YawPitchRoll),
       5, uint(CameraStabSettings_GimbalType::RollPitchMixed),

       0        // eod
};

void CameraStabSettings_GimbalType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraStabSettings_GimbalType::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraStabSettings_GimbalType.data,
    qt_meta_data_CameraStabSettings_GimbalType,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraStabSettings_GimbalType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraStabSettings_GimbalType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraStabSettings_GimbalType.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraStabSettings_GimbalType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraStabSettings_Servo1PitchReverse_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraStabSettings_Servo1PitchReverse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraStabSettings_Servo1PitchReverse_t qt_meta_stringdata_CameraStabSettings_Servo1PitchReverse = {
    {
QT_MOC_LITERAL(0, 0, 37), // "CameraStabSettings_Servo1Pitc..."
QT_MOC_LITERAL(1, 38, 4), // "Enum"
QT_MOC_LITERAL(2, 43, 5), // "False"
QT_MOC_LITERAL(3, 49, 4) // "True"

    },
    "CameraStabSettings_Servo1PitchReverse\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraStabSettings_Servo1PitchReverse[] = {

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
       2, uint(CameraStabSettings_Servo1PitchReverse::False),
       3, uint(CameraStabSettings_Servo1PitchReverse::True),

       0        // eod
};

void CameraStabSettings_Servo1PitchReverse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraStabSettings_Servo1PitchReverse::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraStabSettings_Servo1PitchReverse.data,
    qt_meta_data_CameraStabSettings_Servo1PitchReverse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraStabSettings_Servo1PitchReverse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraStabSettings_Servo1PitchReverse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraStabSettings_Servo1PitchReverse.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraStabSettings_Servo1PitchReverse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraStabSettings_Servo2PitchReverse_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraStabSettings_Servo2PitchReverse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraStabSettings_Servo2PitchReverse_t qt_meta_stringdata_CameraStabSettings_Servo2PitchReverse = {
    {
QT_MOC_LITERAL(0, 0, 37), // "CameraStabSettings_Servo2Pitc..."
QT_MOC_LITERAL(1, 38, 4), // "Enum"
QT_MOC_LITERAL(2, 43, 5), // "False"
QT_MOC_LITERAL(3, 49, 4) // "True"

    },
    "CameraStabSettings_Servo2PitchReverse\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraStabSettings_Servo2PitchReverse[] = {

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
       2, uint(CameraStabSettings_Servo2PitchReverse::False),
       3, uint(CameraStabSettings_Servo2PitchReverse::True),

       0        // eod
};

void CameraStabSettings_Servo2PitchReverse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraStabSettings_Servo2PitchReverse::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraStabSettings_Servo2PitchReverse.data,
    qt_meta_data_CameraStabSettings_Servo2PitchReverse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraStabSettings_Servo2PitchReverse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraStabSettings_Servo2PitchReverse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraStabSettings_Servo2PitchReverse.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraStabSettings_Servo2PitchReverse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraStabSettings_t {
    QByteArrayData data[274];
    char stringdata0[5109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraStabSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraStabSettings_t qt_meta_stringdata_CameraStabSettings = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CameraStabSettings"
QT_MOC_LITERAL(1, 19, 22), // "maxAxisLockRateChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "value"
QT_MOC_LITERAL(4, 49, 22), // "MaxAxisLockRateChanged"
QT_MOC_LITERAL(5, 72, 15), // "maxAccelChanged"
QT_MOC_LITERAL(6, 88, 15), // "MaxAccelChanged"
QT_MOC_LITERAL(7, 104, 12), // "inputChanged"
QT_MOC_LITERAL(8, 117, 5), // "index"
QT_MOC_LITERAL(9, 123, 30), // "CameraStabSettings_Input::Enum"
QT_MOC_LITERAL(10, 154, 12), // "InputChanged"
QT_MOC_LITERAL(11, 167, 16), // "inputRollChanged"
QT_MOC_LITERAL(12, 184, 17), // "Input_RollChanged"
QT_MOC_LITERAL(13, 202, 17), // "inputPitchChanged"
QT_MOC_LITERAL(14, 220, 18), // "Input_PitchChanged"
QT_MOC_LITERAL(15, 239, 15), // "inputYawChanged"
QT_MOC_LITERAL(16, 255, 16), // "Input_YawChanged"
QT_MOC_LITERAL(17, 272, 17), // "inputRangeChanged"
QT_MOC_LITERAL(18, 290, 17), // "InputRangeChanged"
QT_MOC_LITERAL(19, 308, 21), // "inputRangeRollChanged"
QT_MOC_LITERAL(20, 330, 22), // "InputRange_RollChanged"
QT_MOC_LITERAL(21, 353, 22), // "inputRangePitchChanged"
QT_MOC_LITERAL(22, 376, 23), // "InputRange_PitchChanged"
QT_MOC_LITERAL(23, 400, 20), // "inputRangeYawChanged"
QT_MOC_LITERAL(24, 421, 21), // "InputRange_YawChanged"
QT_MOC_LITERAL(25, 443, 16), // "inputRateChanged"
QT_MOC_LITERAL(26, 460, 16), // "InputRateChanged"
QT_MOC_LITERAL(27, 477, 20), // "inputRateRollChanged"
QT_MOC_LITERAL(28, 498, 21), // "InputRate_RollChanged"
QT_MOC_LITERAL(29, 520, 21), // "inputRatePitchChanged"
QT_MOC_LITERAL(30, 542, 22), // "InputRate_PitchChanged"
QT_MOC_LITERAL(31, 565, 19), // "inputRateYawChanged"
QT_MOC_LITERAL(32, 585, 20), // "InputRate_YawChanged"
QT_MOC_LITERAL(33, 606, 24), // "stabilizationModeChanged"
QT_MOC_LITERAL(34, 631, 42), // "CameraStabSettings_Stabilizat..."
QT_MOC_LITERAL(35, 674, 24), // "StabilizationModeChanged"
QT_MOC_LITERAL(36, 699, 28), // "stabilizationModeRollChanged"
QT_MOC_LITERAL(37, 728, 29), // "StabilizationMode_RollChanged"
QT_MOC_LITERAL(38, 758, 29), // "stabilizationModePitchChanged"
QT_MOC_LITERAL(39, 788, 30), // "StabilizationMode_PitchChanged"
QT_MOC_LITERAL(40, 819, 27), // "stabilizationModeYawChanged"
QT_MOC_LITERAL(41, 847, 28), // "StabilizationMode_YawChanged"
QT_MOC_LITERAL(42, 876, 18), // "outputRangeChanged"
QT_MOC_LITERAL(43, 895, 18), // "OutputRangeChanged"
QT_MOC_LITERAL(44, 914, 22), // "outputRangeRollChanged"
QT_MOC_LITERAL(45, 937, 23), // "OutputRange_RollChanged"
QT_MOC_LITERAL(46, 961, 23), // "outputRangePitchChanged"
QT_MOC_LITERAL(47, 985, 24), // "OutputRange_PitchChanged"
QT_MOC_LITERAL(48, 1010, 21), // "outputRangeYawChanged"
QT_MOC_LITERAL(49, 1032, 22), // "OutputRange_YawChanged"
QT_MOC_LITERAL(50, 1055, 19), // "responseTimeChanged"
QT_MOC_LITERAL(51, 1075, 19), // "ResponseTimeChanged"
QT_MOC_LITERAL(52, 1095, 23), // "responseTimeRollChanged"
QT_MOC_LITERAL(53, 1119, 24), // "ResponseTime_RollChanged"
QT_MOC_LITERAL(54, 1144, 24), // "responseTimePitchChanged"
QT_MOC_LITERAL(55, 1169, 25), // "ResponseTime_PitchChanged"
QT_MOC_LITERAL(56, 1195, 22), // "responseTimeYawChanged"
QT_MOC_LITERAL(57, 1218, 23), // "ResponseTime_YawChanged"
QT_MOC_LITERAL(58, 1242, 17), // "gimbalTypeChanged"
QT_MOC_LITERAL(59, 1260, 35), // "CameraStabSettings_GimbalType..."
QT_MOC_LITERAL(60, 1296, 17), // "GimbalTypeChanged"
QT_MOC_LITERAL(61, 1314, 18), // "feedForwardChanged"
QT_MOC_LITERAL(62, 1333, 18), // "FeedForwardChanged"
QT_MOC_LITERAL(63, 1352, 22), // "feedForwardRollChanged"
QT_MOC_LITERAL(64, 1375, 23), // "FeedForward_RollChanged"
QT_MOC_LITERAL(65, 1399, 23), // "feedForwardPitchChanged"
QT_MOC_LITERAL(66, 1423, 24), // "FeedForward_PitchChanged"
QT_MOC_LITERAL(67, 1448, 21), // "feedForwardYawChanged"
QT_MOC_LITERAL(68, 1470, 22), // "FeedForward_YawChanged"
QT_MOC_LITERAL(69, 1493, 16), // "accelTimeChanged"
QT_MOC_LITERAL(70, 1510, 16), // "AccelTimeChanged"
QT_MOC_LITERAL(71, 1527, 20), // "accelTimeRollChanged"
QT_MOC_LITERAL(72, 1548, 21), // "AccelTime_RollChanged"
QT_MOC_LITERAL(73, 1570, 21), // "accelTimePitchChanged"
QT_MOC_LITERAL(74, 1592, 22), // "AccelTime_PitchChanged"
QT_MOC_LITERAL(75, 1615, 19), // "accelTimeYawChanged"
QT_MOC_LITERAL(76, 1635, 20), // "AccelTime_YawChanged"
QT_MOC_LITERAL(77, 1656, 16), // "decelTimeChanged"
QT_MOC_LITERAL(78, 1673, 16), // "DecelTimeChanged"
QT_MOC_LITERAL(79, 1690, 20), // "decelTimeRollChanged"
QT_MOC_LITERAL(80, 1711, 21), // "DecelTime_RollChanged"
QT_MOC_LITERAL(81, 1733, 21), // "decelTimePitchChanged"
QT_MOC_LITERAL(82, 1755, 22), // "DecelTime_PitchChanged"
QT_MOC_LITERAL(83, 1778, 19), // "decelTimeYawChanged"
QT_MOC_LITERAL(84, 1798, 20), // "DecelTime_YawChanged"
QT_MOC_LITERAL(85, 1819, 25), // "servo1PitchReverseChanged"
QT_MOC_LITERAL(86, 1845, 43), // "CameraStabSettings_Servo1Pitc..."
QT_MOC_LITERAL(87, 1889, 25), // "Servo1PitchReverseChanged"
QT_MOC_LITERAL(88, 1915, 25), // "servo2PitchReverseChanged"
QT_MOC_LITERAL(89, 1941, 43), // "CameraStabSettings_Servo2Pitc..."
QT_MOC_LITERAL(90, 1985, 25), // "Servo2PitchReverseChanged"
QT_MOC_LITERAL(91, 2011, 18), // "setMaxAxisLockRate"
QT_MOC_LITERAL(92, 2030, 11), // "setMaxAccel"
QT_MOC_LITERAL(93, 2042, 8), // "setInput"
QT_MOC_LITERAL(94, 2051, 12), // "setInputRoll"
QT_MOC_LITERAL(95, 2064, 13), // "setInput_Roll"
QT_MOC_LITERAL(96, 2078, 13), // "setInputPitch"
QT_MOC_LITERAL(97, 2092, 14), // "setInput_Pitch"
QT_MOC_LITERAL(98, 2107, 11), // "setInputYaw"
QT_MOC_LITERAL(99, 2119, 12), // "setInput_Yaw"
QT_MOC_LITERAL(100, 2132, 13), // "setInputRange"
QT_MOC_LITERAL(101, 2146, 17), // "setInputRangeRoll"
QT_MOC_LITERAL(102, 2164, 18), // "setInputRange_Roll"
QT_MOC_LITERAL(103, 2183, 18), // "setInputRangePitch"
QT_MOC_LITERAL(104, 2202, 19), // "setInputRange_Pitch"
QT_MOC_LITERAL(105, 2222, 16), // "setInputRangeYaw"
QT_MOC_LITERAL(106, 2239, 17), // "setInputRange_Yaw"
QT_MOC_LITERAL(107, 2257, 12), // "setInputRate"
QT_MOC_LITERAL(108, 2270, 16), // "setInputRateRoll"
QT_MOC_LITERAL(109, 2287, 17), // "setInputRate_Roll"
QT_MOC_LITERAL(110, 2305, 17), // "setInputRatePitch"
QT_MOC_LITERAL(111, 2323, 18), // "setInputRate_Pitch"
QT_MOC_LITERAL(112, 2342, 15), // "setInputRateYaw"
QT_MOC_LITERAL(113, 2358, 16), // "setInputRate_Yaw"
QT_MOC_LITERAL(114, 2375, 20), // "setStabilizationMode"
QT_MOC_LITERAL(115, 2396, 24), // "setStabilizationModeRoll"
QT_MOC_LITERAL(116, 2421, 25), // "setStabilizationMode_Roll"
QT_MOC_LITERAL(117, 2447, 25), // "setStabilizationModePitch"
QT_MOC_LITERAL(118, 2473, 26), // "setStabilizationMode_Pitch"
QT_MOC_LITERAL(119, 2500, 23), // "setStabilizationModeYaw"
QT_MOC_LITERAL(120, 2524, 24), // "setStabilizationMode_Yaw"
QT_MOC_LITERAL(121, 2549, 14), // "setOutputRange"
QT_MOC_LITERAL(122, 2564, 18), // "setOutputRangeRoll"
QT_MOC_LITERAL(123, 2583, 19), // "setOutputRange_Roll"
QT_MOC_LITERAL(124, 2603, 19), // "setOutputRangePitch"
QT_MOC_LITERAL(125, 2623, 20), // "setOutputRange_Pitch"
QT_MOC_LITERAL(126, 2644, 17), // "setOutputRangeYaw"
QT_MOC_LITERAL(127, 2662, 18), // "setOutputRange_Yaw"
QT_MOC_LITERAL(128, 2681, 15), // "setResponseTime"
QT_MOC_LITERAL(129, 2697, 19), // "setResponseTimeRoll"
QT_MOC_LITERAL(130, 2717, 20), // "setResponseTime_Roll"
QT_MOC_LITERAL(131, 2738, 20), // "setResponseTimePitch"
QT_MOC_LITERAL(132, 2759, 21), // "setResponseTime_Pitch"
QT_MOC_LITERAL(133, 2781, 18), // "setResponseTimeYaw"
QT_MOC_LITERAL(134, 2800, 19), // "setResponseTime_Yaw"
QT_MOC_LITERAL(135, 2820, 13), // "setGimbalType"
QT_MOC_LITERAL(136, 2834, 14), // "setFeedForward"
QT_MOC_LITERAL(137, 2849, 18), // "setFeedForwardRoll"
QT_MOC_LITERAL(138, 2868, 19), // "setFeedForward_Roll"
QT_MOC_LITERAL(139, 2888, 19), // "setFeedForwardPitch"
QT_MOC_LITERAL(140, 2908, 20), // "setFeedForward_Pitch"
QT_MOC_LITERAL(141, 2929, 17), // "setFeedForwardYaw"
QT_MOC_LITERAL(142, 2947, 18), // "setFeedForward_Yaw"
QT_MOC_LITERAL(143, 2966, 12), // "setAccelTime"
QT_MOC_LITERAL(144, 2979, 16), // "setAccelTimeRoll"
QT_MOC_LITERAL(145, 2996, 17), // "setAccelTime_Roll"
QT_MOC_LITERAL(146, 3014, 17), // "setAccelTimePitch"
QT_MOC_LITERAL(147, 3032, 18), // "setAccelTime_Pitch"
QT_MOC_LITERAL(148, 3051, 15), // "setAccelTimeYaw"
QT_MOC_LITERAL(149, 3067, 16), // "setAccelTime_Yaw"
QT_MOC_LITERAL(150, 3084, 12), // "setDecelTime"
QT_MOC_LITERAL(151, 3097, 16), // "setDecelTimeRoll"
QT_MOC_LITERAL(152, 3114, 17), // "setDecelTime_Roll"
QT_MOC_LITERAL(153, 3132, 17), // "setDecelTimePitch"
QT_MOC_LITERAL(154, 3150, 18), // "setDecelTime_Pitch"
QT_MOC_LITERAL(155, 3169, 15), // "setDecelTimeYaw"
QT_MOC_LITERAL(156, 3185, 16), // "setDecelTime_Yaw"
QT_MOC_LITERAL(157, 3202, 21), // "setServo1PitchReverse"
QT_MOC_LITERAL(158, 3224, 21), // "setServo2PitchReverse"
QT_MOC_LITERAL(159, 3246, 17), // "emitNotifications"
QT_MOC_LITERAL(160, 3264, 18), // "getMaxAxisLockRate"
QT_MOC_LITERAL(161, 3283, 11), // "getMaxAccel"
QT_MOC_LITERAL(162, 3295, 5), // "input"
QT_MOC_LITERAL(163, 3301, 8), // "getInput"
QT_MOC_LITERAL(164, 3310, 13), // "getInput_Roll"
QT_MOC_LITERAL(165, 3324, 14), // "getInput_Pitch"
QT_MOC_LITERAL(166, 3339, 12), // "getInput_Yaw"
QT_MOC_LITERAL(167, 3352, 10), // "inputRange"
QT_MOC_LITERAL(168, 3363, 13), // "getInputRange"
QT_MOC_LITERAL(169, 3377, 18), // "getInputRange_Roll"
QT_MOC_LITERAL(170, 3396, 19), // "getInputRange_Pitch"
QT_MOC_LITERAL(171, 3416, 17), // "getInputRange_Yaw"
QT_MOC_LITERAL(172, 3434, 9), // "inputRate"
QT_MOC_LITERAL(173, 3444, 12), // "getInputRate"
QT_MOC_LITERAL(174, 3457, 17), // "getInputRate_Roll"
QT_MOC_LITERAL(175, 3475, 18), // "getInputRate_Pitch"
QT_MOC_LITERAL(176, 3494, 16), // "getInputRate_Yaw"
QT_MOC_LITERAL(177, 3511, 17), // "stabilizationMode"
QT_MOC_LITERAL(178, 3529, 20), // "getStabilizationMode"
QT_MOC_LITERAL(179, 3550, 25), // "getStabilizationMode_Roll"
QT_MOC_LITERAL(180, 3576, 26), // "getStabilizationMode_Pitch"
QT_MOC_LITERAL(181, 3603, 24), // "getStabilizationMode_Yaw"
QT_MOC_LITERAL(182, 3628, 11), // "outputRange"
QT_MOC_LITERAL(183, 3640, 14), // "getOutputRange"
QT_MOC_LITERAL(184, 3655, 19), // "getOutputRange_Roll"
QT_MOC_LITERAL(185, 3675, 20), // "getOutputRange_Pitch"
QT_MOC_LITERAL(186, 3696, 18), // "getOutputRange_Yaw"
QT_MOC_LITERAL(187, 3715, 12), // "responseTime"
QT_MOC_LITERAL(188, 3728, 15), // "getResponseTime"
QT_MOC_LITERAL(189, 3744, 20), // "getResponseTime_Roll"
QT_MOC_LITERAL(190, 3765, 21), // "getResponseTime_Pitch"
QT_MOC_LITERAL(191, 3787, 19), // "getResponseTime_Yaw"
QT_MOC_LITERAL(192, 3807, 13), // "getGimbalType"
QT_MOC_LITERAL(193, 3821, 11), // "feedForward"
QT_MOC_LITERAL(194, 3833, 14), // "getFeedForward"
QT_MOC_LITERAL(195, 3848, 19), // "getFeedForward_Roll"
QT_MOC_LITERAL(196, 3868, 20), // "getFeedForward_Pitch"
QT_MOC_LITERAL(197, 3889, 18), // "getFeedForward_Yaw"
QT_MOC_LITERAL(198, 3908, 9), // "accelTime"
QT_MOC_LITERAL(199, 3918, 12), // "getAccelTime"
QT_MOC_LITERAL(200, 3931, 17), // "getAccelTime_Roll"
QT_MOC_LITERAL(201, 3949, 18), // "getAccelTime_Pitch"
QT_MOC_LITERAL(202, 3968, 16), // "getAccelTime_Yaw"
QT_MOC_LITERAL(203, 3985, 9), // "decelTime"
QT_MOC_LITERAL(204, 3995, 12), // "getDecelTime"
QT_MOC_LITERAL(205, 4008, 17), // "getDecelTime_Roll"
QT_MOC_LITERAL(206, 4026, 18), // "getDecelTime_Pitch"
QT_MOC_LITERAL(207, 4045, 16), // "getDecelTime_Yaw"
QT_MOC_LITERAL(208, 4062, 21), // "getServo1PitchReverse"
QT_MOC_LITERAL(209, 4084, 21), // "getServo2PitchReverse"
QT_MOC_LITERAL(210, 4106, 15), // "maxAxisLockRate"
QT_MOC_LITERAL(211, 4122, 8), // "maxAccel"
QT_MOC_LITERAL(212, 4131, 9), // "inputRoll"
QT_MOC_LITERAL(213, 4141, 10), // "inputPitch"
QT_MOC_LITERAL(214, 4152, 8), // "inputYaw"
QT_MOC_LITERAL(215, 4161, 14), // "inputRangeRoll"
QT_MOC_LITERAL(216, 4176, 15), // "inputRangePitch"
QT_MOC_LITERAL(217, 4192, 13), // "inputRangeYaw"
QT_MOC_LITERAL(218, 4206, 13), // "inputRateRoll"
QT_MOC_LITERAL(219, 4220, 14), // "inputRatePitch"
QT_MOC_LITERAL(220, 4235, 12), // "inputRateYaw"
QT_MOC_LITERAL(221, 4248, 21), // "stabilizationModeRoll"
QT_MOC_LITERAL(222, 4270, 22), // "stabilizationModePitch"
QT_MOC_LITERAL(223, 4293, 20), // "stabilizationModeYaw"
QT_MOC_LITERAL(224, 4314, 15), // "outputRangeRoll"
QT_MOC_LITERAL(225, 4330, 16), // "outputRangePitch"
QT_MOC_LITERAL(226, 4347, 14), // "outputRangeYaw"
QT_MOC_LITERAL(227, 4362, 16), // "responseTimeRoll"
QT_MOC_LITERAL(228, 4379, 17), // "responseTimePitch"
QT_MOC_LITERAL(229, 4397, 15), // "responseTimeYaw"
QT_MOC_LITERAL(230, 4413, 10), // "gimbalType"
QT_MOC_LITERAL(231, 4424, 15), // "feedForwardRoll"
QT_MOC_LITERAL(232, 4440, 16), // "feedForwardPitch"
QT_MOC_LITERAL(233, 4457, 14), // "feedForwardYaw"
QT_MOC_LITERAL(234, 4472, 13), // "accelTimeRoll"
QT_MOC_LITERAL(235, 4486, 14), // "accelTimePitch"
QT_MOC_LITERAL(236, 4501, 12), // "accelTimeYaw"
QT_MOC_LITERAL(237, 4514, 13), // "decelTimeRoll"
QT_MOC_LITERAL(238, 4528, 14), // "decelTimePitch"
QT_MOC_LITERAL(239, 4543, 12), // "decelTimeYaw"
QT_MOC_LITERAL(240, 4556, 18), // "servo1PitchReverse"
QT_MOC_LITERAL(241, 4575, 18), // "servo2PitchReverse"
QT_MOC_LITERAL(242, 4594, 15), // "MaxAxisLockRate"
QT_MOC_LITERAL(243, 4610, 8), // "MaxAccel"
QT_MOC_LITERAL(244, 4619, 10), // "Input_Roll"
QT_MOC_LITERAL(245, 4630, 11), // "Input_Pitch"
QT_MOC_LITERAL(246, 4642, 9), // "Input_Yaw"
QT_MOC_LITERAL(247, 4652, 15), // "InputRange_Roll"
QT_MOC_LITERAL(248, 4668, 16), // "InputRange_Pitch"
QT_MOC_LITERAL(249, 4685, 14), // "InputRange_Yaw"
QT_MOC_LITERAL(250, 4700, 14), // "InputRate_Roll"
QT_MOC_LITERAL(251, 4715, 15), // "InputRate_Pitch"
QT_MOC_LITERAL(252, 4731, 13), // "InputRate_Yaw"
QT_MOC_LITERAL(253, 4745, 22), // "StabilizationMode_Roll"
QT_MOC_LITERAL(254, 4768, 23), // "StabilizationMode_Pitch"
QT_MOC_LITERAL(255, 4792, 21), // "StabilizationMode_Yaw"
QT_MOC_LITERAL(256, 4814, 16), // "OutputRange_Roll"
QT_MOC_LITERAL(257, 4831, 17), // "OutputRange_Pitch"
QT_MOC_LITERAL(258, 4849, 15), // "OutputRange_Yaw"
QT_MOC_LITERAL(259, 4865, 17), // "ResponseTime_Roll"
QT_MOC_LITERAL(260, 4883, 18), // "ResponseTime_Pitch"
QT_MOC_LITERAL(261, 4902, 16), // "ResponseTime_Yaw"
QT_MOC_LITERAL(262, 4919, 10), // "GimbalType"
QT_MOC_LITERAL(263, 4930, 16), // "FeedForward_Roll"
QT_MOC_LITERAL(264, 4947, 17), // "FeedForward_Pitch"
QT_MOC_LITERAL(265, 4965, 15), // "FeedForward_Yaw"
QT_MOC_LITERAL(266, 4981, 14), // "AccelTime_Roll"
QT_MOC_LITERAL(267, 4996, 15), // "AccelTime_Pitch"
QT_MOC_LITERAL(268, 5012, 13), // "AccelTime_Yaw"
QT_MOC_LITERAL(269, 5026, 14), // "DecelTime_Roll"
QT_MOC_LITERAL(270, 5041, 15), // "DecelTime_Pitch"
QT_MOC_LITERAL(271, 5057, 13), // "DecelTime_Yaw"
QT_MOC_LITERAL(272, 5071, 18), // "Servo1PitchReverse"
QT_MOC_LITERAL(273, 5090, 18) // "Servo2PitchReverse"

    },
    "CameraStabSettings\0maxAxisLockRateChanged\0"
    "\0value\0MaxAxisLockRateChanged\0"
    "maxAccelChanged\0MaxAccelChanged\0"
    "inputChanged\0index\0CameraStabSettings_Input::Enum\0"
    "InputChanged\0inputRollChanged\0"
    "Input_RollChanged\0inputPitchChanged\0"
    "Input_PitchChanged\0inputYawChanged\0"
    "Input_YawChanged\0inputRangeChanged\0"
    "InputRangeChanged\0inputRangeRollChanged\0"
    "InputRange_RollChanged\0inputRangePitchChanged\0"
    "InputRange_PitchChanged\0inputRangeYawChanged\0"
    "InputRange_YawChanged\0inputRateChanged\0"
    "InputRateChanged\0inputRateRollChanged\0"
    "InputRate_RollChanged\0inputRatePitchChanged\0"
    "InputRate_PitchChanged\0inputRateYawChanged\0"
    "InputRate_YawChanged\0stabilizationModeChanged\0"
    "CameraStabSettings_StabilizationMode::Enum\0"
    "StabilizationModeChanged\0"
    "stabilizationModeRollChanged\0"
    "StabilizationMode_RollChanged\0"
    "stabilizationModePitchChanged\0"
    "StabilizationMode_PitchChanged\0"
    "stabilizationModeYawChanged\0"
    "StabilizationMode_YawChanged\0"
    "outputRangeChanged\0OutputRangeChanged\0"
    "outputRangeRollChanged\0OutputRange_RollChanged\0"
    "outputRangePitchChanged\0"
    "OutputRange_PitchChanged\0outputRangeYawChanged\0"
    "OutputRange_YawChanged\0responseTimeChanged\0"
    "ResponseTimeChanged\0responseTimeRollChanged\0"
    "ResponseTime_RollChanged\0"
    "responseTimePitchChanged\0"
    "ResponseTime_PitchChanged\0"
    "responseTimeYawChanged\0ResponseTime_YawChanged\0"
    "gimbalTypeChanged\0CameraStabSettings_GimbalType::Enum\0"
    "GimbalTypeChanged\0feedForwardChanged\0"
    "FeedForwardChanged\0feedForwardRollChanged\0"
    "FeedForward_RollChanged\0feedForwardPitchChanged\0"
    "FeedForward_PitchChanged\0feedForwardYawChanged\0"
    "FeedForward_YawChanged\0accelTimeChanged\0"
    "AccelTimeChanged\0accelTimeRollChanged\0"
    "AccelTime_RollChanged\0accelTimePitchChanged\0"
    "AccelTime_PitchChanged\0accelTimeYawChanged\0"
    "AccelTime_YawChanged\0decelTimeChanged\0"
    "DecelTimeChanged\0decelTimeRollChanged\0"
    "DecelTime_RollChanged\0decelTimePitchChanged\0"
    "DecelTime_PitchChanged\0decelTimeYawChanged\0"
    "DecelTime_YawChanged\0servo1PitchReverseChanged\0"
    "CameraStabSettings_Servo1PitchReverse::Enum\0"
    "Servo1PitchReverseChanged\0"
    "servo2PitchReverseChanged\0"
    "CameraStabSettings_Servo2PitchReverse::Enum\0"
    "Servo2PitchReverseChanged\0setMaxAxisLockRate\0"
    "setMaxAccel\0setInput\0setInputRoll\0"
    "setInput_Roll\0setInputPitch\0setInput_Pitch\0"
    "setInputYaw\0setInput_Yaw\0setInputRange\0"
    "setInputRangeRoll\0setInputRange_Roll\0"
    "setInputRangePitch\0setInputRange_Pitch\0"
    "setInputRangeYaw\0setInputRange_Yaw\0"
    "setInputRate\0setInputRateRoll\0"
    "setInputRate_Roll\0setInputRatePitch\0"
    "setInputRate_Pitch\0setInputRateYaw\0"
    "setInputRate_Yaw\0setStabilizationMode\0"
    "setStabilizationModeRoll\0"
    "setStabilizationMode_Roll\0"
    "setStabilizationModePitch\0"
    "setStabilizationMode_Pitch\0"
    "setStabilizationModeYaw\0"
    "setStabilizationMode_Yaw\0setOutputRange\0"
    "setOutputRangeRoll\0setOutputRange_Roll\0"
    "setOutputRangePitch\0setOutputRange_Pitch\0"
    "setOutputRangeYaw\0setOutputRange_Yaw\0"
    "setResponseTime\0setResponseTimeRoll\0"
    "setResponseTime_Roll\0setResponseTimePitch\0"
    "setResponseTime_Pitch\0setResponseTimeYaw\0"
    "setResponseTime_Yaw\0setGimbalType\0"
    "setFeedForward\0setFeedForwardRoll\0"
    "setFeedForward_Roll\0setFeedForwardPitch\0"
    "setFeedForward_Pitch\0setFeedForwardYaw\0"
    "setFeedForward_Yaw\0setAccelTime\0"
    "setAccelTimeRoll\0setAccelTime_Roll\0"
    "setAccelTimePitch\0setAccelTime_Pitch\0"
    "setAccelTimeYaw\0setAccelTime_Yaw\0"
    "setDecelTime\0setDecelTimeRoll\0"
    "setDecelTime_Roll\0setDecelTimePitch\0"
    "setDecelTime_Pitch\0setDecelTimeYaw\0"
    "setDecelTime_Yaw\0setServo1PitchReverse\0"
    "setServo2PitchReverse\0emitNotifications\0"
    "getMaxAxisLockRate\0getMaxAccel\0input\0"
    "getInput\0getInput_Roll\0getInput_Pitch\0"
    "getInput_Yaw\0inputRange\0getInputRange\0"
    "getInputRange_Roll\0getInputRange_Pitch\0"
    "getInputRange_Yaw\0inputRate\0getInputRate\0"
    "getInputRate_Roll\0getInputRate_Pitch\0"
    "getInputRate_Yaw\0stabilizationMode\0"
    "getStabilizationMode\0getStabilizationMode_Roll\0"
    "getStabilizationMode_Pitch\0"
    "getStabilizationMode_Yaw\0outputRange\0"
    "getOutputRange\0getOutputRange_Roll\0"
    "getOutputRange_Pitch\0getOutputRange_Yaw\0"
    "responseTime\0getResponseTime\0"
    "getResponseTime_Roll\0getResponseTime_Pitch\0"
    "getResponseTime_Yaw\0getGimbalType\0"
    "feedForward\0getFeedForward\0"
    "getFeedForward_Roll\0getFeedForward_Pitch\0"
    "getFeedForward_Yaw\0accelTime\0getAccelTime\0"
    "getAccelTime_Roll\0getAccelTime_Pitch\0"
    "getAccelTime_Yaw\0decelTime\0getDecelTime\0"
    "getDecelTime_Roll\0getDecelTime_Pitch\0"
    "getDecelTime_Yaw\0getServo1PitchReverse\0"
    "getServo2PitchReverse\0maxAxisLockRate\0"
    "maxAccel\0inputRoll\0inputPitch\0inputYaw\0"
    "inputRangeRoll\0inputRangePitch\0"
    "inputRangeYaw\0inputRateRoll\0inputRatePitch\0"
    "inputRateYaw\0stabilizationModeRoll\0"
    "stabilizationModePitch\0stabilizationModeYaw\0"
    "outputRangeRoll\0outputRangePitch\0"
    "outputRangeYaw\0responseTimeRoll\0"
    "responseTimePitch\0responseTimeYaw\0"
    "gimbalType\0feedForwardRoll\0feedForwardPitch\0"
    "feedForwardYaw\0accelTimeRoll\0"
    "accelTimePitch\0accelTimeYaw\0decelTimeRoll\0"
    "decelTimePitch\0decelTimeYaw\0"
    "servo1PitchReverse\0servo2PitchReverse\0"
    "MaxAxisLockRate\0MaxAccel\0Input_Roll\0"
    "Input_Pitch\0Input_Yaw\0InputRange_Roll\0"
    "InputRange_Pitch\0InputRange_Yaw\0"
    "InputRate_Roll\0InputRate_Pitch\0"
    "InputRate_Yaw\0StabilizationMode_Roll\0"
    "StabilizationMode_Pitch\0StabilizationMode_Yaw\0"
    "OutputRange_Roll\0OutputRange_Pitch\0"
    "OutputRange_Yaw\0ResponseTime_Roll\0"
    "ResponseTime_Pitch\0ResponseTime_Yaw\0"
    "GimbalType\0FeedForward_Roll\0"
    "FeedForward_Pitch\0FeedForward_Yaw\0"
    "AccelTime_Roll\0AccelTime_Pitch\0"
    "AccelTime_Yaw\0DecelTime_Roll\0"
    "DecelTime_Pitch\0DecelTime_Yaw\0"
    "Servo1PitchReverse\0Servo2PitchReverse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraStabSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     213,   14, // methods
      64, 1724, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      82,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1, 1079,    2, 0x06 /* Public */,
       4,    1, 1082,    2, 0x06 /* Public */,
       5,    1, 1085,    2, 0x06 /* Public */,
       6,    1, 1088,    2, 0x06 /* Public */,
       7,    2, 1091,    2, 0x06 /* Public */,
      10,    2, 1096,    2, 0x06 /* Public */,
      11,    1, 1101,    2, 0x06 /* Public */,
      12,    1, 1104,    2, 0x06 /* Public */,
      13,    1, 1107,    2, 0x06 /* Public */,
      14,    1, 1110,    2, 0x06 /* Public */,
      15,    1, 1113,    2, 0x06 /* Public */,
      16,    1, 1116,    2, 0x06 /* Public */,
      17,    2, 1119,    2, 0x06 /* Public */,
      18,    2, 1124,    2, 0x06 /* Public */,
      19,    1, 1129,    2, 0x06 /* Public */,
      20,    1, 1132,    2, 0x06 /* Public */,
      21,    1, 1135,    2, 0x06 /* Public */,
      22,    1, 1138,    2, 0x06 /* Public */,
      23,    1, 1141,    2, 0x06 /* Public */,
      24,    1, 1144,    2, 0x06 /* Public */,
      25,    2, 1147,    2, 0x06 /* Public */,
      26,    2, 1152,    2, 0x06 /* Public */,
      27,    1, 1157,    2, 0x06 /* Public */,
      28,    1, 1160,    2, 0x06 /* Public */,
      29,    1, 1163,    2, 0x06 /* Public */,
      30,    1, 1166,    2, 0x06 /* Public */,
      31,    1, 1169,    2, 0x06 /* Public */,
      32,    1, 1172,    2, 0x06 /* Public */,
      33,    2, 1175,    2, 0x06 /* Public */,
      35,    2, 1180,    2, 0x06 /* Public */,
      36,    1, 1185,    2, 0x06 /* Public */,
      37,    1, 1188,    2, 0x06 /* Public */,
      38,    1, 1191,    2, 0x06 /* Public */,
      39,    1, 1194,    2, 0x06 /* Public */,
      40,    1, 1197,    2, 0x06 /* Public */,
      41,    1, 1200,    2, 0x06 /* Public */,
      42,    2, 1203,    2, 0x06 /* Public */,
      43,    2, 1208,    2, 0x06 /* Public */,
      44,    1, 1213,    2, 0x06 /* Public */,
      45,    1, 1216,    2, 0x06 /* Public */,
      46,    1, 1219,    2, 0x06 /* Public */,
      47,    1, 1222,    2, 0x06 /* Public */,
      48,    1, 1225,    2, 0x06 /* Public */,
      49,    1, 1228,    2, 0x06 /* Public */,
      50,    2, 1231,    2, 0x06 /* Public */,
      51,    2, 1236,    2, 0x06 /* Public */,
      52,    1, 1241,    2, 0x06 /* Public */,
      53,    1, 1244,    2, 0x06 /* Public */,
      54,    1, 1247,    2, 0x06 /* Public */,
      55,    1, 1250,    2, 0x06 /* Public */,
      56,    1, 1253,    2, 0x06 /* Public */,
      57,    1, 1256,    2, 0x06 /* Public */,
      58,    1, 1259,    2, 0x06 /* Public */,
      60,    1, 1262,    2, 0x06 /* Public */,
      61,    2, 1265,    2, 0x06 /* Public */,
      62,    2, 1270,    2, 0x06 /* Public */,
      63,    1, 1275,    2, 0x06 /* Public */,
      64,    1, 1278,    2, 0x06 /* Public */,
      65,    1, 1281,    2, 0x06 /* Public */,
      66,    1, 1284,    2, 0x06 /* Public */,
      67,    1, 1287,    2, 0x06 /* Public */,
      68,    1, 1290,    2, 0x06 /* Public */,
      69,    2, 1293,    2, 0x06 /* Public */,
      70,    2, 1298,    2, 0x06 /* Public */,
      71,    1, 1303,    2, 0x06 /* Public */,
      72,    1, 1306,    2, 0x06 /* Public */,
      73,    1, 1309,    2, 0x06 /* Public */,
      74,    1, 1312,    2, 0x06 /* Public */,
      75,    1, 1315,    2, 0x06 /* Public */,
      76,    1, 1318,    2, 0x06 /* Public */,
      77,    2, 1321,    2, 0x06 /* Public */,
      78,    2, 1326,    2, 0x06 /* Public */,
      79,    1, 1331,    2, 0x06 /* Public */,
      80,    1, 1334,    2, 0x06 /* Public */,
      81,    1, 1337,    2, 0x06 /* Public */,
      82,    1, 1340,    2, 0x06 /* Public */,
      83,    1, 1343,    2, 0x06 /* Public */,
      84,    1, 1346,    2, 0x06 /* Public */,
      85,    1, 1349,    2, 0x06 /* Public */,
      87,    1, 1352,    2, 0x06 /* Public */,
      88,    1, 1355,    2, 0x06 /* Public */,
      90,    1, 1358,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      91,    1, 1361,    2, 0x0a /* Public */,
      92,    1, 1364,    2, 0x0a /* Public */,
      93,    2, 1367,    2, 0x0a /* Public */,
      93,    2, 1372,    2, 0x0a /* Public */,
      94,    1, 1377,    2, 0x0a /* Public */,
      95,    1, 1380,    2, 0x0a /* Public */,
      96,    1, 1383,    2, 0x0a /* Public */,
      97,    1, 1386,    2, 0x0a /* Public */,
      98,    1, 1389,    2, 0x0a /* Public */,
      99,    1, 1392,    2, 0x0a /* Public */,
     100,    2, 1395,    2, 0x0a /* Public */,
     100,    2, 1400,    2, 0x0a /* Public */,
     101,    1, 1405,    2, 0x0a /* Public */,
     102,    1, 1408,    2, 0x0a /* Public */,
     103,    1, 1411,    2, 0x0a /* Public */,
     104,    1, 1414,    2, 0x0a /* Public */,
     105,    1, 1417,    2, 0x0a /* Public */,
     106,    1, 1420,    2, 0x0a /* Public */,
     107,    2, 1423,    2, 0x0a /* Public */,
     107,    2, 1428,    2, 0x0a /* Public */,
     108,    1, 1433,    2, 0x0a /* Public */,
     109,    1, 1436,    2, 0x0a /* Public */,
     110,    1, 1439,    2, 0x0a /* Public */,
     111,    1, 1442,    2, 0x0a /* Public */,
     112,    1, 1445,    2, 0x0a /* Public */,
     113,    1, 1448,    2, 0x0a /* Public */,
     114,    2, 1451,    2, 0x0a /* Public */,
     114,    2, 1456,    2, 0x0a /* Public */,
     115,    1, 1461,    2, 0x0a /* Public */,
     116,    1, 1464,    2, 0x0a /* Public */,
     117,    1, 1467,    2, 0x0a /* Public */,
     118,    1, 1470,    2, 0x0a /* Public */,
     119,    1, 1473,    2, 0x0a /* Public */,
     120,    1, 1476,    2, 0x0a /* Public */,
     121,    2, 1479,    2, 0x0a /* Public */,
     121,    2, 1484,    2, 0x0a /* Public */,
     122,    1, 1489,    2, 0x0a /* Public */,
     123,    1, 1492,    2, 0x0a /* Public */,
     124,    1, 1495,    2, 0x0a /* Public */,
     125,    1, 1498,    2, 0x0a /* Public */,
     126,    1, 1501,    2, 0x0a /* Public */,
     127,    1, 1504,    2, 0x0a /* Public */,
     128,    2, 1507,    2, 0x0a /* Public */,
     128,    2, 1512,    2, 0x0a /* Public */,
     129,    1, 1517,    2, 0x0a /* Public */,
     130,    1, 1520,    2, 0x0a /* Public */,
     131,    1, 1523,    2, 0x0a /* Public */,
     132,    1, 1526,    2, 0x0a /* Public */,
     133,    1, 1529,    2, 0x0a /* Public */,
     134,    1, 1532,    2, 0x0a /* Public */,
     135,    1, 1535,    2, 0x0a /* Public */,
     135,    1, 1538,    2, 0x0a /* Public */,
     136,    2, 1541,    2, 0x0a /* Public */,
     136,    2, 1546,    2, 0x0a /* Public */,
     137,    1, 1551,    2, 0x0a /* Public */,
     138,    1, 1554,    2, 0x0a /* Public */,
     139,    1, 1557,    2, 0x0a /* Public */,
     140,    1, 1560,    2, 0x0a /* Public */,
     141,    1, 1563,    2, 0x0a /* Public */,
     142,    1, 1566,    2, 0x0a /* Public */,
     143,    2, 1569,    2, 0x0a /* Public */,
     143,    2, 1574,    2, 0x0a /* Public */,
     144,    1, 1579,    2, 0x0a /* Public */,
     145,    1, 1582,    2, 0x0a /* Public */,
     146,    1, 1585,    2, 0x0a /* Public */,
     147,    1, 1588,    2, 0x0a /* Public */,
     148,    1, 1591,    2, 0x0a /* Public */,
     149,    1, 1594,    2, 0x0a /* Public */,
     150,    2, 1597,    2, 0x0a /* Public */,
     150,    2, 1602,    2, 0x0a /* Public */,
     151,    1, 1607,    2, 0x0a /* Public */,
     152,    1, 1610,    2, 0x0a /* Public */,
     153,    1, 1613,    2, 0x0a /* Public */,
     154,    1, 1616,    2, 0x0a /* Public */,
     155,    1, 1619,    2, 0x0a /* Public */,
     156,    1, 1622,    2, 0x0a /* Public */,
     157,    1, 1625,    2, 0x0a /* Public */,
     157,    1, 1628,    2, 0x0a /* Public */,
     158,    1, 1631,    2, 0x0a /* Public */,
     158,    1, 1634,    2, 0x0a /* Public */,
     159,    0, 1637,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     160,    0, 1638,    2, 0x02 /* Public */,
     161,    0, 1639,    2, 0x02 /* Public */,
     162,    1, 1640,    2, 0x02 /* Public */,
     163,    1, 1643,    2, 0x02 /* Public */,
     164,    0, 1646,    2, 0x02 /* Public */,
     165,    0, 1647,    2, 0x02 /* Public */,
     166,    0, 1648,    2, 0x02 /* Public */,
     167,    1, 1649,    2, 0x02 /* Public */,
     168,    1, 1652,    2, 0x02 /* Public */,
     169,    0, 1655,    2, 0x02 /* Public */,
     170,    0, 1656,    2, 0x02 /* Public */,
     171,    0, 1657,    2, 0x02 /* Public */,
     172,    1, 1658,    2, 0x02 /* Public */,
     173,    1, 1661,    2, 0x02 /* Public */,
     174,    0, 1664,    2, 0x02 /* Public */,
     175,    0, 1665,    2, 0x02 /* Public */,
     176,    0, 1666,    2, 0x02 /* Public */,
     177,    1, 1667,    2, 0x02 /* Public */,
     178,    1, 1670,    2, 0x02 /* Public */,
     179,    0, 1673,    2, 0x02 /* Public */,
     180,    0, 1674,    2, 0x02 /* Public */,
     181,    0, 1675,    2, 0x02 /* Public */,
     182,    1, 1676,    2, 0x02 /* Public */,
     183,    1, 1679,    2, 0x02 /* Public */,
     184,    0, 1682,    2, 0x02 /* Public */,
     185,    0, 1683,    2, 0x02 /* Public */,
     186,    0, 1684,    2, 0x02 /* Public */,
     187,    1, 1685,    2, 0x02 /* Public */,
     188,    1, 1688,    2, 0x02 /* Public */,
     189,    0, 1691,    2, 0x02 /* Public */,
     190,    0, 1692,    2, 0x02 /* Public */,
     191,    0, 1693,    2, 0x02 /* Public */,
     192,    0, 1694,    2, 0x02 /* Public */,
     193,    1, 1695,    2, 0x02 /* Public */,
     194,    1, 1698,    2, 0x02 /* Public */,
     195,    0, 1701,    2, 0x02 /* Public */,
     196,    0, 1702,    2, 0x02 /* Public */,
     197,    0, 1703,    2, 0x02 /* Public */,
     198,    1, 1704,    2, 0x02 /* Public */,
     199,    1, 1707,    2, 0x02 /* Public */,
     200,    0, 1710,    2, 0x02 /* Public */,
     201,    0, 1711,    2, 0x02 /* Public */,
     202,    0, 1712,    2, 0x02 /* Public */,
     203,    1, 1713,    2, 0x02 /* Public */,
     204,    1, 1716,    2, 0x02 /* Public */,
     205,    0, 1719,    2, 0x02 /* Public */,
     206,    0, 1720,    2, 0x02 /* Public */,
     207,    0, 1721,    2, 0x02 /* Public */,
     208,    0, 1722,    2, 0x02 /* Public */,
     209,    0, 1723,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 9,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, 0x80000000 | 9,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 9,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 9,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 34,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, 0x80000000 | 34,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 34,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 34,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 59,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 86,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 89,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 9,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, 0x80000000 | 9,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 9,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 9,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 34,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, 0x80000000 | 34,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 34,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 34,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 59,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    8,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 86,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 89,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::UShort,
    0x80000000 | 9, QMetaType::UInt,    8,
    QMetaType::UChar, QMetaType::UInt,    8,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,    8,
    QMetaType::UChar, QMetaType::UInt,    8,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,    8,
    QMetaType::UChar, QMetaType::UInt,    8,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    0x80000000 | 34, QMetaType::UInt,    8,
    QMetaType::UChar, QMetaType::UInt,    8,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,    8,
    QMetaType::UChar, QMetaType::UInt,    8,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,    8,
    QMetaType::UChar, QMetaType::UInt,    8,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,    8,
    QMetaType::UChar, QMetaType::UInt,    8,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,    8,
    QMetaType::UChar, QMetaType::UInt,    8,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,    8,
    QMetaType::UChar, QMetaType::UInt,    8,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
     210, QMetaType::Float, 0x00495103,
     211, QMetaType::UShort, 0x00495103,
     212, 0x80000000 | 9, 0x0049510b,
     213, 0x80000000 | 9, 0x0049510b,
     214, 0x80000000 | 9, 0x0049510b,
     215, QMetaType::UShort, 0x00495103,
     216, QMetaType::UShort, 0x00495103,
     217, QMetaType::UShort, 0x00495103,
     218, QMetaType::UShort, 0x00495103,
     219, QMetaType::UShort, 0x00495103,
     220, QMetaType::UShort, 0x00495103,
     221, 0x80000000 | 34, 0x0049510b,
     222, 0x80000000 | 34, 0x0049510b,
     223, 0x80000000 | 34, 0x0049510b,
     224, QMetaType::UShort, 0x00495103,
     225, QMetaType::UShort, 0x00495103,
     226, QMetaType::UShort, 0x00495103,
     227, QMetaType::UShort, 0x00495103,
     228, QMetaType::UShort, 0x00495103,
     229, QMetaType::UShort, 0x00495103,
     230, 0x80000000 | 59, 0x0049510b,
     231, QMetaType::UShort, 0x00495103,
     232, QMetaType::UShort, 0x00495103,
     233, QMetaType::UShort, 0x00495103,
     234, QMetaType::UShort, 0x00495103,
     235, QMetaType::UShort, 0x00495103,
     236, QMetaType::UShort, 0x00495103,
     237, QMetaType::UShort, 0x00495103,
     238, QMetaType::UShort, 0x00495103,
     239, QMetaType::UShort, 0x00495103,
     240, 0x80000000 | 86, 0x0049510b,
     241, 0x80000000 | 89, 0x0049510b,
     242, QMetaType::Float, 0x00495103,
     243, QMetaType::UShort, 0x00495103,
     244, QMetaType::UChar, 0x00495103,
     245, QMetaType::UChar, 0x00495103,
     246, QMetaType::UChar, 0x00495103,
     247, QMetaType::UChar, 0x00495103,
     248, QMetaType::UChar, 0x00495103,
     249, QMetaType::UChar, 0x00495103,
     250, QMetaType::UChar, 0x00495103,
     251, QMetaType::UChar, 0x00495103,
     252, QMetaType::UChar, 0x00495103,
     253, QMetaType::UChar, 0x00495103,
     254, QMetaType::UChar, 0x00495103,
     255, QMetaType::UChar, 0x00495103,
     256, QMetaType::UChar, 0x00495103,
     257, QMetaType::UChar, 0x00495103,
     258, QMetaType::UChar, 0x00495103,
     259, QMetaType::UChar, 0x00495103,
     260, QMetaType::UChar, 0x00495103,
     261, QMetaType::UChar, 0x00495103,
     262, QMetaType::UChar, 0x00495103,
     263, QMetaType::UChar, 0x00495103,
     264, QMetaType::UChar, 0x00495103,
     265, QMetaType::UChar, 0x00495103,
     266, QMetaType::UChar, 0x00495103,
     267, QMetaType::UChar, 0x00495103,
     268, QMetaType::UChar, 0x00495103,
     269, QMetaType::UChar, 0x00495103,
     270, QMetaType::UChar, 0x00495103,
     271, QMetaType::UChar, 0x00495103,
     272, QMetaType::UChar, 0x00495103,
     273, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       6,
       8,
      10,
      14,
      16,
      18,
      22,
      24,
      26,
      30,
      32,
      34,
      38,
      40,
      42,
      46,
      48,
      50,
      52,
      56,
      58,
      60,
      64,
      66,
      68,
      72,
      74,
      76,
      78,
      80,
       1,
       3,
       7,
       9,
      11,
      15,
      17,
      19,
      23,
      25,
      27,
      31,
      33,
      35,
      39,
      41,
      43,
      47,
      49,
      51,
      53,
      57,
      59,
      61,
      65,
      67,
      69,
      73,
      75,
      77,
      79,
      81,

       0        // eod
};

void CameraStabSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CameraStabSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->maxAxisLockRateChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->MaxAxisLockRateChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->maxAccelChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 3: _t->MaxAccelChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 4: _t->inputChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const CameraStabSettings_Input::Enum(*)>(_a[2]))); break;
        case 5: _t->InputChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 6: _t->inputRollChanged((*reinterpret_cast< const CameraStabSettings_Input::Enum(*)>(_a[1]))); break;
        case 7: _t->Input_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->inputPitchChanged((*reinterpret_cast< const CameraStabSettings_Input::Enum(*)>(_a[1]))); break;
        case 9: _t->Input_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->inputYawChanged((*reinterpret_cast< const CameraStabSettings_Input::Enum(*)>(_a[1]))); break;
        case 11: _t->Input_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->inputRangeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 13: _t->InputRangeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 14: _t->inputRangeRollChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 15: _t->InputRange_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 16: _t->inputRangePitchChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 17: _t->InputRange_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->inputRangeYawChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 19: _t->InputRange_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->inputRateChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 21: _t->InputRateChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 22: _t->inputRateRollChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 23: _t->InputRate_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->inputRatePitchChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 25: _t->InputRate_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->inputRateYawChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 27: _t->InputRate_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->stabilizationModeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const CameraStabSettings_StabilizationMode::Enum(*)>(_a[2]))); break;
        case 29: _t->StabilizationModeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 30: _t->stabilizationModeRollChanged((*reinterpret_cast< const CameraStabSettings_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 31: _t->StabilizationMode_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->stabilizationModePitchChanged((*reinterpret_cast< const CameraStabSettings_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 33: _t->StabilizationMode_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->stabilizationModeYawChanged((*reinterpret_cast< const CameraStabSettings_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 35: _t->StabilizationMode_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->outputRangeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 37: _t->OutputRangeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 38: _t->outputRangeRollChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 39: _t->OutputRange_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->outputRangePitchChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 41: _t->OutputRange_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->outputRangeYawChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 43: _t->OutputRange_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->responseTimeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 45: _t->ResponseTimeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 46: _t->responseTimeRollChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 47: _t->ResponseTime_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 48: _t->responseTimePitchChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 49: _t->ResponseTime_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 50: _t->responseTimeYawChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 51: _t->ResponseTime_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->gimbalTypeChanged((*reinterpret_cast< const CameraStabSettings_GimbalType::Enum(*)>(_a[1]))); break;
        case 53: _t->GimbalTypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 54: _t->feedForwardChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 55: _t->FeedForwardChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 56: _t->feedForwardRollChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 57: _t->FeedForward_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 58: _t->feedForwardPitchChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 59: _t->FeedForward_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 60: _t->feedForwardYawChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 61: _t->FeedForward_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 62: _t->accelTimeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 63: _t->AccelTimeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 64: _t->accelTimeRollChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 65: _t->AccelTime_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 66: _t->accelTimePitchChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 67: _t->AccelTime_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 68: _t->accelTimeYawChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 69: _t->AccelTime_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 70: _t->decelTimeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 71: _t->DecelTimeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 72: _t->decelTimeRollChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 73: _t->DecelTime_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 74: _t->decelTimePitchChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 75: _t->DecelTime_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 76: _t->decelTimeYawChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 77: _t->DecelTime_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 78: _t->servo1PitchReverseChanged((*reinterpret_cast< const CameraStabSettings_Servo1PitchReverse::Enum(*)>(_a[1]))); break;
        case 79: _t->Servo1PitchReverseChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 80: _t->servo2PitchReverseChanged((*reinterpret_cast< const CameraStabSettings_Servo2PitchReverse::Enum(*)>(_a[1]))); break;
        case 81: _t->Servo2PitchReverseChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 82: _t->setMaxAxisLockRate((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 83: _t->setMaxAccel((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 84: _t->setInput((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const CameraStabSettings_Input::Enum(*)>(_a[2]))); break;
        case 85: _t->setInput((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 86: _t->setInputRoll((*reinterpret_cast< const CameraStabSettings_Input::Enum(*)>(_a[1]))); break;
        case 87: _t->setInput_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 88: _t->setInputPitch((*reinterpret_cast< const CameraStabSettings_Input::Enum(*)>(_a[1]))); break;
        case 89: _t->setInput_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 90: _t->setInputYaw((*reinterpret_cast< const CameraStabSettings_Input::Enum(*)>(_a[1]))); break;
        case 91: _t->setInput_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 92: _t->setInputRange((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 93: _t->setInputRange((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 94: _t->setInputRangeRoll((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 95: _t->setInputRange_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 96: _t->setInputRangePitch((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 97: _t->setInputRange_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 98: _t->setInputRangeYaw((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 99: _t->setInputRange_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 100: _t->setInputRate((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 101: _t->setInputRate((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 102: _t->setInputRateRoll((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 103: _t->setInputRate_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->setInputRatePitch((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 105: _t->setInputRate_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 106: _t->setInputRateYaw((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 107: _t->setInputRate_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 108: _t->setStabilizationMode((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const CameraStabSettings_StabilizationMode::Enum(*)>(_a[2]))); break;
        case 109: _t->setStabilizationMode((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 110: _t->setStabilizationModeRoll((*reinterpret_cast< const CameraStabSettings_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 111: _t->setStabilizationMode_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 112: _t->setStabilizationModePitch((*reinterpret_cast< const CameraStabSettings_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 113: _t->setStabilizationMode_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 114: _t->setStabilizationModeYaw((*reinterpret_cast< const CameraStabSettings_StabilizationMode::Enum(*)>(_a[1]))); break;
        case 115: _t->setStabilizationMode_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 116: _t->setOutputRange((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 117: _t->setOutputRange((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 118: _t->setOutputRangeRoll((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 119: _t->setOutputRange_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 120: _t->setOutputRangePitch((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 121: _t->setOutputRange_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 122: _t->setOutputRangeYaw((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 123: _t->setOutputRange_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 124: _t->setResponseTime((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 125: _t->setResponseTime((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 126: _t->setResponseTimeRoll((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 127: _t->setResponseTime_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 128: _t->setResponseTimePitch((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 129: _t->setResponseTime_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 130: _t->setResponseTimeYaw((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 131: _t->setResponseTime_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 132: _t->setGimbalType((*reinterpret_cast< const CameraStabSettings_GimbalType::Enum(*)>(_a[1]))); break;
        case 133: _t->setGimbalType((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 134: _t->setFeedForward((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 135: _t->setFeedForward((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 136: _t->setFeedForwardRoll((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 137: _t->setFeedForward_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 138: _t->setFeedForwardPitch((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 139: _t->setFeedForward_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 140: _t->setFeedForwardYaw((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 141: _t->setFeedForward_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 142: _t->setAccelTime((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 143: _t->setAccelTime((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 144: _t->setAccelTimeRoll((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 145: _t->setAccelTime_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 146: _t->setAccelTimePitch((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 147: _t->setAccelTime_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 148: _t->setAccelTimeYaw((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 149: _t->setAccelTime_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 150: _t->setDecelTime((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 151: _t->setDecelTime((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 152: _t->setDecelTimeRoll((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 153: _t->setDecelTime_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 154: _t->setDecelTimePitch((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 155: _t->setDecelTime_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 156: _t->setDecelTimeYaw((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 157: _t->setDecelTime_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 158: _t->setServo1PitchReverse((*reinterpret_cast< const CameraStabSettings_Servo1PitchReverse::Enum(*)>(_a[1]))); break;
        case 159: _t->setServo1PitchReverse((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 160: _t->setServo2PitchReverse((*reinterpret_cast< const CameraStabSettings_Servo2PitchReverse::Enum(*)>(_a[1]))); break;
        case 161: _t->setServo2PitchReverse((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 162: _t->emitNotifications(); break;
        case 163: { float _r = _t->getMaxAxisLockRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 164: { quint16 _r = _t->getMaxAccel();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 165: { CameraStabSettings_Input::Enum _r = _t->input((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CameraStabSettings_Input::Enum*>(_a[0]) = std::move(_r); }  break;
        case 166: { quint8 _r = _t->getInput((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 167: { quint8 _r = _t->getInput_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 168: { quint8 _r = _t->getInput_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 169: { quint8 _r = _t->getInput_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 170: { quint16 _r = _t->inputRange((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 171: { quint8 _r = _t->getInputRange((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 172: { quint8 _r = _t->getInputRange_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 173: { quint8 _r = _t->getInputRange_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 174: { quint8 _r = _t->getInputRange_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 175: { quint16 _r = _t->inputRate((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 176: { quint8 _r = _t->getInputRate((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 177: { quint8 _r = _t->getInputRate_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 178: { quint8 _r = _t->getInputRate_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 179: { quint8 _r = _t->getInputRate_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 180: { CameraStabSettings_StabilizationMode::Enum _r = _t->stabilizationMode((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CameraStabSettings_StabilizationMode::Enum*>(_a[0]) = std::move(_r); }  break;
        case 181: { quint8 _r = _t->getStabilizationMode((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 182: { quint8 _r = _t->getStabilizationMode_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 183: { quint8 _r = _t->getStabilizationMode_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 184: { quint8 _r = _t->getStabilizationMode_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 185: { quint16 _r = _t->outputRange((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 186: { quint8 _r = _t->getOutputRange((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 187: { quint8 _r = _t->getOutputRange_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 188: { quint8 _r = _t->getOutputRange_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 189: { quint8 _r = _t->getOutputRange_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 190: { quint16 _r = _t->responseTime((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 191: { quint8 _r = _t->getResponseTime((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 192: { quint8 _r = _t->getResponseTime_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 193: { quint8 _r = _t->getResponseTime_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 194: { quint8 _r = _t->getResponseTime_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 195: { quint8 _r = _t->getGimbalType();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 196: { quint16 _r = _t->feedForward((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 197: { quint8 _r = _t->getFeedForward((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 198: { quint8 _r = _t->getFeedForward_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 199: { quint8 _r = _t->getFeedForward_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 200: { quint8 _r = _t->getFeedForward_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 201: { quint16 _r = _t->accelTime((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 202: { quint8 _r = _t->getAccelTime((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 203: { quint8 _r = _t->getAccelTime_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 204: { quint8 _r = _t->getAccelTime_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 205: { quint8 _r = _t->getAccelTime_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 206: { quint16 _r = _t->decelTime((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 207: { quint8 _r = _t->getDecelTime((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 208: { quint8 _r = _t->getDecelTime_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 209: { quint8 _r = _t->getDecelTime_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 210: { quint8 _r = _t->getDecelTime_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 211: { quint8 _r = _t->getServo1PitchReverse();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 212: { quint8 _r = _t->getServo2PitchReverse();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CameraStabSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::maxAxisLockRateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::MaxAxisLockRateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::maxAccelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::MaxAccelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , const CameraStabSettings_Input::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::inputChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::InputChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const CameraStabSettings_Input::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::inputRollChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::Input_RollChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const CameraStabSettings_Input::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::inputPitchChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::Input_PitchChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const CameraStabSettings_Input::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::inputYawChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::Input_YawChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::inputRangeChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::InputRangeChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::inputRangeRollChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::InputRange_RollChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::inputRangePitchChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::InputRange_PitchChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::inputRangeYawChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::InputRange_YawChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::inputRateChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::InputRateChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::inputRateRollChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::InputRate_RollChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::inputRatePitchChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::InputRate_PitchChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::inputRateYawChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::InputRate_YawChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , const CameraStabSettings_StabilizationMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::stabilizationModeChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::StabilizationModeChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const CameraStabSettings_StabilizationMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::stabilizationModeRollChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::StabilizationMode_RollChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const CameraStabSettings_StabilizationMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::stabilizationModePitchChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::StabilizationMode_PitchChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const CameraStabSettings_StabilizationMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::stabilizationModeYawChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::StabilizationMode_YawChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::outputRangeChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::OutputRangeChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::outputRangeRollChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::OutputRange_RollChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::outputRangePitchChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::OutputRange_PitchChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::outputRangeYawChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::OutputRange_YawChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::responseTimeChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::ResponseTimeChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::responseTimeRollChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::ResponseTime_RollChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::responseTimePitchChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::ResponseTime_PitchChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::responseTimeYawChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::ResponseTime_YawChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const CameraStabSettings_GimbalType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::gimbalTypeChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::GimbalTypeChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::feedForwardChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::FeedForwardChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::feedForwardRollChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::FeedForward_RollChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::feedForwardPitchChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::FeedForward_PitchChanged)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::feedForwardYawChanged)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::FeedForward_YawChanged)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::accelTimeChanged)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::AccelTimeChanged)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::accelTimeRollChanged)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::AccelTime_RollChanged)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::accelTimePitchChanged)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::AccelTime_PitchChanged)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::accelTimeYawChanged)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::AccelTime_YawChanged)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::decelTimeChanged)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::DecelTimeChanged)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::decelTimeRollChanged)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::DecelTime_RollChanged)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::decelTimePitchChanged)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::DecelTime_PitchChanged)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::decelTimeYawChanged)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::DecelTime_YawChanged)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const CameraStabSettings_Servo1PitchReverse::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::servo1PitchReverseChanged)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::Servo1PitchReverseChanged)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(const CameraStabSettings_Servo2PitchReverse::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::servo2PitchReverseChanged)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (CameraStabSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraStabSettings::Servo2PitchReverseChanged)) {
                *result = 81;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CameraStabSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->maxAxisLockRate(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->maxAccel(); break;
        case 2: *reinterpret_cast< CameraStabSettings_Input::Enum*>(_v) = _t->inputRoll(); break;
        case 3: *reinterpret_cast< CameraStabSettings_Input::Enum*>(_v) = _t->inputPitch(); break;
        case 4: *reinterpret_cast< CameraStabSettings_Input::Enum*>(_v) = _t->inputYaw(); break;
        case 5: *reinterpret_cast< quint16*>(_v) = _t->inputRangeRoll(); break;
        case 6: *reinterpret_cast< quint16*>(_v) = _t->inputRangePitch(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->inputRangeYaw(); break;
        case 8: *reinterpret_cast< quint16*>(_v) = _t->inputRateRoll(); break;
        case 9: *reinterpret_cast< quint16*>(_v) = _t->inputRatePitch(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->inputRateYaw(); break;
        case 11: *reinterpret_cast< CameraStabSettings_StabilizationMode::Enum*>(_v) = _t->stabilizationModeRoll(); break;
        case 12: *reinterpret_cast< CameraStabSettings_StabilizationMode::Enum*>(_v) = _t->stabilizationModePitch(); break;
        case 13: *reinterpret_cast< CameraStabSettings_StabilizationMode::Enum*>(_v) = _t->stabilizationModeYaw(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->outputRangeRoll(); break;
        case 15: *reinterpret_cast< quint16*>(_v) = _t->outputRangePitch(); break;
        case 16: *reinterpret_cast< quint16*>(_v) = _t->outputRangeYaw(); break;
        case 17: *reinterpret_cast< quint16*>(_v) = _t->responseTimeRoll(); break;
        case 18: *reinterpret_cast< quint16*>(_v) = _t->responseTimePitch(); break;
        case 19: *reinterpret_cast< quint16*>(_v) = _t->responseTimeYaw(); break;
        case 20: *reinterpret_cast< CameraStabSettings_GimbalType::Enum*>(_v) = _t->gimbalType(); break;
        case 21: *reinterpret_cast< quint16*>(_v) = _t->feedForwardRoll(); break;
        case 22: *reinterpret_cast< quint16*>(_v) = _t->feedForwardPitch(); break;
        case 23: *reinterpret_cast< quint16*>(_v) = _t->feedForwardYaw(); break;
        case 24: *reinterpret_cast< quint16*>(_v) = _t->accelTimeRoll(); break;
        case 25: *reinterpret_cast< quint16*>(_v) = _t->accelTimePitch(); break;
        case 26: *reinterpret_cast< quint16*>(_v) = _t->accelTimeYaw(); break;
        case 27: *reinterpret_cast< quint16*>(_v) = _t->decelTimeRoll(); break;
        case 28: *reinterpret_cast< quint16*>(_v) = _t->decelTimePitch(); break;
        case 29: *reinterpret_cast< quint16*>(_v) = _t->decelTimeYaw(); break;
        case 30: *reinterpret_cast< CameraStabSettings_Servo1PitchReverse::Enum*>(_v) = _t->servo1PitchReverse(); break;
        case 31: *reinterpret_cast< CameraStabSettings_Servo2PitchReverse::Enum*>(_v) = _t->servo2PitchReverse(); break;
        case 32: *reinterpret_cast< float*>(_v) = _t->getMaxAxisLockRate(); break;
        case 33: *reinterpret_cast< quint16*>(_v) = _t->getMaxAccel(); break;
        case 34: *reinterpret_cast< quint8*>(_v) = _t->getInput_Roll(); break;
        case 35: *reinterpret_cast< quint8*>(_v) = _t->getInput_Pitch(); break;
        case 36: *reinterpret_cast< quint8*>(_v) = _t->getInput_Yaw(); break;
        case 37: *reinterpret_cast< quint8*>(_v) = _t->getInputRange_Roll(); break;
        case 38: *reinterpret_cast< quint8*>(_v) = _t->getInputRange_Pitch(); break;
        case 39: *reinterpret_cast< quint8*>(_v) = _t->getInputRange_Yaw(); break;
        case 40: *reinterpret_cast< quint8*>(_v) = _t->getInputRate_Roll(); break;
        case 41: *reinterpret_cast< quint8*>(_v) = _t->getInputRate_Pitch(); break;
        case 42: *reinterpret_cast< quint8*>(_v) = _t->getInputRate_Yaw(); break;
        case 43: *reinterpret_cast< quint8*>(_v) = _t->getStabilizationMode_Roll(); break;
        case 44: *reinterpret_cast< quint8*>(_v) = _t->getStabilizationMode_Pitch(); break;
        case 45: *reinterpret_cast< quint8*>(_v) = _t->getStabilizationMode_Yaw(); break;
        case 46: *reinterpret_cast< quint8*>(_v) = _t->getOutputRange_Roll(); break;
        case 47: *reinterpret_cast< quint8*>(_v) = _t->getOutputRange_Pitch(); break;
        case 48: *reinterpret_cast< quint8*>(_v) = _t->getOutputRange_Yaw(); break;
        case 49: *reinterpret_cast< quint8*>(_v) = _t->getResponseTime_Roll(); break;
        case 50: *reinterpret_cast< quint8*>(_v) = _t->getResponseTime_Pitch(); break;
        case 51: *reinterpret_cast< quint8*>(_v) = _t->getResponseTime_Yaw(); break;
        case 52: *reinterpret_cast< quint8*>(_v) = _t->getGimbalType(); break;
        case 53: *reinterpret_cast< quint8*>(_v) = _t->getFeedForward_Roll(); break;
        case 54: *reinterpret_cast< quint8*>(_v) = _t->getFeedForward_Pitch(); break;
        case 55: *reinterpret_cast< quint8*>(_v) = _t->getFeedForward_Yaw(); break;
        case 56: *reinterpret_cast< quint8*>(_v) = _t->getAccelTime_Roll(); break;
        case 57: *reinterpret_cast< quint8*>(_v) = _t->getAccelTime_Pitch(); break;
        case 58: *reinterpret_cast< quint8*>(_v) = _t->getAccelTime_Yaw(); break;
        case 59: *reinterpret_cast< quint8*>(_v) = _t->getDecelTime_Roll(); break;
        case 60: *reinterpret_cast< quint8*>(_v) = _t->getDecelTime_Pitch(); break;
        case 61: *reinterpret_cast< quint8*>(_v) = _t->getDecelTime_Yaw(); break;
        case 62: *reinterpret_cast< quint8*>(_v) = _t->getServo1PitchReverse(); break;
        case 63: *reinterpret_cast< quint8*>(_v) = _t->getServo2PitchReverse(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CameraStabSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMaxAxisLockRate(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setMaxAccel(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setInputRoll(*reinterpret_cast< CameraStabSettings_Input::Enum*>(_v)); break;
        case 3: _t->setInputPitch(*reinterpret_cast< CameraStabSettings_Input::Enum*>(_v)); break;
        case 4: _t->setInputYaw(*reinterpret_cast< CameraStabSettings_Input::Enum*>(_v)); break;
        case 5: _t->setInputRangeRoll(*reinterpret_cast< quint16*>(_v)); break;
        case 6: _t->setInputRangePitch(*reinterpret_cast< quint16*>(_v)); break;
        case 7: _t->setInputRangeYaw(*reinterpret_cast< quint16*>(_v)); break;
        case 8: _t->setInputRateRoll(*reinterpret_cast< quint16*>(_v)); break;
        case 9: _t->setInputRatePitch(*reinterpret_cast< quint16*>(_v)); break;
        case 10: _t->setInputRateYaw(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setStabilizationModeRoll(*reinterpret_cast< CameraStabSettings_StabilizationMode::Enum*>(_v)); break;
        case 12: _t->setStabilizationModePitch(*reinterpret_cast< CameraStabSettings_StabilizationMode::Enum*>(_v)); break;
        case 13: _t->setStabilizationModeYaw(*reinterpret_cast< CameraStabSettings_StabilizationMode::Enum*>(_v)); break;
        case 14: _t->setOutputRangeRoll(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setOutputRangePitch(*reinterpret_cast< quint16*>(_v)); break;
        case 16: _t->setOutputRangeYaw(*reinterpret_cast< quint16*>(_v)); break;
        case 17: _t->setResponseTimeRoll(*reinterpret_cast< quint16*>(_v)); break;
        case 18: _t->setResponseTimePitch(*reinterpret_cast< quint16*>(_v)); break;
        case 19: _t->setResponseTimeYaw(*reinterpret_cast< quint16*>(_v)); break;
        case 20: _t->setGimbalType(*reinterpret_cast< CameraStabSettings_GimbalType::Enum*>(_v)); break;
        case 21: _t->setFeedForwardRoll(*reinterpret_cast< quint16*>(_v)); break;
        case 22: _t->setFeedForwardPitch(*reinterpret_cast< quint16*>(_v)); break;
        case 23: _t->setFeedForwardYaw(*reinterpret_cast< quint16*>(_v)); break;
        case 24: _t->setAccelTimeRoll(*reinterpret_cast< quint16*>(_v)); break;
        case 25: _t->setAccelTimePitch(*reinterpret_cast< quint16*>(_v)); break;
        case 26: _t->setAccelTimeYaw(*reinterpret_cast< quint16*>(_v)); break;
        case 27: _t->setDecelTimeRoll(*reinterpret_cast< quint16*>(_v)); break;
        case 28: _t->setDecelTimePitch(*reinterpret_cast< quint16*>(_v)); break;
        case 29: _t->setDecelTimeYaw(*reinterpret_cast< quint16*>(_v)); break;
        case 30: _t->setServo1PitchReverse(*reinterpret_cast< CameraStabSettings_Servo1PitchReverse::Enum*>(_v)); break;
        case 31: _t->setServo2PitchReverse(*reinterpret_cast< CameraStabSettings_Servo2PitchReverse::Enum*>(_v)); break;
        case 32: _t->setMaxAxisLockRate(*reinterpret_cast< float*>(_v)); break;
        case 33: _t->setMaxAccel(*reinterpret_cast< quint16*>(_v)); break;
        case 34: _t->setInput_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 35: _t->setInput_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 36: _t->setInput_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 37: _t->setInputRange_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 38: _t->setInputRange_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 39: _t->setInputRange_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 40: _t->setInputRate_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 41: _t->setInputRate_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 42: _t->setInputRate_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 43: _t->setStabilizationMode_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 44: _t->setStabilizationMode_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 45: _t->setStabilizationMode_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 46: _t->setOutputRange_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 47: _t->setOutputRange_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 48: _t->setOutputRange_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 49: _t->setResponseTime_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 50: _t->setResponseTime_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 51: _t->setResponseTime_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 52: _t->setGimbalType(*reinterpret_cast< quint8*>(_v)); break;
        case 53: _t->setFeedForward_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 54: _t->setFeedForward_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 55: _t->setFeedForward_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 56: _t->setAccelTime_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 57: _t->setAccelTime_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 58: _t->setAccelTime_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 59: _t->setDecelTime_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 60: _t->setDecelTime_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 61: _t->setDecelTime_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 62: _t->setServo1PitchReverse(*reinterpret_cast< quint8*>(_v)); break;
        case 63: _t->setServo2PitchReverse(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_CameraStabSettings[] = {
        &CameraStabSettings_Input::staticMetaObject,
    &CameraStabSettings_StabilizationMode::staticMetaObject,
    &CameraStabSettings_GimbalType::staticMetaObject,
    &CameraStabSettings_Servo1PitchReverse::staticMetaObject,
    &CameraStabSettings_Servo2PitchReverse::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject CameraStabSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_CameraStabSettings.data,
    qt_meta_data_CameraStabSettings,
    qt_static_metacall,
    qt_meta_extradata_CameraStabSettings,
    nullptr
} };


const QMetaObject *CameraStabSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraStabSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraStabSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int CameraStabSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 213)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 213;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 213)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 213;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 64;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 64;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 64;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 64;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 64;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CameraStabSettings::maxAxisLockRateChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CameraStabSettings::MaxAxisLockRateChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CameraStabSettings::maxAccelChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CameraStabSettings::MaxAccelChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CameraStabSettings::inputChanged(quint32 _t1, const CameraStabSettings_Input::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CameraStabSettings::InputChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CameraStabSettings::inputRollChanged(const CameraStabSettings_Input::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CameraStabSettings::Input_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CameraStabSettings::inputPitchChanged(const CameraStabSettings_Input::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CameraStabSettings::Input_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CameraStabSettings::inputYawChanged(const CameraStabSettings_Input::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CameraStabSettings::Input_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CameraStabSettings::inputRangeChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CameraStabSettings::InputRangeChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CameraStabSettings::inputRangeRollChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CameraStabSettings::InputRange_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void CameraStabSettings::inputRangePitchChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void CameraStabSettings::InputRange_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void CameraStabSettings::inputRangeYawChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void CameraStabSettings::InputRange_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void CameraStabSettings::inputRateChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void CameraStabSettings::InputRateChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void CameraStabSettings::inputRateRollChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void CameraStabSettings::InputRate_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void CameraStabSettings::inputRatePitchChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void CameraStabSettings::InputRate_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void CameraStabSettings::inputRateYawChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void CameraStabSettings::InputRate_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void CameraStabSettings::stabilizationModeChanged(quint32 _t1, const CameraStabSettings_StabilizationMode::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void CameraStabSettings::StabilizationModeChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void CameraStabSettings::stabilizationModeRollChanged(const CameraStabSettings_StabilizationMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void CameraStabSettings::StabilizationMode_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void CameraStabSettings::stabilizationModePitchChanged(const CameraStabSettings_StabilizationMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void CameraStabSettings::StabilizationMode_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void CameraStabSettings::stabilizationModeYawChanged(const CameraStabSettings_StabilizationMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void CameraStabSettings::StabilizationMode_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void CameraStabSettings::outputRangeChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void CameraStabSettings::OutputRangeChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void CameraStabSettings::outputRangeRollChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void CameraStabSettings::OutputRange_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void CameraStabSettings::outputRangePitchChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void CameraStabSettings::OutputRange_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void CameraStabSettings::outputRangeYawChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void CameraStabSettings::OutputRange_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void CameraStabSettings::responseTimeChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void CameraStabSettings::ResponseTimeChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void CameraStabSettings::responseTimeRollChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void CameraStabSettings::ResponseTime_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void CameraStabSettings::responseTimePitchChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void CameraStabSettings::ResponseTime_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void CameraStabSettings::responseTimeYawChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void CameraStabSettings::ResponseTime_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void CameraStabSettings::gimbalTypeChanged(const CameraStabSettings_GimbalType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void CameraStabSettings::GimbalTypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void CameraStabSettings::feedForwardChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void CameraStabSettings::FeedForwardChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void CameraStabSettings::feedForwardRollChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void CameraStabSettings::FeedForward_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void CameraStabSettings::feedForwardPitchChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void CameraStabSettings::FeedForward_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void CameraStabSettings::feedForwardYawChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void CameraStabSettings::FeedForward_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void CameraStabSettings::accelTimeChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void CameraStabSettings::AccelTimeChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void CameraStabSettings::accelTimeRollChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void CameraStabSettings::AccelTime_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void CameraStabSettings::accelTimePitchChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void CameraStabSettings::AccelTime_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void CameraStabSettings::accelTimeYawChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void CameraStabSettings::AccelTime_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void CameraStabSettings::decelTimeChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void CameraStabSettings::DecelTimeChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void CameraStabSettings::decelTimeRollChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void CameraStabSettings::DecelTime_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void CameraStabSettings::decelTimePitchChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void CameraStabSettings::DecelTime_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void CameraStabSettings::decelTimeYawChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void CameraStabSettings::DecelTime_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void CameraStabSettings::servo1PitchReverseChanged(const CameraStabSettings_Servo1PitchReverse::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void CameraStabSettings::Servo1PitchReverseChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void CameraStabSettings::servo2PitchReverseChanged(const CameraStabSettings_Servo2PitchReverse::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void CameraStabSettings::Servo2PitchReverseChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
