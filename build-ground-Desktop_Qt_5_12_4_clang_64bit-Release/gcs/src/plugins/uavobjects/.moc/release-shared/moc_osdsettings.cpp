/****************************************************************************
** Meta object code from reading C++ file 'osdsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../osdsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osdsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OsdSettingsConstants_t {
    QByteArrayData data[9];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OsdSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OsdSettingsConstants_t qt_meta_stringdata_OsdSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OsdSettingsConstants"
QT_MOC_LITERAL(1, 21, 4), // "Enum"
QT_MOC_LITERAL(2, 26, 13), // "AttitudeCount"
QT_MOC_LITERAL(3, 40, 9), // "TimeCount"
QT_MOC_LITERAL(4, 50, 12), // "BatteryCount"
QT_MOC_LITERAL(5, 63, 10), // "SpeedCount"
QT_MOC_LITERAL(6, 74, 13), // "AltitudeCount"
QT_MOC_LITERAL(7, 88, 12), // "HeadingCount"
QT_MOC_LITERAL(8, 101, 19) // "AltitudeSourceCount"

    },
    "OsdSettingsConstants\0Enum\0AttitudeCount\0"
    "TimeCount\0BatteryCount\0SpeedCount\0"
    "AltitudeCount\0HeadingCount\0"
    "AltitudeSourceCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OsdSettingsConstants[] = {

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
       2, uint(OsdSettingsConstants::AttitudeCount),
       3, uint(OsdSettingsConstants::TimeCount),
       4, uint(OsdSettingsConstants::BatteryCount),
       5, uint(OsdSettingsConstants::SpeedCount),
       6, uint(OsdSettingsConstants::AltitudeCount),
       7, uint(OsdSettingsConstants::HeadingCount),
       8, uint(OsdSettingsConstants::AltitudeSourceCount),

       0        // eod
};

void OsdSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OsdSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OsdSettingsConstants.data,
    qt_meta_data_OsdSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OsdSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OsdSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OsdSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OsdSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OsdSettings_Attitude_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OsdSettings_Attitude_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OsdSettings_Attitude_t qt_meta_stringdata_OsdSettings_Attitude = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OsdSettings_Attitude"
QT_MOC_LITERAL(1, 21, 4), // "Enum"
QT_MOC_LITERAL(2, 26, 8), // "Disabled"
QT_MOC_LITERAL(3, 35, 7) // "Enabled"

    },
    "OsdSettings_Attitude\0Enum\0Disabled\0"
    "Enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OsdSettings_Attitude[] = {

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
       2, uint(OsdSettings_Attitude::Disabled),
       3, uint(OsdSettings_Attitude::Enabled),

       0        // eod
};

void OsdSettings_Attitude::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OsdSettings_Attitude::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OsdSettings_Attitude.data,
    qt_meta_data_OsdSettings_Attitude,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OsdSettings_Attitude::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OsdSettings_Attitude::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OsdSettings_Attitude.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OsdSettings_Attitude::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OsdSettings_Time_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OsdSettings_Time_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OsdSettings_Time_t qt_meta_stringdata_OsdSettings_Time = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OsdSettings_Time"
QT_MOC_LITERAL(1, 17, 4), // "Enum"
QT_MOC_LITERAL(2, 22, 8), // "Disabled"
QT_MOC_LITERAL(3, 31, 7) // "Enabled"

    },
    "OsdSettings_Time\0Enum\0Disabled\0Enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OsdSettings_Time[] = {

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
       2, uint(OsdSettings_Time::Disabled),
       3, uint(OsdSettings_Time::Enabled),

       0        // eod
};

void OsdSettings_Time::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OsdSettings_Time::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OsdSettings_Time.data,
    qt_meta_data_OsdSettings_Time,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OsdSettings_Time::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OsdSettings_Time::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OsdSettings_Time.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OsdSettings_Time::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OsdSettings_Battery_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OsdSettings_Battery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OsdSettings_Battery_t qt_meta_stringdata_OsdSettings_Battery = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OsdSettings_Battery"
QT_MOC_LITERAL(1, 20, 4), // "Enum"
QT_MOC_LITERAL(2, 25, 8), // "Disabled"
QT_MOC_LITERAL(3, 34, 7) // "Enabled"

    },
    "OsdSettings_Battery\0Enum\0Disabled\0"
    "Enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OsdSettings_Battery[] = {

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
       2, uint(OsdSettings_Battery::Disabled),
       3, uint(OsdSettings_Battery::Enabled),

       0        // eod
};

void OsdSettings_Battery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OsdSettings_Battery::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OsdSettings_Battery.data,
    qt_meta_data_OsdSettings_Battery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OsdSettings_Battery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OsdSettings_Battery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OsdSettings_Battery.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OsdSettings_Battery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OsdSettings_Speed_t {
    QByteArrayData data[4];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OsdSettings_Speed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OsdSettings_Speed_t qt_meta_stringdata_OsdSettings_Speed = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OsdSettings_Speed"
QT_MOC_LITERAL(1, 18, 4), // "Enum"
QT_MOC_LITERAL(2, 23, 8), // "Disabled"
QT_MOC_LITERAL(3, 32, 7) // "Enabled"

    },
    "OsdSettings_Speed\0Enum\0Disabled\0Enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OsdSettings_Speed[] = {

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
       2, uint(OsdSettings_Speed::Disabled),
       3, uint(OsdSettings_Speed::Enabled),

       0        // eod
};

void OsdSettings_Speed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OsdSettings_Speed::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OsdSettings_Speed.data,
    qt_meta_data_OsdSettings_Speed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OsdSettings_Speed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OsdSettings_Speed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OsdSettings_Speed.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OsdSettings_Speed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OsdSettings_Altitude_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OsdSettings_Altitude_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OsdSettings_Altitude_t qt_meta_stringdata_OsdSettings_Altitude = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OsdSettings_Altitude"
QT_MOC_LITERAL(1, 21, 4), // "Enum"
QT_MOC_LITERAL(2, 26, 8), // "Disabled"
QT_MOC_LITERAL(3, 35, 7) // "Enabled"

    },
    "OsdSettings_Altitude\0Enum\0Disabled\0"
    "Enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OsdSettings_Altitude[] = {

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
       2, uint(OsdSettings_Altitude::Disabled),
       3, uint(OsdSettings_Altitude::Enabled),

       0        // eod
};

void OsdSettings_Altitude::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OsdSettings_Altitude::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OsdSettings_Altitude.data,
    qt_meta_data_OsdSettings_Altitude,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OsdSettings_Altitude::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OsdSettings_Altitude::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OsdSettings_Altitude.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OsdSettings_Altitude::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OsdSettings_Heading_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OsdSettings_Heading_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OsdSettings_Heading_t qt_meta_stringdata_OsdSettings_Heading = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OsdSettings_Heading"
QT_MOC_LITERAL(1, 20, 4), // "Enum"
QT_MOC_LITERAL(2, 25, 8), // "Disabled"
QT_MOC_LITERAL(3, 34, 7) // "Enabled"

    },
    "OsdSettings_Heading\0Enum\0Disabled\0"
    "Enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OsdSettings_Heading[] = {

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
       2, uint(OsdSettings_Heading::Disabled),
       3, uint(OsdSettings_Heading::Enabled),

       0        // eod
};

void OsdSettings_Heading::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OsdSettings_Heading::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OsdSettings_Heading.data,
    qt_meta_data_OsdSettings_Heading,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OsdSettings_Heading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OsdSettings_Heading::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OsdSettings_Heading.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OsdSettings_Heading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OsdSettings_AltitudeSource_t {
    QByteArrayData data[4];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OsdSettings_AltitudeSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OsdSettings_AltitudeSource_t qt_meta_stringdata_OsdSettings_AltitudeSource = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OsdSettings_AltitudeSource"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 3), // "GPS"
QT_MOC_LITERAL(3, 36, 4) // "Baro"

    },
    "OsdSettings_AltitudeSource\0Enum\0GPS\0"
    "Baro"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OsdSettings_AltitudeSource[] = {

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
       2, uint(OsdSettings_AltitudeSource::GPS),
       3, uint(OsdSettings_AltitudeSource::Baro),

       0        // eod
};

void OsdSettings_AltitudeSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OsdSettings_AltitudeSource::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OsdSettings_AltitudeSource.data,
    qt_meta_data_OsdSettings_AltitudeSource,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OsdSettings_AltitudeSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OsdSettings_AltitudeSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OsdSettings_AltitudeSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OsdSettings_AltitudeSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OsdSettings_t {
    QByteArrayData data[186];
    char stringdata0[2856];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OsdSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OsdSettings_t qt_meta_stringdata_OsdSettings = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OsdSettings"
QT_MOC_LITERAL(1, 12, 20), // "attitudeSetupChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "index"
QT_MOC_LITERAL(4, 40, 5), // "value"
QT_MOC_LITERAL(5, 46, 20), // "AttitudeSetupChanged"
QT_MOC_LITERAL(6, 67, 21), // "attitudeSetupXChanged"
QT_MOC_LITERAL(7, 89, 22), // "AttitudeSetup_XChanged"
QT_MOC_LITERAL(8, 112, 21), // "attitudeSetupYChanged"
QT_MOC_LITERAL(9, 134, 22), // "AttitudeSetup_YChanged"
QT_MOC_LITERAL(10, 157, 16), // "timeSetupChanged"
QT_MOC_LITERAL(11, 174, 16), // "TimeSetupChanged"
QT_MOC_LITERAL(12, 191, 17), // "timeSetupXChanged"
QT_MOC_LITERAL(13, 209, 18), // "TimeSetup_XChanged"
QT_MOC_LITERAL(14, 228, 17), // "timeSetupYChanged"
QT_MOC_LITERAL(15, 246, 18), // "TimeSetup_YChanged"
QT_MOC_LITERAL(16, 265, 19), // "batterySetupChanged"
QT_MOC_LITERAL(17, 285, 19), // "BatterySetupChanged"
QT_MOC_LITERAL(18, 305, 20), // "batterySetupXChanged"
QT_MOC_LITERAL(19, 326, 21), // "BatterySetup_XChanged"
QT_MOC_LITERAL(20, 348, 20), // "batterySetupYChanged"
QT_MOC_LITERAL(21, 369, 21), // "BatterySetup_YChanged"
QT_MOC_LITERAL(22, 391, 17), // "speedSetupChanged"
QT_MOC_LITERAL(23, 409, 17), // "SpeedSetupChanged"
QT_MOC_LITERAL(24, 427, 18), // "speedSetupXChanged"
QT_MOC_LITERAL(25, 446, 19), // "SpeedSetup_XChanged"
QT_MOC_LITERAL(26, 466, 18), // "speedSetupYChanged"
QT_MOC_LITERAL(27, 485, 19), // "SpeedSetup_YChanged"
QT_MOC_LITERAL(28, 505, 20), // "altitudeSetupChanged"
QT_MOC_LITERAL(29, 526, 20), // "AltitudeSetupChanged"
QT_MOC_LITERAL(30, 547, 21), // "altitudeSetupXChanged"
QT_MOC_LITERAL(31, 569, 22), // "AltitudeSetup_XChanged"
QT_MOC_LITERAL(32, 592, 21), // "altitudeSetupYChanged"
QT_MOC_LITERAL(33, 614, 22), // "AltitudeSetup_YChanged"
QT_MOC_LITERAL(34, 637, 19), // "headingSetupChanged"
QT_MOC_LITERAL(35, 657, 19), // "HeadingSetupChanged"
QT_MOC_LITERAL(36, 677, 20), // "headingSetupXChanged"
QT_MOC_LITERAL(37, 698, 21), // "HeadingSetup_XChanged"
QT_MOC_LITERAL(38, 720, 20), // "headingSetupYChanged"
QT_MOC_LITERAL(39, 741, 21), // "HeadingSetup_YChanged"
QT_MOC_LITERAL(40, 763, 15), // "attitudeChanged"
QT_MOC_LITERAL(41, 779, 26), // "OsdSettings_Attitude::Enum"
QT_MOC_LITERAL(42, 806, 15), // "AttitudeChanged"
QT_MOC_LITERAL(43, 822, 11), // "timeChanged"
QT_MOC_LITERAL(44, 834, 22), // "OsdSettings_Time::Enum"
QT_MOC_LITERAL(45, 857, 11), // "TimeChanged"
QT_MOC_LITERAL(46, 869, 14), // "batteryChanged"
QT_MOC_LITERAL(47, 884, 25), // "OsdSettings_Battery::Enum"
QT_MOC_LITERAL(48, 910, 14), // "BatteryChanged"
QT_MOC_LITERAL(49, 925, 12), // "speedChanged"
QT_MOC_LITERAL(50, 938, 23), // "OsdSettings_Speed::Enum"
QT_MOC_LITERAL(51, 962, 12), // "SpeedChanged"
QT_MOC_LITERAL(52, 975, 15), // "altitudeChanged"
QT_MOC_LITERAL(53, 991, 26), // "OsdSettings_Altitude::Enum"
QT_MOC_LITERAL(54, 1018, 15), // "AltitudeChanged"
QT_MOC_LITERAL(55, 1034, 14), // "headingChanged"
QT_MOC_LITERAL(56, 1049, 25), // "OsdSettings_Heading::Enum"
QT_MOC_LITERAL(57, 1075, 14), // "HeadingChanged"
QT_MOC_LITERAL(58, 1090, 13), // "screenChanged"
QT_MOC_LITERAL(59, 1104, 13), // "ScreenChanged"
QT_MOC_LITERAL(60, 1118, 12), // "whiteChanged"
QT_MOC_LITERAL(61, 1131, 12), // "WhiteChanged"
QT_MOC_LITERAL(62, 1144, 12), // "blackChanged"
QT_MOC_LITERAL(63, 1157, 12), // "BlackChanged"
QT_MOC_LITERAL(64, 1170, 21), // "altitudeSourceChanged"
QT_MOC_LITERAL(65, 1192, 32), // "OsdSettings_AltitudeSource::Enum"
QT_MOC_LITERAL(66, 1225, 21), // "AltitudeSourceChanged"
QT_MOC_LITERAL(67, 1247, 16), // "setAttitudeSetup"
QT_MOC_LITERAL(68, 1264, 17), // "setAttitudeSetupX"
QT_MOC_LITERAL(69, 1282, 18), // "setAttitudeSetup_X"
QT_MOC_LITERAL(70, 1301, 17), // "setAttitudeSetupY"
QT_MOC_LITERAL(71, 1319, 18), // "setAttitudeSetup_Y"
QT_MOC_LITERAL(72, 1338, 12), // "setTimeSetup"
QT_MOC_LITERAL(73, 1351, 13), // "setTimeSetupX"
QT_MOC_LITERAL(74, 1365, 14), // "setTimeSetup_X"
QT_MOC_LITERAL(75, 1380, 13), // "setTimeSetupY"
QT_MOC_LITERAL(76, 1394, 14), // "setTimeSetup_Y"
QT_MOC_LITERAL(77, 1409, 15), // "setBatterySetup"
QT_MOC_LITERAL(78, 1425, 16), // "setBatterySetupX"
QT_MOC_LITERAL(79, 1442, 17), // "setBatterySetup_X"
QT_MOC_LITERAL(80, 1460, 16), // "setBatterySetupY"
QT_MOC_LITERAL(81, 1477, 17), // "setBatterySetup_Y"
QT_MOC_LITERAL(82, 1495, 13), // "setSpeedSetup"
QT_MOC_LITERAL(83, 1509, 14), // "setSpeedSetupX"
QT_MOC_LITERAL(84, 1524, 15), // "setSpeedSetup_X"
QT_MOC_LITERAL(85, 1540, 14), // "setSpeedSetupY"
QT_MOC_LITERAL(86, 1555, 15), // "setSpeedSetup_Y"
QT_MOC_LITERAL(87, 1571, 16), // "setAltitudeSetup"
QT_MOC_LITERAL(88, 1588, 17), // "setAltitudeSetupX"
QT_MOC_LITERAL(89, 1606, 18), // "setAltitudeSetup_X"
QT_MOC_LITERAL(90, 1625, 17), // "setAltitudeSetupY"
QT_MOC_LITERAL(91, 1643, 18), // "setAltitudeSetup_Y"
QT_MOC_LITERAL(92, 1662, 15), // "setHeadingSetup"
QT_MOC_LITERAL(93, 1678, 16), // "setHeadingSetupX"
QT_MOC_LITERAL(94, 1695, 17), // "setHeadingSetup_X"
QT_MOC_LITERAL(95, 1713, 16), // "setHeadingSetupY"
QT_MOC_LITERAL(96, 1730, 17), // "setHeadingSetup_Y"
QT_MOC_LITERAL(97, 1748, 11), // "setAttitude"
QT_MOC_LITERAL(98, 1760, 7), // "setTime"
QT_MOC_LITERAL(99, 1768, 10), // "setBattery"
QT_MOC_LITERAL(100, 1779, 8), // "setSpeed"
QT_MOC_LITERAL(101, 1788, 11), // "setAltitude"
QT_MOC_LITERAL(102, 1800, 10), // "setHeading"
QT_MOC_LITERAL(103, 1811, 9), // "setScreen"
QT_MOC_LITERAL(104, 1821, 8), // "setWhite"
QT_MOC_LITERAL(105, 1830, 8), // "setBlack"
QT_MOC_LITERAL(106, 1839, 17), // "setAltitudeSource"
QT_MOC_LITERAL(107, 1857, 17), // "emitNotifications"
QT_MOC_LITERAL(108, 1875, 13), // "attitudeSetup"
QT_MOC_LITERAL(109, 1889, 16), // "getAttitudeSetup"
QT_MOC_LITERAL(110, 1906, 18), // "getAttitudeSetup_X"
QT_MOC_LITERAL(111, 1925, 18), // "getAttitudeSetup_Y"
QT_MOC_LITERAL(112, 1944, 9), // "timeSetup"
QT_MOC_LITERAL(113, 1954, 12), // "getTimeSetup"
QT_MOC_LITERAL(114, 1967, 14), // "getTimeSetup_X"
QT_MOC_LITERAL(115, 1982, 14), // "getTimeSetup_Y"
QT_MOC_LITERAL(116, 1997, 12), // "batterySetup"
QT_MOC_LITERAL(117, 2010, 15), // "getBatterySetup"
QT_MOC_LITERAL(118, 2026, 17), // "getBatterySetup_X"
QT_MOC_LITERAL(119, 2044, 17), // "getBatterySetup_Y"
QT_MOC_LITERAL(120, 2062, 10), // "speedSetup"
QT_MOC_LITERAL(121, 2073, 13), // "getSpeedSetup"
QT_MOC_LITERAL(122, 2087, 15), // "getSpeedSetup_X"
QT_MOC_LITERAL(123, 2103, 15), // "getSpeedSetup_Y"
QT_MOC_LITERAL(124, 2119, 13), // "altitudeSetup"
QT_MOC_LITERAL(125, 2133, 16), // "getAltitudeSetup"
QT_MOC_LITERAL(126, 2150, 18), // "getAltitudeSetup_X"
QT_MOC_LITERAL(127, 2169, 18), // "getAltitudeSetup_Y"
QT_MOC_LITERAL(128, 2188, 12), // "headingSetup"
QT_MOC_LITERAL(129, 2201, 15), // "getHeadingSetup"
QT_MOC_LITERAL(130, 2217, 17), // "getHeadingSetup_X"
QT_MOC_LITERAL(131, 2235, 17), // "getHeadingSetup_Y"
QT_MOC_LITERAL(132, 2253, 11), // "getAttitude"
QT_MOC_LITERAL(133, 2265, 7), // "getTime"
QT_MOC_LITERAL(134, 2273, 10), // "getBattery"
QT_MOC_LITERAL(135, 2284, 8), // "getSpeed"
QT_MOC_LITERAL(136, 2293, 11), // "getAltitude"
QT_MOC_LITERAL(137, 2305, 10), // "getHeading"
QT_MOC_LITERAL(138, 2316, 9), // "getScreen"
QT_MOC_LITERAL(139, 2326, 8), // "getWhite"
QT_MOC_LITERAL(140, 2335, 8), // "getBlack"
QT_MOC_LITERAL(141, 2344, 17), // "getAltitudeSource"
QT_MOC_LITERAL(142, 2362, 14), // "attitudeSetupX"
QT_MOC_LITERAL(143, 2377, 14), // "attitudeSetupY"
QT_MOC_LITERAL(144, 2392, 10), // "timeSetupX"
QT_MOC_LITERAL(145, 2403, 10), // "timeSetupY"
QT_MOC_LITERAL(146, 2414, 13), // "batterySetupX"
QT_MOC_LITERAL(147, 2428, 13), // "batterySetupY"
QT_MOC_LITERAL(148, 2442, 11), // "speedSetupX"
QT_MOC_LITERAL(149, 2454, 11), // "speedSetupY"
QT_MOC_LITERAL(150, 2466, 14), // "altitudeSetupX"
QT_MOC_LITERAL(151, 2481, 14), // "altitudeSetupY"
QT_MOC_LITERAL(152, 2496, 13), // "headingSetupX"
QT_MOC_LITERAL(153, 2510, 13), // "headingSetupY"
QT_MOC_LITERAL(154, 2524, 8), // "attitude"
QT_MOC_LITERAL(155, 2533, 4), // "time"
QT_MOC_LITERAL(156, 2538, 7), // "battery"
QT_MOC_LITERAL(157, 2546, 5), // "speed"
QT_MOC_LITERAL(158, 2552, 8), // "altitude"
QT_MOC_LITERAL(159, 2561, 7), // "heading"
QT_MOC_LITERAL(160, 2569, 6), // "screen"
QT_MOC_LITERAL(161, 2576, 5), // "white"
QT_MOC_LITERAL(162, 2582, 5), // "black"
QT_MOC_LITERAL(163, 2588, 14), // "altitudeSource"
QT_MOC_LITERAL(164, 2603, 15), // "AttitudeSetup_X"
QT_MOC_LITERAL(165, 2619, 15), // "AttitudeSetup_Y"
QT_MOC_LITERAL(166, 2635, 11), // "TimeSetup_X"
QT_MOC_LITERAL(167, 2647, 11), // "TimeSetup_Y"
QT_MOC_LITERAL(168, 2659, 14), // "BatterySetup_X"
QT_MOC_LITERAL(169, 2674, 14), // "BatterySetup_Y"
QT_MOC_LITERAL(170, 2689, 12), // "SpeedSetup_X"
QT_MOC_LITERAL(171, 2702, 12), // "SpeedSetup_Y"
QT_MOC_LITERAL(172, 2715, 15), // "AltitudeSetup_X"
QT_MOC_LITERAL(173, 2731, 15), // "AltitudeSetup_Y"
QT_MOC_LITERAL(174, 2747, 14), // "HeadingSetup_X"
QT_MOC_LITERAL(175, 2762, 14), // "HeadingSetup_Y"
QT_MOC_LITERAL(176, 2777, 8), // "Attitude"
QT_MOC_LITERAL(177, 2786, 4), // "Time"
QT_MOC_LITERAL(178, 2791, 7), // "Battery"
QT_MOC_LITERAL(179, 2799, 5), // "Speed"
QT_MOC_LITERAL(180, 2805, 8), // "Altitude"
QT_MOC_LITERAL(181, 2814, 7), // "Heading"
QT_MOC_LITERAL(182, 2822, 6), // "Screen"
QT_MOC_LITERAL(183, 2829, 5), // "White"
QT_MOC_LITERAL(184, 2835, 5), // "Black"
QT_MOC_LITERAL(185, 2841, 14) // "AltitudeSource"

    },
    "OsdSettings\0attitudeSetupChanged\0\0"
    "index\0value\0AttitudeSetupChanged\0"
    "attitudeSetupXChanged\0AttitudeSetup_XChanged\0"
    "attitudeSetupYChanged\0AttitudeSetup_YChanged\0"
    "timeSetupChanged\0TimeSetupChanged\0"
    "timeSetupXChanged\0TimeSetup_XChanged\0"
    "timeSetupYChanged\0TimeSetup_YChanged\0"
    "batterySetupChanged\0BatterySetupChanged\0"
    "batterySetupXChanged\0BatterySetup_XChanged\0"
    "batterySetupYChanged\0BatterySetup_YChanged\0"
    "speedSetupChanged\0SpeedSetupChanged\0"
    "speedSetupXChanged\0SpeedSetup_XChanged\0"
    "speedSetupYChanged\0SpeedSetup_YChanged\0"
    "altitudeSetupChanged\0AltitudeSetupChanged\0"
    "altitudeSetupXChanged\0AltitudeSetup_XChanged\0"
    "altitudeSetupYChanged\0AltitudeSetup_YChanged\0"
    "headingSetupChanged\0HeadingSetupChanged\0"
    "headingSetupXChanged\0HeadingSetup_XChanged\0"
    "headingSetupYChanged\0HeadingSetup_YChanged\0"
    "attitudeChanged\0OsdSettings_Attitude::Enum\0"
    "AttitudeChanged\0timeChanged\0"
    "OsdSettings_Time::Enum\0TimeChanged\0"
    "batteryChanged\0OsdSettings_Battery::Enum\0"
    "BatteryChanged\0speedChanged\0"
    "OsdSettings_Speed::Enum\0SpeedChanged\0"
    "altitudeChanged\0OsdSettings_Altitude::Enum\0"
    "AltitudeChanged\0headingChanged\0"
    "OsdSettings_Heading::Enum\0HeadingChanged\0"
    "screenChanged\0ScreenChanged\0whiteChanged\0"
    "WhiteChanged\0blackChanged\0BlackChanged\0"
    "altitudeSourceChanged\0"
    "OsdSettings_AltitudeSource::Enum\0"
    "AltitudeSourceChanged\0setAttitudeSetup\0"
    "setAttitudeSetupX\0setAttitudeSetup_X\0"
    "setAttitudeSetupY\0setAttitudeSetup_Y\0"
    "setTimeSetup\0setTimeSetupX\0setTimeSetup_X\0"
    "setTimeSetupY\0setTimeSetup_Y\0"
    "setBatterySetup\0setBatterySetupX\0"
    "setBatterySetup_X\0setBatterySetupY\0"
    "setBatterySetup_Y\0setSpeedSetup\0"
    "setSpeedSetupX\0setSpeedSetup_X\0"
    "setSpeedSetupY\0setSpeedSetup_Y\0"
    "setAltitudeSetup\0setAltitudeSetupX\0"
    "setAltitudeSetup_X\0setAltitudeSetupY\0"
    "setAltitudeSetup_Y\0setHeadingSetup\0"
    "setHeadingSetupX\0setHeadingSetup_X\0"
    "setHeadingSetupY\0setHeadingSetup_Y\0"
    "setAttitude\0setTime\0setBattery\0setSpeed\0"
    "setAltitude\0setHeading\0setScreen\0"
    "setWhite\0setBlack\0setAltitudeSource\0"
    "emitNotifications\0attitudeSetup\0"
    "getAttitudeSetup\0getAttitudeSetup_X\0"
    "getAttitudeSetup_Y\0timeSetup\0getTimeSetup\0"
    "getTimeSetup_X\0getTimeSetup_Y\0"
    "batterySetup\0getBatterySetup\0"
    "getBatterySetup_X\0getBatterySetup_Y\0"
    "speedSetup\0getSpeedSetup\0getSpeedSetup_X\0"
    "getSpeedSetup_Y\0altitudeSetup\0"
    "getAltitudeSetup\0getAltitudeSetup_X\0"
    "getAltitudeSetup_Y\0headingSetup\0"
    "getHeadingSetup\0getHeadingSetup_X\0"
    "getHeadingSetup_Y\0getAttitude\0getTime\0"
    "getBattery\0getSpeed\0getAltitude\0"
    "getHeading\0getScreen\0getWhite\0getBlack\0"
    "getAltitudeSource\0attitudeSetupX\0"
    "attitudeSetupY\0timeSetupX\0timeSetupY\0"
    "batterySetupX\0batterySetupY\0speedSetupX\0"
    "speedSetupY\0altitudeSetupX\0altitudeSetupY\0"
    "headingSetupX\0headingSetupY\0attitude\0"
    "time\0battery\0speed\0altitude\0heading\0"
    "screen\0white\0black\0altitudeSource\0"
    "AttitudeSetup_X\0AttitudeSetup_Y\0"
    "TimeSetup_X\0TimeSetup_Y\0BatterySetup_X\0"
    "BatterySetup_Y\0SpeedSetup_X\0SpeedSetup_Y\0"
    "AltitudeSetup_X\0AltitudeSetup_Y\0"
    "HeadingSetup_X\0HeadingSetup_Y\0Attitude\0"
    "Time\0Battery\0Speed\0Altitude\0Heading\0"
    "Screen\0White\0Black\0AltitudeSource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OsdSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     141,   14, // methods
      44, 1132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      56,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  719,    2, 0x06 /* Public */,
       5,    2,  724,    2, 0x06 /* Public */,
       6,    1,  729,    2, 0x06 /* Public */,
       7,    1,  732,    2, 0x06 /* Public */,
       8,    1,  735,    2, 0x06 /* Public */,
       9,    1,  738,    2, 0x06 /* Public */,
      10,    2,  741,    2, 0x06 /* Public */,
      11,    2,  746,    2, 0x06 /* Public */,
      12,    1,  751,    2, 0x06 /* Public */,
      13,    1,  754,    2, 0x06 /* Public */,
      14,    1,  757,    2, 0x06 /* Public */,
      15,    1,  760,    2, 0x06 /* Public */,
      16,    2,  763,    2, 0x06 /* Public */,
      17,    2,  768,    2, 0x06 /* Public */,
      18,    1,  773,    2, 0x06 /* Public */,
      19,    1,  776,    2, 0x06 /* Public */,
      20,    1,  779,    2, 0x06 /* Public */,
      21,    1,  782,    2, 0x06 /* Public */,
      22,    2,  785,    2, 0x06 /* Public */,
      23,    2,  790,    2, 0x06 /* Public */,
      24,    1,  795,    2, 0x06 /* Public */,
      25,    1,  798,    2, 0x06 /* Public */,
      26,    1,  801,    2, 0x06 /* Public */,
      27,    1,  804,    2, 0x06 /* Public */,
      28,    2,  807,    2, 0x06 /* Public */,
      29,    2,  812,    2, 0x06 /* Public */,
      30,    1,  817,    2, 0x06 /* Public */,
      31,    1,  820,    2, 0x06 /* Public */,
      32,    1,  823,    2, 0x06 /* Public */,
      33,    1,  826,    2, 0x06 /* Public */,
      34,    2,  829,    2, 0x06 /* Public */,
      35,    2,  834,    2, 0x06 /* Public */,
      36,    1,  839,    2, 0x06 /* Public */,
      37,    1,  842,    2, 0x06 /* Public */,
      38,    1,  845,    2, 0x06 /* Public */,
      39,    1,  848,    2, 0x06 /* Public */,
      40,    1,  851,    2, 0x06 /* Public */,
      42,    1,  854,    2, 0x06 /* Public */,
      43,    1,  857,    2, 0x06 /* Public */,
      45,    1,  860,    2, 0x06 /* Public */,
      46,    1,  863,    2, 0x06 /* Public */,
      48,    1,  866,    2, 0x06 /* Public */,
      49,    1,  869,    2, 0x06 /* Public */,
      51,    1,  872,    2, 0x06 /* Public */,
      52,    1,  875,    2, 0x06 /* Public */,
      54,    1,  878,    2, 0x06 /* Public */,
      55,    1,  881,    2, 0x06 /* Public */,
      57,    1,  884,    2, 0x06 /* Public */,
      58,    1,  887,    2, 0x06 /* Public */,
      59,    1,  890,    2, 0x06 /* Public */,
      60,    1,  893,    2, 0x06 /* Public */,
      61,    1,  896,    2, 0x06 /* Public */,
      62,    1,  899,    2, 0x06 /* Public */,
      63,    1,  902,    2, 0x06 /* Public */,
      64,    1,  905,    2, 0x06 /* Public */,
      66,    1,  908,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      67,    2,  911,    2, 0x0a /* Public */,
      68,    1,  916,    2, 0x0a /* Public */,
      69,    1,  919,    2, 0x0a /* Public */,
      70,    1,  922,    2, 0x0a /* Public */,
      71,    1,  925,    2, 0x0a /* Public */,
      72,    2,  928,    2, 0x0a /* Public */,
      73,    1,  933,    2, 0x0a /* Public */,
      74,    1,  936,    2, 0x0a /* Public */,
      75,    1,  939,    2, 0x0a /* Public */,
      76,    1,  942,    2, 0x0a /* Public */,
      77,    2,  945,    2, 0x0a /* Public */,
      78,    1,  950,    2, 0x0a /* Public */,
      79,    1,  953,    2, 0x0a /* Public */,
      80,    1,  956,    2, 0x0a /* Public */,
      81,    1,  959,    2, 0x0a /* Public */,
      82,    2,  962,    2, 0x0a /* Public */,
      83,    1,  967,    2, 0x0a /* Public */,
      84,    1,  970,    2, 0x0a /* Public */,
      85,    1,  973,    2, 0x0a /* Public */,
      86,    1,  976,    2, 0x0a /* Public */,
      87,    2,  979,    2, 0x0a /* Public */,
      88,    1,  984,    2, 0x0a /* Public */,
      89,    1,  987,    2, 0x0a /* Public */,
      90,    1,  990,    2, 0x0a /* Public */,
      91,    1,  993,    2, 0x0a /* Public */,
      92,    2,  996,    2, 0x0a /* Public */,
      93,    1, 1001,    2, 0x0a /* Public */,
      94,    1, 1004,    2, 0x0a /* Public */,
      95,    1, 1007,    2, 0x0a /* Public */,
      96,    1, 1010,    2, 0x0a /* Public */,
      97,    1, 1013,    2, 0x0a /* Public */,
      97,    1, 1016,    2, 0x0a /* Public */,
      98,    1, 1019,    2, 0x0a /* Public */,
      98,    1, 1022,    2, 0x0a /* Public */,
      99,    1, 1025,    2, 0x0a /* Public */,
      99,    1, 1028,    2, 0x0a /* Public */,
     100,    1, 1031,    2, 0x0a /* Public */,
     100,    1, 1034,    2, 0x0a /* Public */,
     101,    1, 1037,    2, 0x0a /* Public */,
     101,    1, 1040,    2, 0x0a /* Public */,
     102,    1, 1043,    2, 0x0a /* Public */,
     102,    1, 1046,    2, 0x0a /* Public */,
     103,    1, 1049,    2, 0x0a /* Public */,
     103,    1, 1052,    2, 0x0a /* Public */,
     104,    1, 1055,    2, 0x0a /* Public */,
     104,    1, 1058,    2, 0x0a /* Public */,
     105,    1, 1061,    2, 0x0a /* Public */,
     105,    1, 1064,    2, 0x0a /* Public */,
     106,    1, 1067,    2, 0x0a /* Public */,
     106,    1, 1070,    2, 0x0a /* Public */,
     107,    0, 1073,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     108,    1, 1074,    2, 0x02 /* Public */,
     109,    1, 1077,    2, 0x02 /* Public */,
     110,    0, 1080,    2, 0x02 /* Public */,
     111,    0, 1081,    2, 0x02 /* Public */,
     112,    1, 1082,    2, 0x02 /* Public */,
     113,    1, 1085,    2, 0x02 /* Public */,
     114,    0, 1088,    2, 0x02 /* Public */,
     115,    0, 1089,    2, 0x02 /* Public */,
     116,    1, 1090,    2, 0x02 /* Public */,
     117,    1, 1093,    2, 0x02 /* Public */,
     118,    0, 1096,    2, 0x02 /* Public */,
     119,    0, 1097,    2, 0x02 /* Public */,
     120,    1, 1098,    2, 0x02 /* Public */,
     121,    1, 1101,    2, 0x02 /* Public */,
     122,    0, 1104,    2, 0x02 /* Public */,
     123,    0, 1105,    2, 0x02 /* Public */,
     124,    1, 1106,    2, 0x02 /* Public */,
     125,    1, 1109,    2, 0x02 /* Public */,
     126,    0, 1112,    2, 0x02 /* Public */,
     127,    0, 1113,    2, 0x02 /* Public */,
     128,    1, 1114,    2, 0x02 /* Public */,
     129,    1, 1117,    2, 0x02 /* Public */,
     130,    0, 1120,    2, 0x02 /* Public */,
     131,    0, 1121,    2, 0x02 /* Public */,
     132,    0, 1122,    2, 0x02 /* Public */,
     133,    0, 1123,    2, 0x02 /* Public */,
     134,    0, 1124,    2, 0x02 /* Public */,
     135,    0, 1125,    2, 0x02 /* Public */,
     136,    0, 1126,    2, 0x02 /* Public */,
     137,    0, 1127,    2, 0x02 /* Public */,
     138,    0, 1128,    2, 0x02 /* Public */,
     139,    0, 1129,    2, 0x02 /* Public */,
     140,    0, 1130,    2, 0x02 /* Public */,
     141,    0, 1131,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, 0x80000000 | 41,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 44,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 47,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 50,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 56,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 65,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, 0x80000000 | 41,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 44,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 47,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 50,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 56,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 65,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
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
     142, QMetaType::Short, 0x00495103,
     143, QMetaType::Short, 0x00495103,
     144, QMetaType::Short, 0x00495103,
     145, QMetaType::Short, 0x00495103,
     146, QMetaType::Short, 0x00495103,
     147, QMetaType::Short, 0x00495103,
     148, QMetaType::Short, 0x00495103,
     149, QMetaType::Short, 0x00495103,
     150, QMetaType::Short, 0x00495103,
     151, QMetaType::Short, 0x00495103,
     152, QMetaType::Short, 0x00495103,
     153, QMetaType::Short, 0x00495103,
     154, 0x80000000 | 41, 0x0049510b,
     155, 0x80000000 | 44, 0x0049510b,
     156, 0x80000000 | 47, 0x0049510b,
     157, 0x80000000 | 50, 0x0049510b,
     158, 0x80000000 | 53, 0x0049510b,
     159, 0x80000000 | 56, 0x0049510b,
     160, QMetaType::UShort, 0x00495103,
     161, QMetaType::UShort, 0x00495103,
     162, QMetaType::UShort, 0x00495103,
     163, 0x80000000 | 65, 0x0049510b,
     164, QMetaType::Short, 0x00495103,
     165, QMetaType::Short, 0x00495103,
     166, QMetaType::Short, 0x00495103,
     167, QMetaType::Short, 0x00495103,
     168, QMetaType::Short, 0x00495103,
     169, QMetaType::Short, 0x00495103,
     170, QMetaType::Short, 0x00495103,
     171, QMetaType::Short, 0x00495103,
     172, QMetaType::Short, 0x00495103,
     173, QMetaType::Short, 0x00495103,
     174, QMetaType::Short, 0x00495103,
     175, QMetaType::Short, 0x00495103,
     176, QMetaType::UChar, 0x00495103,
     177, QMetaType::UChar, 0x00495103,
     178, QMetaType::UChar, 0x00495103,
     179, QMetaType::UChar, 0x00495103,
     180, QMetaType::UChar, 0x00495103,
     181, QMetaType::UChar, 0x00495103,
     182, QMetaType::UChar, 0x00495103,
     183, QMetaType::UChar, 0x00495103,
     184, QMetaType::UChar, 0x00495103,
     185, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       8,
      10,
      14,
      16,
      20,
      22,
      26,
      28,
      32,
      34,
      36,
      38,
      40,
      42,
      44,
      46,
      48,
      50,
      52,
      54,
       3,
       5,
       9,
      11,
      15,
      17,
      21,
      23,
      27,
      29,
      33,
      35,
      37,
      39,
      41,
      43,
      45,
      47,
      49,
      51,
      53,
      55,

       0        // eod
};

void OsdSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OsdSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->attitudeSetupChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 1: _t->AttitudeSetupChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 2: _t->attitudeSetupXChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 3: _t->AttitudeSetup_XChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 4: _t->attitudeSetupYChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 5: _t->AttitudeSetup_YChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 6: _t->timeSetupChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 7: _t->TimeSetupChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 8: _t->timeSetupXChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 9: _t->TimeSetup_XChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 10: _t->timeSetupYChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 11: _t->TimeSetup_YChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 12: _t->batterySetupChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 13: _t->BatterySetupChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 14: _t->batterySetupXChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 15: _t->BatterySetup_XChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 16: _t->batterySetupYChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 17: _t->BatterySetup_YChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 18: _t->speedSetupChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 19: _t->SpeedSetupChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 20: _t->speedSetupXChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 21: _t->SpeedSetup_XChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 22: _t->speedSetupYChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 23: _t->SpeedSetup_YChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 24: _t->altitudeSetupChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 25: _t->AltitudeSetupChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 26: _t->altitudeSetupXChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 27: _t->AltitudeSetup_XChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 28: _t->altitudeSetupYChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 29: _t->AltitudeSetup_YChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 30: _t->headingSetupChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 31: _t->HeadingSetupChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 32: _t->headingSetupXChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 33: _t->HeadingSetup_XChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 34: _t->headingSetupYChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 35: _t->HeadingSetup_YChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 36: _t->attitudeChanged((*reinterpret_cast< const OsdSettings_Attitude::Enum(*)>(_a[1]))); break;
        case 37: _t->AttitudeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->timeChanged((*reinterpret_cast< const OsdSettings_Time::Enum(*)>(_a[1]))); break;
        case 39: _t->TimeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->batteryChanged((*reinterpret_cast< const OsdSettings_Battery::Enum(*)>(_a[1]))); break;
        case 41: _t->BatteryChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->speedChanged((*reinterpret_cast< const OsdSettings_Speed::Enum(*)>(_a[1]))); break;
        case 43: _t->SpeedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->altitudeChanged((*reinterpret_cast< const OsdSettings_Altitude::Enum(*)>(_a[1]))); break;
        case 45: _t->AltitudeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->headingChanged((*reinterpret_cast< const OsdSettings_Heading::Enum(*)>(_a[1]))); break;
        case 47: _t->HeadingChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 48: _t->screenChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 49: _t->ScreenChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 50: _t->whiteChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 51: _t->WhiteChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->blackChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 53: _t->BlackChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 54: _t->altitudeSourceChanged((*reinterpret_cast< const OsdSettings_AltitudeSource::Enum(*)>(_a[1]))); break;
        case 55: _t->AltitudeSourceChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 56: _t->setAttitudeSetup((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 57: _t->setAttitudeSetupX((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 58: _t->setAttitudeSetup_X((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 59: _t->setAttitudeSetupY((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 60: _t->setAttitudeSetup_Y((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 61: _t->setTimeSetup((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 62: _t->setTimeSetupX((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 63: _t->setTimeSetup_X((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 64: _t->setTimeSetupY((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 65: _t->setTimeSetup_Y((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 66: _t->setBatterySetup((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 67: _t->setBatterySetupX((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 68: _t->setBatterySetup_X((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 69: _t->setBatterySetupY((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 70: _t->setBatterySetup_Y((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 71: _t->setSpeedSetup((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 72: _t->setSpeedSetupX((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 73: _t->setSpeedSetup_X((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 74: _t->setSpeedSetupY((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 75: _t->setSpeedSetup_Y((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 76: _t->setAltitudeSetup((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 77: _t->setAltitudeSetupX((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 78: _t->setAltitudeSetup_X((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 79: _t->setAltitudeSetupY((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 80: _t->setAltitudeSetup_Y((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 81: _t->setHeadingSetup((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 82: _t->setHeadingSetupX((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 83: _t->setHeadingSetup_X((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 84: _t->setHeadingSetupY((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 85: _t->setHeadingSetup_Y((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 86: _t->setAttitude((*reinterpret_cast< const OsdSettings_Attitude::Enum(*)>(_a[1]))); break;
        case 87: _t->setAttitude((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 88: _t->setTime((*reinterpret_cast< const OsdSettings_Time::Enum(*)>(_a[1]))); break;
        case 89: _t->setTime((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 90: _t->setBattery((*reinterpret_cast< const OsdSettings_Battery::Enum(*)>(_a[1]))); break;
        case 91: _t->setBattery((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 92: _t->setSpeed((*reinterpret_cast< const OsdSettings_Speed::Enum(*)>(_a[1]))); break;
        case 93: _t->setSpeed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 94: _t->setAltitude((*reinterpret_cast< const OsdSettings_Altitude::Enum(*)>(_a[1]))); break;
        case 95: _t->setAltitude((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 96: _t->setHeading((*reinterpret_cast< const OsdSettings_Heading::Enum(*)>(_a[1]))); break;
        case 97: _t->setHeading((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 98: _t->setScreen((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 99: _t->setScreen((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 100: _t->setWhite((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 101: _t->setWhite((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 102: _t->setBlack((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 103: _t->setBlack((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->setAltitudeSource((*reinterpret_cast< const OsdSettings_AltitudeSource::Enum(*)>(_a[1]))); break;
        case 105: _t->setAltitudeSource((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 106: _t->emitNotifications(); break;
        case 107: { qint16 _r = _t->attitudeSetup((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 108: { qint16 _r = _t->getAttitudeSetup((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 109: { qint16 _r = _t->getAttitudeSetup_X();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 110: { qint16 _r = _t->getAttitudeSetup_Y();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 111: { qint16 _r = _t->timeSetup((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 112: { qint16 _r = _t->getTimeSetup((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 113: { qint16 _r = _t->getTimeSetup_X();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 114: { qint16 _r = _t->getTimeSetup_Y();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 115: { qint16 _r = _t->batterySetup((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 116: { qint16 _r = _t->getBatterySetup((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 117: { qint16 _r = _t->getBatterySetup_X();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 118: { qint16 _r = _t->getBatterySetup_Y();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 119: { qint16 _r = _t->speedSetup((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 120: { qint16 _r = _t->getSpeedSetup((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 121: { qint16 _r = _t->getSpeedSetup_X();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 122: { qint16 _r = _t->getSpeedSetup_Y();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 123: { qint16 _r = _t->altitudeSetup((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 124: { qint16 _r = _t->getAltitudeSetup((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 125: { qint16 _r = _t->getAltitudeSetup_X();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 126: { qint16 _r = _t->getAltitudeSetup_Y();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 127: { qint16 _r = _t->headingSetup((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 128: { qint16 _r = _t->getHeadingSetup((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 129: { qint16 _r = _t->getHeadingSetup_X();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 130: { qint16 _r = _t->getHeadingSetup_Y();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 131: { quint8 _r = _t->getAttitude();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 132: { quint8 _r = _t->getTime();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 133: { quint8 _r = _t->getBattery();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 134: { quint8 _r = _t->getSpeed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 135: { quint8 _r = _t->getAltitude();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 136: { quint8 _r = _t->getHeading();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 137: { quint8 _r = _t->getScreen();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 138: { quint8 _r = _t->getWhite();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 139: { quint8 _r = _t->getBlack();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 140: { quint8 _r = _t->getAltitudeSource();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OsdSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::attitudeSetupChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::AttitudeSetupChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::attitudeSetupXChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::AttitudeSetup_XChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::attitudeSetupYChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::AttitudeSetup_YChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::timeSetupChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::TimeSetupChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::timeSetupXChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::TimeSetup_XChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::timeSetupYChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::TimeSetup_YChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::batterySetupChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::BatterySetupChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::batterySetupXChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::BatterySetup_XChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::batterySetupYChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::BatterySetup_YChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::speedSetupChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::SpeedSetupChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::speedSetupXChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::SpeedSetup_XChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::speedSetupYChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::SpeedSetup_YChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::altitudeSetupChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::AltitudeSetupChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::altitudeSetupXChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::AltitudeSetup_XChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::altitudeSetupYChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::AltitudeSetup_YChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::headingSetupChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::HeadingSetupChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::headingSetupXChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::HeadingSetup_XChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::headingSetupYChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::HeadingSetup_YChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const OsdSettings_Attitude::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::attitudeChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::AttitudeChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const OsdSettings_Time::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::timeChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::TimeChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const OsdSettings_Battery::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::batteryChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::BatteryChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const OsdSettings_Speed::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::speedChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::SpeedChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const OsdSettings_Altitude::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::altitudeChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::AltitudeChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const OsdSettings_Heading::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::headingChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::HeadingChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::screenChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::ScreenChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::whiteChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::WhiteChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::blackChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::BlackChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(const OsdSettings_AltitudeSource::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::altitudeSourceChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (OsdSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OsdSettings::AltitudeSourceChanged)) {
                *result = 55;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OsdSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint16*>(_v) = _t->attitudeSetupX(); break;
        case 1: *reinterpret_cast< qint16*>(_v) = _t->attitudeSetupY(); break;
        case 2: *reinterpret_cast< qint16*>(_v) = _t->timeSetupX(); break;
        case 3: *reinterpret_cast< qint16*>(_v) = _t->timeSetupY(); break;
        case 4: *reinterpret_cast< qint16*>(_v) = _t->batterySetupX(); break;
        case 5: *reinterpret_cast< qint16*>(_v) = _t->batterySetupY(); break;
        case 6: *reinterpret_cast< qint16*>(_v) = _t->speedSetupX(); break;
        case 7: *reinterpret_cast< qint16*>(_v) = _t->speedSetupY(); break;
        case 8: *reinterpret_cast< qint16*>(_v) = _t->altitudeSetupX(); break;
        case 9: *reinterpret_cast< qint16*>(_v) = _t->altitudeSetupY(); break;
        case 10: *reinterpret_cast< qint16*>(_v) = _t->headingSetupX(); break;
        case 11: *reinterpret_cast< qint16*>(_v) = _t->headingSetupY(); break;
        case 12: *reinterpret_cast< OsdSettings_Attitude::Enum*>(_v) = _t->attitude(); break;
        case 13: *reinterpret_cast< OsdSettings_Time::Enum*>(_v) = _t->time(); break;
        case 14: *reinterpret_cast< OsdSettings_Battery::Enum*>(_v) = _t->battery(); break;
        case 15: *reinterpret_cast< OsdSettings_Speed::Enum*>(_v) = _t->speed(); break;
        case 16: *reinterpret_cast< OsdSettings_Altitude::Enum*>(_v) = _t->altitude(); break;
        case 17: *reinterpret_cast< OsdSettings_Heading::Enum*>(_v) = _t->heading(); break;
        case 18: *reinterpret_cast< quint16*>(_v) = _t->screen(); break;
        case 19: *reinterpret_cast< quint16*>(_v) = _t->white(); break;
        case 20: *reinterpret_cast< quint16*>(_v) = _t->black(); break;
        case 21: *reinterpret_cast< OsdSettings_AltitudeSource::Enum*>(_v) = _t->altitudeSource(); break;
        case 22: *reinterpret_cast< qint16*>(_v) = _t->getAttitudeSetup_X(); break;
        case 23: *reinterpret_cast< qint16*>(_v) = _t->getAttitudeSetup_Y(); break;
        case 24: *reinterpret_cast< qint16*>(_v) = _t->getTimeSetup_X(); break;
        case 25: *reinterpret_cast< qint16*>(_v) = _t->getTimeSetup_Y(); break;
        case 26: *reinterpret_cast< qint16*>(_v) = _t->getBatterySetup_X(); break;
        case 27: *reinterpret_cast< qint16*>(_v) = _t->getBatterySetup_Y(); break;
        case 28: *reinterpret_cast< qint16*>(_v) = _t->getSpeedSetup_X(); break;
        case 29: *reinterpret_cast< qint16*>(_v) = _t->getSpeedSetup_Y(); break;
        case 30: *reinterpret_cast< qint16*>(_v) = _t->getAltitudeSetup_X(); break;
        case 31: *reinterpret_cast< qint16*>(_v) = _t->getAltitudeSetup_Y(); break;
        case 32: *reinterpret_cast< qint16*>(_v) = _t->getHeadingSetup_X(); break;
        case 33: *reinterpret_cast< qint16*>(_v) = _t->getHeadingSetup_Y(); break;
        case 34: *reinterpret_cast< quint8*>(_v) = _t->getAttitude(); break;
        case 35: *reinterpret_cast< quint8*>(_v) = _t->getTime(); break;
        case 36: *reinterpret_cast< quint8*>(_v) = _t->getBattery(); break;
        case 37: *reinterpret_cast< quint8*>(_v) = _t->getSpeed(); break;
        case 38: *reinterpret_cast< quint8*>(_v) = _t->getAltitude(); break;
        case 39: *reinterpret_cast< quint8*>(_v) = _t->getHeading(); break;
        case 40: *reinterpret_cast< quint8*>(_v) = _t->getScreen(); break;
        case 41: *reinterpret_cast< quint8*>(_v) = _t->getWhite(); break;
        case 42: *reinterpret_cast< quint8*>(_v) = _t->getBlack(); break;
        case 43: *reinterpret_cast< quint8*>(_v) = _t->getAltitudeSource(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OsdSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAttitudeSetupX(*reinterpret_cast< qint16*>(_v)); break;
        case 1: _t->setAttitudeSetupY(*reinterpret_cast< qint16*>(_v)); break;
        case 2: _t->setTimeSetupX(*reinterpret_cast< qint16*>(_v)); break;
        case 3: _t->setTimeSetupY(*reinterpret_cast< qint16*>(_v)); break;
        case 4: _t->setBatterySetupX(*reinterpret_cast< qint16*>(_v)); break;
        case 5: _t->setBatterySetupY(*reinterpret_cast< qint16*>(_v)); break;
        case 6: _t->setSpeedSetupX(*reinterpret_cast< qint16*>(_v)); break;
        case 7: _t->setSpeedSetupY(*reinterpret_cast< qint16*>(_v)); break;
        case 8: _t->setAltitudeSetupX(*reinterpret_cast< qint16*>(_v)); break;
        case 9: _t->setAltitudeSetupY(*reinterpret_cast< qint16*>(_v)); break;
        case 10: _t->setHeadingSetupX(*reinterpret_cast< qint16*>(_v)); break;
        case 11: _t->setHeadingSetupY(*reinterpret_cast< qint16*>(_v)); break;
        case 12: _t->setAttitude(*reinterpret_cast< OsdSettings_Attitude::Enum*>(_v)); break;
        case 13: _t->setTime(*reinterpret_cast< OsdSettings_Time::Enum*>(_v)); break;
        case 14: _t->setBattery(*reinterpret_cast< OsdSettings_Battery::Enum*>(_v)); break;
        case 15: _t->setSpeed(*reinterpret_cast< OsdSettings_Speed::Enum*>(_v)); break;
        case 16: _t->setAltitude(*reinterpret_cast< OsdSettings_Altitude::Enum*>(_v)); break;
        case 17: _t->setHeading(*reinterpret_cast< OsdSettings_Heading::Enum*>(_v)); break;
        case 18: _t->setScreen(*reinterpret_cast< quint16*>(_v)); break;
        case 19: _t->setWhite(*reinterpret_cast< quint16*>(_v)); break;
        case 20: _t->setBlack(*reinterpret_cast< quint16*>(_v)); break;
        case 21: _t->setAltitudeSource(*reinterpret_cast< OsdSettings_AltitudeSource::Enum*>(_v)); break;
        case 22: _t->setAttitudeSetup_X(*reinterpret_cast< qint16*>(_v)); break;
        case 23: _t->setAttitudeSetup_Y(*reinterpret_cast< qint16*>(_v)); break;
        case 24: _t->setTimeSetup_X(*reinterpret_cast< qint16*>(_v)); break;
        case 25: _t->setTimeSetup_Y(*reinterpret_cast< qint16*>(_v)); break;
        case 26: _t->setBatterySetup_X(*reinterpret_cast< qint16*>(_v)); break;
        case 27: _t->setBatterySetup_Y(*reinterpret_cast< qint16*>(_v)); break;
        case 28: _t->setSpeedSetup_X(*reinterpret_cast< qint16*>(_v)); break;
        case 29: _t->setSpeedSetup_Y(*reinterpret_cast< qint16*>(_v)); break;
        case 30: _t->setAltitudeSetup_X(*reinterpret_cast< qint16*>(_v)); break;
        case 31: _t->setAltitudeSetup_Y(*reinterpret_cast< qint16*>(_v)); break;
        case 32: _t->setHeadingSetup_X(*reinterpret_cast< qint16*>(_v)); break;
        case 33: _t->setHeadingSetup_Y(*reinterpret_cast< qint16*>(_v)); break;
        case 34: _t->setAttitude(*reinterpret_cast< quint8*>(_v)); break;
        case 35: _t->setTime(*reinterpret_cast< quint8*>(_v)); break;
        case 36: _t->setBattery(*reinterpret_cast< quint8*>(_v)); break;
        case 37: _t->setSpeed(*reinterpret_cast< quint8*>(_v)); break;
        case 38: _t->setAltitude(*reinterpret_cast< quint8*>(_v)); break;
        case 39: _t->setHeading(*reinterpret_cast< quint8*>(_v)); break;
        case 40: _t->setScreen(*reinterpret_cast< quint8*>(_v)); break;
        case 41: _t->setWhite(*reinterpret_cast< quint8*>(_v)); break;
        case 42: _t->setBlack(*reinterpret_cast< quint8*>(_v)); break;
        case 43: _t->setAltitudeSource(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_OsdSettings[] = {
        &OsdSettings_Attitude::staticMetaObject,
    &OsdSettings_Time::staticMetaObject,
    &OsdSettings_Battery::staticMetaObject,
    &OsdSettings_Speed::staticMetaObject,
    &OsdSettings_Altitude::staticMetaObject,
    &OsdSettings_Heading::staticMetaObject,
    &OsdSettings_AltitudeSource::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject OsdSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_OsdSettings.data,
    qt_meta_data_OsdSettings,
    qt_static_metacall,
    qt_meta_extradata_OsdSettings,
    nullptr
} };


const QMetaObject *OsdSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OsdSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OsdSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int OsdSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 141)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 141;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 141)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 141;
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
void OsdSettings::attitudeSetupChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OsdSettings::AttitudeSetupChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OsdSettings::attitudeSetupXChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OsdSettings::AttitudeSetup_XChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OsdSettings::attitudeSetupYChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OsdSettings::AttitudeSetup_YChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OsdSettings::timeSetupChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OsdSettings::TimeSetupChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OsdSettings::timeSetupXChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void OsdSettings::TimeSetup_XChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void OsdSettings::timeSetupYChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void OsdSettings::TimeSetup_YChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void OsdSettings::batterySetupChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void OsdSettings::BatterySetupChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void OsdSettings::batterySetupXChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void OsdSettings::BatterySetup_XChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void OsdSettings::batterySetupYChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void OsdSettings::BatterySetup_YChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void OsdSettings::speedSetupChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void OsdSettings::SpeedSetupChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void OsdSettings::speedSetupXChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void OsdSettings::SpeedSetup_XChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void OsdSettings::speedSetupYChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void OsdSettings::SpeedSetup_YChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void OsdSettings::altitudeSetupChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void OsdSettings::AltitudeSetupChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void OsdSettings::altitudeSetupXChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void OsdSettings::AltitudeSetup_XChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void OsdSettings::altitudeSetupYChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void OsdSettings::AltitudeSetup_YChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void OsdSettings::headingSetupChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void OsdSettings::HeadingSetupChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void OsdSettings::headingSetupXChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void OsdSettings::HeadingSetup_XChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void OsdSettings::headingSetupYChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void OsdSettings::HeadingSetup_YChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void OsdSettings::attitudeChanged(const OsdSettings_Attitude::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void OsdSettings::AttitudeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void OsdSettings::timeChanged(const OsdSettings_Time::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void OsdSettings::TimeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void OsdSettings::batteryChanged(const OsdSettings_Battery::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void OsdSettings::BatteryChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void OsdSettings::speedChanged(const OsdSettings_Speed::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void OsdSettings::SpeedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void OsdSettings::altitudeChanged(const OsdSettings_Altitude::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void OsdSettings::AltitudeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void OsdSettings::headingChanged(const OsdSettings_Heading::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void OsdSettings::HeadingChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void OsdSettings::screenChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void OsdSettings::ScreenChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void OsdSettings::whiteChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void OsdSettings::WhiteChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void OsdSettings::blackChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void OsdSettings::BlackChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void OsdSettings::altitudeSourceChanged(const OsdSettings_AltitudeSource::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void OsdSettings::AltitudeSourceChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
