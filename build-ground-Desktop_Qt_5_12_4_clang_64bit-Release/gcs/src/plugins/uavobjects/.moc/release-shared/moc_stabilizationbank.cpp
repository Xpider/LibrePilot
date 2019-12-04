/****************************************************************************
** Meta object code from reading C++ file 'stabilizationbank.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stabilizationbank.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stabilizationbank.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StabilizationBankConstants_t {
    QByteArrayData data[7];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationBankConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationBankConstants_t qt_meta_stringdata_StabilizationBankConstants = {
    {
QT_MOC_LITERAL(0, 0, 26), // "StabilizationBankConstants"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 19), // "EnablePiroCompCount"
QT_MOC_LITERAL(3, 52, 27), // "EnableThrustPIDScalingCount"
QT_MOC_LITERAL(4, 80, 25), // "ThrustPIDScaleSourceCount"
QT_MOC_LITERAL(5, 106, 25), // "ThrustPIDScaleTargetCount"
QT_MOC_LITERAL(6, 132, 23) // "ThrustPIDScaleAxesCount"

    },
    "StabilizationBankConstants\0Enum\0"
    "EnablePiroCompCount\0EnableThrustPIDScalingCount\0"
    "ThrustPIDScaleSourceCount\0"
    "ThrustPIDScaleTargetCount\0"
    "ThrustPIDScaleAxesCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationBankConstants[] = {

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
       2, uint(StabilizationBankConstants::EnablePiroCompCount),
       3, uint(StabilizationBankConstants::EnableThrustPIDScalingCount),
       4, uint(StabilizationBankConstants::ThrustPIDScaleSourceCount),
       5, uint(StabilizationBankConstants::ThrustPIDScaleTargetCount),
       6, uint(StabilizationBankConstants::ThrustPIDScaleAxesCount),

       0        // eod
};

void StabilizationBankConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationBankConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationBankConstants.data,
    qt_meta_data_StabilizationBankConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationBankConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationBankConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationBankConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationBankConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationBank_EnablePiroComp_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationBank_EnablePiroComp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationBank_EnablePiroComp_t qt_meta_stringdata_StabilizationBank_EnablePiroComp = {
    {
QT_MOC_LITERAL(0, 0, 32), // "StabilizationBank_EnablePiroComp"
QT_MOC_LITERAL(1, 33, 4), // "Enum"
QT_MOC_LITERAL(2, 38, 5), // "False"
QT_MOC_LITERAL(3, 44, 4) // "True"

    },
    "StabilizationBank_EnablePiroComp\0Enum\0"
    "False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationBank_EnablePiroComp[] = {

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
       2, uint(StabilizationBank_EnablePiroComp::False),
       3, uint(StabilizationBank_EnablePiroComp::True),

       0        // eod
};

void StabilizationBank_EnablePiroComp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationBank_EnablePiroComp::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationBank_EnablePiroComp.data,
    qt_meta_data_StabilizationBank_EnablePiroComp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationBank_EnablePiroComp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationBank_EnablePiroComp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationBank_EnablePiroComp.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationBank_EnablePiroComp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationBank_EnableThrustPIDScaling_t {
    QByteArrayData data[4];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationBank_EnableThrustPIDScaling_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationBank_EnableThrustPIDScaling_t qt_meta_stringdata_StabilizationBank_EnableThrustPIDScaling = {
    {
QT_MOC_LITERAL(0, 0, 40), // "StabilizationBank_EnableThrus..."
QT_MOC_LITERAL(1, 41, 4), // "Enum"
QT_MOC_LITERAL(2, 46, 5), // "False"
QT_MOC_LITERAL(3, 52, 4) // "True"

    },
    "StabilizationBank_EnableThrustPIDScaling\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationBank_EnableThrustPIDScaling[] = {

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
       2, uint(StabilizationBank_EnableThrustPIDScaling::False),
       3, uint(StabilizationBank_EnableThrustPIDScaling::True),

       0        // eod
};

void StabilizationBank_EnableThrustPIDScaling::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationBank_EnableThrustPIDScaling::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationBank_EnableThrustPIDScaling.data,
    qt_meta_data_StabilizationBank_EnableThrustPIDScaling,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationBank_EnableThrustPIDScaling::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationBank_EnableThrustPIDScaling::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationBank_EnableThrustPIDScaling.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationBank_EnableThrustPIDScaling::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationBank_ThrustPIDScaleSource_t {
    QByteArrayData data[5];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationBank_ThrustPIDScaleSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationBank_ThrustPIDScaleSource_t qt_meta_stringdata_StabilizationBank_ThrustPIDScaleSource = {
    {
QT_MOC_LITERAL(0, 0, 38), // "StabilizationBank_ThrustPIDSc..."
QT_MOC_LITERAL(1, 39, 4), // "Enum"
QT_MOC_LITERAL(2, 44, 21), // "ManualControlThrottle"
QT_MOC_LITERAL(3, 66, 26), // "StabilizationDesiredThrust"
QT_MOC_LITERAL(4, 93, 21) // "ActuatorDesiredThrust"

    },
    "StabilizationBank_ThrustPIDScaleSource\0"
    "Enum\0ManualControlThrottle\0"
    "StabilizationDesiredThrust\0"
    "ActuatorDesiredThrust"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationBank_ThrustPIDScaleSource[] = {

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
       2, uint(StabilizationBank_ThrustPIDScaleSource::ManualControlThrottle),
       3, uint(StabilizationBank_ThrustPIDScaleSource::StabilizationDesiredThrust),
       4, uint(StabilizationBank_ThrustPIDScaleSource::ActuatorDesiredThrust),

       0        // eod
};

void StabilizationBank_ThrustPIDScaleSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationBank_ThrustPIDScaleSource::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationBank_ThrustPIDScaleSource.data,
    qt_meta_data_StabilizationBank_ThrustPIDScaleSource,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationBank_ThrustPIDScaleSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationBank_ThrustPIDScaleSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationBank_ThrustPIDScaleSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationBank_ThrustPIDScaleSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationBank_ThrustPIDScaleTarget_t {
    QByteArrayData data[9];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationBank_ThrustPIDScaleTarget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationBank_ThrustPIDScaleTarget_t qt_meta_stringdata_StabilizationBank_ThrustPIDScaleTarget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "StabilizationBank_ThrustPIDSc..."
QT_MOC_LITERAL(1, 39, 4), // "Enum"
QT_MOC_LITERAL(2, 44, 3), // "PID"
QT_MOC_LITERAL(3, 48, 2), // "PI"
QT_MOC_LITERAL(4, 51, 2), // "PD"
QT_MOC_LITERAL(5, 54, 2), // "ID"
QT_MOC_LITERAL(6, 57, 1), // "P"
QT_MOC_LITERAL(7, 59, 1), // "I"
QT_MOC_LITERAL(8, 61, 1) // "D"

    },
    "StabilizationBank_ThrustPIDScaleTarget\0"
    "Enum\0PID\0PI\0PD\0ID\0P\0I\0D"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationBank_ThrustPIDScaleTarget[] = {

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
       2, uint(StabilizationBank_ThrustPIDScaleTarget::PID),
       3, uint(StabilizationBank_ThrustPIDScaleTarget::PI),
       4, uint(StabilizationBank_ThrustPIDScaleTarget::PD),
       5, uint(StabilizationBank_ThrustPIDScaleTarget::ID),
       6, uint(StabilizationBank_ThrustPIDScaleTarget::P),
       7, uint(StabilizationBank_ThrustPIDScaleTarget::I),
       8, uint(StabilizationBank_ThrustPIDScaleTarget::D),

       0        // eod
};

void StabilizationBank_ThrustPIDScaleTarget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationBank_ThrustPIDScaleTarget::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationBank_ThrustPIDScaleTarget.data,
    qt_meta_data_StabilizationBank_ThrustPIDScaleTarget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationBank_ThrustPIDScaleTarget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationBank_ThrustPIDScaleTarget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationBank_ThrustPIDScaleTarget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationBank_ThrustPIDScaleTarget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationBank_ThrustPIDScaleAxes_t {
    QByteArrayData data[9];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationBank_ThrustPIDScaleAxes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationBank_ThrustPIDScaleAxes_t qt_meta_stringdata_StabilizationBank_ThrustPIDScaleAxes = {
    {
QT_MOC_LITERAL(0, 0, 36), // "StabilizationBank_ThrustPIDSc..."
QT_MOC_LITERAL(1, 37, 4), // "Enum"
QT_MOC_LITERAL(2, 42, 12), // "RollPitchYaw"
QT_MOC_LITERAL(3, 55, 9), // "RollPitch"
QT_MOC_LITERAL(4, 65, 7), // "RollYaw"
QT_MOC_LITERAL(5, 73, 4), // "Roll"
QT_MOC_LITERAL(6, 78, 8), // "PitchYaw"
QT_MOC_LITERAL(7, 87, 5), // "Pitch"
QT_MOC_LITERAL(8, 93, 3) // "Yaw"

    },
    "StabilizationBank_ThrustPIDScaleAxes\0"
    "Enum\0RollPitchYaw\0RollPitch\0RollYaw\0"
    "Roll\0PitchYaw\0Pitch\0Yaw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationBank_ThrustPIDScaleAxes[] = {

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
       2, uint(StabilizationBank_ThrustPIDScaleAxes::RollPitchYaw),
       3, uint(StabilizationBank_ThrustPIDScaleAxes::RollPitch),
       4, uint(StabilizationBank_ThrustPIDScaleAxes::RollYaw),
       5, uint(StabilizationBank_ThrustPIDScaleAxes::Roll),
       6, uint(StabilizationBank_ThrustPIDScaleAxes::PitchYaw),
       7, uint(StabilizationBank_ThrustPIDScaleAxes::Pitch),
       8, uint(StabilizationBank_ThrustPIDScaleAxes::Yaw),

       0        // eod
};

void StabilizationBank_ThrustPIDScaleAxes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationBank_ThrustPIDScaleAxes::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationBank_ThrustPIDScaleAxes.data,
    qt_meta_data_StabilizationBank_ThrustPIDScaleAxes,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationBank_ThrustPIDScaleAxes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationBank_ThrustPIDScaleAxes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationBank_ThrustPIDScaleAxes.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationBank_ThrustPIDScaleAxes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationBank_t {
    QByteArrayData data[411];
    char stringdata0[8029];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationBank_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationBank_t qt_meta_stringdata_StabilizationBank = {
    {
QT_MOC_LITERAL(0, 0, 17), // "StabilizationBank"
QT_MOC_LITERAL(1, 18, 26), // "attitudeFeedForwardChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5), // "index"
QT_MOC_LITERAL(4, 52, 5), // "value"
QT_MOC_LITERAL(5, 58, 26), // "AttitudeFeedForwardChanged"
QT_MOC_LITERAL(6, 85, 30), // "attitudeFeedForwardRollChanged"
QT_MOC_LITERAL(7, 116, 31), // "AttitudeFeedForward_RollChanged"
QT_MOC_LITERAL(8, 148, 31), // "attitudeFeedForwardPitchChanged"
QT_MOC_LITERAL(9, 180, 32), // "AttitudeFeedForward_PitchChanged"
QT_MOC_LITERAL(10, 213, 29), // "attitudeFeedForwardYawChanged"
QT_MOC_LITERAL(11, 243, 30), // "AttitudeFeedForward_YawChanged"
QT_MOC_LITERAL(12, 274, 18), // "rollRatePIDChanged"
QT_MOC_LITERAL(13, 293, 18), // "RollRatePIDChanged"
QT_MOC_LITERAL(14, 312, 20), // "rollRatePIDKpChanged"
QT_MOC_LITERAL(15, 333, 21), // "RollRatePID_KpChanged"
QT_MOC_LITERAL(16, 355, 20), // "rollRatePIDKiChanged"
QT_MOC_LITERAL(17, 376, 21), // "RollRatePID_KiChanged"
QT_MOC_LITERAL(18, 398, 20), // "rollRatePIDKdChanged"
QT_MOC_LITERAL(19, 419, 21), // "RollRatePID_KdChanged"
QT_MOC_LITERAL(20, 441, 24), // "rollRatePIDILimitChanged"
QT_MOC_LITERAL(21, 466, 25), // "RollRatePID_ILimitChanged"
QT_MOC_LITERAL(22, 492, 19), // "pitchRatePIDChanged"
QT_MOC_LITERAL(23, 512, 19), // "PitchRatePIDChanged"
QT_MOC_LITERAL(24, 532, 21), // "pitchRatePIDKpChanged"
QT_MOC_LITERAL(25, 554, 22), // "PitchRatePID_KpChanged"
QT_MOC_LITERAL(26, 577, 21), // "pitchRatePIDKiChanged"
QT_MOC_LITERAL(27, 599, 22), // "PitchRatePID_KiChanged"
QT_MOC_LITERAL(28, 622, 21), // "pitchRatePIDKdChanged"
QT_MOC_LITERAL(29, 644, 22), // "PitchRatePID_KdChanged"
QT_MOC_LITERAL(30, 667, 25), // "pitchRatePIDILimitChanged"
QT_MOC_LITERAL(31, 693, 26), // "PitchRatePID_ILimitChanged"
QT_MOC_LITERAL(32, 720, 17), // "yawRatePIDChanged"
QT_MOC_LITERAL(33, 738, 17), // "YawRatePIDChanged"
QT_MOC_LITERAL(34, 756, 19), // "yawRatePIDKpChanged"
QT_MOC_LITERAL(35, 776, 20), // "YawRatePID_KpChanged"
QT_MOC_LITERAL(36, 797, 19), // "yawRatePIDKiChanged"
QT_MOC_LITERAL(37, 817, 20), // "YawRatePID_KiChanged"
QT_MOC_LITERAL(38, 838, 19), // "yawRatePIDKdChanged"
QT_MOC_LITERAL(39, 858, 20), // "YawRatePID_KdChanged"
QT_MOC_LITERAL(40, 879, 23), // "yawRatePIDILimitChanged"
QT_MOC_LITERAL(41, 903, 24), // "YawRatePID_ILimitChanged"
QT_MOC_LITERAL(42, 928, 13), // "rollPIChanged"
QT_MOC_LITERAL(43, 942, 13), // "RollPIChanged"
QT_MOC_LITERAL(44, 956, 15), // "rollPIKpChanged"
QT_MOC_LITERAL(45, 972, 16), // "RollPI_KpChanged"
QT_MOC_LITERAL(46, 989, 15), // "rollPIKiChanged"
QT_MOC_LITERAL(47, 1005, 16), // "RollPI_KiChanged"
QT_MOC_LITERAL(48, 1022, 19), // "rollPIILimitChanged"
QT_MOC_LITERAL(49, 1042, 20), // "RollPI_ILimitChanged"
QT_MOC_LITERAL(50, 1063, 14), // "pitchPIChanged"
QT_MOC_LITERAL(51, 1078, 14), // "PitchPIChanged"
QT_MOC_LITERAL(52, 1093, 16), // "pitchPIKpChanged"
QT_MOC_LITERAL(53, 1110, 17), // "PitchPI_KpChanged"
QT_MOC_LITERAL(54, 1128, 16), // "pitchPIKiChanged"
QT_MOC_LITERAL(55, 1145, 17), // "PitchPI_KiChanged"
QT_MOC_LITERAL(56, 1163, 20), // "pitchPIILimitChanged"
QT_MOC_LITERAL(57, 1184, 21), // "PitchPI_ILimitChanged"
QT_MOC_LITERAL(58, 1206, 12), // "yawPIChanged"
QT_MOC_LITERAL(59, 1219, 12), // "YawPIChanged"
QT_MOC_LITERAL(60, 1232, 14), // "yawPIKpChanged"
QT_MOC_LITERAL(61, 1247, 15), // "YawPI_KpChanged"
QT_MOC_LITERAL(62, 1263, 14), // "yawPIKiChanged"
QT_MOC_LITERAL(63, 1278, 15), // "YawPI_KiChanged"
QT_MOC_LITERAL(64, 1294, 18), // "yawPIILimitChanged"
QT_MOC_LITERAL(65, 1313, 19), // "YawPI_ILimitChanged"
QT_MOC_LITERAL(66, 1333, 17), // "manualRateChanged"
QT_MOC_LITERAL(67, 1351, 17), // "ManualRateChanged"
QT_MOC_LITERAL(68, 1369, 21), // "manualRateRollChanged"
QT_MOC_LITERAL(69, 1391, 22), // "ManualRate_RollChanged"
QT_MOC_LITERAL(70, 1414, 22), // "manualRatePitchChanged"
QT_MOC_LITERAL(71, 1437, 23), // "ManualRate_PitchChanged"
QT_MOC_LITERAL(72, 1461, 20), // "manualRateYawChanged"
QT_MOC_LITERAL(73, 1482, 21), // "ManualRate_YawChanged"
QT_MOC_LITERAL(74, 1504, 18), // "maximumRateChanged"
QT_MOC_LITERAL(75, 1523, 18), // "MaximumRateChanged"
QT_MOC_LITERAL(76, 1542, 22), // "maximumRateRollChanged"
QT_MOC_LITERAL(77, 1565, 23), // "MaximumRate_RollChanged"
QT_MOC_LITERAL(78, 1589, 23), // "maximumRatePitchChanged"
QT_MOC_LITERAL(79, 1613, 24), // "MaximumRate_PitchChanged"
QT_MOC_LITERAL(80, 1638, 21), // "maximumRateYawChanged"
QT_MOC_LITERAL(81, 1660, 22), // "MaximumRate_YawChanged"
QT_MOC_LITERAL(82, 1683, 14), // "rollMaxChanged"
QT_MOC_LITERAL(83, 1698, 14), // "RollMaxChanged"
QT_MOC_LITERAL(84, 1713, 15), // "pitchMaxChanged"
QT_MOC_LITERAL(85, 1729, 15), // "PitchMaxChanged"
QT_MOC_LITERAL(86, 1745, 13), // "yawMaxChanged"
QT_MOC_LITERAL(87, 1759, 13), // "YawMaxChanged"
QT_MOC_LITERAL(88, 1773, 16), // "stickExpoChanged"
QT_MOC_LITERAL(89, 1790, 16), // "StickExpoChanged"
QT_MOC_LITERAL(90, 1807, 20), // "stickExpoRollChanged"
QT_MOC_LITERAL(91, 1828, 21), // "StickExpo_RollChanged"
QT_MOC_LITERAL(92, 1850, 21), // "stickExpoPitchChanged"
QT_MOC_LITERAL(93, 1872, 22), // "StickExpo_PitchChanged"
QT_MOC_LITERAL(94, 1895, 19), // "stickExpoYawChanged"
QT_MOC_LITERAL(95, 1915, 20), // "StickExpo_YawChanged"
QT_MOC_LITERAL(96, 1936, 25), // "acroInsanityFactorChanged"
QT_MOC_LITERAL(97, 1962, 25), // "AcroInsanityFactorChanged"
QT_MOC_LITERAL(98, 1988, 29), // "acroInsanityFactorRollChanged"
QT_MOC_LITERAL(99, 2018, 30), // "AcroInsanityFactor_RollChanged"
QT_MOC_LITERAL(100, 2049, 30), // "acroInsanityFactorPitchChanged"
QT_MOC_LITERAL(101, 2080, 31), // "AcroInsanityFactor_PitchChanged"
QT_MOC_LITERAL(102, 2112, 28), // "acroInsanityFactorYawChanged"
QT_MOC_LITERAL(103, 2141, 29), // "AcroInsanityFactor_YawChanged"
QT_MOC_LITERAL(104, 2171, 21), // "enablePiroCompChanged"
QT_MOC_LITERAL(105, 2193, 38), // "StabilizationBank_EnablePiroC..."
QT_MOC_LITERAL(106, 2232, 21), // "EnablePiroCompChanged"
QT_MOC_LITERAL(107, 2254, 29), // "fpvCamTiltCompensationChanged"
QT_MOC_LITERAL(108, 2284, 29), // "FpvCamTiltCompensationChanged"
QT_MOC_LITERAL(109, 2314, 29), // "enableThrustPIDScalingChanged"
QT_MOC_LITERAL(110, 2344, 46), // "StabilizationBank_EnableThrus..."
QT_MOC_LITERAL(111, 2391, 29), // "EnableThrustPIDScalingChanged"
QT_MOC_LITERAL(112, 2421, 26), // "thrustPIDScaleCurveChanged"
QT_MOC_LITERAL(113, 2448, 26), // "ThrustPIDScaleCurveChanged"
QT_MOC_LITERAL(114, 2475, 27), // "thrustPIDScaleCurve0Changed"
QT_MOC_LITERAL(115, 2503, 28), // "ThrustPIDScaleCurve_0Changed"
QT_MOC_LITERAL(116, 2532, 28), // "thrustPIDScaleCurve25Changed"
QT_MOC_LITERAL(117, 2561, 29), // "ThrustPIDScaleCurve_25Changed"
QT_MOC_LITERAL(118, 2591, 28), // "thrustPIDScaleCurve50Changed"
QT_MOC_LITERAL(119, 2620, 29), // "ThrustPIDScaleCurve_50Changed"
QT_MOC_LITERAL(120, 2650, 28), // "thrustPIDScaleCurve75Changed"
QT_MOC_LITERAL(121, 2679, 29), // "ThrustPIDScaleCurve_75Changed"
QT_MOC_LITERAL(122, 2709, 29), // "thrustPIDScaleCurve100Changed"
QT_MOC_LITERAL(123, 2739, 30), // "ThrustPIDScaleCurve_100Changed"
QT_MOC_LITERAL(124, 2770, 27), // "thrustPIDScaleSourceChanged"
QT_MOC_LITERAL(125, 2798, 44), // "StabilizationBank_ThrustPIDSc..."
QT_MOC_LITERAL(126, 2843, 27), // "ThrustPIDScaleSourceChanged"
QT_MOC_LITERAL(127, 2871, 27), // "thrustPIDScaleTargetChanged"
QT_MOC_LITERAL(128, 2899, 44), // "StabilizationBank_ThrustPIDSc..."
QT_MOC_LITERAL(129, 2944, 27), // "ThrustPIDScaleTargetChanged"
QT_MOC_LITERAL(130, 2972, 25), // "thrustPIDScaleAxesChanged"
QT_MOC_LITERAL(131, 2998, 42), // "StabilizationBank_ThrustPIDSc..."
QT_MOC_LITERAL(132, 3041, 25), // "ThrustPIDScaleAxesChanged"
QT_MOC_LITERAL(133, 3067, 22), // "setAttitudeFeedForward"
QT_MOC_LITERAL(134, 3090, 26), // "setAttitudeFeedForwardRoll"
QT_MOC_LITERAL(135, 3117, 27), // "setAttitudeFeedForward_Roll"
QT_MOC_LITERAL(136, 3145, 27), // "setAttitudeFeedForwardPitch"
QT_MOC_LITERAL(137, 3173, 28), // "setAttitudeFeedForward_Pitch"
QT_MOC_LITERAL(138, 3202, 25), // "setAttitudeFeedForwardYaw"
QT_MOC_LITERAL(139, 3228, 26), // "setAttitudeFeedForward_Yaw"
QT_MOC_LITERAL(140, 3255, 14), // "setRollRatePID"
QT_MOC_LITERAL(141, 3270, 16), // "setRollRatePIDKp"
QT_MOC_LITERAL(142, 3287, 17), // "setRollRatePID_Kp"
QT_MOC_LITERAL(143, 3305, 16), // "setRollRatePIDKi"
QT_MOC_LITERAL(144, 3322, 17), // "setRollRatePID_Ki"
QT_MOC_LITERAL(145, 3340, 16), // "setRollRatePIDKd"
QT_MOC_LITERAL(146, 3357, 17), // "setRollRatePID_Kd"
QT_MOC_LITERAL(147, 3375, 20), // "setRollRatePIDILimit"
QT_MOC_LITERAL(148, 3396, 21), // "setRollRatePID_ILimit"
QT_MOC_LITERAL(149, 3418, 15), // "setPitchRatePID"
QT_MOC_LITERAL(150, 3434, 17), // "setPitchRatePIDKp"
QT_MOC_LITERAL(151, 3452, 18), // "setPitchRatePID_Kp"
QT_MOC_LITERAL(152, 3471, 17), // "setPitchRatePIDKi"
QT_MOC_LITERAL(153, 3489, 18), // "setPitchRatePID_Ki"
QT_MOC_LITERAL(154, 3508, 17), // "setPitchRatePIDKd"
QT_MOC_LITERAL(155, 3526, 18), // "setPitchRatePID_Kd"
QT_MOC_LITERAL(156, 3545, 21), // "setPitchRatePIDILimit"
QT_MOC_LITERAL(157, 3567, 22), // "setPitchRatePID_ILimit"
QT_MOC_LITERAL(158, 3590, 13), // "setYawRatePID"
QT_MOC_LITERAL(159, 3604, 15), // "setYawRatePIDKp"
QT_MOC_LITERAL(160, 3620, 16), // "setYawRatePID_Kp"
QT_MOC_LITERAL(161, 3637, 15), // "setYawRatePIDKi"
QT_MOC_LITERAL(162, 3653, 16), // "setYawRatePID_Ki"
QT_MOC_LITERAL(163, 3670, 15), // "setYawRatePIDKd"
QT_MOC_LITERAL(164, 3686, 16), // "setYawRatePID_Kd"
QT_MOC_LITERAL(165, 3703, 19), // "setYawRatePIDILimit"
QT_MOC_LITERAL(166, 3723, 20), // "setYawRatePID_ILimit"
QT_MOC_LITERAL(167, 3744, 9), // "setRollPI"
QT_MOC_LITERAL(168, 3754, 11), // "setRollPIKp"
QT_MOC_LITERAL(169, 3766, 12), // "setRollPI_Kp"
QT_MOC_LITERAL(170, 3779, 11), // "setRollPIKi"
QT_MOC_LITERAL(171, 3791, 12), // "setRollPI_Ki"
QT_MOC_LITERAL(172, 3804, 15), // "setRollPIILimit"
QT_MOC_LITERAL(173, 3820, 16), // "setRollPI_ILimit"
QT_MOC_LITERAL(174, 3837, 10), // "setPitchPI"
QT_MOC_LITERAL(175, 3848, 12), // "setPitchPIKp"
QT_MOC_LITERAL(176, 3861, 13), // "setPitchPI_Kp"
QT_MOC_LITERAL(177, 3875, 12), // "setPitchPIKi"
QT_MOC_LITERAL(178, 3888, 13), // "setPitchPI_Ki"
QT_MOC_LITERAL(179, 3902, 16), // "setPitchPIILimit"
QT_MOC_LITERAL(180, 3919, 17), // "setPitchPI_ILimit"
QT_MOC_LITERAL(181, 3937, 8), // "setYawPI"
QT_MOC_LITERAL(182, 3946, 10), // "setYawPIKp"
QT_MOC_LITERAL(183, 3957, 11), // "setYawPI_Kp"
QT_MOC_LITERAL(184, 3969, 10), // "setYawPIKi"
QT_MOC_LITERAL(185, 3980, 11), // "setYawPI_Ki"
QT_MOC_LITERAL(186, 3992, 14), // "setYawPIILimit"
QT_MOC_LITERAL(187, 4007, 15), // "setYawPI_ILimit"
QT_MOC_LITERAL(188, 4023, 13), // "setManualRate"
QT_MOC_LITERAL(189, 4037, 17), // "setManualRateRoll"
QT_MOC_LITERAL(190, 4055, 18), // "setManualRate_Roll"
QT_MOC_LITERAL(191, 4074, 18), // "setManualRatePitch"
QT_MOC_LITERAL(192, 4093, 19), // "setManualRate_Pitch"
QT_MOC_LITERAL(193, 4113, 16), // "setManualRateYaw"
QT_MOC_LITERAL(194, 4130, 17), // "setManualRate_Yaw"
QT_MOC_LITERAL(195, 4148, 14), // "setMaximumRate"
QT_MOC_LITERAL(196, 4163, 18), // "setMaximumRateRoll"
QT_MOC_LITERAL(197, 4182, 19), // "setMaximumRate_Roll"
QT_MOC_LITERAL(198, 4202, 19), // "setMaximumRatePitch"
QT_MOC_LITERAL(199, 4222, 20), // "setMaximumRate_Pitch"
QT_MOC_LITERAL(200, 4243, 17), // "setMaximumRateYaw"
QT_MOC_LITERAL(201, 4261, 18), // "setMaximumRate_Yaw"
QT_MOC_LITERAL(202, 4280, 10), // "setRollMax"
QT_MOC_LITERAL(203, 4291, 11), // "setPitchMax"
QT_MOC_LITERAL(204, 4303, 9), // "setYawMax"
QT_MOC_LITERAL(205, 4313, 12), // "setStickExpo"
QT_MOC_LITERAL(206, 4326, 16), // "setStickExpoRoll"
QT_MOC_LITERAL(207, 4343, 17), // "setStickExpo_Roll"
QT_MOC_LITERAL(208, 4361, 17), // "setStickExpoPitch"
QT_MOC_LITERAL(209, 4379, 18), // "setStickExpo_Pitch"
QT_MOC_LITERAL(210, 4398, 15), // "setStickExpoYaw"
QT_MOC_LITERAL(211, 4414, 16), // "setStickExpo_Yaw"
QT_MOC_LITERAL(212, 4431, 21), // "setAcroInsanityFactor"
QT_MOC_LITERAL(213, 4453, 25), // "setAcroInsanityFactorRoll"
QT_MOC_LITERAL(214, 4479, 26), // "setAcroInsanityFactor_Roll"
QT_MOC_LITERAL(215, 4506, 26), // "setAcroInsanityFactorPitch"
QT_MOC_LITERAL(216, 4533, 27), // "setAcroInsanityFactor_Pitch"
QT_MOC_LITERAL(217, 4561, 24), // "setAcroInsanityFactorYaw"
QT_MOC_LITERAL(218, 4586, 25), // "setAcroInsanityFactor_Yaw"
QT_MOC_LITERAL(219, 4612, 17), // "setEnablePiroComp"
QT_MOC_LITERAL(220, 4630, 25), // "setFpvCamTiltCompensation"
QT_MOC_LITERAL(221, 4656, 25), // "setEnableThrustPIDScaling"
QT_MOC_LITERAL(222, 4682, 22), // "setThrustPIDScaleCurve"
QT_MOC_LITERAL(223, 4705, 23), // "setThrustPIDScaleCurve0"
QT_MOC_LITERAL(224, 4729, 24), // "setThrustPIDScaleCurve_0"
QT_MOC_LITERAL(225, 4754, 24), // "setThrustPIDScaleCurve25"
QT_MOC_LITERAL(226, 4779, 25), // "setThrustPIDScaleCurve_25"
QT_MOC_LITERAL(227, 4805, 24), // "setThrustPIDScaleCurve50"
QT_MOC_LITERAL(228, 4830, 25), // "setThrustPIDScaleCurve_50"
QT_MOC_LITERAL(229, 4856, 24), // "setThrustPIDScaleCurve75"
QT_MOC_LITERAL(230, 4881, 25), // "setThrustPIDScaleCurve_75"
QT_MOC_LITERAL(231, 4907, 25), // "setThrustPIDScaleCurve100"
QT_MOC_LITERAL(232, 4933, 26), // "setThrustPIDScaleCurve_100"
QT_MOC_LITERAL(233, 4960, 23), // "setThrustPIDScaleSource"
QT_MOC_LITERAL(234, 4984, 23), // "setThrustPIDScaleTarget"
QT_MOC_LITERAL(235, 5008, 21), // "setThrustPIDScaleAxes"
QT_MOC_LITERAL(236, 5030, 17), // "emitNotifications"
QT_MOC_LITERAL(237, 5048, 19), // "attitudeFeedForward"
QT_MOC_LITERAL(238, 5068, 22), // "getAttitudeFeedForward"
QT_MOC_LITERAL(239, 5091, 27), // "getAttitudeFeedForward_Roll"
QT_MOC_LITERAL(240, 5119, 28), // "getAttitudeFeedForward_Pitch"
QT_MOC_LITERAL(241, 5148, 26), // "getAttitudeFeedForward_Yaw"
QT_MOC_LITERAL(242, 5175, 11), // "rollRatePID"
QT_MOC_LITERAL(243, 5187, 14), // "getRollRatePID"
QT_MOC_LITERAL(244, 5202, 17), // "getRollRatePID_Kp"
QT_MOC_LITERAL(245, 5220, 17), // "getRollRatePID_Ki"
QT_MOC_LITERAL(246, 5238, 17), // "getRollRatePID_Kd"
QT_MOC_LITERAL(247, 5256, 21), // "getRollRatePID_ILimit"
QT_MOC_LITERAL(248, 5278, 12), // "pitchRatePID"
QT_MOC_LITERAL(249, 5291, 15), // "getPitchRatePID"
QT_MOC_LITERAL(250, 5307, 18), // "getPitchRatePID_Kp"
QT_MOC_LITERAL(251, 5326, 18), // "getPitchRatePID_Ki"
QT_MOC_LITERAL(252, 5345, 18), // "getPitchRatePID_Kd"
QT_MOC_LITERAL(253, 5364, 22), // "getPitchRatePID_ILimit"
QT_MOC_LITERAL(254, 5387, 10), // "yawRatePID"
QT_MOC_LITERAL(255, 5398, 13), // "getYawRatePID"
QT_MOC_LITERAL(256, 5412, 16), // "getYawRatePID_Kp"
QT_MOC_LITERAL(257, 5429, 16), // "getYawRatePID_Ki"
QT_MOC_LITERAL(258, 5446, 16), // "getYawRatePID_Kd"
QT_MOC_LITERAL(259, 5463, 20), // "getYawRatePID_ILimit"
QT_MOC_LITERAL(260, 5484, 6), // "rollPI"
QT_MOC_LITERAL(261, 5491, 9), // "getRollPI"
QT_MOC_LITERAL(262, 5501, 12), // "getRollPI_Kp"
QT_MOC_LITERAL(263, 5514, 12), // "getRollPI_Ki"
QT_MOC_LITERAL(264, 5527, 16), // "getRollPI_ILimit"
QT_MOC_LITERAL(265, 5544, 7), // "pitchPI"
QT_MOC_LITERAL(266, 5552, 10), // "getPitchPI"
QT_MOC_LITERAL(267, 5563, 13), // "getPitchPI_Kp"
QT_MOC_LITERAL(268, 5577, 13), // "getPitchPI_Ki"
QT_MOC_LITERAL(269, 5591, 17), // "getPitchPI_ILimit"
QT_MOC_LITERAL(270, 5609, 5), // "yawPI"
QT_MOC_LITERAL(271, 5615, 8), // "getYawPI"
QT_MOC_LITERAL(272, 5624, 11), // "getYawPI_Kp"
QT_MOC_LITERAL(273, 5636, 11), // "getYawPI_Ki"
QT_MOC_LITERAL(274, 5648, 15), // "getYawPI_ILimit"
QT_MOC_LITERAL(275, 5664, 10), // "manualRate"
QT_MOC_LITERAL(276, 5675, 13), // "getManualRate"
QT_MOC_LITERAL(277, 5689, 18), // "getManualRate_Roll"
QT_MOC_LITERAL(278, 5708, 19), // "getManualRate_Pitch"
QT_MOC_LITERAL(279, 5728, 17), // "getManualRate_Yaw"
QT_MOC_LITERAL(280, 5746, 11), // "maximumRate"
QT_MOC_LITERAL(281, 5758, 14), // "getMaximumRate"
QT_MOC_LITERAL(282, 5773, 19), // "getMaximumRate_Roll"
QT_MOC_LITERAL(283, 5793, 20), // "getMaximumRate_Pitch"
QT_MOC_LITERAL(284, 5814, 18), // "getMaximumRate_Yaw"
QT_MOC_LITERAL(285, 5833, 10), // "getRollMax"
QT_MOC_LITERAL(286, 5844, 11), // "getPitchMax"
QT_MOC_LITERAL(287, 5856, 9), // "getYawMax"
QT_MOC_LITERAL(288, 5866, 9), // "stickExpo"
QT_MOC_LITERAL(289, 5876, 12), // "getStickExpo"
QT_MOC_LITERAL(290, 5889, 17), // "getStickExpo_Roll"
QT_MOC_LITERAL(291, 5907, 18), // "getStickExpo_Pitch"
QT_MOC_LITERAL(292, 5926, 16), // "getStickExpo_Yaw"
QT_MOC_LITERAL(293, 5943, 18), // "acroInsanityFactor"
QT_MOC_LITERAL(294, 5962, 21), // "getAcroInsanityFactor"
QT_MOC_LITERAL(295, 5984, 26), // "getAcroInsanityFactor_Roll"
QT_MOC_LITERAL(296, 6011, 27), // "getAcroInsanityFactor_Pitch"
QT_MOC_LITERAL(297, 6039, 25), // "getAcroInsanityFactor_Yaw"
QT_MOC_LITERAL(298, 6065, 17), // "getEnablePiroComp"
QT_MOC_LITERAL(299, 6083, 25), // "getFpvCamTiltCompensation"
QT_MOC_LITERAL(300, 6109, 25), // "getEnableThrustPIDScaling"
QT_MOC_LITERAL(301, 6135, 19), // "thrustPIDScaleCurve"
QT_MOC_LITERAL(302, 6155, 22), // "getThrustPIDScaleCurve"
QT_MOC_LITERAL(303, 6178, 24), // "getThrustPIDScaleCurve_0"
QT_MOC_LITERAL(304, 6203, 25), // "getThrustPIDScaleCurve_25"
QT_MOC_LITERAL(305, 6229, 25), // "getThrustPIDScaleCurve_50"
QT_MOC_LITERAL(306, 6255, 25), // "getThrustPIDScaleCurve_75"
QT_MOC_LITERAL(307, 6281, 26), // "getThrustPIDScaleCurve_100"
QT_MOC_LITERAL(308, 6308, 23), // "getThrustPIDScaleSource"
QT_MOC_LITERAL(309, 6332, 23), // "getThrustPIDScaleTarget"
QT_MOC_LITERAL(310, 6356, 21), // "getThrustPIDScaleAxes"
QT_MOC_LITERAL(311, 6378, 23), // "attitudeFeedForwardRoll"
QT_MOC_LITERAL(312, 6402, 24), // "attitudeFeedForwardPitch"
QT_MOC_LITERAL(313, 6427, 22), // "attitudeFeedForwardYaw"
QT_MOC_LITERAL(314, 6450, 13), // "rollRatePIDKp"
QT_MOC_LITERAL(315, 6464, 13), // "rollRatePIDKi"
QT_MOC_LITERAL(316, 6478, 13), // "rollRatePIDKd"
QT_MOC_LITERAL(317, 6492, 17), // "rollRatePIDILimit"
QT_MOC_LITERAL(318, 6510, 14), // "pitchRatePIDKp"
QT_MOC_LITERAL(319, 6525, 14), // "pitchRatePIDKi"
QT_MOC_LITERAL(320, 6540, 14), // "pitchRatePIDKd"
QT_MOC_LITERAL(321, 6555, 18), // "pitchRatePIDILimit"
QT_MOC_LITERAL(322, 6574, 12), // "yawRatePIDKp"
QT_MOC_LITERAL(323, 6587, 12), // "yawRatePIDKi"
QT_MOC_LITERAL(324, 6600, 12), // "yawRatePIDKd"
QT_MOC_LITERAL(325, 6613, 16), // "yawRatePIDILimit"
QT_MOC_LITERAL(326, 6630, 8), // "rollPIKp"
QT_MOC_LITERAL(327, 6639, 8), // "rollPIKi"
QT_MOC_LITERAL(328, 6648, 12), // "rollPIILimit"
QT_MOC_LITERAL(329, 6661, 9), // "pitchPIKp"
QT_MOC_LITERAL(330, 6671, 9), // "pitchPIKi"
QT_MOC_LITERAL(331, 6681, 13), // "pitchPIILimit"
QT_MOC_LITERAL(332, 6695, 7), // "yawPIKp"
QT_MOC_LITERAL(333, 6703, 7), // "yawPIKi"
QT_MOC_LITERAL(334, 6711, 11), // "yawPIILimit"
QT_MOC_LITERAL(335, 6723, 14), // "manualRateRoll"
QT_MOC_LITERAL(336, 6738, 15), // "manualRatePitch"
QT_MOC_LITERAL(337, 6754, 13), // "manualRateYaw"
QT_MOC_LITERAL(338, 6768, 15), // "maximumRateRoll"
QT_MOC_LITERAL(339, 6784, 16), // "maximumRatePitch"
QT_MOC_LITERAL(340, 6801, 14), // "maximumRateYaw"
QT_MOC_LITERAL(341, 6816, 7), // "rollMax"
QT_MOC_LITERAL(342, 6824, 8), // "pitchMax"
QT_MOC_LITERAL(343, 6833, 6), // "yawMax"
QT_MOC_LITERAL(344, 6840, 13), // "stickExpoRoll"
QT_MOC_LITERAL(345, 6854, 14), // "stickExpoPitch"
QT_MOC_LITERAL(346, 6869, 12), // "stickExpoYaw"
QT_MOC_LITERAL(347, 6882, 22), // "acroInsanityFactorRoll"
QT_MOC_LITERAL(348, 6905, 23), // "acroInsanityFactorPitch"
QT_MOC_LITERAL(349, 6929, 21), // "acroInsanityFactorYaw"
QT_MOC_LITERAL(350, 6951, 14), // "enablePiroComp"
QT_MOC_LITERAL(351, 6966, 22), // "fpvCamTiltCompensation"
QT_MOC_LITERAL(352, 6989, 22), // "enableThrustPIDScaling"
QT_MOC_LITERAL(353, 7012, 20), // "thrustPIDScaleCurve0"
QT_MOC_LITERAL(354, 7033, 21), // "thrustPIDScaleCurve25"
QT_MOC_LITERAL(355, 7055, 21), // "thrustPIDScaleCurve50"
QT_MOC_LITERAL(356, 7077, 21), // "thrustPIDScaleCurve75"
QT_MOC_LITERAL(357, 7099, 22), // "thrustPIDScaleCurve100"
QT_MOC_LITERAL(358, 7122, 20), // "thrustPIDScaleSource"
QT_MOC_LITERAL(359, 7143, 20), // "thrustPIDScaleTarget"
QT_MOC_LITERAL(360, 7164, 18), // "thrustPIDScaleAxes"
QT_MOC_LITERAL(361, 7183, 24), // "AttitudeFeedForward_Roll"
QT_MOC_LITERAL(362, 7208, 25), // "AttitudeFeedForward_Pitch"
QT_MOC_LITERAL(363, 7234, 23), // "AttitudeFeedForward_Yaw"
QT_MOC_LITERAL(364, 7258, 14), // "RollRatePID_Kp"
QT_MOC_LITERAL(365, 7273, 14), // "RollRatePID_Ki"
QT_MOC_LITERAL(366, 7288, 14), // "RollRatePID_Kd"
QT_MOC_LITERAL(367, 7303, 18), // "RollRatePID_ILimit"
QT_MOC_LITERAL(368, 7322, 15), // "PitchRatePID_Kp"
QT_MOC_LITERAL(369, 7338, 15), // "PitchRatePID_Ki"
QT_MOC_LITERAL(370, 7354, 15), // "PitchRatePID_Kd"
QT_MOC_LITERAL(371, 7370, 19), // "PitchRatePID_ILimit"
QT_MOC_LITERAL(372, 7390, 13), // "YawRatePID_Kp"
QT_MOC_LITERAL(373, 7404, 13), // "YawRatePID_Ki"
QT_MOC_LITERAL(374, 7418, 13), // "YawRatePID_Kd"
QT_MOC_LITERAL(375, 7432, 17), // "YawRatePID_ILimit"
QT_MOC_LITERAL(376, 7450, 9), // "RollPI_Kp"
QT_MOC_LITERAL(377, 7460, 9), // "RollPI_Ki"
QT_MOC_LITERAL(378, 7470, 13), // "RollPI_ILimit"
QT_MOC_LITERAL(379, 7484, 10), // "PitchPI_Kp"
QT_MOC_LITERAL(380, 7495, 10), // "PitchPI_Ki"
QT_MOC_LITERAL(381, 7506, 14), // "PitchPI_ILimit"
QT_MOC_LITERAL(382, 7521, 8), // "YawPI_Kp"
QT_MOC_LITERAL(383, 7530, 8), // "YawPI_Ki"
QT_MOC_LITERAL(384, 7539, 12), // "YawPI_ILimit"
QT_MOC_LITERAL(385, 7552, 15), // "ManualRate_Roll"
QT_MOC_LITERAL(386, 7568, 16), // "ManualRate_Pitch"
QT_MOC_LITERAL(387, 7585, 14), // "ManualRate_Yaw"
QT_MOC_LITERAL(388, 7600, 16), // "MaximumRate_Roll"
QT_MOC_LITERAL(389, 7617, 17), // "MaximumRate_Pitch"
QT_MOC_LITERAL(390, 7635, 15), // "MaximumRate_Yaw"
QT_MOC_LITERAL(391, 7651, 7), // "RollMax"
QT_MOC_LITERAL(392, 7659, 8), // "PitchMax"
QT_MOC_LITERAL(393, 7668, 6), // "YawMax"
QT_MOC_LITERAL(394, 7675, 14), // "StickExpo_Roll"
QT_MOC_LITERAL(395, 7690, 15), // "StickExpo_Pitch"
QT_MOC_LITERAL(396, 7706, 13), // "StickExpo_Yaw"
QT_MOC_LITERAL(397, 7720, 23), // "AcroInsanityFactor_Roll"
QT_MOC_LITERAL(398, 7744, 24), // "AcroInsanityFactor_Pitch"
QT_MOC_LITERAL(399, 7769, 22), // "AcroInsanityFactor_Yaw"
QT_MOC_LITERAL(400, 7792, 14), // "EnablePiroComp"
QT_MOC_LITERAL(401, 7807, 22), // "FpvCamTiltCompensation"
QT_MOC_LITERAL(402, 7830, 22), // "EnableThrustPIDScaling"
QT_MOC_LITERAL(403, 7853, 21), // "ThrustPIDScaleCurve_0"
QT_MOC_LITERAL(404, 7875, 22), // "ThrustPIDScaleCurve_25"
QT_MOC_LITERAL(405, 7898, 22), // "ThrustPIDScaleCurve_50"
QT_MOC_LITERAL(406, 7921, 22), // "ThrustPIDScaleCurve_75"
QT_MOC_LITERAL(407, 7944, 23), // "ThrustPIDScaleCurve_100"
QT_MOC_LITERAL(408, 7968, 20), // "ThrustPIDScaleSource"
QT_MOC_LITERAL(409, 7989, 20), // "ThrustPIDScaleTarget"
QT_MOC_LITERAL(410, 8010, 18) // "ThrustPIDScaleAxes"

    },
    "StabilizationBank\0attitudeFeedForwardChanged\0"
    "\0index\0value\0AttitudeFeedForwardChanged\0"
    "attitudeFeedForwardRollChanged\0"
    "AttitudeFeedForward_RollChanged\0"
    "attitudeFeedForwardPitchChanged\0"
    "AttitudeFeedForward_PitchChanged\0"
    "attitudeFeedForwardYawChanged\0"
    "AttitudeFeedForward_YawChanged\0"
    "rollRatePIDChanged\0RollRatePIDChanged\0"
    "rollRatePIDKpChanged\0RollRatePID_KpChanged\0"
    "rollRatePIDKiChanged\0RollRatePID_KiChanged\0"
    "rollRatePIDKdChanged\0RollRatePID_KdChanged\0"
    "rollRatePIDILimitChanged\0"
    "RollRatePID_ILimitChanged\0pitchRatePIDChanged\0"
    "PitchRatePIDChanged\0pitchRatePIDKpChanged\0"
    "PitchRatePID_KpChanged\0pitchRatePIDKiChanged\0"
    "PitchRatePID_KiChanged\0pitchRatePIDKdChanged\0"
    "PitchRatePID_KdChanged\0pitchRatePIDILimitChanged\0"
    "PitchRatePID_ILimitChanged\0yawRatePIDChanged\0"
    "YawRatePIDChanged\0yawRatePIDKpChanged\0"
    "YawRatePID_KpChanged\0yawRatePIDKiChanged\0"
    "YawRatePID_KiChanged\0yawRatePIDKdChanged\0"
    "YawRatePID_KdChanged\0yawRatePIDILimitChanged\0"
    "YawRatePID_ILimitChanged\0rollPIChanged\0"
    "RollPIChanged\0rollPIKpChanged\0"
    "RollPI_KpChanged\0rollPIKiChanged\0"
    "RollPI_KiChanged\0rollPIILimitChanged\0"
    "RollPI_ILimitChanged\0pitchPIChanged\0"
    "PitchPIChanged\0pitchPIKpChanged\0"
    "PitchPI_KpChanged\0pitchPIKiChanged\0"
    "PitchPI_KiChanged\0pitchPIILimitChanged\0"
    "PitchPI_ILimitChanged\0yawPIChanged\0"
    "YawPIChanged\0yawPIKpChanged\0YawPI_KpChanged\0"
    "yawPIKiChanged\0YawPI_KiChanged\0"
    "yawPIILimitChanged\0YawPI_ILimitChanged\0"
    "manualRateChanged\0ManualRateChanged\0"
    "manualRateRollChanged\0ManualRate_RollChanged\0"
    "manualRatePitchChanged\0ManualRate_PitchChanged\0"
    "manualRateYawChanged\0ManualRate_YawChanged\0"
    "maximumRateChanged\0MaximumRateChanged\0"
    "maximumRateRollChanged\0MaximumRate_RollChanged\0"
    "maximumRatePitchChanged\0"
    "MaximumRate_PitchChanged\0maximumRateYawChanged\0"
    "MaximumRate_YawChanged\0rollMaxChanged\0"
    "RollMaxChanged\0pitchMaxChanged\0"
    "PitchMaxChanged\0yawMaxChanged\0"
    "YawMaxChanged\0stickExpoChanged\0"
    "StickExpoChanged\0stickExpoRollChanged\0"
    "StickExpo_RollChanged\0stickExpoPitchChanged\0"
    "StickExpo_PitchChanged\0stickExpoYawChanged\0"
    "StickExpo_YawChanged\0acroInsanityFactorChanged\0"
    "AcroInsanityFactorChanged\0"
    "acroInsanityFactorRollChanged\0"
    "AcroInsanityFactor_RollChanged\0"
    "acroInsanityFactorPitchChanged\0"
    "AcroInsanityFactor_PitchChanged\0"
    "acroInsanityFactorYawChanged\0"
    "AcroInsanityFactor_YawChanged\0"
    "enablePiroCompChanged\0"
    "StabilizationBank_EnablePiroComp::Enum\0"
    "EnablePiroCompChanged\0"
    "fpvCamTiltCompensationChanged\0"
    "FpvCamTiltCompensationChanged\0"
    "enableThrustPIDScalingChanged\0"
    "StabilizationBank_EnableThrustPIDScaling::Enum\0"
    "EnableThrustPIDScalingChanged\0"
    "thrustPIDScaleCurveChanged\0"
    "ThrustPIDScaleCurveChanged\0"
    "thrustPIDScaleCurve0Changed\0"
    "ThrustPIDScaleCurve_0Changed\0"
    "thrustPIDScaleCurve25Changed\0"
    "ThrustPIDScaleCurve_25Changed\0"
    "thrustPIDScaleCurve50Changed\0"
    "ThrustPIDScaleCurve_50Changed\0"
    "thrustPIDScaleCurve75Changed\0"
    "ThrustPIDScaleCurve_75Changed\0"
    "thrustPIDScaleCurve100Changed\0"
    "ThrustPIDScaleCurve_100Changed\0"
    "thrustPIDScaleSourceChanged\0"
    "StabilizationBank_ThrustPIDScaleSource::Enum\0"
    "ThrustPIDScaleSourceChanged\0"
    "thrustPIDScaleTargetChanged\0"
    "StabilizationBank_ThrustPIDScaleTarget::Enum\0"
    "ThrustPIDScaleTargetChanged\0"
    "thrustPIDScaleAxesChanged\0"
    "StabilizationBank_ThrustPIDScaleAxes::Enum\0"
    "ThrustPIDScaleAxesChanged\0"
    "setAttitudeFeedForward\0"
    "setAttitudeFeedForwardRoll\0"
    "setAttitudeFeedForward_Roll\0"
    "setAttitudeFeedForwardPitch\0"
    "setAttitudeFeedForward_Pitch\0"
    "setAttitudeFeedForwardYaw\0"
    "setAttitudeFeedForward_Yaw\0setRollRatePID\0"
    "setRollRatePIDKp\0setRollRatePID_Kp\0"
    "setRollRatePIDKi\0setRollRatePID_Ki\0"
    "setRollRatePIDKd\0setRollRatePID_Kd\0"
    "setRollRatePIDILimit\0setRollRatePID_ILimit\0"
    "setPitchRatePID\0setPitchRatePIDKp\0"
    "setPitchRatePID_Kp\0setPitchRatePIDKi\0"
    "setPitchRatePID_Ki\0setPitchRatePIDKd\0"
    "setPitchRatePID_Kd\0setPitchRatePIDILimit\0"
    "setPitchRatePID_ILimit\0setYawRatePID\0"
    "setYawRatePIDKp\0setYawRatePID_Kp\0"
    "setYawRatePIDKi\0setYawRatePID_Ki\0"
    "setYawRatePIDKd\0setYawRatePID_Kd\0"
    "setYawRatePIDILimit\0setYawRatePID_ILimit\0"
    "setRollPI\0setRollPIKp\0setRollPI_Kp\0"
    "setRollPIKi\0setRollPI_Ki\0setRollPIILimit\0"
    "setRollPI_ILimit\0setPitchPI\0setPitchPIKp\0"
    "setPitchPI_Kp\0setPitchPIKi\0setPitchPI_Ki\0"
    "setPitchPIILimit\0setPitchPI_ILimit\0"
    "setYawPI\0setYawPIKp\0setYawPI_Kp\0"
    "setYawPIKi\0setYawPI_Ki\0setYawPIILimit\0"
    "setYawPI_ILimit\0setManualRate\0"
    "setManualRateRoll\0setManualRate_Roll\0"
    "setManualRatePitch\0setManualRate_Pitch\0"
    "setManualRateYaw\0setManualRate_Yaw\0"
    "setMaximumRate\0setMaximumRateRoll\0"
    "setMaximumRate_Roll\0setMaximumRatePitch\0"
    "setMaximumRate_Pitch\0setMaximumRateYaw\0"
    "setMaximumRate_Yaw\0setRollMax\0setPitchMax\0"
    "setYawMax\0setStickExpo\0setStickExpoRoll\0"
    "setStickExpo_Roll\0setStickExpoPitch\0"
    "setStickExpo_Pitch\0setStickExpoYaw\0"
    "setStickExpo_Yaw\0setAcroInsanityFactor\0"
    "setAcroInsanityFactorRoll\0"
    "setAcroInsanityFactor_Roll\0"
    "setAcroInsanityFactorPitch\0"
    "setAcroInsanityFactor_Pitch\0"
    "setAcroInsanityFactorYaw\0"
    "setAcroInsanityFactor_Yaw\0setEnablePiroComp\0"
    "setFpvCamTiltCompensation\0"
    "setEnableThrustPIDScaling\0"
    "setThrustPIDScaleCurve\0setThrustPIDScaleCurve0\0"
    "setThrustPIDScaleCurve_0\0"
    "setThrustPIDScaleCurve25\0"
    "setThrustPIDScaleCurve_25\0"
    "setThrustPIDScaleCurve50\0"
    "setThrustPIDScaleCurve_50\0"
    "setThrustPIDScaleCurve75\0"
    "setThrustPIDScaleCurve_75\0"
    "setThrustPIDScaleCurve100\0"
    "setThrustPIDScaleCurve_100\0"
    "setThrustPIDScaleSource\0setThrustPIDScaleTarget\0"
    "setThrustPIDScaleAxes\0emitNotifications\0"
    "attitudeFeedForward\0getAttitudeFeedForward\0"
    "getAttitudeFeedForward_Roll\0"
    "getAttitudeFeedForward_Pitch\0"
    "getAttitudeFeedForward_Yaw\0rollRatePID\0"
    "getRollRatePID\0getRollRatePID_Kp\0"
    "getRollRatePID_Ki\0getRollRatePID_Kd\0"
    "getRollRatePID_ILimit\0pitchRatePID\0"
    "getPitchRatePID\0getPitchRatePID_Kp\0"
    "getPitchRatePID_Ki\0getPitchRatePID_Kd\0"
    "getPitchRatePID_ILimit\0yawRatePID\0"
    "getYawRatePID\0getYawRatePID_Kp\0"
    "getYawRatePID_Ki\0getYawRatePID_Kd\0"
    "getYawRatePID_ILimit\0rollPI\0getRollPI\0"
    "getRollPI_Kp\0getRollPI_Ki\0getRollPI_ILimit\0"
    "pitchPI\0getPitchPI\0getPitchPI_Kp\0"
    "getPitchPI_Ki\0getPitchPI_ILimit\0yawPI\0"
    "getYawPI\0getYawPI_Kp\0getYawPI_Ki\0"
    "getYawPI_ILimit\0manualRate\0getManualRate\0"
    "getManualRate_Roll\0getManualRate_Pitch\0"
    "getManualRate_Yaw\0maximumRate\0"
    "getMaximumRate\0getMaximumRate_Roll\0"
    "getMaximumRate_Pitch\0getMaximumRate_Yaw\0"
    "getRollMax\0getPitchMax\0getYawMax\0"
    "stickExpo\0getStickExpo\0getStickExpo_Roll\0"
    "getStickExpo_Pitch\0getStickExpo_Yaw\0"
    "acroInsanityFactor\0getAcroInsanityFactor\0"
    "getAcroInsanityFactor_Roll\0"
    "getAcroInsanityFactor_Pitch\0"
    "getAcroInsanityFactor_Yaw\0getEnablePiroComp\0"
    "getFpvCamTiltCompensation\0"
    "getEnableThrustPIDScaling\0thrustPIDScaleCurve\0"
    "getThrustPIDScaleCurve\0getThrustPIDScaleCurve_0\0"
    "getThrustPIDScaleCurve_25\0"
    "getThrustPIDScaleCurve_50\0"
    "getThrustPIDScaleCurve_75\0"
    "getThrustPIDScaleCurve_100\0"
    "getThrustPIDScaleSource\0getThrustPIDScaleTarget\0"
    "getThrustPIDScaleAxes\0attitudeFeedForwardRoll\0"
    "attitudeFeedForwardPitch\0"
    "attitudeFeedForwardYaw\0rollRatePIDKp\0"
    "rollRatePIDKi\0rollRatePIDKd\0"
    "rollRatePIDILimit\0pitchRatePIDKp\0"
    "pitchRatePIDKi\0pitchRatePIDKd\0"
    "pitchRatePIDILimit\0yawRatePIDKp\0"
    "yawRatePIDKi\0yawRatePIDKd\0yawRatePIDILimit\0"
    "rollPIKp\0rollPIKi\0rollPIILimit\0pitchPIKp\0"
    "pitchPIKi\0pitchPIILimit\0yawPIKp\0yawPIKi\0"
    "yawPIILimit\0manualRateRoll\0manualRatePitch\0"
    "manualRateYaw\0maximumRateRoll\0"
    "maximumRatePitch\0maximumRateYaw\0rollMax\0"
    "pitchMax\0yawMax\0stickExpoRoll\0"
    "stickExpoPitch\0stickExpoYaw\0"
    "acroInsanityFactorRoll\0acroInsanityFactorPitch\0"
    "acroInsanityFactorYaw\0enablePiroComp\0"
    "fpvCamTiltCompensation\0enableThrustPIDScaling\0"
    "thrustPIDScaleCurve0\0thrustPIDScaleCurve25\0"
    "thrustPIDScaleCurve50\0thrustPIDScaleCurve75\0"
    "thrustPIDScaleCurve100\0thrustPIDScaleSource\0"
    "thrustPIDScaleTarget\0thrustPIDScaleAxes\0"
    "AttitudeFeedForward_Roll\0"
    "AttitudeFeedForward_Pitch\0"
    "AttitudeFeedForward_Yaw\0RollRatePID_Kp\0"
    "RollRatePID_Ki\0RollRatePID_Kd\0"
    "RollRatePID_ILimit\0PitchRatePID_Kp\0"
    "PitchRatePID_Ki\0PitchRatePID_Kd\0"
    "PitchRatePID_ILimit\0YawRatePID_Kp\0"
    "YawRatePID_Ki\0YawRatePID_Kd\0"
    "YawRatePID_ILimit\0RollPI_Kp\0RollPI_Ki\0"
    "RollPI_ILimit\0PitchPI_Kp\0PitchPI_Ki\0"
    "PitchPI_ILimit\0YawPI_Kp\0YawPI_Ki\0"
    "YawPI_ILimit\0ManualRate_Roll\0"
    "ManualRate_Pitch\0ManualRate_Yaw\0"
    "MaximumRate_Roll\0MaximumRate_Pitch\0"
    "MaximumRate_Yaw\0RollMax\0PitchMax\0"
    "YawMax\0StickExpo_Roll\0StickExpo_Pitch\0"
    "StickExpo_Yaw\0AcroInsanityFactor_Roll\0"
    "AcroInsanityFactor_Pitch\0"
    "AcroInsanityFactor_Yaw\0EnablePiroComp\0"
    "FpvCamTiltCompensation\0EnableThrustPIDScaling\0"
    "ThrustPIDScaleCurve_0\0ThrustPIDScaleCurve_25\0"
    "ThrustPIDScaleCurve_50\0ThrustPIDScaleCurve_75\0"
    "ThrustPIDScaleCurve_100\0ThrustPIDScaleSource\0"
    "ThrustPIDScaleTarget\0ThrustPIDScaleAxes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationBank[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     314,   14, // methods
     100, 2502, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     124,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2, 1584,    2, 0x06 /* Public */,
       5,    2, 1589,    2, 0x06 /* Public */,
       6,    1, 1594,    2, 0x06 /* Public */,
       7,    1, 1597,    2, 0x06 /* Public */,
       8,    1, 1600,    2, 0x06 /* Public */,
       9,    1, 1603,    2, 0x06 /* Public */,
      10,    1, 1606,    2, 0x06 /* Public */,
      11,    1, 1609,    2, 0x06 /* Public */,
      12,    2, 1612,    2, 0x06 /* Public */,
      13,    2, 1617,    2, 0x06 /* Public */,
      14,    1, 1622,    2, 0x06 /* Public */,
      15,    1, 1625,    2, 0x06 /* Public */,
      16,    1, 1628,    2, 0x06 /* Public */,
      17,    1, 1631,    2, 0x06 /* Public */,
      18,    1, 1634,    2, 0x06 /* Public */,
      19,    1, 1637,    2, 0x06 /* Public */,
      20,    1, 1640,    2, 0x06 /* Public */,
      21,    1, 1643,    2, 0x06 /* Public */,
      22,    2, 1646,    2, 0x06 /* Public */,
      23,    2, 1651,    2, 0x06 /* Public */,
      24,    1, 1656,    2, 0x06 /* Public */,
      25,    1, 1659,    2, 0x06 /* Public */,
      26,    1, 1662,    2, 0x06 /* Public */,
      27,    1, 1665,    2, 0x06 /* Public */,
      28,    1, 1668,    2, 0x06 /* Public */,
      29,    1, 1671,    2, 0x06 /* Public */,
      30,    1, 1674,    2, 0x06 /* Public */,
      31,    1, 1677,    2, 0x06 /* Public */,
      32,    2, 1680,    2, 0x06 /* Public */,
      33,    2, 1685,    2, 0x06 /* Public */,
      34,    1, 1690,    2, 0x06 /* Public */,
      35,    1, 1693,    2, 0x06 /* Public */,
      36,    1, 1696,    2, 0x06 /* Public */,
      37,    1, 1699,    2, 0x06 /* Public */,
      38,    1, 1702,    2, 0x06 /* Public */,
      39,    1, 1705,    2, 0x06 /* Public */,
      40,    1, 1708,    2, 0x06 /* Public */,
      41,    1, 1711,    2, 0x06 /* Public */,
      42,    2, 1714,    2, 0x06 /* Public */,
      43,    2, 1719,    2, 0x06 /* Public */,
      44,    1, 1724,    2, 0x06 /* Public */,
      45,    1, 1727,    2, 0x06 /* Public */,
      46,    1, 1730,    2, 0x06 /* Public */,
      47,    1, 1733,    2, 0x06 /* Public */,
      48,    1, 1736,    2, 0x06 /* Public */,
      49,    1, 1739,    2, 0x06 /* Public */,
      50,    2, 1742,    2, 0x06 /* Public */,
      51,    2, 1747,    2, 0x06 /* Public */,
      52,    1, 1752,    2, 0x06 /* Public */,
      53,    1, 1755,    2, 0x06 /* Public */,
      54,    1, 1758,    2, 0x06 /* Public */,
      55,    1, 1761,    2, 0x06 /* Public */,
      56,    1, 1764,    2, 0x06 /* Public */,
      57,    1, 1767,    2, 0x06 /* Public */,
      58,    2, 1770,    2, 0x06 /* Public */,
      59,    2, 1775,    2, 0x06 /* Public */,
      60,    1, 1780,    2, 0x06 /* Public */,
      61,    1, 1783,    2, 0x06 /* Public */,
      62,    1, 1786,    2, 0x06 /* Public */,
      63,    1, 1789,    2, 0x06 /* Public */,
      64,    1, 1792,    2, 0x06 /* Public */,
      65,    1, 1795,    2, 0x06 /* Public */,
      66,    2, 1798,    2, 0x06 /* Public */,
      67,    2, 1803,    2, 0x06 /* Public */,
      68,    1, 1808,    2, 0x06 /* Public */,
      69,    1, 1811,    2, 0x06 /* Public */,
      70,    1, 1814,    2, 0x06 /* Public */,
      71,    1, 1817,    2, 0x06 /* Public */,
      72,    1, 1820,    2, 0x06 /* Public */,
      73,    1, 1823,    2, 0x06 /* Public */,
      74,    2, 1826,    2, 0x06 /* Public */,
      75,    2, 1831,    2, 0x06 /* Public */,
      76,    1, 1836,    2, 0x06 /* Public */,
      77,    1, 1839,    2, 0x06 /* Public */,
      78,    1, 1842,    2, 0x06 /* Public */,
      79,    1, 1845,    2, 0x06 /* Public */,
      80,    1, 1848,    2, 0x06 /* Public */,
      81,    1, 1851,    2, 0x06 /* Public */,
      82,    1, 1854,    2, 0x06 /* Public */,
      83,    1, 1857,    2, 0x06 /* Public */,
      84,    1, 1860,    2, 0x06 /* Public */,
      85,    1, 1863,    2, 0x06 /* Public */,
      86,    1, 1866,    2, 0x06 /* Public */,
      87,    1, 1869,    2, 0x06 /* Public */,
      88,    2, 1872,    2, 0x06 /* Public */,
      89,    2, 1877,    2, 0x06 /* Public */,
      90,    1, 1882,    2, 0x06 /* Public */,
      91,    1, 1885,    2, 0x06 /* Public */,
      92,    1, 1888,    2, 0x06 /* Public */,
      93,    1, 1891,    2, 0x06 /* Public */,
      94,    1, 1894,    2, 0x06 /* Public */,
      95,    1, 1897,    2, 0x06 /* Public */,
      96,    2, 1900,    2, 0x06 /* Public */,
      97,    2, 1905,    2, 0x06 /* Public */,
      98,    1, 1910,    2, 0x06 /* Public */,
      99,    1, 1913,    2, 0x06 /* Public */,
     100,    1, 1916,    2, 0x06 /* Public */,
     101,    1, 1919,    2, 0x06 /* Public */,
     102,    1, 1922,    2, 0x06 /* Public */,
     103,    1, 1925,    2, 0x06 /* Public */,
     104,    1, 1928,    2, 0x06 /* Public */,
     106,    1, 1931,    2, 0x06 /* Public */,
     107,    1, 1934,    2, 0x06 /* Public */,
     108,    1, 1937,    2, 0x06 /* Public */,
     109,    1, 1940,    2, 0x06 /* Public */,
     111,    1, 1943,    2, 0x06 /* Public */,
     112,    2, 1946,    2, 0x06 /* Public */,
     113,    2, 1951,    2, 0x06 /* Public */,
     114,    1, 1956,    2, 0x06 /* Public */,
     115,    1, 1959,    2, 0x06 /* Public */,
     116,    1, 1962,    2, 0x06 /* Public */,
     117,    1, 1965,    2, 0x06 /* Public */,
     118,    1, 1968,    2, 0x06 /* Public */,
     119,    1, 1971,    2, 0x06 /* Public */,
     120,    1, 1974,    2, 0x06 /* Public */,
     121,    1, 1977,    2, 0x06 /* Public */,
     122,    1, 1980,    2, 0x06 /* Public */,
     123,    1, 1983,    2, 0x06 /* Public */,
     124,    1, 1986,    2, 0x06 /* Public */,
     126,    1, 1989,    2, 0x06 /* Public */,
     127,    1, 1992,    2, 0x06 /* Public */,
     129,    1, 1995,    2, 0x06 /* Public */,
     130,    1, 1998,    2, 0x06 /* Public */,
     132,    1, 2001,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     133,    2, 2004,    2, 0x0a /* Public */,
     134,    1, 2009,    2, 0x0a /* Public */,
     135,    1, 2012,    2, 0x0a /* Public */,
     136,    1, 2015,    2, 0x0a /* Public */,
     137,    1, 2018,    2, 0x0a /* Public */,
     138,    1, 2021,    2, 0x0a /* Public */,
     139,    1, 2024,    2, 0x0a /* Public */,
     140,    2, 2027,    2, 0x0a /* Public */,
     141,    1, 2032,    2, 0x0a /* Public */,
     142,    1, 2035,    2, 0x0a /* Public */,
     143,    1, 2038,    2, 0x0a /* Public */,
     144,    1, 2041,    2, 0x0a /* Public */,
     145,    1, 2044,    2, 0x0a /* Public */,
     146,    1, 2047,    2, 0x0a /* Public */,
     147,    1, 2050,    2, 0x0a /* Public */,
     148,    1, 2053,    2, 0x0a /* Public */,
     149,    2, 2056,    2, 0x0a /* Public */,
     150,    1, 2061,    2, 0x0a /* Public */,
     151,    1, 2064,    2, 0x0a /* Public */,
     152,    1, 2067,    2, 0x0a /* Public */,
     153,    1, 2070,    2, 0x0a /* Public */,
     154,    1, 2073,    2, 0x0a /* Public */,
     155,    1, 2076,    2, 0x0a /* Public */,
     156,    1, 2079,    2, 0x0a /* Public */,
     157,    1, 2082,    2, 0x0a /* Public */,
     158,    2, 2085,    2, 0x0a /* Public */,
     159,    1, 2090,    2, 0x0a /* Public */,
     160,    1, 2093,    2, 0x0a /* Public */,
     161,    1, 2096,    2, 0x0a /* Public */,
     162,    1, 2099,    2, 0x0a /* Public */,
     163,    1, 2102,    2, 0x0a /* Public */,
     164,    1, 2105,    2, 0x0a /* Public */,
     165,    1, 2108,    2, 0x0a /* Public */,
     166,    1, 2111,    2, 0x0a /* Public */,
     167,    2, 2114,    2, 0x0a /* Public */,
     168,    1, 2119,    2, 0x0a /* Public */,
     169,    1, 2122,    2, 0x0a /* Public */,
     170,    1, 2125,    2, 0x0a /* Public */,
     171,    1, 2128,    2, 0x0a /* Public */,
     172,    1, 2131,    2, 0x0a /* Public */,
     173,    1, 2134,    2, 0x0a /* Public */,
     174,    2, 2137,    2, 0x0a /* Public */,
     175,    1, 2142,    2, 0x0a /* Public */,
     176,    1, 2145,    2, 0x0a /* Public */,
     177,    1, 2148,    2, 0x0a /* Public */,
     178,    1, 2151,    2, 0x0a /* Public */,
     179,    1, 2154,    2, 0x0a /* Public */,
     180,    1, 2157,    2, 0x0a /* Public */,
     181,    2, 2160,    2, 0x0a /* Public */,
     182,    1, 2165,    2, 0x0a /* Public */,
     183,    1, 2168,    2, 0x0a /* Public */,
     184,    1, 2171,    2, 0x0a /* Public */,
     185,    1, 2174,    2, 0x0a /* Public */,
     186,    1, 2177,    2, 0x0a /* Public */,
     187,    1, 2180,    2, 0x0a /* Public */,
     188,    2, 2183,    2, 0x0a /* Public */,
     189,    1, 2188,    2, 0x0a /* Public */,
     190,    1, 2191,    2, 0x0a /* Public */,
     191,    1, 2194,    2, 0x0a /* Public */,
     192,    1, 2197,    2, 0x0a /* Public */,
     193,    1, 2200,    2, 0x0a /* Public */,
     194,    1, 2203,    2, 0x0a /* Public */,
     195,    2, 2206,    2, 0x0a /* Public */,
     196,    1, 2211,    2, 0x0a /* Public */,
     197,    1, 2214,    2, 0x0a /* Public */,
     198,    1, 2217,    2, 0x0a /* Public */,
     199,    1, 2220,    2, 0x0a /* Public */,
     200,    1, 2223,    2, 0x0a /* Public */,
     201,    1, 2226,    2, 0x0a /* Public */,
     202,    1, 2229,    2, 0x0a /* Public */,
     202,    1, 2232,    2, 0x0a /* Public */,
     203,    1, 2235,    2, 0x0a /* Public */,
     203,    1, 2238,    2, 0x0a /* Public */,
     204,    1, 2241,    2, 0x0a /* Public */,
     204,    1, 2244,    2, 0x0a /* Public */,
     205,    2, 2247,    2, 0x0a /* Public */,
     205,    2, 2252,    2, 0x0a /* Public */,
     206,    1, 2257,    2, 0x0a /* Public */,
     207,    1, 2260,    2, 0x0a /* Public */,
     208,    1, 2263,    2, 0x0a /* Public */,
     209,    1, 2266,    2, 0x0a /* Public */,
     210,    1, 2269,    2, 0x0a /* Public */,
     211,    1, 2272,    2, 0x0a /* Public */,
     212,    2, 2275,    2, 0x0a /* Public */,
     212,    2, 2280,    2, 0x0a /* Public */,
     213,    1, 2285,    2, 0x0a /* Public */,
     214,    1, 2288,    2, 0x0a /* Public */,
     215,    1, 2291,    2, 0x0a /* Public */,
     216,    1, 2294,    2, 0x0a /* Public */,
     217,    1, 2297,    2, 0x0a /* Public */,
     218,    1, 2300,    2, 0x0a /* Public */,
     219,    1, 2303,    2, 0x0a /* Public */,
     219,    1, 2306,    2, 0x0a /* Public */,
     220,    1, 2309,    2, 0x0a /* Public */,
     220,    1, 2312,    2, 0x0a /* Public */,
     221,    1, 2315,    2, 0x0a /* Public */,
     221,    1, 2318,    2, 0x0a /* Public */,
     222,    2, 2321,    2, 0x0a /* Public */,
     222,    2, 2326,    2, 0x0a /* Public */,
     223,    1, 2331,    2, 0x0a /* Public */,
     224,    1, 2334,    2, 0x0a /* Public */,
     225,    1, 2337,    2, 0x0a /* Public */,
     226,    1, 2340,    2, 0x0a /* Public */,
     227,    1, 2343,    2, 0x0a /* Public */,
     228,    1, 2346,    2, 0x0a /* Public */,
     229,    1, 2349,    2, 0x0a /* Public */,
     230,    1, 2352,    2, 0x0a /* Public */,
     231,    1, 2355,    2, 0x0a /* Public */,
     232,    1, 2358,    2, 0x0a /* Public */,
     233,    1, 2361,    2, 0x0a /* Public */,
     233,    1, 2364,    2, 0x0a /* Public */,
     234,    1, 2367,    2, 0x0a /* Public */,
     234,    1, 2370,    2, 0x0a /* Public */,
     235,    1, 2373,    2, 0x0a /* Public */,
     235,    1, 2376,    2, 0x0a /* Public */,
     236,    0, 2379,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     237,    1, 2380,    2, 0x02 /* Public */,
     238,    1, 2383,    2, 0x02 /* Public */,
     239,    0, 2386,    2, 0x02 /* Public */,
     240,    0, 2387,    2, 0x02 /* Public */,
     241,    0, 2388,    2, 0x02 /* Public */,
     242,    1, 2389,    2, 0x02 /* Public */,
     243,    1, 2392,    2, 0x02 /* Public */,
     244,    0, 2395,    2, 0x02 /* Public */,
     245,    0, 2396,    2, 0x02 /* Public */,
     246,    0, 2397,    2, 0x02 /* Public */,
     247,    0, 2398,    2, 0x02 /* Public */,
     248,    1, 2399,    2, 0x02 /* Public */,
     249,    1, 2402,    2, 0x02 /* Public */,
     250,    0, 2405,    2, 0x02 /* Public */,
     251,    0, 2406,    2, 0x02 /* Public */,
     252,    0, 2407,    2, 0x02 /* Public */,
     253,    0, 2408,    2, 0x02 /* Public */,
     254,    1, 2409,    2, 0x02 /* Public */,
     255,    1, 2412,    2, 0x02 /* Public */,
     256,    0, 2415,    2, 0x02 /* Public */,
     257,    0, 2416,    2, 0x02 /* Public */,
     258,    0, 2417,    2, 0x02 /* Public */,
     259,    0, 2418,    2, 0x02 /* Public */,
     260,    1, 2419,    2, 0x02 /* Public */,
     261,    1, 2422,    2, 0x02 /* Public */,
     262,    0, 2425,    2, 0x02 /* Public */,
     263,    0, 2426,    2, 0x02 /* Public */,
     264,    0, 2427,    2, 0x02 /* Public */,
     265,    1, 2428,    2, 0x02 /* Public */,
     266,    1, 2431,    2, 0x02 /* Public */,
     267,    0, 2434,    2, 0x02 /* Public */,
     268,    0, 2435,    2, 0x02 /* Public */,
     269,    0, 2436,    2, 0x02 /* Public */,
     270,    1, 2437,    2, 0x02 /* Public */,
     271,    1, 2440,    2, 0x02 /* Public */,
     272,    0, 2443,    2, 0x02 /* Public */,
     273,    0, 2444,    2, 0x02 /* Public */,
     274,    0, 2445,    2, 0x02 /* Public */,
     275,    1, 2446,    2, 0x02 /* Public */,
     276,    1, 2449,    2, 0x02 /* Public */,
     277,    0, 2452,    2, 0x02 /* Public */,
     278,    0, 2453,    2, 0x02 /* Public */,
     279,    0, 2454,    2, 0x02 /* Public */,
     280,    1, 2455,    2, 0x02 /* Public */,
     281,    1, 2458,    2, 0x02 /* Public */,
     282,    0, 2461,    2, 0x02 /* Public */,
     283,    0, 2462,    2, 0x02 /* Public */,
     284,    0, 2463,    2, 0x02 /* Public */,
     285,    0, 2464,    2, 0x02 /* Public */,
     286,    0, 2465,    2, 0x02 /* Public */,
     287,    0, 2466,    2, 0x02 /* Public */,
     288,    1, 2467,    2, 0x02 /* Public */,
     289,    1, 2470,    2, 0x02 /* Public */,
     290,    0, 2473,    2, 0x02 /* Public */,
     291,    0, 2474,    2, 0x02 /* Public */,
     292,    0, 2475,    2, 0x02 /* Public */,
     293,    1, 2476,    2, 0x02 /* Public */,
     294,    1, 2479,    2, 0x02 /* Public */,
     295,    0, 2482,    2, 0x02 /* Public */,
     296,    0, 2483,    2, 0x02 /* Public */,
     297,    0, 2484,    2, 0x02 /* Public */,
     298,    0, 2485,    2, 0x02 /* Public */,
     299,    0, 2486,    2, 0x02 /* Public */,
     300,    0, 2487,    2, 0x02 /* Public */,
     301,    1, 2488,    2, 0x02 /* Public */,
     302,    1, 2491,    2, 0x02 /* Public */,
     303,    0, 2494,    2, 0x02 /* Public */,
     304,    0, 2495,    2, 0x02 /* Public */,
     305,    0, 2496,    2, 0x02 /* Public */,
     306,    0, 2497,    2, 0x02 /* Public */,
     307,    0, 2498,    2, 0x02 /* Public */,
     308,    0, 2499,    2, 0x02 /* Public */,
     309,    0, 2500,    2, 0x02 /* Public */,
     310,    0, 2501,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 105,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 110,    4,
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
    QMetaType::Void, 0x80000000 | 125,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 128,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 131,    4,
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
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
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
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::SChar,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 105,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 110,    4,
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
    QMetaType::Void, 0x80000000 | 125,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 128,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 131,    4,
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
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
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
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::SChar, QMetaType::UInt,    3,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
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
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
     311, QMetaType::Float, 0x00495103,
     312, QMetaType::Float, 0x00495103,
     313, QMetaType::Float, 0x00495103,
     314, QMetaType::Float, 0x00495103,
     315, QMetaType::Float, 0x00495103,
     316, QMetaType::Float, 0x00495103,
     317, QMetaType::Float, 0x00495103,
     318, QMetaType::Float, 0x00495103,
     319, QMetaType::Float, 0x00495103,
     320, QMetaType::Float, 0x00495103,
     321, QMetaType::Float, 0x00495103,
     322, QMetaType::Float, 0x00495103,
     323, QMetaType::Float, 0x00495103,
     324, QMetaType::Float, 0x00495103,
     325, QMetaType::Float, 0x00495103,
     326, QMetaType::Float, 0x00495103,
     327, QMetaType::Float, 0x00495103,
     328, QMetaType::Float, 0x00495103,
     329, QMetaType::Float, 0x00495103,
     330, QMetaType::Float, 0x00495103,
     331, QMetaType::Float, 0x00495103,
     332, QMetaType::Float, 0x00495103,
     333, QMetaType::Float, 0x00495103,
     334, QMetaType::Float, 0x00495103,
     335, QMetaType::UShort, 0x00495103,
     336, QMetaType::UShort, 0x00495103,
     337, QMetaType::UShort, 0x00495103,
     338, QMetaType::UShort, 0x00495103,
     339, QMetaType::UShort, 0x00495103,
     340, QMetaType::UShort, 0x00495103,
     341, QMetaType::UShort, 0x00495103,
     342, QMetaType::UShort, 0x00495103,
     343, QMetaType::UShort, 0x00495103,
     344, QMetaType::Short, 0x00495103,
     345, QMetaType::Short, 0x00495103,
     346, QMetaType::Short, 0x00495103,
     347, QMetaType::UShort, 0x00495103,
     348, QMetaType::UShort, 0x00495103,
     349, QMetaType::UShort, 0x00495103,
     350, 0x80000000 | 105, 0x0049510b,
     351, QMetaType::UShort, 0x00495103,
     352, 0x80000000 | 110, 0x0049510b,
     353, QMetaType::Short, 0x00495103,
     354, QMetaType::Short, 0x00495103,
     355, QMetaType::Short, 0x00495103,
     356, QMetaType::Short, 0x00495103,
     357, QMetaType::Short, 0x00495103,
     358, 0x80000000 | 125, 0x0049510b,
     359, 0x80000000 | 128, 0x0049510b,
     360, 0x80000000 | 131, 0x0049510b,
     361, QMetaType::Float, 0x00495103,
     362, QMetaType::Float, 0x00495103,
     363, QMetaType::Float, 0x00495103,
     364, QMetaType::Float, 0x00495103,
     365, QMetaType::Float, 0x00495103,
     366, QMetaType::Float, 0x00495103,
     367, QMetaType::Float, 0x00495103,
     368, QMetaType::Float, 0x00495103,
     369, QMetaType::Float, 0x00495103,
     370, QMetaType::Float, 0x00495103,
     371, QMetaType::Float, 0x00495103,
     372, QMetaType::Float, 0x00495103,
     373, QMetaType::Float, 0x00495103,
     374, QMetaType::Float, 0x00495103,
     375, QMetaType::Float, 0x00495103,
     376, QMetaType::Float, 0x00495103,
     377, QMetaType::Float, 0x00495103,
     378, QMetaType::Float, 0x00495103,
     379, QMetaType::Float, 0x00495103,
     380, QMetaType::Float, 0x00495103,
     381, QMetaType::Float, 0x00495103,
     382, QMetaType::Float, 0x00495103,
     383, QMetaType::Float, 0x00495103,
     384, QMetaType::Float, 0x00495103,
     385, QMetaType::UShort, 0x00495103,
     386, QMetaType::UShort, 0x00495103,
     387, QMetaType::UShort, 0x00495103,
     388, QMetaType::UShort, 0x00495103,
     389, QMetaType::UShort, 0x00495103,
     390, QMetaType::UShort, 0x00495103,
     391, QMetaType::UChar, 0x00495103,
     392, QMetaType::UChar, 0x00495103,
     393, QMetaType::UChar, 0x00495103,
     394, QMetaType::SChar, 0x00495103,
     395, QMetaType::SChar, 0x00495103,
     396, QMetaType::SChar, 0x00495103,
     397, QMetaType::UChar, 0x00495103,
     398, QMetaType::UChar, 0x00495103,
     399, QMetaType::UChar, 0x00495103,
     400, QMetaType::UChar, 0x00495103,
     401, QMetaType::UChar, 0x00495103,
     402, QMetaType::UChar, 0x00495103,
     403, QMetaType::SChar, 0x00495103,
     404, QMetaType::SChar, 0x00495103,
     405, QMetaType::SChar, 0x00495103,
     406, QMetaType::SChar, 0x00495103,
     407, QMetaType::SChar, 0x00495103,
     408, QMetaType::UChar, 0x00495103,
     409, QMetaType::UChar, 0x00495103,
     410, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
      10,
      12,
      14,
      16,
      20,
      22,
      24,
      26,
      30,
      32,
      34,
      36,
      40,
      42,
      44,
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
      82,
      86,
      88,
      90,
      94,
      96,
      98,
     100,
     102,
     104,
     108,
     110,
     112,
     114,
     116,
     118,
     120,
     122,
       3,
       5,
       7,
      11,
      13,
      15,
      17,
      21,
      23,
      25,
      27,
      31,
      33,
      35,
      37,
      41,
      43,
      45,
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
      83,
      87,
      89,
      91,
      95,
      97,
      99,
     101,
     103,
     105,
     109,
     111,
     113,
     115,
     117,
     119,
     121,
     123,

       0        // eod
};

