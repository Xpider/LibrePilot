/****************************************************************************
** Meta object code from reading C++ file 'stabilizationsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stabilizationsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stabilizationsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StabilizationSettingsConstants_t {
    QByteArrayData data[11];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationSettingsConstants_t qt_meta_stringdata_StabilizationSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 30), // "StabilizationSettingsConstants"
QT_MOC_LITERAL(1, 31, 4), // "Enum"
QT_MOC_LITERAL(2, 36, 18), // "FlightModeMapCount"
QT_MOC_LITERAL(3, 55, 17), // "VbarPiroCompCount"
QT_MOC_LITERAL(4, 73, 43), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(5, 117, 41), // "CruiseControlInvertedThrustRe..."
QT_MOC_LITERAL(6, 159, 37), // "CruiseControlInvertedPowerOut..."
QT_MOC_LITERAL(7, 197, 28), // "LowThrottleZeroIntegralCount"
QT_MOC_LITERAL(8, 226, 24), // "FlightModeAssistMapCount"
QT_MOC_LITERAL(9, 251, 22), // "MeasureBasedDTermCount"
QT_MOC_LITERAL(10, 274, 38) // "ForceRollPitchDuringYawTransi..."

    },
    "StabilizationSettingsConstants\0Enum\0"
    "FlightModeMapCount\0VbarPiroCompCount\0"
    "CruiseControlFlightModeSwitchPosEnableCount\0"
    "CruiseControlInvertedThrustReversingCount\0"
    "CruiseControlInvertedPowerOutputCount\0"
    "LowThrottleZeroIntegralCount\0"
    "FlightModeAssistMapCount\0"
    "MeasureBasedDTermCount\0"
    "ForceRollPitchDuringYawTransitionCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationSettingsConstants[] = {

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
       1,    1, 0x0,    9,   19,

 // enum data: key, value
       2, uint(StabilizationSettingsConstants::FlightModeMapCount),
       3, uint(StabilizationSettingsConstants::VbarPiroCompCount),
       4, uint(StabilizationSettingsConstants::CruiseControlFlightModeSwitchPosEnableCount),
       5, uint(StabilizationSettingsConstants::CruiseControlInvertedThrustReversingCount),
       6, uint(StabilizationSettingsConstants::CruiseControlInvertedPowerOutputCount),
       7, uint(StabilizationSettingsConstants::LowThrottleZeroIntegralCount),
       8, uint(StabilizationSettingsConstants::FlightModeAssistMapCount),
       9, uint(StabilizationSettingsConstants::MeasureBasedDTermCount),
      10, uint(StabilizationSettingsConstants::ForceRollPitchDuringYawTransitionCount),

       0        // eod
};

void StabilizationSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationSettingsConstants.data,
    qt_meta_data_StabilizationSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationSettings_FlightModeMap_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationSettings_FlightModeMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationSettings_FlightModeMap_t qt_meta_stringdata_StabilizationSettings_FlightModeMap = {
    {
QT_MOC_LITERAL(0, 0, 35), // "StabilizationSettings_FlightM..."
QT_MOC_LITERAL(1, 36, 4), // "Enum"
QT_MOC_LITERAL(2, 41, 5), // "Bank1"
QT_MOC_LITERAL(3, 47, 5), // "Bank2"
QT_MOC_LITERAL(4, 53, 5) // "Bank3"

    },
    "StabilizationSettings_FlightModeMap\0"
    "Enum\0Bank1\0Bank2\0Bank3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationSettings_FlightModeMap[] = {

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
       2, uint(StabilizationSettings_FlightModeMap::Bank1),
       3, uint(StabilizationSettings_FlightModeMap::Bank2),
       4, uint(StabilizationSettings_FlightModeMap::Bank3),

       0        // eod
};

void StabilizationSettings_FlightModeMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationSettings_FlightModeMap::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationSettings_FlightModeMap.data,
    qt_meta_data_StabilizationSettings_FlightModeMap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationSettings_FlightModeMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationSettings_FlightModeMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationSettings_FlightModeMap.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationSettings_FlightModeMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationSettings_VbarPiroComp_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationSettings_VbarPiroComp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationSettings_VbarPiroComp_t qt_meta_stringdata_StabilizationSettings_VbarPiroComp = {
    {
QT_MOC_LITERAL(0, 0, 34), // "StabilizationSettings_VbarPir..."
QT_MOC_LITERAL(1, 35, 4), // "Enum"
QT_MOC_LITERAL(2, 40, 5), // "False"
QT_MOC_LITERAL(3, 46, 4) // "True"

    },
    "StabilizationSettings_VbarPiroComp\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationSettings_VbarPiroComp[] = {

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
       2, uint(StabilizationSettings_VbarPiroComp::False),
       3, uint(StabilizationSettings_VbarPiroComp::True),

       0        // eod
};

void StabilizationSettings_VbarPiroComp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationSettings_VbarPiroComp::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationSettings_VbarPiroComp.data,
    qt_meta_data_StabilizationSettings_VbarPiroComp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationSettings_VbarPiroComp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationSettings_VbarPiroComp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationSettings_VbarPiroComp.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationSettings_VbarPiroComp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationSettings_CruiseControlFlightModeSwitchPosEnable_t {
    QByteArrayData data[4];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationSettings_CruiseControlFlightModeSwitchPosEnable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationSettings_CruiseControlFlightModeSwitchPosEnable_t qt_meta_stringdata_StabilizationSettings_CruiseControlFlightModeSwitchPosEnable = {
    {
QT_MOC_LITERAL(0, 0, 60), // "StabilizationSettings_CruiseC..."
QT_MOC_LITERAL(1, 61, 4), // "Enum"
QT_MOC_LITERAL(2, 66, 5), // "False"
QT_MOC_LITERAL(3, 72, 4) // "True"

    },
    "StabilizationSettings_CruiseControlFlightModeSwitchPosEnable\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationSettings_CruiseControlFlightModeSwitchPosEnable[] = {

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
       2, uint(StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::False),
       3, uint(StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::True),

       0        // eod
};

void StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationSettings_CruiseControlFlightModeSwitchPosEnable.data,
    qt_meta_data_StabilizationSettings_CruiseControlFlightModeSwitchPosEnable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationSettings_CruiseControlFlightModeSwitchPosEnable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationSettings_CruiseControlInvertedThrustReversing_t {
    QByteArrayData data[4];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationSettings_CruiseControlInvertedThrustReversing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationSettings_CruiseControlInvertedThrustReversing_t qt_meta_stringdata_StabilizationSettings_CruiseControlInvertedThrustReversing = {
    {
QT_MOC_LITERAL(0, 0, 58), // "StabilizationSettings_CruiseC..."
QT_MOC_LITERAL(1, 59, 4), // "Enum"
QT_MOC_LITERAL(2, 64, 10), // "Unreversed"
QT_MOC_LITERAL(3, 75, 8) // "Reversed"

    },
    "StabilizationSettings_CruiseControlInvertedThrustReversing\0"
    "Enum\0Unreversed\0Reversed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationSettings_CruiseControlInvertedThrustReversing[] = {

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
       2, uint(StabilizationSettings_CruiseControlInvertedThrustReversing::Unreversed),
       3, uint(StabilizationSettings_CruiseControlInvertedThrustReversing::Reversed),

       0        // eod
};

void StabilizationSettings_CruiseControlInvertedThrustReversing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationSettings_CruiseControlInvertedThrustReversing::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationSettings_CruiseControlInvertedThrustReversing.data,
    qt_meta_data_StabilizationSettings_CruiseControlInvertedThrustReversing,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationSettings_CruiseControlInvertedThrustReversing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationSettings_CruiseControlInvertedThrustReversing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationSettings_CruiseControlInvertedThrustReversing.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationSettings_CruiseControlInvertedThrustReversing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationSettings_CruiseControlInvertedPowerOutput_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationSettings_CruiseControlInvertedPowerOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationSettings_CruiseControlInvertedPowerOutput_t qt_meta_stringdata_StabilizationSettings_CruiseControlInvertedPowerOutput = {
    {
QT_MOC_LITERAL(0, 0, 54), // "StabilizationSettings_CruiseC..."
QT_MOC_LITERAL(1, 55, 4), // "Enum"
QT_MOC_LITERAL(2, 60, 4), // "Zero"
QT_MOC_LITERAL(3, 65, 6), // "Normal"
QT_MOC_LITERAL(4, 72, 7) // "Boosted"

    },
    "StabilizationSettings_CruiseControlInvertedPowerOutput\0"
    "Enum\0Zero\0Normal\0Boosted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationSettings_CruiseControlInvertedPowerOutput[] = {

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
       2, uint(StabilizationSettings_CruiseControlInvertedPowerOutput::Zero),
       3, uint(StabilizationSettings_CruiseControlInvertedPowerOutput::Normal),
       4, uint(StabilizationSettings_CruiseControlInvertedPowerOutput::Boosted),

       0        // eod
};

void StabilizationSettings_CruiseControlInvertedPowerOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationSettings_CruiseControlInvertedPowerOutput::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationSettings_CruiseControlInvertedPowerOutput.data,
    qt_meta_data_StabilizationSettings_CruiseControlInvertedPowerOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationSettings_CruiseControlInvertedPowerOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationSettings_CruiseControlInvertedPowerOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationSettings_CruiseControlInvertedPowerOutput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationSettings_CruiseControlInvertedPowerOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationSettings_LowThrottleZeroIntegral_t {
    QByteArrayData data[4];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationSettings_LowThrottleZeroIntegral_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationSettings_LowThrottleZeroIntegral_t qt_meta_stringdata_StabilizationSettings_LowThrottleZeroIntegral = {
    {
QT_MOC_LITERAL(0, 0, 45), // "StabilizationSettings_LowThro..."
QT_MOC_LITERAL(1, 46, 4), // "Enum"
QT_MOC_LITERAL(2, 51, 5), // "False"
QT_MOC_LITERAL(3, 57, 4) // "True"

    },
    "StabilizationSettings_LowThrottleZeroIntegral\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationSettings_LowThrottleZeroIntegral[] = {

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
       2, uint(StabilizationSettings_LowThrottleZeroIntegral::False),
       3, uint(StabilizationSettings_LowThrottleZeroIntegral::True),

       0        // eod
};

void StabilizationSettings_LowThrottleZeroIntegral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationSettings_LowThrottleZeroIntegral::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationSettings_LowThrottleZeroIntegral.data,
    qt_meta_data_StabilizationSettings_LowThrottleZeroIntegral,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationSettings_LowThrottleZeroIntegral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationSettings_LowThrottleZeroIntegral::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationSettings_LowThrottleZeroIntegral.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationSettings_LowThrottleZeroIntegral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationSettings_FlightModeAssistMap_t {
    QByteArrayData data[4];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationSettings_FlightModeAssistMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationSettings_FlightModeAssistMap_t qt_meta_stringdata_StabilizationSettings_FlightModeAssistMap = {
    {
QT_MOC_LITERAL(0, 0, 41), // "StabilizationSettings_FlightM..."
QT_MOC_LITERAL(1, 42, 4), // "Enum"
QT_MOC_LITERAL(2, 47, 4), // "None"
QT_MOC_LITERAL(3, 52, 9) // "GPSAssist"

    },
    "StabilizationSettings_FlightModeAssistMap\0"
    "Enum\0None\0GPSAssist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationSettings_FlightModeAssistMap[] = {

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
       2, uint(StabilizationSettings_FlightModeAssistMap::None),
       3, uint(StabilizationSettings_FlightModeAssistMap::GPSAssist),

       0        // eod
};

void StabilizationSettings_FlightModeAssistMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationSettings_FlightModeAssistMap::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationSettings_FlightModeAssistMap.data,
    qt_meta_data_StabilizationSettings_FlightModeAssistMap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationSettings_FlightModeAssistMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationSettings_FlightModeAssistMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationSettings_FlightModeAssistMap.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationSettings_FlightModeAssistMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationSettings_MeasureBasedDTerm_t {
    QByteArrayData data[4];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationSettings_MeasureBasedDTerm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationSettings_MeasureBasedDTerm_t qt_meta_stringdata_StabilizationSettings_MeasureBasedDTerm = {
    {
QT_MOC_LITERAL(0, 0, 39), // "StabilizationSettings_Measure..."
QT_MOC_LITERAL(1, 40, 4), // "Enum"
QT_MOC_LITERAL(2, 45, 5), // "False"
QT_MOC_LITERAL(3, 51, 4) // "True"

    },
    "StabilizationSettings_MeasureBasedDTerm\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationSettings_MeasureBasedDTerm[] = {

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
       2, uint(StabilizationSettings_MeasureBasedDTerm::False),
       3, uint(StabilizationSettings_MeasureBasedDTerm::True),

       0        // eod
};

void StabilizationSettings_MeasureBasedDTerm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationSettings_MeasureBasedDTerm::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationSettings_MeasureBasedDTerm.data,
    qt_meta_data_StabilizationSettings_MeasureBasedDTerm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationSettings_MeasureBasedDTerm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationSettings_MeasureBasedDTerm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationSettings_MeasureBasedDTerm.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationSettings_MeasureBasedDTerm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationSettings_ForceRollPitchDuringYawTransition_t {
    QByteArrayData data[4];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationSettings_ForceRollPitchDuringYawTransition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationSettings_ForceRollPitchDuringYawTransition_t qt_meta_stringdata_StabilizationSettings_ForceRollPitchDuringYawTransition = {
    {
QT_MOC_LITERAL(0, 0, 55), // "StabilizationSettings_ForceRo..."
QT_MOC_LITERAL(1, 56, 4), // "Enum"
QT_MOC_LITERAL(2, 61, 5), // "False"
QT_MOC_LITERAL(3, 67, 4) // "True"

    },
    "StabilizationSettings_ForceRollPitchDuringYawTransition\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationSettings_ForceRollPitchDuringYawTransition[] = {

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
       2, uint(StabilizationSettings_ForceRollPitchDuringYawTransition::False),
       3, uint(StabilizationSettings_ForceRollPitchDuringYawTransition::True),

       0        // eod
};

void StabilizationSettings_ForceRollPitchDuringYawTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StabilizationSettings_ForceRollPitchDuringYawTransition::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StabilizationSettings_ForceRollPitchDuringYawTransition.data,
    qt_meta_data_StabilizationSettings_ForceRollPitchDuringYawTransition,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StabilizationSettings_ForceRollPitchDuringYawTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationSettings_ForceRollPitchDuringYawTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationSettings_ForceRollPitchDuringYawTransition.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StabilizationSettings_ForceRollPitchDuringYawTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StabilizationSettings_t {
    QByteArrayData data[407];
    char stringdata0[10202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StabilizationSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StabilizationSettings_t qt_meta_stringdata_StabilizationSettings = {
    {
QT_MOC_LITERAL(0, 0, 21), // "StabilizationSettings"
QT_MOC_LITERAL(1, 22, 22), // "vbarSensitivityChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5), // "index"
QT_MOC_LITERAL(4, 52, 5), // "value"
QT_MOC_LITERAL(5, 58, 22), // "VbarSensitivityChanged"
QT_MOC_LITERAL(6, 81, 26), // "vbarSensitivityRollChanged"
QT_MOC_LITERAL(7, 108, 27), // "VbarSensitivity_RollChanged"
QT_MOC_LITERAL(8, 136, 27), // "vbarSensitivityPitchChanged"
QT_MOC_LITERAL(9, 164, 28), // "VbarSensitivity_PitchChanged"
QT_MOC_LITERAL(10, 193, 25), // "vbarSensitivityYawChanged"
QT_MOC_LITERAL(11, 219, 26), // "VbarSensitivity_YawChanged"
QT_MOC_LITERAL(12, 246, 17), // "vbarRollPIChanged"
QT_MOC_LITERAL(13, 264, 17), // "VbarRollPIChanged"
QT_MOC_LITERAL(14, 282, 19), // "vbarRollPIKpChanged"
QT_MOC_LITERAL(15, 302, 20), // "VbarRollPI_KpChanged"
QT_MOC_LITERAL(16, 323, 19), // "vbarRollPIKiChanged"
QT_MOC_LITERAL(17, 343, 20), // "VbarRollPI_KiChanged"
QT_MOC_LITERAL(18, 364, 18), // "vbarPitchPIChanged"
QT_MOC_LITERAL(19, 383, 18), // "VbarPitchPIChanged"
QT_MOC_LITERAL(20, 402, 20), // "vbarPitchPIKpChanged"
QT_MOC_LITERAL(21, 423, 21), // "VbarPitchPI_KpChanged"
QT_MOC_LITERAL(22, 445, 20), // "vbarPitchPIKiChanged"
QT_MOC_LITERAL(23, 466, 21), // "VbarPitchPI_KiChanged"
QT_MOC_LITERAL(24, 488, 16), // "vbarYawPIChanged"
QT_MOC_LITERAL(25, 505, 16), // "VbarYawPIChanged"
QT_MOC_LITERAL(26, 522, 18), // "vbarYawPIKpChanged"
QT_MOC_LITERAL(27, 541, 19), // "VbarYawPI_KpChanged"
QT_MOC_LITERAL(28, 561, 18), // "vbarYawPIKiChanged"
QT_MOC_LITERAL(29, 580, 19), // "VbarYawPI_KiChanged"
QT_MOC_LITERAL(30, 600, 14), // "vbarTauChanged"
QT_MOC_LITERAL(31, 615, 14), // "VbarTauChanged"
QT_MOC_LITERAL(32, 630, 14), // "gyroTauChanged"
QT_MOC_LITERAL(33, 645, 14), // "GyroTauChanged"
QT_MOC_LITERAL(34, 660, 22), // "derivativeGammaChanged"
QT_MOC_LITERAL(35, 683, 22), // "DerivativeGammaChanged"
QT_MOC_LITERAL(36, 706, 17), // "axisLockKpChanged"
QT_MOC_LITERAL(37, 724, 17), // "AxisLockKpChanged"
QT_MOC_LITERAL(38, 742, 21), // "weakLevelingKpChanged"
QT_MOC_LITERAL(39, 764, 21), // "WeakLevelingKpChanged"
QT_MOC_LITERAL(40, 786, 34), // "cruiseControlMaxPowerFactorCh..."
QT_MOC_LITERAL(41, 821, 34), // "CruiseControlMaxPowerFactorCh..."
QT_MOC_LITERAL(42, 856, 29), // "cruiseControlPowerTrimChanged"
QT_MOC_LITERAL(43, 886, 29), // "CruiseControlPowerTrimChanged"
QT_MOC_LITERAL(44, 916, 34), // "cruiseControlPowerDelayCompCh..."
QT_MOC_LITERAL(45, 951, 34), // "CruiseControlPowerDelayCompCh..."
QT_MOC_LITERAL(46, 986, 22), // "scaleToAirspeedChanged"
QT_MOC_LITERAL(47, 1009, 22), // "ScaleToAirspeedChanged"
QT_MOC_LITERAL(48, 1032, 28), // "scaleToAirspeedLimitsChanged"
QT_MOC_LITERAL(49, 1061, 28), // "ScaleToAirspeedLimitsChanged"
QT_MOC_LITERAL(50, 1090, 31), // "scaleToAirspeedLimitsMinChanged"
QT_MOC_LITERAL(51, 1122, 32), // "ScaleToAirspeedLimits_MinChanged"
QT_MOC_LITERAL(52, 1155, 31), // "scaleToAirspeedLimitsMaxChanged"
QT_MOC_LITERAL(53, 1187, 32), // "ScaleToAirspeedLimits_MaxChanged"
QT_MOC_LITERAL(54, 1220, 20), // "flightModeMapChanged"
QT_MOC_LITERAL(55, 1241, 41), // "StabilizationSettings_FlightM..."
QT_MOC_LITERAL(56, 1283, 20), // "FlightModeMapChanged"
QT_MOC_LITERAL(57, 1304, 21), // "flightModeMap0Changed"
QT_MOC_LITERAL(58, 1326, 22), // "FlightModeMap_0Changed"
QT_MOC_LITERAL(59, 1349, 21), // "flightModeMap1Changed"
QT_MOC_LITERAL(60, 1371, 22), // "FlightModeMap_1Changed"
QT_MOC_LITERAL(61, 1394, 21), // "flightModeMap2Changed"
QT_MOC_LITERAL(62, 1416, 22), // "FlightModeMap_2Changed"
QT_MOC_LITERAL(63, 1439, 21), // "flightModeMap3Changed"
QT_MOC_LITERAL(64, 1461, 22), // "FlightModeMap_3Changed"
QT_MOC_LITERAL(65, 1484, 21), // "flightModeMap4Changed"
QT_MOC_LITERAL(66, 1506, 22), // "FlightModeMap_4Changed"
QT_MOC_LITERAL(67, 1529, 21), // "flightModeMap5Changed"
QT_MOC_LITERAL(68, 1551, 22), // "FlightModeMap_5Changed"
QT_MOC_LITERAL(69, 1574, 23), // "vbarGyroSuppressChanged"
QT_MOC_LITERAL(70, 1598, 23), // "VbarGyroSuppressChanged"
QT_MOC_LITERAL(71, 1622, 19), // "vbarPiroCompChanged"
QT_MOC_LITERAL(72, 1642, 40), // "StabilizationSettings_VbarPir..."
QT_MOC_LITERAL(73, 1683, 19), // "VbarPiroCompChanged"
QT_MOC_LITERAL(74, 1703, 19), // "vbarMaxAngleChanged"
QT_MOC_LITERAL(75, 1723, 19), // "VbarMaxAngleChanged"
QT_MOC_LITERAL(76, 1743, 23), // "derivativeCutoffChanged"
QT_MOC_LITERAL(77, 1767, 23), // "DerivativeCutoffChanged"
QT_MOC_LITERAL(78, 1791, 18), // "maxAxisLockChanged"
QT_MOC_LITERAL(79, 1810, 18), // "MaxAxisLockChanged"
QT_MOC_LITERAL(80, 1829, 22), // "maxAxisLockRateChanged"
QT_MOC_LITERAL(81, 1852, 22), // "MaxAxisLockRateChanged"
QT_MOC_LITERAL(82, 1875, 26), // "maxWeakLevelingRateChanged"
QT_MOC_LITERAL(83, 1902, 26), // "MaxWeakLevelingRateChanged"
QT_MOC_LITERAL(84, 1929, 30), // "rattitudeModeTransitionChanged"
QT_MOC_LITERAL(85, 1960, 30), // "RattitudeModeTransitionChanged"
QT_MOC_LITERAL(86, 1991, 29), // "cruiseControlMinThrustChanged"
QT_MOC_LITERAL(87, 2021, 29), // "CruiseControlMinThrustChanged"
QT_MOC_LITERAL(88, 2051, 29), // "cruiseControlMaxThrustChanged"
QT_MOC_LITERAL(89, 2081, 29), // "CruiseControlMaxThrustChanged"
QT_MOC_LITERAL(90, 2111, 28), // "cruiseControlMaxAngleChanged"
QT_MOC_LITERAL(91, 2140, 28), // "CruiseControlMaxAngleChanged"
QT_MOC_LITERAL(92, 2169, 45), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(93, 2215, 66), // "StabilizationSettings_CruiseC..."
QT_MOC_LITERAL(94, 2282, 45), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(95, 2328, 46), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(96, 2375, 47), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(97, 2423, 46), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(98, 2470, 47), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(99, 2518, 46), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(100, 2565, 47), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(101, 2613, 46), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(102, 2660, 47), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(103, 2708, 46), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(104, 2755, 47), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(105, 2803, 46), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(106, 2850, 47), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(107, 2898, 43), // "cruiseControlInvertedThrustRe..."
QT_MOC_LITERAL(108, 2942, 64), // "StabilizationSettings_CruiseC..."
QT_MOC_LITERAL(109, 3007, 43), // "CruiseControlInvertedThrustRe..."
QT_MOC_LITERAL(110, 3051, 39), // "cruiseControlInvertedPowerOut..."
QT_MOC_LITERAL(111, 3091, 60), // "StabilizationSettings_CruiseC..."
QT_MOC_LITERAL(112, 3152, 39), // "CruiseControlInvertedPowerOut..."
QT_MOC_LITERAL(113, 3192, 30), // "lowThrottleZeroIntegralChanged"
QT_MOC_LITERAL(114, 3223, 51), // "StabilizationSettings_LowThro..."
QT_MOC_LITERAL(115, 3275, 30), // "LowThrottleZeroIntegralChanged"
QT_MOC_LITERAL(116, 3306, 26), // "flightModeAssistMapChanged"
QT_MOC_LITERAL(117, 3333, 47), // "StabilizationSettings_FlightM..."
QT_MOC_LITERAL(118, 3381, 26), // "FlightModeAssistMapChanged"
QT_MOC_LITERAL(119, 3408, 27), // "flightModeAssistMap0Changed"
QT_MOC_LITERAL(120, 3436, 28), // "FlightModeAssistMap_0Changed"
QT_MOC_LITERAL(121, 3465, 27), // "flightModeAssistMap1Changed"
QT_MOC_LITERAL(122, 3493, 28), // "FlightModeAssistMap_1Changed"
QT_MOC_LITERAL(123, 3522, 27), // "flightModeAssistMap2Changed"
QT_MOC_LITERAL(124, 3550, 28), // "FlightModeAssistMap_2Changed"
QT_MOC_LITERAL(125, 3579, 27), // "flightModeAssistMap3Changed"
QT_MOC_LITERAL(126, 3607, 28), // "FlightModeAssistMap_3Changed"
QT_MOC_LITERAL(127, 3636, 27), // "flightModeAssistMap4Changed"
QT_MOC_LITERAL(128, 3664, 28), // "FlightModeAssistMap_4Changed"
QT_MOC_LITERAL(129, 3693, 27), // "flightModeAssistMap5Changed"
QT_MOC_LITERAL(130, 3721, 28), // "FlightModeAssistMap_5Changed"
QT_MOC_LITERAL(131, 3750, 24), // "measureBasedDTermChanged"
QT_MOC_LITERAL(132, 3775, 45), // "StabilizationSettings_Measure..."
QT_MOC_LITERAL(133, 3821, 24), // "MeasureBasedDTermChanged"
QT_MOC_LITERAL(134, 3846, 40), // "forceRollPitchDuringYawTransi..."
QT_MOC_LITERAL(135, 3887, 61), // "StabilizationSettings_ForceRo..."
QT_MOC_LITERAL(136, 3949, 40), // "ForceRollPitchDuringYawTransi..."
QT_MOC_LITERAL(137, 3990, 18), // "setVbarSensitivity"
QT_MOC_LITERAL(138, 4009, 22), // "setVbarSensitivityRoll"
QT_MOC_LITERAL(139, 4032, 23), // "setVbarSensitivity_Roll"
QT_MOC_LITERAL(140, 4056, 23), // "setVbarSensitivityPitch"
QT_MOC_LITERAL(141, 4080, 24), // "setVbarSensitivity_Pitch"
QT_MOC_LITERAL(142, 4105, 21), // "setVbarSensitivityYaw"
QT_MOC_LITERAL(143, 4127, 22), // "setVbarSensitivity_Yaw"
QT_MOC_LITERAL(144, 4150, 13), // "setVbarRollPI"
QT_MOC_LITERAL(145, 4164, 15), // "setVbarRollPIKp"
QT_MOC_LITERAL(146, 4180, 16), // "setVbarRollPI_Kp"
QT_MOC_LITERAL(147, 4197, 15), // "setVbarRollPIKi"
QT_MOC_LITERAL(148, 4213, 16), // "setVbarRollPI_Ki"
QT_MOC_LITERAL(149, 4230, 14), // "setVbarPitchPI"
QT_MOC_LITERAL(150, 4245, 16), // "setVbarPitchPIKp"
QT_MOC_LITERAL(151, 4262, 17), // "setVbarPitchPI_Kp"
QT_MOC_LITERAL(152, 4280, 16), // "setVbarPitchPIKi"
QT_MOC_LITERAL(153, 4297, 17), // "setVbarPitchPI_Ki"
QT_MOC_LITERAL(154, 4315, 12), // "setVbarYawPI"
QT_MOC_LITERAL(155, 4328, 14), // "setVbarYawPIKp"
QT_MOC_LITERAL(156, 4343, 15), // "setVbarYawPI_Kp"
QT_MOC_LITERAL(157, 4359, 14), // "setVbarYawPIKi"
QT_MOC_LITERAL(158, 4374, 15), // "setVbarYawPI_Ki"
QT_MOC_LITERAL(159, 4390, 10), // "setVbarTau"
QT_MOC_LITERAL(160, 4401, 10), // "setGyroTau"
QT_MOC_LITERAL(161, 4412, 18), // "setDerivativeGamma"
QT_MOC_LITERAL(162, 4431, 13), // "setAxisLockKp"
QT_MOC_LITERAL(163, 4445, 17), // "setWeakLevelingKp"
QT_MOC_LITERAL(164, 4463, 30), // "setCruiseControlMaxPowerFactor"
QT_MOC_LITERAL(165, 4494, 25), // "setCruiseControlPowerTrim"
QT_MOC_LITERAL(166, 4520, 30), // "setCruiseControlPowerDelayComp"
QT_MOC_LITERAL(167, 4551, 18), // "setScaleToAirspeed"
QT_MOC_LITERAL(168, 4570, 24), // "setScaleToAirspeedLimits"
QT_MOC_LITERAL(169, 4595, 27), // "setScaleToAirspeedLimitsMin"
QT_MOC_LITERAL(170, 4623, 28), // "setScaleToAirspeedLimits_Min"
QT_MOC_LITERAL(171, 4652, 27), // "setScaleToAirspeedLimitsMax"
QT_MOC_LITERAL(172, 4680, 28), // "setScaleToAirspeedLimits_Max"
QT_MOC_LITERAL(173, 4709, 16), // "setFlightModeMap"
QT_MOC_LITERAL(174, 4726, 17), // "setFlightModeMap0"
QT_MOC_LITERAL(175, 4744, 18), // "setFlightModeMap_0"
QT_MOC_LITERAL(176, 4763, 17), // "setFlightModeMap1"
QT_MOC_LITERAL(177, 4781, 18), // "setFlightModeMap_1"
QT_MOC_LITERAL(178, 4800, 17), // "setFlightModeMap2"
QT_MOC_LITERAL(179, 4818, 18), // "setFlightModeMap_2"
QT_MOC_LITERAL(180, 4837, 17), // "setFlightModeMap3"
QT_MOC_LITERAL(181, 4855, 18), // "setFlightModeMap_3"
QT_MOC_LITERAL(182, 4874, 17), // "setFlightModeMap4"
QT_MOC_LITERAL(183, 4892, 18), // "setFlightModeMap_4"
QT_MOC_LITERAL(184, 4911, 17), // "setFlightModeMap5"
QT_MOC_LITERAL(185, 4929, 18), // "setFlightModeMap_5"
QT_MOC_LITERAL(186, 4948, 19), // "setVbarGyroSuppress"
QT_MOC_LITERAL(187, 4968, 15), // "setVbarPiroComp"
QT_MOC_LITERAL(188, 4984, 15), // "setVbarMaxAngle"
QT_MOC_LITERAL(189, 5000, 19), // "setDerivativeCutoff"
QT_MOC_LITERAL(190, 5020, 14), // "setMaxAxisLock"
QT_MOC_LITERAL(191, 5035, 18), // "setMaxAxisLockRate"
QT_MOC_LITERAL(192, 5054, 22), // "setMaxWeakLevelingRate"
QT_MOC_LITERAL(193, 5077, 26), // "setRattitudeModeTransition"
QT_MOC_LITERAL(194, 5104, 25), // "setCruiseControlMinThrust"
QT_MOC_LITERAL(195, 5130, 25), // "setCruiseControlMaxThrust"
QT_MOC_LITERAL(196, 5156, 24), // "setCruiseControlMaxAngle"
QT_MOC_LITERAL(197, 5181, 41), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(198, 5223, 42), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(199, 5266, 43), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(200, 5310, 42), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(201, 5353, 43), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(202, 5397, 42), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(203, 5440, 43), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(204, 5484, 42), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(205, 5527, 43), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(206, 5571, 42), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(207, 5614, 43), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(208, 5658, 42), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(209, 5701, 43), // "setCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(210, 5745, 39), // "setCruiseControlInvertedThrus..."
QT_MOC_LITERAL(211, 5785, 35), // "setCruiseControlInvertedPower..."
QT_MOC_LITERAL(212, 5821, 26), // "setLowThrottleZeroIntegral"
QT_MOC_LITERAL(213, 5848, 22), // "setFlightModeAssistMap"
QT_MOC_LITERAL(214, 5871, 23), // "setFlightModeAssistMap0"
QT_MOC_LITERAL(215, 5895, 24), // "setFlightModeAssistMap_0"
QT_MOC_LITERAL(216, 5920, 23), // "setFlightModeAssistMap1"
QT_MOC_LITERAL(217, 5944, 24), // "setFlightModeAssistMap_1"
QT_MOC_LITERAL(218, 5969, 23), // "setFlightModeAssistMap2"
QT_MOC_LITERAL(219, 5993, 24), // "setFlightModeAssistMap_2"
QT_MOC_LITERAL(220, 6018, 23), // "setFlightModeAssistMap3"
QT_MOC_LITERAL(221, 6042, 24), // "setFlightModeAssistMap_3"
QT_MOC_LITERAL(222, 6067, 23), // "setFlightModeAssistMap4"
QT_MOC_LITERAL(223, 6091, 24), // "setFlightModeAssistMap_4"
QT_MOC_LITERAL(224, 6116, 23), // "setFlightModeAssistMap5"
QT_MOC_LITERAL(225, 6140, 24), // "setFlightModeAssistMap_5"
QT_MOC_LITERAL(226, 6165, 20), // "setMeasureBasedDTerm"
QT_MOC_LITERAL(227, 6186, 36), // "setForceRollPitchDuringYawTra..."
QT_MOC_LITERAL(228, 6223, 17), // "emitNotifications"
QT_MOC_LITERAL(229, 6241, 15), // "vbarSensitivity"
QT_MOC_LITERAL(230, 6257, 18), // "getVbarSensitivity"
QT_MOC_LITERAL(231, 6276, 23), // "getVbarSensitivity_Roll"
QT_MOC_LITERAL(232, 6300, 24), // "getVbarSensitivity_Pitch"
QT_MOC_LITERAL(233, 6325, 22), // "getVbarSensitivity_Yaw"
QT_MOC_LITERAL(234, 6348, 10), // "vbarRollPI"
QT_MOC_LITERAL(235, 6359, 13), // "getVbarRollPI"
QT_MOC_LITERAL(236, 6373, 16), // "getVbarRollPI_Kp"
QT_MOC_LITERAL(237, 6390, 16), // "getVbarRollPI_Ki"
QT_MOC_LITERAL(238, 6407, 11), // "vbarPitchPI"
QT_MOC_LITERAL(239, 6419, 14), // "getVbarPitchPI"
QT_MOC_LITERAL(240, 6434, 17), // "getVbarPitchPI_Kp"
QT_MOC_LITERAL(241, 6452, 17), // "getVbarPitchPI_Ki"
QT_MOC_LITERAL(242, 6470, 9), // "vbarYawPI"
QT_MOC_LITERAL(243, 6480, 12), // "getVbarYawPI"
QT_MOC_LITERAL(244, 6493, 15), // "getVbarYawPI_Kp"
QT_MOC_LITERAL(245, 6509, 15), // "getVbarYawPI_Ki"
QT_MOC_LITERAL(246, 6525, 10), // "getVbarTau"
QT_MOC_LITERAL(247, 6536, 10), // "getGyroTau"
QT_MOC_LITERAL(248, 6547, 18), // "getDerivativeGamma"
QT_MOC_LITERAL(249, 6566, 13), // "getAxisLockKp"
QT_MOC_LITERAL(250, 6580, 17), // "getWeakLevelingKp"
QT_MOC_LITERAL(251, 6598, 30), // "getCruiseControlMaxPowerFactor"
QT_MOC_LITERAL(252, 6629, 25), // "getCruiseControlPowerTrim"
QT_MOC_LITERAL(253, 6655, 30), // "getCruiseControlPowerDelayComp"
QT_MOC_LITERAL(254, 6686, 18), // "getScaleToAirspeed"
QT_MOC_LITERAL(255, 6705, 21), // "scaleToAirspeedLimits"
QT_MOC_LITERAL(256, 6727, 24), // "getScaleToAirspeedLimits"
QT_MOC_LITERAL(257, 6752, 28), // "getScaleToAirspeedLimits_Min"
QT_MOC_LITERAL(258, 6781, 28), // "getScaleToAirspeedLimits_Max"
QT_MOC_LITERAL(259, 6810, 13), // "flightModeMap"
QT_MOC_LITERAL(260, 6824, 16), // "getFlightModeMap"
QT_MOC_LITERAL(261, 6841, 18), // "getFlightModeMap_0"
QT_MOC_LITERAL(262, 6860, 18), // "getFlightModeMap_1"
QT_MOC_LITERAL(263, 6879, 18), // "getFlightModeMap_2"
QT_MOC_LITERAL(264, 6898, 18), // "getFlightModeMap_3"
QT_MOC_LITERAL(265, 6917, 18), // "getFlightModeMap_4"
QT_MOC_LITERAL(266, 6936, 18), // "getFlightModeMap_5"
QT_MOC_LITERAL(267, 6955, 19), // "getVbarGyroSuppress"
QT_MOC_LITERAL(268, 6975, 15), // "getVbarPiroComp"
QT_MOC_LITERAL(269, 6991, 15), // "getVbarMaxAngle"
QT_MOC_LITERAL(270, 7007, 19), // "getDerivativeCutoff"
QT_MOC_LITERAL(271, 7027, 14), // "getMaxAxisLock"
QT_MOC_LITERAL(272, 7042, 18), // "getMaxAxisLockRate"
QT_MOC_LITERAL(273, 7061, 22), // "getMaxWeakLevelingRate"
QT_MOC_LITERAL(274, 7084, 26), // "getRattitudeModeTransition"
QT_MOC_LITERAL(275, 7111, 25), // "getCruiseControlMinThrust"
QT_MOC_LITERAL(276, 7137, 25), // "getCruiseControlMaxThrust"
QT_MOC_LITERAL(277, 7163, 24), // "getCruiseControlMaxAngle"
QT_MOC_LITERAL(278, 7188, 38), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(279, 7227, 41), // "getCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(280, 7269, 43), // "getCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(281, 7313, 43), // "getCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(282, 7357, 43), // "getCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(283, 7401, 43), // "getCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(284, 7445, 43), // "getCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(285, 7489, 43), // "getCruiseControlFlightModeSwi..."
QT_MOC_LITERAL(286, 7533, 39), // "getCruiseControlInvertedThrus..."
QT_MOC_LITERAL(287, 7573, 35), // "getCruiseControlInvertedPower..."
QT_MOC_LITERAL(288, 7609, 26), // "getLowThrottleZeroIntegral"
QT_MOC_LITERAL(289, 7636, 19), // "flightModeAssistMap"
QT_MOC_LITERAL(290, 7656, 22), // "getFlightModeAssistMap"
QT_MOC_LITERAL(291, 7679, 24), // "getFlightModeAssistMap_0"
QT_MOC_LITERAL(292, 7704, 24), // "getFlightModeAssistMap_1"
QT_MOC_LITERAL(293, 7729, 24), // "getFlightModeAssistMap_2"
QT_MOC_LITERAL(294, 7754, 24), // "getFlightModeAssistMap_3"
QT_MOC_LITERAL(295, 7779, 24), // "getFlightModeAssistMap_4"
QT_MOC_LITERAL(296, 7804, 24), // "getFlightModeAssistMap_5"
QT_MOC_LITERAL(297, 7829, 20), // "getMeasureBasedDTerm"
QT_MOC_LITERAL(298, 7850, 36), // "getForceRollPitchDuringYawTra..."
QT_MOC_LITERAL(299, 7887, 19), // "vbarSensitivityRoll"
QT_MOC_LITERAL(300, 7907, 20), // "vbarSensitivityPitch"
QT_MOC_LITERAL(301, 7928, 18), // "vbarSensitivityYaw"
QT_MOC_LITERAL(302, 7947, 12), // "vbarRollPIKp"
QT_MOC_LITERAL(303, 7960, 12), // "vbarRollPIKi"
QT_MOC_LITERAL(304, 7973, 13), // "vbarPitchPIKp"
QT_MOC_LITERAL(305, 7987, 13), // "vbarPitchPIKi"
QT_MOC_LITERAL(306, 8001, 11), // "vbarYawPIKp"
QT_MOC_LITERAL(307, 8013, 11), // "vbarYawPIKi"
QT_MOC_LITERAL(308, 8025, 7), // "vbarTau"
QT_MOC_LITERAL(309, 8033, 7), // "gyroTau"
QT_MOC_LITERAL(310, 8041, 15), // "derivativeGamma"
QT_MOC_LITERAL(311, 8057, 10), // "axisLockKp"
QT_MOC_LITERAL(312, 8068, 14), // "weakLevelingKp"
QT_MOC_LITERAL(313, 8083, 27), // "cruiseControlMaxPowerFactor"
QT_MOC_LITERAL(314, 8111, 22), // "cruiseControlPowerTrim"
QT_MOC_LITERAL(315, 8134, 27), // "cruiseControlPowerDelayComp"
QT_MOC_LITERAL(316, 8162, 15), // "scaleToAirspeed"
QT_MOC_LITERAL(317, 8178, 24), // "scaleToAirspeedLimitsMin"
QT_MOC_LITERAL(318, 8203, 24), // "scaleToAirspeedLimitsMax"
QT_MOC_LITERAL(319, 8228, 14), // "flightModeMap0"
QT_MOC_LITERAL(320, 8243, 14), // "flightModeMap1"
QT_MOC_LITERAL(321, 8258, 14), // "flightModeMap2"
QT_MOC_LITERAL(322, 8273, 14), // "flightModeMap3"
QT_MOC_LITERAL(323, 8288, 14), // "flightModeMap4"
QT_MOC_LITERAL(324, 8303, 14), // "flightModeMap5"
QT_MOC_LITERAL(325, 8318, 16), // "vbarGyroSuppress"
QT_MOC_LITERAL(326, 8335, 12), // "vbarPiroComp"
QT_MOC_LITERAL(327, 8348, 12), // "vbarMaxAngle"
QT_MOC_LITERAL(328, 8361, 16), // "derivativeCutoff"
QT_MOC_LITERAL(329, 8378, 11), // "maxAxisLock"
QT_MOC_LITERAL(330, 8390, 15), // "maxAxisLockRate"
QT_MOC_LITERAL(331, 8406, 19), // "maxWeakLevelingRate"
QT_MOC_LITERAL(332, 8426, 23), // "rattitudeModeTransition"
QT_MOC_LITERAL(333, 8450, 22), // "cruiseControlMinThrust"
QT_MOC_LITERAL(334, 8473, 22), // "cruiseControlMaxThrust"
QT_MOC_LITERAL(335, 8496, 21), // "cruiseControlMaxAngle"
QT_MOC_LITERAL(336, 8518, 39), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(337, 8558, 39), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(338, 8598, 39), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(339, 8638, 39), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(340, 8678, 39), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(341, 8718, 39), // "cruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(342, 8758, 36), // "cruiseControlInvertedThrustRe..."
QT_MOC_LITERAL(343, 8795, 32), // "cruiseControlInvertedPowerOutput"
QT_MOC_LITERAL(344, 8828, 23), // "lowThrottleZeroIntegral"
QT_MOC_LITERAL(345, 8852, 20), // "flightModeAssistMap0"
QT_MOC_LITERAL(346, 8873, 20), // "flightModeAssistMap1"
QT_MOC_LITERAL(347, 8894, 20), // "flightModeAssistMap2"
QT_MOC_LITERAL(348, 8915, 20), // "flightModeAssistMap3"
QT_MOC_LITERAL(349, 8936, 20), // "flightModeAssistMap4"
QT_MOC_LITERAL(350, 8957, 20), // "flightModeAssistMap5"
QT_MOC_LITERAL(351, 8978, 17), // "measureBasedDTerm"
QT_MOC_LITERAL(352, 8996, 33), // "forceRollPitchDuringYawTransi..."
QT_MOC_LITERAL(353, 9030, 20), // "VbarSensitivity_Roll"
QT_MOC_LITERAL(354, 9051, 21), // "VbarSensitivity_Pitch"
QT_MOC_LITERAL(355, 9073, 19), // "VbarSensitivity_Yaw"
QT_MOC_LITERAL(356, 9093, 13), // "VbarRollPI_Kp"
QT_MOC_LITERAL(357, 9107, 13), // "VbarRollPI_Ki"
QT_MOC_LITERAL(358, 9121, 14), // "VbarPitchPI_Kp"
QT_MOC_LITERAL(359, 9136, 14), // "VbarPitchPI_Ki"
QT_MOC_LITERAL(360, 9151, 12), // "VbarYawPI_Kp"
QT_MOC_LITERAL(361, 9164, 12), // "VbarYawPI_Ki"
QT_MOC_LITERAL(362, 9177, 7), // "VbarTau"
QT_MOC_LITERAL(363, 9185, 7), // "GyroTau"
QT_MOC_LITERAL(364, 9193, 15), // "DerivativeGamma"
QT_MOC_LITERAL(365, 9209, 10), // "AxisLockKp"
QT_MOC_LITERAL(366, 9220, 14), // "WeakLevelingKp"
QT_MOC_LITERAL(367, 9235, 27), // "CruiseControlMaxPowerFactor"
QT_MOC_LITERAL(368, 9263, 22), // "CruiseControlPowerTrim"
QT_MOC_LITERAL(369, 9286, 27), // "CruiseControlPowerDelayComp"
QT_MOC_LITERAL(370, 9314, 15), // "ScaleToAirspeed"
QT_MOC_LITERAL(371, 9330, 25), // "ScaleToAirspeedLimits_Min"
QT_MOC_LITERAL(372, 9356, 25), // "ScaleToAirspeedLimits_Max"
QT_MOC_LITERAL(373, 9382, 15), // "FlightModeMap_0"
QT_MOC_LITERAL(374, 9398, 15), // "FlightModeMap_1"
QT_MOC_LITERAL(375, 9414, 15), // "FlightModeMap_2"
QT_MOC_LITERAL(376, 9430, 15), // "FlightModeMap_3"
QT_MOC_LITERAL(377, 9446, 15), // "FlightModeMap_4"
QT_MOC_LITERAL(378, 9462, 15), // "FlightModeMap_5"
QT_MOC_LITERAL(379, 9478, 16), // "VbarGyroSuppress"
QT_MOC_LITERAL(380, 9495, 12), // "VbarPiroComp"
QT_MOC_LITERAL(381, 9508, 12), // "VbarMaxAngle"
QT_MOC_LITERAL(382, 9521, 16), // "DerivativeCutoff"
QT_MOC_LITERAL(383, 9538, 11), // "MaxAxisLock"
QT_MOC_LITERAL(384, 9550, 15), // "MaxAxisLockRate"
QT_MOC_LITERAL(385, 9566, 19), // "MaxWeakLevelingRate"
QT_MOC_LITERAL(386, 9586, 23), // "RattitudeModeTransition"
QT_MOC_LITERAL(387, 9610, 22), // "CruiseControlMinThrust"
QT_MOC_LITERAL(388, 9633, 22), // "CruiseControlMaxThrust"
QT_MOC_LITERAL(389, 9656, 21), // "CruiseControlMaxAngle"
QT_MOC_LITERAL(390, 9678, 40), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(391, 9719, 40), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(392, 9760, 40), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(393, 9801, 40), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(394, 9842, 40), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(395, 9883, 40), // "CruiseControlFlightModeSwitch..."
QT_MOC_LITERAL(396, 9924, 36), // "CruiseControlInvertedThrustRe..."
QT_MOC_LITERAL(397, 9961, 32), // "CruiseControlInvertedPowerOutput"
QT_MOC_LITERAL(398, 9994, 23), // "LowThrottleZeroIntegral"
QT_MOC_LITERAL(399, 10018, 21), // "FlightModeAssistMap_0"
QT_MOC_LITERAL(400, 10040, 21), // "FlightModeAssistMap_1"
QT_MOC_LITERAL(401, 10062, 21), // "FlightModeAssistMap_2"
QT_MOC_LITERAL(402, 10084, 21), // "FlightModeAssistMap_3"
QT_MOC_LITERAL(403, 10106, 21), // "FlightModeAssistMap_4"
QT_MOC_LITERAL(404, 10128, 21), // "FlightModeAssistMap_5"
QT_MOC_LITERAL(405, 10150, 17), // "MeasureBasedDTerm"
QT_MOC_LITERAL(406, 10168, 33) // "ForceRollPitchDuringYawTransi..."

    },
    "StabilizationSettings\0vbarSensitivityChanged\0"
    "\0index\0value\0VbarSensitivityChanged\0"
    "vbarSensitivityRollChanged\0"
    "VbarSensitivity_RollChanged\0"
    "vbarSensitivityPitchChanged\0"
    "VbarSensitivity_PitchChanged\0"
    "vbarSensitivityYawChanged\0"
    "VbarSensitivity_YawChanged\0vbarRollPIChanged\0"
    "VbarRollPIChanged\0vbarRollPIKpChanged\0"
    "VbarRollPI_KpChanged\0vbarRollPIKiChanged\0"
    "VbarRollPI_KiChanged\0vbarPitchPIChanged\0"
    "VbarPitchPIChanged\0vbarPitchPIKpChanged\0"
    "VbarPitchPI_KpChanged\0vbarPitchPIKiChanged\0"
    "VbarPitchPI_KiChanged\0vbarYawPIChanged\0"
    "VbarYawPIChanged\0vbarYawPIKpChanged\0"
    "VbarYawPI_KpChanged\0vbarYawPIKiChanged\0"
    "VbarYawPI_KiChanged\0vbarTauChanged\0"
    "VbarTauChanged\0gyroTauChanged\0"
    "GyroTauChanged\0derivativeGammaChanged\0"
    "DerivativeGammaChanged\0axisLockKpChanged\0"
    "AxisLockKpChanged\0weakLevelingKpChanged\0"
    "WeakLevelingKpChanged\0"
    "cruiseControlMaxPowerFactorChanged\0"
    "CruiseControlMaxPowerFactorChanged\0"
    "cruiseControlPowerTrimChanged\0"
    "CruiseControlPowerTrimChanged\0"
    "cruiseControlPowerDelayCompChanged\0"
    "CruiseControlPowerDelayCompChanged\0"
    "scaleToAirspeedChanged\0ScaleToAirspeedChanged\0"
    "scaleToAirspeedLimitsChanged\0"
    "ScaleToAirspeedLimitsChanged\0"
    "scaleToAirspeedLimitsMinChanged\0"
    "ScaleToAirspeedLimits_MinChanged\0"
    "scaleToAirspeedLimitsMaxChanged\0"
    "ScaleToAirspeedLimits_MaxChanged\0"
    "flightModeMapChanged\0"
    "StabilizationSettings_FlightModeMap::Enum\0"
    "FlightModeMapChanged\0flightModeMap0Changed\0"
    "FlightModeMap_0Changed\0flightModeMap1Changed\0"
    "FlightModeMap_1Changed\0flightModeMap2Changed\0"
    "FlightModeMap_2Changed\0flightModeMap3Changed\0"
    "FlightModeMap_3Changed\0flightModeMap4Changed\0"
    "FlightModeMap_4Changed\0flightModeMap5Changed\0"
    "FlightModeMap_5Changed\0vbarGyroSuppressChanged\0"
    "VbarGyroSuppressChanged\0vbarPiroCompChanged\0"
    "StabilizationSettings_VbarPiroComp::Enum\0"
    "VbarPiroCompChanged\0vbarMaxAngleChanged\0"
    "VbarMaxAngleChanged\0derivativeCutoffChanged\0"
    "DerivativeCutoffChanged\0maxAxisLockChanged\0"
    "MaxAxisLockChanged\0maxAxisLockRateChanged\0"
    "MaxAxisLockRateChanged\0"
    "maxWeakLevelingRateChanged\0"
    "MaxWeakLevelingRateChanged\0"
    "rattitudeModeTransitionChanged\0"
    "RattitudeModeTransitionChanged\0"
    "cruiseControlMinThrustChanged\0"
    "CruiseControlMinThrustChanged\0"
    "cruiseControlMaxThrustChanged\0"
    "CruiseControlMaxThrustChanged\0"
    "cruiseControlMaxAngleChanged\0"
    "CruiseControlMaxAngleChanged\0"
    "cruiseControlFlightModeSwitchPosEnableChanged\0"
    "StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum\0"
    "CruiseControlFlightModeSwitchPosEnableChanged\0"
    "cruiseControlFlightModeSwitchPosEnable0Changed\0"
    "CruiseControlFlightModeSwitchPosEnable_0Changed\0"
    "cruiseControlFlightModeSwitchPosEnable1Changed\0"
    "CruiseControlFlightModeSwitchPosEnable_1Changed\0"
    "cruiseControlFlightModeSwitchPosEnable2Changed\0"
    "CruiseControlFlightModeSwitchPosEnable_2Changed\0"
    "cruiseControlFlightModeSwitchPosEnable3Changed\0"
    "CruiseControlFlightModeSwitchPosEnable_3Changed\0"
    "cruiseControlFlightModeSwitchPosEnable4Changed\0"
    "CruiseControlFlightModeSwitchPosEnable_4Changed\0"
    "cruiseControlFlightModeSwitchPosEnable5Changed\0"
    "CruiseControlFlightModeSwitchPosEnable_5Changed\0"
    "cruiseControlInvertedThrustReversingChanged\0"
    "StabilizationSettings_CruiseControlInvertedThrustReversing::Enum\0"
    "CruiseControlInvertedThrustReversingChanged\0"
    "cruiseControlInvertedPowerOutputChanged\0"
    "StabilizationSettings_CruiseControlInvertedPowerOutput::Enum\0"
    "CruiseControlInvertedPowerOutputChanged\0"
    "lowThrottleZeroIntegralChanged\0"
    "StabilizationSettings_LowThrottleZeroIntegral::Enum\0"
    "LowThrottleZeroIntegralChanged\0"
    "flightModeAssistMapChanged\0"
    "StabilizationSettings_FlightModeAssistMap::Enum\0"
    "FlightModeAssistMapChanged\0"
    "flightModeAssistMap0Changed\0"
    "FlightModeAssistMap_0Changed\0"
    "flightModeAssistMap1Changed\0"
    "FlightModeAssistMap_1Changed\0"
    "flightModeAssistMap2Changed\0"
    "FlightModeAssistMap_2Changed\0"
    "flightModeAssistMap3Changed\0"
    "FlightModeAssistMap_3Changed\0"
    "flightModeAssistMap4Changed\0"
    "FlightModeAssistMap_4Changed\0"
    "flightModeAssistMap5Changed\0"
    "FlightModeAssistMap_5Changed\0"
    "measureBasedDTermChanged\0"
    "StabilizationSettings_MeasureBasedDTerm::Enum\0"
    "MeasureBasedDTermChanged\0"
    "forceRollPitchDuringYawTransitionChanged\0"
    "StabilizationSettings_ForceRollPitchDuringYawTransition::Enum\0"
    "ForceRollPitchDuringYawTransitionChanged\0"
    "setVbarSensitivity\0setVbarSensitivityRoll\0"
    "setVbarSensitivity_Roll\0setVbarSensitivityPitch\0"
    "setVbarSensitivity_Pitch\0setVbarSensitivityYaw\0"
    "setVbarSensitivity_Yaw\0setVbarRollPI\0"
    "setVbarRollPIKp\0setVbarRollPI_Kp\0"
    "setVbarRollPIKi\0setVbarRollPI_Ki\0"
    "setVbarPitchPI\0setVbarPitchPIKp\0"
    "setVbarPitchPI_Kp\0setVbarPitchPIKi\0"
    "setVbarPitchPI_Ki\0setVbarYawPI\0"
    "setVbarYawPIKp\0setVbarYawPI_Kp\0"
    "setVbarYawPIKi\0setVbarYawPI_Ki\0"
    "setVbarTau\0setGyroTau\0setDerivativeGamma\0"
    "setAxisLockKp\0setWeakLevelingKp\0"
    "setCruiseControlMaxPowerFactor\0"
    "setCruiseControlPowerTrim\0"
    "setCruiseControlPowerDelayComp\0"
    "setScaleToAirspeed\0setScaleToAirspeedLimits\0"
    "setScaleToAirspeedLimitsMin\0"
    "setScaleToAirspeedLimits_Min\0"
    "setScaleToAirspeedLimitsMax\0"
    "setScaleToAirspeedLimits_Max\0"
    "setFlightModeMap\0setFlightModeMap0\0"
    "setFlightModeMap_0\0setFlightModeMap1\0"
    "setFlightModeMap_1\0setFlightModeMap2\0"
    "setFlightModeMap_2\0setFlightModeMap3\0"
    "setFlightModeMap_3\0setFlightModeMap4\0"
    "setFlightModeMap_4\0setFlightModeMap5\0"
    "setFlightModeMap_5\0setVbarGyroSuppress\0"
    "setVbarPiroComp\0setVbarMaxAngle\0"
    "setDerivativeCutoff\0setMaxAxisLock\0"
    "setMaxAxisLockRate\0setMaxWeakLevelingRate\0"
    "setRattitudeModeTransition\0"
    "setCruiseControlMinThrust\0"
    "setCruiseControlMaxThrust\0"
    "setCruiseControlMaxAngle\0"
    "setCruiseControlFlightModeSwitchPosEnable\0"
    "setCruiseControlFlightModeSwitchPosEnable0\0"
    "setCruiseControlFlightModeSwitchPosEnable_0\0"
    "setCruiseControlFlightModeSwitchPosEnable1\0"
    "setCruiseControlFlightModeSwitchPosEnable_1\0"
    "setCruiseControlFlightModeSwitchPosEnable2\0"
    "setCruiseControlFlightModeSwitchPosEnable_2\0"
    "setCruiseControlFlightModeSwitchPosEnable3\0"
    "setCruiseControlFlightModeSwitchPosEnable_3\0"
    "setCruiseControlFlightModeSwitchPosEnable4\0"
    "setCruiseControlFlightModeSwitchPosEnable_4\0"
    "setCruiseControlFlightModeSwitchPosEnable5\0"
    "setCruiseControlFlightModeSwitchPosEnable_5\0"
    "setCruiseControlInvertedThrustReversing\0"
    "setCruiseControlInvertedPowerOutput\0"
    "setLowThrottleZeroIntegral\0"
    "setFlightModeAssistMap\0setFlightModeAssistMap0\0"
    "setFlightModeAssistMap_0\0"
    "setFlightModeAssistMap1\0"
    "setFlightModeAssistMap_1\0"
    "setFlightModeAssistMap2\0"
    "setFlightModeAssistMap_2\0"
    "setFlightModeAssistMap3\0"
    "setFlightModeAssistMap_3\0"
    "setFlightModeAssistMap4\0"
    "setFlightModeAssistMap_4\0"
    "setFlightModeAssistMap5\0"
    "setFlightModeAssistMap_5\0setMeasureBasedDTerm\0"
    "setForceRollPitchDuringYawTransition\0"
    "emitNotifications\0vbarSensitivity\0"
    "getVbarSensitivity\0getVbarSensitivity_Roll\0"
    "getVbarSensitivity_Pitch\0"
    "getVbarSensitivity_Yaw\0vbarRollPI\0"
    "getVbarRollPI\0getVbarRollPI_Kp\0"
    "getVbarRollPI_Ki\0vbarPitchPI\0"
    "getVbarPitchPI\0getVbarPitchPI_Kp\0"
    "getVbarPitchPI_Ki\0vbarYawPI\0getVbarYawPI\0"
    "getVbarYawPI_Kp\0getVbarYawPI_Ki\0"
    "getVbarTau\0getGyroTau\0getDerivativeGamma\0"
    "getAxisLockKp\0getWeakLevelingKp\0"
    "getCruiseControlMaxPowerFactor\0"
    "getCruiseControlPowerTrim\0"
    "getCruiseControlPowerDelayComp\0"
    "getScaleToAirspeed\0scaleToAirspeedLimits\0"
    "getScaleToAirspeedLimits\0"
    "getScaleToAirspeedLimits_Min\0"
    "getScaleToAirspeedLimits_Max\0flightModeMap\0"
    "getFlightModeMap\0getFlightModeMap_0\0"
    "getFlightModeMap_1\0getFlightModeMap_2\0"
    "getFlightModeMap_3\0getFlightModeMap_4\0"
    "getFlightModeMap_5\0getVbarGyroSuppress\0"
    "getVbarPiroComp\0getVbarMaxAngle\0"
    "getDerivativeCutoff\0getMaxAxisLock\0"
    "getMaxAxisLockRate\0getMaxWeakLevelingRate\0"
    "getRattitudeModeTransition\0"
    "getCruiseControlMinThrust\0"
    "getCruiseControlMaxThrust\0"
    "getCruiseControlMaxAngle\0"
    "cruiseControlFlightModeSwitchPosEnable\0"
    "getCruiseControlFlightModeSwitchPosEnable\0"
    "getCruiseControlFlightModeSwitchPosEnable_0\0"
    "getCruiseControlFlightModeSwitchPosEnable_1\0"
    "getCruiseControlFlightModeSwitchPosEnable_2\0"
    "getCruiseControlFlightModeSwitchPosEnable_3\0"
    "getCruiseControlFlightModeSwitchPosEnable_4\0"
    "getCruiseControlFlightModeSwitchPosEnable_5\0"
    "getCruiseControlInvertedThrustReversing\0"
    "getCruiseControlInvertedPowerOutput\0"
    "getLowThrottleZeroIntegral\0"
    "flightModeAssistMap\0getFlightModeAssistMap\0"
    "getFlightModeAssistMap_0\0"
    "getFlightModeAssistMap_1\0"
    "getFlightModeAssistMap_2\0"
    "getFlightModeAssistMap_3\0"
    "getFlightModeAssistMap_4\0"
    "getFlightModeAssistMap_5\0getMeasureBasedDTerm\0"
    "getForceRollPitchDuringYawTransition\0"
    "vbarSensitivityRoll\0vbarSensitivityPitch\0"
    "vbarSensitivityYaw\0vbarRollPIKp\0"
    "vbarRollPIKi\0vbarPitchPIKp\0vbarPitchPIKi\0"
    "vbarYawPIKp\0vbarYawPIKi\0vbarTau\0gyroTau\0"
    "derivativeGamma\0axisLockKp\0weakLevelingKp\0"
    "cruiseControlMaxPowerFactor\0"
    "cruiseControlPowerTrim\0"
    "cruiseControlPowerDelayComp\0scaleToAirspeed\0"
    "scaleToAirspeedLimitsMin\0"
    "scaleToAirspeedLimitsMax\0flightModeMap0\0"
    "flightModeMap1\0flightModeMap2\0"
    "flightModeMap3\0flightModeMap4\0"
    "flightModeMap5\0vbarGyroSuppress\0"
    "vbarPiroComp\0vbarMaxAngle\0derivativeCutoff\0"
    "maxAxisLock\0maxAxisLockRate\0"
    "maxWeakLevelingRate\0rattitudeModeTransition\0"
    "cruiseControlMinThrust\0cruiseControlMaxThrust\0"
    "cruiseControlMaxAngle\0"
    "cruiseControlFlightModeSwitchPosEnable0\0"
    "cruiseControlFlightModeSwitchPosEnable1\0"
    "cruiseControlFlightModeSwitchPosEnable2\0"
    "cruiseControlFlightModeSwitchPosEnable3\0"
    "cruiseControlFlightModeSwitchPosEnable4\0"
    "cruiseControlFlightModeSwitchPosEnable5\0"
    "cruiseControlInvertedThrustReversing\0"
    "cruiseControlInvertedPowerOutput\0"
    "lowThrottleZeroIntegral\0flightModeAssistMap0\0"
    "flightModeAssistMap1\0flightModeAssistMap2\0"
    "flightModeAssistMap3\0flightModeAssistMap4\0"
    "flightModeAssistMap5\0measureBasedDTerm\0"
    "forceRollPitchDuringYawTransition\0"
    "VbarSensitivity_Roll\0VbarSensitivity_Pitch\0"
    "VbarSensitivity_Yaw\0VbarRollPI_Kp\0"
    "VbarRollPI_Ki\0VbarPitchPI_Kp\0"
    "VbarPitchPI_Ki\0VbarYawPI_Kp\0VbarYawPI_Ki\0"
    "VbarTau\0GyroTau\0DerivativeGamma\0"
    "AxisLockKp\0WeakLevelingKp\0"
    "CruiseControlMaxPowerFactor\0"
    "CruiseControlPowerTrim\0"
    "CruiseControlPowerDelayComp\0ScaleToAirspeed\0"
    "ScaleToAirspeedLimits_Min\0"
    "ScaleToAirspeedLimits_Max\0FlightModeMap_0\0"
    "FlightModeMap_1\0FlightModeMap_2\0"
    "FlightModeMap_3\0FlightModeMap_4\0"
    "FlightModeMap_5\0VbarGyroSuppress\0"
    "VbarPiroComp\0VbarMaxAngle\0DerivativeCutoff\0"
    "MaxAxisLock\0MaxAxisLockRate\0"
    "MaxWeakLevelingRate\0RattitudeModeTransition\0"
    "CruiseControlMinThrust\0CruiseControlMaxThrust\0"
    "CruiseControlMaxAngle\0"
    "CruiseControlFlightModeSwitchPosEnable_0\0"
    "CruiseControlFlightModeSwitchPosEnable_1\0"
    "CruiseControlFlightModeSwitchPosEnable_2\0"
    "CruiseControlFlightModeSwitchPosEnable_3\0"
    "CruiseControlFlightModeSwitchPosEnable_4\0"
    "CruiseControlFlightModeSwitchPosEnable_5\0"
    "CruiseControlInvertedThrustReversing\0"
    "CruiseControlInvertedPowerOutput\0"
    "LowThrottleZeroIntegral\0FlightModeAssistMap_0\0"
    "FlightModeAssistMap_1\0FlightModeAssistMap_2\0"
    "FlightModeAssistMap_3\0FlightModeAssistMap_4\0"
    "FlightModeAssistMap_5\0MeasureBasedDTerm\0"
    "ForceRollPitchDuringYawTransition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StabilizationSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     305,   14, // methods
     108, 2398, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     124,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2, 1539,    2, 0x06 /* Public */,
       5,    2, 1544,    2, 0x06 /* Public */,
       6,    1, 1549,    2, 0x06 /* Public */,
       7,    1, 1552,    2, 0x06 /* Public */,
       8,    1, 1555,    2, 0x06 /* Public */,
       9,    1, 1558,    2, 0x06 /* Public */,
      10,    1, 1561,    2, 0x06 /* Public */,
      11,    1, 1564,    2, 0x06 /* Public */,
      12,    2, 1567,    2, 0x06 /* Public */,
      13,    2, 1572,    2, 0x06 /* Public */,
      14,    1, 1577,    2, 0x06 /* Public */,
      15,    1, 1580,    2, 0x06 /* Public */,
      16,    1, 1583,    2, 0x06 /* Public */,
      17,    1, 1586,    2, 0x06 /* Public */,
      18,    2, 1589,    2, 0x06 /* Public */,
      19,    2, 1594,    2, 0x06 /* Public */,
      20,    1, 1599,    2, 0x06 /* Public */,
      21,    1, 1602,    2, 0x06 /* Public */,
      22,    1, 1605,    2, 0x06 /* Public */,
      23,    1, 1608,    2, 0x06 /* Public */,
      24,    2, 1611,    2, 0x06 /* Public */,
      25,    2, 1616,    2, 0x06 /* Public */,
      26,    1, 1621,    2, 0x06 /* Public */,
      27,    1, 1624,    2, 0x06 /* Public */,
      28,    1, 1627,    2, 0x06 /* Public */,
      29,    1, 1630,    2, 0x06 /* Public */,
      30,    1, 1633,    2, 0x06 /* Public */,
      31,    1, 1636,    2, 0x06 /* Public */,
      32,    1, 1639,    2, 0x06 /* Public */,
      33,    1, 1642,    2, 0x06 /* Public */,
      34,    1, 1645,    2, 0x06 /* Public */,
      35,    1, 1648,    2, 0x06 /* Public */,
      36,    1, 1651,    2, 0x06 /* Public */,
      37,    1, 1654,    2, 0x06 /* Public */,
      38,    1, 1657,    2, 0x06 /* Public */,
      39,    1, 1660,    2, 0x06 /* Public */,
      40,    1, 1663,    2, 0x06 /* Public */,
      41,    1, 1666,    2, 0x06 /* Public */,
      42,    1, 1669,    2, 0x06 /* Public */,
      43,    1, 1672,    2, 0x06 /* Public */,
      44,    1, 1675,    2, 0x06 /* Public */,
      45,    1, 1678,    2, 0x06 /* Public */,
      46,    1, 1681,    2, 0x06 /* Public */,
      47,    1, 1684,    2, 0x06 /* Public */,
      48,    2, 1687,    2, 0x06 /* Public */,
      49,    2, 1692,    2, 0x06 /* Public */,
      50,    1, 1697,    2, 0x06 /* Public */,
      51,    1, 1700,    2, 0x06 /* Public */,
      52,    1, 1703,    2, 0x06 /* Public */,
      53,    1, 1706,    2, 0x06 /* Public */,
      54,    2, 1709,    2, 0x06 /* Public */,
      56,    2, 1714,    2, 0x06 /* Public */,
      57,    1, 1719,    2, 0x06 /* Public */,
      58,    1, 1722,    2, 0x06 /* Public */,
      59,    1, 1725,    2, 0x06 /* Public */,
      60,    1, 1728,    2, 0x06 /* Public */,
      61,    1, 1731,    2, 0x06 /* Public */,
      62,    1, 1734,    2, 0x06 /* Public */,
      63,    1, 1737,    2, 0x06 /* Public */,
      64,    1, 1740,    2, 0x06 /* Public */,
      65,    1, 1743,    2, 0x06 /* Public */,
      66,    1, 1746,    2, 0x06 /* Public */,
      67,    1, 1749,    2, 0x06 /* Public */,
      68,    1, 1752,    2, 0x06 /* Public */,
      69,    1, 1755,    2, 0x06 /* Public */,
      70,    1, 1758,    2, 0x06 /* Public */,
      71,    1, 1761,    2, 0x06 /* Public */,
      73,    1, 1764,    2, 0x06 /* Public */,
      74,    1, 1767,    2, 0x06 /* Public */,
      75,    1, 1770,    2, 0x06 /* Public */,
      76,    1, 1773,    2, 0x06 /* Public */,
      77,    1, 1776,    2, 0x06 /* Public */,
      78,    1, 1779,    2, 0x06 /* Public */,
      79,    1, 1782,    2, 0x06 /* Public */,
      80,    1, 1785,    2, 0x06 /* Public */,
      81,    1, 1788,    2, 0x06 /* Public */,
      82,    1, 1791,    2, 0x06 /* Public */,
      83,    1, 1794,    2, 0x06 /* Public */,
      84,    1, 1797,    2, 0x06 /* Public */,
      85,    1, 1800,    2, 0x06 /* Public */,
      86,    1, 1803,    2, 0x06 /* Public */,
      87,    1, 1806,    2, 0x06 /* Public */,
      88,    1, 1809,    2, 0x06 /* Public */,
      89,    1, 1812,    2, 0x06 /* Public */,
      90,    1, 1815,    2, 0x06 /* Public */,
      91,    1, 1818,    2, 0x06 /* Public */,
      92,    2, 1821,    2, 0x06 /* Public */,
      94,    2, 1826,    2, 0x06 /* Public */,
      95,    1, 1831,    2, 0x06 /* Public */,
      96,    1, 1834,    2, 0x06 /* Public */,
      97,    1, 1837,    2, 0x06 /* Public */,
      98,    1, 1840,    2, 0x06 /* Public */,
      99,    1, 1843,    2, 0x06 /* Public */,
     100,    1, 1846,    2, 0x06 /* Public */,
     101,    1, 1849,    2, 0x06 /* Public */,
     102,    1, 1852,    2, 0x06 /* Public */,
     103,    1, 1855,    2, 0x06 /* Public */,
     104,    1, 1858,    2, 0x06 /* Public */,
     105,    1, 1861,    2, 0x06 /* Public */,
     106,    1, 1864,    2, 0x06 /* Public */,
     107,    1, 1867,    2, 0x06 /* Public */,
     109,    1, 1870,    2, 0x06 /* Public */,
     110,    1, 1873,    2, 0x06 /* Public */,
     112,    1, 1876,    2, 0x06 /* Public */,
     113,    1, 1879,    2, 0x06 /* Public */,
     115,    1, 1882,    2, 0x06 /* Public */,
     116,    2, 1885,    2, 0x06 /* Public */,
     118,    2, 1890,    2, 0x06 /* Public */,
     119,    1, 1895,    2, 0x06 /* Public */,
     120,    1, 1898,    2, 0x06 /* Public */,
     121,    1, 1901,    2, 0x06 /* Public */,
     122,    1, 1904,    2, 0x06 /* Public */,
     123,    1, 1907,    2, 0x06 /* Public */,
     124,    1, 1910,    2, 0x06 /* Public */,
     125,    1, 1913,    2, 0x06 /* Public */,
     126,    1, 1916,    2, 0x06 /* Public */,
     127,    1, 1919,    2, 0x06 /* Public */,
     128,    1, 1922,    2, 0x06 /* Public */,
     129,    1, 1925,    2, 0x06 /* Public */,
     130,    1, 1928,    2, 0x06 /* Public */,
     131,    1, 1931,    2, 0x06 /* Public */,
     133,    1, 1934,    2, 0x06 /* Public */,
     134,    1, 1937,    2, 0x06 /* Public */,
     136,    1, 1940,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     137,    2, 1943,    2, 0x0a /* Public */,
     138,    1, 1948,    2, 0x0a /* Public */,
     139,    1, 1951,    2, 0x0a /* Public */,
     140,    1, 1954,    2, 0x0a /* Public */,
     141,    1, 1957,    2, 0x0a /* Public */,
     142,    1, 1960,    2, 0x0a /* Public */,
     143,    1, 1963,    2, 0x0a /* Public */,
     144,    2, 1966,    2, 0x0a /* Public */,
     145,    1, 1971,    2, 0x0a /* Public */,
     146,    1, 1974,    2, 0x0a /* Public */,
     147,    1, 1977,    2, 0x0a /* Public */,
     148,    1, 1980,    2, 0x0a /* Public */,
     149,    2, 1983,    2, 0x0a /* Public */,
     150,    1, 1988,    2, 0x0a /* Public */,
     151,    1, 1991,    2, 0x0a /* Public */,
     152,    1, 1994,    2, 0x0a /* Public */,
     153,    1, 1997,    2, 0x0a /* Public */,
     154,    2, 2000,    2, 0x0a /* Public */,
     155,    1, 2005,    2, 0x0a /* Public */,
     156,    1, 2008,    2, 0x0a /* Public */,
     157,    1, 2011,    2, 0x0a /* Public */,
     158,    1, 2014,    2, 0x0a /* Public */,
     159,    1, 2017,    2, 0x0a /* Public */,
     160,    1, 2020,    2, 0x0a /* Public */,
     161,    1, 2023,    2, 0x0a /* Public */,
     162,    1, 2026,    2, 0x0a /* Public */,
     163,    1, 2029,    2, 0x0a /* Public */,
     164,    1, 2032,    2, 0x0a /* Public */,
     165,    1, 2035,    2, 0x0a /* Public */,
     166,    1, 2038,    2, 0x0a /* Public */,
     167,    1, 2041,    2, 0x0a /* Public */,
     168,    2, 2044,    2, 0x0a /* Public */,
     169,    1, 2049,    2, 0x0a /* Public */,
     170,    1, 2052,    2, 0x0a /* Public */,
     171,    1, 2055,    2, 0x0a /* Public */,
     172,    1, 2058,    2, 0x0a /* Public */,
     173,    2, 2061,    2, 0x0a /* Public */,
     173,    2, 2066,    2, 0x0a /* Public */,
     174,    1, 2071,    2, 0x0a /* Public */,
     175,    1, 2074,    2, 0x0a /* Public */,
     176,    1, 2077,    2, 0x0a /* Public */,
     177,    1, 2080,    2, 0x0a /* Public */,
     178,    1, 2083,    2, 0x0a /* Public */,
     179,    1, 2086,    2, 0x0a /* Public */,
     180,    1, 2089,    2, 0x0a /* Public */,
     181,    1, 2092,    2, 0x0a /* Public */,
     182,    1, 2095,    2, 0x0a /* Public */,
     183,    1, 2098,    2, 0x0a /* Public */,
     184,    1, 2101,    2, 0x0a /* Public */,
     185,    1, 2104,    2, 0x0a /* Public */,
     186,    1, 2107,    2, 0x0a /* Public */,
     186,    1, 2110,    2, 0x0a /* Public */,
     187,    1, 2113,    2, 0x0a /* Public */,
     187,    1, 2116,    2, 0x0a /* Public */,
     188,    1, 2119,    2, 0x0a /* Public */,
     188,    1, 2122,    2, 0x0a /* Public */,
     189,    1, 2125,    2, 0x0a /* Public */,
     189,    1, 2128,    2, 0x0a /* Public */,
     190,    1, 2131,    2, 0x0a /* Public */,
     190,    1, 2134,    2, 0x0a /* Public */,
     191,    1, 2137,    2, 0x0a /* Public */,
     191,    1, 2140,    2, 0x0a /* Public */,
     192,    1, 2143,    2, 0x0a /* Public */,
     192,    1, 2146,    2, 0x0a /* Public */,
     193,    1, 2149,    2, 0x0a /* Public */,
     193,    1, 2152,    2, 0x0a /* Public */,
     194,    1, 2155,    2, 0x0a /* Public */,
     194,    1, 2158,    2, 0x0a /* Public */,
     195,    1, 2161,    2, 0x0a /* Public */,
     195,    1, 2164,    2, 0x0a /* Public */,
     196,    1, 2167,    2, 0x0a /* Public */,
     196,    1, 2170,    2, 0x0a /* Public */,
     197,    2, 2173,    2, 0x0a /* Public */,
     197,    2, 2178,    2, 0x0a /* Public */,
     198,    1, 2183,    2, 0x0a /* Public */,
     199,    1, 2186,    2, 0x0a /* Public */,
     200,    1, 2189,    2, 0x0a /* Public */,
     201,    1, 2192,    2, 0x0a /* Public */,
     202,    1, 2195,    2, 0x0a /* Public */,
     203,    1, 2198,    2, 0x0a /* Public */,
     204,    1, 2201,    2, 0x0a /* Public */,
     205,    1, 2204,    2, 0x0a /* Public */,
     206,    1, 2207,    2, 0x0a /* Public */,
     207,    1, 2210,    2, 0x0a /* Public */,
     208,    1, 2213,    2, 0x0a /* Public */,
     209,    1, 2216,    2, 0x0a /* Public */,
     210,    1, 2219,    2, 0x0a /* Public */,
     210,    1, 2222,    2, 0x0a /* Public */,
     211,    1, 2225,    2, 0x0a /* Public */,
     211,    1, 2228,    2, 0x0a /* Public */,
     212,    1, 2231,    2, 0x0a /* Public */,
     212,    1, 2234,    2, 0x0a /* Public */,
     213,    2, 2237,    2, 0x0a /* Public */,
     213,    2, 2242,    2, 0x0a /* Public */,
     214,    1, 2247,    2, 0x0a /* Public */,
     215,    1, 2250,    2, 0x0a /* Public */,
     216,    1, 2253,    2, 0x0a /* Public */,
     217,    1, 2256,    2, 0x0a /* Public */,
     218,    1, 2259,    2, 0x0a /* Public */,
     219,    1, 2262,    2, 0x0a /* Public */,
     220,    1, 2265,    2, 0x0a /* Public */,
     221,    1, 2268,    2, 0x0a /* Public */,
     222,    1, 2271,    2, 0x0a /* Public */,
     223,    1, 2274,    2, 0x0a /* Public */,
     224,    1, 2277,    2, 0x0a /* Public */,
     225,    1, 2280,    2, 0x0a /* Public */,
     226,    1, 2283,    2, 0x0a /* Public */,
     226,    1, 2286,    2, 0x0a /* Public */,
     227,    1, 2289,    2, 0x0a /* Public */,
     227,    1, 2292,    2, 0x0a /* Public */,
     228,    0, 2295,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     229,    1, 2296,    2, 0x02 /* Public */,
     230,    1, 2299,    2, 0x02 /* Public */,
     231,    0, 2302,    2, 0x02 /* Public */,
     232,    0, 2303,    2, 0x02 /* Public */,
     233,    0, 2304,    2, 0x02 /* Public */,
     234,    1, 2305,    2, 0x02 /* Public */,
     235,    1, 2308,    2, 0x02 /* Public */,
     236,    0, 2311,    2, 0x02 /* Public */,
     237,    0, 2312,    2, 0x02 /* Public */,
     238,    1, 2313,    2, 0x02 /* Public */,
     239,    1, 2316,    2, 0x02 /* Public */,
     240,    0, 2319,    2, 0x02 /* Public */,
     241,    0, 2320,    2, 0x02 /* Public */,
     242,    1, 2321,    2, 0x02 /* Public */,
     243,    1, 2324,    2, 0x02 /* Public */,
     244,    0, 2327,    2, 0x02 /* Public */,
     245,    0, 2328,    2, 0x02 /* Public */,
     246,    0, 2329,    2, 0x02 /* Public */,
     247,    0, 2330,    2, 0x02 /* Public */,
     248,    0, 2331,    2, 0x02 /* Public */,
     249,    0, 2332,    2, 0x02 /* Public */,
     250,    0, 2333,    2, 0x02 /* Public */,
     251,    0, 2334,    2, 0x02 /* Public */,
     252,    0, 2335,    2, 0x02 /* Public */,
     253,    0, 2336,    2, 0x02 /* Public */,
     254,    0, 2337,    2, 0x02 /* Public */,
     255,    1, 2338,    2, 0x02 /* Public */,
     256,    1, 2341,    2, 0x02 /* Public */,
     257,    0, 2344,    2, 0x02 /* Public */,
     258,    0, 2345,    2, 0x02 /* Public */,
     259,    1, 2346,    2, 0x02 /* Public */,
     260,    1, 2349,    2, 0x02 /* Public */,
     261,    0, 2352,    2, 0x02 /* Public */,
     262,    0, 2353,    2, 0x02 /* Public */,
     263,    0, 2354,    2, 0x02 /* Public */,
     264,    0, 2355,    2, 0x02 /* Public */,
     265,    0, 2356,    2, 0x02 /* Public */,
     266,    0, 2357,    2, 0x02 /* Public */,
     267,    0, 2358,    2, 0x02 /* Public */,
     268,    0, 2359,    2, 0x02 /* Public */,
     269,    0, 2360,    2, 0x02 /* Public */,
     270,    0, 2361,    2, 0x02 /* Public */,
     271,    0, 2362,    2, 0x02 /* Public */,
     272,    0, 2363,    2, 0x02 /* Public */,
     273,    0, 2364,    2, 0x02 /* Public */,
     274,    0, 2365,    2, 0x02 /* Public */,
     275,    0, 2366,    2, 0x02 /* Public */,
     276,    0, 2367,    2, 0x02 /* Public */,
     277,    0, 2368,    2, 0x02 /* Public */,
     278,    1, 2369,    2, 0x02 /* Public */,
     279,    1, 2372,    2, 0x02 /* Public */,
     280,    0, 2375,    2, 0x02 /* Public */,
     281,    0, 2376,    2, 0x02 /* Public */,
     282,    0, 2377,    2, 0x02 /* Public */,
     283,    0, 2378,    2, 0x02 /* Public */,
     284,    0, 2379,    2, 0x02 /* Public */,
     285,    0, 2380,    2, 0x02 /* Public */,
     286,    0, 2381,    2, 0x02 /* Public */,
     287,    0, 2382,    2, 0x02 /* Public */,
     288,    0, 2383,    2, 0x02 /* Public */,
     289,    1, 2384,    2, 0x02 /* Public */,
     290,    1, 2387,    2, 0x02 /* Public */,
     291,    0, 2390,    2, 0x02 /* Public */,
     292,    0, 2391,    2, 0x02 /* Public */,
     293,    0, 2392,    2, 0x02 /* Public */,
     294,    0, 2393,    2, 0x02 /* Public */,
     295,    0, 2394,    2, 0x02 /* Public */,
     296,    0, 2395,    2, 0x02 /* Public */,
     297,    0, 2396,    2, 0x02 /* Public */,
     298,    0, 2397,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 55,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 55,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 55,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 55,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 55,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 55,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 55,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 72,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 93,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 93,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 93,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 93,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 93,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 93,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 93,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 108,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 111,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 117,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 132,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 135,    4,
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
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 55,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 55,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 55,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 55,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 55,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 55,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 55,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, 0x80000000 | 72,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::SChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 93,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 93,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 93,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 93,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 93,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 93,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 93,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 108,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 111,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 117,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 117,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 132,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 135,    4,
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
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
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
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    0x80000000 | 55, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::UChar,
    0x80000000 | 93, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    0x80000000 | 117, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
     299, QMetaType::Float, 0x00495103,
     300, QMetaType::Float, 0x00495103,
     301, QMetaType::Float, 0x00495103,
     302, QMetaType::Float, 0x00495103,
     303, QMetaType::Float, 0x00495103,
     304, QMetaType::Float, 0x00495103,
     305, QMetaType::Float, 0x00495103,
     306, QMetaType::Float, 0x00495103,
     307, QMetaType::Float, 0x00495103,
     308, QMetaType::Float, 0x00495103,
     309, QMetaType::Float, 0x00495103,
     310, QMetaType::Float, 0x00495103,
     311, QMetaType::Float, 0x00495103,
     312, QMetaType::Float, 0x00495103,
     313, QMetaType::Float, 0x00495103,
     314, QMetaType::Float, 0x00495103,
     315, QMetaType::Float, 0x00495103,
     316, QMetaType::Float, 0x00495103,
     317, QMetaType::Float, 0x00495103,
     318, QMetaType::Float, 0x00495103,
     319, 0x80000000 | 55, 0x0049510b,
     320, 0x80000000 | 55, 0x0049510b,
     321, 0x80000000 | 55, 0x0049510b,
     322, 0x80000000 | 55, 0x0049510b,
     323, 0x80000000 | 55, 0x0049510b,
     324, 0x80000000 | 55, 0x0049510b,
     325, QMetaType::Short, 0x00495103,
     326, 0x80000000 | 72, 0x0049510b,
     327, QMetaType::UShort, 0x00495103,
     328, QMetaType::UShort, 0x00495103,
     329, QMetaType::UShort, 0x00495103,
     330, QMetaType::UShort, 0x00495103,
     331, QMetaType::UShort, 0x00495103,
     332, QMetaType::UShort, 0x00495103,
     333, QMetaType::Short, 0x00495103,
     334, QMetaType::UShort, 0x00495103,
     335, QMetaType::UShort, 0x00495103,
     336, 0x80000000 | 93, 0x0049510b,
     337, 0x80000000 | 93, 0x0049510b,
     338, 0x80000000 | 93, 0x0049510b,
     339, 0x80000000 | 93, 0x0049510b,
     340, 0x80000000 | 93, 0x0049510b,
     341, 0x80000000 | 93, 0x0049510b,
     342, 0x80000000 | 108, 0x0049510b,
     343, 0x80000000 | 111, 0x0049510b,
     344, 0x80000000 | 114, 0x0049510b,
     345, 0x80000000 | 117, 0x0049510b,
     346, 0x80000000 | 117, 0x0049510b,
     347, 0x80000000 | 117, 0x0049510b,
     348, 0x80000000 | 117, 0x0049510b,
     349, 0x80000000 | 117, 0x0049510b,
     350, 0x80000000 | 117, 0x0049510b,
     351, 0x80000000 | 132, 0x0049510b,
     352, 0x80000000 | 135, 0x0049510b,
     353, QMetaType::Float, 0x00495103,
     354, QMetaType::Float, 0x00495103,
     355, QMetaType::Float, 0x00495103,
     356, QMetaType::Float, 0x00495103,
     357, QMetaType::Float, 0x00495103,
     358, QMetaType::Float, 0x00495103,
     359, QMetaType::Float, 0x00495103,
     360, QMetaType::Float, 0x00495103,
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
     373, QMetaType::UChar, 0x00495103,
     374, QMetaType::UChar, 0x00495103,
     375, QMetaType::UChar, 0x00495103,
     376, QMetaType::UChar, 0x00495103,
     377, QMetaType::UChar, 0x00495103,
     378, QMetaType::UChar, 0x00495103,
     379, QMetaType::SChar, 0x00495103,
     380, QMetaType::UChar, 0x00495103,
     381, QMetaType::UChar, 0x00495103,
     382, QMetaType::UChar, 0x00495103,
     383, QMetaType::UChar, 0x00495103,
     384, QMetaType::UChar, 0x00495103,
     385, QMetaType::UChar, 0x00495103,
     386, QMetaType::UChar, 0x00495103,
     387, QMetaType::SChar, 0x00495103,
     388, QMetaType::UChar, 0x00495103,
     389, QMetaType::UChar, 0x00495103,
     390, QMetaType::UChar, 0x00495103,
     391, QMetaType::UChar, 0x00495103,
     392, QMetaType::UChar, 0x00495103,
     393, QMetaType::UChar, 0x00495103,
     394, QMetaType::UChar, 0x00495103,
     395, QMetaType::UChar, 0x00495103,
     396, QMetaType::UChar, 0x00495103,
     397, QMetaType::UChar, 0x00495103,
     398, QMetaType::UChar, 0x00495103,
     399, QMetaType::UChar, 0x00495103,
     400, QMetaType::UChar, 0x00495103,
     401, QMetaType::UChar, 0x00495103,
     402, QMetaType::UChar, 0x00495103,
     403, QMetaType::UChar, 0x00495103,
     404, QMetaType::UChar, 0x00495103,
     405, QMetaType::UChar, 0x00495103,
     406, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
      10,
      12,
      16,
      18,
      22,
      24,
      26,
      28,
      30,
      32,
      34,
      36,
      38,
      40,
      42,
      46,
      48,
      52,
      54,
      56,
      58,
      60,
      62,
      64,
      66,
      68,
      70,
      72,
      74,
      76,
      78,
      80,
      82,
      84,
      88,
      90,
      92,
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
      17,
      19,
      23,
      25,
      27,
      29,
      31,
      33,
      35,
      37,
      39,
      41,
      43,
      47,
      49,
      53,
      55,
      57,
      59,
      61,
      63,
      65,
      67,
      69,
      71,
      73,
      75,
      77,
      79,
      81,
      83,
      85,
      89,
      91,
      93,
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

void StabilizationSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StabilizationSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vbarSensitivityChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->VbarSensitivityChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->vbarSensitivityRollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->VbarSensitivity_RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->vbarSensitivityPitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->VbarSensitivity_PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->vbarSensitivityYawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->VbarSensitivity_YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->vbarRollPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 9: _t->VbarRollPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->vbarRollPIKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->VbarRollPI_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->vbarRollPIKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->VbarRollPI_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->vbarPitchPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 15: _t->VbarPitchPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 16: _t->vbarPitchPIKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->VbarPitchPI_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->vbarPitchPIKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->VbarPitchPI_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->vbarYawPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 21: _t->VbarYawPIChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 22: _t->vbarYawPIKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->VbarYawPI_KpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->vbarYawPIKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->VbarYawPI_KiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->vbarTauChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->VbarTauChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->gyroTauChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 29: _t->GyroTauChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->derivativeGammaChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 31: _t->DerivativeGammaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 32: _t->axisLockKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 33: _t->AxisLockKpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 34: _t->weakLevelingKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->WeakLevelingKpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 36: _t->cruiseControlMaxPowerFactorChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 37: _t->CruiseControlMaxPowerFactorChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->cruiseControlPowerTrimChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 39: _t->CruiseControlPowerTrimChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->cruiseControlPowerDelayCompChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 41: _t->CruiseControlPowerDelayCompChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->scaleToAirspeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 43: _t->ScaleToAirspeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->scaleToAirspeedLimitsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 45: _t->ScaleToAirspeedLimitsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 46: _t->scaleToAirspeedLimitsMinChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->ScaleToAirspeedLimits_MinChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->scaleToAirspeedLimitsMaxChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 49: _t->ScaleToAirspeedLimits_MaxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 50: _t->flightModeMapChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[2]))); break;
        case 51: _t->FlightModeMapChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 52: _t->flightModeMap0Changed((*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[1]))); break;
        case 53: _t->FlightModeMap_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 54: _t->flightModeMap1Changed((*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[1]))); break;
        case 55: _t->FlightModeMap_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 56: _t->flightModeMap2Changed((*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[1]))); break;
        case 57: _t->FlightModeMap_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 58: _t->flightModeMap3Changed((*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[1]))); break;
        case 59: _t->FlightModeMap_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 60: _t->flightModeMap4Changed((*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[1]))); break;
        case 61: _t->FlightModeMap_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 62: _t->flightModeMap5Changed((*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[1]))); break;
        case 63: _t->FlightModeMap_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 64: _t->vbarGyroSuppressChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 65: _t->VbarGyroSuppressChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 66: _t->vbarPiroCompChanged((*reinterpret_cast< const StabilizationSettings_VbarPiroComp::Enum(*)>(_a[1]))); break;
        case 67: _t->VbarPiroCompChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 68: _t->vbarMaxAngleChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 69: _t->VbarMaxAngleChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 70: _t->derivativeCutoffChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 71: _t->DerivativeCutoffChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 72: _t->maxAxisLockChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 73: _t->MaxAxisLockChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 74: _t->maxAxisLockRateChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 75: _t->MaxAxisLockRateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 76: _t->maxWeakLevelingRateChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 77: _t->MaxWeakLevelingRateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 78: _t->rattitudeModeTransitionChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 79: _t->RattitudeModeTransitionChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 80: _t->cruiseControlMinThrustChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 81: _t->CruiseControlMinThrustChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 82: _t->cruiseControlMaxThrustChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 83: _t->CruiseControlMaxThrustChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 84: _t->cruiseControlMaxAngleChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 85: _t->CruiseControlMaxAngleChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 86: _t->cruiseControlFlightModeSwitchPosEnableChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[2]))); break;
        case 87: _t->CruiseControlFlightModeSwitchPosEnableChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 88: _t->cruiseControlFlightModeSwitchPosEnable0Changed((*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[1]))); break;
        case 89: _t->CruiseControlFlightModeSwitchPosEnable_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 90: _t->cruiseControlFlightModeSwitchPosEnable1Changed((*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[1]))); break;
        case 91: _t->CruiseControlFlightModeSwitchPosEnable_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 92: _t->cruiseControlFlightModeSwitchPosEnable2Changed((*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[1]))); break;
        case 93: _t->CruiseControlFlightModeSwitchPosEnable_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 94: _t->cruiseControlFlightModeSwitchPosEnable3Changed((*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[1]))); break;
        case 95: _t->CruiseControlFlightModeSwitchPosEnable_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 96: _t->cruiseControlFlightModeSwitchPosEnable4Changed((*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[1]))); break;
        case 97: _t->CruiseControlFlightModeSwitchPosEnable_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 98: _t->cruiseControlFlightModeSwitchPosEnable5Changed((*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[1]))); break;
        case 99: _t->CruiseControlFlightModeSwitchPosEnable_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 100: _t->cruiseControlInvertedThrustReversingChanged((*reinterpret_cast< const StabilizationSettings_CruiseControlInvertedThrustReversing::Enum(*)>(_a[1]))); break;
        case 101: _t->CruiseControlInvertedThrustReversingChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 102: _t->cruiseControlInvertedPowerOutputChanged((*reinterpret_cast< const StabilizationSettings_CruiseControlInvertedPowerOutput::Enum(*)>(_a[1]))); break;
        case 103: _t->CruiseControlInvertedPowerOutputChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->lowThrottleZeroIntegralChanged((*reinterpret_cast< const StabilizationSettings_LowThrottleZeroIntegral::Enum(*)>(_a[1]))); break;
        case 105: _t->LowThrottleZeroIntegralChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 106: _t->flightModeAssistMapChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[2]))); break;
        case 107: _t->FlightModeAssistMapChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 108: _t->flightModeAssistMap0Changed((*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[1]))); break;
        case 109: _t->FlightModeAssistMap_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 110: _t->flightModeAssistMap1Changed((*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[1]))); break;
        case 111: _t->FlightModeAssistMap_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 112: _t->flightModeAssistMap2Changed((*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[1]))); break;
        case 113: _t->FlightModeAssistMap_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 114: _t->flightModeAssistMap3Changed((*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[1]))); break;
        case 115: _t->FlightModeAssistMap_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 116: _t->flightModeAssistMap4Changed((*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[1]))); break;
        case 117: _t->FlightModeAssistMap_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 118: _t->flightModeAssistMap5Changed((*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[1]))); break;
        case 119: _t->FlightModeAssistMap_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 120: _t->measureBasedDTermChanged((*reinterpret_cast< const StabilizationSettings_MeasureBasedDTerm::Enum(*)>(_a[1]))); break;
        case 121: _t->MeasureBasedDTermChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 122: _t->forceRollPitchDuringYawTransitionChanged((*reinterpret_cast< const StabilizationSettings_ForceRollPitchDuringYawTransition::Enum(*)>(_a[1]))); break;
        case 123: _t->ForceRollPitchDuringYawTransitionChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 124: _t->setVbarSensitivity((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 125: _t->setVbarSensitivityRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 126: _t->setVbarSensitivity_Roll((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 127: _t->setVbarSensitivityPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 128: _t->setVbarSensitivity_Pitch((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 129: _t->setVbarSensitivityYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 130: _t->setVbarSensitivity_Yaw((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 131: _t->setVbarRollPI((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 132: _t->setVbarRollPIKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 133: _t->setVbarRollPI_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 134: _t->setVbarRollPIKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 135: _t->setVbarRollPI_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 136: _t->setVbarPitchPI((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 137: _t->setVbarPitchPIKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 138: _t->setVbarPitchPI_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 139: _t->setVbarPitchPIKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 140: _t->setVbarPitchPI_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 141: _t->setVbarYawPI((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 142: _t->setVbarYawPIKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 143: _t->setVbarYawPI_Kp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 144: _t->setVbarYawPIKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 145: _t->setVbarYawPI_Ki((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 146: _t->setVbarTau((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 147: _t->setGyroTau((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 148: _t->setDerivativeGamma((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 149: _t->setAxisLockKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 150: _t->setWeakLevelingKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 151: _t->setCruiseControlMaxPowerFactor((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 152: _t->setCruiseControlPowerTrim((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 153: _t->setCruiseControlPowerDelayComp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 154: _t->setScaleToAirspeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 155: _t->setScaleToAirspeedLimits((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 156: _t->setScaleToAirspeedLimitsMin((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 157: _t->setScaleToAirspeedLimits_Min((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 158: _t->setScaleToAirspeedLimitsMax((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 159: _t->setScaleToAirspeedLimits_Max((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 160: _t->setFlightModeMap((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[2]))); break;
        case 161: _t->setFlightModeMap((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 162: _t->setFlightModeMap0((*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[1]))); break;
        case 163: _t->setFlightModeMap_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 164: _t->setFlightModeMap1((*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[1]))); break;
        case 165: _t->setFlightModeMap_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 166: _t->setFlightModeMap2((*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[1]))); break;
        case 167: _t->setFlightModeMap_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 168: _t->setFlightModeMap3((*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[1]))); break;
        case 169: _t->setFlightModeMap_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 170: _t->setFlightModeMap4((*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[1]))); break;
        case 171: _t->setFlightModeMap_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 172: _t->setFlightModeMap5((*reinterpret_cast< const StabilizationSettings_FlightModeMap::Enum(*)>(_a[1]))); break;
        case 173: _t->setFlightModeMap_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 174: _t->setVbarGyroSuppress((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 175: _t->setVbarGyroSuppress((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 176: _t->setVbarPiroComp((*reinterpret_cast< const StabilizationSettings_VbarPiroComp::Enum(*)>(_a[1]))); break;
        case 177: _t->setVbarPiroComp((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 178: _t->setVbarMaxAngle((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 179: _t->setVbarMaxAngle((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 180: _t->setDerivativeCutoff((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 181: _t->setDerivativeCutoff((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 182: _t->setMaxAxisLock((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 183: _t->setMaxAxisLock((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 184: _t->setMaxAxisLockRate((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 185: _t->setMaxAxisLockRate((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 186: _t->setMaxWeakLevelingRate((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 187: _t->setMaxWeakLevelingRate((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 188: _t->setRattitudeModeTransition((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 189: _t->setRattitudeModeTransition((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 190: _t->setCruiseControlMinThrust((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 191: _t->setCruiseControlMinThrust((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 192: _t->setCruiseControlMaxThrust((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 193: _t->setCruiseControlMaxThrust((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 194: _t->setCruiseControlMaxAngle((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 195: _t->setCruiseControlMaxAngle((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 196: _t->setCruiseControlFlightModeSwitchPosEnable((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[2]))); break;
        case 197: _t->setCruiseControlFlightModeSwitchPosEnable((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 198: _t->setCruiseControlFlightModeSwitchPosEnable0((*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[1]))); break;
        case 199: _t->setCruiseControlFlightModeSwitchPosEnable_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 200: _t->setCruiseControlFlightModeSwitchPosEnable1((*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[1]))); break;
        case 201: _t->setCruiseControlFlightModeSwitchPosEnable_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 202: _t->setCruiseControlFlightModeSwitchPosEnable2((*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[1]))); break;
        case 203: _t->setCruiseControlFlightModeSwitchPosEnable_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 204: _t->setCruiseControlFlightModeSwitchPosEnable3((*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[1]))); break;
        case 205: _t->setCruiseControlFlightModeSwitchPosEnable_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 206: _t->setCruiseControlFlightModeSwitchPosEnable4((*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[1]))); break;
        case 207: _t->setCruiseControlFlightModeSwitchPosEnable_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 208: _t->setCruiseControlFlightModeSwitchPosEnable5((*reinterpret_cast< const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum(*)>(_a[1]))); break;
        case 209: _t->setCruiseControlFlightModeSwitchPosEnable_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 210: _t->setCruiseControlInvertedThrustReversing((*reinterpret_cast< const StabilizationSettings_CruiseControlInvertedThrustReversing::Enum(*)>(_a[1]))); break;
        case 211: _t->setCruiseControlInvertedThrustReversing((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 212: _t->setCruiseControlInvertedPowerOutput((*reinterpret_cast< const StabilizationSettings_CruiseControlInvertedPowerOutput::Enum(*)>(_a[1]))); break;
        case 213: _t->setCruiseControlInvertedPowerOutput((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 214: _t->setLowThrottleZeroIntegral((*reinterpret_cast< const StabilizationSettings_LowThrottleZeroIntegral::Enum(*)>(_a[1]))); break;
        case 215: _t->setLowThrottleZeroIntegral((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 216: _t->setFlightModeAssistMap((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[2]))); break;
        case 217: _t->setFlightModeAssistMap((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 218: _t->setFlightModeAssistMap0((*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[1]))); break;
        case 219: _t->setFlightModeAssistMap_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 220: _t->setFlightModeAssistMap1((*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[1]))); break;
        case 221: _t->setFlightModeAssistMap_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 222: _t->setFlightModeAssistMap2((*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[1]))); break;
        case 223: _t->setFlightModeAssistMap_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 224: _t->setFlightModeAssistMap3((*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[1]))); break;
        case 225: _t->setFlightModeAssistMap_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 226: _t->setFlightModeAssistMap4((*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[1]))); break;
        case 227: _t->setFlightModeAssistMap_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 228: _t->setFlightModeAssistMap5((*reinterpret_cast< const StabilizationSettings_FlightModeAssistMap::Enum(*)>(_a[1]))); break;
        case 229: _t->setFlightModeAssistMap_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 230: _t->setMeasureBasedDTerm((*reinterpret_cast< const StabilizationSettings_MeasureBasedDTerm::Enum(*)>(_a[1]))); break;
        case 231: _t->setMeasureBasedDTerm((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 232: _t->setForceRollPitchDuringYawTransition((*reinterpret_cast< const StabilizationSettings_ForceRollPitchDuringYawTransition::Enum(*)>(_a[1]))); break;
        case 233: _t->setForceRollPitchDuringYawTransition((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 234: _t->emitNotifications(); break;
        case 235: { float _r = _t->vbarSensitivity((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 236: { float _r = _t->getVbarSensitivity((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 237: { float _r = _t->getVbarSensitivity_Roll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 238: { float _r = _t->getVbarSensitivity_Pitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 239: { float _r = _t->getVbarSensitivity_Yaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 240: { float _r = _t->vbarRollPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 241: { float _r = _t->getVbarRollPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 242: { float _r = _t->getVbarRollPI_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 243: { float _r = _t->getVbarRollPI_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 244: { float _r = _t->vbarPitchPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 245: { float _r = _t->getVbarPitchPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 246: { float _r = _t->getVbarPitchPI_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 247: { float _r = _t->getVbarPitchPI_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 248: { float _r = _t->vbarYawPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 249: { float _r = _t->getVbarYawPI((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 250: { float _r = _t->getVbarYawPI_Kp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 251: { float _r = _t->getVbarYawPI_Ki();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 252: { float _r = _t->getVbarTau();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 253: { float _r = _t->getGyroTau();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 254: { float _r = _t->getDerivativeGamma();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 255: { float _r = _t->getAxisLockKp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 256: { float _r = _t->getWeakLevelingKp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 257: { float _r = _t->getCruiseControlMaxPowerFactor();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 258: { float _r = _t->getCruiseControlPowerTrim();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 259: { float _r = _t->getCruiseControlPowerDelayComp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 260: { float _r = _t->getScaleToAirspeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 261: { float _r = _t->scaleToAirspeedLimits((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 262: { float _r = _t->getScaleToAirspeedLimits((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 263: { float _r = _t->getScaleToAirspeedLimits_Min();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 264: { float _r = _t->getScaleToAirspeedLimits_Max();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 265: { StabilizationSettings_FlightModeMap::Enum _r = _t->flightModeMap((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_a[0]) = std::move(_r); }  break;
        case 266: { quint8 _r = _t->getFlightModeMap((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 267: { quint8 _r = _t->getFlightModeMap_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 268: { quint8 _r = _t->getFlightModeMap_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 269: { quint8 _r = _t->getFlightModeMap_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 270: { quint8 _r = _t->getFlightModeMap_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 271: { quint8 _r = _t->getFlightModeMap_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 272: { quint8 _r = _t->getFlightModeMap_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 273: { qint8 _r = _t->getVbarGyroSuppress();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 274: { quint8 _r = _t->getVbarPiroComp();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 275: { quint8 _r = _t->getVbarMaxAngle();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 276: { quint8 _r = _t->getDerivativeCutoff();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 277: { quint8 _r = _t->getMaxAxisLock();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 278: { quint8 _r = _t->getMaxAxisLockRate();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 279: { quint8 _r = _t->getMaxWeakLevelingRate();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 280: { quint8 _r = _t->getRattitudeModeTransition();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 281: { qint8 _r = _t->getCruiseControlMinThrust();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 282: { quint8 _r = _t->getCruiseControlMaxThrust();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 283: { quint8 _r = _t->getCruiseControlMaxAngle();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 284: { StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum _r = _t->cruiseControlFlightModeSwitchPosEnable((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_a[0]) = std::move(_r); }  break;
        case 285: { quint8 _r = _t->getCruiseControlFlightModeSwitchPosEnable((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 286: { quint8 _r = _t->getCruiseControlFlightModeSwitchPosEnable_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 287: { quint8 _r = _t->getCruiseControlFlightModeSwitchPosEnable_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 288: { quint8 _r = _t->getCruiseControlFlightModeSwitchPosEnable_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 289: { quint8 _r = _t->getCruiseControlFlightModeSwitchPosEnable_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 290: { quint8 _r = _t->getCruiseControlFlightModeSwitchPosEnable_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 291: { quint8 _r = _t->getCruiseControlFlightModeSwitchPosEnable_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 292: { quint8 _r = _t->getCruiseControlInvertedThrustReversing();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 293: { quint8 _r = _t->getCruiseControlInvertedPowerOutput();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 294: { quint8 _r = _t->getLowThrottleZeroIntegral();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 295: { StabilizationSettings_FlightModeAssistMap::Enum _r = _t->flightModeAssistMap((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_a[0]) = std::move(_r); }  break;
        case 296: { quint8 _r = _t->getFlightModeAssistMap((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 297: { quint8 _r = _t->getFlightModeAssistMap_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 298: { quint8 _r = _t->getFlightModeAssistMap_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 299: { quint8 _r = _t->getFlightModeAssistMap_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 300: { quint8 _r = _t->getFlightModeAssistMap_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 301: { quint8 _r = _t->getFlightModeAssistMap_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 302: { quint8 _r = _t->getFlightModeAssistMap_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 303: { quint8 _r = _t->getMeasureBasedDTerm();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 304: { quint8 _r = _t->getForceRollPitchDuringYawTransition();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StabilizationSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarSensitivityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarSensitivityChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarSensitivityRollChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarSensitivity_RollChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarSensitivityPitchChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarSensitivity_PitchChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarSensitivityYawChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarSensitivity_YawChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarRollPIChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarRollPIChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarRollPIKpChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarRollPI_KpChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarRollPIKiChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarRollPI_KiChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarPitchPIChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarPitchPIChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarPitchPIKpChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarPitchPI_KpChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarPitchPIKiChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarPitchPI_KiChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarYawPIChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarYawPIChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarYawPIKpChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarYawPI_KpChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarYawPIKiChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarYawPI_KiChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarTauChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarTauChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::gyroTauChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::GyroTauChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::derivativeGammaChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::DerivativeGammaChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::axisLockKpChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::AxisLockKpChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::weakLevelingKpChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::WeakLevelingKpChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlMaxPowerFactorChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlMaxPowerFactorChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlPowerTrimChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlPowerTrimChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlPowerDelayCompChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlPowerDelayCompChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::scaleToAirspeedChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::ScaleToAirspeedChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::scaleToAirspeedLimitsChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::ScaleToAirspeedLimitsChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::scaleToAirspeedLimitsMinChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::ScaleToAirspeedLimits_MinChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::scaleToAirspeedLimitsMaxChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::ScaleToAirspeedLimits_MaxChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , const StabilizationSettings_FlightModeMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeMapChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeMapChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_FlightModeMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeMap0Changed)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeMap_0Changed)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_FlightModeMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeMap1Changed)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeMap_1Changed)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_FlightModeMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeMap2Changed)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeMap_2Changed)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_FlightModeMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeMap3Changed)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeMap_3Changed)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_FlightModeMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeMap4Changed)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeMap_4Changed)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_FlightModeMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeMap5Changed)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeMap_5Changed)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarGyroSuppressChanged)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarGyroSuppressChanged)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_VbarPiroComp::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarPiroCompChanged)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarPiroCompChanged)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::vbarMaxAngleChanged)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::VbarMaxAngleChanged)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::derivativeCutoffChanged)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::DerivativeCutoffChanged)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::maxAxisLockChanged)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::MaxAxisLockChanged)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::maxAxisLockRateChanged)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::MaxAxisLockRateChanged)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::maxWeakLevelingRateChanged)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::MaxWeakLevelingRateChanged)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::rattitudeModeTransitionChanged)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::RattitudeModeTransitionChanged)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlMinThrustChanged)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlMinThrustChanged)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlMaxThrustChanged)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlMaxThrustChanged)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlMaxAngleChanged)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlMaxAngleChanged)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlFlightModeSwitchPosEnableChanged)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlFlightModeSwitchPosEnableChanged)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlFlightModeSwitchPosEnable0Changed)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlFlightModeSwitchPosEnable_0Changed)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlFlightModeSwitchPosEnable1Changed)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlFlightModeSwitchPosEnable_1Changed)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlFlightModeSwitchPosEnable2Changed)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlFlightModeSwitchPosEnable_2Changed)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlFlightModeSwitchPosEnable3Changed)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlFlightModeSwitchPosEnable_3Changed)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlFlightModeSwitchPosEnable4Changed)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlFlightModeSwitchPosEnable_4Changed)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlFlightModeSwitchPosEnable5Changed)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlFlightModeSwitchPosEnable_5Changed)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_CruiseControlInvertedThrustReversing::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlInvertedThrustReversingChanged)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlInvertedThrustReversingChanged)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_CruiseControlInvertedPowerOutput::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::cruiseControlInvertedPowerOutputChanged)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::CruiseControlInvertedPowerOutputChanged)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_LowThrottleZeroIntegral::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::lowThrottleZeroIntegralChanged)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::LowThrottleZeroIntegralChanged)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , const StabilizationSettings_FlightModeAssistMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeAssistMapChanged)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeAssistMapChanged)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_FlightModeAssistMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeAssistMap0Changed)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeAssistMap_0Changed)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_FlightModeAssistMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeAssistMap1Changed)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeAssistMap_1Changed)) {
                *result = 111;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_FlightModeAssistMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeAssistMap2Changed)) {
                *result = 112;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeAssistMap_2Changed)) {
                *result = 113;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_FlightModeAssistMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeAssistMap3Changed)) {
                *result = 114;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeAssistMap_3Changed)) {
                *result = 115;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_FlightModeAssistMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeAssistMap4Changed)) {
                *result = 116;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeAssistMap_4Changed)) {
                *result = 117;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_FlightModeAssistMap::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::flightModeAssistMap5Changed)) {
                *result = 118;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::FlightModeAssistMap_5Changed)) {
                *result = 119;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_MeasureBasedDTerm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::measureBasedDTermChanged)) {
                *result = 120;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::MeasureBasedDTermChanged)) {
                *result = 121;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(const StabilizationSettings_ForceRollPitchDuringYawTransition::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::forceRollPitchDuringYawTransitionChanged)) {
                *result = 122;
                return;
            }
        }
        {
            using _t = void (StabilizationSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StabilizationSettings::ForceRollPitchDuringYawTransitionChanged)) {
                *result = 123;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StabilizationSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->vbarSensitivityRoll(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->vbarSensitivityPitch(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->vbarSensitivityYaw(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->vbarRollPIKp(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->vbarRollPIKi(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->vbarPitchPIKp(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->vbarPitchPIKi(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->vbarYawPIKp(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->vbarYawPIKi(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->vbarTau(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->gyroTau(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->derivativeGamma(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->axisLockKp(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->weakLevelingKp(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->cruiseControlMaxPowerFactor(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->cruiseControlPowerTrim(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->cruiseControlPowerDelayComp(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->scaleToAirspeed(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->scaleToAirspeedLimitsMin(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->scaleToAirspeedLimitsMax(); break;
        case 20: *reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_v) = _t->flightModeMap0(); break;
        case 21: *reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_v) = _t->flightModeMap1(); break;
        case 22: *reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_v) = _t->flightModeMap2(); break;
        case 23: *reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_v) = _t->flightModeMap3(); break;
        case 24: *reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_v) = _t->flightModeMap4(); break;
        case 25: *reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_v) = _t->flightModeMap5(); break;
        case 26: *reinterpret_cast< qint16*>(_v) = _t->vbarGyroSuppress(); break;
        case 27: *reinterpret_cast< StabilizationSettings_VbarPiroComp::Enum*>(_v) = _t->vbarPiroComp(); break;
        case 28: *reinterpret_cast< quint16*>(_v) = _t->vbarMaxAngle(); break;
        case 29: *reinterpret_cast< quint16*>(_v) = _t->derivativeCutoff(); break;
        case 30: *reinterpret_cast< quint16*>(_v) = _t->maxAxisLock(); break;
        case 31: *reinterpret_cast< quint16*>(_v) = _t->maxAxisLockRate(); break;
        case 32: *reinterpret_cast< quint16*>(_v) = _t->maxWeakLevelingRate(); break;
        case 33: *reinterpret_cast< quint16*>(_v) = _t->rattitudeModeTransition(); break;
        case 34: *reinterpret_cast< qint16*>(_v) = _t->cruiseControlMinThrust(); break;
        case 35: *reinterpret_cast< quint16*>(_v) = _t->cruiseControlMaxThrust(); break;
        case 36: *reinterpret_cast< quint16*>(_v) = _t->cruiseControlMaxAngle(); break;
        case 37: *reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_v) = _t->cruiseControlFlightModeSwitchPosEnable0(); break;
        case 38: *reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_v) = _t->cruiseControlFlightModeSwitchPosEnable1(); break;
        case 39: *reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_v) = _t->cruiseControlFlightModeSwitchPosEnable2(); break;
        case 40: *reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_v) = _t->cruiseControlFlightModeSwitchPosEnable3(); break;
        case 41: *reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_v) = _t->cruiseControlFlightModeSwitchPosEnable4(); break;
        case 42: *reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_v) = _t->cruiseControlFlightModeSwitchPosEnable5(); break;
        case 43: *reinterpret_cast< StabilizationSettings_CruiseControlInvertedThrustReversing::Enum*>(_v) = _t->cruiseControlInvertedThrustReversing(); break;
        case 44: *reinterpret_cast< StabilizationSettings_CruiseControlInvertedPowerOutput::Enum*>(_v) = _t->cruiseControlInvertedPowerOutput(); break;
        case 45: *reinterpret_cast< StabilizationSettings_LowThrottleZeroIntegral::Enum*>(_v) = _t->lowThrottleZeroIntegral(); break;
        case 46: *reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_v) = _t->flightModeAssistMap0(); break;
        case 47: *reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_v) = _t->flightModeAssistMap1(); break;
        case 48: *reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_v) = _t->flightModeAssistMap2(); break;
        case 49: *reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_v) = _t->flightModeAssistMap3(); break;
        case 50: *reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_v) = _t->flightModeAssistMap4(); break;
        case 51: *reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_v) = _t->flightModeAssistMap5(); break;
        case 52: *reinterpret_cast< StabilizationSettings_MeasureBasedDTerm::Enum*>(_v) = _t->measureBasedDTerm(); break;
        case 53: *reinterpret_cast< StabilizationSettings_ForceRollPitchDuringYawTransition::Enum*>(_v) = _t->forceRollPitchDuringYawTransition(); break;
        case 54: *reinterpret_cast< float*>(_v) = _t->getVbarSensitivity_Roll(); break;
        case 55: *reinterpret_cast< float*>(_v) = _t->getVbarSensitivity_Pitch(); break;
        case 56: *reinterpret_cast< float*>(_v) = _t->getVbarSensitivity_Yaw(); break;
        case 57: *reinterpret_cast< float*>(_v) = _t->getVbarRollPI_Kp(); break;
        case 58: *reinterpret_cast< float*>(_v) = _t->getVbarRollPI_Ki(); break;
        case 59: *reinterpret_cast< float*>(_v) = _t->getVbarPitchPI_Kp(); break;
        case 60: *reinterpret_cast< float*>(_v) = _t->getVbarPitchPI_Ki(); break;
        case 61: *reinterpret_cast< float*>(_v) = _t->getVbarYawPI_Kp(); break;
        case 62: *reinterpret_cast< float*>(_v) = _t->getVbarYawPI_Ki(); break;
        case 63: *reinterpret_cast< float*>(_v) = _t->getVbarTau(); break;
        case 64: *reinterpret_cast< float*>(_v) = _t->getGyroTau(); break;
        case 65: *reinterpret_cast< float*>(_v) = _t->getDerivativeGamma(); break;
        case 66: *reinterpret_cast< float*>(_v) = _t->getAxisLockKp(); break;
        case 67: *reinterpret_cast< float*>(_v) = _t->getWeakLevelingKp(); break;
        case 68: *reinterpret_cast< float*>(_v) = _t->getCruiseControlMaxPowerFactor(); break;
        case 69: *reinterpret_cast< float*>(_v) = _t->getCruiseControlPowerTrim(); break;
        case 70: *reinterpret_cast< float*>(_v) = _t->getCruiseControlPowerDelayComp(); break;
        case 71: *reinterpret_cast< float*>(_v) = _t->getScaleToAirspeed(); break;
        case 72: *reinterpret_cast< float*>(_v) = _t->getScaleToAirspeedLimits_Min(); break;
        case 73: *reinterpret_cast< float*>(_v) = _t->getScaleToAirspeedLimits_Max(); break;
        case 74: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeMap_0(); break;
        case 75: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeMap_1(); break;
        case 76: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeMap_2(); break;
        case 77: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeMap_3(); break;
        case 78: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeMap_4(); break;
        case 79: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeMap_5(); break;
        case 80: *reinterpret_cast< qint8*>(_v) = _t->getVbarGyroSuppress(); break;
        case 81: *reinterpret_cast< quint8*>(_v) = _t->getVbarPiroComp(); break;
        case 82: *reinterpret_cast< quint8*>(_v) = _t->getVbarMaxAngle(); break;
        case 83: *reinterpret_cast< quint8*>(_v) = _t->getDerivativeCutoff(); break;
        case 84: *reinterpret_cast< quint8*>(_v) = _t->getMaxAxisLock(); break;
        case 85: *reinterpret_cast< quint8*>(_v) = _t->getMaxAxisLockRate(); break;
        case 86: *reinterpret_cast< quint8*>(_v) = _t->getMaxWeakLevelingRate(); break;
        case 87: *reinterpret_cast< quint8*>(_v) = _t->getRattitudeModeTransition(); break;
        case 88: *reinterpret_cast< qint8*>(_v) = _t->getCruiseControlMinThrust(); break;
        case 89: *reinterpret_cast< quint8*>(_v) = _t->getCruiseControlMaxThrust(); break;
        case 90: *reinterpret_cast< quint8*>(_v) = _t->getCruiseControlMaxAngle(); break;
        case 91: *reinterpret_cast< quint8*>(_v) = _t->getCruiseControlFlightModeSwitchPosEnable_0(); break;
        case 92: *reinterpret_cast< quint8*>(_v) = _t->getCruiseControlFlightModeSwitchPosEnable_1(); break;
        case 93: *reinterpret_cast< quint8*>(_v) = _t->getCruiseControlFlightModeSwitchPosEnable_2(); break;
        case 94: *reinterpret_cast< quint8*>(_v) = _t->getCruiseControlFlightModeSwitchPosEnable_3(); break;
        case 95: *reinterpret_cast< quint8*>(_v) = _t->getCruiseControlFlightModeSwitchPosEnable_4(); break;
        case 96: *reinterpret_cast< quint8*>(_v) = _t->getCruiseControlFlightModeSwitchPosEnable_5(); break;
        case 97: *reinterpret_cast< quint8*>(_v) = _t->getCruiseControlInvertedThrustReversing(); break;
        case 98: *reinterpret_cast< quint8*>(_v) = _t->getCruiseControlInvertedPowerOutput(); break;
        case 99: *reinterpret_cast< quint8*>(_v) = _t->getLowThrottleZeroIntegral(); break;
        case 100: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeAssistMap_0(); break;
        case 101: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeAssistMap_1(); break;
        case 102: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeAssistMap_2(); break;
        case 103: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeAssistMap_3(); break;
        case 104: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeAssistMap_4(); break;
        case 105: *reinterpret_cast< quint8*>(_v) = _t->getFlightModeAssistMap_5(); break;
        case 106: *reinterpret_cast< quint8*>(_v) = _t->getMeasureBasedDTerm(); break;
        case 107: *reinterpret_cast< quint8*>(_v) = _t->getForceRollPitchDuringYawTransition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StabilizationSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVbarSensitivityRoll(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setVbarSensitivityPitch(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setVbarSensitivityYaw(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setVbarRollPIKp(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setVbarRollPIKi(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setVbarPitchPIKp(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setVbarPitchPIKi(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setVbarYawPIKp(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setVbarYawPIKi(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setVbarTau(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setGyroTau(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setDerivativeGamma(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setAxisLockKp(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setWeakLevelingKp(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setCruiseControlMaxPowerFactor(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setCruiseControlPowerTrim(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setCruiseControlPowerDelayComp(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setScaleToAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setScaleToAirspeedLimitsMin(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setScaleToAirspeedLimitsMax(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setFlightModeMap0(*reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_v)); break;
        case 21: _t->setFlightModeMap1(*reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_v)); break;
        case 22: _t->setFlightModeMap2(*reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_v)); break;
        case 23: _t->setFlightModeMap3(*reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_v)); break;
        case 24: _t->setFlightModeMap4(*reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_v)); break;
        case 25: _t->setFlightModeMap5(*reinterpret_cast< StabilizationSettings_FlightModeMap::Enum*>(_v)); break;
        case 26: _t->setVbarGyroSuppress(*reinterpret_cast< qint16*>(_v)); break;
        case 27: _t->setVbarPiroComp(*reinterpret_cast< StabilizationSettings_VbarPiroComp::Enum*>(_v)); break;
        case 28: _t->setVbarMaxAngle(*reinterpret_cast< quint16*>(_v)); break;
        case 29: _t->setDerivativeCutoff(*reinterpret_cast< quint16*>(_v)); break;
        case 30: _t->setMaxAxisLock(*reinterpret_cast< quint16*>(_v)); break;
        case 31: _t->setMaxAxisLockRate(*reinterpret_cast< quint16*>(_v)); break;
        case 32: _t->setMaxWeakLevelingRate(*reinterpret_cast< quint16*>(_v)); break;
        case 33: _t->setRattitudeModeTransition(*reinterpret_cast< quint16*>(_v)); break;
        case 34: _t->setCruiseControlMinThrust(*reinterpret_cast< qint16*>(_v)); break;
        case 35: _t->setCruiseControlMaxThrust(*reinterpret_cast< quint16*>(_v)); break;
        case 36: _t->setCruiseControlMaxAngle(*reinterpret_cast< quint16*>(_v)); break;
        case 37: _t->setCruiseControlFlightModeSwitchPosEnable0(*reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_v)); break;
        case 38: _t->setCruiseControlFlightModeSwitchPosEnable1(*reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_v)); break;
        case 39: _t->setCruiseControlFlightModeSwitchPosEnable2(*reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_v)); break;
        case 40: _t->setCruiseControlFlightModeSwitchPosEnable3(*reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_v)); break;
        case 41: _t->setCruiseControlFlightModeSwitchPosEnable4(*reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_v)); break;
        case 42: _t->setCruiseControlFlightModeSwitchPosEnable5(*reinterpret_cast< StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum*>(_v)); break;
        case 43: _t->setCruiseControlInvertedThrustReversing(*reinterpret_cast< StabilizationSettings_CruiseControlInvertedThrustReversing::Enum*>(_v)); break;
        case 44: _t->setCruiseControlInvertedPowerOutput(*reinterpret_cast< StabilizationSettings_CruiseControlInvertedPowerOutput::Enum*>(_v)); break;
        case 45: _t->setLowThrottleZeroIntegral(*reinterpret_cast< StabilizationSettings_LowThrottleZeroIntegral::Enum*>(_v)); break;
        case 46: _t->setFlightModeAssistMap0(*reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_v)); break;
        case 47: _t->setFlightModeAssistMap1(*reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_v)); break;
        case 48: _t->setFlightModeAssistMap2(*reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_v)); break;
        case 49: _t->setFlightModeAssistMap3(*reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_v)); break;
        case 50: _t->setFlightModeAssistMap4(*reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_v)); break;
        case 51: _t->setFlightModeAssistMap5(*reinterpret_cast< StabilizationSettings_FlightModeAssistMap::Enum*>(_v)); break;
        case 52: _t->setMeasureBasedDTerm(*reinterpret_cast< StabilizationSettings_MeasureBasedDTerm::Enum*>(_v)); break;
        case 53: _t->setForceRollPitchDuringYawTransition(*reinterpret_cast< StabilizationSettings_ForceRollPitchDuringYawTransition::Enum*>(_v)); break;
        case 54: _t->setVbarSensitivity_Roll(*reinterpret_cast< float*>(_v)); break;
        case 55: _t->setVbarSensitivity_Pitch(*reinterpret_cast< float*>(_v)); break;
        case 56: _t->setVbarSensitivity_Yaw(*reinterpret_cast< float*>(_v)); break;
        case 57: _t->setVbarRollPI_Kp(*reinterpret_cast< float*>(_v)); break;
        case 58: _t->setVbarRollPI_Ki(*reinterpret_cast< float*>(_v)); break;
        case 59: _t->setVbarPitchPI_Kp(*reinterpret_cast< float*>(_v)); break;
        case 60: _t->setVbarPitchPI_Ki(*reinterpret_cast< float*>(_v)); break;
        case 61: _t->setVbarYawPI_Kp(*reinterpret_cast< float*>(_v)); break;
        case 62: _t->setVbarYawPI_Ki(*reinterpret_cast< float*>(_v)); break;
        case 63: _t->setVbarTau(*reinterpret_cast< float*>(_v)); break;
        case 64: _t->setGyroTau(*reinterpret_cast< float*>(_v)); break;
        case 65: _t->setDerivativeGamma(*reinterpret_cast< float*>(_v)); break;
        case 66: _t->setAxisLockKp(*reinterpret_cast< float*>(_v)); break;
        case 67: _t->setWeakLevelingKp(*reinterpret_cast< float*>(_v)); break;
        case 68: _t->setCruiseControlMaxPowerFactor(*reinterpret_cast< float*>(_v)); break;
        case 69: _t->setCruiseControlPowerTrim(*reinterpret_cast< float*>(_v)); break;
        case 70: _t->setCruiseControlPowerDelayComp(*reinterpret_cast< float*>(_v)); break;
        case 71: _t->setScaleToAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 72: _t->setScaleToAirspeedLimits_Min(*reinterpret_cast< float*>(_v)); break;
        case 73: _t->setScaleToAirspeedLimits_Max(*reinterpret_cast< float*>(_v)); break;
        case 74: _t->setFlightModeMap_0(*reinterpret_cast< quint8*>(_v)); break;
        case 75: _t->setFlightModeMap_1(*reinterpret_cast< quint8*>(_v)); break;
        case 76: _t->setFlightModeMap_2(*reinterpret_cast< quint8*>(_v)); break;
        case 77: _t->setFlightModeMap_3(*reinterpret_cast< quint8*>(_v)); break;
        case 78: _t->setFlightModeMap_4(*reinterpret_cast< quint8*>(_v)); break;
        case 79: _t->setFlightModeMap_5(*reinterpret_cast< quint8*>(_v)); break;
        case 80: _t->setVbarGyroSuppress(*reinterpret_cast< qint8*>(_v)); break;
        case 81: _t->setVbarPiroComp(*reinterpret_cast< quint8*>(_v)); break;
        case 82: _t->setVbarMaxAngle(*reinterpret_cast< quint8*>(_v)); break;
        case 83: _t->setDerivativeCutoff(*reinterpret_cast< quint8*>(_v)); break;
        case 84: _t->setMaxAxisLock(*reinterpret_cast< quint8*>(_v)); break;
        case 85: _t->setMaxAxisLockRate(*reinterpret_cast< quint8*>(_v)); break;
        case 86: _t->setMaxWeakLevelingRate(*reinterpret_cast< quint8*>(_v)); break;
        case 87: _t->setRattitudeModeTransition(*reinterpret_cast< quint8*>(_v)); break;
        case 88: _t->setCruiseControlMinThrust(*reinterpret_cast< qint8*>(_v)); break;
        case 89: _t->setCruiseControlMaxThrust(*reinterpret_cast< quint8*>(_v)); break;
        case 90: _t->setCruiseControlMaxAngle(*reinterpret_cast< quint8*>(_v)); break;
        case 91: _t->setCruiseControlFlightModeSwitchPosEnable_0(*reinterpret_cast< quint8*>(_v)); break;
        case 92: _t->setCruiseControlFlightModeSwitchPosEnable_1(*reinterpret_cast< quint8*>(_v)); break;
        case 93: _t->setCruiseControlFlightModeSwitchPosEnable_2(*reinterpret_cast< quint8*>(_v)); break;
        case 94: _t->setCruiseControlFlightModeSwitchPosEnable_3(*reinterpret_cast< quint8*>(_v)); break;
        case 95: _t->setCruiseControlFlightModeSwitchPosEnable_4(*reinterpret_cast< quint8*>(_v)); break;
        case 96: _t->setCruiseControlFlightModeSwitchPosEnable_5(*reinterpret_cast< quint8*>(_v)); break;
        case 97: _t->setCruiseControlInvertedThrustReversing(*reinterpret_cast< quint8*>(_v)); break;
        case 98: _t->setCruiseControlInvertedPowerOutput(*reinterpret_cast< quint8*>(_v)); break;
        case 99: _t->setLowThrottleZeroIntegral(*reinterpret_cast< quint8*>(_v)); break;
        case 100: _t->setFlightModeAssistMap_0(*reinterpret_cast< quint8*>(_v)); break;
        case 101: _t->setFlightModeAssistMap_1(*reinterpret_cast< quint8*>(_v)); break;
        case 102: _t->setFlightModeAssistMap_2(*reinterpret_cast< quint8*>(_v)); break;
        case 103: _t->setFlightModeAssistMap_3(*reinterpret_cast< quint8*>(_v)); break;
        case 104: _t->setFlightModeAssistMap_4(*reinterpret_cast< quint8*>(_v)); break;
        case 105: _t->setFlightModeAssistMap_5(*reinterpret_cast< quint8*>(_v)); break;
        case 106: _t->setMeasureBasedDTerm(*reinterpret_cast< quint8*>(_v)); break;
        case 107: _t->setForceRollPitchDuringYawTransition(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_StabilizationSettings[] = {
        &StabilizationSettings_FlightModeMap::staticMetaObject,
    &StabilizationSettings_VbarPiroComp::staticMetaObject,
    &StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::staticMetaObject,
    &StabilizationSettings_CruiseControlInvertedThrustReversing::staticMetaObject,
    &StabilizationSettings_CruiseControlInvertedPowerOutput::staticMetaObject,
    &StabilizationSettings_LowThrottleZeroIntegral::staticMetaObject,
    &StabilizationSettings_FlightModeAssistMap::staticMetaObject,
    &StabilizationSettings_MeasureBasedDTerm::staticMetaObject,
    &StabilizationSettings_ForceRollPitchDuringYawTransition::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject StabilizationSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_StabilizationSettings.data,
    qt_meta_data_StabilizationSettings,
    qt_static_metacall,
    qt_meta_extradata_StabilizationSettings,
    nullptr
} };


const QMetaObject *StabilizationSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabilizationSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StabilizationSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int StabilizationSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 305)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 305;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 305)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 305;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 108;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 108;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 108;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 108;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 108;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 108;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StabilizationSettings::vbarSensitivityChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StabilizationSettings::VbarSensitivityChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StabilizationSettings::vbarSensitivityRollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StabilizationSettings::VbarSensitivity_RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StabilizationSettings::vbarSensitivityPitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StabilizationSettings::VbarSensitivity_PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StabilizationSettings::vbarSensitivityYawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StabilizationSettings::VbarSensitivity_YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void StabilizationSettings::vbarRollPIChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void StabilizationSettings::VbarRollPIChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void StabilizationSettings::vbarRollPIKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void StabilizationSettings::VbarRollPI_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void StabilizationSettings::vbarRollPIKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void StabilizationSettings::VbarRollPI_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void StabilizationSettings::vbarPitchPIChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void StabilizationSettings::VbarPitchPIChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void StabilizationSettings::vbarPitchPIKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void StabilizationSettings::VbarPitchPI_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void StabilizationSettings::vbarPitchPIKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void StabilizationSettings::VbarPitchPI_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void StabilizationSettings::vbarYawPIChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void StabilizationSettings::VbarYawPIChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void StabilizationSettings::vbarYawPIKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void StabilizationSettings::VbarYawPI_KpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void StabilizationSettings::vbarYawPIKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void StabilizationSettings::VbarYawPI_KiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void StabilizationSettings::vbarTauChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void StabilizationSettings::VbarTauChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void StabilizationSettings::gyroTauChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void StabilizationSettings::GyroTauChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void StabilizationSettings::derivativeGammaChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void StabilizationSettings::DerivativeGammaChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void StabilizationSettings::axisLockKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void StabilizationSettings::AxisLockKpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void StabilizationSettings::weakLevelingKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void StabilizationSettings::WeakLevelingKpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void StabilizationSettings::cruiseControlMaxPowerFactorChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void StabilizationSettings::CruiseControlMaxPowerFactorChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void StabilizationSettings::cruiseControlPowerTrimChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void StabilizationSettings::CruiseControlPowerTrimChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void StabilizationSettings::cruiseControlPowerDelayCompChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void StabilizationSettings::CruiseControlPowerDelayCompChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void StabilizationSettings::scaleToAirspeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void StabilizationSettings::ScaleToAirspeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void StabilizationSettings::scaleToAirspeedLimitsChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void StabilizationSettings::ScaleToAirspeedLimitsChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void StabilizationSettings::scaleToAirspeedLimitsMinChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void StabilizationSettings::ScaleToAirspeedLimits_MinChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void StabilizationSettings::scaleToAirspeedLimitsMaxChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void StabilizationSettings::ScaleToAirspeedLimits_MaxChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void StabilizationSettings::flightModeMapChanged(quint32 _t1, const StabilizationSettings_FlightModeMap::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void StabilizationSettings::FlightModeMapChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void StabilizationSettings::flightModeMap0Changed(const StabilizationSettings_FlightModeMap::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void StabilizationSettings::FlightModeMap_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void StabilizationSettings::flightModeMap1Changed(const StabilizationSettings_FlightModeMap::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void StabilizationSettings::FlightModeMap_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void StabilizationSettings::flightModeMap2Changed(const StabilizationSettings_FlightModeMap::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void StabilizationSettings::FlightModeMap_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void StabilizationSettings::flightModeMap3Changed(const StabilizationSettings_FlightModeMap::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void StabilizationSettings::FlightModeMap_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void StabilizationSettings::flightModeMap4Changed(const StabilizationSettings_FlightModeMap::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void StabilizationSettings::FlightModeMap_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void StabilizationSettings::flightModeMap5Changed(const StabilizationSettings_FlightModeMap::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void StabilizationSettings::FlightModeMap_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void StabilizationSettings::vbarGyroSuppressChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void StabilizationSettings::VbarGyroSuppressChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void StabilizationSettings::vbarPiroCompChanged(const StabilizationSettings_VbarPiroComp::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void StabilizationSettings::VbarPiroCompChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void StabilizationSettings::vbarMaxAngleChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void StabilizationSettings::VbarMaxAngleChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void StabilizationSettings::derivativeCutoffChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void StabilizationSettings::DerivativeCutoffChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void StabilizationSettings::maxAxisLockChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void StabilizationSettings::MaxAxisLockChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void StabilizationSettings::maxAxisLockRateChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void StabilizationSettings::MaxAxisLockRateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void StabilizationSettings::maxWeakLevelingRateChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void StabilizationSettings::MaxWeakLevelingRateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void StabilizationSettings::rattitudeModeTransitionChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void StabilizationSettings::RattitudeModeTransitionChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void StabilizationSettings::cruiseControlMinThrustChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void StabilizationSettings::CruiseControlMinThrustChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void StabilizationSettings::cruiseControlMaxThrustChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void StabilizationSettings::CruiseControlMaxThrustChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void StabilizationSettings::cruiseControlMaxAngleChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void StabilizationSettings::CruiseControlMaxAngleChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void StabilizationSettings::cruiseControlFlightModeSwitchPosEnableChanged(quint32 _t1, const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void StabilizationSettings::CruiseControlFlightModeSwitchPosEnableChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void StabilizationSettings::cruiseControlFlightModeSwitchPosEnable0Changed(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void StabilizationSettings::CruiseControlFlightModeSwitchPosEnable_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void StabilizationSettings::cruiseControlFlightModeSwitchPosEnable1Changed(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void StabilizationSettings::CruiseControlFlightModeSwitchPosEnable_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void StabilizationSettings::cruiseControlFlightModeSwitchPosEnable2Changed(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void StabilizationSettings::CruiseControlFlightModeSwitchPosEnable_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void StabilizationSettings::cruiseControlFlightModeSwitchPosEnable3Changed(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void StabilizationSettings::CruiseControlFlightModeSwitchPosEnable_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void StabilizationSettings::cruiseControlFlightModeSwitchPosEnable4Changed(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void StabilizationSettings::CruiseControlFlightModeSwitchPosEnable_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void StabilizationSettings::cruiseControlFlightModeSwitchPosEnable5Changed(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void StabilizationSettings::CruiseControlFlightModeSwitchPosEnable_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void StabilizationSettings::cruiseControlInvertedThrustReversingChanged(const StabilizationSettings_CruiseControlInvertedThrustReversing::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void StabilizationSettings::CruiseControlInvertedThrustReversingChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void StabilizationSettings::cruiseControlInvertedPowerOutputChanged(const StabilizationSettings_CruiseControlInvertedPowerOutput::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void StabilizationSettings::CruiseControlInvertedPowerOutputChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void StabilizationSettings::lowThrottleZeroIntegralChanged(const StabilizationSettings_LowThrottleZeroIntegral::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void StabilizationSettings::LowThrottleZeroIntegralChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void StabilizationSettings::flightModeAssistMapChanged(quint32 _t1, const StabilizationSettings_FlightModeAssistMap::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void StabilizationSettings::FlightModeAssistMapChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void StabilizationSettings::flightModeAssistMap0Changed(const StabilizationSettings_FlightModeAssistMap::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void StabilizationSettings::FlightModeAssistMap_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void StabilizationSettings::flightModeAssistMap1Changed(const StabilizationSettings_FlightModeAssistMap::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void StabilizationSettings::FlightModeAssistMap_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void StabilizationSettings::flightModeAssistMap2Changed(const StabilizationSettings_FlightModeAssistMap::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void StabilizationSettings::FlightModeAssistMap_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void StabilizationSettings::flightModeAssistMap3Changed(const StabilizationSettings_FlightModeAssistMap::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}

// SIGNAL 115
void StabilizationSettings::FlightModeAssistMap_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 115, _a);
}

// SIGNAL 116
void StabilizationSettings::flightModeAssistMap4Changed(const StabilizationSettings_FlightModeAssistMap::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 116, _a);
}

// SIGNAL 117
void StabilizationSettings::FlightModeAssistMap_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 117, _a);
}

// SIGNAL 118
void StabilizationSettings::flightModeAssistMap5Changed(const StabilizationSettings_FlightModeAssistMap::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 118, _a);
}

// SIGNAL 119
void StabilizationSettings::FlightModeAssistMap_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 119, _a);
}

// SIGNAL 120
void StabilizationSettings::measureBasedDTermChanged(const StabilizationSettings_MeasureBasedDTerm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 120, _a);
}

// SIGNAL 121
void StabilizationSettings::MeasureBasedDTermChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 121, _a);
}

// SIGNAL 122
void StabilizationSettings::forceRollPitchDuringYawTransitionChanged(const StabilizationSettings_ForceRollPitchDuringYawTransition::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 122, _a);
}

// SIGNAL 123
void StabilizationSettings::ForceRollPitchDuringYawTransitionChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 123, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
