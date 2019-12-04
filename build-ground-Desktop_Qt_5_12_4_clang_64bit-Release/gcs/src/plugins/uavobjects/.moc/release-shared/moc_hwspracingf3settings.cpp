/****************************************************************************
** Meta object code from reading C++ file 'hwspracingf3settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hwspracingf3settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hwspracingf3settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HwSPRacingF3SettingsConstants_t {
    QByteArrayData data[6];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwSPRacingF3SettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwSPRacingF3SettingsConstants_t qt_meta_stringdata_HwSPRacingF3SettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 29), // "HwSPRacingF3SettingsConstants"
QT_MOC_LITERAL(1, 30, 4), // "Enum"
QT_MOC_LITERAL(2, 35, 13), // "UARTPortCount"
QT_MOC_LITERAL(3, 49, 12), // "I2CPortCount"
QT_MOC_LITERAL(4, 62, 12), // "LEDPortCount"
QT_MOC_LITERAL(5, 75, 12) // "IOPortsCount"

    },
    "HwSPRacingF3SettingsConstants\0Enum\0"
    "UARTPortCount\0I2CPortCount\0LEDPortCount\0"
    "IOPortsCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwSPRacingF3SettingsConstants[] = {

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
       2, uint(HwSPRacingF3SettingsConstants::UARTPortCount),
       3, uint(HwSPRacingF3SettingsConstants::I2CPortCount),
       4, uint(HwSPRacingF3SettingsConstants::LEDPortCount),
       5, uint(HwSPRacingF3SettingsConstants::IOPortsCount),

       0        // eod
};

void HwSPRacingF3SettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwSPRacingF3SettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwSPRacingF3SettingsConstants.data,
    qt_meta_data_HwSPRacingF3SettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwSPRacingF3SettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwSPRacingF3SettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwSPRacingF3SettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwSPRacingF3SettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwSPRacingF3Settings_UARTPort_t {
    QByteArrayData data[18];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwSPRacingF3Settings_UARTPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwSPRacingF3Settings_UARTPort_t qt_meta_stringdata_HwSPRacingF3Settings_UARTPort = {
    {
QT_MOC_LITERAL(0, 0, 29), // "HwSPRacingF3Settings_UARTPort"
QT_MOC_LITERAL(1, 30, 4), // "Enum"
QT_MOC_LITERAL(2, 35, 8), // "Disabled"
QT_MOC_LITERAL(3, 44, 9), // "Telemetry"
QT_MOC_LITERAL(4, 54, 3), // "GPS"
QT_MOC_LITERAL(5, 58, 4), // "SBus"
QT_MOC_LITERAL(6, 63, 3), // "DSM"
QT_MOC_LITERAL(7, 67, 5), // "EXBus"
QT_MOC_LITERAL(8, 73, 8), // "HoTTSUMD"
QT_MOC_LITERAL(9, 82, 8), // "HoTTSUMH"
QT_MOC_LITERAL(10, 91, 4), // "SRXL"
QT_MOC_LITERAL(11, 96, 4), // "IBus"
QT_MOC_LITERAL(12, 101, 12), // "DebugConsole"
QT_MOC_LITERAL(13, 114, 9), // "ComBridge"
QT_MOC_LITERAL(14, 124, 3), // "MSP"
QT_MOC_LITERAL(15, 128, 7), // "MAVLink"
QT_MOC_LITERAL(16, 136, 13), // "HoTTTelemetry"
QT_MOC_LITERAL(17, 150, 14) // "FrskySensorHub"

    },
    "HwSPRacingF3Settings_UARTPort\0Enum\0"
    "Disabled\0Telemetry\0GPS\0SBus\0DSM\0EXBus\0"
    "HoTTSUMD\0HoTTSUMH\0SRXL\0IBus\0DebugConsole\0"
    "ComBridge\0MSP\0MAVLink\0HoTTTelemetry\0"
    "FrskySensorHub"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwSPRacingF3Settings_UARTPort[] = {

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
       1,    1, 0x0,   16,   19,

 // enum data: key, value
       2, uint(HwSPRacingF3Settings_UARTPort::Disabled),
       3, uint(HwSPRacingF3Settings_UARTPort::Telemetry),
       4, uint(HwSPRacingF3Settings_UARTPort::GPS),
       5, uint(HwSPRacingF3Settings_UARTPort::SBus),
       6, uint(HwSPRacingF3Settings_UARTPort::DSM),
       7, uint(HwSPRacingF3Settings_UARTPort::EXBus),
       8, uint(HwSPRacingF3Settings_UARTPort::HoTTSUMD),
       9, uint(HwSPRacingF3Settings_UARTPort::HoTTSUMH),
      10, uint(HwSPRacingF3Settings_UARTPort::SRXL),
      11, uint(HwSPRacingF3Settings_UARTPort::IBus),
      12, uint(HwSPRacingF3Settings_UARTPort::DebugConsole),
      13, uint(HwSPRacingF3Settings_UARTPort::ComBridge),
      14, uint(HwSPRacingF3Settings_UARTPort::MSP),
      15, uint(HwSPRacingF3Settings_UARTPort::MAVLink),
      16, uint(HwSPRacingF3Settings_UARTPort::HoTTTelemetry),
      17, uint(HwSPRacingF3Settings_UARTPort::FrskySensorHub),

       0        // eod
};

void HwSPRacingF3Settings_UARTPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwSPRacingF3Settings_UARTPort::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwSPRacingF3Settings_UARTPort.data,
    qt_meta_data_HwSPRacingF3Settings_UARTPort,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwSPRacingF3Settings_UARTPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwSPRacingF3Settings_UARTPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwSPRacingF3Settings_UARTPort.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwSPRacingF3Settings_UARTPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwSPRacingF3Settings_I2CPort_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwSPRacingF3Settings_I2CPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwSPRacingF3Settings_I2CPort_t qt_meta_stringdata_HwSPRacingF3Settings_I2CPort = {
    {
QT_MOC_LITERAL(0, 0, 28), // "HwSPRacingF3Settings_I2CPort"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 8), // "Disabled"
QT_MOC_LITERAL(3, 43, 3) // "I2C"

    },
    "HwSPRacingF3Settings_I2CPort\0Enum\0"
    "Disabled\0I2C"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwSPRacingF3Settings_I2CPort[] = {

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
       2, uint(HwSPRacingF3Settings_I2CPort::Disabled),
       3, uint(HwSPRacingF3Settings_I2CPort::I2C),

       0        // eod
};

void HwSPRacingF3Settings_I2CPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwSPRacingF3Settings_I2CPort::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwSPRacingF3Settings_I2CPort.data,
    qt_meta_data_HwSPRacingF3Settings_I2CPort,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwSPRacingF3Settings_I2CPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwSPRacingF3Settings_I2CPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwSPRacingF3Settings_I2CPort.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwSPRacingF3Settings_I2CPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwSPRacingF3Settings_LEDPort_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwSPRacingF3Settings_LEDPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwSPRacingF3Settings_LEDPort_t qt_meta_stringdata_HwSPRacingF3Settings_LEDPort = {
    {
QT_MOC_LITERAL(0, 0, 28), // "HwSPRacingF3Settings_LEDPort"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 8), // "Disabled"
QT_MOC_LITERAL(3, 43, 6) // "WS281x"

    },
    "HwSPRacingF3Settings_LEDPort\0Enum\0"
    "Disabled\0WS281x"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwSPRacingF3Settings_LEDPort[] = {

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
       2, uint(HwSPRacingF3Settings_LEDPort::Disabled),
       3, uint(HwSPRacingF3Settings_LEDPort::WS281x),

       0        // eod
};

void HwSPRacingF3Settings_LEDPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwSPRacingF3Settings_LEDPort::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwSPRacingF3Settings_LEDPort.data,
    qt_meta_data_HwSPRacingF3Settings_LEDPort,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwSPRacingF3Settings_LEDPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwSPRacingF3Settings_LEDPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwSPRacingF3Settings_LEDPort.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwSPRacingF3Settings_LEDPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwSPRacingF3Settings_IOPorts_t {
    QByteArrayData data[8];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwSPRacingF3Settings_IOPorts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwSPRacingF3Settings_IOPorts_t qt_meta_stringdata_HwSPRacingF3Settings_IOPorts = {
    {
QT_MOC_LITERAL(0, 0, 28), // "HwSPRacingF3Settings_IOPorts"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 8), // "Disabled"
QT_MOC_LITERAL(3, 43, 3), // "PPM"
QT_MOC_LITERAL(4, 47, 3), // "PWM"
QT_MOC_LITERAL(5, 51, 6), // "PPMPWM"
QT_MOC_LITERAL(6, 58, 7), // "Outputs"
QT_MOC_LITERAL(7, 66, 10) // "PPMOutputs"

    },
    "HwSPRacingF3Settings_IOPorts\0Enum\0"
    "Disabled\0PPM\0PWM\0PPMPWM\0Outputs\0"
    "PPMOutputs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwSPRacingF3Settings_IOPorts[] = {

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
       2, uint(HwSPRacingF3Settings_IOPorts::Disabled),
       3, uint(HwSPRacingF3Settings_IOPorts::PPM),
       4, uint(HwSPRacingF3Settings_IOPorts::PWM),
       5, uint(HwSPRacingF3Settings_IOPorts::PPMPWM),
       6, uint(HwSPRacingF3Settings_IOPorts::Outputs),
       7, uint(HwSPRacingF3Settings_IOPorts::PPMOutputs),

       0        // eod
};

void HwSPRacingF3Settings_IOPorts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwSPRacingF3Settings_IOPorts::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwSPRacingF3Settings_IOPorts.data,
    qt_meta_data_HwSPRacingF3Settings_IOPorts,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwSPRacingF3Settings_IOPorts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwSPRacingF3Settings_IOPorts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwSPRacingF3Settings_IOPorts.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwSPRacingF3Settings_IOPorts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwSPRacingF3Settings_t {
    QByteArrayData data[53];
    char stringdata0[753];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwSPRacingF3Settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwSPRacingF3Settings_t qt_meta_stringdata_HwSPRacingF3Settings = {
    {
QT_MOC_LITERAL(0, 0, 20), // "HwSPRacingF3Settings"
QT_MOC_LITERAL(1, 21, 15), // "uartPortChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "index"
QT_MOC_LITERAL(4, 44, 35), // "HwSPRacingF3Settings_UARTPort..."
QT_MOC_LITERAL(5, 80, 5), // "value"
QT_MOC_LITERAL(6, 86, 15), // "UARTPortChanged"
QT_MOC_LITERAL(7, 102, 16), // "uartPort0Changed"
QT_MOC_LITERAL(8, 119, 17), // "UARTPort_0Changed"
QT_MOC_LITERAL(9, 137, 16), // "uartPort1Changed"
QT_MOC_LITERAL(10, 154, 17), // "UARTPort_1Changed"
QT_MOC_LITERAL(11, 172, 16), // "uartPort2Changed"
QT_MOC_LITERAL(12, 189, 17), // "UARTPort_2Changed"
QT_MOC_LITERAL(13, 207, 14), // "i2CPortChanged"
QT_MOC_LITERAL(14, 222, 34), // "HwSPRacingF3Settings_I2CPort:..."
QT_MOC_LITERAL(15, 257, 14), // "I2CPortChanged"
QT_MOC_LITERAL(16, 272, 14), // "ledPortChanged"
QT_MOC_LITERAL(17, 287, 34), // "HwSPRacingF3Settings_LEDPort:..."
QT_MOC_LITERAL(18, 322, 14), // "LEDPortChanged"
QT_MOC_LITERAL(19, 337, 14), // "ioPortsChanged"
QT_MOC_LITERAL(20, 352, 34), // "HwSPRacingF3Settings_IOPorts:..."
QT_MOC_LITERAL(21, 387, 14), // "IOPortsChanged"
QT_MOC_LITERAL(22, 402, 11), // "setUARTPort"
QT_MOC_LITERAL(23, 414, 12), // "setUARTPort0"
QT_MOC_LITERAL(24, 427, 13), // "setUARTPort_0"
QT_MOC_LITERAL(25, 441, 12), // "setUARTPort1"
QT_MOC_LITERAL(26, 454, 13), // "setUARTPort_1"
QT_MOC_LITERAL(27, 468, 12), // "setUARTPort2"
QT_MOC_LITERAL(28, 481, 13), // "setUARTPort_2"
QT_MOC_LITERAL(29, 495, 10), // "setI2CPort"
QT_MOC_LITERAL(30, 506, 10), // "setLEDPort"
QT_MOC_LITERAL(31, 517, 10), // "setIOPorts"
QT_MOC_LITERAL(32, 528, 17), // "emitNotifications"
QT_MOC_LITERAL(33, 546, 8), // "uartPort"
QT_MOC_LITERAL(34, 555, 11), // "getUARTPort"
QT_MOC_LITERAL(35, 567, 13), // "getUARTPort_0"
QT_MOC_LITERAL(36, 581, 13), // "getUARTPort_1"
QT_MOC_LITERAL(37, 595, 13), // "getUARTPort_2"
QT_MOC_LITERAL(38, 609, 10), // "getI2CPort"
QT_MOC_LITERAL(39, 620, 10), // "getLEDPort"
QT_MOC_LITERAL(40, 631, 10), // "getIOPorts"
QT_MOC_LITERAL(41, 642, 9), // "uartPort0"
QT_MOC_LITERAL(42, 652, 9), // "uartPort1"
QT_MOC_LITERAL(43, 662, 9), // "uartPort2"
QT_MOC_LITERAL(44, 672, 7), // "i2CPort"
QT_MOC_LITERAL(45, 680, 7), // "ledPort"
QT_MOC_LITERAL(46, 688, 7), // "ioPorts"
QT_MOC_LITERAL(47, 696, 10), // "UARTPort_0"
QT_MOC_LITERAL(48, 707, 10), // "UARTPort_1"
QT_MOC_LITERAL(49, 718, 10), // "UARTPort_2"
QT_MOC_LITERAL(50, 729, 7), // "I2CPort"
QT_MOC_LITERAL(51, 737, 7), // "LEDPort"
QT_MOC_LITERAL(52, 745, 7) // "IOPorts"

    },
    "HwSPRacingF3Settings\0uartPortChanged\0"
    "\0index\0HwSPRacingF3Settings_UARTPort::Enum\0"
    "value\0UARTPortChanged\0uartPort0Changed\0"
    "UARTPort_0Changed\0uartPort1Changed\0"
    "UARTPort_1Changed\0uartPort2Changed\0"
    "UARTPort_2Changed\0i2CPortChanged\0"
    "HwSPRacingF3Settings_I2CPort::Enum\0"
    "I2CPortChanged\0ledPortChanged\0"
    "HwSPRacingF3Settings_LEDPort::Enum\0"
    "LEDPortChanged\0ioPortsChanged\0"
    "HwSPRacingF3Settings_IOPorts::Enum\0"
    "IOPortsChanged\0setUARTPort\0setUARTPort0\0"
    "setUARTPort_0\0setUARTPort1\0setUARTPort_1\0"
    "setUARTPort2\0setUARTPort_2\0setI2CPort\0"
    "setLEDPort\0setIOPorts\0emitNotifications\0"
    "uartPort\0getUARTPort\0getUARTPort_0\0"
    "getUARTPort_1\0getUARTPort_2\0getI2CPort\0"
    "getLEDPort\0getIOPorts\0uartPort0\0"
    "uartPort1\0uartPort2\0i2CPort\0ledPort\0"
    "ioPorts\0UARTPort_0\0UARTPort_1\0UARTPort_2\0"
    "I2CPort\0LEDPort\0IOPorts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwSPRacingF3Settings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
      12,  304, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  199,    2, 0x06 /* Public */,
       6,    2,  204,    2, 0x06 /* Public */,
       7,    1,  209,    2, 0x06 /* Public */,
       8,    1,  212,    2, 0x06 /* Public */,
       9,    1,  215,    2, 0x06 /* Public */,
      10,    1,  218,    2, 0x06 /* Public */,
      11,    1,  221,    2, 0x06 /* Public */,
      12,    1,  224,    2, 0x06 /* Public */,
      13,    1,  227,    2, 0x06 /* Public */,
      15,    1,  230,    2, 0x06 /* Public */,
      16,    1,  233,    2, 0x06 /* Public */,
      18,    1,  236,    2, 0x06 /* Public */,
      19,    1,  239,    2, 0x06 /* Public */,
      21,    1,  242,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    2,  245,    2, 0x0a /* Public */,
      22,    2,  250,    2, 0x0a /* Public */,
      23,    1,  255,    2, 0x0a /* Public */,
      24,    1,  258,    2, 0x0a /* Public */,
      25,    1,  261,    2, 0x0a /* Public */,
      26,    1,  264,    2, 0x0a /* Public */,
      27,    1,  267,    2, 0x0a /* Public */,
      28,    1,  270,    2, 0x0a /* Public */,
      29,    1,  273,    2, 0x0a /* Public */,
      29,    1,  276,    2, 0x0a /* Public */,
      30,    1,  279,    2, 0x0a /* Public */,
      30,    1,  282,    2, 0x0a /* Public */,
      31,    1,  285,    2, 0x0a /* Public */,
      31,    1,  288,    2, 0x0a /* Public */,
      32,    0,  291,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      33,    1,  292,    2, 0x02 /* Public */,
      34,    1,  295,    2, 0x02 /* Public */,
      35,    0,  298,    2, 0x02 /* Public */,
      36,    0,  299,    2, 0x02 /* Public */,
      37,    0,  300,    2, 0x02 /* Public */,
      38,    0,  301,    2, 0x02 /* Public */,
      39,    0,  302,    2, 0x02 /* Public */,
      40,    0,  303,    2, 0x02 /* Public */,

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
    QMetaType::Void, 0x80000000 | 20,    5,
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
    QMetaType::Void, 0x80000000 | 20,    5,
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
    QMetaType::UChar,

 // properties: name, type, flags
      41, 0x80000000 | 4, 0x0049500b,
      42, 0x80000000 | 4, 0x0049500b,
      43, 0x80000000 | 4, 0x0049500b,
      44, 0x80000000 | 14, 0x0049510b,
      45, 0x80000000 | 17, 0x0049500b,
      46, 0x80000000 | 20, 0x0049500b,
      47, QMetaType::UChar, 0x00495103,
      48, QMetaType::UChar, 0x00495103,
      49, QMetaType::UChar, 0x00495103,
      50, QMetaType::UChar, 0x00495103,
      51, QMetaType::UChar, 0x00495103,
      52, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
       8,
      10,
      12,
       3,
       5,
       7,
       9,
      11,
      13,

       0        // eod
};

