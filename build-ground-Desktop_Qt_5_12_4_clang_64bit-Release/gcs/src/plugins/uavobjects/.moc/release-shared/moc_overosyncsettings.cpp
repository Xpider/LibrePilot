/****************************************************************************
** Meta object code from reading C++ file 'overosyncsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../overosyncsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overosyncsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OveroSyncSettingsConstants_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OveroSyncSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OveroSyncSettingsConstants_t qt_meta_stringdata_OveroSyncSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OveroSyncSettingsConstants"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 10) // "LogOnCount"

    },
    "OveroSyncSettingsConstants\0Enum\0"
    "LogOnCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OveroSyncSettingsConstants[] = {

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
       1,    1, 0x0,    1,   19,

 // enum data: key, value
       2, uint(OveroSyncSettingsConstants::LogOnCount),

       0        // eod
};

void OveroSyncSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OveroSyncSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OveroSyncSettingsConstants.data,
    qt_meta_data_OveroSyncSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OveroSyncSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OveroSyncSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OveroSyncSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OveroSyncSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OveroSyncSettings_LogOn_t {
    QByteArrayData data[5];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OveroSyncSettings_LogOn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OveroSyncSettings_LogOn_t qt_meta_stringdata_OveroSyncSettings_LogOn = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OveroSyncSettings_LogOn"
QT_MOC_LITERAL(1, 24, 4), // "Enum"
QT_MOC_LITERAL(2, 29, 5), // "Never"
QT_MOC_LITERAL(3, 35, 6), // "Always"
QT_MOC_LITERAL(4, 42, 5) // "Armed"

    },
    "OveroSyncSettings_LogOn\0Enum\0Never\0"
    "Always\0Armed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OveroSyncSettings_LogOn[] = {

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
       2, uint(OveroSyncSettings_LogOn::Never),
       3, uint(OveroSyncSettings_LogOn::Always),
       4, uint(OveroSyncSettings_LogOn::Armed),

       0        // eod
};

void OveroSyncSettings_LogOn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OveroSyncSettings_LogOn::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OveroSyncSettings_LogOn.data,
    qt_meta_data_OveroSyncSettings_LogOn,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OveroSyncSettings_LogOn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OveroSyncSettings_LogOn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OveroSyncSettings_LogOn.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OveroSyncSettings_LogOn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OveroSyncSettings_t {
    QByteArrayData data[11];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OveroSyncSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OveroSyncSettings_t qt_meta_stringdata_OveroSyncSettings = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OveroSyncSettings"
QT_MOC_LITERAL(1, 18, 12), // "logOnChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 29), // "OveroSyncSettings_LogOn::Enum"
QT_MOC_LITERAL(4, 62, 5), // "value"
QT_MOC_LITERAL(5, 68, 12), // "LogOnChanged"
QT_MOC_LITERAL(6, 81, 8), // "setLogOn"
QT_MOC_LITERAL(7, 90, 17), // "emitNotifications"
QT_MOC_LITERAL(8, 108, 8), // "getLogOn"
QT_MOC_LITERAL(9, 117, 5), // "logOn"
QT_MOC_LITERAL(10, 123, 5) // "LogOn"

    },
    "OveroSyncSettings\0logOnChanged\0\0"
    "OveroSyncSettings_LogOn::Enum\0value\0"
    "LogOnChanged\0setLogOn\0emitNotifications\0"
    "getLogOn\0logOn\0LogOn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OveroSyncSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UChar,

 // properties: name, type, flags
       9, 0x80000000 | 3, 0x0049510b,
      10, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void OveroSyncSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OveroSyncSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logOnChanged((*reinterpret_cast< const OveroSyncSettings_LogOn::Enum(*)>(_a[1]))); break;
        case 1: _t->LogOnChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->setLogOn((*reinterpret_cast< const OveroSyncSettings_LogOn::Enum(*)>(_a[1]))); break;
        case 3: _t->setLogOn((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->emitNotifications(); break;
        case 5: { quint8 _r = _t->getLogOn();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OveroSyncSettings::*)(const OveroSyncSettings_LogOn::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncSettings::logOnChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OveroSyncSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncSettings::LogOnChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OveroSyncSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< OveroSyncSettings_LogOn::Enum*>(_v) = _t->logOn(); break;
        case 1: *reinterpret_cast< quint8*>(_v) = _t->getLogOn(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OveroSyncSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLogOn(*reinterpret_cast< OveroSyncSettings_LogOn::Enum*>(_v)); break;
        case 1: _t->setLogOn(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_OveroSyncSettings[] = {
        &OveroSyncSettings_LogOn::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject OveroSyncSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_OveroSyncSettings.data,
    qt_meta_data_OveroSyncSettings,
    qt_static_metacall,
    qt_meta_extradata_OveroSyncSettings,
    nullptr
} };


const QMetaObject *OveroSyncSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OveroSyncSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OveroSyncSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int OveroSyncSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OveroSyncSettings::logOnChanged(const OveroSyncSettings_LogOn::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OveroSyncSettings::LogOnChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
