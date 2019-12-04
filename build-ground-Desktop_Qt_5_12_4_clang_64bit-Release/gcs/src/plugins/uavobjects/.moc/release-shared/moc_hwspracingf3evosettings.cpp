/****************************************************************************
** Meta object code from reading C++ file 'hwspracingf3evosettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hwspracingf3evosettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hwspracingf3evosettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HwSPRacingF3EVOSettingsConstants_t {
    QByteArrayData data[5];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwSPRacingF3EVOSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwSPRacingF3EVOSettingsConstants_t qt_meta_stringdata_HwSPRacingF3EVOSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 32), // "HwSPRacingF3EVOSettingsConstants"
QT_MOC_LITERAL(1, 33, 4), // "Enum"
QT_MOC_LITERAL(2, 38, 13), // "UARTPortCount"
QT_MOC_LITERAL(3, 52, 12), // "I2CPortCount"
QT_MOC_LITERAL(4, 65, 12) // "LEDPortCount"

    },
    "HwSPRacingF3EVOSettingsConstants\0Enum\0"
    "UARTPortCount\0I2CPortCount\0LEDPortCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwSPRacingF3EVOSettingsConstants[] = {

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
       2, uint(HwSPRacingF3EVOSettingsConstants::UARTPortCount),
       3, uint(HwSPRacingF3EVOSettingsConstants::I2CPortCount),
       4, uint(HwSPRacingF3EVOSettingsConstants::LEDPortCount),

       0        // eod
};

void HwSPRacingF3EVOSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwSPRacingF3EVOSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwSPRacingF3EVOSettingsConstants.data,
    qt_meta_data_HwSPRacingF3EVOSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwSPRacingF3EVOSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwSPRacingF3EVOSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwSPRacingF3EVOSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwSPRacingF3EVOSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwSPRacingF3EVOSettings_UARTPort_t {
    QByteArrayData data[19];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwSPRacingF3EVOSettings_UARTPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwSPRacingF3EVOSettings_UARTPort_t qt_meta_stringdata_HwSPRacingF3EVOSettings_UARTPort = {
    {
QT_MOC_LITERAL(0, 0, 32), // "HwSPRacingF3EVOSettings_UARTPort"
QT_MOC_LITERAL(1, 33, 4), // "Enum"
QT_MOC_LITERAL(2, 38, 8), // "Disabled"
QT_MOC_LITERAL(3, 47, 9), // "Telemetry"
QT_MOC_LITERAL(4, 57, 3), // "GPS"
QT_MOC_LITERAL(5, 61, 4), // "SBus"
QT_MOC_LITERAL(6, 66, 3), // "DSM"
QT_MOC_LITERAL(7, 70, 5), // "EXBus"
QT_MOC_LITERAL(8, 76, 8), // "HoTTSUMD"
QT_MOC_LITERAL(9, 85, 8), // "HoTTSUMH"
QT_MOC_LITERAL(10, 94, 4), // "SRXL"
QT_MOC_LITERAL(11, 99, 4), // "IBus"
QT_MOC_LITERAL(12, 104, 12), // "DebugConsole"
QT_MOC_LITERAL(13, 117, 9), // "ComBridge"
QT_MOC_LITERAL(14, 127, 3), // "MSP"
QT_MOC_LITERAL(15, 131, 7), // "MAVLink"
QT_MOC_LITERAL(16, 139, 13), // "HoTTTelemetry"
QT_MOC_LITERAL(17, 153, 14), // "FrskySensorHub"
QT_MOC_LITERAL(18, 168, 3) // "PPM"

    },
    "HwSPRacingF3EVOSettings_UARTPort\0Enum\0"
    "Disabled\0Telemetry\0GPS\0SBus\0DSM\0EXBus\0"
    "HoTTSUMD\0HoTTSUMH\0SRXL\0IBus\0DebugConsole\0"
    "ComBridge\0MSP\0MAVLink\0HoTTTelemetry\0"
    "FrskySensorHub\0PPM"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwSPRacingF3EVOSettings_UARTPort[] = {

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
       1,    1, 0x0,   17,   19,

 // enum data: key, value
       2, uint(HwSPRacingF3EVOSettings_UARTPort::Disabled),
       3, uint(HwSPRacingF3EVOSettings_UARTPort::Telemetry),
       4, uint(HwSPRacingF3EVOSettings_UARTPort::GPS),
       5, uint(HwSPRacingF3EVOSettings_UARTPort::SBus),
       6, uint(HwSPRacingF3EVOSettings_UARTPort::DSM),
       7, uint(HwSPRacingF3EVOSettings_UARTPort::EXBus),
       8, uint(HwSPRacingF3EVOSettings_UARTPort::HoTTSUMD),
       9, uint(HwSPRacingF3EVOSettings_UARTPort::HoTTSUMH),
      10, uint(HwSPRacingF3EVOSettings_UARTPort::SRXL),
      11, uint(HwSPRacingF3EVOSettings_UARTPort::IBus),
      12, uint(HwSPRacingF3EVOSettings_UARTPort::DebugConsole),
      13, uint(HwSPRacingF3EVOSettings_UARTPort::ComBridge),
      14, uint(HwSPRacingF3EVOSettings_UARTPort::MSP),
      15, uint(HwSPRacingF3EVOSettings_UARTPort::MAVLink),
      16, uint(HwSPRacingF3EVOSettings_UARTPort::HoTTTelemetry),
      17, uint(HwSPRacingF3EVOSettings_UARTPort::FrskySensorHub),
      18, uint(HwSPRacingF3EVOSettings_UARTPort::PPM),

       0        // eod
};

void HwSPRacingF3EVOSettings_UARTPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwSPRacingF3EVOSettings_UARTPort::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwSPRacingF3EVOSettings_UARTPort.data,
    qt_meta_data_HwSPRacingF3EVOSettings_UARTPort,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwSPRacingF3EVOSettings_UARTPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwSPRacingF3EVOSettings_UARTPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwSPRacingF3EVOSettings_UARTPort.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwSPRacingF3EVOSettings_UARTPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwSPRacingF3EVOSettings_I2CPort_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwSPRacingF3EVOSettings_I2CPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwSPRacingF3EVOSettings_I2CPort_t qt_meta_stringdata_HwSPRacingF3EVOSettings_I2CPort = {
    {
QT_MOC_LITERAL(0, 0, 31), // "HwSPRacingF3EVOSettings_I2CPort"
QT_MOC_LITERAL(1, 32, 4), // "Enum"
QT_MOC_LITERAL(2, 37, 8), // "Disabled"
QT_MOC_LITERAL(3, 46, 3) // "I2C"

    },
    "HwSPRacingF3EVOSettings_I2CPort\0Enum\0"
    "Disabled\0I2C"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwSPRacingF3EVOSettings_I2CPort[] = {

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
       2, uint(HwSPRacingF3EVOSettings_I2CPort::Disabled),
       3, uint(HwSPRacingF3EVOSettings_I2CPort::I2C),

       0        // eod
};

void HwSPRacingF3EVOSettings_I2CPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwSPRacingF3EVOSettings_I2CPort::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwSPRacingF3EVOSettings_I2CPort.data,
    qt_meta_data_HwSPRacingF3EVOSettings_I2CPort,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwSPRacingF3EVOSettings_I2CPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwSPRacingF3EVOSettings_I2CPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwSPRacingF3EVOSettings_I2CPort.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwSPRacingF3EVOSettings_I2CPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwSPRacingF3EVOSettings_LEDPort_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwSPRacingF3EVOSettings_LEDPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwSPRacingF3EVOSettings_LEDPort_t qt_meta_stringdata_HwSPRacingF3EVOSettings_LEDPort = {
    {
QT_MOC_LITERAL(0, 0, 31), // "HwSPRacingF3EVOSettings_LEDPort"
QT_MOC_LITERAL(1, 32, 4), // "Enum"
QT_MOC_LITERAL(2, 37, 8), // "Disabled"
QT_MOC_LITERAL(3, 46, 6) // "WS281x"

    },
    "HwSPRacingF3EVOSettings_LEDPort\0Enum\0"
    "Disabled\0WS281x"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwSPRacingF3EVOSettings_LEDPort[] = {

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
       2, uint(HwSPRacingF3EVOSettings_LEDPort::Disabled),
       3, uint(HwSPRacingF3EVOSettings_LEDPort::WS281x),

       0        // eod
};

void HwSPRacingF3EVOSettings_LEDPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwSPRacingF3EVOSettings_LEDPort::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwSPRacingF3EVOSettings_LEDPort.data,
    qt_meta_data_HwSPRacingF3EVOSettings_LEDPort,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwSPRacingF3EVOSettings_LEDPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwSPRacingF3EVOSettings_LEDPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwSPRacingF3EVOSettings_LEDPort.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwSPRacingF3EVOSettings_LEDPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwSPRacingF3EVOSettings_t {
    QByteArrayData data[46];
    char stringdata0[662];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwSPRacingF3EVOSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwSPRacingF3EVOSettings_t qt_meta_stringdata_HwSPRacingF3EVOSettings = {
    {
QT_MOC_LITERAL(0, 0, 23), // "HwSPRacingF3EVOSettings"
QT_MOC_LITERAL(1, 24, 15), // "uartPortChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "index"
QT_MOC_LITERAL(4, 47, 38), // "HwSPRacingF3EVOSettings_UARTP..."
QT_MOC_LITERAL(5, 86, 5), // "value"
QT_MOC_LITERAL(6, 92, 15), // "UARTPortChanged"
QT_MOC_LITERAL(7, 108, 16), // "uartPort0Changed"
QT_MOC_LITERAL(8, 125, 17), // "UARTPort_0Changed"
QT_MOC_LITERAL(9, 143, 16), // "uartPort1Changed"
QT_MOC_LITERAL(10, 160, 17), // "UARTPort_1Changed"
QT_MOC_LITERAL(11, 178, 16), // "uartPort2Changed"
QT_MOC_LITERAL(12, 195, 17), // "UARTPort_2Changed"
QT_MOC_LITERAL(13, 213, 14), // "i2CPortChanged"
QT_MOC_LITERAL(14, 228, 37), // "HwSPRacingF3EVOSettings_I2CPo..."
QT_MOC_LITERAL(15, 266, 14), // "I2CPortChanged"
QT_MOC_LITERAL(16, 281, 14), // "ledPortChanged"
QT_MOC_LITERAL(17, 296, 37), // "HwSPRacingF3EVOSettings_LEDPo..."
QT_MOC_LITERAL(18, 334, 14), // "LEDPortChanged"
QT_MOC_LITERAL(19, 349, 11), // "setUARTPort"
QT_MOC_LITERAL(20, 361, 12), // "setUARTPort0"
QT_MOC_LITERAL(21, 374, 13), // "setUARTPort_0"
QT_MOC_LITERAL(22, 388, 12), // "setUARTPort1"
QT_MOC_LITERAL(23, 401, 13), // "setUARTPort_1"
QT_MOC_LITERAL(24, 415, 12), // "setUARTPort2"
QT_MOC_LITERAL(25, 428, 13), // "setUARTPort_2"
QT_MOC_LITERAL(26, 442, 10), // "setI2CPort"
QT_MOC_LITERAL(27, 453, 10), // "setLEDPort"
QT_MOC_LITERAL(28, 464, 17), // "emitNotifications"
QT_MOC_LITERAL(29, 482, 8), // "uartPort"
QT_MOC_LITERAL(30, 491, 11), // "getUARTPort"
QT_MOC_LITERAL(31, 503, 13), // "getUARTPort_0"
QT_MOC_LITERAL(32, 517, 13), // "getUARTPort_1"
QT_MOC_LITERAL(33, 531, 13), // "getUARTPort_2"
QT_MOC_LITERAL(34, 545, 10), // "getI2CPort"
QT_MOC_LITERAL(35, 556, 10), // "getLEDPort"
QT_MOC_LITERAL(36, 567, 9), // "uartPort0"
QT_MOC_LITERAL(37, 577, 9), // "uartPort1"
QT_MOC_LITERAL(38, 587, 9), // "uartPort2"
QT_MOC_LITERAL(39, 597, 7), // "i2CPort"
QT_MOC_LITERAL(40, 605, 7), // "ledPort"
QT_MOC_LITERAL(41, 613, 10), // "UARTPort_0"
QT_MOC_LITERAL(42, 624, 10), // "UARTPort_1"
QT_MOC_LITERAL(43, 635, 10), // "UARTPort_2"
QT_MOC_LITERAL(44, 646, 7), // "I2CPort"
QT_MOC_LITERAL(45, 654, 7) // "LEDPort"

    },
    "HwSPRacingF3EVOSettings\0uartPortChanged\0"
    "\0index\0HwSPRacingF3EVOSettings_UARTPort::Enum\0"
    "value\0UARTPortChanged\0uartPort0Changed\0"
    "UARTPort_0Changed\0uartPort1Changed\0"
    "UARTPort_1Changed\0uartPort2Changed\0"
    "UARTPort_2Changed\0i2CPortChanged\0"
    "HwSPRacingF3EVOSettings_I2CPort::Enum\0"
    "I2CPortChanged\0ledPortChanged\0"
    "HwSPRacingF3EVOSettings_LEDPort::Enum\0"
    "LEDPortChanged\0setUARTPort\0setUARTPort0\0"
    "setUARTPort_0\0setUARTPort1\0setUARTPort_1\0"
    "setUARTPort2\0setUARTPort_2\0setI2CPort\0"
    "setLEDPort\0emitNotifications\0uartPort\0"
    "getUARTPort\0getUARTPort_0\0getUARTPort_1\0"
    "getUARTPort_2\0getI2CPort\0getLEDPort\0"
    "uartPort0\0uartPort1\0uartPort2\0i2CPort\0"
    "ledPort\0UARTPort_0\0UARTPort_1\0UARTPort_2\0"
    "I2CPort\0LEDPort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwSPRacingF3EVOSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
      10,  266, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  174,    2, 0x06 /* Public */,
       6,    2,  179,    2, 0x06 /* Public */,
       7,    1,  184,    2, 0x06 /* Public */,
       8,    1,  187,    2, 0x06 /* Public */,
       9,    1,  190,    2, 0x06 /* Public */,
      10,    1,  193,    2, 0x06 /* Public */,
      11,    1,  196,    2, 0x06 /* Public */,
      12,    1,  199,    2, 0x06 /* Public */,
      13,    1,  202,    2, 0x06 /* Public */,
      15,    1,  205,    2, 0x06 /* Public */,
      16,    1,  208,    2, 0x06 /* Public */,
      18,    1,  211,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    2,  214,    2, 0x0a /* Public */,
      19,    2,  219,    2, 0x0a /* Public */,
      20,    1,  224,    2, 0x0a /* Public */,
      21,    1,  227,    2, 0x0a /* Public */,
      22,    1,  230,    2, 0x0a /* Public */,
      23,    1,  233,    2, 0x0a /* Public */,
      24,    1,  236,    2, 0x0a /* Public */,
      25,    1,  239,    2, 0x0a /* Public */,
      26,    1,  242,    2, 0x0a /* Public */,
      26,    1,  245,    2, 0x0a /* Public */,
      27,    1,  248,    2, 0x0a /* Public */,
      27,    1,  251,    2, 0x0a /* Public */,
      28,    0,  254,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      29,    1,  255,    2, 0x02 /* Public */,
      30,    1,  258,    2, 0x02 /* Public */,
      31,    0,  261,    2, 0x02 /* Public */,
      32,    0,  262,    2, 0x02 /* Public */,
      33,    0,  263,    2, 0x02 /* Public */,
      34,    0,  264,    2, 0x02 /* Public */,
      35,    0,  265,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 14,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 17,    5,
    QMetaType::Void, QMetaType::UChar,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 14,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, 0x80000000 | 17,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      36, 0x80000000 | 4, 0x0049500b,
      37, 0x80000000 | 4, 0x0049500b,
      38, 0x80000000 | 4, 0x0049500b,
      39, 0x80000000 | 14, 0x0049510b,
      40, 0x80000000 | 17, 0x0049500b,
      41, QMetaType::UChar, 0x00495103,
      42, QMetaType::UChar, 0x00495103,
      43, QMetaType::UChar, 0x00495103,
      44, QMetaType::UChar, 0x00495103,
      45, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
       8,
      10,
       3,
       5,
       7,
       9,
      11,

       0        // eod
};

