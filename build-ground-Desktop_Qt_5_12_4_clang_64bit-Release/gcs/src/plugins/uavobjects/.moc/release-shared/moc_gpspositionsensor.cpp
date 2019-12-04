/****************************************************************************
** Meta object code from reading C++ file 'gpspositionsensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gpspositionsensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpspositionsensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPSPositionSensorConstants_t {
    QByteArrayData data[6];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSPositionSensorConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSPositionSensorConstants_t qt_meta_stringdata_GPSPositionSensorConstants = {
    {
QT_MOC_LITERAL(0, 0, 26), // "GPSPositionSensorConstants"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 11), // "StatusCount"
QT_MOC_LITERAL(3, 44, 15), // "SensorTypeCount"
QT_MOC_LITERAL(4, 60, 21), // "AutoConfigStatusCount"
QT_MOC_LITERAL(5, 82, 13) // "BaudRateCount"

    },
    "GPSPositionSensorConstants\0Enum\0"
    "StatusCount\0SensorTypeCount\0"
    "AutoConfigStatusCount\0BaudRateCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSPositionSensorConstants[] = {

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
       2, uint(GPSPositionSensorConstants::StatusCount),
       3, uint(GPSPositionSensorConstants::SensorTypeCount),
       4, uint(GPSPositionSensorConstants::AutoConfigStatusCount),
       5, uint(GPSPositionSensorConstants::BaudRateCount),

       0        // eod
};

void GPSPositionSensorConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSPositionSensorConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSPositionSensorConstants.data,
    qt_meta_data_GPSPositionSensorConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSPositionSensorConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSPositionSensorConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSPositionSensorConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSPositionSensorConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSPositionSensor_Status_t {
    QByteArrayData data[7];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSPositionSensor_Status_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSPositionSensor_Status_t qt_meta_stringdata_GPSPositionSensor_Status = {
    {
QT_MOC_LITERAL(0, 0, 24), // "GPSPositionSensor_Status"
QT_MOC_LITERAL(1, 25, 4), // "Enum"
QT_MOC_LITERAL(2, 30, 5), // "NoGPS"
QT_MOC_LITERAL(3, 36, 5), // "NoFix"
QT_MOC_LITERAL(4, 42, 5), // "Fix2D"
QT_MOC_LITERAL(5, 48, 5), // "Fix3D"
QT_MOC_LITERAL(6, 54, 10) // "Fix3DDGNSS"

    },
    "GPSPositionSensor_Status\0Enum\0NoGPS\0"
    "NoFix\0Fix2D\0Fix3D\0Fix3DDGNSS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSPositionSensor_Status[] = {

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
       2, uint(GPSPositionSensor_Status::NoGPS),
       3, uint(GPSPositionSensor_Status::NoFix),
       4, uint(GPSPositionSensor_Status::Fix2D),
       5, uint(GPSPositionSensor_Status::Fix3D),
       6, uint(GPSPositionSensor_Status::Fix3DDGNSS),

       0        // eod
};

void GPSPositionSensor_Status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSPositionSensor_Status::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSPositionSensor_Status.data,
    qt_meta_data_GPSPositionSensor_Status,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSPositionSensor_Status::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSPositionSensor_Status::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSPositionSensor_Status.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSPositionSensor_Status::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSPositionSensor_SensorType_t {
    QByteArrayData data[8];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSPositionSensor_SensorType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSPositionSensor_SensorType_t qt_meta_stringdata_GPSPositionSensor_SensorType = {
    {
QT_MOC_LITERAL(0, 0, 28), // "GPSPositionSensor_SensorType"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 7), // "Unknown"
QT_MOC_LITERAL(3, 42, 4), // "NMEA"
QT_MOC_LITERAL(4, 47, 3), // "UBX"
QT_MOC_LITERAL(5, 51, 4), // "UBX7"
QT_MOC_LITERAL(6, 56, 4), // "UBX8"
QT_MOC_LITERAL(7, 61, 3) // "DJI"

    },
    "GPSPositionSensor_SensorType\0Enum\0"
    "Unknown\0NMEA\0UBX\0UBX7\0UBX8\0DJI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSPositionSensor_SensorType[] = {

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
       2, uint(GPSPositionSensor_SensorType::Unknown),
       3, uint(GPSPositionSensor_SensorType::NMEA),
       4, uint(GPSPositionSensor_SensorType::UBX),
       5, uint(GPSPositionSensor_SensorType::UBX7),
       6, uint(GPSPositionSensor_SensorType::UBX8),
       7, uint(GPSPositionSensor_SensorType::DJI),

       0        // eod
};

void GPSPositionSensor_SensorType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSPositionSensor_SensorType::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSPositionSensor_SensorType.data,
    qt_meta_data_GPSPositionSensor_SensorType,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSPositionSensor_SensorType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSPositionSensor_SensorType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSPositionSensor_SensorType.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSPositionSensor_SensorType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSPositionSensor_AutoConfigStatus_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSPositionSensor_AutoConfigStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSPositionSensor_AutoConfigStatus_t qt_meta_stringdata_GPSPositionSensor_AutoConfigStatus = {
    {
QT_MOC_LITERAL(0, 0, 34), // "GPSPositionSensor_AutoConfigS..."
QT_MOC_LITERAL(1, 35, 4), // "Enum"
QT_MOC_LITERAL(2, 40, 8), // "Disabled"
QT_MOC_LITERAL(3, 49, 7), // "Running"
QT_MOC_LITERAL(4, 57, 4), // "Done"
QT_MOC_LITERAL(5, 62, 5) // "Error"

    },
    "GPSPositionSensor_AutoConfigStatus\0"
    "Enum\0Disabled\0Running\0Done\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSPositionSensor_AutoConfigStatus[] = {

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
       2, uint(GPSPositionSensor_AutoConfigStatus::Disabled),
       3, uint(GPSPositionSensor_AutoConfigStatus::Running),
       4, uint(GPSPositionSensor_AutoConfigStatus::Done),
       5, uint(GPSPositionSensor_AutoConfigStatus::Error),

       0        // eod
};

void GPSPositionSensor_AutoConfigStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSPositionSensor_AutoConfigStatus::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSPositionSensor_AutoConfigStatus.data,
    qt_meta_data_GPSPositionSensor_AutoConfigStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSPositionSensor_AutoConfigStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSPositionSensor_AutoConfigStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSPositionSensor_AutoConfigStatus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSPositionSensor_AutoConfigStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSPositionSensor_BaudRate_t {
    QByteArrayData data[11];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSPositionSensor_BaudRate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSPositionSensor_BaudRate_t qt_meta_stringdata_GPSPositionSensor_BaudRate = {
    {
QT_MOC_LITERAL(0, 0, 26), // "GPSPositionSensor_BaudRate"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 6), // "E_2400"
QT_MOC_LITERAL(3, 39, 6), // "E_4800"
QT_MOC_LITERAL(4, 46, 6), // "E_9600"
QT_MOC_LITERAL(5, 53, 7), // "E_19200"
QT_MOC_LITERAL(6, 61, 7), // "E_38400"
QT_MOC_LITERAL(7, 69, 7), // "E_57600"
QT_MOC_LITERAL(8, 77, 8), // "E_115200"
QT_MOC_LITERAL(9, 86, 8), // "E_230400"
QT_MOC_LITERAL(10, 95, 7) // "Unknown"

    },
    "GPSPositionSensor_BaudRate\0Enum\0E_2400\0"
    "E_4800\0E_9600\0E_19200\0E_38400\0E_57600\0"
    "E_115200\0E_230400\0Unknown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSPositionSensor_BaudRate[] = {

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
       2, uint(GPSPositionSensor_BaudRate::E_2400),
       3, uint(GPSPositionSensor_BaudRate::E_4800),
       4, uint(GPSPositionSensor_BaudRate::E_9600),
       5, uint(GPSPositionSensor_BaudRate::E_19200),
       6, uint(GPSPositionSensor_BaudRate::E_38400),
       7, uint(GPSPositionSensor_BaudRate::E_57600),
       8, uint(GPSPositionSensor_BaudRate::E_115200),
       9, uint(GPSPositionSensor_BaudRate::E_230400),
      10, uint(GPSPositionSensor_BaudRate::Unknown),

       0        // eod
};

void GPSPositionSensor_BaudRate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSPositionSensor_BaudRate::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSPositionSensor_BaudRate.data,
    qt_meta_data_GPSPositionSensor_BaudRate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSPositionSensor_BaudRate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSPositionSensor_BaudRate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSPositionSensor_BaudRate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSPositionSensor_BaudRate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSPositionSensor_t {
    QByteArrayData data[92];
    char stringdata0[1267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSPositionSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSPositionSensor_t qt_meta_stringdata_GPSPositionSensor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GPSPositionSensor"
QT_MOC_LITERAL(1, 18, 15), // "latitudeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "value"
QT_MOC_LITERAL(4, 41, 15), // "LatitudeChanged"
QT_MOC_LITERAL(5, 57, 16), // "longitudeChanged"
QT_MOC_LITERAL(6, 74, 16), // "LongitudeChanged"
QT_MOC_LITERAL(7, 91, 15), // "altitudeChanged"
QT_MOC_LITERAL(8, 107, 15), // "AltitudeChanged"
QT_MOC_LITERAL(9, 123, 22), // "geoidSeparationChanged"
QT_MOC_LITERAL(10, 146, 22), // "GeoidSeparationChanged"
QT_MOC_LITERAL(11, 169, 14), // "headingChanged"
QT_MOC_LITERAL(12, 184, 14), // "HeadingChanged"
QT_MOC_LITERAL(13, 199, 18), // "groundspeedChanged"
QT_MOC_LITERAL(14, 218, 18), // "GroundspeedChanged"
QT_MOC_LITERAL(15, 237, 11), // "pdopChanged"
QT_MOC_LITERAL(16, 249, 11), // "PDOPChanged"
QT_MOC_LITERAL(17, 261, 11), // "hdopChanged"
QT_MOC_LITERAL(18, 273, 11), // "HDOPChanged"
QT_MOC_LITERAL(19, 285, 11), // "vdopChanged"
QT_MOC_LITERAL(20, 297, 11), // "VDOPChanged"
QT_MOC_LITERAL(21, 309, 13), // "statusChanged"
QT_MOC_LITERAL(22, 323, 30), // "GPSPositionSensor_Status::Enum"
QT_MOC_LITERAL(23, 354, 13), // "StatusChanged"
QT_MOC_LITERAL(24, 368, 17), // "satellitesChanged"
QT_MOC_LITERAL(25, 386, 17), // "SatellitesChanged"
QT_MOC_LITERAL(26, 404, 17), // "sensorTypeChanged"
QT_MOC_LITERAL(27, 422, 34), // "GPSPositionSensor_SensorType:..."
QT_MOC_LITERAL(28, 457, 17), // "SensorTypeChanged"
QT_MOC_LITERAL(29, 475, 23), // "autoConfigStatusChanged"
QT_MOC_LITERAL(30, 499, 40), // "GPSPositionSensor_AutoConfigS..."
QT_MOC_LITERAL(31, 540, 23), // "AutoConfigStatusChanged"
QT_MOC_LITERAL(32, 564, 15), // "baudRateChanged"
QT_MOC_LITERAL(33, 580, 32), // "GPSPositionSensor_BaudRate::Enum"
QT_MOC_LITERAL(34, 613, 15), // "BaudRateChanged"
QT_MOC_LITERAL(35, 629, 11), // "setLatitude"
QT_MOC_LITERAL(36, 641, 12), // "setLongitude"
QT_MOC_LITERAL(37, 654, 11), // "setAltitude"
QT_MOC_LITERAL(38, 666, 18), // "setGeoidSeparation"
QT_MOC_LITERAL(39, 685, 10), // "setHeading"
QT_MOC_LITERAL(40, 696, 14), // "setGroundspeed"
QT_MOC_LITERAL(41, 711, 7), // "setPDOP"
QT_MOC_LITERAL(42, 719, 7), // "setHDOP"
QT_MOC_LITERAL(43, 727, 7), // "setVDOP"
QT_MOC_LITERAL(44, 735, 9), // "setStatus"
QT_MOC_LITERAL(45, 745, 13), // "setSatellites"
QT_MOC_LITERAL(46, 759, 13), // "setSensorType"
QT_MOC_LITERAL(47, 773, 19), // "setAutoConfigStatus"
QT_MOC_LITERAL(48, 793, 11), // "setBaudRate"
QT_MOC_LITERAL(49, 805, 17), // "emitNotifications"
QT_MOC_LITERAL(50, 823, 11), // "getLatitude"
QT_MOC_LITERAL(51, 835, 12), // "getLongitude"
QT_MOC_LITERAL(52, 848, 11), // "getAltitude"
QT_MOC_LITERAL(53, 860, 18), // "getGeoidSeparation"
QT_MOC_LITERAL(54, 879, 10), // "getHeading"
QT_MOC_LITERAL(55, 890, 14), // "getGroundspeed"
QT_MOC_LITERAL(56, 905, 7), // "getPDOP"
QT_MOC_LITERAL(57, 913, 7), // "getHDOP"
QT_MOC_LITERAL(58, 921, 7), // "getVDOP"
QT_MOC_LITERAL(59, 929, 9), // "getStatus"
QT_MOC_LITERAL(60, 939, 13), // "getSatellites"
QT_MOC_LITERAL(61, 953, 13), // "getSensorType"
QT_MOC_LITERAL(62, 967, 19), // "getAutoConfigStatus"
QT_MOC_LITERAL(63, 987, 11), // "getBaudRate"
QT_MOC_LITERAL(64, 999, 8), // "latitude"
QT_MOC_LITERAL(65, 1008, 9), // "longitude"
QT_MOC_LITERAL(66, 1018, 8), // "altitude"
QT_MOC_LITERAL(67, 1027, 15), // "geoidSeparation"
QT_MOC_LITERAL(68, 1043, 7), // "heading"
QT_MOC_LITERAL(69, 1051, 11), // "groundspeed"
QT_MOC_LITERAL(70, 1063, 4), // "pdop"
QT_MOC_LITERAL(71, 1068, 4), // "hdop"
QT_MOC_LITERAL(72, 1073, 4), // "vdop"
QT_MOC_LITERAL(73, 1078, 6), // "status"
QT_MOC_LITERAL(74, 1085, 10), // "satellites"
QT_MOC_LITERAL(75, 1096, 10), // "sensorType"
QT_MOC_LITERAL(76, 1107, 16), // "autoConfigStatus"
QT_MOC_LITERAL(77, 1124, 8), // "baudRate"
QT_MOC_LITERAL(78, 1133, 8), // "Latitude"
QT_MOC_LITERAL(79, 1142, 9), // "Longitude"
QT_MOC_LITERAL(80, 1152, 8), // "Altitude"
QT_MOC_LITERAL(81, 1161, 15), // "GeoidSeparation"
QT_MOC_LITERAL(82, 1177, 7), // "Heading"
QT_MOC_LITERAL(83, 1185, 11), // "Groundspeed"
QT_MOC_LITERAL(84, 1197, 4), // "PDOP"
QT_MOC_LITERAL(85, 1202, 4), // "HDOP"
QT_MOC_LITERAL(86, 1207, 4), // "VDOP"
QT_MOC_LITERAL(87, 1212, 6), // "Status"
QT_MOC_LITERAL(88, 1219, 10), // "Satellites"
QT_MOC_LITERAL(89, 1230, 10), // "SensorType"
QT_MOC_LITERAL(90, 1241, 16), // "AutoConfigStatus"
QT_MOC_LITERAL(91, 1258, 8) // "BaudRate"

    },
    "GPSPositionSensor\0latitudeChanged\0\0"
    "value\0LatitudeChanged\0longitudeChanged\0"
    "LongitudeChanged\0altitudeChanged\0"
    "AltitudeChanged\0geoidSeparationChanged\0"
    "GeoidSeparationChanged\0headingChanged\0"
    "HeadingChanged\0groundspeedChanged\0"
    "GroundspeedChanged\0pdopChanged\0"
    "PDOPChanged\0hdopChanged\0HDOPChanged\0"
    "vdopChanged\0VDOPChanged\0statusChanged\0"
    "GPSPositionSensor_Status::Enum\0"
    "StatusChanged\0satellitesChanged\0"
    "SatellitesChanged\0sensorTypeChanged\0"
    "GPSPositionSensor_SensorType::Enum\0"
    "SensorTypeChanged\0autoConfigStatusChanged\0"
    "GPSPositionSensor_AutoConfigStatus::Enum\0"
    "AutoConfigStatusChanged\0baudRateChanged\0"
    "GPSPositionSensor_BaudRate::Enum\0"
    "BaudRateChanged\0setLatitude\0setLongitude\0"
    "setAltitude\0setGeoidSeparation\0"
    "setHeading\0setGroundspeed\0setPDOP\0"
    "setHDOP\0setVDOP\0setStatus\0setSatellites\0"
    "setSensorType\0setAutoConfigStatus\0"
    "setBaudRate\0emitNotifications\0getLatitude\0"
    "getLongitude\0getAltitude\0getGeoidSeparation\0"
    "getHeading\0getGroundspeed\0getPDOP\0"
    "getHDOP\0getVDOP\0getStatus\0getSatellites\0"
    "getSensorType\0getAutoConfigStatus\0"
    "getBaudRate\0latitude\0longitude\0altitude\0"
    "geoidSeparation\0heading\0groundspeed\0"
    "pdop\0hdop\0vdop\0status\0satellites\0"
    "sensorType\0autoConfigStatus\0baudRate\0"
    "Latitude\0Longitude\0Altitude\0GeoidSeparation\0"
    "Heading\0Groundspeed\0PDOP\0HDOP\0VDOP\0"
    "Status\0Satellites\0SensorType\0"
    "AutoConfigStatus\0BaudRate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSPositionSensor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
      28,  480, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      28,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  324,    2, 0x06 /* Public */,
       4,    1,  327,    2, 0x06 /* Public */,
       5,    1,  330,    2, 0x06 /* Public */,
       6,    1,  333,    2, 0x06 /* Public */,
       7,    1,  336,    2, 0x06 /* Public */,
       8,    1,  339,    2, 0x06 /* Public */,
       9,    1,  342,    2, 0x06 /* Public */,
      10,    1,  345,    2, 0x06 /* Public */,
      11,    1,  348,    2, 0x06 /* Public */,
      12,    1,  351,    2, 0x06 /* Public */,
      13,    1,  354,    2, 0x06 /* Public */,
      14,    1,  357,    2, 0x06 /* Public */,
      15,    1,  360,    2, 0x06 /* Public */,
      16,    1,  363,    2, 0x06 /* Public */,
      17,    1,  366,    2, 0x06 /* Public */,
      18,    1,  369,    2, 0x06 /* Public */,
      19,    1,  372,    2, 0x06 /* Public */,
      20,    1,  375,    2, 0x06 /* Public */,
      21,    1,  378,    2, 0x06 /* Public */,
      23,    1,  381,    2, 0x06 /* Public */,
      24,    1,  384,    2, 0x06 /* Public */,
      25,    1,  387,    2, 0x06 /* Public */,
      26,    1,  390,    2, 0x06 /* Public */,
      28,    1,  393,    2, 0x06 /* Public */,
      29,    1,  396,    2, 0x06 /* Public */,
      31,    1,  399,    2, 0x06 /* Public */,
      32,    1,  402,    2, 0x06 /* Public */,
      34,    1,  405,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      35,    1,  408,    2, 0x0a /* Public */,
      36,    1,  411,    2, 0x0a /* Public */,
      37,    1,  414,    2, 0x0a /* Public */,
      38,    1,  417,    2, 0x0a /* Public */,
      39,    1,  420,    2, 0x0a /* Public */,
      40,    1,  423,    2, 0x0a /* Public */,
      41,    1,  426,    2, 0x0a /* Public */,
      42,    1,  429,    2, 0x0a /* Public */,
      43,    1,  432,    2, 0x0a /* Public */,
      44,    1,  435,    2, 0x0a /* Public */,
      44,    1,  438,    2, 0x0a /* Public */,
      45,    1,  441,    2, 0x0a /* Public */,
      45,    1,  444,    2, 0x0a /* Public */,
      46,    1,  447,    2, 0x0a /* Public */,
      46,    1,  450,    2, 0x0a /* Public */,
      47,    1,  453,    2, 0x0a /* Public */,
      47,    1,  456,    2, 0x0a /* Public */,
      48,    1,  459,    2, 0x0a /* Public */,
      48,    1,  462,    2, 0x0a /* Public */,
      49,    0,  465,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      50,    0,  466,    2, 0x02 /* Public */,
      51,    0,  467,    2, 0x02 /* Public */,
      52,    0,  468,    2, 0x02 /* Public */,
      53,    0,  469,    2, 0x02 /* Public */,
      54,    0,  470,    2, 0x02 /* Public */,
      55,    0,  471,    2, 0x02 /* Public */,
      56,    0,  472,    2, 0x02 /* Public */,
      57,    0,  473,    2, 0x02 /* Public */,
      58,    0,  474,    2, 0x02 /* Public */,
      59,    0,  475,    2, 0x02 /* Public */,
      60,    0,  476,    2, 0x02 /* Public */,
      61,    0,  477,    2, 0x02 /* Public */,
      62,    0,  478,    2, 0x02 /* Public */,
      63,    0,  479,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
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
    QMetaType::Void, 0x80000000 | 22,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, 0x80000000 | 27,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 30,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 33,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 22,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, 0x80000000 | 27,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 30,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 33,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      64, QMetaType::Int, 0x00495103,
      65, QMetaType::Int, 0x00495103,
      66, QMetaType::Float, 0x00495103,
      67, QMetaType::Float, 0x00495103,
      68, QMetaType::Float, 0x00495103,
      69, QMetaType::Float, 0x00495103,
      70, QMetaType::Float, 0x00495003,
      71, QMetaType::Float, 0x00495003,
      72, QMetaType::Float, 0x00495003,
      73, 0x80000000 | 22, 0x0049510b,
      74, QMetaType::Short, 0x00495103,
      75, 0x80000000 | 27, 0x0049510b,
      76, 0x80000000 | 30, 0x0049510b,
      77, 0x80000000 | 33, 0x0049510b,
      78, QMetaType::Int, 0x00495103,
      79, QMetaType::Int, 0x00495103,
      80, QMetaType::Float, 0x00495103,
      81, QMetaType::Float, 0x00495103,
      82, QMetaType::Float, 0x00495103,
      83, QMetaType::Float, 0x00495103,
      84, QMetaType::Float, 0x00495103,
      85, QMetaType::Float, 0x00495103,
      86, QMetaType::Float, 0x00495103,
      87, QMetaType::UChar, 0x00495103,
      88, QMetaType::SChar, 0x00495103,
      89, QMetaType::UChar, 0x00495103,
      90, QMetaType::UChar, 0x00495103,
      91, QMetaType::UChar, 0x00495103,

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
      22,
      24,
      26,
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
      23,
      25,
      27,

       0        // eod
};

void GPSPositionSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPSPositionSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->latitudeChanged((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 1: _t->LatitudeChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 2: _t->longitudeChanged((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 3: _t->LongitudeChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 4: _t->altitudeChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->AltitudeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->geoidSeparationChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->GeoidSeparationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->headingChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->HeadingChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->groundspeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->GroundspeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->pdopChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->PDOPChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->hdopChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->HDOPChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->vdopChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->VDOPChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->statusChanged((*reinterpret_cast< const GPSPositionSensor_Status::Enum(*)>(_a[1]))); break;
        case 19: _t->StatusChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->satellitesChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 21: _t->SatellitesChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 22: _t->sensorTypeChanged((*reinterpret_cast< const GPSPositionSensor_SensorType::Enum(*)>(_a[1]))); break;
        case 23: _t->SensorTypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->autoConfigStatusChanged((*reinterpret_cast< const GPSPositionSensor_AutoConfigStatus::Enum(*)>(_a[1]))); break;
        case 25: _t->AutoConfigStatusChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->baudRateChanged((*reinterpret_cast< const GPSPositionSensor_BaudRate::Enum(*)>(_a[1]))); break;
        case 27: _t->BaudRateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->setLatitude((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 29: _t->setLongitude((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 30: _t->setAltitude((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 31: _t->setGeoidSeparation((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 32: _t->setHeading((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 33: _t->setGroundspeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 34: _t->setPDOP((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->setHDOP((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 36: _t->setVDOP((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 37: _t->setStatus((*reinterpret_cast< const GPSPositionSensor_Status::Enum(*)>(_a[1]))); break;
        case 38: _t->setStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 39: _t->setSatellites((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 40: _t->setSatellites((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 41: _t->setSensorType((*reinterpret_cast< const GPSPositionSensor_SensorType::Enum(*)>(_a[1]))); break;
        case 42: _t->setSensorType((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 43: _t->setAutoConfigStatus((*reinterpret_cast< const GPSPositionSensor_AutoConfigStatus::Enum(*)>(_a[1]))); break;
        case 44: _t->setAutoConfigStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 45: _t->setBaudRate((*reinterpret_cast< const GPSPositionSensor_BaudRate::Enum(*)>(_a[1]))); break;
        case 46: _t->setBaudRate((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 47: _t->emitNotifications(); break;
        case 48: { qint32 _r = _t->getLatitude();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 49: { qint32 _r = _t->getLongitude();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 50: { float _r = _t->getAltitude();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 51: { float _r = _t->getGeoidSeparation();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 52: { float _r = _t->getHeading();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 53: { float _r = _t->getGroundspeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 54: { float _r = _t->getPDOP();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 55: { float _r = _t->getHDOP();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 56: { float _r = _t->getVDOP();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 57: { quint8 _r = _t->getStatus();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 58: { qint8 _r = _t->getSatellites();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 59: { quint8 _r = _t->getSensorType();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 60: { quint8 _r = _t->getAutoConfigStatus();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 61: { quint8 _r = _t->getBaudRate();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GPSPositionSensor::*)(const qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::latitudeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::LatitudeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::longitudeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::LongitudeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::altitudeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::AltitudeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::geoidSeparationChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::GeoidSeparationChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::headingChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::HeadingChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::groundspeedChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::GroundspeedChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::pdopChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::PDOPChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::hdopChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::HDOPChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::vdopChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::VDOPChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const GPSPositionSensor_Status::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::statusChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::StatusChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::satellitesChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::SatellitesChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const GPSPositionSensor_SensorType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::sensorTypeChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::SensorTypeChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const GPSPositionSensor_AutoConfigStatus::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::autoConfigStatusChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::AutoConfigStatusChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(const GPSPositionSensor_BaudRate::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::baudRateChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (GPSPositionSensor::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSPositionSensor::BaudRateChanged)) {
                *result = 27;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GPSPositionSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint32*>(_v) = _t->latitude(); break;
        case 1: *reinterpret_cast< qint32*>(_v) = _t->longitude(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->altitude(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->geoidSeparation(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->heading(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->groundspeed(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->pdop(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->hdop(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->vdop(); break;
        case 9: *reinterpret_cast< GPSPositionSensor_Status::Enum*>(_v) = _t->status(); break;
        case 10: *reinterpret_cast< qint16*>(_v) = _t->satellites(); break;
        case 11: *reinterpret_cast< GPSPositionSensor_SensorType::Enum*>(_v) = _t->sensorType(); break;
        case 12: *reinterpret_cast< GPSPositionSensor_AutoConfigStatus::Enum*>(_v) = _t->autoConfigStatus(); break;
        case 13: *reinterpret_cast< GPSPositionSensor_BaudRate::Enum*>(_v) = _t->baudRate(); break;
        case 14: *reinterpret_cast< qint32*>(_v) = _t->getLatitude(); break;
        case 15: *reinterpret_cast< qint32*>(_v) = _t->getLongitude(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getAltitude(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getGeoidSeparation(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getHeading(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getGroundspeed(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getPDOP(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getHDOP(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getVDOP(); break;
        case 23: *reinterpret_cast< quint8*>(_v) = _t->getStatus(); break;
        case 24: *reinterpret_cast< qint8*>(_v) = _t->getSatellites(); break;
        case 25: *reinterpret_cast< quint8*>(_v) = _t->getSensorType(); break;
        case 26: *reinterpret_cast< quint8*>(_v) = _t->getAutoConfigStatus(); break;
        case 27: *reinterpret_cast< quint8*>(_v) = _t->getBaudRate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GPSPositionSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLatitude(*reinterpret_cast< qint32*>(_v)); break;
        case 1: _t->setLongitude(*reinterpret_cast< qint32*>(_v)); break;
        case 2: _t->setAltitude(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setGeoidSeparation(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setHeading(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setGroundspeed(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setPDOP(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setHDOP(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setVDOP(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setStatus(*reinterpret_cast< GPSPositionSensor_Status::Enum*>(_v)); break;
        case 10: _t->setSatellites(*reinterpret_cast< qint16*>(_v)); break;
        case 11: _t->setSensorType(*reinterpret_cast< GPSPositionSensor_SensorType::Enum*>(_v)); break;
        case 12: _t->setAutoConfigStatus(*reinterpret_cast< GPSPositionSensor_AutoConfigStatus::Enum*>(_v)); break;
        case 13: _t->setBaudRate(*reinterpret_cast< GPSPositionSensor_BaudRate::Enum*>(_v)); break;
        case 14: _t->setLatitude(*reinterpret_cast< qint32*>(_v)); break;
        case 15: _t->setLongitude(*reinterpret_cast< qint32*>(_v)); break;
        case 16: _t->setAltitude(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setGeoidSeparation(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setHeading(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setGroundspeed(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setPDOP(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setHDOP(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setVDOP(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setStatus(*reinterpret_cast< quint8*>(_v)); break;
        case 24: _t->setSatellites(*reinterpret_cast< qint8*>(_v)); break;
        case 25: _t->setSensorType(*reinterpret_cast< quint8*>(_v)); break;
        case 26: _t->setAutoConfigStatus(*reinterpret_cast< quint8*>(_v)); break;
        case 27: _t->setBaudRate(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_GPSPositionSensor[] = {
        &GPSPositionSensor_Status::staticMetaObject,
    &GPSPositionSensor_SensorType::staticMetaObject,
    &GPSPositionSensor_AutoConfigStatus::staticMetaObject,
    &GPSPositionSensor_BaudRate::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject GPSPositionSensor::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_GPSPositionSensor.data,
    qt_meta_data_GPSPositionSensor,
    qt_static_metacall,
    qt_meta_extradata_GPSPositionSensor,
    nullptr
} };


const QMetaObject *GPSPositionSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSPositionSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSPositionSensor.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int GPSPositionSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 62)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 62;
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
void GPSPositionSensor::latitudeChanged(const qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GPSPositionSensor::LatitudeChanged(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GPSPositionSensor::longitudeChanged(const qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GPSPositionSensor::LongitudeChanged(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GPSPositionSensor::altitudeChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GPSPositionSensor::AltitudeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GPSPositionSensor::geoidSeparationChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GPSPositionSensor::GeoidSeparationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GPSPositionSensor::headingChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GPSPositionSensor::HeadingChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GPSPositionSensor::groundspeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GPSPositionSensor::GroundspeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GPSPositionSensor::pdopChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GPSPositionSensor::PDOPChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GPSPositionSensor::hdopChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GPSPositionSensor::HDOPChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GPSPositionSensor::vdopChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GPSPositionSensor::VDOPChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void GPSPositionSensor::statusChanged(const GPSPositionSensor_Status::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void GPSPositionSensor::StatusChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void GPSPositionSensor::satellitesChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void GPSPositionSensor::SatellitesChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void GPSPositionSensor::sensorTypeChanged(const GPSPositionSensor_SensorType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void GPSPositionSensor::SensorTypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void GPSPositionSensor::autoConfigStatusChanged(const GPSPositionSensor_AutoConfigStatus::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void GPSPositionSensor::AutoConfigStatusChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void GPSPositionSensor::baudRateChanged(const GPSPositionSensor_BaudRate::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void GPSPositionSensor::BaudRateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
