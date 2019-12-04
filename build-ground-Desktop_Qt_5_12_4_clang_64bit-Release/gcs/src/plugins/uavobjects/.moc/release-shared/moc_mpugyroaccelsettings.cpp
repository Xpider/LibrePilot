/****************************************************************************
** Meta object code from reading C++ file 'mpugyroaccelsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mpugyroaccelsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpugyroaccelsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MPUGyroAccelSettingsConstants_t {
    QByteArrayData data[5];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MPUGyroAccelSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MPUGyroAccelSettingsConstants_t qt_meta_stringdata_MPUGyroAccelSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 29), // "MPUGyroAccelSettingsConstants"
QT_MOC_LITERAL(1, 30, 4), // "Enum"
QT_MOC_LITERAL(2, 35, 14), // "GyroScaleCount"
QT_MOC_LITERAL(3, 50, 15), // "AccelScaleCount"
QT_MOC_LITERAL(4, 66, 18) // "FilterSettingCount"

    },
    "MPUGyroAccelSettingsConstants\0Enum\0"
    "GyroScaleCount\0AccelScaleCount\0"
    "FilterSettingCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MPUGyroAccelSettingsConstants[] = {

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
       2, uint(MPUGyroAccelSettingsConstants::GyroScaleCount),
       3, uint(MPUGyroAccelSettingsConstants::AccelScaleCount),
       4, uint(MPUGyroAccelSettingsConstants::FilterSettingCount),

       0        // eod
};

void MPUGyroAccelSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MPUGyroAccelSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MPUGyroAccelSettingsConstants.data,
    qt_meta_data_MPUGyroAccelSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MPUGyroAccelSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MPUGyroAccelSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MPUGyroAccelSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MPUGyroAccelSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MPUGyroAccelSettings_GyroScale_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MPUGyroAccelSettings_GyroScale_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MPUGyroAccelSettings_GyroScale_t qt_meta_stringdata_MPUGyroAccelSettings_GyroScale = {
    {
QT_MOC_LITERAL(0, 0, 30), // "MPUGyroAccelSettings_GyroScale"
QT_MOC_LITERAL(1, 31, 4), // "Enum"
QT_MOC_LITERAL(2, 36, 9), // "Scale_250"
QT_MOC_LITERAL(3, 46, 9), // "Scale_500"
QT_MOC_LITERAL(4, 56, 10), // "Scale_1000"
QT_MOC_LITERAL(5, 67, 10) // "Scale_2000"

    },
    "MPUGyroAccelSettings_GyroScale\0Enum\0"
    "Scale_250\0Scale_500\0Scale_1000\0"
    "Scale_2000"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MPUGyroAccelSettings_GyroScale[] = {

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
       2, uint(MPUGyroAccelSettings_GyroScale::Scale_250),
       3, uint(MPUGyroAccelSettings_GyroScale::Scale_500),
       4, uint(MPUGyroAccelSettings_GyroScale::Scale_1000),
       5, uint(MPUGyroAccelSettings_GyroScale::Scale_2000),

       0        // eod
};

void MPUGyroAccelSettings_GyroScale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MPUGyroAccelSettings_GyroScale::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MPUGyroAccelSettings_GyroScale.data,
    qt_meta_data_MPUGyroAccelSettings_GyroScale,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MPUGyroAccelSettings_GyroScale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MPUGyroAccelSettings_GyroScale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MPUGyroAccelSettings_GyroScale.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MPUGyroAccelSettings_GyroScale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MPUGyroAccelSettings_AccelScale_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MPUGyroAccelSettings_AccelScale_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MPUGyroAccelSettings_AccelScale_t qt_meta_stringdata_MPUGyroAccelSettings_AccelScale = {
    {
QT_MOC_LITERAL(0, 0, 31), // "MPUGyroAccelSettings_AccelScale"
QT_MOC_LITERAL(1, 32, 4), // "Enum"
QT_MOC_LITERAL(2, 37, 8), // "Scale_2g"
QT_MOC_LITERAL(3, 46, 8), // "Scale_4g"
QT_MOC_LITERAL(4, 55, 8), // "Scale_8g"
QT_MOC_LITERAL(5, 64, 9) // "Scale_16g"

    },
    "MPUGyroAccelSettings_AccelScale\0Enum\0"
    "Scale_2g\0Scale_4g\0Scale_8g\0Scale_16g"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MPUGyroAccelSettings_AccelScale[] = {

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
       2, uint(MPUGyroAccelSettings_AccelScale::Scale_2g),
       3, uint(MPUGyroAccelSettings_AccelScale::Scale_4g),
       4, uint(MPUGyroAccelSettings_AccelScale::Scale_8g),
       5, uint(MPUGyroAccelSettings_AccelScale::Scale_16g),

       0        // eod
};

void MPUGyroAccelSettings_AccelScale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MPUGyroAccelSettings_AccelScale::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MPUGyroAccelSettings_AccelScale.data,
    qt_meta_data_MPUGyroAccelSettings_AccelScale,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MPUGyroAccelSettings_AccelScale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MPUGyroAccelSettings_AccelScale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MPUGyroAccelSettings_AccelScale.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MPUGyroAccelSettings_AccelScale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MPUGyroAccelSettings_FilterSetting_t {
    QByteArrayData data[9];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MPUGyroAccelSettings_FilterSetting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MPUGyroAccelSettings_FilterSetting_t qt_meta_stringdata_MPUGyroAccelSettings_FilterSetting = {
    {
QT_MOC_LITERAL(0, 0, 34), // "MPUGyroAccelSettings_FilterSe..."
QT_MOC_LITERAL(1, 35, 4), // "Enum"
QT_MOC_LITERAL(2, 40, 14), // "Lowpass_256_Hz"
QT_MOC_LITERAL(3, 55, 14), // "Lowpass_188_Hz"
QT_MOC_LITERAL(4, 70, 13), // "Lowpass_98_Hz"
QT_MOC_LITERAL(5, 84, 13), // "Lowpass_42_Hz"
QT_MOC_LITERAL(6, 98, 13), // "Lowpass_20_Hz"
QT_MOC_LITERAL(7, 112, 13), // "Lowpass_10_Hz"
QT_MOC_LITERAL(8, 126, 12) // "Lowpass_5_Hz"

    },
    "MPUGyroAccelSettings_FilterSetting\0"
    "Enum\0Lowpass_256_Hz\0Lowpass_188_Hz\0"
    "Lowpass_98_Hz\0Lowpass_42_Hz\0Lowpass_20_Hz\0"
    "Lowpass_10_Hz\0Lowpass_5_Hz"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MPUGyroAccelSettings_FilterSetting[] = {

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
       2, uint(MPUGyroAccelSettings_FilterSetting::Lowpass_256_Hz),
       3, uint(MPUGyroAccelSettings_FilterSetting::Lowpass_188_Hz),
       4, uint(MPUGyroAccelSettings_FilterSetting::Lowpass_98_Hz),
       5, uint(MPUGyroAccelSettings_FilterSetting::Lowpass_42_Hz),
       6, uint(MPUGyroAccelSettings_FilterSetting::Lowpass_20_Hz),
       7, uint(MPUGyroAccelSettings_FilterSetting::Lowpass_10_Hz),
       8, uint(MPUGyroAccelSettings_FilterSetting::Lowpass_5_Hz),

       0        // eod
};

void MPUGyroAccelSettings_FilterSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MPUGyroAccelSettings_FilterSetting::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MPUGyroAccelSettings_FilterSetting.data,
    qt_meta_data_MPUGyroAccelSettings_FilterSetting,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MPUGyroAccelSettings_FilterSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MPUGyroAccelSettings_FilterSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MPUGyroAccelSettings_FilterSetting.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MPUGyroAccelSettings_FilterSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MPUGyroAccelSettings_t {
    QByteArrayData data[25];
    char stringdata0[432];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MPUGyroAccelSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MPUGyroAccelSettings_t qt_meta_stringdata_MPUGyroAccelSettings = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MPUGyroAccelSettings"
QT_MOC_LITERAL(1, 21, 16), // "gyroScaleChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 36), // "MPUGyroAccelSettings_GyroScal..."
QT_MOC_LITERAL(4, 76, 5), // "value"
QT_MOC_LITERAL(5, 82, 16), // "GyroScaleChanged"
QT_MOC_LITERAL(6, 99, 17), // "accelScaleChanged"
QT_MOC_LITERAL(7, 117, 37), // "MPUGyroAccelSettings_AccelSca..."
QT_MOC_LITERAL(8, 155, 17), // "AccelScaleChanged"
QT_MOC_LITERAL(9, 173, 20), // "filterSettingChanged"
QT_MOC_LITERAL(10, 194, 40), // "MPUGyroAccelSettings_FilterSe..."
QT_MOC_LITERAL(11, 235, 20), // "FilterSettingChanged"
QT_MOC_LITERAL(12, 256, 12), // "setGyroScale"
QT_MOC_LITERAL(13, 269, 13), // "setAccelScale"
QT_MOC_LITERAL(14, 283, 16), // "setFilterSetting"
QT_MOC_LITERAL(15, 300, 17), // "emitNotifications"
QT_MOC_LITERAL(16, 318, 12), // "getGyroScale"
QT_MOC_LITERAL(17, 331, 13), // "getAccelScale"
QT_MOC_LITERAL(18, 345, 16), // "getFilterSetting"
QT_MOC_LITERAL(19, 362, 9), // "gyroScale"
QT_MOC_LITERAL(20, 372, 10), // "accelScale"
QT_MOC_LITERAL(21, 383, 13), // "filterSetting"
QT_MOC_LITERAL(22, 397, 9), // "GyroScale"
QT_MOC_LITERAL(23, 407, 10), // "AccelScale"
QT_MOC_LITERAL(24, 418, 13) // "FilterSetting"

    },
    "MPUGyroAccelSettings\0gyroScaleChanged\0"
    "\0MPUGyroAccelSettings_GyroScale::Enum\0"
    "value\0GyroScaleChanged\0accelScaleChanged\0"
    "MPUGyroAccelSettings_AccelScale::Enum\0"
    "AccelScaleChanged\0filterSettingChanged\0"
    "MPUGyroAccelSettings_FilterSetting::Enum\0"
    "FilterSettingChanged\0setGyroScale\0"
    "setAccelScale\0setFilterSetting\0"
    "emitNotifications\0getGyroScale\0"
    "getAccelScale\0getFilterSetting\0gyroScale\0"
    "accelScale\0filterSetting\0GyroScale\0"
    "AccelScale\0FilterSetting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MPUGyroAccelSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       6,  134, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       5,    1,   97,    2, 0x06 /* Public */,
       6,    1,  100,    2, 0x06 /* Public */,
       8,    1,  103,    2, 0x06 /* Public */,
       9,    1,  106,    2, 0x06 /* Public */,
      11,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  112,    2, 0x0a /* Public */,
      12,    1,  115,    2, 0x0a /* Public */,
      13,    1,  118,    2, 0x0a /* Public */,
      13,    1,  121,    2, 0x0a /* Public */,
      14,    1,  124,    2, 0x0a /* Public */,
      14,    1,  127,    2, 0x0a /* Public */,
      15,    0,  130,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      16,    0,  131,    2, 0x02 /* Public */,
      17,    0,  132,    2, 0x02 /* Public */,
      18,    0,  133,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 7,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 7,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      19, 0x80000000 | 3, 0x0049510b,
      20, 0x80000000 | 7, 0x0049510b,
      21, 0x80000000 | 10, 0x0049510b,
      22, QMetaType::UChar, 0x00495103,
      23, QMetaType::UChar, 0x00495103,
      24, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       1,
       3,
       5,

       0        // eod
};

void MPUGyroAccelSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MPUGyroAccelSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gyroScaleChanged((*reinterpret_cast< const MPUGyroAccelSettings_GyroScale::Enum(*)>(_a[1]))); break;
        case 1: _t->GyroScaleChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->accelScaleChanged((*reinterpret_cast< const MPUGyroAccelSettings_AccelScale::Enum(*)>(_a[1]))); break;
        case 3: _t->AccelScaleChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->filterSettingChanged((*reinterpret_cast< const MPUGyroAccelSettings_FilterSetting::Enum(*)>(_a[1]))); break;
        case 5: _t->FilterSettingChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->setGyroScale((*reinterpret_cast< const MPUGyroAccelSettings_GyroScale::Enum(*)>(_a[1]))); break;
        case 7: _t->setGyroScale((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->setAccelScale((*reinterpret_cast< const MPUGyroAccelSettings_AccelScale::Enum(*)>(_a[1]))); break;
        case 9: _t->setAccelScale((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->setFilterSetting((*reinterpret_cast< const MPUGyroAccelSettings_FilterSetting::Enum(*)>(_a[1]))); break;
        case 11: _t->setFilterSetting((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->emitNotifications(); break;
        case 13: { quint8 _r = _t->getGyroScale();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 14: { quint8 _r = _t->getAccelScale();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 15: { quint8 _r = _t->getFilterSetting();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MPUGyroAccelSettings::*)(const MPUGyroAccelSettings_GyroScale::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MPUGyroAccelSettings::gyroScaleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MPUGyroAccelSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MPUGyroAccelSettings::GyroScaleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MPUGyroAccelSettings::*)(const MPUGyroAccelSettings_AccelScale::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MPUGyroAccelSettings::accelScaleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MPUGyroAccelSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MPUGyroAccelSettings::AccelScaleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MPUGyroAccelSettings::*)(const MPUGyroAccelSettings_FilterSetting::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MPUGyroAccelSettings::filterSettingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MPUGyroAccelSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MPUGyroAccelSettings::FilterSettingChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MPUGyroAccelSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< MPUGyroAccelSettings_GyroScale::Enum*>(_v) = _t->gyroScale(); break;
        case 1: *reinterpret_cast< MPUGyroAccelSettings_AccelScale::Enum*>(_v) = _t->accelScale(); break;
        case 2: *reinterpret_cast< MPUGyroAccelSettings_FilterSetting::Enum*>(_v) = _t->filterSetting(); break;
        case 3: *reinterpret_cast< quint8*>(_v) = _t->getGyroScale(); break;
        case 4: *reinterpret_cast< quint8*>(_v) = _t->getAccelScale(); break;
        case 5: *reinterpret_cast< quint8*>(_v) = _t->getFilterSetting(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MPUGyroAccelSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGyroScale(*reinterpret_cast< MPUGyroAccelSettings_GyroScale::Enum*>(_v)); break;
        case 1: _t->setAccelScale(*reinterpret_cast< MPUGyroAccelSettings_AccelScale::Enum*>(_v)); break;
        case 2: _t->setFilterSetting(*reinterpret_cast< MPUGyroAccelSettings_FilterSetting::Enum*>(_v)); break;
        case 3: _t->setGyroScale(*reinterpret_cast< quint8*>(_v)); break;
        case 4: _t->setAccelScale(*reinterpret_cast< quint8*>(_v)); break;
        case 5: _t->setFilterSetting(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_MPUGyroAccelSettings[] = {
        &MPUGyroAccelSettings_GyroScale::staticMetaObject,
    &MPUGyroAccelSettings_AccelScale::staticMetaObject,
    &MPUGyroAccelSettings_FilterSetting::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject MPUGyroAccelSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_MPUGyroAccelSettings.data,
    qt_meta_data_MPUGyroAccelSettings,
    qt_static_metacall,
    qt_meta_extradata_MPUGyroAccelSettings,
    nullptr
} };


const QMetaObject *MPUGyroAccelSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MPUGyroAccelSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MPUGyroAccelSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int MPUGyroAccelSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MPUGyroAccelSettings::gyroScaleChanged(const MPUGyroAccelSettings_GyroScale::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MPUGyroAccelSettings::GyroScaleChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MPUGyroAccelSettings::accelScaleChanged(const MPUGyroAccelSettings_AccelScale::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MPUGyroAccelSettings::AccelScaleChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MPUGyroAccelSettings::filterSettingChanged(const MPUGyroAccelSettings_FilterSetting::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MPUGyroAccelSettings::FilterSettingChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
