/****************************************************************************
** Meta object code from reading C++ file 'gpssettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gpssettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpssettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPSSettingsConstants_t {
    QByteArrayData data[9];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSSettingsConstants_t qt_meta_stringdata_GPSSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GPSSettingsConstants"
QT_MOC_LITERAL(1, 21, 4), // "Enum"
QT_MOC_LITERAL(2, 26, 17), // "DataProtocolCount"
QT_MOC_LITERAL(3, 44, 18), // "UbxAutoConfigCount"
QT_MOC_LITERAL(4, 63, 20), // "UbxDynamicModelCount"
QT_MOC_LITERAL(5, 84, 16), // "UbxSBASModeCount"
QT_MOC_LITERAL(6, 101, 16), // "UbxSBASSatsCount"
QT_MOC_LITERAL(7, 118, 16), // "UbxGNSSModeCount"
QT_MOC_LITERAL(8, 135, 27) // "UbxAssistNowAutonomousCount"

    },
    "GPSSettingsConstants\0Enum\0DataProtocolCount\0"
    "UbxAutoConfigCount\0UbxDynamicModelCount\0"
    "UbxSBASModeCount\0UbxSBASSatsCount\0"
    "UbxGNSSModeCount\0UbxAssistNowAutonomousCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSSettingsConstants[] = {

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
       2, uint(GPSSettingsConstants::DataProtocolCount),
       3, uint(GPSSettingsConstants::UbxAutoConfigCount),
       4, uint(GPSSettingsConstants::UbxDynamicModelCount),
       5, uint(GPSSettingsConstants::UbxSBASModeCount),
       6, uint(GPSSettingsConstants::UbxSBASSatsCount),
       7, uint(GPSSettingsConstants::UbxGNSSModeCount),
       8, uint(GPSSettingsConstants::UbxAssistNowAutonomousCount),

       0        // eod
};

void GPSSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSSettingsConstants.data,
    qt_meta_data_GPSSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSSettings_DataProtocol_t {
    QByteArrayData data[5];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSSettings_DataProtocol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSSettings_DataProtocol_t qt_meta_stringdata_GPSSettings_DataProtocol = {
    {
QT_MOC_LITERAL(0, 0, 24), // "GPSSettings_DataProtocol"
QT_MOC_LITERAL(1, 25, 4), // "Enum"
QT_MOC_LITERAL(2, 30, 4), // "NMEA"
QT_MOC_LITERAL(3, 35, 3), // "UBX"
QT_MOC_LITERAL(4, 39, 3) // "DJI"

    },
    "GPSSettings_DataProtocol\0Enum\0NMEA\0"
    "UBX\0DJI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSSettings_DataProtocol[] = {

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
       2, uint(GPSSettings_DataProtocol::NMEA),
       3, uint(GPSSettings_DataProtocol::UBX),
       4, uint(GPSSettings_DataProtocol::DJI),

       0        // eod
};

void GPSSettings_DataProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSSettings_DataProtocol::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSSettings_DataProtocol.data,
    qt_meta_data_GPSSettings_DataProtocol,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSSettings_DataProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSSettings_DataProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSSettings_DataProtocol.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSSettings_DataProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSSettings_UbxAutoConfig_t {
    QByteArrayData data[7];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSSettings_UbxAutoConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSSettings_UbxAutoConfig_t qt_meta_stringdata_GPSSettings_UbxAutoConfig = {
    {
QT_MOC_LITERAL(0, 0, 25), // "GPSSettings_UbxAutoConfig"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 8), // "Disabled"
QT_MOC_LITERAL(3, 40, 8), // "AutoBaud"
QT_MOC_LITERAL(4, 49, 20), // "AutoBaudAndConfigure"
QT_MOC_LITERAL(5, 70, 25), // "AutoBaudConfigureAndStore"
QT_MOC_LITERAL(6, 96, 32) // "AutoBaudConfigureStoreAndDisable"

    },
    "GPSSettings_UbxAutoConfig\0Enum\0Disabled\0"
    "AutoBaud\0AutoBaudAndConfigure\0"
    "AutoBaudConfigureAndStore\0"
    "AutoBaudConfigureStoreAndDisable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSSettings_UbxAutoConfig[] = {

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
       2, uint(GPSSettings_UbxAutoConfig::Disabled),
       3, uint(GPSSettings_UbxAutoConfig::AutoBaud),
       4, uint(GPSSettings_UbxAutoConfig::AutoBaudAndConfigure),
       5, uint(GPSSettings_UbxAutoConfig::AutoBaudConfigureAndStore),
       6, uint(GPSSettings_UbxAutoConfig::AutoBaudConfigureStoreAndDisable),

       0        // eod
};

void GPSSettings_UbxAutoConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSSettings_UbxAutoConfig::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSSettings_UbxAutoConfig.data,
    qt_meta_data_GPSSettings_UbxAutoConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSSettings_UbxAutoConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSSettings_UbxAutoConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSSettings_UbxAutoConfig.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSSettings_UbxAutoConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSSettings_UbxDynamicModel_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSSettings_UbxDynamicModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSSettings_UbxDynamicModel_t qt_meta_stringdata_GPSSettings_UbxDynamicModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "GPSSettings_UbxDynamicModel"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 8), // "Portable"
QT_MOC_LITERAL(3, 42, 10), // "Stationary"
QT_MOC_LITERAL(4, 53, 10), // "Pedestrian"
QT_MOC_LITERAL(5, 64, 10), // "Automotive"
QT_MOC_LITERAL(6, 75, 3), // "Sea"
QT_MOC_LITERAL(7, 79, 10), // "Airborne1G"
QT_MOC_LITERAL(8, 90, 10), // "Airborne2G"
QT_MOC_LITERAL(9, 101, 10) // "Airborne4G"

    },
    "GPSSettings_UbxDynamicModel\0Enum\0"
    "Portable\0Stationary\0Pedestrian\0"
    "Automotive\0Sea\0Airborne1G\0Airborne2G\0"
    "Airborne4G"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSSettings_UbxDynamicModel[] = {

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
       2, uint(GPSSettings_UbxDynamicModel::Portable),
       3, uint(GPSSettings_UbxDynamicModel::Stationary),
       4, uint(GPSSettings_UbxDynamicModel::Pedestrian),
       5, uint(GPSSettings_UbxDynamicModel::Automotive),
       6, uint(GPSSettings_UbxDynamicModel::Sea),
       7, uint(GPSSettings_UbxDynamicModel::Airborne1G),
       8, uint(GPSSettings_UbxDynamicModel::Airborne2G),
       9, uint(GPSSettings_UbxDynamicModel::Airborne4G),

       0        // eod
};

void GPSSettings_UbxDynamicModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSSettings_UbxDynamicModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSSettings_UbxDynamicModel.data,
    qt_meta_data_GPSSettings_UbxDynamicModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSSettings_UbxDynamicModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSSettings_UbxDynamicModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSSettings_UbxDynamicModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSSettings_UbxDynamicModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSSettings_UbxSBASMode_t {
    QByteArrayData data[10];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSSettings_UbxSBASMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSSettings_UbxSBASMode_t qt_meta_stringdata_GPSSettings_UbxSBASMode = {
    {
QT_MOC_LITERAL(0, 0, 23), // "GPSSettings_UbxSBASMode"
QT_MOC_LITERAL(1, 24, 4), // "Enum"
QT_MOC_LITERAL(2, 29, 8), // "Disabled"
QT_MOC_LITERAL(3, 38, 7), // "Ranging"
QT_MOC_LITERAL(4, 46, 10), // "Correction"
QT_MOC_LITERAL(5, 57, 9), // "Integrity"
QT_MOC_LITERAL(6, 67, 17), // "RangingCorrection"
QT_MOC_LITERAL(7, 85, 16), // "RangingIntegrity"
QT_MOC_LITERAL(8, 102, 26), // "RangingCorrectionIntegrity"
QT_MOC_LITERAL(9, 129, 19) // "CorrectionIntegrity"

    },
    "GPSSettings_UbxSBASMode\0Enum\0Disabled\0"
    "Ranging\0Correction\0Integrity\0"
    "RangingCorrection\0RangingIntegrity\0"
    "RangingCorrectionIntegrity\0"
    "CorrectionIntegrity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSSettings_UbxSBASMode[] = {

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
       2, uint(GPSSettings_UbxSBASMode::Disabled),
       3, uint(GPSSettings_UbxSBASMode::Ranging),
       4, uint(GPSSettings_UbxSBASMode::Correction),
       5, uint(GPSSettings_UbxSBASMode::Integrity),
       6, uint(GPSSettings_UbxSBASMode::RangingCorrection),
       7, uint(GPSSettings_UbxSBASMode::RangingIntegrity),
       8, uint(GPSSettings_UbxSBASMode::RangingCorrectionIntegrity),
       9, uint(GPSSettings_UbxSBASMode::CorrectionIntegrity),

       0        // eod
};

void GPSSettings_UbxSBASMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSSettings_UbxSBASMode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSSettings_UbxSBASMode.data,
    qt_meta_data_GPSSettings_UbxSBASMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSSettings_UbxSBASMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSSettings_UbxSBASMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSSettings_UbxSBASMode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSSettings_UbxSBASMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSSettings_UbxSBASSats_t {
    QByteArrayData data[8];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSSettings_UbxSBASSats_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSSettings_UbxSBASSats_t qt_meta_stringdata_GPSSettings_UbxSBASSats = {
    {
QT_MOC_LITERAL(0, 0, 23), // "GPSSettings_UbxSBASSats"
QT_MOC_LITERAL(1, 24, 4), // "Enum"
QT_MOC_LITERAL(2, 29, 8), // "AutoScan"
QT_MOC_LITERAL(3, 38, 4), // "WAAS"
QT_MOC_LITERAL(4, 43, 5), // "EGNOS"
QT_MOC_LITERAL(5, 49, 4), // "MSAS"
QT_MOC_LITERAL(6, 54, 5), // "GAGAN"
QT_MOC_LITERAL(7, 60, 4) // "SDCM"

    },
    "GPSSettings_UbxSBASSats\0Enum\0AutoScan\0"
    "WAAS\0EGNOS\0MSAS\0GAGAN\0SDCM"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSSettings_UbxSBASSats[] = {

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
       2, uint(GPSSettings_UbxSBASSats::AutoScan),
       3, uint(GPSSettings_UbxSBASSats::WAAS),
       4, uint(GPSSettings_UbxSBASSats::EGNOS),
       5, uint(GPSSettings_UbxSBASSats::MSAS),
       6, uint(GPSSettings_UbxSBASSats::GAGAN),
       7, uint(GPSSettings_UbxSBASSats::SDCM),

       0        // eod
};

void GPSSettings_UbxSBASSats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSSettings_UbxSBASSats::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSSettings_UbxSBASSats.data,
    qt_meta_data_GPSSettings_UbxSBASSats,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSSettings_UbxSBASSats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSSettings_UbxSBASSats::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSSettings_UbxSBASSats.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSSettings_UbxSBASSats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSSettings_UbxGNSSMode_t {
    QByteArrayData data[10];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSSettings_UbxGNSSMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSSettings_UbxGNSSMode_t qt_meta_stringdata_GPSSettings_UbxGNSSMode = {
    {
QT_MOC_LITERAL(0, 0, 23), // "GPSSettings_UbxGNSSMode"
QT_MOC_LITERAL(1, 24, 4), // "Enum"
QT_MOC_LITERAL(2, 29, 7), // "Default"
QT_MOC_LITERAL(3, 37, 3), // "GPS"
QT_MOC_LITERAL(4, 41, 7), // "GLONASS"
QT_MOC_LITERAL(5, 49, 10), // "GPSGLONASS"
QT_MOC_LITERAL(6, 60, 9), // "GPSBeiDou"
QT_MOC_LITERAL(7, 70, 13), // "GLONASSBeiDou"
QT_MOC_LITERAL(8, 84, 10), // "GPSGALILEO"
QT_MOC_LITERAL(9, 95, 17) // "GPSGLONASSGALILEO"

    },
    "GPSSettings_UbxGNSSMode\0Enum\0Default\0"
    "GPS\0GLONASS\0GPSGLONASS\0GPSBeiDou\0"
    "GLONASSBeiDou\0GPSGALILEO\0GPSGLONASSGALILEO"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSSettings_UbxGNSSMode[] = {

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
       2, uint(GPSSettings_UbxGNSSMode::Default),
       3, uint(GPSSettings_UbxGNSSMode::GPS),
       4, uint(GPSSettings_UbxGNSSMode::GLONASS),
       5, uint(GPSSettings_UbxGNSSMode::GPSGLONASS),
       6, uint(GPSSettings_UbxGNSSMode::GPSBeiDou),
       7, uint(GPSSettings_UbxGNSSMode::GLONASSBeiDou),
       8, uint(GPSSettings_UbxGNSSMode::GPSGALILEO),
       9, uint(GPSSettings_UbxGNSSMode::GPSGLONASSGALILEO),

       0        // eod
};

void GPSSettings_UbxGNSSMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSSettings_UbxGNSSMode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSSettings_UbxGNSSMode.data,
    qt_meta_data_GPSSettings_UbxGNSSMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSSettings_UbxGNSSMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSSettings_UbxGNSSMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSSettings_UbxGNSSMode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSSettings_UbxGNSSMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSSettings_UbxAssistNowAutonomous_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSSettings_UbxAssistNowAutonomous_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSSettings_UbxAssistNowAutonomous_t qt_meta_stringdata_GPSSettings_UbxAssistNowAutonomous = {
    {
QT_MOC_LITERAL(0, 0, 34), // "GPSSettings_UbxAssistNowAuton..."
QT_MOC_LITERAL(1, 35, 4), // "Enum"
QT_MOC_LITERAL(2, 40, 5), // "False"
QT_MOC_LITERAL(3, 46, 4) // "True"

    },
    "GPSSettings_UbxAssistNowAutonomous\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSSettings_UbxAssistNowAutonomous[] = {

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
       2, uint(GPSSettings_UbxAssistNowAutonomous::False),
       3, uint(GPSSettings_UbxAssistNowAutonomous::True),

       0        // eod
};

void GPSSettings_UbxAssistNowAutonomous::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSSettings_UbxAssistNowAutonomous::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSSettings_UbxAssistNowAutonomous.data,
    qt_meta_data_GPSSettings_UbxAssistNowAutonomous,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSSettings_UbxAssistNowAutonomous::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSSettings_UbxAssistNowAutonomous::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSSettings_UbxAssistNowAutonomous.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSSettings_UbxAssistNowAutonomous::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSSettings_t {
    QByteArrayData data[77];
    char stringdata0[1397];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSSettings_t qt_meta_stringdata_GPSSettings = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GPSSettings"
QT_MOC_LITERAL(1, 12, 14), // "maxPDOPChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "value"
QT_MOC_LITERAL(4, 34, 14), // "MaxPDOPChanged"
QT_MOC_LITERAL(5, 49, 19), // "dataProtocolChanged"
QT_MOC_LITERAL(6, 69, 30), // "GPSSettings_DataProtocol::Enum"
QT_MOC_LITERAL(7, 100, 19), // "DataProtocolChanged"
QT_MOC_LITERAL(8, 120, 20), // "minSatellitesChanged"
QT_MOC_LITERAL(9, 141, 20), // "MinSatellitesChanged"
QT_MOC_LITERAL(10, 162, 20), // "ubxAutoConfigChanged"
QT_MOC_LITERAL(11, 183, 31), // "GPSSettings_UbxAutoConfig::Enum"
QT_MOC_LITERAL(12, 215, 20), // "UbxAutoConfigChanged"
QT_MOC_LITERAL(13, 236, 14), // "ubxRateChanged"
QT_MOC_LITERAL(14, 251, 14), // "UbxRateChanged"
QT_MOC_LITERAL(15, 266, 22), // "ubxDynamicModelChanged"
QT_MOC_LITERAL(16, 289, 33), // "GPSSettings_UbxDynamicModel::..."
QT_MOC_LITERAL(17, 323, 22), // "UbxDynamicModelChanged"
QT_MOC_LITERAL(18, 346, 18), // "ubxSBASModeChanged"
QT_MOC_LITERAL(19, 365, 29), // "GPSSettings_UbxSBASMode::Enum"
QT_MOC_LITERAL(20, 395, 18), // "UbxSBASModeChanged"
QT_MOC_LITERAL(21, 414, 26), // "ubxSBASChannelsUsedChanged"
QT_MOC_LITERAL(22, 441, 26), // "UbxSBASChannelsUsedChanged"
QT_MOC_LITERAL(23, 468, 18), // "ubxSBASSatsChanged"
QT_MOC_LITERAL(24, 487, 29), // "GPSSettings_UbxSBASSats::Enum"
QT_MOC_LITERAL(25, 517, 18), // "UbxSBASSatsChanged"
QT_MOC_LITERAL(26, 536, 18), // "ubxGNSSModeChanged"
QT_MOC_LITERAL(27, 555, 29), // "GPSSettings_UbxGNSSMode::Enum"
QT_MOC_LITERAL(28, 585, 18), // "UbxGNSSModeChanged"
QT_MOC_LITERAL(29, 604, 29), // "ubxAssistNowAutonomousChanged"
QT_MOC_LITERAL(30, 634, 40), // "GPSSettings_UbxAssistNowAuton..."
QT_MOC_LITERAL(31, 675, 29), // "UbxAssistNowAutonomousChanged"
QT_MOC_LITERAL(32, 705, 10), // "setMaxPDOP"
QT_MOC_LITERAL(33, 716, 15), // "setDataProtocol"
QT_MOC_LITERAL(34, 732, 16), // "setMinSatellites"
QT_MOC_LITERAL(35, 749, 16), // "setUbxAutoConfig"
QT_MOC_LITERAL(36, 766, 10), // "setUbxRate"
QT_MOC_LITERAL(37, 777, 18), // "setUbxDynamicModel"
QT_MOC_LITERAL(38, 796, 14), // "setUbxSBASMode"
QT_MOC_LITERAL(39, 811, 22), // "setUbxSBASChannelsUsed"
QT_MOC_LITERAL(40, 834, 14), // "setUbxSBASSats"
QT_MOC_LITERAL(41, 849, 14), // "setUbxGNSSMode"
QT_MOC_LITERAL(42, 864, 25), // "setUbxAssistNowAutonomous"
QT_MOC_LITERAL(43, 890, 17), // "emitNotifications"
QT_MOC_LITERAL(44, 908, 10), // "getMaxPDOP"
QT_MOC_LITERAL(45, 919, 15), // "getDataProtocol"
QT_MOC_LITERAL(46, 935, 16), // "getMinSatellites"
QT_MOC_LITERAL(47, 952, 16), // "getUbxAutoConfig"
QT_MOC_LITERAL(48, 969, 10), // "getUbxRate"
QT_MOC_LITERAL(49, 980, 18), // "getUbxDynamicModel"
QT_MOC_LITERAL(50, 999, 14), // "getUbxSBASMode"
QT_MOC_LITERAL(51, 1014, 22), // "getUbxSBASChannelsUsed"
QT_MOC_LITERAL(52, 1037, 14), // "getUbxSBASSats"
QT_MOC_LITERAL(53, 1052, 14), // "getUbxGNSSMode"
QT_MOC_LITERAL(54, 1067, 25), // "getUbxAssistNowAutonomous"
QT_MOC_LITERAL(55, 1093, 7), // "maxPDOP"
QT_MOC_LITERAL(56, 1101, 12), // "dataProtocol"
QT_MOC_LITERAL(57, 1114, 13), // "minSatellites"
QT_MOC_LITERAL(58, 1128, 13), // "ubxAutoConfig"
QT_MOC_LITERAL(59, 1142, 7), // "ubxRate"
QT_MOC_LITERAL(60, 1150, 15), // "ubxDynamicModel"
QT_MOC_LITERAL(61, 1166, 11), // "ubxSBASMode"
QT_MOC_LITERAL(62, 1178, 19), // "ubxSBASChannelsUsed"
QT_MOC_LITERAL(63, 1198, 11), // "ubxSBASSats"
QT_MOC_LITERAL(64, 1210, 11), // "ubxGNSSMode"
QT_MOC_LITERAL(65, 1222, 22), // "ubxAssistNowAutonomous"
QT_MOC_LITERAL(66, 1245, 7), // "MaxPDOP"
QT_MOC_LITERAL(67, 1253, 12), // "DataProtocol"
QT_MOC_LITERAL(68, 1266, 13), // "MinSatellites"
QT_MOC_LITERAL(69, 1280, 13), // "UbxAutoConfig"
QT_MOC_LITERAL(70, 1294, 7), // "UbxRate"
QT_MOC_LITERAL(71, 1302, 15), // "UbxDynamicModel"
QT_MOC_LITERAL(72, 1318, 11), // "UbxSBASMode"
QT_MOC_LITERAL(73, 1330, 19), // "UbxSBASChannelsUsed"
QT_MOC_LITERAL(74, 1350, 11), // "UbxSBASSats"
QT_MOC_LITERAL(75, 1362, 11), // "UbxGNSSMode"
QT_MOC_LITERAL(76, 1374, 22) // "UbxAssistNowAutonomous"

    },
    "GPSSettings\0maxPDOPChanged\0\0value\0"
    "MaxPDOPChanged\0dataProtocolChanged\0"
    "GPSSettings_DataProtocol::Enum\0"
    "DataProtocolChanged\0minSatellitesChanged\0"
    "MinSatellitesChanged\0ubxAutoConfigChanged\0"
    "GPSSettings_UbxAutoConfig::Enum\0"
    "UbxAutoConfigChanged\0ubxRateChanged\0"
    "UbxRateChanged\0ubxDynamicModelChanged\0"
    "GPSSettings_UbxDynamicModel::Enum\0"
    "UbxDynamicModelChanged\0ubxSBASModeChanged\0"
    "GPSSettings_UbxSBASMode::Enum\0"
    "UbxSBASModeChanged\0ubxSBASChannelsUsedChanged\0"
    "UbxSBASChannelsUsedChanged\0"
    "ubxSBASSatsChanged\0GPSSettings_UbxSBASSats::Enum\0"
    "UbxSBASSatsChanged\0ubxGNSSModeChanged\0"
    "GPSSettings_UbxGNSSMode::Enum\0"
    "UbxGNSSModeChanged\0ubxAssistNowAutonomousChanged\0"
    "GPSSettings_UbxAssistNowAutonomous::Enum\0"
    "UbxAssistNowAutonomousChanged\0setMaxPDOP\0"
    "setDataProtocol\0setMinSatellites\0"
    "setUbxAutoConfig\0setUbxRate\0"
    "setUbxDynamicModel\0setUbxSBASMode\0"
    "setUbxSBASChannelsUsed\0setUbxSBASSats\0"
    "setUbxGNSSMode\0setUbxAssistNowAutonomous\0"
    "emitNotifications\0getMaxPDOP\0"
    "getDataProtocol\0getMinSatellites\0"
    "getUbxAutoConfig\0getUbxRate\0"
    "getUbxDynamicModel\0getUbxSBASMode\0"
    "getUbxSBASChannelsUsed\0getUbxSBASSats\0"
    "getUbxGNSSMode\0getUbxAssistNowAutonomous\0"
    "maxPDOP\0dataProtocol\0minSatellites\0"
    "ubxAutoConfig\0ubxRate\0ubxDynamicModel\0"
    "ubxSBASMode\0ubxSBASChannelsUsed\0"
    "ubxSBASSats\0ubxGNSSMode\0ubxAssistNowAutonomous\0"
    "MaxPDOP\0DataProtocol\0MinSatellites\0"
    "UbxAutoConfig\0UbxRate\0UbxDynamicModel\0"
    "UbxSBASMode\0UbxSBASChannelsUsed\0"
    "UbxSBASSats\0UbxGNSSMode\0UbxAssistNowAutonomous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
      22,  430, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  289,    2, 0x06 /* Public */,
       4,    1,  292,    2, 0x06 /* Public */,
       5,    1,  295,    2, 0x06 /* Public */,
       7,    1,  298,    2, 0x06 /* Public */,
       8,    1,  301,    2, 0x06 /* Public */,
       9,    1,  304,    2, 0x06 /* Public */,
      10,    1,  307,    2, 0x06 /* Public */,
      12,    1,  310,    2, 0x06 /* Public */,
      13,    1,  313,    2, 0x06 /* Public */,
      14,    1,  316,    2, 0x06 /* Public */,
      15,    1,  319,    2, 0x06 /* Public */,
      17,    1,  322,    2, 0x06 /* Public */,
      18,    1,  325,    2, 0x06 /* Public */,
      20,    1,  328,    2, 0x06 /* Public */,
      21,    1,  331,    2, 0x06 /* Public */,
      22,    1,  334,    2, 0x06 /* Public */,
      23,    1,  337,    2, 0x06 /* Public */,
      25,    1,  340,    2, 0x06 /* Public */,
      26,    1,  343,    2, 0x06 /* Public */,
      28,    1,  346,    2, 0x06 /* Public */,
      29,    1,  349,    2, 0x06 /* Public */,
      31,    1,  352,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      32,    1,  355,    2, 0x0a /* Public */,
      33,    1,  358,    2, 0x0a /* Public */,
      33,    1,  361,    2, 0x0a /* Public */,
      34,    1,  364,    2, 0x0a /* Public */,
      34,    1,  367,    2, 0x0a /* Public */,
      35,    1,  370,    2, 0x0a /* Public */,
      35,    1,  373,    2, 0x0a /* Public */,
      36,    1,  376,    2, 0x0a /* Public */,
      36,    1,  379,    2, 0x0a /* Public */,
      37,    1,  382,    2, 0x0a /* Public */,
      37,    1,  385,    2, 0x0a /* Public */,
      38,    1,  388,    2, 0x0a /* Public */,
      38,    1,  391,    2, 0x0a /* Public */,
      39,    1,  394,    2, 0x0a /* Public */,
      39,    1,  397,    2, 0x0a /* Public */,
      40,    1,  400,    2, 0x0a /* Public */,
      40,    1,  403,    2, 0x0a /* Public */,
      41,    1,  406,    2, 0x0a /* Public */,
      41,    1,  409,    2, 0x0a /* Public */,
      42,    1,  412,    2, 0x0a /* Public */,
      42,    1,  415,    2, 0x0a /* Public */,
      43,    0,  418,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      44,    0,  419,    2, 0x02 /* Public */,
      45,    0,  420,    2, 0x02 /* Public */,
      46,    0,  421,    2, 0x02 /* Public */,
      47,    0,  422,    2, 0x02 /* Public */,
      48,    0,  423,    2, 0x02 /* Public */,
      49,    0,  424,    2, 0x02 /* Public */,
      50,    0,  425,    2, 0x02 /* Public */,
      51,    0,  426,    2, 0x02 /* Public */,
      52,    0,  427,    2, 0x02 /* Public */,
      53,    0,  428,    2, 0x02 /* Public */,
      54,    0,  429,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 6,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 11,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, 0x80000000 | 16,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 19,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 24,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 27,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 30,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 6,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 11,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, 0x80000000 | 16,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 19,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 24,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 27,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 30,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
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

 // properties: name, type, flags
      55, QMetaType::Float, 0x00495103,
      56, 0x80000000 | 6, 0x0049510b,
      57, QMetaType::UShort, 0x00495103,
      58, 0x80000000 | 11, 0x0049510b,
      59, QMetaType::Short, 0x00495103,
      60, 0x80000000 | 16, 0x0049510b,
      61, 0x80000000 | 19, 0x0049510b,
      62, QMetaType::UShort, 0x00495103,
      63, 0x80000000 | 24, 0x0049510b,
      64, 0x80000000 | 27, 0x0049510b,
      65, 0x80000000 | 30, 0x0049510b,
      66, QMetaType::Float, 0x00495103,
      67, QMetaType::UChar, 0x00495103,
      68, QMetaType::UChar, 0x00495103,
      69, QMetaType::UChar, 0x00495103,
      70, QMetaType::SChar, 0x00495103,
      71, QMetaType::UChar, 0x00495103,
      72, QMetaType::UChar, 0x00495103,
      73, QMetaType::UChar, 0x00495103,
      74, QMetaType::UChar, 0x00495103,
      75, QMetaType::UChar, 0x00495103,
      76, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       8,
      10,
      12,
      14,
      16,
      18,
      20,
       1,
       3,
       5,
       7,
       9,
      11,
      13,
      15,
      17,
      19,
      21,

       0        // eod
};

void GPSSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPSSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->maxPDOPChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->MaxPDOPChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->dataProtocolChanged((*reinterpret_cast< const GPSSettings_DataProtocol::Enum(*)>(_a[1]))); break;
        case 3: _t->DataProtocolChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->minSatellitesChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 5: _t->MinSatellitesChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->ubxAutoConfigChanged((*reinterpret_cast< const GPSSettings_UbxAutoConfig::Enum(*)>(_a[1]))); break;
        case 7: _t->UbxAutoConfigChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->ubxRateChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 9: _t->UbxRateChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 10: _t->ubxDynamicModelChanged((*reinterpret_cast< const GPSSettings_UbxDynamicModel::Enum(*)>(_a[1]))); break;
        case 11: _t->UbxDynamicModelChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->ubxSBASModeChanged((*reinterpret_cast< const GPSSettings_UbxSBASMode::Enum(*)>(_a[1]))); break;
        case 13: _t->UbxSBASModeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 14: _t->ubxSBASChannelsUsedChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 15: _t->UbxSBASChannelsUsedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 16: _t->ubxSBASSatsChanged((*reinterpret_cast< const GPSSettings_UbxSBASSats::Enum(*)>(_a[1]))); break;
        case 17: _t->UbxSBASSatsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->ubxGNSSModeChanged((*reinterpret_cast< const GPSSettings_UbxGNSSMode::Enum(*)>(_a[1]))); break;
        case 19: _t->UbxGNSSModeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->ubxAssistNowAutonomousChanged((*reinterpret_cast< const GPSSettings_UbxAssistNowAutonomous::Enum(*)>(_a[1]))); break;
        case 21: _t->UbxAssistNowAutonomousChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->setMaxPDOP((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->setDataProtocol((*reinterpret_cast< const GPSSettings_DataProtocol::Enum(*)>(_a[1]))); break;
        case 24: _t->setDataProtocol((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 25: _t->setMinSatellites((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 26: _t->setMinSatellites((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 27: _t->setUbxAutoConfig((*reinterpret_cast< const GPSSettings_UbxAutoConfig::Enum(*)>(_a[1]))); break;
        case 28: _t->setUbxAutoConfig((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 29: _t->setUbxRate((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 30: _t->setUbxRate((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 31: _t->setUbxDynamicModel((*reinterpret_cast< const GPSSettings_UbxDynamicModel::Enum(*)>(_a[1]))); break;
        case 32: _t->setUbxDynamicModel((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 33: _t->setUbxSBASMode((*reinterpret_cast< const GPSSettings_UbxSBASMode::Enum(*)>(_a[1]))); break;
        case 34: _t->setUbxSBASMode((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 35: _t->setUbxSBASChannelsUsed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 36: _t->setUbxSBASChannelsUsed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 37: _t->setUbxSBASSats((*reinterpret_cast< const GPSSettings_UbxSBASSats::Enum(*)>(_a[1]))); break;
        case 38: _t->setUbxSBASSats((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 39: _t->setUbxGNSSMode((*reinterpret_cast< const GPSSettings_UbxGNSSMode::Enum(*)>(_a[1]))); break;
        case 40: _t->setUbxGNSSMode((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 41: _t->setUbxAssistNowAutonomous((*reinterpret_cast< const GPSSettings_UbxAssistNowAutonomous::Enum(*)>(_a[1]))); break;
        case 42: _t->setUbxAssistNowAutonomous((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 43: _t->emitNotifications(); break;
        case 44: { float _r = _t->getMaxPDOP();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 45: { quint8 _r = _t->getDataProtocol();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 46: { quint8 _r = _t->getMinSatellites();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 47: { quint8 _r = _t->getUbxAutoConfig();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 48: { qint8 _r = _t->getUbxRate();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 49: { quint8 _r = _t->getUbxDynamicModel();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 50: { quint8 _r = _t->getUbxSBASMode();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 51: { quint8 _r = _t->getUbxSBASChannelsUsed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 52: { quint8 _r = _t->getUbxSBASSats();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 53: { quint8 _r = _t->getUbxGNSSMode();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 54: { quint8 _r = _t->getUbxAssistNowAutonomous();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GPSSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::maxPDOPChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::MaxPDOPChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(const GPSSettings_DataProtocol::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::dataProtocolChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::DataProtocolChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::minSatellitesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::MinSatellitesChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(const GPSSettings_UbxAutoConfig::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::ubxAutoConfigChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::UbxAutoConfigChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::ubxRateChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::UbxRateChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(const GPSSettings_UbxDynamicModel::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::ubxDynamicModelChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::UbxDynamicModelChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(const GPSSettings_UbxSBASMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::ubxSBASModeChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::UbxSBASModeChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::ubxSBASChannelsUsedChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::UbxSBASChannelsUsedChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(const GPSSettings_UbxSBASSats::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::ubxSBASSatsChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::UbxSBASSatsChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(const GPSSettings_UbxGNSSMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::ubxGNSSModeChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::UbxGNSSModeChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(const GPSSettings_UbxAssistNowAutonomous::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::ubxAssistNowAutonomousChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (GPSSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSSettings::UbxAssistNowAutonomousChanged)) {
                *result = 21;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GPSSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->maxPDOP(); break;
        case 1: *reinterpret_cast< GPSSettings_DataProtocol::Enum*>(_v) = _t->dataProtocol(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->minSatellites(); break;
        case 3: *reinterpret_cast< GPSSettings_UbxAutoConfig::Enum*>(_v) = _t->ubxAutoConfig(); break;
        case 4: *reinterpret_cast< qint16*>(_v) = _t->ubxRate(); break;
        case 5: *reinterpret_cast< GPSSettings_UbxDynamicModel::Enum*>(_v) = _t->ubxDynamicModel(); break;
        case 6: *reinterpret_cast< GPSSettings_UbxSBASMode::Enum*>(_v) = _t->ubxSBASMode(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->ubxSBASChannelsUsed(); break;
        case 8: *reinterpret_cast< GPSSettings_UbxSBASSats::Enum*>(_v) = _t->ubxSBASSats(); break;
        case 9: *reinterpret_cast< GPSSettings_UbxGNSSMode::Enum*>(_v) = _t->ubxGNSSMode(); break;
        case 10: *reinterpret_cast< GPSSettings_UbxAssistNowAutonomous::Enum*>(_v) = _t->ubxAssistNowAutonomous(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getMaxPDOP(); break;
        case 12: *reinterpret_cast< quint8*>(_v) = _t->getDataProtocol(); break;
        case 13: *reinterpret_cast< quint8*>(_v) = _t->getMinSatellites(); break;
        case 14: *reinterpret_cast< quint8*>(_v) = _t->getUbxAutoConfig(); break;
        case 15: *reinterpret_cast< qint8*>(_v) = _t->getUbxRate(); break;
        case 16: *reinterpret_cast< quint8*>(_v) = _t->getUbxDynamicModel(); break;
        case 17: *reinterpret_cast< quint8*>(_v) = _t->getUbxSBASMode(); break;
        case 18: *reinterpret_cast< quint8*>(_v) = _t->getUbxSBASChannelsUsed(); break;
        case 19: *reinterpret_cast< quint8*>(_v) = _t->getUbxSBASSats(); break;
        case 20: *reinterpret_cast< quint8*>(_v) = _t->getUbxGNSSMode(); break;
        case 21: *reinterpret_cast< quint8*>(_v) = _t->getUbxAssistNowAutonomous(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GPSSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMaxPDOP(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setDataProtocol(*reinterpret_cast< GPSSettings_DataProtocol::Enum*>(_v)); break;
        case 2: _t->setMinSatellites(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setUbxAutoConfig(*reinterpret_cast< GPSSettings_UbxAutoConfig::Enum*>(_v)); break;
        case 4: _t->setUbxRate(*reinterpret_cast< qint16*>(_v)); break;
        case 5: _t->setUbxDynamicModel(*reinterpret_cast< GPSSettings_UbxDynamicModel::Enum*>(_v)); break;
        case 6: _t->setUbxSBASMode(*reinterpret_cast< GPSSettings_UbxSBASMode::Enum*>(_v)); break;
        case 7: _t->setUbxSBASChannelsUsed(*reinterpret_cast< quint16*>(_v)); break;
        case 8: _t->setUbxSBASSats(*reinterpret_cast< GPSSettings_UbxSBASSats::Enum*>(_v)); break;
        case 9: _t->setUbxGNSSMode(*reinterpret_cast< GPSSettings_UbxGNSSMode::Enum*>(_v)); break;
        case 10: _t->setUbxAssistNowAutonomous(*reinterpret_cast< GPSSettings_UbxAssistNowAutonomous::Enum*>(_v)); break;
        case 11: _t->setMaxPDOP(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setDataProtocol(*reinterpret_cast< quint8*>(_v)); break;
        case 13: _t->setMinSatellites(*reinterpret_cast< quint8*>(_v)); break;
        case 14: _t->setUbxAutoConfig(*reinterpret_cast< quint8*>(_v)); break;
        case 15: _t->setUbxRate(*reinterpret_cast< qint8*>(_v)); break;
        case 16: _t->setUbxDynamicModel(*reinterpret_cast< quint8*>(_v)); break;
        case 17: _t->setUbxSBASMode(*reinterpret_cast< quint8*>(_v)); break;
        case 18: _t->setUbxSBASChannelsUsed(*reinterpret_cast< quint8*>(_v)); break;
        case 19: _t->setUbxSBASSats(*reinterpret_cast< quint8*>(_v)); break;
        case 20: _t->setUbxGNSSMode(*reinterpret_cast< quint8*>(_v)); break;
        case 21: _t->setUbxAssistNowAutonomous(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_GPSSettings[] = {
        &GPSSettings_DataProtocol::staticMetaObject,
    &GPSSettings_UbxAutoConfig::staticMetaObject,
    &GPSSettings_UbxDynamicModel::staticMetaObject,
    &GPSSettings_UbxSBASMode::staticMetaObject,
    &GPSSettings_UbxSBASSats::staticMetaObject,
    &GPSSettings_UbxGNSSMode::staticMetaObject,
    &GPSSettings_UbxAssistNowAutonomous::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject GPSSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_GPSSettings.data,
    qt_meta_data_GPSSettings,
    qt_static_metacall,
    qt_meta_extradata_GPSSettings,
    nullptr
} };


const QMetaObject *GPSSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int GPSSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 55;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 22;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GPSSettings::maxPDOPChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GPSSettings::MaxPDOPChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GPSSettings::dataProtocolChanged(const GPSSettings_DataProtocol::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GPSSettings::DataProtocolChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GPSSettings::minSatellitesChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GPSSettings::MinSatellitesChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GPSSettings::ubxAutoConfigChanged(const GPSSettings_UbxAutoConfig::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GPSSettings::UbxAutoConfigChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GPSSettings::ubxRateChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GPSSettings::UbxRateChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GPSSettings::ubxDynamicModelChanged(const GPSSettings_UbxDynamicModel::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GPSSettings::UbxDynamicModelChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GPSSettings::ubxSBASModeChanged(const GPSSettings_UbxSBASMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GPSSettings::UbxSBASModeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GPSSettings::ubxSBASChannelsUsedChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GPSSettings::UbxSBASChannelsUsedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GPSSettings::ubxSBASSatsChanged(const GPSSettings_UbxSBASSats::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GPSSettings::UbxSBASSatsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void GPSSettings::ubxGNSSModeChanged(const GPSSettings_UbxGNSSMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void GPSSettings::UbxGNSSModeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void GPSSettings::ubxAssistNowAutonomousChanged(const GPSSettings_UbxAssistNowAutonomous::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void GPSSettings::UbxAssistNowAutonomousChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
