/****************************************************************************
** Meta object code from reading C++ file 'txpidsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../txpidsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'txpidsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TxPIDSettingsConstants_t {
    QByteArrayData data[7];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TxPIDSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TxPIDSettingsConstants_t qt_meta_stringdata_TxPIDSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TxPIDSettingsConstants"
QT_MOC_LITERAL(1, 23, 4), // "Enum"
QT_MOC_LITERAL(2, 28, 15), // "UpdateModeCount"
QT_MOC_LITERAL(3, 44, 15), // "BankNumberCount"
QT_MOC_LITERAL(4, 60, 11), // "InputsCount"
QT_MOC_LITERAL(5, 72, 9), // "PIDsCount"
QT_MOC_LITERAL(6, 82, 34) // "EasyTuneRatePIDRecalculateYaw..."

    },
    "TxPIDSettingsConstants\0Enum\0UpdateModeCount\0"
    "BankNumberCount\0InputsCount\0PIDsCount\0"
    "EasyTuneRatePIDRecalculateYawCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TxPIDSettingsConstants[] = {

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
       2, uint(TxPIDSettingsConstants::UpdateModeCount),
       3, uint(TxPIDSettingsConstants::BankNumberCount),
       4, uint(TxPIDSettingsConstants::InputsCount),
       5, uint(TxPIDSettingsConstants::PIDsCount),
       6, uint(TxPIDSettingsConstants::EasyTuneRatePIDRecalculateYawCount),

       0        // eod
};

void TxPIDSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TxPIDSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TxPIDSettingsConstants.data,
    qt_meta_data_TxPIDSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TxPIDSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TxPIDSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TxPIDSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TxPIDSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TxPIDSettings_UpdateMode_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TxPIDSettings_UpdateMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TxPIDSettings_UpdateMode_t qt_meta_stringdata_TxPIDSettings_UpdateMode = {
    {
QT_MOC_LITERAL(0, 0, 24), // "TxPIDSettings_UpdateMode"
QT_MOC_LITERAL(1, 25, 4), // "Enum"
QT_MOC_LITERAL(2, 30, 5), // "Never"
QT_MOC_LITERAL(3, 36, 9), // "WhenArmed"
QT_MOC_LITERAL(4, 46, 6) // "Always"

    },
    "TxPIDSettings_UpdateMode\0Enum\0Never\0"
    "WhenArmed\0Always"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TxPIDSettings_UpdateMode[] = {

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
       2, uint(TxPIDSettings_UpdateMode::Never),
       3, uint(TxPIDSettings_UpdateMode::WhenArmed),
       4, uint(TxPIDSettings_UpdateMode::Always),

       0        // eod
};

void TxPIDSettings_UpdateMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TxPIDSettings_UpdateMode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TxPIDSettings_UpdateMode.data,
    qt_meta_data_TxPIDSettings_UpdateMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TxPIDSettings_UpdateMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TxPIDSettings_UpdateMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TxPIDSettings_UpdateMode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TxPIDSettings_UpdateMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TxPIDSettings_BankNumber_t {
    QByteArrayData data[5];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TxPIDSettings_BankNumber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TxPIDSettings_BankNumber_t qt_meta_stringdata_TxPIDSettings_BankNumber = {
    {
QT_MOC_LITERAL(0, 0, 24), // "TxPIDSettings_BankNumber"
QT_MOC_LITERAL(1, 25, 4), // "Enum"
QT_MOC_LITERAL(2, 30, 5), // "Bank1"
QT_MOC_LITERAL(3, 36, 5), // "Bank2"
QT_MOC_LITERAL(4, 42, 5) // "Bank3"

    },
    "TxPIDSettings_BankNumber\0Enum\0Bank1\0"
    "Bank2\0Bank3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TxPIDSettings_BankNumber[] = {

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
       2, uint(TxPIDSettings_BankNumber::Bank1),
       3, uint(TxPIDSettings_BankNumber::Bank2),
       4, uint(TxPIDSettings_BankNumber::Bank3),

       0        // eod
};

void TxPIDSettings_BankNumber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TxPIDSettings_BankNumber::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TxPIDSettings_BankNumber.data,
    qt_meta_data_TxPIDSettings_BankNumber,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TxPIDSettings_BankNumber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TxPIDSettings_BankNumber::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TxPIDSettings_BankNumber.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TxPIDSettings_BankNumber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TxPIDSettings_Inputs_t {
    QByteArrayData data[9];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TxPIDSettings_Inputs_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TxPIDSettings_Inputs_t qt_meta_stringdata_TxPIDSettings_Inputs = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TxPIDSettings_Inputs"
QT_MOC_LITERAL(1, 21, 4), // "Enum"
QT_MOC_LITERAL(2, 26, 8), // "Throttle"
QT_MOC_LITERAL(3, 35, 10), // "Accessory0"
QT_MOC_LITERAL(4, 46, 10), // "Accessory1"
QT_MOC_LITERAL(5, 57, 10), // "Accessory2"
QT_MOC_LITERAL(6, 68, 10), // "Accessory3"
QT_MOC_LITERAL(7, 79, 10), // "Accessory4"
QT_MOC_LITERAL(8, 90, 10) // "Accessory5"

    },
    "TxPIDSettings_Inputs\0Enum\0Throttle\0"
    "Accessory0\0Accessory1\0Accessory2\0"
    "Accessory3\0Accessory4\0Accessory5"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TxPIDSettings_Inputs[] = {

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
       2, uint(TxPIDSettings_Inputs::Throttle),
       3, uint(TxPIDSettings_Inputs::Accessory0),
       4, uint(TxPIDSettings_Inputs::Accessory1),
       5, uint(TxPIDSettings_Inputs::Accessory2),
       6, uint(TxPIDSettings_Inputs::Accessory3),
       7, uint(TxPIDSettings_Inputs::Accessory4),
       8, uint(TxPIDSettings_Inputs::Accessory5),

       0        // eod
};

void TxPIDSettings_Inputs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TxPIDSettings_Inputs::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TxPIDSettings_Inputs.data,
    qt_meta_data_TxPIDSettings_Inputs,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TxPIDSettings_Inputs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TxPIDSettings_Inputs::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TxPIDSettings_Inputs.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TxPIDSettings_Inputs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TxPIDSettings_PIDs_t {
    QByteArrayData data[57];
    char stringdata0[838];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TxPIDSettings_PIDs_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TxPIDSettings_PIDs_t qt_meta_stringdata_TxPIDSettings_PIDs = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TxPIDSettings_PIDs"
QT_MOC_LITERAL(1, 19, 4), // "Enum"
QT_MOC_LITERAL(2, 24, 8), // "Disabled"
QT_MOC_LITERAL(3, 33, 17), // "EasyTuneRatePitch"
QT_MOC_LITERAL(4, 51, 16), // "EasyTuneRateRoll"
QT_MOC_LITERAL(5, 68, 10), // "RollRateKp"
QT_MOC_LITERAL(6, 79, 10), // "RollRateKi"
QT_MOC_LITERAL(7, 90, 10), // "RollRateKd"
QT_MOC_LITERAL(8, 101, 14), // "RollRateILimit"
QT_MOC_LITERAL(9, 116, 12), // "RollRateResp"
QT_MOC_LITERAL(10, 129, 11), // "PitchRateKp"
QT_MOC_LITERAL(11, 141, 11), // "PitchRateKi"
QT_MOC_LITERAL(12, 153, 11), // "PitchRateKd"
QT_MOC_LITERAL(13, 165, 15), // "PitchRateILimit"
QT_MOC_LITERAL(14, 181, 13), // "PitchRateResp"
QT_MOC_LITERAL(15, 195, 15), // "RollPitchRateKp"
QT_MOC_LITERAL(16, 211, 15), // "RollPitchRateKi"
QT_MOC_LITERAL(17, 227, 15), // "RollPitchRateKd"
QT_MOC_LITERAL(18, 243, 19), // "RollPitchRateILimit"
QT_MOC_LITERAL(19, 263, 17), // "RollPitchRateResp"
QT_MOC_LITERAL(20, 281, 9), // "YawRateKp"
QT_MOC_LITERAL(21, 291, 9), // "YawRateKi"
QT_MOC_LITERAL(22, 301, 9), // "YawRateKd"
QT_MOC_LITERAL(23, 311, 13), // "YawRateILimit"
QT_MOC_LITERAL(24, 325, 11), // "YawRateResp"
QT_MOC_LITERAL(25, 337, 14), // "RollAttitudeKp"
QT_MOC_LITERAL(26, 352, 14), // "RollAttitudeKi"
QT_MOC_LITERAL(27, 367, 18), // "RollAttitudeILimit"
QT_MOC_LITERAL(28, 386, 16), // "RollAttitudeResp"
QT_MOC_LITERAL(29, 403, 15), // "PitchAttitudeKp"
QT_MOC_LITERAL(30, 419, 15), // "PitchAttitudeKi"
QT_MOC_LITERAL(31, 435, 19), // "PitchAttitudeILimit"
QT_MOC_LITERAL(32, 455, 17), // "PitchAttitudeResp"
QT_MOC_LITERAL(33, 473, 19), // "RollPitchAttitudeKp"
QT_MOC_LITERAL(34, 493, 19), // "RollPitchAttitudeKi"
QT_MOC_LITERAL(35, 513, 23), // "RollPitchAttitudeILimit"
QT_MOC_LITERAL(36, 537, 21), // "RollPitchAttitudeResp"
QT_MOC_LITERAL(37, 559, 13), // "YawAttitudeKp"
QT_MOC_LITERAL(38, 573, 13), // "YawAttitudeKi"
QT_MOC_LITERAL(39, 587, 17), // "YawAttitudeILimit"
QT_MOC_LITERAL(40, 605, 15), // "YawAttitudeResp"
QT_MOC_LITERAL(41, 621, 8), // "RollExpo"
QT_MOC_LITERAL(42, 630, 9), // "PitchExpo"
QT_MOC_LITERAL(43, 640, 13), // "RollPitchExpo"
QT_MOC_LITERAL(44, 654, 7), // "YawExpo"
QT_MOC_LITERAL(45, 662, 7), // "GyroTau"
QT_MOC_LITERAL(46, 670, 14), // "AcroRollFactor"
QT_MOC_LITERAL(47, 685, 15), // "AcroPitchFactor"
QT_MOC_LITERAL(48, 701, 19), // "AcroRollPitchFactor"
QT_MOC_LITERAL(49, 721, 13), // "AltitudePosKp"
QT_MOC_LITERAL(50, 735, 18), // "AltitudeVelocityKp"
QT_MOC_LITERAL(51, 754, 18), // "AltitudeVelocityKi"
QT_MOC_LITERAL(52, 773, 18), // "AltitudeVelocityKd"
QT_MOC_LITERAL(53, 792, 20), // "AltitudeVelocityBeta"
QT_MOC_LITERAL(54, 813, 8), // "AccelTau"
QT_MOC_LITERAL(55, 822, 7), // "AccelKp"
QT_MOC_LITERAL(56, 830, 7) // "AccelKi"

    },
    "TxPIDSettings_PIDs\0Enum\0Disabled\0"
    "EasyTuneRatePitch\0EasyTuneRateRoll\0"
    "RollRateKp\0RollRateKi\0RollRateKd\0"
    "RollRateILimit\0RollRateResp\0PitchRateKp\0"
    "PitchRateKi\0PitchRateKd\0PitchRateILimit\0"
    "PitchRateResp\0RollPitchRateKp\0"
    "RollPitchRateKi\0RollPitchRateKd\0"
    "RollPitchRateILimit\0RollPitchRateResp\0"
    "YawRateKp\0YawRateKi\0YawRateKd\0"
    "YawRateILimit\0YawRateResp\0RollAttitudeKp\0"
    "RollAttitudeKi\0RollAttitudeILimit\0"
    "RollAttitudeResp\0PitchAttitudeKp\0"
    "PitchAttitudeKi\0PitchAttitudeILimit\0"
    "PitchAttitudeResp\0RollPitchAttitudeKp\0"
    "RollPitchAttitudeKi\0RollPitchAttitudeILimit\0"
    "RollPitchAttitudeResp\0YawAttitudeKp\0"
    "YawAttitudeKi\0YawAttitudeILimit\0"
    "YawAttitudeResp\0RollExpo\0PitchExpo\0"
    "RollPitchExpo\0YawExpo\0GyroTau\0"
    "AcroRollFactor\0AcroPitchFactor\0"
    "AcroRollPitchFactor\0AltitudePosKp\0"
    "AltitudeVelocityKp\0AltitudeVelocityKi\0"
    "AltitudeVelocityKd\0AltitudeVelocityBeta\0"
    "AccelTau\0AccelKp\0AccelKi"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TxPIDSettings_PIDs[] = {

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
       1,    1, 0x0,   55,   19,

 // enum data: key, value
       2, uint(TxPIDSettings_PIDs::Disabled),
       3, uint(TxPIDSettings_PIDs::EasyTuneRatePitch),
       4, uint(TxPIDSettings_PIDs::EasyTuneRateRoll),
       5, uint(TxPIDSettings_PIDs::RollRateKp),
       6, uint(TxPIDSettings_PIDs::RollRateKi),
       7, uint(TxPIDSettings_PIDs::RollRateKd),
       8, uint(TxPIDSettings_PIDs::RollRateILimit),
       9, uint(TxPIDSettings_PIDs::RollRateResp),
      10, uint(TxPIDSettings_PIDs::PitchRateKp),
      11, uint(TxPIDSettings_PIDs::PitchRateKi),
      12, uint(TxPIDSettings_PIDs::PitchRateKd),
      13, uint(TxPIDSettings_PIDs::PitchRateILimit),
      14, uint(TxPIDSettings_PIDs::PitchRateResp),
      15, uint(TxPIDSettings_PIDs::RollPitchRateKp),
      16, uint(TxPIDSettings_PIDs::RollPitchRateKi),
      17, uint(TxPIDSettings_PIDs::RollPitchRateKd),
      18, uint(TxPIDSettings_PIDs::RollPitchRateILimit),
      19, uint(TxPIDSettings_PIDs::RollPitchRateResp),
      20, uint(TxPIDSettings_PIDs::YawRateKp),
      21, uint(TxPIDSettings_PIDs::YawRateKi),
      22, uint(TxPIDSettings_PIDs::YawRateKd),
      23, uint(TxPIDSettings_PIDs::YawRateILimit),
      24, uint(TxPIDSettings_PIDs::YawRateResp),
      25, uint(TxPIDSettings_PIDs::RollAttitudeKp),
      26, uint(TxPIDSettings_PIDs::RollAttitudeKi),
      27, uint(TxPIDSettings_PIDs::RollAttitudeILimit),
      28, uint(TxPIDSettings_PIDs::RollAttitudeResp),
      29, uint(TxPIDSettings_PIDs::PitchAttitudeKp),
      30, uint(TxPIDSettings_PIDs::PitchAttitudeKi),
      31, uint(TxPIDSettings_PIDs::PitchAttitudeILimit),
      32, uint(TxPIDSettings_PIDs::PitchAttitudeResp),
      33, uint(TxPIDSettings_PIDs::RollPitchAttitudeKp),
      34, uint(TxPIDSettings_PIDs::RollPitchAttitudeKi),
      35, uint(TxPIDSettings_PIDs::RollPitchAttitudeILimit),
      36, uint(TxPIDSettings_PIDs::RollPitchAttitudeResp),
      37, uint(TxPIDSettings_PIDs::YawAttitudeKp),
      38, uint(TxPIDSettings_PIDs::YawAttitudeKi),
      39, uint(TxPIDSettings_PIDs::YawAttitudeILimit),
      40, uint(TxPIDSettings_PIDs::YawAttitudeResp),
      41, uint(TxPIDSettings_PIDs::RollExpo),
      42, uint(TxPIDSettings_PIDs::PitchExpo),
      43, uint(TxPIDSettings_PIDs::RollPitchExpo),
      44, uint(TxPIDSettings_PIDs::YawExpo),
      45, uint(TxPIDSettings_PIDs::GyroTau),
      46, uint(TxPIDSettings_PIDs::AcroRollFactor),
      47, uint(TxPIDSettings_PIDs::AcroPitchFactor),
      48, uint(TxPIDSettings_PIDs::AcroRollPitchFactor),
      49, uint(TxPIDSettings_PIDs::AltitudePosKp),
      50, uint(TxPIDSettings_PIDs::AltitudeVelocityKp),
      51, uint(TxPIDSettings_PIDs::AltitudeVelocityKi),
      52, uint(TxPIDSettings_PIDs::AltitudeVelocityKd),
      53, uint(TxPIDSettings_PIDs::AltitudeVelocityBeta),
      54, uint(TxPIDSettings_PIDs::AccelTau),
      55, uint(TxPIDSettings_PIDs::AccelKp),
      56, uint(TxPIDSettings_PIDs::AccelKi),

       0        // eod
};

void TxPIDSettings_PIDs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TxPIDSettings_PIDs::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TxPIDSettings_PIDs.data,
    qt_meta_data_TxPIDSettings_PIDs,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TxPIDSettings_PIDs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TxPIDSettings_PIDs::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TxPIDSettings_PIDs.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TxPIDSettings_PIDs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TxPIDSettings_EasyTuneRatePIDRecalculateYaw_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TxPIDSettings_EasyTuneRatePIDRecalculateYaw_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TxPIDSettings_EasyTuneRatePIDRecalculateYaw_t qt_meta_stringdata_TxPIDSettings_EasyTuneRatePIDRecalculateYaw = {
    {
QT_MOC_LITERAL(0, 0, 43), // "TxPIDSettings_EasyTuneRatePID..."
QT_MOC_LITERAL(1, 44, 4), // "Enum"
QT_MOC_LITERAL(2, 49, 5), // "False"
QT_MOC_LITERAL(3, 55, 4) // "True"

    },
    "TxPIDSettings_EasyTuneRatePIDRecalculateYaw\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TxPIDSettings_EasyTuneRatePIDRecalculateYaw[] = {

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
       2, uint(TxPIDSettings_EasyTuneRatePIDRecalculateYaw::False),
       3, uint(TxPIDSettings_EasyTuneRatePIDRecalculateYaw::True),

       0        // eod
};

void TxPIDSettings_EasyTuneRatePIDRecalculateYaw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TxPIDSettings_EasyTuneRatePIDRecalculateYaw::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TxPIDSettings_EasyTuneRatePIDRecalculateYaw.data,
    qt_meta_data_TxPIDSettings_EasyTuneRatePIDRecalculateYaw,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TxPIDSettings_EasyTuneRatePIDRecalculateYaw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TxPIDSettings_EasyTuneRatePIDRecalculateYaw::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TxPIDSettings_EasyTuneRatePIDRecalculateYaw.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TxPIDSettings_EasyTuneRatePIDRecalculateYaw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TxPIDSettings_t {
    QByteArrayData data[196];
    char stringdata0[4158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TxPIDSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TxPIDSettings_t qt_meta_stringdata_TxPIDSettings = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TxPIDSettings"
QT_MOC_LITERAL(1, 14, 20), // "throttleRangeChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "index"
QT_MOC_LITERAL(4, 42, 5), // "value"
QT_MOC_LITERAL(5, 48, 20), // "ThrottleRangeChanged"
QT_MOC_LITERAL(6, 69, 23), // "throttleRangeMinChanged"
QT_MOC_LITERAL(7, 93, 24), // "ThrottleRange_MinChanged"
QT_MOC_LITERAL(8, 118, 23), // "throttleRangeMaxChanged"
QT_MOC_LITERAL(9, 142, 24), // "ThrottleRange_MaxChanged"
QT_MOC_LITERAL(10, 167, 13), // "minPIDChanged"
QT_MOC_LITERAL(11, 181, 13), // "MinPIDChanged"
QT_MOC_LITERAL(12, 195, 22), // "minPIDInstance1Changed"
QT_MOC_LITERAL(13, 218, 23), // "MinPID_Instance1Changed"
QT_MOC_LITERAL(14, 242, 22), // "minPIDInstance2Changed"
QT_MOC_LITERAL(15, 265, 23), // "MinPID_Instance2Changed"
QT_MOC_LITERAL(16, 289, 22), // "minPIDInstance3Changed"
QT_MOC_LITERAL(17, 312, 23), // "MinPID_Instance3Changed"
QT_MOC_LITERAL(18, 336, 13), // "maxPIDChanged"
QT_MOC_LITERAL(19, 350, 13), // "MaxPIDChanged"
QT_MOC_LITERAL(20, 364, 22), // "maxPIDInstance1Changed"
QT_MOC_LITERAL(21, 387, 23), // "MaxPID_Instance1Changed"
QT_MOC_LITERAL(22, 411, 22), // "maxPIDInstance2Changed"
QT_MOC_LITERAL(23, 434, 23), // "MaxPID_Instance2Changed"
QT_MOC_LITERAL(24, 458, 22), // "maxPIDInstance3Changed"
QT_MOC_LITERAL(25, 481, 23), // "MaxPID_Instance3Changed"
QT_MOC_LITERAL(26, 505, 35), // "easyTunePitchRollRateFactorsC..."
QT_MOC_LITERAL(27, 541, 35), // "EasyTunePitchRollRateFactorsC..."
QT_MOC_LITERAL(28, 577, 36), // "easyTunePitchRollRateFactorsI..."
QT_MOC_LITERAL(29, 614, 37), // "EasyTunePitchRollRateFactors_..."
QT_MOC_LITERAL(30, 652, 36), // "easyTunePitchRollRateFactorsD..."
QT_MOC_LITERAL(31, 689, 37), // "EasyTunePitchRollRateFactors_..."
QT_MOC_LITERAL(32, 727, 29), // "easyTuneYawRateFactorsChanged"
QT_MOC_LITERAL(33, 757, 29), // "EasyTuneYawRateFactorsChanged"
QT_MOC_LITERAL(34, 787, 30), // "easyTuneYawRateFactorsPChanged"
QT_MOC_LITERAL(35, 818, 31), // "EasyTuneYawRateFactors_PChanged"
QT_MOC_LITERAL(36, 850, 30), // "easyTuneYawRateFactorsIChanged"
QT_MOC_LITERAL(37, 881, 31), // "EasyTuneYawRateFactors_IChanged"
QT_MOC_LITERAL(38, 913, 30), // "easyTuneYawRateFactorsDChanged"
QT_MOC_LITERAL(39, 944, 31), // "EasyTuneYawRateFactors_DChanged"
QT_MOC_LITERAL(40, 976, 17), // "updateModeChanged"
QT_MOC_LITERAL(41, 994, 30), // "TxPIDSettings_UpdateMode::Enum"
QT_MOC_LITERAL(42, 1025, 17), // "UpdateModeChanged"
QT_MOC_LITERAL(43, 1043, 17), // "bankNumberChanged"
QT_MOC_LITERAL(44, 1061, 30), // "TxPIDSettings_BankNumber::Enum"
QT_MOC_LITERAL(45, 1092, 17), // "BankNumberChanged"
QT_MOC_LITERAL(46, 1110, 13), // "inputsChanged"
QT_MOC_LITERAL(47, 1124, 26), // "TxPIDSettings_Inputs::Enum"
QT_MOC_LITERAL(48, 1151, 13), // "InputsChanged"
QT_MOC_LITERAL(49, 1165, 22), // "inputsInstance1Changed"
QT_MOC_LITERAL(50, 1188, 23), // "Inputs_Instance1Changed"
QT_MOC_LITERAL(51, 1212, 22), // "inputsInstance2Changed"
QT_MOC_LITERAL(52, 1235, 23), // "Inputs_Instance2Changed"
QT_MOC_LITERAL(53, 1259, 22), // "inputsInstance3Changed"
QT_MOC_LITERAL(54, 1282, 23), // "Inputs_Instance3Changed"
QT_MOC_LITERAL(55, 1306, 11), // "piDsChanged"
QT_MOC_LITERAL(56, 1318, 24), // "TxPIDSettings_PIDs::Enum"
QT_MOC_LITERAL(57, 1343, 11), // "PIDsChanged"
QT_MOC_LITERAL(58, 1355, 20), // "piDsInstance1Changed"
QT_MOC_LITERAL(59, 1376, 21), // "PIDs_Instance1Changed"
QT_MOC_LITERAL(60, 1398, 20), // "piDsInstance2Changed"
QT_MOC_LITERAL(61, 1419, 21), // "PIDs_Instance2Changed"
QT_MOC_LITERAL(62, 1441, 20), // "piDsInstance3Changed"
QT_MOC_LITERAL(63, 1462, 21), // "PIDs_Instance3Changed"
QT_MOC_LITERAL(64, 1484, 36), // "easyTuneRatePIDRecalculateYaw..."
QT_MOC_LITERAL(65, 1521, 49), // "TxPIDSettings_EasyTuneRatePID..."
QT_MOC_LITERAL(66, 1571, 36), // "EasyTuneRatePIDRecalculateYaw..."
QT_MOC_LITERAL(67, 1608, 16), // "setThrottleRange"
QT_MOC_LITERAL(68, 1625, 19), // "setThrottleRangeMin"
QT_MOC_LITERAL(69, 1645, 20), // "setThrottleRange_Min"
QT_MOC_LITERAL(70, 1666, 19), // "setThrottleRangeMax"
QT_MOC_LITERAL(71, 1686, 20), // "setThrottleRange_Max"
QT_MOC_LITERAL(72, 1707, 9), // "setMinPID"
QT_MOC_LITERAL(73, 1717, 18), // "setMinPIDInstance1"
QT_MOC_LITERAL(74, 1736, 19), // "setMinPID_Instance1"
QT_MOC_LITERAL(75, 1756, 18), // "setMinPIDInstance2"
QT_MOC_LITERAL(76, 1775, 19), // "setMinPID_Instance2"
QT_MOC_LITERAL(77, 1795, 18), // "setMinPIDInstance3"
QT_MOC_LITERAL(78, 1814, 19), // "setMinPID_Instance3"
QT_MOC_LITERAL(79, 1834, 9), // "setMaxPID"
QT_MOC_LITERAL(80, 1844, 18), // "setMaxPIDInstance1"
QT_MOC_LITERAL(81, 1863, 19), // "setMaxPID_Instance1"
QT_MOC_LITERAL(82, 1883, 18), // "setMaxPIDInstance2"
QT_MOC_LITERAL(83, 1902, 19), // "setMaxPID_Instance2"
QT_MOC_LITERAL(84, 1922, 18), // "setMaxPIDInstance3"
QT_MOC_LITERAL(85, 1941, 19), // "setMaxPID_Instance3"
QT_MOC_LITERAL(86, 1961, 31), // "setEasyTunePitchRollRateFactors"
QT_MOC_LITERAL(87, 1993, 32), // "setEasyTunePitchRollRateFactorsI"
QT_MOC_LITERAL(88, 2026, 33), // "setEasyTunePitchRollRateFacto..."
QT_MOC_LITERAL(89, 2060, 32), // "setEasyTunePitchRollRateFactorsD"
QT_MOC_LITERAL(90, 2093, 33), // "setEasyTunePitchRollRateFacto..."
QT_MOC_LITERAL(91, 2127, 25), // "setEasyTuneYawRateFactors"
QT_MOC_LITERAL(92, 2153, 26), // "setEasyTuneYawRateFactorsP"
QT_MOC_LITERAL(93, 2180, 27), // "setEasyTuneYawRateFactors_P"
QT_MOC_LITERAL(94, 2208, 26), // "setEasyTuneYawRateFactorsI"
QT_MOC_LITERAL(95, 2235, 27), // "setEasyTuneYawRateFactors_I"
QT_MOC_LITERAL(96, 2263, 26), // "setEasyTuneYawRateFactorsD"
QT_MOC_LITERAL(97, 2290, 27), // "setEasyTuneYawRateFactors_D"
QT_MOC_LITERAL(98, 2318, 13), // "setUpdateMode"
QT_MOC_LITERAL(99, 2332, 13), // "setBankNumber"
QT_MOC_LITERAL(100, 2346, 9), // "setInputs"
QT_MOC_LITERAL(101, 2356, 18), // "setInputsInstance1"
QT_MOC_LITERAL(102, 2375, 19), // "setInputs_Instance1"
QT_MOC_LITERAL(103, 2395, 18), // "setInputsInstance2"
QT_MOC_LITERAL(104, 2414, 19), // "setInputs_Instance2"
QT_MOC_LITERAL(105, 2434, 18), // "setInputsInstance3"
QT_MOC_LITERAL(106, 2453, 19), // "setInputs_Instance3"
QT_MOC_LITERAL(107, 2473, 7), // "setPIDs"
QT_MOC_LITERAL(108, 2481, 16), // "setPIDsInstance1"
QT_MOC_LITERAL(109, 2498, 17), // "setPIDs_Instance1"
QT_MOC_LITERAL(110, 2516, 16), // "setPIDsInstance2"
QT_MOC_LITERAL(111, 2533, 17), // "setPIDs_Instance2"
QT_MOC_LITERAL(112, 2551, 16), // "setPIDsInstance3"
QT_MOC_LITERAL(113, 2568, 17), // "setPIDs_Instance3"
QT_MOC_LITERAL(114, 2586, 32), // "setEasyTuneRatePIDRecalculateYaw"
QT_MOC_LITERAL(115, 2619, 17), // "emitNotifications"
QT_MOC_LITERAL(116, 2637, 13), // "throttleRange"
QT_MOC_LITERAL(117, 2651, 16), // "getThrottleRange"
QT_MOC_LITERAL(118, 2668, 20), // "getThrottleRange_Min"
QT_MOC_LITERAL(119, 2689, 20), // "getThrottleRange_Max"
QT_MOC_LITERAL(120, 2710, 6), // "minPID"
QT_MOC_LITERAL(121, 2717, 9), // "getMinPID"
QT_MOC_LITERAL(122, 2727, 19), // "getMinPID_Instance1"
QT_MOC_LITERAL(123, 2747, 19), // "getMinPID_Instance2"
QT_MOC_LITERAL(124, 2767, 19), // "getMinPID_Instance3"
QT_MOC_LITERAL(125, 2787, 6), // "maxPID"
QT_MOC_LITERAL(126, 2794, 9), // "getMaxPID"
QT_MOC_LITERAL(127, 2804, 19), // "getMaxPID_Instance1"
QT_MOC_LITERAL(128, 2824, 19), // "getMaxPID_Instance2"
QT_MOC_LITERAL(129, 2844, 19), // "getMaxPID_Instance3"
QT_MOC_LITERAL(130, 2864, 28), // "easyTunePitchRollRateFactors"
QT_MOC_LITERAL(131, 2893, 31), // "getEasyTunePitchRollRateFactors"
QT_MOC_LITERAL(132, 2925, 33), // "getEasyTunePitchRollRateFacto..."
QT_MOC_LITERAL(133, 2959, 33), // "getEasyTunePitchRollRateFacto..."
QT_MOC_LITERAL(134, 2993, 22), // "easyTuneYawRateFactors"
QT_MOC_LITERAL(135, 3016, 25), // "getEasyTuneYawRateFactors"
QT_MOC_LITERAL(136, 3042, 27), // "getEasyTuneYawRateFactors_P"
QT_MOC_LITERAL(137, 3070, 27), // "getEasyTuneYawRateFactors_I"
QT_MOC_LITERAL(138, 3098, 27), // "getEasyTuneYawRateFactors_D"
QT_MOC_LITERAL(139, 3126, 13), // "getUpdateMode"
QT_MOC_LITERAL(140, 3140, 13), // "getBankNumber"
QT_MOC_LITERAL(141, 3154, 6), // "inputs"
QT_MOC_LITERAL(142, 3161, 9), // "getInputs"
QT_MOC_LITERAL(143, 3171, 19), // "getInputs_Instance1"
QT_MOC_LITERAL(144, 3191, 19), // "getInputs_Instance2"
QT_MOC_LITERAL(145, 3211, 19), // "getInputs_Instance3"
QT_MOC_LITERAL(146, 3231, 4), // "piDs"
QT_MOC_LITERAL(147, 3236, 7), // "getPIDs"
QT_MOC_LITERAL(148, 3244, 17), // "getPIDs_Instance1"
QT_MOC_LITERAL(149, 3262, 17), // "getPIDs_Instance2"
QT_MOC_LITERAL(150, 3280, 17), // "getPIDs_Instance3"
QT_MOC_LITERAL(151, 3298, 32), // "getEasyTuneRatePIDRecalculateYaw"
QT_MOC_LITERAL(152, 3331, 16), // "throttleRangeMin"
QT_MOC_LITERAL(153, 3348, 16), // "throttleRangeMax"
QT_MOC_LITERAL(154, 3365, 15), // "minPIDInstance1"
QT_MOC_LITERAL(155, 3381, 15), // "minPIDInstance2"
QT_MOC_LITERAL(156, 3397, 15), // "minPIDInstance3"
QT_MOC_LITERAL(157, 3413, 15), // "maxPIDInstance1"
QT_MOC_LITERAL(158, 3429, 15), // "maxPIDInstance2"
QT_MOC_LITERAL(159, 3445, 15), // "maxPIDInstance3"
QT_MOC_LITERAL(160, 3461, 29), // "easyTunePitchRollRateFactorsI"
QT_MOC_LITERAL(161, 3491, 29), // "easyTunePitchRollRateFactorsD"
QT_MOC_LITERAL(162, 3521, 23), // "easyTuneYawRateFactorsP"
QT_MOC_LITERAL(163, 3545, 23), // "easyTuneYawRateFactorsI"
QT_MOC_LITERAL(164, 3569, 23), // "easyTuneYawRateFactorsD"
QT_MOC_LITERAL(165, 3593, 10), // "updateMode"
QT_MOC_LITERAL(166, 3604, 10), // "bankNumber"
QT_MOC_LITERAL(167, 3615, 15), // "inputsInstance1"
QT_MOC_LITERAL(168, 3631, 15), // "inputsInstance2"
QT_MOC_LITERAL(169, 3647, 15), // "inputsInstance3"
QT_MOC_LITERAL(170, 3663, 13), // "piDsInstance1"
QT_MOC_LITERAL(171, 3677, 13), // "piDsInstance2"
QT_MOC_LITERAL(172, 3691, 13), // "piDsInstance3"
QT_MOC_LITERAL(173, 3705, 29), // "easyTuneRatePIDRecalculateYaw"
QT_MOC_LITERAL(174, 3735, 17), // "ThrottleRange_Min"
QT_MOC_LITERAL(175, 3753, 17), // "ThrottleRange_Max"
QT_MOC_LITERAL(176, 3771, 16), // "MinPID_Instance1"
QT_MOC_LITERAL(177, 3788, 16), // "MinPID_Instance2"
QT_MOC_LITERAL(178, 3805, 16), // "MinPID_Instance3"
QT_MOC_LITERAL(179, 3822, 16), // "MaxPID_Instance1"
QT_MOC_LITERAL(180, 3839, 16), // "MaxPID_Instance2"
QT_MOC_LITERAL(181, 3856, 16), // "MaxPID_Instance3"
QT_MOC_LITERAL(182, 3873, 30), // "EasyTunePitchRollRateFactors_I"
QT_MOC_LITERAL(183, 3904, 30), // "EasyTunePitchRollRateFactors_D"
QT_MOC_LITERAL(184, 3935, 24), // "EasyTuneYawRateFactors_P"
QT_MOC_LITERAL(185, 3960, 24), // "EasyTuneYawRateFactors_I"
QT_MOC_LITERAL(186, 3985, 24), // "EasyTuneYawRateFactors_D"
QT_MOC_LITERAL(187, 4010, 10), // "UpdateMode"
QT_MOC_LITERAL(188, 4021, 10), // "BankNumber"
QT_MOC_LITERAL(189, 4032, 16), // "Inputs_Instance1"
QT_MOC_LITERAL(190, 4049, 16), // "Inputs_Instance2"
QT_MOC_LITERAL(191, 4066, 16), // "Inputs_Instance3"
QT_MOC_LITERAL(192, 4083, 14), // "PIDs_Instance1"
QT_MOC_LITERAL(193, 4098, 14), // "PIDs_Instance2"
QT_MOC_LITERAL(194, 4113, 14), // "PIDs_Instance3"
QT_MOC_LITERAL(195, 4128, 29) // "EasyTuneRatePIDRecalculateYaw"

    },
    "TxPIDSettings\0throttleRangeChanged\0\0"
    "index\0value\0ThrottleRangeChanged\0"
    "throttleRangeMinChanged\0"
    "ThrottleRange_MinChanged\0"
    "throttleRangeMaxChanged\0"
    "ThrottleRange_MaxChanged\0minPIDChanged\0"
    "MinPIDChanged\0minPIDInstance1Changed\0"
    "MinPID_Instance1Changed\0minPIDInstance2Changed\0"
    "MinPID_Instance2Changed\0minPIDInstance3Changed\0"
    "MinPID_Instance3Changed\0maxPIDChanged\0"
    "MaxPIDChanged\0maxPIDInstance1Changed\0"
    "MaxPID_Instance1Changed\0maxPIDInstance2Changed\0"
    "MaxPID_Instance2Changed\0maxPIDInstance3Changed\0"
    "MaxPID_Instance3Changed\0"
    "easyTunePitchRollRateFactorsChanged\0"
    "EasyTunePitchRollRateFactorsChanged\0"
    "easyTunePitchRollRateFactorsIChanged\0"
    "EasyTunePitchRollRateFactors_IChanged\0"
    "easyTunePitchRollRateFactorsDChanged\0"
    "EasyTunePitchRollRateFactors_DChanged\0"
    "easyTuneYawRateFactorsChanged\0"
    "EasyTuneYawRateFactorsChanged\0"
    "easyTuneYawRateFactorsPChanged\0"
    "EasyTuneYawRateFactors_PChanged\0"
    "easyTuneYawRateFactorsIChanged\0"
    "EasyTuneYawRateFactors_IChanged\0"
    "easyTuneYawRateFactorsDChanged\0"
    "EasyTuneYawRateFactors_DChanged\0"
    "updateModeChanged\0TxPIDSettings_UpdateMode::Enum\0"
    "UpdateModeChanged\0bankNumberChanged\0"
    "TxPIDSettings_BankNumber::Enum\0"
    "BankNumberChanged\0inputsChanged\0"
    "TxPIDSettings_Inputs::Enum\0InputsChanged\0"
    "inputsInstance1Changed\0Inputs_Instance1Changed\0"
    "inputsInstance2Changed\0Inputs_Instance2Changed\0"
    "inputsInstance3Changed\0Inputs_Instance3Changed\0"
    "piDsChanged\0TxPIDSettings_PIDs::Enum\0"
    "PIDsChanged\0piDsInstance1Changed\0"
    "PIDs_Instance1Changed\0piDsInstance2Changed\0"
    "PIDs_Instance2Changed\0piDsInstance3Changed\0"
    "PIDs_Instance3Changed\0"
    "easyTuneRatePIDRecalculateYawChanged\0"
    "TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum\0"
    "EasyTuneRatePIDRecalculateYawChanged\0"
    "setThrottleRange\0setThrottleRangeMin\0"
    "setThrottleRange_Min\0setThrottleRangeMax\0"
    "setThrottleRange_Max\0setMinPID\0"
    "setMinPIDInstance1\0setMinPID_Instance1\0"
    "setMinPIDInstance2\0setMinPID_Instance2\0"
    "setMinPIDInstance3\0setMinPID_Instance3\0"
    "setMaxPID\0setMaxPIDInstance1\0"
    "setMaxPID_Instance1\0setMaxPIDInstance2\0"
    "setMaxPID_Instance2\0setMaxPIDInstance3\0"
    "setMaxPID_Instance3\0setEasyTunePitchRollRateFactors\0"
    "setEasyTunePitchRollRateFactorsI\0"
    "setEasyTunePitchRollRateFactors_I\0"
    "setEasyTunePitchRollRateFactorsD\0"
    "setEasyTunePitchRollRateFactors_D\0"
    "setEasyTuneYawRateFactors\0"
    "setEasyTuneYawRateFactorsP\0"
    "setEasyTuneYawRateFactors_P\0"
    "setEasyTuneYawRateFactorsI\0"
    "setEasyTuneYawRateFactors_I\0"
    "setEasyTuneYawRateFactorsD\0"
    "setEasyTuneYawRateFactors_D\0setUpdateMode\0"
    "setBankNumber\0setInputs\0setInputsInstance1\0"
    "setInputs_Instance1\0setInputsInstance2\0"
    "setInputs_Instance2\0setInputsInstance3\0"
    "setInputs_Instance3\0setPIDs\0"
    "setPIDsInstance1\0setPIDs_Instance1\0"
    "setPIDsInstance2\0setPIDs_Instance2\0"
    "setPIDsInstance3\0setPIDs_Instance3\0"
    "setEasyTuneRatePIDRecalculateYaw\0"
    "emitNotifications\0throttleRange\0"
    "getThrottleRange\0getThrottleRange_Min\0"
    "getThrottleRange_Max\0minPID\0getMinPID\0"
    "getMinPID_Instance1\0getMinPID_Instance2\0"
    "getMinPID_Instance3\0maxPID\0getMaxPID\0"
    "getMaxPID_Instance1\0getMaxPID_Instance2\0"
    "getMaxPID_Instance3\0easyTunePitchRollRateFactors\0"
    "getEasyTunePitchRollRateFactors\0"
    "getEasyTunePitchRollRateFactors_I\0"
    "getEasyTunePitchRollRateFactors_D\0"
    "easyTuneYawRateFactors\0getEasyTuneYawRateFactors\0"
    "getEasyTuneYawRateFactors_P\0"
    "getEasyTuneYawRateFactors_I\0"
    "getEasyTuneYawRateFactors_D\0getUpdateMode\0"
    "getBankNumber\0inputs\0getInputs\0"
    "getInputs_Instance1\0getInputs_Instance2\0"
    "getInputs_Instance3\0piDs\0getPIDs\0"
    "getPIDs_Instance1\0getPIDs_Instance2\0"
    "getPIDs_Instance3\0getEasyTuneRatePIDRecalculateYaw\0"
    "throttleRangeMin\0throttleRangeMax\0"
    "minPIDInstance1\0minPIDInstance2\0"
    "minPIDInstance3\0maxPIDInstance1\0"
    "maxPIDInstance2\0maxPIDInstance3\0"
    "easyTunePitchRollRateFactorsI\0"
    "easyTunePitchRollRateFactorsD\0"
    "easyTuneYawRateFactorsP\0easyTuneYawRateFactorsI\0"
    "easyTuneYawRateFactorsD\0updateMode\0"
    "bankNumber\0inputsInstance1\0inputsInstance2\0"
    "inputsInstance3\0piDsInstance1\0"
    "piDsInstance2\0piDsInstance3\0"
    "easyTuneRatePIDRecalculateYaw\0"
    "ThrottleRange_Min\0ThrottleRange_Max\0"
    "MinPID_Instance1\0MinPID_Instance2\0"
    "MinPID_Instance3\0MaxPID_Instance1\0"
    "MaxPID_Instance2\0MaxPID_Instance3\0"
    "EasyTunePitchRollRateFactors_I\0"
    "EasyTunePitchRollRateFactors_D\0"
    "EasyTuneYawRateFactors_P\0"
    "EasyTuneYawRateFactors_I\0"
    "EasyTuneYawRateFactors_D\0UpdateMode\0"
    "BankNumber\0Inputs_Instance1\0"
    "Inputs_Instance2\0Inputs_Instance3\0"
    "PIDs_Instance1\0PIDs_Instance2\0"
    "PIDs_Instance3\0EasyTuneRatePIDRecalculateYaw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TxPIDSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     148,   14, // methods
      44, 1198, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      58,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  754,    2, 0x06 /* Public */,
       5,    2,  759,    2, 0x06 /* Public */,
       6,    1,  764,    2, 0x06 /* Public */,
       7,    1,  767,    2, 0x06 /* Public */,
       8,    1,  770,    2, 0x06 /* Public */,
       9,    1,  773,    2, 0x06 /* Public */,
      10,    2,  776,    2, 0x06 /* Public */,
      11,    2,  781,    2, 0x06 /* Public */,
      12,    1,  786,    2, 0x06 /* Public */,
      13,    1,  789,    2, 0x06 /* Public */,
      14,    1,  792,    2, 0x06 /* Public */,
      15,    1,  795,    2, 0x06 /* Public */,
      16,    1,  798,    2, 0x06 /* Public */,
      17,    1,  801,    2, 0x06 /* Public */,
      18,    2,  804,    2, 0x06 /* Public */,
      19,    2,  809,    2, 0x06 /* Public */,
      20,    1,  814,    2, 0x06 /* Public */,
      21,    1,  817,    2, 0x06 /* Public */,
      22,    1,  820,    2, 0x06 /* Public */,
      23,    1,  823,    2, 0x06 /* Public */,
      24,    1,  826,    2, 0x06 /* Public */,
      25,    1,  829,    2, 0x06 /* Public */,
      26,    2,  832,    2, 0x06 /* Public */,
      27,    2,  837,    2, 0x06 /* Public */,
      28,    1,  842,    2, 0x06 /* Public */,
      29,    1,  845,    2, 0x06 /* Public */,
      30,    1,  848,    2, 0x06 /* Public */,
      31,    1,  851,    2, 0x06 /* Public */,
      32,    2,  854,    2, 0x06 /* Public */,
      33,    2,  859,    2, 0x06 /* Public */,
      34,    1,  864,    2, 0x06 /* Public */,
      35,    1,  867,    2, 0x06 /* Public */,
      36,    1,  870,    2, 0x06 /* Public */,
      37,    1,  873,    2, 0x06 /* Public */,
      38,    1,  876,    2, 0x06 /* Public */,
      39,    1,  879,    2, 0x06 /* Public */,
      40,    1,  882,    2, 0x06 /* Public */,
      42,    1,  885,    2, 0x06 /* Public */,
      43,    1,  888,    2, 0x06 /* Public */,
      45,    1,  891,    2, 0x06 /* Public */,
      46,    2,  894,    2, 0x06 /* Public */,
      48,    2,  899,    2, 0x06 /* Public */,
      49,    1,  904,    2, 0x06 /* Public */,
      50,    1,  907,    2, 0x06 /* Public */,
      51,    1,  910,    2, 0x06 /* Public */,
      52,    1,  913,    2, 0x06 /* Public */,
      53,    1,  916,    2, 0x06 /* Public */,
      54,    1,  919,    2, 0x06 /* Public */,
      55,    2,  922,    2, 0x06 /* Public */,
      57,    2,  927,    2, 0x06 /* Public */,
      58,    1,  932,    2, 0x06 /* Public */,
      59,    1,  935,    2, 0x06 /* Public */,
      60,    1,  938,    2, 0x06 /* Public */,
      61,    1,  941,    2, 0x06 /* Public */,
      62,    1,  944,    2, 0x06 /* Public */,
      63,    1,  947,    2, 0x06 /* Public */,
      64,    1,  950,    2, 0x06 /* Public */,
      66,    1,  953,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      67,    2,  956,    2, 0x0a /* Public */,
      68,    1,  961,    2, 0x0a /* Public */,
      69,    1,  964,    2, 0x0a /* Public */,
      70,    1,  967,    2, 0x0a /* Public */,
      71,    1,  970,    2, 0x0a /* Public */,
      72,    2,  973,    2, 0x0a /* Public */,
      73,    1,  978,    2, 0x0a /* Public */,
      74,    1,  981,    2, 0x0a /* Public */,
      75,    1,  984,    2, 0x0a /* Public */,
      76,    1,  987,    2, 0x0a /* Public */,
      77,    1,  990,    2, 0x0a /* Public */,
      78,    1,  993,    2, 0x0a /* Public */,
      79,    2,  996,    2, 0x0a /* Public */,
      80,    1, 1001,    2, 0x0a /* Public */,
      81,    1, 1004,    2, 0x0a /* Public */,
      82,    1, 1007,    2, 0x0a /* Public */,
      83,    1, 1010,    2, 0x0a /* Public */,
      84,    1, 1013,    2, 0x0a /* Public */,
      85,    1, 1016,    2, 0x0a /* Public */,
      86,    2, 1019,    2, 0x0a /* Public */,
      87,    1, 1024,    2, 0x0a /* Public */,
      88,    1, 1027,    2, 0x0a /* Public */,
      89,    1, 1030,    2, 0x0a /* Public */,
      90,    1, 1033,    2, 0x0a /* Public */,
      91,    2, 1036,    2, 0x0a /* Public */,
      92,    1, 1041,    2, 0x0a /* Public */,
      93,    1, 1044,    2, 0x0a /* Public */,
      94,    1, 1047,    2, 0x0a /* Public */,
      95,    1, 1050,    2, 0x0a /* Public */,
      96,    1, 1053,    2, 0x0a /* Public */,
      97,    1, 1056,    2, 0x0a /* Public */,
      98,    1, 1059,    2, 0x0a /* Public */,
      98,    1, 1062,    2, 0x0a /* Public */,
      99,    1, 1065,    2, 0x0a /* Public */,
      99,    1, 1068,    2, 0x0a /* Public */,
     100,    2, 1071,    2, 0x0a /* Public */,
     100,    2, 1076,    2, 0x0a /* Public */,
     101,    1, 1081,    2, 0x0a /* Public */,
     102,    1, 1084,    2, 0x0a /* Public */,
     103,    1, 1087,    2, 0x0a /* Public */,
     104,    1, 1090,    2, 0x0a /* Public */,
     105,    1, 1093,    2, 0x0a /* Public */,
     106,    1, 1096,    2, 0x0a /* Public */,
     107,    2, 1099,    2, 0x0a /* Public */,
     107,    2, 1104,    2, 0x0a /* Public */,
     108,    1, 1109,    2, 0x0a /* Public */,
     109,    1, 1112,    2, 0x0a /* Public */,
     110,    1, 1115,    2, 0x0a /* Public */,
     111,    1, 1118,    2, 0x0a /* Public */,
     112,    1, 1121,    2, 0x0a /* Public */,
     113,    1, 1124,    2, 0x0a /* Public */,
     114,    1, 1127,    2, 0x0a /* Public */,
     114,    1, 1130,    2, 0x0a /* Public */,
     115,    0, 1133,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     116,    1, 1134,    2, 0x02 /* Public */,
     117,    1, 1137,    2, 0x02 /* Public */,
     118,    0, 1140,    2, 0x02 /* Public */,
     119,    0, 1141,    2, 0x02 /* Public */,
     120,    1, 1142,    2, 0x02 /* Public */,
     121,    1, 1145,    2, 0x02 /* Public */,
     122,    0, 1148,    2, 0x02 /* Public */,
     123,    0, 1149,    2, 0x02 /* Public */,
     124,    0, 1150,    2, 0x02 /* Public */,
     125,    1, 1151,    2, 0x02 /* Public */,
     126,    1, 1154,    2, 0x02 /* Public */,
     127,    0, 1157,    2, 0x02 /* Public */,
     128,    0, 1158,    2, 0x02 /* Public */,
     129,    0, 1159,    2, 0x02 /* Public */,
     130,    1, 1160,    2, 0x02 /* Public */,
     131,    1, 1163,    2, 0x02 /* Public */,
     132,    0, 1166,    2, 0x02 /* Public */,
     133,    0, 1167,    2, 0x02 /* Public */,
     134,    1, 1168,    2, 0x02 /* Public */,
     135,    1, 1171,    2, 0x02 /* Public */,
     136,    0, 1174,    2, 0x02 /* Public */,
     137,    0, 1175,    2, 0x02 /* Public */,
     138,    0, 1176,    2, 0x02 /* Public */,
     139,    0, 1177,    2, 0x02 /* Public */,
     140,    0, 1178,    2, 0x02 /* Public */,
     141,    1, 1179,    2, 0x02 /* Public */,
     142,    1, 1182,    2, 0x02 /* Public */,
     143,    0, 1185,    2, 0x02 /* Public */,
     144,    0, 1186,    2, 0x02 /* Public */,
     145,    0, 1187,    2, 0x02 /* Public */,
     146,    1, 1188,    2, 0x02 /* Public */,
     147,    1, 1191,    2, 0x02 /* Public */,
     148,    0, 1194,    2, 0x02 /* Public */,
     149,    0, 1195,    2, 0x02 /* Public */,
     150,    0, 1196,    2, 0x02 /* Public */,
     151,    0, 1197,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
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
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, 0x80000000 | 41,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 44,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 47,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 47,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 47,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 47,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 56,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 56,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 56,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 56,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 65,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
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
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, 0x80000000 | 41,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 44,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 47,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 47,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 47,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 47,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 56,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 56,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 56,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 56,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 65,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
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
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,
    QMetaType::UChar,
    0x80000000 | 47, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    0x80000000 | 56, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
     152, QMetaType::Float, 0x00495103,
     153, QMetaType::Float, 0x00495103,
     154, QMetaType::Float, 0x00495103,
     155, QMetaType::Float, 0x00495103,
     156, QMetaType::Float, 0x00495103,
     157, QMetaType::Float, 0x00495103,
     158, QMetaType::Float, 0x00495103,
     159, QMetaType::Float, 0x00495103,
     160, QMetaType::Float, 0x00495103,
     161, QMetaType::Float, 0x00495103,
     162, QMetaType::Float, 0x00495103,
     163, QMetaType::Float, 0x00495103,
     164, QMetaType::Float, 0x00495103,
     165, 0x80000000 | 41, 0x0049510b,
     166, 0x80000000 | 44, 0x0049510b,
     167, 0x80000000 | 47, 0x0049510b,
     168, 0x80000000 | 47, 0x0049510b,
     169, 0x80000000 | 47, 0x0049510b,
     170, 0x80000000 | 56, 0x0049500b,
     171, 0x80000000 | 56, 0x0049500b,
     172, 0x80000000 | 56, 0x0049500b,
     173, 0x80000000 | 65, 0x0049510b,
     174, QMetaType::Float, 0x00495103,
     175, QMetaType::Float, 0x00495103,
     176, QMetaType::Float, 0x00495103,
     177, QMetaType::Float, 0x00495103,
     178, QMetaType::Float, 0x00495103,
     179, QMetaType::Float, 0x00495103,
     180, QMetaType::Float, 0x00495103,
     181, QMetaType::Float, 0x00495103,
     182, QMetaType::Float, 0x00495103,
     183, QMetaType::Float, 0x00495103,
     184, QMetaType::Float, 0x00495103,
     185, QMetaType::Float, 0x00495103,
     186, QMetaType::Float, 0x00495103,
     187, QMetaType::UChar, 0x00495103,
     188, QMetaType::UChar, 0x00495103,
     189, QMetaType::UChar, 0x00495103,
     190, QMetaType::UChar, 0x00495103,
     191, QMetaType::UChar, 0x00495103,
     192, QMetaType::UChar, 0x00495103,
     193, QMetaType::UChar, 0x00495103,
     194, QMetaType::UChar, 0x00495103,
     195, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       8,
      10,
      12,
      16,
      18,
      20,
      24,
      26,
      30,
      32,
      34,
      36,
      38,
      42,
      44,
      46,
      50,
      52,
      54,
      56,
       3,
       5,
       9,
      11,
      13,
      17,
      19,
      21,
      25,
      27,
      31,
      33,
      35,
      37,
      39,
      43,
      45,
      47,
      51,
      53,
      55,
      57,

       0        // eod
};

void TxPIDSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TxPIDSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->throttleRangeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->ThrottleRangeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->throttleRangeMinChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->ThrottleRange_MinChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->throttleRangeMaxChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->ThrottleRange_MaxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->minPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 7: _t->MinPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 8: _t->minPIDInstance1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->MinPID_Instance1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->minPIDInstance2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->MinPID_Instance2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->minPIDInstance3Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->MinPID_Instance3Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->maxPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 15: _t->MaxPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 16: _t->maxPIDInstance1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->MaxPID_Instance1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->maxPIDInstance2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->MaxPID_Instance2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->maxPIDInstance3Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->MaxPID_Instance3Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->easyTunePitchRollRateFactorsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 23: _t->EasyTunePitchRollRateFactorsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 24: _t->easyTunePitchRollRateFactorsIChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->EasyTunePitchRollRateFactors_IChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->easyTunePitchRollRateFactorsDChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->EasyTunePitchRollRateFactors_DChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->easyTuneYawRateFactorsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 29: _t->EasyTuneYawRateFactorsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 30: _t->easyTuneYawRateFactorsPChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 31: _t->EasyTuneYawRateFactors_PChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 32: _t->easyTuneYawRateFactorsIChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 33: _t->EasyTuneYawRateFactors_IChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 34: _t->easyTuneYawRateFactorsDChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->EasyTuneYawRateFactors_DChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 36: _t->updateModeChanged((*reinterpret_cast< const TxPIDSettings_UpdateMode::Enum(*)>(_a[1]))); break;
        case 37: _t->UpdateModeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->bankNumberChanged((*reinterpret_cast< const TxPIDSettings_BankNumber::Enum(*)>(_a[1]))); break;
        case 39: _t->BankNumberChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->inputsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const TxPIDSettings_Inputs::Enum(*)>(_a[2]))); break;
        case 41: _t->InputsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 42: _t->inputsInstance1Changed((*reinterpret_cast< const TxPIDSettings_Inputs::Enum(*)>(_a[1]))); break;
        case 43: _t->Inputs_Instance1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->inputsInstance2Changed((*reinterpret_cast< const TxPIDSettings_Inputs::Enum(*)>(_a[1]))); break;
        case 45: _t->Inputs_Instance2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->inputsInstance3Changed((*reinterpret_cast< const TxPIDSettings_Inputs::Enum(*)>(_a[1]))); break;
        case 47: _t->Inputs_Instance3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 48: _t->piDsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const TxPIDSettings_PIDs::Enum(*)>(_a[2]))); break;
        case 49: _t->PIDsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 50: _t->piDsInstance1Changed((*reinterpret_cast< const TxPIDSettings_PIDs::Enum(*)>(_a[1]))); break;
        case 51: _t->PIDs_Instance1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->piDsInstance2Changed((*reinterpret_cast< const TxPIDSettings_PIDs::Enum(*)>(_a[1]))); break;
        case 53: _t->PIDs_Instance2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 54: _t->piDsInstance3Changed((*reinterpret_cast< const TxPIDSettings_PIDs::Enum(*)>(_a[1]))); break;
        case 55: _t->PIDs_Instance3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 56: _t->easyTuneRatePIDRecalculateYawChanged((*reinterpret_cast< const TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum(*)>(_a[1]))); break;
        case 57: _t->EasyTuneRatePIDRecalculateYawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 58: _t->setThrottleRange((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 59: _t->setThrottleRangeMin((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 60: _t->setThrottleRange_Min((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 61: _t->setThrottleRangeMax((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 62: _t->setThrottleRange_Max((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 63: _t->setMinPID((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 64: _t->setMinPIDInstance1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 65: _t->setMinPID_Instance1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 66: _t->setMinPIDInstance2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 67: _t->setMinPID_Instance2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 68: _t->setMinPIDInstance3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 69: _t->setMinPID_Instance3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 70: _t->setMaxPID((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 71: _t->setMaxPIDInstance1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 72: _t->setMaxPID_Instance1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 73: _t->setMaxPIDInstance2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 74: _t->setMaxPID_Instance2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 75: _t->setMaxPIDInstance3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 76: _t->setMaxPID_Instance3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 77: _t->setEasyTunePitchRollRateFactors((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 78: _t->setEasyTunePitchRollRateFactorsI((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 79: _t->setEasyTunePitchRollRateFactors_I((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 80: _t->setEasyTunePitchRollRateFactorsD((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 81: _t->setEasyTunePitchRollRateFactors_D((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 82: _t->setEasyTuneYawRateFactors((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 83: _t->setEasyTuneYawRateFactorsP((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 84: _t->setEasyTuneYawRateFactors_P((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 85: _t->setEasyTuneYawRateFactorsI((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 86: _t->setEasyTuneYawRateFactors_I((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 87: _t->setEasyTuneYawRateFactorsD((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 88: _t->setEasyTuneYawRateFactors_D((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 89: _t->setUpdateMode((*reinterpret_cast< const TxPIDSettings_UpdateMode::Enum(*)>(_a[1]))); break;
        case 90: _t->setUpdateMode((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 91: _t->setBankNumber((*reinterpret_cast< const TxPIDSettings_BankNumber::Enum(*)>(_a[1]))); break;
        case 92: _t->setBankNumber((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 93: _t->setInputs((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const TxPIDSettings_Inputs::Enum(*)>(_a[2]))); break;
        case 94: _t->setInputs((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 95: _t->setInputsInstance1((*reinterpret_cast< const TxPIDSettings_Inputs::Enum(*)>(_a[1]))); break;
        case 96: _t->setInputs_Instance1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 97: _t->setInputsInstance2((*reinterpret_cast< const TxPIDSettings_Inputs::Enum(*)>(_a[1]))); break;
        case 98: _t->setInputs_Instance2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 99: _t->setInputsInstance3((*reinterpret_cast< const TxPIDSettings_Inputs::Enum(*)>(_a[1]))); break;
        case 100: _t->setInputs_Instance3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 101: _t->setPIDs((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const TxPIDSettings_PIDs::Enum(*)>(_a[2]))); break;
        case 102: _t->setPIDs((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 103: _t->setPIDsInstance1((*reinterpret_cast< const TxPIDSettings_PIDs::Enum(*)>(_a[1]))); break;
        case 104: _t->setPIDs_Instance1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 105: _t->setPIDsInstance2((*reinterpret_cast< const TxPIDSettings_PIDs::Enum(*)>(_a[1]))); break;
        case 106: _t->setPIDs_Instance2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 107: _t->setPIDsInstance3((*reinterpret_cast< const TxPIDSettings_PIDs::Enum(*)>(_a[1]))); break;
        case 108: _t->setPIDs_Instance3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 109: _t->setEasyTuneRatePIDRecalculateYaw((*reinterpret_cast< const TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum(*)>(_a[1]))); break;
        case 110: _t->setEasyTuneRatePIDRecalculateYaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 111: _t->emitNotifications(); break;
        case 112: { float _r = _t->throttleRange((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 113: { float _r = _t->getThrottleRange((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 114: { float _r = _t->getThrottleRange_Min();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 115: { float _r = _t->getThrottleRange_Max();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 116: { float _r = _t->minPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 117: { float _r = _t->getMinPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 118: { float _r = _t->getMinPID_Instance1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 119: { float _r = _t->getMinPID_Instance2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 120: { float _r = _t->getMinPID_Instance3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 121: { float _r = _t->maxPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 122: { float _r = _t->getMaxPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 123: { float _r = _t->getMaxPID_Instance1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 124: { float _r = _t->getMaxPID_Instance2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 125: { float _r = _t->getMaxPID_Instance3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 126: { float _r = _t->easyTunePitchRollRateFactors((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 127: { float _r = _t->getEasyTunePitchRollRateFactors((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 128: { float _r = _t->getEasyTunePitchRollRateFactors_I();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 129: { float _r = _t->getEasyTunePitchRollRateFactors_D();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 130: { float _r = _t->easyTuneYawRateFactors((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 131: { float _r = _t->getEasyTuneYawRateFactors((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 132: { float _r = _t->getEasyTuneYawRateFactors_P();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 133: { float _r = _t->getEasyTuneYawRateFactors_I();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 134: { float _r = _t->getEasyTuneYawRateFactors_D();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 135: { quint8 _r = _t->getUpdateMode();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 136: { quint8 _r = _t->getBankNumber();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 137: { TxPIDSettings_Inputs::Enum _r = _t->inputs((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TxPIDSettings_Inputs::Enum*>(_a[0]) = std::move(_r); }  break;
        case 138: { quint8 _r = _t->getInputs((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 139: { quint8 _r = _t->getInputs_Instance1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 140: { quint8 _r = _t->getInputs_Instance2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 141: { quint8 _r = _t->getInputs_Instance3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 142: { TxPIDSettings_PIDs::Enum _r = _t->piDs((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TxPIDSettings_PIDs::Enum*>(_a[0]) = std::move(_r); }  break;
        case 143: { quint8 _r = _t->getPIDs((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 144: { quint8 _r = _t->getPIDs_Instance1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 145: { quint8 _r = _t->getPIDs_Instance2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 146: { quint8 _r = _t->getPIDs_Instance3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 147: { quint8 _r = _t->getEasyTuneRatePIDRecalculateYaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TxPIDSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::throttleRangeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::ThrottleRangeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::throttleRangeMinChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::ThrottleRange_MinChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::throttleRangeMaxChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::ThrottleRange_MaxChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::minPIDChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::MinPIDChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::minPIDInstance1Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::MinPID_Instance1Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::minPIDInstance2Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::MinPID_Instance2Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::minPIDInstance3Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::MinPID_Instance3Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::maxPIDChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::MaxPIDChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::maxPIDInstance1Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::MaxPID_Instance1Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::maxPIDInstance2Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::MaxPID_Instance2Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::maxPIDInstance3Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::MaxPID_Instance3Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::easyTunePitchRollRateFactorsChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::EasyTunePitchRollRateFactorsChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::easyTunePitchRollRateFactorsIChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::EasyTunePitchRollRateFactors_IChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::easyTunePitchRollRateFactorsDChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::EasyTunePitchRollRateFactors_DChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::easyTuneYawRateFactorsChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::EasyTuneYawRateFactorsChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::easyTuneYawRateFactorsPChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::EasyTuneYawRateFactors_PChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::easyTuneYawRateFactorsIChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::EasyTuneYawRateFactors_IChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::easyTuneYawRateFactorsDChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::EasyTuneYawRateFactors_DChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const TxPIDSettings_UpdateMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::updateModeChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::UpdateModeChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const TxPIDSettings_BankNumber::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::bankNumberChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::BankNumberChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , const TxPIDSettings_Inputs::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::inputsChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::InputsChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const TxPIDSettings_Inputs::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::inputsInstance1Changed)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::Inputs_Instance1Changed)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const TxPIDSettings_Inputs::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::inputsInstance2Changed)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::Inputs_Instance2Changed)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const TxPIDSettings_Inputs::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::inputsInstance3Changed)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::Inputs_Instance3Changed)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , const TxPIDSettings_PIDs::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::piDsChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::PIDsChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const TxPIDSettings_PIDs::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::piDsInstance1Changed)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::PIDs_Instance1Changed)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const TxPIDSettings_PIDs::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::piDsInstance2Changed)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::PIDs_Instance2Changed)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const TxPIDSettings_PIDs::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::piDsInstance3Changed)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::PIDs_Instance3Changed)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(const TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::easyTuneRatePIDRecalculateYawChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (TxPIDSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDSettings::EasyTuneRatePIDRecalculateYawChanged)) {
                *result = 57;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TxPIDSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->throttleRangeMin(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->throttleRangeMax(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->minPIDInstance1(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->minPIDInstance2(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->minPIDInstance3(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->maxPIDInstance1(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->maxPIDInstance2(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->maxPIDInstance3(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->easyTunePitchRollRateFactorsI(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->easyTunePitchRollRateFactorsD(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->easyTuneYawRateFactorsP(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->easyTuneYawRateFactorsI(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->easyTuneYawRateFactorsD(); break;
        case 13: *reinterpret_cast< TxPIDSettings_UpdateMode::Enum*>(_v) = _t->updateMode(); break;
        case 14: *reinterpret_cast< TxPIDSettings_BankNumber::Enum*>(_v) = _t->bankNumber(); break;
        case 15: *reinterpret_cast< TxPIDSettings_Inputs::Enum*>(_v) = _t->inputsInstance1(); break;
        case 16: *reinterpret_cast< TxPIDSettings_Inputs::Enum*>(_v) = _t->inputsInstance2(); break;
        case 17: *reinterpret_cast< TxPIDSettings_Inputs::Enum*>(_v) = _t->inputsInstance3(); break;
        case 18: *reinterpret_cast< TxPIDSettings_PIDs::Enum*>(_v) = _t->piDsInstance1(); break;
        case 19: *reinterpret_cast< TxPIDSettings_PIDs::Enum*>(_v) = _t->piDsInstance2(); break;
        case 20: *reinterpret_cast< TxPIDSettings_PIDs::Enum*>(_v) = _t->piDsInstance3(); break;
        case 21: *reinterpret_cast< TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum*>(_v) = _t->easyTuneRatePIDRecalculateYaw(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getThrottleRange_Min(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getThrottleRange_Max(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getMinPID_Instance1(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->getMinPID_Instance2(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->getMinPID_Instance3(); break;
        case 27: *reinterpret_cast< float*>(_v) = _t->getMaxPID_Instance1(); break;
        case 28: *reinterpret_cast< float*>(_v) = _t->getMaxPID_Instance2(); break;
        case 29: *reinterpret_cast< float*>(_v) = _t->getMaxPID_Instance3(); break;
        case 30: *reinterpret_cast< float*>(_v) = _t->getEasyTunePitchRollRateFactors_I(); break;
        case 31: *reinterpret_cast< float*>(_v) = _t->getEasyTunePitchRollRateFactors_D(); break;
        case 32: *reinterpret_cast< float*>(_v) = _t->getEasyTuneYawRateFactors_P(); break;
        case 33: *reinterpret_cast< float*>(_v) = _t->getEasyTuneYawRateFactors_I(); break;
        case 34: *reinterpret_cast< float*>(_v) = _t->getEasyTuneYawRateFactors_D(); break;
        case 35: *reinterpret_cast< quint8*>(_v) = _t->getUpdateMode(); break;
        case 36: *reinterpret_cast< quint8*>(_v) = _t->getBankNumber(); break;
        case 37: *reinterpret_cast< quint8*>(_v) = _t->getInputs_Instance1(); break;
        case 38: *reinterpret_cast< quint8*>(_v) = _t->getInputs_Instance2(); break;
        case 39: *reinterpret_cast< quint8*>(_v) = _t->getInputs_Instance3(); break;
        case 40: *reinterpret_cast< quint8*>(_v) = _t->getPIDs_Instance1(); break;
        case 41: *reinterpret_cast< quint8*>(_v) = _t->getPIDs_Instance2(); break;
        case 42: *reinterpret_cast< quint8*>(_v) = _t->getPIDs_Instance3(); break;
        case 43: *reinterpret_cast< quint8*>(_v) = _t->getEasyTuneRatePIDRecalculateYaw(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TxPIDSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setThrottleRangeMin(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setThrottleRangeMax(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setMinPIDInstance1(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setMinPIDInstance2(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setMinPIDInstance3(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setMaxPIDInstance1(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setMaxPIDInstance2(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setMaxPIDInstance3(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setEasyTunePitchRollRateFactorsI(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setEasyTunePitchRollRateFactorsD(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setEasyTuneYawRateFactorsP(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setEasyTuneYawRateFactorsI(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setEasyTuneYawRateFactorsD(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setUpdateMode(*reinterpret_cast< TxPIDSettings_UpdateMode::Enum*>(_v)); break;
        case 14: _t->setBankNumber(*reinterpret_cast< TxPIDSettings_BankNumber::Enum*>(_v)); break;
        case 15: _t->setInputsInstance1(*reinterpret_cast< TxPIDSettings_Inputs::Enum*>(_v)); break;
        case 16: _t->setInputsInstance2(*reinterpret_cast< TxPIDSettings_Inputs::Enum*>(_v)); break;
        case 17: _t->setInputsInstance3(*reinterpret_cast< TxPIDSettings_Inputs::Enum*>(_v)); break;
        case 18: _t->setPIDsInstance1(*reinterpret_cast< TxPIDSettings_PIDs::Enum*>(_v)); break;
        case 19: _t->setPIDsInstance2(*reinterpret_cast< TxPIDSettings_PIDs::Enum*>(_v)); break;
        case 20: _t->setPIDsInstance3(*reinterpret_cast< TxPIDSettings_PIDs::Enum*>(_v)); break;
        case 21: _t->setEasyTuneRatePIDRecalculateYaw(*reinterpret_cast< TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum*>(_v)); break;
        case 22: _t->setThrottleRange_Min(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setThrottleRange_Max(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setMinPID_Instance1(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setMinPID_Instance2(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setMinPID_Instance3(*reinterpret_cast< float*>(_v)); break;
        case 27: _t->setMaxPID_Instance1(*reinterpret_cast< float*>(_v)); break;
        case 28: _t->setMaxPID_Instance2(*reinterpret_cast< float*>(_v)); break;
        case 29: _t->setMaxPID_Instance3(*reinterpret_cast< float*>(_v)); break;
        case 30: _t->setEasyTunePitchRollRateFactors_I(*reinterpret_cast< float*>(_v)); break;
        case 31: _t->setEasyTunePitchRollRateFactors_D(*reinterpret_cast< float*>(_v)); break;
        case 32: _t->setEasyTuneYawRateFactors_P(*reinterpret_cast< float*>(_v)); break;
        case 33: _t->setEasyTuneYawRateFactors_I(*reinterpret_cast< float*>(_v)); break;
        case 34: _t->setEasyTuneYawRateFactors_D(*reinterpret_cast< float*>(_v)); break;
        case 35: _t->setUpdateMode(*reinterpret_cast< quint8*>(_v)); break;
        case 36: _t->setBankNumber(*reinterpret_cast< quint8*>(_v)); break;
        case 37: _t->setInputs_Instance1(*reinterpret_cast< quint8*>(_v)); break;
        case 38: _t->setInputs_Instance2(*reinterpret_cast< quint8*>(_v)); break;
        case 39: _t->setInputs_Instance3(*reinterpret_cast< quint8*>(_v)); break;
        case 40: _t->setPIDs_Instance1(*reinterpret_cast< quint8*>(_v)); break;
        case 41: _t->setPIDs_Instance2(*reinterpret_cast< quint8*>(_v)); break;
        case 42: _t->setPIDs_Instance3(*reinterpret_cast< quint8*>(_v)); break;
        case 43: _t->setEasyTuneRatePIDRecalculateYaw(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_TxPIDSettings[] = {
        &TxPIDSettings_UpdateMode::staticMetaObject,
    &TxPIDSettings_BankNumber::staticMetaObject,
    &TxPIDSettings_Inputs::staticMetaObject,
    &TxPIDSettings_PIDs::staticMetaObject,
    &TxPIDSettings_EasyTuneRatePIDRecalculateYaw::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject TxPIDSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_TxPIDSettings.data,
    qt_meta_data_TxPIDSettings,
    qt_static_metacall,
    qt_meta_extradata_TxPIDSettings,
    nullptr
} };


const QMetaObject *TxPIDSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TxPIDSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TxPIDSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int TxPIDSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 148)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 148;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 148)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 148;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 44;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 44;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 44;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 44;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 44;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TxPIDSettings::throttleRangeChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TxPIDSettings::ThrottleRangeChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TxPIDSettings::throttleRangeMinChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TxPIDSettings::ThrottleRange_MinChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TxPIDSettings::throttleRangeMaxChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TxPIDSettings::ThrottleRange_MaxChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TxPIDSettings::minPIDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TxPIDSettings::MinPIDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TxPIDSettings::minPIDInstance1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TxPIDSettings::MinPID_Instance1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TxPIDSettings::minPIDInstance2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TxPIDSettings::MinPID_Instance2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TxPIDSettings::minPIDInstance3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void TxPIDSettings::MinPID_Instance3Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void TxPIDSettings::maxPIDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void TxPIDSettings::MaxPIDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void TxPIDSettings::maxPIDInstance1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void TxPIDSettings::MaxPID_Instance1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void TxPIDSettings::maxPIDInstance2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void TxPIDSettings::MaxPID_Instance2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void TxPIDSettings::maxPIDInstance3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void TxPIDSettings::MaxPID_Instance3Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void TxPIDSettings::easyTunePitchRollRateFactorsChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void TxPIDSettings::EasyTunePitchRollRateFactorsChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void TxPIDSettings::easyTunePitchRollRateFactorsIChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void TxPIDSettings::EasyTunePitchRollRateFactors_IChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void TxPIDSettings::easyTunePitchRollRateFactorsDChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void TxPIDSettings::EasyTunePitchRollRateFactors_DChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void TxPIDSettings::easyTuneYawRateFactorsChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void TxPIDSettings::EasyTuneYawRateFactorsChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void TxPIDSettings::easyTuneYawRateFactorsPChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void TxPIDSettings::EasyTuneYawRateFactors_PChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void TxPIDSettings::easyTuneYawRateFactorsIChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void TxPIDSettings::EasyTuneYawRateFactors_IChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void TxPIDSettings::easyTuneYawRateFactorsDChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void TxPIDSettings::EasyTuneYawRateFactors_DChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void TxPIDSettings::updateModeChanged(const TxPIDSettings_UpdateMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void TxPIDSettings::UpdateModeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void TxPIDSettings::bankNumberChanged(const TxPIDSettings_BankNumber::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void TxPIDSettings::BankNumberChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void TxPIDSettings::inputsChanged(quint32 _t1, const TxPIDSettings_Inputs::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void TxPIDSettings::InputsChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void TxPIDSettings::inputsInstance1Changed(const TxPIDSettings_Inputs::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void TxPIDSettings::Inputs_Instance1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void TxPIDSettings::inputsInstance2Changed(const TxPIDSettings_Inputs::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void TxPIDSettings::Inputs_Instance2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void TxPIDSettings::inputsInstance3Changed(const TxPIDSettings_Inputs::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void TxPIDSettings::Inputs_Instance3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void TxPIDSettings::piDsChanged(quint32 _t1, const TxPIDSettings_PIDs::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void TxPIDSettings::PIDsChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void TxPIDSettings::piDsInstance1Changed(const TxPIDSettings_PIDs::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void TxPIDSettings::PIDs_Instance1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void TxPIDSettings::piDsInstance2Changed(const TxPIDSettings_PIDs::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void TxPIDSettings::PIDs_Instance2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void TxPIDSettings::piDsInstance3Changed(const TxPIDSettings_PIDs::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void TxPIDSettings::PIDs_Instance3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void TxPIDSettings::easyTuneRatePIDRecalculateYawChanged(const TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void TxPIDSettings::EasyTuneRatePIDRecalculateYawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
