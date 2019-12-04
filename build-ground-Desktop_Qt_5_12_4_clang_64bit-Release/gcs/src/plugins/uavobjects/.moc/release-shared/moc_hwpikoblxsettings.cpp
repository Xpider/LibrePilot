/****************************************************************************
** Meta object code from reading C++ file 'hwpikoblxsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hwpikoblxsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hwpikoblxsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HwPikoBLXSettingsConstants_t {
    QByteArrayData data[5];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwPikoBLXSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwPikoBLXSettingsConstants_t qt_meta_stringdata_HwPikoBLXSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 26), // "HwPikoBLXSettingsConstants"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 13), // "UARTPortCount"
QT_MOC_LITERAL(3, 46, 12), // "LEDPortCount"
QT_MOC_LITERAL(4, 59, 12) // "PPMPortCount"

    },
    "HwPikoBLXSettingsConstants\0Enum\0"
    "UARTPortCount\0LEDPortCount\0PPMPortCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwPikoBLXSettingsConstants[] = {

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
       2, uint(HwPikoBLXSettingsConstants::UARTPortCount),
       3, uint(HwPikoBLXSettingsConstants::LEDPortCount),
       4, uint(HwPikoBLXSettingsConstants::PPMPortCount),

       0        // eod
};

void HwPikoBLXSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwPikoBLXSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwPikoBLXSettingsConstants.data,
    qt_meta_data_HwPikoBLXSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwPikoBLXSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwPikoBLXSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwPikoBLXSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwPikoBLXSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwPikoBLXSettings_UARTPort_t {
    QByteArrayData data[18];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwPikoBLXSettings_UARTPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwPikoBLXSettings_UARTPort_t qt_meta_stringdata_HwPikoBLXSettings_UARTPort = {
    {
QT_MOC_LITERAL(0, 0, 26), // "HwPikoBLXSettings_UARTPort"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 8), // "Disabled"
QT_MOC_LITERAL(3, 41, 9), // "Telemetry"
QT_MOC_LITERAL(4, 51, 3), // "GPS"
QT_MOC_LITERAL(5, 55, 4), // "SBus"
QT_MOC_LITERAL(6, 60, 3), // "DSM"
QT_MOC_LITERAL(7, 64, 5), // "EXBus"
QT_MOC_LITERAL(8, 70, 8), // "HoTTSUMD"
QT_MOC_LITERAL(9, 79, 8), // "HoTTSUMH"
QT_MOC_LITERAL(10, 88, 4), // "SRXL"
QT_MOC_LITERAL(11, 93, 4), // "IBus"
QT_MOC_LITERAL(12, 98, 12), // "DebugConsole"
QT_MOC_LITERAL(13, 111, 9), // "ComBridge"
QT_MOC_LITERAL(14, 121, 3), // "MSP"
QT_MOC_LITERAL(15, 125, 7), // "MAVLink"
QT_MOC_LITERAL(16, 133, 13), // "HoTTTelemetry"
QT_MOC_LITERAL(17, 147, 14) // "FrskySensorHub"

    },
    "HwPikoBLXSettings_UARTPort\0Enum\0"
    "Disabled\0Telemetry\0GPS\0SBus\0DSM\0EXBus\0"
    "HoTTSUMD\0HoTTSUMH\0SRXL\0IBus\0DebugConsole\0"
    "ComBridge\0MSP\0MAVLink\0HoTTTelemetry\0"
    "FrskySensorHub"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwPikoBLXSettings_UARTPort[] = {

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
       2, uint(HwPikoBLXSettings_UARTPort::Disabled),
       3, uint(HwPikoBLXSettings_UARTPort::Telemetry),
       4, uint(HwPikoBLXSettings_UARTPort::GPS),
       5, uint(HwPikoBLXSettings_UARTPort::SBus),
       6, uint(HwPikoBLXSettings_UARTPort::DSM),
       7, uint(HwPikoBLXSettings_UARTPort::EXBus),
       8, uint(HwPikoBLXSettings_UARTPort::HoTTSUMD),
       9, uint(HwPikoBLXSettings_UARTPort::HoTTSUMH),
      10, uint(HwPikoBLXSettings_UARTPort::SRXL),
      11, uint(HwPikoBLXSettings_UARTPort::IBus),
      12, uint(HwPikoBLXSettings_UARTPort::DebugConsole),
      13, uint(HwPikoBLXSettings_UARTPort::ComBridge),
      14, uint(HwPikoBLXSettings_UARTPort::MSP),
      15, uint(HwPikoBLXSettings_UARTPort::MAVLink),
      16, uint(HwPikoBLXSettings_UARTPort::HoTTTelemetry),
      17, uint(HwPikoBLXSettings_UARTPort::FrskySensorHub),

       0        // eod
};

void HwPikoBLXSettings_UARTPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwPikoBLXSettings_UARTPort::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwPikoBLXSettings_UARTPort.data,
    qt_meta_data_HwPikoBLXSettings_UARTPort,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwPikoBLXSettings_UARTPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwPikoBLXSettings_UARTPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwPikoBLXSettings_UARTPort.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwPikoBLXSettings_UARTPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwPikoBLXSettings_LEDPort_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwPikoBLXSettings_LEDPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwPikoBLXSettings_LEDPort_t qt_meta_stringdata_HwPikoBLXSettings_LEDPort = {
    {
QT_MOC_LITERAL(0, 0, 25), // "HwPikoBLXSettings_LEDPort"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 8), // "Disabled"
QT_MOC_LITERAL(3, 40, 6) // "WS281x"

    },
    "HwPikoBLXSettings_LEDPort\0Enum\0Disabled\0"
    "WS281x"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwPikoBLXSettings_LEDPort[] = {

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
       2, uint(HwPikoBLXSettings_LEDPort::Disabled),
       3, uint(HwPikoBLXSettings_LEDPort::WS281x),

       0        // eod
};

void HwPikoBLXSettings_LEDPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwPikoBLXSettings_LEDPort::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwPikoBLXSettings_LEDPort.data,
    qt_meta_data_HwPikoBLXSettings_LEDPort,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwPikoBLXSettings_LEDPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwPikoBLXSettings_LEDPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwPikoBLXSettings_LEDPort.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwPikoBLXSettings_LEDPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwPikoBLXSettings_PPMPort_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwPikoBLXSettings_PPMPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwPikoBLXSettings_PPMPort_t qt_meta_stringdata_HwPikoBLXSettings_PPMPort = {
    {
QT_MOC_LITERAL(0, 0, 25), // "HwPikoBLXSettings_PPMPort"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 8), // "Disabled"
QT_MOC_LITERAL(3, 40, 7) // "Enabled"

    },
    "HwPikoBLXSettings_PPMPort\0Enum\0Disabled\0"
    "Enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwPikoBLXSettings_PPMPort[] = {

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
       2, uint(HwPikoBLXSettings_PPMPort::Disabled),
       3, uint(HwPikoBLXSettings_PPMPort::Enabled),

       0        // eod
};

void HwPikoBLXSettings_PPMPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwPikoBLXSettings_PPMPort::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwPikoBLXSettings_PPMPort.data,
    qt_meta_data_HwPikoBLXSettings_PPMPort,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwPikoBLXSettings_PPMPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwPikoBLXSettings_PPMPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwPikoBLXSettings_PPMPort.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwPikoBLXSettings_PPMPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwPikoBLXSettings_t {
    QByteArrayData data[46];
    char stringdata0[638];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwPikoBLXSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwPikoBLXSettings_t qt_meta_stringdata_HwPikoBLXSettings = {
    {
QT_MOC_LITERAL(0, 0, 17), // "HwPikoBLXSettings"
QT_MOC_LITERAL(1, 18, 15), // "uartPortChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "index"
QT_MOC_LITERAL(4, 41, 32), // "HwPikoBLXSettings_UARTPort::Enum"
QT_MOC_LITERAL(5, 74, 5), // "value"
QT_MOC_LITERAL(6, 80, 15), // "UARTPortChanged"
QT_MOC_LITERAL(7, 96, 16), // "uartPort0Changed"
QT_MOC_LITERAL(8, 113, 17), // "UARTPort_0Changed"
QT_MOC_LITERAL(9, 131, 16), // "uartPort1Changed"
QT_MOC_LITERAL(10, 148, 17), // "UARTPort_1Changed"
QT_MOC_LITERAL(11, 166, 16), // "uartPort2Changed"
QT_MOC_LITERAL(12, 183, 17), // "UARTPort_2Changed"
QT_MOC_LITERAL(13, 201, 14), // "ledPortChanged"
QT_MOC_LITERAL(14, 216, 31), // "HwPikoBLXSettings_LEDPort::Enum"
QT_MOC_LITERAL(15, 248, 14), // "LEDPortChanged"
QT_MOC_LITERAL(16, 263, 14), // "ppmPortChanged"
QT_MOC_LITERAL(17, 278, 31), // "HwPikoBLXSettings_PPMPort::Enum"
QT_MOC_LITERAL(18, 310, 14), // "PPMPortChanged"
QT_MOC_LITERAL(19, 325, 11), // "setUARTPort"
QT_MOC_LITERAL(20, 337, 12), // "setUARTPort0"
QT_MOC_LITERAL(21, 350, 13), // "setUARTPort_0"
QT_MOC_LITERAL(22, 364, 12), // "setUARTPort1"
QT_MOC_LITERAL(23, 377, 13), // "setUARTPort_1"
QT_MOC_LITERAL(24, 391, 12), // "setUARTPort2"
QT_MOC_LITERAL(25, 404, 13), // "setUARTPort_2"
QT_MOC_LITERAL(26, 418, 10), // "setLEDPort"
QT_MOC_LITERAL(27, 429, 10), // "setPPMPort"
QT_MOC_LITERAL(28, 440, 17), // "emitNotifications"
QT_MOC_LITERAL(29, 458, 8), // "uartPort"
QT_MOC_LITERAL(30, 467, 11), // "getUARTPort"
QT_MOC_LITERAL(31, 479, 13), // "getUARTPort_0"
QT_MOC_LITERAL(32, 493, 13), // "getUARTPort_1"
QT_MOC_LITERAL(33, 507, 13), // "getUARTPort_2"
QT_MOC_LITERAL(34, 521, 10), // "getLEDPort"
QT_MOC_LITERAL(35, 532, 10), // "getPPMPort"
QT_MOC_LITERAL(36, 543, 9), // "uartPort0"
QT_MOC_LITERAL(37, 553, 9), // "uartPort1"
QT_MOC_LITERAL(38, 563, 9), // "uartPort2"
QT_MOC_LITERAL(39, 573, 7), // "ledPort"
QT_MOC_LITERAL(40, 581, 7), // "ppmPort"
QT_MOC_LITERAL(41, 589, 10), // "UARTPort_0"
QT_MOC_LITERAL(42, 600, 10), // "UARTPort_1"
QT_MOC_LITERAL(43, 611, 10), // "UARTPort_2"
QT_MOC_LITERAL(44, 622, 7), // "LEDPort"
QT_MOC_LITERAL(45, 630, 7) // "PPMPort"

    },
    "HwPikoBLXSettings\0uartPortChanged\0\0"
    "index\0HwPikoBLXSettings_UARTPort::Enum\0"
    "value\0UARTPortChanged\0uartPort0Changed\0"
    "UARTPort_0Changed\0uartPort1Changed\0"
    "UARTPort_1Changed\0uartPort2Changed\0"
    "UARTPort_2Changed\0ledPortChanged\0"
    "HwPikoBLXSettings_LEDPort::Enum\0"
    "LEDPortChanged\0ppmPortChanged\0"
    "HwPikoBLXSettings_PPMPort::Enum\0"
    "PPMPortChanged\0setUARTPort\0setUARTPort0\0"
    "setUARTPort_0\0setUARTPort1\0setUARTPort_1\0"
    "setUARTPort2\0setUARTPort_2\0setLEDPort\0"
    "setPPMPort\0emitNotifications\0uartPort\0"
    "getUARTPort\0getUARTPort_0\0getUARTPort_1\0"
    "getUARTPort_2\0getLEDPort\0getPPMPort\0"
    "uartPort0\0uartPort1\0uartPort2\0ledPort\0"
    "ppmPort\0UARTPort_0\0UARTPort_1\0UARTPort_2\0"
    "LEDPort\0PPMPort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwPikoBLXSettings[] = {

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
      39, 0x80000000 | 14, 0x0049500b,
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

void HwPikoBLXSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HwPikoBLXSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uartPortChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const HwPikoBLXSettings_UARTPort::Enum(*)>(_a[2]))); break;
        case 1: _t->UARTPortChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 2: _t->uartPort0Changed((*reinterpret_cast< const HwPikoBLXSettings_UARTPort::Enum(*)>(_a[1]))); break;
        case 3: _t->UARTPort_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->uartPort1Changed((*reinterpret_cast< const HwPikoBLXSettings_UARTPort::Enum(*)>(_a[1]))); break;
        case 5: _t->UARTPort_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->uartPort2Changed((*reinterpret_cast< const HwPikoBLXSettings_UARTPort::Enum(*)>(_a[1]))); break;
        case 7: _t->UARTPort_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->ledPortChanged((*reinterpret_cast< const HwPikoBLXSettings_LEDPort::Enum(*)>(_a[1]))); break;
        case 9: _t->LEDPortChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->ppmPortChanged((*reinterpret_cast< const HwPikoBLXSettings_PPMPort::Enum(*)>(_a[1]))); break;
        case 11: _t->PPMPortChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->setUARTPort((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const HwPikoBLXSettings_UARTPort::Enum(*)>(_a[2]))); break;
        case 13: _t->setUARTPort((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 14: _t->setUARTPort0((*reinterpret_cast< const HwPikoBLXSettings_UARTPort::Enum(*)>(_a[1]))); break;
        case 15: _t->setUARTPort_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 16: _t->setUARTPort1((*reinterpret_cast< const HwPikoBLXSettings_UARTPort::Enum(*)>(_a[1]))); break;
        case 17: _t->setUARTPort_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->setUARTPort2((*reinterpret_cast< const HwPikoBLXSettings_UARTPort::Enum(*)>(_a[1]))); break;
        case 19: _t->setUARTPort_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->setLEDPort((*reinterpret_cast< const HwPikoBLXSettings_LEDPort::Enum(*)>(_a[1]))); break;
        case 21: _t->setLEDPort((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->setPPMPort((*reinterpret_cast< const HwPikoBLXSettings_PPMPort::Enum(*)>(_a[1]))); break;
        case 23: _t->setPPMPort((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->emitNotifications(); break;
        case 25: { HwPikoBLXSettings_UARTPort::Enum _r = _t->uartPort((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< HwPikoBLXSettings_UARTPort::Enum*>(_a[0]) = std::move(_r); }  break;
        case 26: { quint8 _r = _t->getUARTPort((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 27: { quint8 _r = _t->getUARTPort_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 28: { quint8 _r = _t->getUARTPort_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 29: { quint8 _r = _t->getUARTPort_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 30: { quint8 _r = _t->getLEDPort();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 31: { quint8 _r = _t->getPPMPort();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HwPikoBLXSettings::*)(quint32 , const HwPikoBLXSettings_UARTPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwPikoBLXSettings::uartPortChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HwPikoBLXSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwPikoBLXSettings::UARTPortChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HwPikoBLXSettings::*)(const HwPikoBLXSettings_UARTPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwPikoBLXSettings::uartPort0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HwPikoBLXSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwPikoBLXSettings::UARTPort_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (HwPikoBLXSettings::*)(const HwPikoBLXSettings_UARTPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwPikoBLXSettings::uartPort1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HwPikoBLXSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwPikoBLXSettings::UARTPort_1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (HwPikoBLXSettings::*)(const HwPikoBLXSettings_UARTPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwPikoBLXSettings::uartPort2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (HwPikoBLXSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwPikoBLXSettings::UARTPort_2Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (HwPikoBLXSettings::*)(const HwPikoBLXSettings_LEDPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwPikoBLXSettings::ledPortChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (HwPikoBLXSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwPikoBLXSettings::LEDPortChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (HwPikoBLXSettings::*)(const HwPikoBLXSettings_PPMPort::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwPikoBLXSettings::ppmPortChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (HwPikoBLXSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwPikoBLXSettings::PPMPortChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HwPikoBLXSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< HwPikoBLXSettings_UARTPort::Enum*>(_v) = _t->uartPort0(); break;
        case 1: *reinterpret_cast< HwPikoBLXSettings_UARTPort::Enum*>(_v) = _t->uartPort1(); break;
        case 2: *reinterpret_cast< HwPikoBLXSettings_UARTPort::Enum*>(_v) = _t->uartPort2(); break;
        case 3: *reinterpret_cast< HwPikoBLXSettings_LEDPort::Enum*>(_v) = _t->ledPort(); break;
        case 4: *reinterpret_cast< HwPikoBLXSettings_PPMPort::Enum*>(_v) = _t->ppmPort(); break;
        case 5: *reinterpret_cast< quint8*>(_v) = _t->getUARTPort_0(); break;
        case 6: *reinterpret_cast< quint8*>(_v) = _t->getUARTPort_1(); break;
        case 7: *reinterpret_cast< quint8*>(_v) = _t->getUARTPort_2(); break;
        case 8: *reinterpret_cast< quint8*>(_v) = _t->getLEDPort(); break;
        case 9: *reinterpret_cast< quint8*>(_v) = _t->getPPMPort(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HwPikoBLXSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUARTPort0(*reinterpret_cast< HwPikoBLXSettings_UARTPort::Enum*>(_v)); break;
        case 1: _t->setUARTPort1(*reinterpret_cast< HwPikoBLXSettings_UARTPort::Enum*>(_v)); break;
        case 2: _t->setUARTPort2(*reinterpret_cast< HwPikoBLXSettings_UARTPort::Enum*>(_v)); break;
        case 3: _t->setLEDPort(*reinterpret_cast< HwPikoBLXSettings_LEDPort::Enum*>(_v)); break;
        case 4: _t->setPPMPort(*reinterpret_cast< HwPikoBLXSettings_PPMPort::Enum*>(_v)); break;
        case 5: _t->setUARTPort_0(*reinterpret_cast< quint8*>(_v)); break;
        case 6: _t->setUARTPort_1(*reinterpret_cast< quint8*>(_v)); break;
        case 7: _t->setUARTPort_2(*reinterpret_cast< quint8*>(_v)); break;
        case 8: _t->setLEDPort(*reinterpret_cast< quint8*>(_v)); break;
        case 9: _t->setPPMPort(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_HwPikoBLXSettings[] = {
        &HwPikoBLXSettings_UARTPort::staticMetaObject,
    &HwPikoBLXSettings_LEDPort::staticMetaObject,
    &HwPikoBLXSettings_PPMPort::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject HwPikoBLXSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_HwPikoBLXSettings.data,
    qt_meta_data_HwPikoBLXSettings,
    qt_static_metacall,
    qt_meta_extradata_HwPikoBLXSettings,
    nullptr
} };


const QMetaObject *HwPikoBLXSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwPikoBLXSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwPikoBLXSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int HwPikoBLXSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void HwPikoBLXSettings::uartPortChanged(quint32 _t1, const HwPikoBLXSettings_UARTPort::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HwPikoBLXSettings::UARTPortChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HwPikoBLXSettings::uartPort0Changed(const HwPikoBLXSettings_UARTPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HwPikoBLXSettings::UARTPort_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HwPikoBLXSettings::uartPort1Changed(const HwPikoBLXSettings_UARTPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HwPikoBLXSettings::UARTPort_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HwPikoBLXSettings::uartPort2Changed(const HwPikoBLXSettings_UARTPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void HwPikoBLXSettings::UARTPort_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void HwPikoBLXSettings::ledPortChanged(const HwPikoBLXSettings_LEDPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void HwPikoBLXSettings::LEDPortChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void HwPikoBLXSettings::ppmPortChanged(const HwPikoBLXSettings_PPMPort::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void HwPikoBLXSettings::PPMPortChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
