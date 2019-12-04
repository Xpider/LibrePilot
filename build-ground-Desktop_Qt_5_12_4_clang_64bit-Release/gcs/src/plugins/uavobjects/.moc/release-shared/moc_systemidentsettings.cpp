/****************************************************************************
** Meta object code from reading C++ file 'systemidentsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../systemidentsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemidentsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemIdentSettingsConstants_t {
    QByteArrayData data[8];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemIdentSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemIdentSettingsConstants_t qt_meta_stringdata_SystemIdentSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 28), // "SystemIdentSettingsConstants"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 17), // "CalculateYawCount"
QT_MOC_LITERAL(3, 52, 23), // "DestinationPidBankCount"
QT_MOC_LITERAL(4, 76, 18), // "ThrustControlCount"
QT_MOC_LITERAL(5, 95, 22), // "SmoothQuickSourceCount"
QT_MOC_LITERAL(6, 118, 24), // "DisableSanityChecksCount"
QT_MOC_LITERAL(7, 143, 13) // "CompleteCount"

    },
    "SystemIdentSettingsConstants\0Enum\0"
    "CalculateYawCount\0DestinationPidBankCount\0"
    "ThrustControlCount\0SmoothQuickSourceCount\0"
    "DisableSanityChecksCount\0CompleteCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemIdentSettingsConstants[] = {

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
       1,    1, 0x0,    6,   19,

 // enum data: key, value
       2, uint(SystemIdentSettingsConstants::CalculateYawCount),
       3, uint(SystemIdentSettingsConstants::DestinationPidBankCount),
       4, uint(SystemIdentSettingsConstants::ThrustControlCount),
       5, uint(SystemIdentSettingsConstants::SmoothQuickSourceCount),
       6, uint(SystemIdentSettingsConstants::DisableSanityChecksCount),
       7, uint(SystemIdentSettingsConstants::CompleteCount),

       0        // eod
};

void SystemIdentSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemIdentSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemIdentSettingsConstants.data,
    qt_meta_data_SystemIdentSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemIdentSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemIdentSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemIdentSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemIdentSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemIdentSettings_CalculateYaw_t {
    QByteArrayData data[5];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemIdentSettings_CalculateYaw_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemIdentSettings_CalculateYaw_t qt_meta_stringdata_SystemIdentSettings_CalculateYaw = {
    {
QT_MOC_LITERAL(0, 0, 32), // "SystemIdentSettings_CalculateYaw"
QT_MOC_LITERAL(1, 33, 4), // "Enum"
QT_MOC_LITERAL(2, 38, 5), // "False"
QT_MOC_LITERAL(3, 44, 16), // "TrueLimitToRatio"
QT_MOC_LITERAL(4, 61, 15) // "TrueIgnoreLimit"

    },
    "SystemIdentSettings_CalculateYaw\0Enum\0"
    "False\0TrueLimitToRatio\0TrueIgnoreLimit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemIdentSettings_CalculateYaw[] = {

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
       2, uint(SystemIdentSettings_CalculateYaw::False),
       3, uint(SystemIdentSettings_CalculateYaw::TrueLimitToRatio),
       4, uint(SystemIdentSettings_CalculateYaw::TrueIgnoreLimit),

       0        // eod
};

void SystemIdentSettings_CalculateYaw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemIdentSettings_CalculateYaw::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemIdentSettings_CalculateYaw.data,
    qt_meta_data_SystemIdentSettings_CalculateYaw,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemIdentSettings_CalculateYaw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemIdentSettings_CalculateYaw::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemIdentSettings_CalculateYaw.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemIdentSettings_CalculateYaw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemIdentSettings_DestinationPidBank_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemIdentSettings_DestinationPidBank_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemIdentSettings_DestinationPidBank_t qt_meta_stringdata_SystemIdentSettings_DestinationPidBank = {
    {
QT_MOC_LITERAL(0, 0, 38), // "SystemIdentSettings_Destinati..."
QT_MOC_LITERAL(1, 39, 4), // "Enum"
QT_MOC_LITERAL(2, 44, 5), // "Bank1"
QT_MOC_LITERAL(3, 50, 5), // "Bank2"
QT_MOC_LITERAL(4, 56, 5) // "Bank3"

    },
    "SystemIdentSettings_DestinationPidBank\0"
    "Enum\0Bank1\0Bank2\0Bank3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemIdentSettings_DestinationPidBank[] = {

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
       2, uint(SystemIdentSettings_DestinationPidBank::Bank1),
       3, uint(SystemIdentSettings_DestinationPidBank::Bank2),
       4, uint(SystemIdentSettings_DestinationPidBank::Bank3),

       0        // eod
};

void SystemIdentSettings_DestinationPidBank::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemIdentSettings_DestinationPidBank::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemIdentSettings_DestinationPidBank.data,
    qt_meta_data_SystemIdentSettings_DestinationPidBank,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemIdentSettings_DestinationPidBank::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemIdentSettings_DestinationPidBank::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemIdentSettings_DestinationPidBank.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemIdentSettings_DestinationPidBank::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemIdentSettings_ThrustControl_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemIdentSettings_ThrustControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemIdentSettings_ThrustControl_t qt_meta_stringdata_SystemIdentSettings_ThrustControl = {
    {
QT_MOC_LITERAL(0, 0, 33), // "SystemIdentSettings_ThrustCon..."
QT_MOC_LITERAL(1, 34, 4), // "Enum"
QT_MOC_LITERAL(2, 39, 6), // "Manual"
QT_MOC_LITERAL(3, 46, 13) // "AltitudeVario"

    },
    "SystemIdentSettings_ThrustControl\0"
    "Enum\0Manual\0AltitudeVario"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemIdentSettings_ThrustControl[] = {

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
       2, uint(SystemIdentSettings_ThrustControl::Manual),
       3, uint(SystemIdentSettings_ThrustControl::AltitudeVario),

       0        // eod
};

void SystemIdentSettings_ThrustControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemIdentSettings_ThrustControl::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemIdentSettings_ThrustControl.data,
    qt_meta_data_SystemIdentSettings_ThrustControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemIdentSettings_ThrustControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemIdentSettings_ThrustControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemIdentSettings_ThrustControl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemIdentSettings_ThrustControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemIdentSettings_SmoothQuickSource_t {
    QByteArrayData data[10];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemIdentSettings_SmoothQuickSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemIdentSettings_SmoothQuickSource_t qt_meta_stringdata_SystemIdentSettings_SmoothQuickSource = {
    {
QT_MOC_LITERAL(0, 0, 37), // "SystemIdentSettings_SmoothQui..."
QT_MOC_LITERAL(1, 38, 4), // "Enum"
QT_MOC_LITERAL(2, 43, 8), // "Disabled"
QT_MOC_LITERAL(3, 52, 10), // "Accessory0"
QT_MOC_LITERAL(4, 63, 10), // "Accessory1"
QT_MOC_LITERAL(5, 74, 10), // "Accessory2"
QT_MOC_LITERAL(6, 85, 10), // "Accessory3"
QT_MOC_LITERAL(7, 96, 13), // "FMSToggle3pos"
QT_MOC_LITERAL(8, 110, 13), // "FMSToggle5pos"
QT_MOC_LITERAL(9, 124, 13) // "FMSToggle7pos"

    },
    "SystemIdentSettings_SmoothQuickSource\0"
    "Enum\0Disabled\0Accessory0\0Accessory1\0"
    "Accessory2\0Accessory3\0FMSToggle3pos\0"
    "FMSToggle5pos\0FMSToggle7pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemIdentSettings_SmoothQuickSource[] = {

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
       1,    1, 0x0,    8,   19,

 // enum data: key, value
       2, uint(SystemIdentSettings_SmoothQuickSource::Disabled),
       3, uint(SystemIdentSettings_SmoothQuickSource::Accessory0),
       4, uint(SystemIdentSettings_SmoothQuickSource::Accessory1),
       5, uint(SystemIdentSettings_SmoothQuickSource::Accessory2),
       6, uint(SystemIdentSettings_SmoothQuickSource::Accessory3),
       7, uint(SystemIdentSettings_SmoothQuickSource::FMSToggle3pos),
       8, uint(SystemIdentSettings_SmoothQuickSource::FMSToggle5pos),
       9, uint(SystemIdentSettings_SmoothQuickSource::FMSToggle7pos),

       0        // eod
};

void SystemIdentSettings_SmoothQuickSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemIdentSettings_SmoothQuickSource::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemIdentSettings_SmoothQuickSource.data,
    qt_meta_data_SystemIdentSettings_SmoothQuickSource,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemIdentSettings_SmoothQuickSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemIdentSettings_SmoothQuickSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemIdentSettings_SmoothQuickSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemIdentSettings_SmoothQuickSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemIdentSettings_DisableSanityChecks_t {
    QByteArrayData data[4];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemIdentSettings_DisableSanityChecks_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemIdentSettings_DisableSanityChecks_t qt_meta_stringdata_SystemIdentSettings_DisableSanityChecks = {
    {
QT_MOC_LITERAL(0, 0, 39), // "SystemIdentSettings_DisableSa..."
QT_MOC_LITERAL(1, 40, 4), // "Enum"
QT_MOC_LITERAL(2, 45, 5), // "False"
QT_MOC_LITERAL(3, 51, 4) // "True"

    },
    "SystemIdentSettings_DisableSanityChecks\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemIdentSettings_DisableSanityChecks[] = {

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
       2, uint(SystemIdentSettings_DisableSanityChecks::False),
       3, uint(SystemIdentSettings_DisableSanityChecks::True),

       0        // eod
};

void SystemIdentSettings_DisableSanityChecks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemIdentSettings_DisableSanityChecks::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemIdentSettings_DisableSanityChecks.data,
    qt_meta_data_SystemIdentSettings_DisableSanityChecks,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemIdentSettings_DisableSanityChecks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemIdentSettings_DisableSanityChecks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemIdentSettings_DisableSanityChecks.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemIdentSettings_DisableSanityChecks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemIdentSettings_Complete_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemIdentSettings_Complete_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemIdentSettings_Complete_t qt_meta_stringdata_SystemIdentSettings_Complete = {
    {
QT_MOC_LITERAL(0, 0, 28), // "SystemIdentSettings_Complete"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 5), // "False"
QT_MOC_LITERAL(3, 40, 4) // "True"

    },
    "SystemIdentSettings_Complete\0Enum\0"
    "False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemIdentSettings_Complete[] = {

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
       2, uint(SystemIdentSettings_Complete::False),
       3, uint(SystemIdentSettings_Complete::True),

       0        // eod
};

void SystemIdentSettings_Complete::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemIdentSettings_Complete::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemIdentSettings_Complete.data,
    qt_meta_data_SystemIdentSettings_Complete,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemIdentSettings_Complete::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemIdentSettings_Complete::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemIdentSettings_Complete.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemIdentSettings_Complete::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemIdentSettings_t {
    QByteArrayData data[157];
    char stringdata0[2767];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemIdentSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemIdentSettings_t qt_meta_stringdata_SystemIdentSettings = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SystemIdentSettings"
QT_MOC_LITERAL(1, 20, 10), // "tauChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "value"
QT_MOC_LITERAL(4, 38, 10), // "TauChanged"
QT_MOC_LITERAL(5, 49, 11), // "betaChanged"
QT_MOC_LITERAL(6, 61, 5), // "index"
QT_MOC_LITERAL(7, 67, 11), // "BetaChanged"
QT_MOC_LITERAL(8, 79, 15), // "betaRollChanged"
QT_MOC_LITERAL(9, 95, 16), // "Beta_RollChanged"
QT_MOC_LITERAL(10, 112, 16), // "betaPitchChanged"
QT_MOC_LITERAL(11, 129, 17), // "Beta_PitchChanged"
QT_MOC_LITERAL(12, 147, 14), // "betaYawChanged"
QT_MOC_LITERAL(13, 162, 15), // "Beta_YawChanged"
QT_MOC_LITERAL(14, 178, 32), // "yawToRollPitchPIDRatioMinChanged"
QT_MOC_LITERAL(15, 211, 32), // "YawToRollPitchPIDRatioMinChanged"
QT_MOC_LITERAL(16, 244, 32), // "yawToRollPitchPIDRatioMaxChanged"
QT_MOC_LITERAL(17, 277, 32), // "YawToRollPitchPIDRatioMaxChanged"
QT_MOC_LITERAL(18, 310, 23), // "derivativeFactorChanged"
QT_MOC_LITERAL(19, 334, 23), // "DerivativeFactorChanged"
QT_MOC_LITERAL(20, 358, 27), // "outerLoopKpSoftClampChanged"
QT_MOC_LITERAL(21, 386, 27), // "OuterLoopKpSoftClampChanged"
QT_MOC_LITERAL(22, 414, 23), // "smoothQuickValueChanged"
QT_MOC_LITERAL(23, 438, 23), // "SmoothQuickValueChanged"
QT_MOC_LITERAL(24, 462, 26), // "gyroReadTimeAverageChanged"
QT_MOC_LITERAL(25, 489, 26), // "GyroReadTimeAverageChanged"
QT_MOC_LITERAL(26, 516, 14), // "dampMinChanged"
QT_MOC_LITERAL(27, 531, 14), // "DampMinChanged"
QT_MOC_LITERAL(28, 546, 15), // "dampRateChanged"
QT_MOC_LITERAL(29, 562, 15), // "DampRateChanged"
QT_MOC_LITERAL(30, 578, 14), // "dampMaxChanged"
QT_MOC_LITERAL(31, 593, 14), // "DampMaxChanged"
QT_MOC_LITERAL(32, 608, 15), // "noiseMinChanged"
QT_MOC_LITERAL(33, 624, 15), // "NoiseMinChanged"
QT_MOC_LITERAL(34, 640, 16), // "noiseRateChanged"
QT_MOC_LITERAL(35, 657, 16), // "NoiseRateChanged"
QT_MOC_LITERAL(36, 674, 15), // "noiseMaxChanged"
QT_MOC_LITERAL(37, 690, 15), // "NoiseMaxChanged"
QT_MOC_LITERAL(38, 706, 19), // "calculateYawChanged"
QT_MOC_LITERAL(39, 726, 38), // "SystemIdentSettings_Calculate..."
QT_MOC_LITERAL(40, 765, 19), // "CalculateYawChanged"
QT_MOC_LITERAL(41, 785, 25), // "destinationPidBankChanged"
QT_MOC_LITERAL(42, 811, 44), // "SystemIdentSettings_Destinati..."
QT_MOC_LITERAL(43, 856, 25), // "DestinationPidBankChanged"
QT_MOC_LITERAL(44, 882, 21), // "tuningDurationChanged"
QT_MOC_LITERAL(45, 904, 21), // "TuningDurationChanged"
QT_MOC_LITERAL(46, 926, 20), // "thrustControlChanged"
QT_MOC_LITERAL(47, 947, 39), // "SystemIdentSettings_ThrustCon..."
QT_MOC_LITERAL(48, 987, 20), // "ThrustControlChanged"
QT_MOC_LITERAL(49, 1008, 24), // "smoothQuickSourceChanged"
QT_MOC_LITERAL(50, 1033, 43), // "SystemIdentSettings_SmoothQui..."
QT_MOC_LITERAL(51, 1077, 24), // "SmoothQuickSourceChanged"
QT_MOC_LITERAL(52, 1102, 26), // "disableSanityChecksChanged"
QT_MOC_LITERAL(53, 1129, 45), // "SystemIdentSettings_DisableSa..."
QT_MOC_LITERAL(54, 1175, 26), // "DisableSanityChecksChanged"
QT_MOC_LITERAL(55, 1202, 15), // "completeChanged"
QT_MOC_LITERAL(56, 1218, 34), // "SystemIdentSettings_Complete:..."
QT_MOC_LITERAL(57, 1253, 15), // "CompleteChanged"
QT_MOC_LITERAL(58, 1269, 6), // "setTau"
QT_MOC_LITERAL(59, 1276, 7), // "setBeta"
QT_MOC_LITERAL(60, 1284, 11), // "setBetaRoll"
QT_MOC_LITERAL(61, 1296, 12), // "setBeta_Roll"
QT_MOC_LITERAL(62, 1309, 12), // "setBetaPitch"
QT_MOC_LITERAL(63, 1322, 13), // "setBeta_Pitch"
QT_MOC_LITERAL(64, 1336, 10), // "setBetaYaw"
QT_MOC_LITERAL(65, 1347, 11), // "setBeta_Yaw"
QT_MOC_LITERAL(66, 1359, 28), // "setYawToRollPitchPIDRatioMin"
QT_MOC_LITERAL(67, 1388, 28), // "setYawToRollPitchPIDRatioMax"
QT_MOC_LITERAL(68, 1417, 19), // "setDerivativeFactor"
QT_MOC_LITERAL(69, 1437, 23), // "setOuterLoopKpSoftClamp"
QT_MOC_LITERAL(70, 1461, 19), // "setSmoothQuickValue"
QT_MOC_LITERAL(71, 1481, 22), // "setGyroReadTimeAverage"
QT_MOC_LITERAL(72, 1504, 10), // "setDampMin"
QT_MOC_LITERAL(73, 1515, 11), // "setDampRate"
QT_MOC_LITERAL(74, 1527, 10), // "setDampMax"
QT_MOC_LITERAL(75, 1538, 11), // "setNoiseMin"
QT_MOC_LITERAL(76, 1550, 12), // "setNoiseRate"
QT_MOC_LITERAL(77, 1563, 11), // "setNoiseMax"
QT_MOC_LITERAL(78, 1575, 15), // "setCalculateYaw"
QT_MOC_LITERAL(79, 1591, 21), // "setDestinationPidBank"
QT_MOC_LITERAL(80, 1613, 17), // "setTuningDuration"
QT_MOC_LITERAL(81, 1631, 16), // "setThrustControl"
QT_MOC_LITERAL(82, 1648, 20), // "setSmoothQuickSource"
QT_MOC_LITERAL(83, 1669, 22), // "setDisableSanityChecks"
QT_MOC_LITERAL(84, 1692, 11), // "setComplete"
QT_MOC_LITERAL(85, 1704, 17), // "emitNotifications"
QT_MOC_LITERAL(86, 1722, 6), // "getTau"
QT_MOC_LITERAL(87, 1729, 4), // "beta"
QT_MOC_LITERAL(88, 1734, 7), // "getBeta"
QT_MOC_LITERAL(89, 1742, 12), // "getBeta_Roll"
QT_MOC_LITERAL(90, 1755, 13), // "getBeta_Pitch"
QT_MOC_LITERAL(91, 1769, 11), // "getBeta_Yaw"
QT_MOC_LITERAL(92, 1781, 28), // "getYawToRollPitchPIDRatioMin"
QT_MOC_LITERAL(93, 1810, 28), // "getYawToRollPitchPIDRatioMax"
QT_MOC_LITERAL(94, 1839, 19), // "getDerivativeFactor"
QT_MOC_LITERAL(95, 1859, 23), // "getOuterLoopKpSoftClamp"
QT_MOC_LITERAL(96, 1883, 19), // "getSmoothQuickValue"
QT_MOC_LITERAL(97, 1903, 22), // "getGyroReadTimeAverage"
QT_MOC_LITERAL(98, 1926, 10), // "getDampMin"
QT_MOC_LITERAL(99, 1937, 11), // "getDampRate"
QT_MOC_LITERAL(100, 1949, 10), // "getDampMax"
QT_MOC_LITERAL(101, 1960, 11), // "getNoiseMin"
QT_MOC_LITERAL(102, 1972, 12), // "getNoiseRate"
QT_MOC_LITERAL(103, 1985, 11), // "getNoiseMax"
QT_MOC_LITERAL(104, 1997, 15), // "getCalculateYaw"
QT_MOC_LITERAL(105, 2013, 21), // "getDestinationPidBank"
QT_MOC_LITERAL(106, 2035, 17), // "getTuningDuration"
QT_MOC_LITERAL(107, 2053, 16), // "getThrustControl"
QT_MOC_LITERAL(108, 2070, 20), // "getSmoothQuickSource"
QT_MOC_LITERAL(109, 2091, 22), // "getDisableSanityChecks"
QT_MOC_LITERAL(110, 2114, 11), // "getComplete"
QT_MOC_LITERAL(111, 2126, 3), // "tau"
QT_MOC_LITERAL(112, 2130, 8), // "betaRoll"
QT_MOC_LITERAL(113, 2139, 9), // "betaPitch"
QT_MOC_LITERAL(114, 2149, 7), // "betaYaw"
QT_MOC_LITERAL(115, 2157, 25), // "yawToRollPitchPIDRatioMin"
QT_MOC_LITERAL(116, 2183, 25), // "yawToRollPitchPIDRatioMax"
QT_MOC_LITERAL(117, 2209, 16), // "derivativeFactor"
QT_MOC_LITERAL(118, 2226, 20), // "outerLoopKpSoftClamp"
QT_MOC_LITERAL(119, 2247, 16), // "smoothQuickValue"
QT_MOC_LITERAL(120, 2264, 19), // "gyroReadTimeAverage"
QT_MOC_LITERAL(121, 2284, 7), // "dampMin"
QT_MOC_LITERAL(122, 2292, 8), // "dampRate"
QT_MOC_LITERAL(123, 2301, 7), // "dampMax"
QT_MOC_LITERAL(124, 2309, 8), // "noiseMin"
QT_MOC_LITERAL(125, 2318, 9), // "noiseRate"
QT_MOC_LITERAL(126, 2328, 8), // "noiseMax"
QT_MOC_LITERAL(127, 2337, 12), // "calculateYaw"
QT_MOC_LITERAL(128, 2350, 18), // "destinationPidBank"
QT_MOC_LITERAL(129, 2369, 14), // "tuningDuration"
QT_MOC_LITERAL(130, 2384, 13), // "thrustControl"
QT_MOC_LITERAL(131, 2398, 17), // "smoothQuickSource"
QT_MOC_LITERAL(132, 2416, 19), // "disableSanityChecks"
QT_MOC_LITERAL(133, 2436, 8), // "complete"
QT_MOC_LITERAL(134, 2445, 3), // "Tau"
QT_MOC_LITERAL(135, 2449, 9), // "Beta_Roll"
QT_MOC_LITERAL(136, 2459, 10), // "Beta_Pitch"
QT_MOC_LITERAL(137, 2470, 8), // "Beta_Yaw"
QT_MOC_LITERAL(138, 2479, 25), // "YawToRollPitchPIDRatioMin"
QT_MOC_LITERAL(139, 2505, 25), // "YawToRollPitchPIDRatioMax"
QT_MOC_LITERAL(140, 2531, 16), // "DerivativeFactor"
QT_MOC_LITERAL(141, 2548, 20), // "OuterLoopKpSoftClamp"
QT_MOC_LITERAL(142, 2569, 16), // "SmoothQuickValue"
QT_MOC_LITERAL(143, 2586, 19), // "GyroReadTimeAverage"
QT_MOC_LITERAL(144, 2606, 7), // "DampMin"
QT_MOC_LITERAL(145, 2614, 8), // "DampRate"
QT_MOC_LITERAL(146, 2623, 7), // "DampMax"
QT_MOC_LITERAL(147, 2631, 8), // "NoiseMin"
QT_MOC_LITERAL(148, 2640, 9), // "NoiseRate"
QT_MOC_LITERAL(149, 2650, 8), // "NoiseMax"
QT_MOC_LITERAL(150, 2659, 12), // "CalculateYaw"
QT_MOC_LITERAL(151, 2672, 18), // "DestinationPidBank"
QT_MOC_LITERAL(152, 2691, 14), // "TuningDuration"
QT_MOC_LITERAL(153, 2706, 13), // "ThrustControl"
QT_MOC_LITERAL(154, 2720, 17), // "SmoothQuickSource"
QT_MOC_LITERAL(155, 2738, 19), // "DisableSanityChecks"
QT_MOC_LITERAL(156, 2758, 8) // "Complete"

    },
    "SystemIdentSettings\0tauChanged\0\0value\0"
    "TauChanged\0betaChanged\0index\0BetaChanged\0"
    "betaRollChanged\0Beta_RollChanged\0"
    "betaPitchChanged\0Beta_PitchChanged\0"
    "betaYawChanged\0Beta_YawChanged\0"
    "yawToRollPitchPIDRatioMinChanged\0"
    "YawToRollPitchPIDRatioMinChanged\0"
    "yawToRollPitchPIDRatioMaxChanged\0"
    "YawToRollPitchPIDRatioMaxChanged\0"
    "derivativeFactorChanged\0DerivativeFactorChanged\0"
    "outerLoopKpSoftClampChanged\0"
    "OuterLoopKpSoftClampChanged\0"
    "smoothQuickValueChanged\0SmoothQuickValueChanged\0"
    "gyroReadTimeAverageChanged\0"
    "GyroReadTimeAverageChanged\0dampMinChanged\0"
    "DampMinChanged\0dampRateChanged\0"
    "DampRateChanged\0dampMaxChanged\0"
    "DampMaxChanged\0noiseMinChanged\0"
    "NoiseMinChanged\0noiseRateChanged\0"
    "NoiseRateChanged\0noiseMaxChanged\0"
    "NoiseMaxChanged\0calculateYawChanged\0"
    "SystemIdentSettings_CalculateYaw::Enum\0"
    "CalculateYawChanged\0destinationPidBankChanged\0"
    "SystemIdentSettings_DestinationPidBank::Enum\0"
    "DestinationPidBankChanged\0"
    "tuningDurationChanged\0TuningDurationChanged\0"
    "thrustControlChanged\0"
    "SystemIdentSettings_ThrustControl::Enum\0"
    "ThrustControlChanged\0smoothQuickSourceChanged\0"
    "SystemIdentSettings_SmoothQuickSource::Enum\0"
    "SmoothQuickSourceChanged\0"
    "disableSanityChecksChanged\0"
    "SystemIdentSettings_DisableSanityChecks::Enum\0"
    "DisableSanityChecksChanged\0completeChanged\0"
    "SystemIdentSettings_Complete::Enum\0"
    "CompleteChanged\0setTau\0setBeta\0"
    "setBetaRoll\0setBeta_Roll\0setBetaPitch\0"
    "setBeta_Pitch\0setBetaYaw\0setBeta_Yaw\0"
    "setYawToRollPitchPIDRatioMin\0"
    "setYawToRollPitchPIDRatioMax\0"
    "setDerivativeFactor\0setOuterLoopKpSoftClamp\0"
    "setSmoothQuickValue\0setGyroReadTimeAverage\0"
    "setDampMin\0setDampRate\0setDampMax\0"
    "setNoiseMin\0setNoiseRate\0setNoiseMax\0"
    "setCalculateYaw\0setDestinationPidBank\0"
    "setTuningDuration\0setThrustControl\0"
    "setSmoothQuickSource\0setDisableSanityChecks\0"
    "setComplete\0emitNotifications\0getTau\0"
    "beta\0getBeta\0getBeta_Roll\0getBeta_Pitch\0"
    "getBeta_Yaw\0getYawToRollPitchPIDRatioMin\0"
    "getYawToRollPitchPIDRatioMax\0"
    "getDerivativeFactor\0getOuterLoopKpSoftClamp\0"
    "getSmoothQuickValue\0getGyroReadTimeAverage\0"
    "getDampMin\0getDampRate\0getDampMax\0"
    "getNoiseMin\0getNoiseRate\0getNoiseMax\0"
    "getCalculateYaw\0getDestinationPidBank\0"
    "getTuningDuration\0getThrustControl\0"
    "getSmoothQuickSource\0getDisableSanityChecks\0"
    "getComplete\0tau\0betaRoll\0betaPitch\0"
    "betaYaw\0yawToRollPitchPIDRatioMin\0"
    "yawToRollPitchPIDRatioMax\0derivativeFactor\0"
    "outerLoopKpSoftClamp\0smoothQuickValue\0"
    "gyroReadTimeAverage\0dampMin\0dampRate\0"
    "dampMax\0noiseMin\0noiseRate\0noiseMax\0"
    "calculateYaw\0destinationPidBank\0"
    "tuningDuration\0thrustControl\0"
    "smoothQuickSource\0disableSanityChecks\0"
    "complete\0Tau\0Beta_Roll\0Beta_Pitch\0"
    "Beta_Yaw\0YawToRollPitchPIDRatioMin\0"
    "YawToRollPitchPIDRatioMax\0DerivativeFactor\0"
    "OuterLoopKpSoftClamp\0SmoothQuickValue\0"
    "GyroReadTimeAverage\0DampMin\0DampRate\0"
    "DampMax\0NoiseMin\0NoiseRate\0NoiseMax\0"
    "CalculateYaw\0DestinationPidBank\0"
    "TuningDuration\0ThrustControl\0"
    "SmoothQuickSource\0DisableSanityChecks\0"
    "Complete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemIdentSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     114,   14, // methods
      46,  884, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      48,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  584,    2, 0x06 /* Public */,
       4,    1,  587,    2, 0x06 /* Public */,
       5,    2,  590,    2, 0x06 /* Public */,
       7,    2,  595,    2, 0x06 /* Public */,
       8,    1,  600,    2, 0x06 /* Public */,
       9,    1,  603,    2, 0x06 /* Public */,
      10,    1,  606,    2, 0x06 /* Public */,
      11,    1,  609,    2, 0x06 /* Public */,
      12,    1,  612,    2, 0x06 /* Public */,
      13,    1,  615,    2, 0x06 /* Public */,
      14,    1,  618,    2, 0x06 /* Public */,
      15,    1,  621,    2, 0x06 /* Public */,
      16,    1,  624,    2, 0x06 /* Public */,
      17,    1,  627,    2, 0x06 /* Public */,
      18,    1,  630,    2, 0x06 /* Public */,
      19,    1,  633,    2, 0x06 /* Public */,
      20,    1,  636,    2, 0x06 /* Public */,
      21,    1,  639,    2, 0x06 /* Public */,
      22,    1,  642,    2, 0x06 /* Public */,
      23,    1,  645,    2, 0x06 /* Public */,
      24,    1,  648,    2, 0x06 /* Public */,
      25,    1,  651,    2, 0x06 /* Public */,
      26,    1,  654,    2, 0x06 /* Public */,
      27,    1,  657,    2, 0x06 /* Public */,
      28,    1,  660,    2, 0x06 /* Public */,
      29,    1,  663,    2, 0x06 /* Public */,
      30,    1,  666,    2, 0x06 /* Public */,
      31,    1,  669,    2, 0x06 /* Public */,
      32,    1,  672,    2, 0x06 /* Public */,
      33,    1,  675,    2, 0x06 /* Public */,
      34,    1,  678,    2, 0x06 /* Public */,
      35,    1,  681,    2, 0x06 /* Public */,
      36,    1,  684,    2, 0x06 /* Public */,
      37,    1,  687,    2, 0x06 /* Public */,
      38,    1,  690,    2, 0x06 /* Public */,
      40,    1,  693,    2, 0x06 /* Public */,
      41,    1,  696,    2, 0x06 /* Public */,
      43,    1,  699,    2, 0x06 /* Public */,
      44,    1,  702,    2, 0x06 /* Public */,
      45,    1,  705,    2, 0x06 /* Public */,
      46,    1,  708,    2, 0x06 /* Public */,
      48,    1,  711,    2, 0x06 /* Public */,
      49,    1,  714,    2, 0x06 /* Public */,
      51,    1,  717,    2, 0x06 /* Public */,
      52,    1,  720,    2, 0x06 /* Public */,
      54,    1,  723,    2, 0x06 /* Public */,
      55,    1,  726,    2, 0x06 /* Public */,
      57,    1,  729,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      58,    1,  732,    2, 0x0a /* Public */,
      59,    2,  735,    2, 0x0a /* Public */,
      60,    1,  740,    2, 0x0a /* Public */,
      61,    1,  743,    2, 0x0a /* Public */,
      62,    1,  746,    2, 0x0a /* Public */,
      63,    1,  749,    2, 0x0a /* Public */,
      64,    1,  752,    2, 0x0a /* Public */,
      65,    1,  755,    2, 0x0a /* Public */,
      66,    1,  758,    2, 0x0a /* Public */,
      67,    1,  761,    2, 0x0a /* Public */,
      68,    1,  764,    2, 0x0a /* Public */,
      69,    1,  767,    2, 0x0a /* Public */,
      70,    1,  770,    2, 0x0a /* Public */,
      71,    1,  773,    2, 0x0a /* Public */,
      72,    1,  776,    2, 0x0a /* Public */,
      72,    1,  779,    2, 0x0a /* Public */,
      73,    1,  782,    2, 0x0a /* Public */,
      73,    1,  785,    2, 0x0a /* Public */,
      74,    1,  788,    2, 0x0a /* Public */,
      74,    1,  791,    2, 0x0a /* Public */,
      75,    1,  794,    2, 0x0a /* Public */,
      75,    1,  797,    2, 0x0a /* Public */,
      76,    1,  800,    2, 0x0a /* Public */,
      76,    1,  803,    2, 0x0a /* Public */,
      77,    1,  806,    2, 0x0a /* Public */,
      77,    1,  809,    2, 0x0a /* Public */,
      78,    1,  812,    2, 0x0a /* Public */,
      78,    1,  815,    2, 0x0a /* Public */,
      79,    1,  818,    2, 0x0a /* Public */,
      79,    1,  821,    2, 0x0a /* Public */,
      80,    1,  824,    2, 0x0a /* Public */,
      80,    1,  827,    2, 0x0a /* Public */,
      81,    1,  830,    2, 0x0a /* Public */,
      81,    1,  833,    2, 0x0a /* Public */,
      82,    1,  836,    2, 0x0a /* Public */,
      82,    1,  839,    2, 0x0a /* Public */,
      83,    1,  842,    2, 0x0a /* Public */,
      83,    1,  845,    2, 0x0a /* Public */,
      84,    1,  848,    2, 0x0a /* Public */,
      84,    1,  851,    2, 0x0a /* Public */,
      85,    0,  854,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      86,    0,  855,    2, 0x02 /* Public */,
      87,    1,  856,    2, 0x02 /* Public */,
      88,    1,  859,    2, 0x02 /* Public */,
      89,    0,  862,    2, 0x02 /* Public */,
      90,    0,  863,    2, 0x02 /* Public */,
      91,    0,  864,    2, 0x02 /* Public */,
      92,    0,  865,    2, 0x02 /* Public */,
      93,    0,  866,    2, 0x02 /* Public */,
      94,    0,  867,    2, 0x02 /* Public */,
      95,    0,  868,    2, 0x02 /* Public */,
      96,    0,  869,    2, 0x02 /* Public */,
      97,    0,  870,    2, 0x02 /* Public */,
      98,    0,  871,    2, 0x02 /* Public */,
      99,    0,  872,    2, 0x02 /* Public */,
     100,    0,  873,    2, 0x02 /* Public */,
     101,    0,  874,    2, 0x02 /* Public */,
     102,    0,  875,    2, 0x02 /* Public */,
     103,    0,  876,    2, 0x02 /* Public */,
     104,    0,  877,    2, 0x02 /* Public */,
     105,    0,  878,    2, 0x02 /* Public */,
     106,    0,  879,    2, 0x02 /* Public */,
     107,    0,  880,    2, 0x02 /* Public */,
     108,    0,  881,    2, 0x02 /* Public */,
     109,    0,  882,    2, 0x02 /* Public */,
     110,    0,  883,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 39,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 42,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 47,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 50,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 53,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 56,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 39,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 42,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 47,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 50,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 53,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 56,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    6,
    QMetaType::Float, QMetaType::UInt,    6,
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
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
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
     121, QMetaType::UShort, 0x00495103,
     122, QMetaType::UShort, 0x00495103,
     123, QMetaType::UShort, 0x00495103,
     124, QMetaType::UShort, 0x00495103,
     125, QMetaType::UShort, 0x00495103,
     126, QMetaType::UShort, 0x00495103,
     127, 0x80000000 | 39, 0x0049510b,
     128, 0x80000000 | 42, 0x0049510b,
     129, QMetaType::UShort, 0x00495103,
     130, 0x80000000 | 47, 0x0049510b,
     131, 0x80000000 | 50, 0x0049510b,
     132, 0x80000000 | 53, 0x0049510b,
     133, 0x80000000 | 56, 0x0049510b,
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
     144, QMetaType::UChar, 0x00495103,
     145, QMetaType::UChar, 0x00495103,
     146, QMetaType::UChar, 0x00495103,
     147, QMetaType::UChar, 0x00495103,
     148, QMetaType::UChar, 0x00495103,
     149, QMetaType::UChar, 0x00495103,
     150, QMetaType::UChar, 0x00495103,
     151, QMetaType::UChar, 0x00495103,
     152, QMetaType::UChar, 0x00495103,
     153, QMetaType::UChar, 0x00495103,
     154, QMetaType::UChar, 0x00495103,
     155, QMetaType::UChar, 0x00495103,
     156, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
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
      28,
      30,
      32,
      34,
      36,
      38,
      40,
      42,
      44,
      46,
       1,
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
      29,
      31,
      33,
      35,
      37,
      39,
      41,
      43,
      45,
      47,

       0        // eod
};

void SystemIdentSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemIdentSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tauChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->TauChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->betaChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 3: _t->BetaChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 4: _t->betaRollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->Beta_RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->betaPitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->Beta_PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->betaYawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->Beta_YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->yawToRollPitchPIDRatioMinChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->YawToRollPitchPIDRatioMinChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->yawToRollPitchPIDRatioMaxChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->YawToRollPitchPIDRatioMaxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->derivativeFactorChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->DerivativeFactorChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->outerLoopKpSoftClampChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->OuterLoopKpSoftClampChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->smoothQuickValueChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->SmoothQuickValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->gyroReadTimeAverageChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->GyroReadTimeAverageChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->dampMinChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 23: _t->DampMinChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->dampRateChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 25: _t->DampRateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->dampMaxChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 27: _t->DampMaxChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->noiseMinChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 29: _t->NoiseMinChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->noiseRateChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 31: _t->NoiseRateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->noiseMaxChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 33: _t->NoiseMaxChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->calculateYawChanged((*reinterpret_cast< const SystemIdentSettings_CalculateYaw::Enum(*)>(_a[1]))); break;
        case 35: _t->CalculateYawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->destinationPidBankChanged((*reinterpret_cast< const SystemIdentSettings_DestinationPidBank::Enum(*)>(_a[1]))); break;
        case 37: _t->DestinationPidBankChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->tuningDurationChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 39: _t->TuningDurationChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->thrustControlChanged((*reinterpret_cast< const SystemIdentSettings_ThrustControl::Enum(*)>(_a[1]))); break;
        case 41: _t->ThrustControlChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->smoothQuickSourceChanged((*reinterpret_cast< const SystemIdentSettings_SmoothQuickSource::Enum(*)>(_a[1]))); break;
        case 43: _t->SmoothQuickSourceChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->disableSanityChecksChanged((*reinterpret_cast< const SystemIdentSettings_DisableSanityChecks::Enum(*)>(_a[1]))); break;
        case 45: _t->DisableSanityChecksChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->completeChanged((*reinterpret_cast< const SystemIdentSettings_Complete::Enum(*)>(_a[1]))); break;
        case 47: _t->CompleteChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 48: _t->setTau((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 49: _t->setBeta((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 50: _t->setBetaRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 51: _t->setBeta_Roll((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 52: _t->setBetaPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 53: _t->setBeta_Pitch((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 54: _t->setBetaYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 55: _t->setBeta_Yaw((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 56: _t->setYawToRollPitchPIDRatioMin((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 57: _t->setYawToRollPitchPIDRatioMax((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 58: _t->setDerivativeFactor((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 59: _t->setOuterLoopKpSoftClamp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 60: _t->setSmoothQuickValue((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 61: _t->setGyroReadTimeAverage((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 62: _t->setDampMin((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 63: _t->setDampMin((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 64: _t->setDampRate((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 65: _t->setDampRate((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 66: _t->setDampMax((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 67: _t->setDampMax((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 68: _t->setNoiseMin((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 69: _t->setNoiseMin((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 70: _t->setNoiseRate((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 71: _t->setNoiseRate((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 72: _t->setNoiseMax((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 73: _t->setNoiseMax((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 74: _t->setCalculateYaw((*reinterpret_cast< const SystemIdentSettings_CalculateYaw::Enum(*)>(_a[1]))); break;
        case 75: _t->setCalculateYaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 76: _t->setDestinationPidBank((*reinterpret_cast< const SystemIdentSettings_DestinationPidBank::Enum(*)>(_a[1]))); break;
        case 77: _t->setDestinationPidBank((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 78: _t->setTuningDuration((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 79: _t->setTuningDuration((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 80: _t->setThrustControl((*reinterpret_cast< const SystemIdentSettings_ThrustControl::Enum(*)>(_a[1]))); break;
        case 81: _t->setThrustControl((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 82: _t->setSmoothQuickSource((*reinterpret_cast< const SystemIdentSettings_SmoothQuickSource::Enum(*)>(_a[1]))); break;
        case 83: _t->setSmoothQuickSource((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 84: _t->setDisableSanityChecks((*reinterpret_cast< const SystemIdentSettings_DisableSanityChecks::Enum(*)>(_a[1]))); break;
        case 85: _t->setDisableSanityChecks((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 86: _t->setComplete((*reinterpret_cast< const SystemIdentSettings_Complete::Enum(*)>(_a[1]))); break;
        case 87: _t->setComplete((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 88: _t->emitNotifications(); break;
        case 89: { float _r = _t->getTau();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 90: { float _r = _t->beta((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 91: { float _r = _t->getBeta((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 92: { float _r = _t->getBeta_Roll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 93: { float _r = _t->getBeta_Pitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 94: { float _r = _t->getBeta_Yaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 95: { float _r = _t->getYawToRollPitchPIDRatioMin();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 96: { float _r = _t->getYawToRollPitchPIDRatioMax();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 97: { float _r = _t->getDerivativeFactor();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 98: { float _r = _t->getOuterLoopKpSoftClamp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 99: { float _r = _t->getSmoothQuickValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 100: { float _r = _t->getGyroReadTimeAverage();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 101: { quint8 _r = _t->getDampMin();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 102: { quint8 _r = _t->getDampRate();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 103: { quint8 _r = _t->getDampMax();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 104: { quint8 _r = _t->getNoiseMin();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 105: { quint8 _r = _t->getNoiseRate();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 106: { quint8 _r = _t->getNoiseMax();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 107: { quint8 _r = _t->getCalculateYaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 108: { quint8 _r = _t->getDestinationPidBank();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 109: { quint8 _r = _t->getTuningDuration();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 110: { quint8 _r = _t->getThrustControl();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 111: { quint8 _r = _t->getSmoothQuickSource();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 112: { quint8 _r = _t->getDisableSanityChecks();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 113: { quint8 _r = _t->getComplete();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SystemIdentSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::tauChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::TauChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::betaChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::BetaChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::betaRollChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::Beta_RollChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::betaPitchChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::Beta_PitchChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::betaYawChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::Beta_YawChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::yawToRollPitchPIDRatioMinChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::YawToRollPitchPIDRatioMinChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::yawToRollPitchPIDRatioMaxChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::YawToRollPitchPIDRatioMaxChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::derivativeFactorChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::DerivativeFactorChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::outerLoopKpSoftClampChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::OuterLoopKpSoftClampChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::smoothQuickValueChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::SmoothQuickValueChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::gyroReadTimeAverageChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::GyroReadTimeAverageChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::dampMinChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::DampMinChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::dampRateChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::DampRateChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::dampMaxChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::DampMaxChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::noiseMinChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::NoiseMinChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::noiseRateChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::NoiseRateChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::noiseMaxChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::NoiseMaxChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const SystemIdentSettings_CalculateYaw::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::calculateYawChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::CalculateYawChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const SystemIdentSettings_DestinationPidBank::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::destinationPidBankChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::DestinationPidBankChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::tuningDurationChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::TuningDurationChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const SystemIdentSettings_ThrustControl::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::thrustControlChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::ThrustControlChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const SystemIdentSettings_SmoothQuickSource::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::smoothQuickSourceChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::SmoothQuickSourceChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const SystemIdentSettings_DisableSanityChecks::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::disableSanityChecksChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::DisableSanityChecksChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(const SystemIdentSettings_Complete::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::completeChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (SystemIdentSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemIdentSettings::CompleteChanged)) {
                *result = 47;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SystemIdentSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->tau(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->betaRoll(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->betaPitch(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->betaYaw(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->yawToRollPitchPIDRatioMin(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->yawToRollPitchPIDRatioMax(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->derivativeFactor(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->outerLoopKpSoftClamp(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->smoothQuickValue(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->gyroReadTimeAverage(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->dampMin(); break;
        case 11: *reinterpret_cast< quint16*>(_v) = _t->dampRate(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->dampMax(); break;
        case 13: *reinterpret_cast< quint16*>(_v) = _t->noiseMin(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->noiseRate(); break;
        case 15: *reinterpret_cast< quint16*>(_v) = _t->noiseMax(); break;
        case 16: *reinterpret_cast< SystemIdentSettings_CalculateYaw::Enum*>(_v) = _t->calculateYaw(); break;
        case 17: *reinterpret_cast< SystemIdentSettings_DestinationPidBank::Enum*>(_v) = _t->destinationPidBank(); break;
        case 18: *reinterpret_cast< quint16*>(_v) = _t->tuningDuration(); break;
        case 19: *reinterpret_cast< SystemIdentSettings_ThrustControl::Enum*>(_v) = _t->thrustControl(); break;
        case 20: *reinterpret_cast< SystemIdentSettings_SmoothQuickSource::Enum*>(_v) = _t->smoothQuickSource(); break;
        case 21: *reinterpret_cast< SystemIdentSettings_DisableSanityChecks::Enum*>(_v) = _t->disableSanityChecks(); break;
        case 22: *reinterpret_cast< SystemIdentSettings_Complete::Enum*>(_v) = _t->complete(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getTau(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getBeta_Roll(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->getBeta_Pitch(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->getBeta_Yaw(); break;
        case 27: *reinterpret_cast< float*>(_v) = _t->getYawToRollPitchPIDRatioMin(); break;
        case 28: *reinterpret_cast< float*>(_v) = _t->getYawToRollPitchPIDRatioMax(); break;
        case 29: *reinterpret_cast< float*>(_v) = _t->getDerivativeFactor(); break;
        case 30: *reinterpret_cast< float*>(_v) = _t->getOuterLoopKpSoftClamp(); break;
        case 31: *reinterpret_cast< float*>(_v) = _t->getSmoothQuickValue(); break;
        case 32: *reinterpret_cast< float*>(_v) = _t->getGyroReadTimeAverage(); break;
        case 33: *reinterpret_cast< quint8*>(_v) = _t->getDampMin(); break;
        case 34: *reinterpret_cast< quint8*>(_v) = _t->getDampRate(); break;
        case 35: *reinterpret_cast< quint8*>(_v) = _t->getDampMax(); break;
        case 36: *reinterpret_cast< quint8*>(_v) = _t->getNoiseMin(); break;
        case 37: *reinterpret_cast< quint8*>(_v) = _t->getNoiseRate(); break;
        case 38: *reinterpret_cast< quint8*>(_v) = _t->getNoiseMax(); break;
        case 39: *reinterpret_cast< quint8*>(_v) = _t->getCalculateYaw(); break;
        case 40: *reinterpret_cast< quint8*>(_v) = _t->getDestinationPidBank(); break;
        case 41: *reinterpret_cast< quint8*>(_v) = _t->getTuningDuration(); break;
        case 42: *reinterpret_cast< quint8*>(_v) = _t->getThrustControl(); break;
        case 43: *reinterpret_cast< quint8*>(_v) = _t->getSmoothQuickSource(); break;
        case 44: *reinterpret_cast< quint8*>(_v) = _t->getDisableSanityChecks(); break;
        case 45: *reinterpret_cast< quint8*>(_v) = _t->getComplete(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SystemIdentSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTau(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setBetaRoll(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setBetaPitch(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setBetaYaw(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setYawToRollPitchPIDRatioMin(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setYawToRollPitchPIDRatioMax(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setDerivativeFactor(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setOuterLoopKpSoftClamp(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setSmoothQuickValue(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setGyroReadTimeAverage(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setDampMin(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setDampRate(*reinterpret_cast< quint16*>(_v)); break;
        case 12: _t->setDampMax(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setNoiseMin(*reinterpret_cast< quint16*>(_v)); break;
        case 14: _t->setNoiseRate(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setNoiseMax(*reinterpret_cast< quint16*>(_v)); break;
        case 16: _t->setCalculateYaw(*reinterpret_cast< SystemIdentSettings_CalculateYaw::Enum*>(_v)); break;
        case 17: _t->setDestinationPidBank(*reinterpret_cast< SystemIdentSettings_DestinationPidBank::Enum*>(_v)); break;
        case 18: _t->setTuningDuration(*reinterpret_cast< quint16*>(_v)); break;
        case 19: _t->setThrustControl(*reinterpret_cast< SystemIdentSettings_ThrustControl::Enum*>(_v)); break;
        case 20: _t->setSmoothQuickSource(*reinterpret_cast< SystemIdentSettings_SmoothQuickSource::Enum*>(_v)); break;
        case 21: _t->setDisableSanityChecks(*reinterpret_cast< SystemIdentSettings_DisableSanityChecks::Enum*>(_v)); break;
        case 22: _t->setComplete(*reinterpret_cast< SystemIdentSettings_Complete::Enum*>(_v)); break;
        case 23: _t->setTau(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setBeta_Roll(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setBeta_Pitch(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setBeta_Yaw(*reinterpret_cast< float*>(_v)); break;
        case 27: _t->setYawToRollPitchPIDRatioMin(*reinterpret_cast< float*>(_v)); break;
        case 28: _t->setYawToRollPitchPIDRatioMax(*reinterpret_cast< float*>(_v)); break;
        case 29: _t->setDerivativeFactor(*reinterpret_cast< float*>(_v)); break;
        case 30: _t->setOuterLoopKpSoftClamp(*reinterpret_cast< float*>(_v)); break;
        case 31: _t->setSmoothQuickValue(*reinterpret_cast< float*>(_v)); break;
        case 32: _t->setGyroReadTimeAverage(*reinterpret_cast< float*>(_v)); break;
        case 33: _t->setDampMin(*reinterpret_cast< quint8*>(_v)); break;
        case 34: _t->setDampRate(*reinterpret_cast< quint8*>(_v)); break;
        case 35: _t->setDampMax(*reinterpret_cast< quint8*>(_v)); break;
        case 36: _t->setNoiseMin(*reinterpret_cast< quint8*>(_v)); break;
        case 37: _t->setNoiseRate(*reinterpret_cast< quint8*>(_v)); break;
        case 38: _t->setNoiseMax(*reinterpret_cast< quint8*>(_v)); break;
        case 39: _t->setCalculateYaw(*reinterpret_cast< quint8*>(_v)); break;
        case 40: _t->setDestinationPidBank(*reinterpret_cast< quint8*>(_v)); break;
        case 41: _t->setTuningDuration(*reinterpret_cast< quint8*>(_v)); break;
        case 42: _t->setThrustControl(*reinterpret_cast< quint8*>(_v)); break;
        case 43: _t->setSmoothQuickSource(*reinterpret_cast< quint8*>(_v)); break;
        case 44: _t->setDisableSanityChecks(*reinterpret_cast< quint8*>(_v)); break;
        case 45: _t->setComplete(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_SystemIdentSettings[] = {
        &SystemIdentSettings_CalculateYaw::staticMetaObject,
    &SystemIdentSettings_DestinationPidBank::staticMetaObject,
    &SystemIdentSettings_ThrustControl::staticMetaObject,
    &SystemIdentSettings_SmoothQuickSource::staticMetaObject,
    &SystemIdentSettings_DisableSanityChecks::staticMetaObject,
    &SystemIdentSettings_Complete::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject SystemIdentSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_SystemIdentSettings.data,
    qt_meta_data_SystemIdentSettings,
    qt_static_metacall,
    qt_meta_extradata_SystemIdentSettings,
    nullptr
} };


const QMetaObject *SystemIdentSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemIdentSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemIdentSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int SystemIdentSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 114)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 114;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 114)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 114;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 46;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SystemIdentSettings::tauChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemIdentSettings::TauChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SystemIdentSettings::betaChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SystemIdentSettings::BetaChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SystemIdentSettings::betaRollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SystemIdentSettings::Beta_RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SystemIdentSettings::betaPitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SystemIdentSettings::Beta_PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SystemIdentSettings::betaYawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SystemIdentSettings::Beta_YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SystemIdentSettings::yawToRollPitchPIDRatioMinChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void SystemIdentSettings::YawToRollPitchPIDRatioMinChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void SystemIdentSettings::yawToRollPitchPIDRatioMaxChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void SystemIdentSettings::YawToRollPitchPIDRatioMaxChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void SystemIdentSettings::derivativeFactorChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void SystemIdentSettings::DerivativeFactorChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void SystemIdentSettings::outerLoopKpSoftClampChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void SystemIdentSettings::OuterLoopKpSoftClampChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void SystemIdentSettings::smoothQuickValueChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void SystemIdentSettings::SmoothQuickValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void SystemIdentSettings::gyroReadTimeAverageChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void SystemIdentSettings::GyroReadTimeAverageChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void SystemIdentSettings::dampMinChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void SystemIdentSettings::DampMinChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void SystemIdentSettings::dampRateChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void SystemIdentSettings::DampRateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void SystemIdentSettings::dampMaxChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void SystemIdentSettings::DampMaxChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void SystemIdentSettings::noiseMinChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void SystemIdentSettings::NoiseMinChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void SystemIdentSettings::noiseRateChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void SystemIdentSettings::NoiseRateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void SystemIdentSettings::noiseMaxChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void SystemIdentSettings::NoiseMaxChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void SystemIdentSettings::calculateYawChanged(const SystemIdentSettings_CalculateYaw::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void SystemIdentSettings::CalculateYawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void SystemIdentSettings::destinationPidBankChanged(const SystemIdentSettings_DestinationPidBank::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void SystemIdentSettings::DestinationPidBankChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void SystemIdentSettings::tuningDurationChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void SystemIdentSettings::TuningDurationChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void SystemIdentSettings::thrustControlChanged(const SystemIdentSettings_ThrustControl::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void SystemIdentSettings::ThrustControlChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void SystemIdentSettings::smoothQuickSourceChanged(const SystemIdentSettings_SmoothQuickSource::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void SystemIdentSettings::SmoothQuickSourceChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void SystemIdentSettings::disableSanityChecksChanged(const SystemIdentSettings_DisableSanityChecks::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void SystemIdentSettings::DisableSanityChecksChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void SystemIdentSettings::completeChanged(const SystemIdentSettings_Complete::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void SystemIdentSettings::CompleteChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