void HwSPRacingF3EVOSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HwSPRacingF3EVOSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uartPortChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const HwSPRacingF3EVOSettings_UARTPort::Enum(*)>(_a[2]))); break;
        case 1: _t->UARTPortChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 2: _t->uartPort0Changed((*reinterpret_cast< const HwSPRacingF3EVOSettings_UARTPort::Enum(*)>(_a[1]))); break;
        case 3: _t->UARTPort_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->uartPort1Changed((*reinterpret_cast< const HwSPRacingF3EVOSettings_UARTPort::Enum(*)>(_a[1]))); break;
        case 5: _t->UARTPort_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->uartPort2Changed((*reinterpret_cast< const HwSPRacingF3EVOSettings_UARTPort::Enum(*)>(_a[1]))); break;
        case 7: _t->UARTPort_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->i2CPortChanged((*reinterpret_cast< const HwSPRacingF3EVOSettings_I2CPort::Enum(*)>(_a[1]))); break;
        case 9: _t->I2CPortChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->ledPortChanged((*reinterpret_cast< const HwSPRacingF3EVOSettings_LEDPort::Enum(*)>(_a[1]))); break;
        case 11: _t->LEDPortChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->setUARTPort((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const HwSPRacingF3EVOSettings_UARTPort::Enum(*)>(_a[2]))); break;
        case 13: _t->setUARTPort((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 14: _t->setUARTPort0((*reinterpret_cast< const HwSPRacingF3EVOSettings_UARTPort::Enum(*)>(_a[1]))); break;
        case 15: _t->setUARTPort_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 16: _t->setUARTPort1((*reinterpret_cast< const HwSPRacingF3EVOSettings_UARTPort::Enum(*)>(_a[1]))); break;
        case 17: _t->setUARTPort_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->setUARTPort2((*reinterpret_cast< const HwSPRacingF3EVOSettings_UARTPort::Enum(*)>(_a[1]))); break;
        case 19: _t->setUARTPort_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->setI2CPort((*reinterpret_cast< const HwSPRacingF3EVOSettings_I2CPort::Enum(*)>(_a[1]))); break;
        case 21: _t->setI2CPort((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->setLEDPort((*reinterpret_cast< const HwSPRacingF3EVOSettings_LEDPort::Enum(*)>(_a[1]))); break;
        case 23: _t->setLEDPort((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->emitNotifications(); break;
        case 25: { HwSPRacingF3EVOSettings_UARTPort::Enum _r = _t->uartPort((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< HwSPRacingF3EVOSettings_UARTPort::Enum*>(_a[0]) = std::move(_r); }  break;
        case 26: { quint8 _r = _t->getUARTPort((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 27: { quint8 _r = _t->getUARTPort_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 28: { quint8 _r = _t->getUARTPort_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 29: { quint8 _r = _t->getUARTPort_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 30: { quint8 _r = _t->getI2CPort();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 31: { quint8 _r = _t->getLEDPort();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HwSPRacingF3EVOSettings::*)(quint32 , const HwSPRacingF3EVOSettings_UARTPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3EVOSettings::uartPortChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3EVOSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3EVOSettings::UARTPortChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3EVOSettings::*)(const HwSPRacingF3EVOSettings_UARTPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3EVOSettings::uartPort0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3EVOSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3EVOSettings::UARTPort_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3EVOSettings::*)(const HwSPRacingF3EVOSettings_UARTPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3EVOSettings::uartPort1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3EVOSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3EVOSettings::UARTPort_1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3EVOSettings::*)(const HwSPRacingF3EVOSettings_UARTPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3EVOSettings::uartPort2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3EVOSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3EVOSettings::UARTPort_2Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3EVOSettings::*)(const HwSPRacingF3EVOSettings_I2CPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3EVOSettings::i2CPortChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3EVOSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3EVOSettings::I2CPortChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3EVOSettings::*)(const HwSPRacingF3EVOSettings_LEDPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3EVOSettings::ledPortChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3EVOSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3EVOSettings::LEDPortChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HwSPRacingF3EVOSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< HwSPRacingF3EVOSettings_UARTPort::Enum*>(_v) = _t->uartPort0(); break;
        case 1: *reinterpret_cast< HwSPRacingF3EVOSettings_UARTPort::Enum*>(_v) = _t->uartPort1(); break;
        case 2: *reinterpret_cast< HwSPRacingF3EVOSettings_UARTPort::Enum*>(_v) = _t->uartPort2(); break;
        case 3: *reinterpret_cast< HwSPRacingF3EVOSettings_I2CPort::Enum*>(_v) = _t->i2CPort(); break;
        case 4: *reinterpret_cast< HwSPRacingF3EVOSettings_LEDPort::Enum*>(_v) = _t->ledPort(); break;
        case 5: *reinterpret_cast< quint8*>(_v) = _t->getUARTPort_0(); break;
        case 6: *reinterpret_cast< quint8*>(_v) = _t->getUARTPort_1(); break;
        case 7: *reinterpret_cast< quint8*>(_v) = _t->getUARTPort_2(); break;
        case 8: *reinterpret_cast< quint8*>(_v) = _t->getI2CPort(); break;
        case 9: *reinterpret_cast< quint8*>(_v) = _t->getLEDPort(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HwSPRacingF3EVOSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUARTPort0(*reinterpret_cast< HwSPRacingF3EVOSettings_UARTPort::Enum*>(_v)); break;
        case 1: _t->setUARTPort1(*reinterpret_cast< HwSPRacingF3EVOSettings_UARTPort::Enum*>(_v)); break;
        case 2: _t->setUARTPort2(*reinterpret_cast< HwSPRacingF3EVOSettings_UARTPort::Enum*>(_v)); break;
        case 3: _t->setI2CPort(*reinterpret_cast< HwSPRacingF3EVOSettings_I2CPort::Enum*>(_v)); break;
        case 4: _t->setLEDPort(*reinterpret_cast< HwSPRacingF3EVOSettings_LEDPort::Enum*>(_v)); break;
        case 5: _t->setUARTPort_0(*reinterpret_cast< quint8*>(_v)); break;
        case 6: _t->setUARTPort_1(*reinterpret_cast< quint8*>(_v)); break;
        case 7: _t->setUARTPort_2(*reinterpret_cast< quint8*>(_v)); break;
        case 8: _t->setI2CPort(*reinterpret_cast< quint8*>(_v)); break;
        case 9: _t->setLEDPort(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_HwSPRacingF3EVOSettings[] = {
        &HwSPRacingF3EVOSettings_UARTPort::staticMetaObject,
    &HwSPRacingF3EVOSettings_I2CPort::staticMetaObject,
    &HwSPRacingF3EVOSettings_LEDPort::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject HwSPRacingF3EVOSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_HwSPRacingF3EVOSettings.data,
    qt_meta_data_HwSPRacingF3EVOSettings,
    qt_static_metacall,
    qt_meta_extradata_HwSPRacingF3EVOSettings,
    nullptr
} };


const QMetaObject *HwSPRacingF3EVOSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwSPRacingF3EVOSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwSPRacingF3EVOSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int HwSPRacingF3EVOSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void HwSPRacingF3EVOSettings::uartPortChanged(quint32 _t1, const HwSPRacingF3EVOSettings_UARTPort::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HwSPRacingF3EVOSettings::UARTPortChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HwSPRacingF3EVOSettings::uartPort0Changed(const HwSPRacingF3EVOSettings_UARTPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HwSPRacingF3EVOSettings::UARTPort_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HwSPRacingF3EVOSettings::uartPort1Changed(const HwSPRacingF3EVOSettings_UARTPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HwSPRacingF3EVOSettings::UARTPort_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HwSPRacingF3EVOSettings::uartPort2Changed(const HwSPRacingF3EVOSettings_UARTPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void HwSPRacingF3EVOSettings::UARTPort_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void HwSPRacingF3EVOSettings::i2CPortChanged(const HwSPRacingF3EVOSettings_I2CPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void HwSPRacingF3EVOSettings::I2CPortChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void HwSPRacingF3EVOSettings::ledPortChanged(const HwSPRacingF3EVOSettings_LEDPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void HwSPRacingF3EVOSettings::LEDPortChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