void HwSPRacingF3Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HwSPRacingF3Settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uartPortChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const HwSPRacingF3Settings_UARTPort::Enum(*)>(_a[2]))); break;
        case 1: _t->UARTPortChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 2: _t->uartPort0Changed((*reinterpret_cast< const HwSPRacingF3Settings_UARTPort::Enum(*)>(_a[1]))); break;
        case 3: _t->UARTPort_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->uartPort1Changed((*reinterpret_cast< const HwSPRacingF3Settings_UARTPort::Enum(*)>(_a[1]))); break;
        case 5: _t->UARTPort_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->uartPort2Changed((*reinterpret_cast< const HwSPRacingF3Settings_UARTPort::Enum(*)>(_a[1]))); break;
        case 7: _t->UARTPort_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->i2CPortChanged((*reinterpret_cast< const HwSPRacingF3Settings_I2CPort::Enum(*)>(_a[1]))); break;
        case 9: _t->I2CPortChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->ledPortChanged((*reinterpret_cast< const HwSPRacingF3Settings_LEDPort::Enum(*)>(_a[1]))); break;
        case 11: _t->LEDPortChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->ioPortsChanged((*reinterpret_cast< const HwSPRacingF3Settings_IOPorts::Enum(*)>(_a[1]))); break;
        case 13: _t->IOPortsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 14: _t->setUARTPort((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const HwSPRacingF3Settings_UARTPort::Enum(*)>(_a[2]))); break;
        case 15: _t->setUARTPort((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 16: _t->setUARTPort0((*reinterpret_cast< const HwSPRacingF3Settings_UARTPort::Enum(*)>(_a[1]))); break;
        case 17: _t->setUARTPort_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->setUARTPort1((*reinterpret_cast< const HwSPRacingF3Settings_UARTPort::Enum(*)>(_a[1]))); break;
        case 19: _t->setUARTPort_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->setUARTPort2((*reinterpret_cast< const HwSPRacingF3Settings_UARTPort::Enum(*)>(_a[1]))); break;
        case 21: _t->setUARTPort_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->setI2CPort((*reinterpret_cast< const HwSPRacingF3Settings_I2CPort::Enum(*)>(_a[1]))); break;
        case 23: _t->setI2CPort((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->setLEDPort((*reinterpret_cast< const HwSPRacingF3Settings_LEDPort::Enum(*)>(_a[1]))); break;
        case 25: _t->setLEDPort((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->setIOPorts((*reinterpret_cast< const HwSPRacingF3Settings_IOPorts::Enum(*)>(_a[1]))); break;
        case 27: _t->setIOPorts((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->emitNotifications(); break;
        case 29: { HwSPRacingF3Settings_UARTPort::Enum _r = _t->uartPort((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< HwSPRacingF3Settings_UARTPort::Enum*>(_a[0]) = std::move(_r); }  break;
        case 30: { quint8 _r = _t->getUARTPort((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 31: { quint8 _r = _t->getUARTPort_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 32: { quint8 _r = _t->getUARTPort_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 33: { quint8 _r = _t->getUARTPort_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 34: { quint8 _r = _t->getI2CPort();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 35: { quint8 _r = _t->getLEDPort();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 36: { quint8 _r = _t->getIOPorts();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HwSPRacingF3Settings::*)(quint32 , const HwSPRacingF3Settings_UARTPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::uartPortChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::UARTPortChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(const HwSPRacingF3Settings_UARTPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::uartPort0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::UARTPort_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(const HwSPRacingF3Settings_UARTPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::uartPort1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::UARTPort_1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(const HwSPRacingF3Settings_UARTPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::uartPort2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::UARTPort_2Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(const HwSPRacingF3Settings_I2CPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::i2CPortChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::I2CPortChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(const HwSPRacingF3Settings_LEDPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::ledPortChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::LEDPortChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(const HwSPRacingF3Settings_IOPorts::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::ioPortsChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (HwSPRacingF3Settings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwSPRacingF3Settings::IOPortsChanged)) {
                *result = 13;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HwSPRacingF3Settings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< HwSPRacingF3Settings_UARTPort::Enum*>(_v) = _t->uartPort0(); break;
        case 1: *reinterpret_cast< HwSPRacingF3Settings_UARTPort::Enum*>(_v) = _t->uartPort1(); break;
        case 2: *reinterpret_cast< HwSPRacingF3Settings_UARTPort::Enum*>(_v) = _t->uartPort2(); break;
        case 3: *reinterpret_cast< HwSPRacingF3Settings_I2CPort::Enum*>(_v) = _t->i2CPort(); break;
        case 4: *reinterpret_cast< HwSPRacingF3Settings_LEDPort::Enum*>(_v) = _t->ledPort(); break;
        case 5: *reinterpret_cast< HwSPRacingF3Settings_IOPorts::Enum*>(_v) = _t->ioPorts(); break;
        case 6: *reinterpret_cast< quint8*>(_v) = _t->getUARTPort_0(); break;
        case 7: *reinterpret_cast< quint8*>(_v) = _t->getUARTPort_1(); break;
        case 8: *reinterpret_cast< quint8*>(_v) = _t->getUARTPort_2(); break;
        case 9: *reinterpret_cast< quint8*>(_v) = _t->getI2CPort(); break;
        case 10: *reinterpret_cast< quint8*>(_v) = _t->getLEDPort(); break;
        case 11: *reinterpret_cast< quint8*>(_v) = _t->getIOPorts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HwSPRacingF3Settings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUARTPort0(*reinterpret_cast< HwSPRacingF3Settings_UARTPort::Enum*>(_v)); break;
        case 1: _t->setUARTPort1(*reinterpret_cast< HwSPRacingF3Settings_UARTPort::Enum*>(_v)); break;
        case 2: _t->setUARTPort2(*reinterpret_cast< HwSPRacingF3Settings_UARTPort::Enum*>(_v)); break;
        case 3: _t->setI2CPort(*reinterpret_cast< HwSPRacingF3Settings_I2CPort::Enum*>(_v)); break;
        case 4: _t->setLEDPort(*reinterpret_cast< HwSPRacingF3Settings_LEDPort::Enum*>(_v)); break;
        case 5: _t->setIOPorts(*reinterpret_cast< HwSPRacingF3Settings_IOPorts::Enum*>(_v)); break;
        case 6: _t->setUARTPort_0(*reinterpret_cast< quint8*>(_v)); break;
        case 7: _t->setUARTPort_1(*reinterpret_cast< quint8*>(_v)); break;
        case 8: _t->setUARTPort_2(*reinterpret_cast< quint8*>(_v)); break;
        case 9: _t->setI2CPort(*reinterpret_cast< quint8*>(_v)); break;
        case 10: _t->setLEDPort(*reinterpret_cast< quint8*>(_v)); break;
        case 11: _t->setIOPorts(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_HwSPRacingF3Settings[] = {
        &HwSPRacingF3Settings_UARTPort::staticMetaObject,
    &HwSPRacingF3Settings_I2CPort::staticMetaObject,
    &HwSPRacingF3Settings_LEDPort::staticMetaObject,
    &HwSPRacingF3Settings_IOPorts::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject HwSPRacingF3Settings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_HwSPRacingF3Settings.data,
    qt_meta_data_HwSPRacingF3Settings,
    qt_static_metacall,
    qt_meta_extradata_HwSPRacingF3Settings,
    nullptr
} };


const QMetaObject *HwSPRacingF3Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwSPRacingF3Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwSPRacingF3Settings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int HwSPRacingF3Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void HwSPRacingF3Settings::uartPortChanged(quint32 _t1, const HwSPRacingF3Settings_UARTPort::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HwSPRacingF3Settings::UARTPortChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HwSPRacingF3Settings::uartPort0Changed(const HwSPRacingF3Settings_UARTPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HwSPRacingF3Settings::UARTPort_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HwSPRacingF3Settings::uartPort1Changed(const HwSPRacingF3Settings_UARTPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HwSPRacingF3Settings::UARTPort_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HwSPRacingF3Settings::uartPort2Changed(const HwSPRacingF3Settings_UARTPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void HwSPRacingF3Settings::UARTPort_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void HwSPRacingF3Settings::i2CPortChanged(const HwSPRacingF3Settings_I2CPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void HwSPRacingF3Settings::I2CPortChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void HwSPRacingF3Settings::ledPortChanged(const HwSPRacingF3Settings_LEDPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void HwSPRacingF3Settings::LEDPortChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void HwSPRacingF3Settings::ioPortsChanged(const HwSPRacingF3Settings_IOPorts::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void HwSPRacingF3Settings::IOPortsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
