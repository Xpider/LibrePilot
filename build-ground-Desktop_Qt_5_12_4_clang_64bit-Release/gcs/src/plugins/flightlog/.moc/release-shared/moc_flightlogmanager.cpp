/****************************************************************************
** Meta object code from reading C++ file 'flightlogmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/flightlog/flightlogmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightlogmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UAVOLogSettingsWrapper_t {
    QByteArrayData data[19];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UAVOLogSettingsWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UAVOLogSettingsWrapper_t qt_meta_stringdata_UAVOLogSettingsWrapper = {
    {
QT_MOC_LITERAL(0, 0, 22), // "UAVOLogSettingsWrapper"
QT_MOC_LITERAL(1, 23, 14), // "settingChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "setting"
QT_MOC_LITERAL(4, 47, 11), // "nameChanged"
QT_MOC_LITERAL(5, 59, 4), // "name"
QT_MOC_LITERAL(6, 64, 13), // "periodChanged"
QT_MOC_LITERAL(7, 78, 6), // "period"
QT_MOC_LITERAL(8, 85, 13), // "objectChanged"
QT_MOC_LITERAL(9, 99, 14), // "UAVDataObject*"
QT_MOC_LITERAL(10, 114, 3), // "arg"
QT_MOC_LITERAL(11, 118, 12), // "dirtyChanged"
QT_MOC_LITERAL(12, 131, 10), // "setSetting"
QT_MOC_LITERAL(13, 142, 9), // "setPeriod"
QT_MOC_LITERAL(14, 152, 8), // "setDirty"
QT_MOC_LITERAL(15, 161, 5), // "reset"
QT_MOC_LITERAL(16, 167, 5), // "clear"
QT_MOC_LITERAL(17, 173, 6), // "object"
QT_MOC_LITERAL(18, 180, 5) // "dirty"

    },
    "UAVOLogSettingsWrapper\0settingChanged\0"
    "\0setting\0nameChanged\0name\0periodChanged\0"
    "period\0objectChanged\0UAVDataObject*\0"
    "arg\0dirtyChanged\0setSetting\0setPeriod\0"
    "setDirty\0reset\0clear\0object\0dirty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UAVOLogSettingsWrapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       8,    1,   68,    2, 0x06 /* Public */,
      11,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   74,    2, 0x0a /* Public */,
      13,    1,   77,    2, 0x0a /* Public */,
      14,    1,   80,    2, 0x0a /* Public */,
      15,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   16,

 // properties: name, type, flags
      17, 0x80000000 | 9, 0x00495009,
       5, QMetaType::QString, 0x00495001,
       3, QMetaType::Int, 0x00495103,
       7, QMetaType::Int, 0x00495103,
      18, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       3,
       1,
       0,
       2,
       4,

       0        // eod
};

void UAVOLogSettingsWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UAVOLogSettingsWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->periodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->objectChanged((*reinterpret_cast< UAVDataObject*(*)>(_a[1]))); break;
        case 4: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setSetting((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setPeriod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setDirty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->reset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UAVDataObject* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UAVOLogSettingsWrapper::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAVOLogSettingsWrapper::settingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UAVOLogSettingsWrapper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAVOLogSettingsWrapper::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UAVOLogSettingsWrapper::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAVOLogSettingsWrapper::periodChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UAVOLogSettingsWrapper::*)(UAVDataObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAVOLogSettingsWrapper::objectChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UAVOLogSettingsWrapper::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAVOLogSettingsWrapper::dirtyChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UAVDataObject* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UAVOLogSettingsWrapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< UAVDataObject**>(_v) = _t->object(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->setting(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->period(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UAVOLogSettingsWrapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setSetting(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setPeriod(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject UAVOLogSettingsWrapper::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_UAVOLogSettingsWrapper.data,
    qt_meta_data_UAVOLogSettingsWrapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UAVOLogSettingsWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UAVOLogSettingsWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UAVOLogSettingsWrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UAVOLogSettingsWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UAVOLogSettingsWrapper::settingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UAVOLogSettingsWrapper::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UAVOLogSettingsWrapper::periodChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UAVOLogSettingsWrapper::objectChanged(UAVDataObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UAVOLogSettingsWrapper::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_ExtendedDebugLogEntry_t {
    QByteArrayData data[6];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtendedDebugLogEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtendedDebugLogEntry_t qt_meta_stringdata_ExtendedDebugLogEntry = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ExtendedDebugLogEntry"
QT_MOC_LITERAL(1, 22, 16), // "LogStringUpdated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 3), // "arg"
QT_MOC_LITERAL(4, 44, 12), // "setLogString"
QT_MOC_LITERAL(5, 57, 9) // "LogString"

    },
    "ExtendedDebugLogEntry\0LogStringUpdated\0"
    "\0arg\0setLogString\0LogString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtendedDebugLogEntry[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void ExtendedDebugLogEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExtendedDebugLogEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LogStringUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setLogString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExtendedDebugLogEntry::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedDebugLogEntry::LogStringUpdated)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ExtendedDebugLogEntry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getLogString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ExtendedDebugLogEntry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLogString(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ExtendedDebugLogEntry::staticMetaObject = { {
    &DebugLogEntry::staticMetaObject,
    qt_meta_stringdata_ExtendedDebugLogEntry.data,
    qt_meta_data_ExtendedDebugLogEntry,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExtendedDebugLogEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtendedDebugLogEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExtendedDebugLogEntry.stringdata0))
        return static_cast<void*>(this);
    return DebugLogEntry::qt_metacast(_clname);
}

int ExtendedDebugLogEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DebugLogEntry::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ExtendedDebugLogEntry::LogStringUpdated(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FlightLogManager_t {
    QByteArrayData data[60];
    char stringdata0[1004];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightLogManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightLogManager_t qt_meta_stringdata_FlightLogManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FlightLogManager"
QT_MOC_LITERAL(1, 17, 17), // "logEntriesChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "flightEntriesChanged"
QT_MOC_LITERAL(4, 57, 18), // "logSettingsChanged"
QT_MOC_LITERAL(5, 76, 18), // "uavoEntriesChanged"
QT_MOC_LITERAL(6, 95, 22), // "disableControlsChanged"
QT_MOC_LITERAL(7, 118, 3), // "arg"
QT_MOC_LITERAL(8, 122, 20), // "disableExportChanged"
QT_MOC_LITERAL(9, 143, 31), // "adjustExportedTimestampsChanged"
QT_MOC_LITERAL(10, 175, 21), // "boardConnectedChanged"
QT_MOC_LITERAL(11, 197, 18), // "logStatusesChanged"
QT_MOC_LITERAL(12, 216, 21), // "loggingEnabledChanged"
QT_MOC_LITERAL(13, 238, 12), // "clearAllLogs"
QT_MOC_LITERAL(14, 251, 12), // "retrieveLogs"
QT_MOC_LITERAL(15, 264, 16), // "flightToRetrieve"
QT_MOC_LITERAL(16, 281, 10), // "exportLogs"
QT_MOC_LITERAL(17, 292, 16), // "cancelExportLogs"
QT_MOC_LITERAL(18, 309, 12), // "loadSettings"
QT_MOC_LITERAL(19, 322, 12), // "saveSettings"
QT_MOC_LITERAL(20, 335, 13), // "resetSettings"
QT_MOC_LITERAL(21, 349, 5), // "clear"
QT_MOC_LITERAL(22, 355, 19), // "saveSettingsToBoard"
QT_MOC_LITERAL(23, 375, 20), // "saveUAVObjectToFlash"
QT_MOC_LITERAL(24, 396, 10), // "UAVObject*"
QT_MOC_LITERAL(25, 407, 6), // "object"
QT_MOC_LITERAL(26, 414, 18), // "setDisableControls"
QT_MOC_LITERAL(27, 433, 16), // "setDisableExport"
QT_MOC_LITERAL(28, 450, 27), // "setAdjustExportedTimestamps"
QT_MOC_LITERAL(29, 478, 17), // "setBoardConnected"
QT_MOC_LITERAL(30, 496, 17), // "setLoggingEnabled"
QT_MOC_LITERAL(31, 514, 19), // "updateFlightEntries"
QT_MOC_LITERAL(32, 534, 13), // "currentFlight"
QT_MOC_LITERAL(33, 548, 17), // "setupUAVOWrappers"
QT_MOC_LITERAL(34, 566, 16), // "setupLogSettings"
QT_MOC_LITERAL(35, 583, 16), // "setupLogStatuses"
QT_MOC_LITERAL(36, 600, 23), // "connectionStatusChanged"
QT_MOC_LITERAL(37, 624, 16), // "updateLogWrapper"
QT_MOC_LITERAL(38, 641, 4), // "name"
QT_MOC_LITERAL(39, 646, 5), // "level"
QT_MOC_LITERAL(40, 652, 6), // "period"
QT_MOC_LITERAL(41, 659, 15), // "flightLogStatus"
QT_MOC_LITERAL(42, 675, 15), // "DebugLogStatus*"
QT_MOC_LITERAL(43, 691, 16), // "flightLogControl"
QT_MOC_LITERAL(44, 708, 16), // "DebugLogControl*"
QT_MOC_LITERAL(45, 725, 17), // "flightLogSettings"
QT_MOC_LITERAL(46, 743, 17), // "DebugLogSettings*"
QT_MOC_LITERAL(47, 761, 10), // "logEntries"
QT_MOC_LITERAL(48, 772, 39), // "QQmlListProperty<ExtendedDebu..."
QT_MOC_LITERAL(49, 812, 13), // "flightEntries"
QT_MOC_LITERAL(50, 826, 15), // "disableControls"
QT_MOC_LITERAL(51, 842, 13), // "disableExport"
QT_MOC_LITERAL(52, 856, 24), // "adjustExportedTimestamps"
QT_MOC_LITERAL(53, 881, 14), // "boardConnected"
QT_MOC_LITERAL(54, 896, 11), // "uavoEntries"
QT_MOC_LITERAL(55, 908, 40), // "QQmlListProperty<UAVOLogSetti..."
QT_MOC_LITERAL(56, 949, 11), // "logSettings"
QT_MOC_LITERAL(57, 961, 11), // "logStatuses"
QT_MOC_LITERAL(58, 973, 14), // "loggingEnabled"
QT_MOC_LITERAL(59, 988, 15) // "logEntriesCount"

    },
    "FlightLogManager\0logEntriesChanged\0\0"
    "flightEntriesChanged\0logSettingsChanged\0"
    "uavoEntriesChanged\0disableControlsChanged\0"
    "arg\0disableExportChanged\0"
    "adjustExportedTimestampsChanged\0"
    "boardConnectedChanged\0logStatusesChanged\0"
    "loggingEnabledChanged\0clearAllLogs\0"
    "retrieveLogs\0flightToRetrieve\0exportLogs\0"
    "cancelExportLogs\0loadSettings\0"
    "saveSettings\0resetSettings\0clear\0"
    "saveSettingsToBoard\0saveUAVObjectToFlash\0"
    "UAVObject*\0object\0setDisableControls\0"
    "setDisableExport\0setAdjustExportedTimestamps\0"
    "setBoardConnected\0setLoggingEnabled\0"
    "updateFlightEntries\0currentFlight\0"
    "setupUAVOWrappers\0setupLogSettings\0"
    "setupLogStatuses\0connectionStatusChanged\0"
    "updateLogWrapper\0name\0level\0period\0"
    "flightLogStatus\0DebugLogStatus*\0"
    "flightLogControl\0DebugLogControl*\0"
    "flightLogSettings\0DebugLogSettings*\0"
    "logEntries\0QQmlListProperty<ExtendedDebugLogEntry>\0"
    "flightEntries\0disableControls\0"
    "disableExport\0adjustExportedTimestamps\0"
    "boardConnected\0uavoEntries\0"
    "QQmlListProperty<UAVOLogSettingsWrapper>\0"
    "logSettings\0logStatuses\0loggingEnabled\0"
    "logEntriesCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightLogManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
      14,  236, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  169,    2, 0x06 /* Public */,
       3,    0,  170,    2, 0x06 /* Public */,
       4,    0,  171,    2, 0x06 /* Public */,
       5,    0,  172,    2, 0x06 /* Public */,
       6,    1,  173,    2, 0x06 /* Public */,
       8,    1,  176,    2, 0x06 /* Public */,
       9,    1,  179,    2, 0x06 /* Public */,
      10,    1,  182,    2, 0x06 /* Public */,
      11,    1,  185,    2, 0x06 /* Public */,
      12,    1,  188,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  191,    2, 0x0a /* Public */,
      14,    1,  192,    2, 0x0a /* Public */,
      14,    0,  195,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  196,    2, 0x0a /* Public */,
      17,    0,  197,    2, 0x0a /* Public */,
      18,    0,  198,    2, 0x0a /* Public */,
      19,    0,  199,    2, 0x0a /* Public */,
      20,    1,  200,    2, 0x0a /* Public */,
      22,    0,  203,    2, 0x0a /* Public */,
      23,    1,  204,    2, 0x0a /* Public */,
      26,    1,  207,    2, 0x0a /* Public */,
      27,    1,  210,    2, 0x0a /* Public */,
      28,    1,  213,    2, 0x0a /* Public */,
      29,    1,  216,    2, 0x0a /* Public */,
      30,    1,  219,    2, 0x0a /* Public */,
      31,    1,  222,    2, 0x08 /* Private */,
      33,    0,  225,    2, 0x08 /* Private */,
      34,    0,  226,    2, 0x08 /* Private */,
      35,    0,  227,    2, 0x08 /* Private */,
      36,    0,  228,    2, 0x08 /* Private */,
      37,    3,  229,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QStringList,    7,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::UShort,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int,   38,   39,   40,

 // properties: name, type, flags
      41, 0x80000000 | 42, 0x00095009,
      43, 0x80000000 | 44, 0x00095009,
      45, 0x80000000 | 46, 0x00095009,
      47, 0x80000000 | 48, 0x00495009,
      49, QMetaType::QStringList, 0x00495001,
      50, QMetaType::Bool, 0x00495103,
      51, QMetaType::Bool, 0x00495103,
      52, QMetaType::Bool, 0x00495103,
      53, QMetaType::Bool, 0x00495103,
      54, 0x80000000 | 55, 0x00495009,
      56, QMetaType::QStringList, 0x00495001,
      57, QMetaType::QStringList, 0x00495001,
      58, QMetaType::Int, 0x00495103,
      59, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,
       4,
       5,
       6,
       7,
       3,
       2,
       8,
       9,
       0,

       0        // eod
};

void FlightLogManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightLogManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logEntriesChanged(); break;
        case 1: _t->flightEntriesChanged(); break;
        case 2: _t->logSettingsChanged(); break;
        case 3: _t->uavoEntriesChanged(); break;
        case 4: _t->disableControlsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->disableExportChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->adjustExportedTimestampsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->boardConnectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->logStatusesChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 9: _t->loggingEnabledChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->clearAllLogs(); break;
        case 11: _t->retrieveLogs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->retrieveLogs(); break;
        case 13: _t->exportLogs(); break;
        case 14: _t->cancelExportLogs(); break;
        case 15: _t->loadSettings(); break;
        case 16: _t->saveSettings(); break;
        case 17: _t->resetSettings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->saveSettingsToBoard(); break;
        case 19: { bool _r = _t->saveUAVObjectToFlash((*reinterpret_cast< UAVObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->setDisableControls((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setDisableExport((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->setAdjustExportedTimestamps((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->setBoardConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setLoggingEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->updateFlightEntries((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 26: _t->setupUAVOWrappers(); break;
        case 27: _t->setupLogSettings(); break;
        case 28: _t->setupLogStatuses(); break;
        case 29: _t->connectionStatusChanged(); break;
        case 30: { bool _r = _t->updateLogWrapper((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UAVObject* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightLogManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightLogManager::logEntriesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlightLogManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightLogManager::flightEntriesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlightLogManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightLogManager::logSettingsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FlightLogManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightLogManager::uavoEntriesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FlightLogManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightLogManager::disableControlsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FlightLogManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightLogManager::disableExportChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FlightLogManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightLogManager::adjustExportedTimestampsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FlightLogManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightLogManager::boardConnectedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FlightLogManager::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightLogManager::logStatusesChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FlightLogManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightLogManager::loggingEnabledChanged)) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DebugLogControl* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DebugLogSettings* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DebugLogStatus* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FlightLogManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< DebugLogStatus**>(_v) = _t->flightLogStatus(); break;
        case 1: *reinterpret_cast< DebugLogControl**>(_v) = _t->flightLogControl(); break;
        case 2: *reinterpret_cast< DebugLogSettings**>(_v) = _t->flightLogSettings(); break;
        case 3: *reinterpret_cast< QQmlListProperty<ExtendedDebugLogEntry>*>(_v) = _t->logEntries(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->flightEntries(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->disableControls(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->disableExport(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->adjustExportedTimestamps(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->boardConnected(); break;
        case 9: *reinterpret_cast< QQmlListProperty<UAVOLogSettingsWrapper>*>(_v) = _t->uavoEntries(); break;
        case 10: *reinterpret_cast< QStringList*>(_v) = _t->logSettings(); break;
        case 11: *reinterpret_cast< QStringList*>(_v) = _t->logStatuses(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->loggingEnabled(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->logEntriesCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FlightLogManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setDisableControls(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setDisableExport(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setAdjustExportedTimestamps(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setBoardConnected(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setLoggingEnabled(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FlightLogManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightLogManager.data,
    qt_meta_data_FlightLogManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightLogManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightLogManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightLogManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightLogManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FlightLogManager::logEntriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FlightLogManager::flightEntriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FlightLogManager::logSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FlightLogManager::uavoEntriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FlightLogManager::disableControlsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FlightLogManager::disableExportChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FlightLogManager::adjustExportedTimestampsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FlightLogManager::boardConnectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FlightLogManager::logStatusesChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FlightLogManager::loggingEnabledChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
