/****************************************************************************
** Meta object code from reading C++ file 'debuglogsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../debuglogsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debuglogsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DebugLogSettingsConstants_t {
    QByteArrayData data[3];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugLogSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugLogSettingsConstants_t qt_meta_stringdata_DebugLogSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 25), // "DebugLogSettingsConstants"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 19) // "LoggingEnabledCount"

    },
    "DebugLogSettingsConstants\0Enum\0"
    "LoggingEnabledCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugLogSettingsConstants[] = {

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
       2, uint(DebugLogSettingsConstants::LoggingEnabledCount),

       0        // eod
};

void DebugLogSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DebugLogSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DebugLogSettingsConstants.data,
    qt_meta_data_DebugLogSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugLogSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugLogSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugLogSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DebugLogSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebugLogSettings_LoggingEnabled_t {
    QByteArrayData data[5];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugLogSettings_LoggingEnabled_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugLogSettings_LoggingEnabled_t qt_meta_stringdata_DebugLogSettings_LoggingEnabled = {
    {
QT_MOC_LITERAL(0, 0, 31), // "DebugLogSettings_LoggingEnabled"
QT_MOC_LITERAL(1, 32, 4), // "Enum"
QT_MOC_LITERAL(2, 37, 8), // "Disabled"
QT_MOC_LITERAL(3, 46, 13), // "OnlyWhenArmed"
QT_MOC_LITERAL(4, 60, 6) // "Always"

    },
    "DebugLogSettings_LoggingEnabled\0Enum\0"
    "Disabled\0OnlyWhenArmed\0Always"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugLogSettings_LoggingEnabled[] = {

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
       2, uint(DebugLogSettings_LoggingEnabled::Disabled),
       3, uint(DebugLogSettings_LoggingEnabled::OnlyWhenArmed),
       4, uint(DebugLogSettings_LoggingEnabled::Always),

       0        // eod
};

void DebugLogSettings_LoggingEnabled::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DebugLogSettings_LoggingEnabled::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DebugLogSettings_LoggingEnabled.data,
    qt_meta_data_DebugLogSettings_LoggingEnabled,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugLogSettings_LoggingEnabled::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugLogSettings_LoggingEnabled::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugLogSettings_LoggingEnabled.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DebugLogSettings_LoggingEnabled::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebugLogSettings_t {
    QByteArrayData data[11];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugLogSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugLogSettings_t qt_meta_stringdata_DebugLogSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DebugLogSettings"
QT_MOC_LITERAL(1, 17, 21), // "loggingEnabledChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 37), // "DebugLogSettings_LoggingEnabl..."
QT_MOC_LITERAL(4, 78, 5), // "value"
QT_MOC_LITERAL(5, 84, 21), // "LoggingEnabledChanged"
QT_MOC_LITERAL(6, 106, 17), // "setLoggingEnabled"
QT_MOC_LITERAL(7, 124, 17), // "emitNotifications"
QT_MOC_LITERAL(8, 142, 17), // "getLoggingEnabled"
QT_MOC_LITERAL(9, 160, 14), // "loggingEnabled"
QT_MOC_LITERAL(10, 175, 14) // "LoggingEnabled"

    },
    "DebugLogSettings\0loggingEnabledChanged\0"
    "\0DebugLogSettings_LoggingEnabled::Enum\0"
    "value\0LoggingEnabledChanged\0"
    "setLoggingEnabled\0emitNotifications\0"
    "getLoggingEnabled\0loggingEnabled\0"
    "LoggingEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugLogSettings[] = {

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

void DebugLogSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DebugLogSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loggingEnabledChanged((*reinterpret_cast< const DebugLogSettings_LoggingEnabled::Enum(*)>(_a[1]))); break;
        case 1: _t->LoggingEnabledChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->setLoggingEnabled((*reinterpret_cast< const DebugLogSettings_LoggingEnabled::Enum(*)>(_a[1]))); break;
        case 3: _t->setLoggingEnabled((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->emitNotifications(); break;
        case 5: { quint8 _r = _t->getLoggingEnabled();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DebugLogSettings::*)(const DebugLogSettings_LoggingEnabled::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogSettings::loggingEnabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DebugLogSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogSettings::LoggingEnabledChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DebugLogSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< DebugLogSettings_LoggingEnabled::Enum*>(_v) = _t->loggingEnabled(); break;
        case 1: *reinterpret_cast< quint8*>(_v) = _t->getLoggingEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DebugLogSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLoggingEnabled(*reinterpret_cast< DebugLogSettings_LoggingEnabled::Enum*>(_v)); break;
        case 1: _t->setLoggingEnabled(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_DebugLogSettings[] = {
        &DebugLogSettings_LoggingEnabled::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject DebugLogSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_DebugLogSettings.data,
    qt_meta_data_DebugLogSettings,
    qt_static_metacall,
    qt_meta_extradata_DebugLogSettings,
    nullptr
} };


const QMetaObject *DebugLogSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugLogSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugLogSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int DebugLogSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DebugLogSettings::loggingEnabledChanged(const DebugLogSettings_LoggingEnabled::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DebugLogSettings::LoggingEnabledChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