void StabilizationBank::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StabilizationBank *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->attitudeFeedForwardChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->AttitudeFeedForwardChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->attitudeFeedForwardRollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->AttitudeFeedForward_RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->attitudeFeedForwardPitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->AttitudeFeedForward_PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->attitudeFeedForwardYawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->AttitudeFeedForward_YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->rollRatePIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 9: _t->RollRatePIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->rollRatePIDKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->RollRatePID_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->rollRatePIDKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->RollRatePID_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->rollRatePIDKdChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->RollRatePID_KdChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->rollRatePIDILimitChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->RollRatePID_ILimitChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->pitchRatePIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 19: _t->PitchRatePIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 20: _t->pitchRatePIDKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->PitchRatePID_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->pitchRatePIDKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->PitchRatePID_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->pitchRatePIDKdChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->PitchRatePID_KdChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->pitchRatePIDILimitChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->PitchRatePID_ILimitChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->yawRatePIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 29: _t->YawRatePIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 30: _t->yawRatePIDKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 31: _t->YawRatePID_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 32: _t->yawRatePIDKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 33: _t->YawRatePID_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 34: _t->yawRatePIDKdChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->YawRatePID_KdChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 36: _t->yawRatePIDILimitChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 37: _t->YawRatePID_ILimitChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->rollPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 39: _t->RollPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 40: _t->rollPIKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 41: _t->RollPI_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->rollPIKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 43: _t->RollPI_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->rollPIILimitChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 45: _t->RollPI_ILimitChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->pitchPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 47: _t->PitchPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 48: _t->pitchPIKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 49: _t->PitchPI_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 50: _t->pitchPIKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 51: _t->PitchPI_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 52: _t->pitchPIILimitChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 53: _t->PitchPI_ILimitChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 54: _t->yawPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 55: _t->YawPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 56: _t->yawPIKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 57: _t->YawPI_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 58: _t->yawPIKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 59: _t->YawPI_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 60: _t->yawPIILimitChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 61: _t->YawPI_ILimitChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 62: _t->manualRateChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 63: _t->ManualRateChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 64: _t->manualRateRollChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 65: _t->ManualRate_RollChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 66: _t->manualRatePitchChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 67: _t->ManualRate_PitchChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 68: _t->manualRateYawChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 69: _t->ManualRate_YawChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 70: _t->maximumRateChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 71: _t->MaximumRateChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 72: _t->maximumRateRollChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 73: _t->MaximumRate_RollChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 74: _t->maximumRatePitchChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 75: _t->MaximumRate_PitchChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 76: _t->maximumRateYawChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 77: _t->MaximumRate_YawChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 78: _t->rollMaxChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 79: _t->RollMaxChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 80: _t->pitchMaxChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 81: _t->PitchMaxChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 82: _t->yawMaxChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 83: _t->YawMaxChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 84: _t->stickExpoChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 85: _t->StickExpoChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 86: _t->stickExpoRollChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 87: _t->StickExpo_RollChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 88: _t->stickExpoPitchChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 89: _t->StickExpo_PitchChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 90: _t->stickExpoYawChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 91: _t->StickExpo_YawChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 92: _t->acroInsanityFactorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 93: _t->AcroInsanityFactorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 94: _t->acroInsanityFactorRollChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 95: _t->AcroInsanityFactor_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 96: _t->acroInsanityFactorPitchChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 97: _t->AcroInsanityFactor_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 98: _t->acroInsanityFactorYawChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 99: _t->AcroInsanityFactor_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 100: _t->enablePiroCompChanged((*reinterpret_cast< const StabilizationBank_EnablePiroComp::Enum(*)>(_a[1]))); break;
        case 101: _t->EnablePiroCompChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 102: _t->fpvCamTiltCompensationChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 103: _t->FpvCamTiltCompensationChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->enableThrustPIDScalingChanged((*reinterpret_cast< const StabilizationBank_EnableThrustPIDScaling::Enum(*)>(_a[1]))); break;
        case 105: _t->EnableThrustPIDScalingChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 106: _t->thrustPIDScaleCurveChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 107: _t->ThrustPIDScaleCurveChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 108: _t->thrustPIDScaleCurve0Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 109: _t->ThrustPIDScaleCurve_0Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 110: _t->thrustPIDScaleCurve25Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 111: _t->ThrustPIDScaleCurve_25Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 112: _t->thrustPIDScaleCurve50Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 113: _t->ThrustPIDScaleCurve_50Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 114: _t->thrustPIDScaleCurve75Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 115: _t->ThrustPIDScaleCurve_75Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 116: _t->thrustPIDScaleCurve100Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 117: _t->ThrustPIDScaleCurve_100Changed((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 118: _t->thrustPIDScaleSourceChanged((*reinterpret_cast< const StabilizationBank_ThrustPIDScaleSource::Enum(*)>(_a[1]))); break;
        case 119: _t->ThrustPIDScaleSourceChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 120: _t->thrustPIDScaleTargetChanged((*reinterpret_cast< const StabilizationBank_ThrustPIDScaleTarget::Enum(*)>(_a[1]))); break;
        case 121: _t->ThrustPIDScaleTargetChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 122: _t->thrustPIDScaleAxesChanged((*reinterpret_cast< const StabilizationBank_ThrustPIDScaleAxes::Enum(*)>(_a[1]))); break;
        case 123: _t->ThrustPIDScaleAxesChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 124: _t->setAttitudeFeedForward((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 125: _t->setAttitudeFeedForwardRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 126: _t->setAttitudeFeedForward_Roll((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 127: _t->setAttitudeFeedForwardPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 128: _t->setAttitudeFeedForward_Pitch((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 129: _t->setAttitudeFeedForwardYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 130: _t->setAttitudeFeedForward_Yaw((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 131: _t->setRollRatePID((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 132: _t->setRollRatePIDKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 133: _t->setRollRatePID_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 134: _t->setRollRatePIDKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 135: _t->setRollRatePID_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 136: _t->setRollRatePIDKd((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 137: _t->setRollRatePID_Kd((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 138: _t->setRollRatePIDILimit((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 139: _t->setRollRatePID_ILimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 140: _t->setPitchRatePID((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 141: _t->setPitchRatePIDKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 142: _t->setPitchRatePID_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 143: _t->setPitchRatePIDKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 144: _t->setPitchRatePID_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 145: _t->setPitchRatePIDKd((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 146: _t->setPitchRatePID_Kd((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 147: _t->setPitchRatePIDILimit((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 148: _t->setPitchRatePID_ILimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 149: _t->setYawRatePID((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 150: _t->setYawRatePIDKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 151: _t->setYawRatePID_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 152: _t->setYawRatePIDKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 153: _t->setYawRatePID_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 154: _t->setYawRatePIDKd((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 155: _t->setYawRatePID_Kd((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 156: _t->setYawRatePIDILimit((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 157: _t->setYawRatePID_ILimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 158: _t->setRollPI((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 159: _t->setRollPIKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 160: _t->setRollPI_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 161: _t->setRollPIKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 162: _t->setRollPI_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 163: _t->setRollPIILimit((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 164: _t->setRollPI_ILimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 165: _t->setPitchPI((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 166: _t->setPitchPIKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 167: _t->setPitchPI_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 168: _t->setPitchPIKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 169: _t->setPitchPI_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 170: _t->setPitchPIILimit((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 171: _t->setPitchPI_ILimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 172: _t->setYawPI((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 173: _t->setYawPIKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 174: _t->setYawPI_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 175: _t->setYawPIKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 176: _t->setYawPI_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 177: _t->setYawPIILimit((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 178: _t->setYawPI_ILimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 179: _t->setManualRate((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 180: _t->setManualRateRoll((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 181: _t->setManualRate_Roll((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 182: _t->setManualRatePitch((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 183: _t->setManualRate_Pitch((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 184: _t->setManualRateYaw((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 185: _t->setManualRate_Yaw((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 186: _t->setMaximumRate((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 187: _t->setMaximumRateRoll((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 188: _t->setMaximumRate_Roll((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 189: _t->setMaximumRatePitch((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 190: _t->setMaximumRate_Pitch((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 191: _t->setMaximumRateYaw((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 192: _t->setMaximumRate_Yaw((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 193: _t->setRollMax((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 194: _t->setRollMax((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 195: _t->setPitchMax((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 196: _t->setPitchMax((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 197: _t->setYawMax((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 198: _t->setYawMax((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 199: _t->setStickExpo((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 200: _t->setStickExpo((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 201: _t->setStickExpoRoll((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 202: _t->setStickExpo_Roll((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 203: _t->setStickExpoPitch((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 204: _t->setStickExpo_Pitch((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 205: _t->setStickExpoYaw((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 206: _t->setStickExpo_Yaw((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 207: _t->setAcroInsanityFactor((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 208: _t->setAcroInsanityFactor((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 209: _t->setAcroInsanityFactorRoll((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 210: _t->setAcroInsanityFactor_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 211: _t->setAcroInsanityFactorPitch((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 212: _t->setAcroInsanityFactor_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 213: _t->setAcroInsanityFactorYaw((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 214: _t->setAcroInsanityFactor_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 215: _t->setEnablePiroComp((*reinterpret_cast< const StabilizationBank_EnablePiroComp::Enum(*)>(_a[1]))); break;
        case 216: _t->setEnablePiroComp((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 217: _t->setFpvCamTiltCompensation((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 218: _t->setFpvCamTiltCompensation((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 219: _t->setEnableThrustPIDScaling((*reinterpret_cast< const StabilizationBank_EnableThrustPIDScaling::Enum(*)>(_a[1]))); break;
        case 220: _t->setEnableThrustPIDScaling((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 221: _t->setThrustPIDScaleCurve((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 222: _t->setThrustPIDScaleCurve((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 223: _t->setThrustPIDScaleCurve0((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 224: _t->setThrustPIDScaleCurve_0((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 225: _t->setThrustPIDScaleCurve25((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 226: _t->setThrustPIDScaleCurve_25((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 227: _t->setThrustPIDScaleCurve50((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 228: _t->setThrustPIDScaleCurve_50((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 229: _t->setThrustPIDScaleCurve75((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 230: _t->setThrustPIDScaleCurve_75((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 231: _t->setThrustPIDScaleCurve100((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 232: _t->setThrustPIDScaleCurve_100((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 233: _t->setThrustPIDScaleSource((*reinterpret_cast< const StabilizationBank_ThrustPIDScaleSource::Enum(*)>(_a[1]))); break;
        case 234: _t->setThrustPIDScaleSource((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 235: _t->setThrustPIDScaleTarget((*reinterpret_cast< const StabilizationBank_ThrustPIDScaleTarget::Enum(*)>(_a[1]))); break;
        case 236: _t->setThrustPIDScaleTarget((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 237: _t->setThrustPIDScaleAxes((*reinterpret_cast< const StabilizationBank_ThrustPIDScaleAxes::Enum(*)>(_a[1]))); break;
        case 238: _t->setThrustPIDScaleAxes((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 239: _t->emitNotifications(); break;
        case 240: { float _r = _t->attitudeFeedForward((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 241: { float _r = _t->getAttitudeFeedForward((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 242: { float _r = _t->getAttitudeFeedForward_Roll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 243: { float _r = _t->getAttitudeFeedForward_Pitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 244: { float _r = _t->getAttitudeFeedForward_Yaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 245: { float _r = _t->rollRatePID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 246: { float _r = _t->getRollRatePID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 247: { float _r = _t->getRollRatePID_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 248: { float _r = _t->getRollRatePID_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 249: { float _r = _t->getRollRatePID_Kd();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 250: { float _r = _t->getRollRatePID_ILimit();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 251: { float _r = _t->pitchRatePID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 252: { float _r = _t->getPitchRatePID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 253: { float _r = _t->getPitchRatePID_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 254: { float _r = _t->getPitchRatePID_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 255: { float _r = _t->getPitchRatePID_Kd();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 256: { float _r = _t->getPitchRatePID_ILimit();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 257: { float _r = _t->yawRatePID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 258: { float _r = _t->getYawRatePID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 259: { float _r = _t->getYawRatePID_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 260: { float _r = _t->getYawRatePID_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 261: { float _r = _t->getYawRatePID_Kd();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 262: { float _r = _t->getYawRatePID_ILimit();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 263: { float _r = _t->rollPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 264: { float _r = _t->getRollPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 265: { float _r = _t->getRollPI_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 266: { float _r = _t->getRollPI_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 267: { float _r = _t->getRollPI_ILimit();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 268: { float _r = _t->pitchPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 269: { float _r = _t->getPitchPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 270: { float _r = _t->getPitchPI_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 271: { float _r = _t->getPitchPI_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 272: { float _r = _t->getPitchPI_ILimit();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 273: { float _r = _t->yawPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 274: { float _r = _t->getYawPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 275: { float _r = _t->getYawPI_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 276: { float _r = _t->getYawPI_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 277: { float _r = _t->getYawPI_ILimit();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 278: { quint16 _r = _t->manualRate((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 279: { quint16 _r = _t->getManualRate((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 280: { quint16 _r = _t->getManualRate_Roll();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 281: { quint16 _r = _t->getManualRate_Pitch();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 282: { quint16 _r = _t->getManualRate_Yaw();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 283: { quint16 _r = _t->maximumRate((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 284: { quint16 _r = _t->getMaximumRate((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 285: { quint16 _r = _t->getMaximumRate_Roll();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 286: { quint16 _r = _t->getMaximumRate_Pitch();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 287: { quint16 _r = _t->getMaximumRate_Yaw();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 288: { quint8 _r = _t->getRollMax();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 289: { quint8 _r = _t->getPitchMax();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 290: { quint8 _r = _t->getYawMax();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 291: { qint16 _r = _t->stickExpo((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 292: { qint8 _r = _t->getStickExpo((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 293: { qint8 _r = _t->getStickExpo_Roll();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 294: { qint8 _r = _t->getStickExpo_Pitch();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 295: { qint8 _r = _t->getStickExpo_Yaw();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 296: { quint16 _r = _t->acroInsanityFactor((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 297: { quint8 _r = _t->getAcroInsanityFactor((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 298: { quint8 _r = _t->getAcroInsanityFactor_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 299: { quint8 _r = _t->getAcroInsanityFactor_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 300: { quint8 _r = _t->getAcroInsanityFactor_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 301: { quint8 _r = _t->getEnablePiroComp();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 302: { quint8 _r = _t->getFpvCamTiltCompensation();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 303: { quint8 _r = _t->getEnableThrustPIDScaling();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 304: { qint16 _r = _t->thrustPIDScaleCurve((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 305: { qint8 _r = _t->getThrustPIDScaleCurve((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 306: { qint8 _r = _t->getThrustPIDScaleCurve_0();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 307: { qint8 _r = _t->getThrustPIDScaleCurve_25();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 308: { qint8 _r = _t->getThrustPIDScaleCurve_50();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 309: { qint8 _r = _t->getThrustPIDScaleCurve_75();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 310: { qint8 _r = _t->getThrustPIDScaleCurve_100();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 311: { quint8 _r = _t->getThrustPIDScaleSource();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 312: { quint8 _r = _t->getThrustPIDScaleTarget();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 313: { quint8 _r = _t->getThrustPIDScaleAxes();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StabilizationBank::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::attitudeFeedForwardChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::AttitudeFeedForwardChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::attitudeFeedForwardRollChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::AttitudeFeedForward_RollChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::attitudeFeedForwardPitchChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::AttitudeFeedForward_PitchChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::attitudeFeedForwardYawChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::AttitudeFeedForward_YawChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::rollRatePIDChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::RollRatePIDChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::rollRatePIDKpChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::RollRatePID_KpChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::rollRatePIDKiChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::RollRatePID_KiChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::rollRatePIDKdChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::RollRatePID_KdChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::rollRatePIDILimitChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::RollRatePID_ILimitChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::pitchRatePIDChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::PitchRatePIDChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::pitchRatePIDKpChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::PitchRatePID_KpChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::pitchRatePIDKiChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::PitchRatePID_KiChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::pitchRatePIDKdChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::PitchRatePID_KdChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::pitchRatePIDILimitChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::PitchRatePID_ILimitChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::yawRatePIDChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::YawRatePIDChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::yawRatePIDKpChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::YawRatePID_KpChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::yawRatePIDKiChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::YawRatePID_KiChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::yawRatePIDKdChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::YawRatePID_KdChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::yawRatePIDILimitChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::YawRatePID_ILimitChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::rollPIChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::RollPIChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::rollPIKpChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::RollPI_KpChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::rollPIKiChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::RollPI_KiChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::rollPIILimitChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::RollPI_ILimitChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::pitchPIChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::PitchPIChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::pitchPIKpChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::PitchPI_KpChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::pitchPIKiChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::PitchPI_KiChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::pitchPIILimitChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::PitchPI_ILimitChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::yawPIChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::YawPIChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::yawPIKpChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::YawPI_KpChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::yawPIKiChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::YawPI_KiChanged)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::yawPIILimitChanged)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::YawPI_ILimitChanged)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::manualRateChanged)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ManualRateChanged)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::manualRateRollChanged)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ManualRate_RollChanged)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::manualRatePitchChanged)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ManualRate_PitchChanged)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::manualRateYawChanged)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ManualRate_YawChanged)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::maximumRateChanged)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::MaximumRateChanged)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::maximumRateRollChanged)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::MaximumRate_RollChanged)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::maximumRatePitchChanged)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::MaximumRate_PitchChanged)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::maximumRateYawChanged)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::MaximumRate_YawChanged)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::rollMaxChanged)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::RollMaxChanged)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::pitchMaxChanged)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::PitchMaxChanged)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::yawMaxChanged)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::YawMaxChanged)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::stickExpoChanged)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::StickExpoChanged)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::stickExpoRollChanged)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::StickExpo_RollChanged)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::stickExpoPitchChanged)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::StickExpo_PitchChanged)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::stickExpoYawChanged)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::StickExpo_YawChanged)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::acroInsanityFactorChanged)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::AcroInsanityFactorChanged)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::acroInsanityFactorRollChanged)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::AcroInsanityFactor_RollChanged)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::acroInsanityFactorPitchChanged)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::AcroInsanityFactor_PitchChanged)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::acroInsanityFactorYawChanged)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::AcroInsanityFactor_YawChanged)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const StabilizationBank_EnablePiroComp::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::enablePiroCompChanged)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::EnablePiroCompChanged)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::fpvCamTiltCompensationChanged)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::FpvCamTiltCompensationChanged)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const StabilizationBank_EnableThrustPIDScaling::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::enableThrustPIDScalingChanged)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::EnableThrustPIDScalingChanged)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::thrustPIDScaleCurveChanged)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint32 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ThrustPIDScaleCurveChanged)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::thrustPIDScaleCurve0Changed)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ThrustPIDScaleCurve_0Changed)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::thrustPIDScaleCurve25Changed)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ThrustPIDScaleCurve_25Changed)) {
                *result = 111;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::thrustPIDScaleCurve50Changed)) {
                *result = 112;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ThrustPIDScaleCurve_50Changed)) {
                *result = 113;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::thrustPIDScaleCurve75Changed)) {
                *result = 114;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ThrustPIDScaleCurve_75Changed)) {
                *result = 115;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::thrustPIDScaleCurve100Changed)) {
                *result = 116;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ThrustPIDScaleCurve_100Changed)) {
                *result = 117;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const StabilizationBank_ThrustPIDScaleSource::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::thrustPIDScaleSourceChanged)) {
                *result = 118;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ThrustPIDScaleSourceChanged)) {
                *result = 119;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const StabilizationBank_ThrustPIDScaleTarget::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::thrustPIDScaleTargetChanged)) {
                *result = 120;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ThrustPIDScaleTargetChanged)) {
                *result = 121;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(const StabilizationBank_ThrustPIDScaleAxes::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::thrustPIDScaleAxesChanged)) {
                *result = 122;
                return;
            }
        }
        {
            using _t = void (StabilizationBank::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationBank::ThrustPIDScaleAxesChanged)) {
                *result = 123;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StabilizationBank *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->attitudeFeedForwardRoll(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->attitudeFeedForwardPitch(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->attitudeFeedForwardYaw(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->rollRatePIDKp(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->rollRatePIDKi(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->rollRatePIDKd(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->rollRatePIDILimit(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->pitchRatePIDKp(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->pitchRatePIDKi(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->pitchRatePIDKd(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->pitchRatePIDILimit(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->yawRatePIDKp(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->yawRatePIDKi(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->yawRatePIDKd(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->yawRatePIDILimit(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->rollPIKp(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->rollPIKi(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->rollPIILimit(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->pitchPIKp(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->pitchPIKi(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->pitchPIILimit(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->yawPIKp(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->yawPIKi(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->yawPIILimit(); break;
        case 24: *reinterpret_cast< quint16*>(_v) = _t->manualRateRoll(); break;
        case 25: *reinterpret_cast< quint16*>(_v) = _t->manualRatePitch(); break;
        case 26: *reinterpret_cast< quint16*>(_v) = _t->manualRateYaw(); break;
        case 27: *reinterpret_cast< quint16*>(_v) = _t->maximumRateRoll(); break;
        case 28: *reinterpret_cast< quint16*>(_v) = _t->maximumRatePitch(); break;
        case 29: *reinterpret_cast< quint16*>(_v) = _t->maximumRateYaw(); break;
        case 30: *reinterpret_cast< quint16*>(_v) = _t->rollMax(); break;
        case 31: *reinterpret_cast< quint16*>(_v) = _t->pitchMax(); break;
        case 32: *reinterpret_cast< quint16*>(_v) = _t->yawMax(); break;
        case 33: *reinterpret_cast< qint16*>(_v) = _t->stickExpoRoll(); break;
        case 34: *reinterpret_cast< qint16*>(_v) = _t->stickExpoPitch(); break;
        case 35: *reinterpret_cast< qint16*>(_v) = _t->stickExpoYaw(); break;
        case 36: *reinterpret_cast< quint16*>(_v) = _t->acroInsanityFactorRoll(); break;
        case 37: *reinterpret_cast< quint16*>(_v) = _t->acroInsanityFactorPitch(); break;
        case 38: *reinterpret_cast< quint16*>(_v) = _t->acroInsanityFactorYaw(); break;
        case 39: *reinterpret_cast< StabilizationBank_EnablePiroComp::Enum*>(_v) = _t->enablePiroComp(); break;
        case 40: *reinterpret_cast< quint16*>(_v) = _t->fpvCamTiltCompensation(); break;
        case 41: *reinterpret_cast< StabilizationBank_EnableThrustPIDScaling::Enum*>(_v) = _t->enableThrustPIDScaling(); break;
        case 42: *reinterpret_cast< qint16*>(_v) = _t->thrustPIDScaleCurve0(); break;
        case 43: *reinterpret_cast< qint16*>(_v) = _t->thrustPIDScaleCurve25(); break;
        case 44: *reinterpret_cast< qint16*>(_v) = _t->thrustPIDScaleCurve50(); break;
        case 45: *reinterpret_cast< qint16*>(_v) = _t->thrustPIDScaleCurve75(); break;
        case 46: *reinterpret_cast< qint16*>(_v) = _t->thrustPIDScaleCurve100(); break;
        case 47: *reinterpret_cast< StabilizationBank_ThrustPIDScaleSource::Enum*>(_v) = _t->thrustPIDScaleSource(); break;
        case 48: *reinterpret_cast< StabilizationBank_ThrustPIDScaleTarget::Enum*>(_v) = _t->thrustPIDScaleTarget(); break;
        case 49: *reinterpret_cast< StabilizationBank_ThrustPIDScaleAxes::Enum*>(_v) = _t->thrustPIDScaleAxes(); break;
        case 50: *reinterpret_cast< float*>(_v) = _t->getAttitudeFeedForward_Roll(); break;
        case 51: *reinterpret_cast< float*>(_v) = _t->getAttitudeFeedForward_Pitch(); break;
        case 52: *reinterpret_cast< float*>(_v) = _t->getAttitudeFeedForward_Yaw(); break;
        case 53: *reinterpret_cast< float*>(_v) = _t->getRollRatePID_Kp(); break;
        case 54: *reinterpret_cast< float*>(_v) = _t->getRollRatePID_Ki(); break;
        case 55: *reinterpret_cast< float*>(_v) = _t->getRollRatePID_Kd(); break;
        case 56: *reinterpret_cast< float*>(_v) = _t->getRollRatePID_ILimit(); break;
        case 57: *reinterpret_cast< float*>(_v) = _t->getPitchRatePID_Kp(); break;
        case 58: *reinterpret_cast< float*>(_v) = _t->getPitchRatePID_Ki(); break;
        case 59: *reinterpret_cast< float*>(_v) = _t->getPitchRatePID_Kd(); break;
        case 60: *reinterpret_cast< float*>(_v) = _t->getPitchRatePID_ILimit(); break;
        case 61: *reinterpret_cast< float*>(_v) = _t->getYawRatePID_Kp(); break;
        case 62: *reinterpret_cast< float*>(_v) = _t->getYawRatePID_Ki(); break;
        case 63: *reinterpret_cast< float*>(_v) = _t->getYawRatePID_Kd(); break;
        case 64: *reinterpret_cast< float*>(_v) = _t->getYawRatePID_ILimit(); break;
        case 65: *reinterpret_cast< float*>(_v) = _t->getRollPI_Kp(); break;
        case 66: *reinterpret_cast< float*>(_v) = _t->getRollPI_Ki(); break;
        case 67: *reinterpret_cast< float*>(_v) = _t->getRollPI_ILimit(); break;
        case 68: *reinterpret_cast< float*>(_v) = _t->getPitchPI_Kp(); break;
        case 69: *reinterpret_cast< float*>(_v) = _t->getPitchPI_Ki(); break;
        case 70: *reinterpret_cast< float*>(_v) = _t->getPitchPI_ILimit(); break;
        case 71: *reinterpret_cast< float*>(_v) = _t->getYawPI_Kp(); break;
        case 72: *reinterpret_cast< float*>(_v) = _t->getYawPI_Ki(); break;
        case 73: *reinterpret_cast< float*>(_v) = _t->getYawPI_ILimit(); break;
        case 74: *reinterpret_cast< quint16*>(_v) = _t->getManualRate_Roll(); break;
        case 75: *reinterpret_cast< quint16*>(_v) = _t->getManualRate_Pitch(); break;
        case 76: *reinterpret_cast< quint16*>(_v) = _t->getManualRate_Yaw(); break;
        case 77: *reinterpret_cast< quint16*>(_v) = _t->getMaximumRate_Roll(); break;
        case 78: *reinterpret_cast< quint16*>(_v) = _t->getMaximumRate_Pitch(); break;
        case 79: *reinterpret_cast< quint16*>(_v) = _t->getMaximumRate_Yaw(); break;
        case 80: *reinterpret_cast< quint8*>(_v) = _t->getRollMax(); break;
        case 81: *reinterpret_cast< quint8*>(_v) = _t->getPitchMax(); break;
        case 82: *reinterpret_cast< quint8*>(_v) = _t->getYawMax(); break;
        case 83: *reinterpret_cast< qint8*>(_v) = _t->getStickExpo_Roll(); break;
        case 84: *reinterpret_cast< qint8*>(_v) = _t->getStickExpo_Pitch(); break;
        case 85: *reinterpret_cast< qint8*>(_v) = _t->getStickExpo_Yaw(); break;
        case 86: *reinterpret_cast< quint8*>(_v) = _t->getAcroInsanityFactor_Roll(); break;
        case 87: *reinterpret_cast< quint8*>(_v) = _t->getAcroInsanityFactor_Pitch(); break;
        case 88: *reinterpret_cast< quint8*>(_v) = _t->getAcroInsanityFactor_Yaw(); break;
        case 89: *reinterpret_cast< quint8*>(_v) = _t->getEnablePiroComp(); break;
        case 90: *reinterpret_cast< quint8*>(_v) = _t->getFpvCamTiltCompensation(); break;
        case 91: *reinterpret_cast< quint8*>(_v) = _t->getEnableThrustPIDScaling(); break;
        case 92: *reinterpret_cast< qint8*>(_v) = _t->getThrustPIDScaleCurve_0(); break;
        case 93: *reinterpret_cast< qint8*>(_v) = _t->getThrustPIDScaleCurve_25(); break;
        case 94: *reinterpret_cast< qint8*>(_v) = _t->getThrustPIDScaleCurve_50(); break;
        case 95: *reinterpret_cast< qint8*>(_v) = _t->getThrustPIDScaleCurve_75(); break;
        case 96: *reinterpret_cast< qint8*>(_v) = _t->getThrustPIDScaleCurve_100(); break;
        case 97: *reinterpret_cast< quint8*>(_v) = _t->getThrustPIDScaleSource(); break;
        case 98: *reinterpret_cast< quint8*>(_v) = _t->getThrustPIDScaleTarget(); break;
        case 99: *reinterpret_cast< quint8*>(_v) = _t->getThrustPIDScaleAxes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StabilizationBank *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAttitudeFeedForwardRoll(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setAttitudeFeedForwardPitch(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setAttitudeFeedForwardYaw(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setRollRatePIDKp(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setRollRatePIDKi(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setRollRatePIDKd(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setRollRatePIDILimit(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setPitchRatePIDKp(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setPitchRatePIDKi(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setPitchRatePIDKd(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setPitchRatePIDILimit(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setYawRatePIDKp(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setYawRatePIDKi(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setYawRatePIDKd(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setYawRatePIDILimit(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setRollPIKp(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setRollPIKi(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setRollPIILimit(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setPitchPIKp(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setPitchPIKi(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setPitchPIILimit(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setYawPIKp(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setYawPIKi(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setYawPIILimit(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setManualRateRoll(*reinterpret_cast< quint16*>(_v)); break;
        case 25: _t->setManualRatePitch(*reinterpret_cast< quint16*>(_v)); break;
        case 26: _t->setManualRateYaw(*reinterpret_cast< quint16*>(_v)); break;
        case 27: _t->setMaximumRateRoll(*reinterpret_cast< quint16*>(_v)); break;
        case 28: _t->setMaximumRatePitch(*reinterpret_cast< quint16*>(_v)); break;
        case 29: _t->setMaximumRateYaw(*reinterpret_cast< quint16*>(_v)); break;
        case 30: _t->setRollMax(*reinterpret_cast< quint16*>(_v)); break;
        case 31: _t->setPitchMax(*reinterpret_cast< quint16*>(_v)); break;
        case 32: _t->setYawMax(*reinterpret_cast< quint16*>(_v)); break;
        case 33: _t->setStickExpoRoll(*reinterpret_cast< qint16*>(_v)); break;
        case 34: _t->setStickExpoPitch(*reinterpret_cast< qint16*>(_v)); break;
        case 35: _t->setStickExpoYaw(*reinterpret_cast< qint16*>(_v)); break;
        case 36: _t->setAcroInsanityFactorRoll(*reinterpret_cast< quint16*>(_v)); break;
        case 37: _t->setAcroInsanityFactorPitch(*reinterpret_cast< quint16*>(_v)); break;
        case 38: _t->setAcroInsanityFactorYaw(*reinterpret_cast< quint16*>(_v)); break;
        case 39: _t->setEnablePiroComp(*reinterpret_cast< StabilizationBank_EnablePiroComp::Enum*>(_v)); break;
        case 40: _t->setFpvCamTiltCompensation(*reinterpret_cast< quint16*>(_v)); break;
        case 41: _t->setEnableThrustPIDScaling(*reinterpret_cast< StabilizationBank_EnableThrustPIDScaling::Enum*>(_v)); break;
        case 42: _t->setThrustPIDScaleCurve0(*reinterpret_cast< qint16*>(_v)); break;
        case 43: _t->setThrustPIDScaleCurve25(*reinterpret_cast< qint16*>(_v)); break;
        case 44: _t->setThrustPIDScaleCurve50(*reinterpret_cast< qint16*>(_v)); break;
        case 45: _t->setThrustPIDScaleCurve75(*reinterpret_cast< qint16*>(_v)); break;
        case 46: _t->setThrustPIDScaleCurve100(*reinterpret_cast< qint16*>(_v)); break;
        case 47: _t->setThrustPIDScaleSource(*reinterpret_cast< StabilizationBank_ThrustPIDScaleSource::Enum*>(_v)); break;
        case 48: _t->setThrustPIDScaleTarget(*reinterpret_cast< StabilizationBank_ThrustPIDScaleTarget::Enum*>(_v)); break;
        case 49: _t->setThrustPIDScaleAxes(*reinterpret_cast< StabilizationBank_ThrustPIDScaleAxes::Enum*>(_v)); break;
        case 50: _t->setAttitudeFeedForward_Roll(*reinterpret_cast< float*>(_v)); break;
        case 51: _t->setAttitudeFeedForward_Pitch(*reinterpret_cast< float*>(_v)); break;
        case 52: _t->setAttitudeFeedForward_Yaw(*reinterpret_cast< float*>(_v)); break;
        case 53: _t->setRollRatePID_Kp(*reinterpret_cast< float*>(_v)); break;
        case 54: _t->setRollRatePID_Ki(*reinterpret_cast< float*>(_v)); break;
        case 55: _t->setRollRatePID_Kd(*reinterpret_cast< float*>(_v)); break;
        case 56: _t->setRollRatePID_ILimit(*reinterpret_cast< float*>(_v)); break;
        case 57: _t->setPitchRatePID_Kp(*reinterpret_cast< float*>(_v)); break;
        case 58: _t->setPitchRatePID_Ki(*reinterpret_cast< float*>(_v)); break;
        case 59: _t->setPitchRatePID_Kd(*reinterpret_cast< float*>(_v)); break;
        case 60: _t->setPitchRatePID_ILimit(*reinterpret_cast< float*>(_v)); break;
        case 61: _t->setYawRatePID_Kp(*reinterpret_cast< float*>(_v)); break;
        case 62: _t->setYawRatePID_Ki(*reinterpret_cast< float*>(_v)); break;
        case 63: _t->setYawRatePID_Kd(*reinterpret_cast< float*>(_v)); break;
        case 64: _t->setYawRatePID_ILimit(*reinterpret_cast< float*>(_v)); break;
        case 65: _t->setRollPI_Kp(*reinterpret_cast< float*>(_v)); break;
        case 66: _t->setRollPI_Ki(*reinterpret_cast< float*>(_v)); break;
        case 67: _t->setRollPI_ILimit(*reinterpret_cast< float*>(_v)); break;
        case 68: _t->setPitchPI_Kp(*reinterpret_cast< float*>(_v)); break;
        case 69: _t->setPitchPI_Ki(*reinterpret_cast< float*>(_v)); break;
        case 70: _t->setPitchPI_ILimit(*reinterpret_cast< float*>(_v)); break;
        case 71: _t->setYawPI_Kp(*reinterpret_cast< float*>(_v)); break;
        case 72: _t->setYawPI_Ki(*reinterpret_cast< float*>(_v)); break;
        case 73: _t->setYawPI_ILimit(*reinterpret_cast< float*>(_v)); break;
        case 74: _t->setManualRate_Roll(*reinterpret_cast< quint16*>(_v)); break;
        case 75: _t->setManualRate_Pitch(*reinterpret_cast< quint16*>(_v)); break;
        case 76: _t->setManualRate_Yaw(*reinterpret_cast< quint16*>(_v)); break;
        case 77: _t->setMaximumRate_Roll(*reinterpret_cast< quint16*>(_v)); break;
        case 78: _t->setMaximumRate_Pitch(*reinterpret_cast< quint16*>(_v)); break;
        case 79: _t->setMaximumRate_Yaw(*reinterpret_cast< quint16*>(_v)); break;
        case 80: _t->setRollMax(*reinterpret_cast< quint8*>(_v)); break;
        case 81: _t->setPitchMax(*reinterpret_cast< quint8*>(_v)); break;
        case 82: _t->setYawMax(*reinterpret_cast< quint8*>(_v)); break;
        case 83: _t->setStickExpo_Roll(*reinterpret_cast< qint8*>(_v)); break;
        case 84: _t->setStickExpo_Pitch(*reinterpret_cast< qint8*>(_v)); break;
        case 85: _t->setStickExpo_Yaw(*reinterpret_cast< qint8*>(_v)); break;
        case 86: _t->setAcroInsanityFactor_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 87: _t->setAcroInsanityFactor_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 88: _t->setAcroInsanityFactor_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        case 89: _t->setEnablePiroComp(*reinterpret_cast< quint8*>(_v)); break;
        case 90: _t->setFpvCamTiltCompensation(*reinterpret_cast< quint8*>(_v)); break;
        case 91: _t->setEnableThrustPIDScaling(*reinterpret_cast< quint8*>(_v)); break;
        case 92: _t->setThrustPIDScaleCurve_0(*reinterpret_cast< qint8*>(_v)); break;
        case 93: _t->setThrustPIDScaleCurve_25(*reinterpret_cast< qint8*>(_v)); break;
        case 94: _t->setThrustPIDScaleCurve_50(*reinterpret_cast< qint8*>(_v)); break;
        case 95: _t->setThrustPIDScaleCurve_75(*reinterpret_cast< qint8*>(_v)); break;
        case 96: _t->setThrustPIDScaleCurve_100(*reinterpret_cast< qint8*>(_v)); break;
        case 97: _t->setThrustPIDScaleSource(*reinterpret_cast< quint8*>(_v)); break;
        case 98: _t->setThrustPIDScaleTarget(*reinterpret_cast< quint8*>(_v)); break;
        case 99: _t->setThrustPIDScaleAxes(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_StabilizationBank[] = {
        &StabilizationBank_EnablePiroComp::staticMetaObject,
    &StabilizationBank_EnableThrustPIDScaling::staticMetaObject,
    &StabilizationBank_ThrustPIDScaleSource::staticMetaObject,
    &StabilizationBank_ThrustPIDScaleTarget::staticMetaObject,
    &StabilizationBank_ThrustPIDScaleAxes::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject StabilizationBank::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_StabilizationBank.data,
    qt_meta_data_StabilizationBank,
    qt_static_metacall,
    qt_meta_extradata_StabilizationBank,
    nullptr
} };


const QMetaObject *StabilizationBank::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationBank::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationBank.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int StabilizationBank::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 314)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 314;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 314)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 314;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 100;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 100;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 100;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 100;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 100;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 100;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StabilizationBank::attitudeFeedForwardChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StabilizationBank::AttitudeFeedForwardChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StabilizationBank::attitudeFeedForwardRollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StabilizationBank::AttitudeFeedForward_RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StabilizationBank::attitudeFeedForwardPitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StabilizationBank::AttitudeFeedForward_PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StabilizationBank::attitudeFeedForwardYawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StabilizationBank::AttitudeFeedForward_YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void StabilizationBank::rollRatePIDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void StabilizationBank::RollRatePIDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void StabilizationBank::rollRatePIDKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void StabilizationBank::RollRatePID_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void StabilizationBank::rollRatePIDKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void StabilizationBank::RollRatePID_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void StabilizationBank::rollRatePIDKdChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void StabilizationBank::RollRatePID_KdChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void StabilizationBank::rollRatePIDILimitChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void StabilizationBank::RollRatePID_ILimitChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void StabilizationBank::pitchRatePIDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void StabilizationBank::PitchRatePIDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void StabilizationBank::pitchRatePIDKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void StabilizationBank::PitchRatePID_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void StabilizationBank::pitchRatePIDKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void StabilizationBank::PitchRatePID_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void StabilizationBank::pitchRatePIDKdChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void StabilizationBank::PitchRatePID_KdChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void StabilizationBank::pitchRatePIDILimitChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void StabilizationBank::PitchRatePID_ILimitChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void StabilizationBank::yawRatePIDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void StabilizationBank::YawRatePIDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void StabilizationBank::yawRatePIDKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void StabilizationBank::YawRatePID_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void StabilizationBank::yawRatePIDKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void StabilizationBank::YawRatePID_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void StabilizationBank::yawRatePIDKdChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void StabilizationBank::YawRatePID_KdChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void StabilizationBank::yawRatePIDILimitChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void StabilizationBank::YawRatePID_ILimitChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void StabilizationBank::rollPIChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void StabilizationBank::RollPIChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void StabilizationBank::rollPIKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void StabilizationBank::RollPI_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void StabilizationBank::rollPIKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void StabilizationBank::RollPI_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void StabilizationBank::rollPIILimitChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void StabilizationBank::RollPI_ILimitChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void StabilizationBank::pitchPIChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void StabilizationBank::PitchPIChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void StabilizationBank::pitchPIKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void StabilizationBank::PitchPI_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void StabilizationBank::pitchPIKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void StabilizationBank::PitchPI_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void StabilizationBank::pitchPIILimitChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void StabilizationBank::PitchPI_ILimitChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void StabilizationBank::yawPIChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void StabilizationBank::YawPIChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void StabilizationBank::yawPIKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void StabilizationBank::YawPI_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void StabilizationBank::yawPIKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void StabilizationBank::YawPI_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void StabilizationBank::yawPIILimitChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void StabilizationBank::YawPI_ILimitChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void StabilizationBank::manualRateChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void StabilizationBank::ManualRateChanged(quint32 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void StabilizationBank::manualRateRollChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void StabilizationBank::ManualRate_RollChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void StabilizationBank::manualRatePitchChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void StabilizationBank::ManualRate_PitchChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void StabilizationBank::manualRateYawChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void StabilizationBank::ManualRate_YawChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void StabilizationBank::maximumRateChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void StabilizationBank::MaximumRateChanged(quint32 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void StabilizationBank::maximumRateRollChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void StabilizationBank::MaximumRate_RollChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void StabilizationBank::maximumRatePitchChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void StabilizationBank::MaximumRate_PitchChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void StabilizationBank::maximumRateYawChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void StabilizationBank::MaximumRate_YawChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void StabilizationBank::rollMaxChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void StabilizationBank::RollMaxChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void StabilizationBank::pitchMaxChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void StabilizationBank::PitchMaxChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void StabilizationBank::yawMaxChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void StabilizationBank::YawMaxChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void StabilizationBank::stickExpoChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void StabilizationBank::StickExpoChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void StabilizationBank::stickExpoRollChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void StabilizationBank::StickExpo_RollChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void StabilizationBank::stickExpoPitchChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void StabilizationBank::StickExpo_PitchChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void StabilizationBank::stickExpoYawChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void StabilizationBank::StickExpo_YawChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void StabilizationBank::acroInsanityFactorChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void StabilizationBank::AcroInsanityFactorChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void StabilizationBank::acroInsanityFactorRollChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void StabilizationBank::AcroInsanityFactor_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void StabilizationBank::acroInsanityFactorPitchChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void StabilizationBank::AcroInsanityFactor_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void StabilizationBank::acroInsanityFactorYawChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void StabilizationBank::AcroInsanityFactor_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void StabilizationBank::enablePiroCompChanged(const StabilizationBank_EnablePiroComp::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void StabilizationBank::EnablePiroCompChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void StabilizationBank::fpvCamTiltCompensationChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void StabilizationBank::FpvCamTiltCompensationChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void StabilizationBank::enableThrustPIDScalingChanged(const StabilizationBank_EnableThrustPIDScaling::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void StabilizationBank::EnableThrustPIDScalingChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void StabilizationBank::thrustPIDScaleCurveChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void StabilizationBank::ThrustPIDScaleCurveChanged(quint32 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void StabilizationBank::thrustPIDScaleCurve0Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void StabilizationBank::ThrustPIDScaleCurve_0Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void StabilizationBank::thrustPIDScaleCurve25Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void StabilizationBank::ThrustPIDScaleCurve_25Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void StabilizationBank::thrustPIDScaleCurve50Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void StabilizationBank::ThrustPIDScaleCurve_50Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void StabilizationBank::thrustPIDScaleCurve75Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}

// SIGNAL 115
void StabilizationBank::ThrustPIDScaleCurve_75Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 115, _a);
}

// SIGNAL 116
void StabilizationBank::thrustPIDScaleCurve100Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 116, _a);
}

// SIGNAL 117
void StabilizationBank::ThrustPIDScaleCurve_100Changed(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 117, _a);
}

// SIGNAL 118
void StabilizationBank::thrustPIDScaleSourceChanged(const StabilizationBank_ThrustPIDScaleSource::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 118, _a);
}

// SIGNAL 119
void StabilizationBank::ThrustPIDScaleSourceChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 119, _a);
}

// SIGNAL 120
void StabilizationBank::thrustPIDScaleTargetChanged(const StabilizationBank_ThrustPIDScaleTarget::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 120, _a);
}

// SIGNAL 121
void StabilizationBank::ThrustPIDScaleTargetChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 121, _a);
}

// SIGNAL 122
void StabilizationBank::thrustPIDScaleAxesChanged(const StabilizationBank_ThrustPIDScaleAxes::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 122, _a);
}

// SIGNAL 123
void StabilizationBank::ThrustPIDScaleAxesChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 123, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
