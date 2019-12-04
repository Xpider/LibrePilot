/****************************************************************************
** Meta object code from reading C++ file 'faultsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../faultsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'faultsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FaultSettingsConstants_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaultSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaultSettingsConstants_t qt_meta_stringdata_FaultSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 22), // "FaultSettingsConstants"
QT_MOC_LITERAL(1, 23, 4), // "Enum"
QT_MOC_LITERAL(2, 28, 18) // "ActivateFaultCount"

    },
    "FaultSettingsConstants\0Enum\0"
    "ActivateFaultCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaultSettingsConstants[] = {

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
       2, uint(FaultSettingsConstants::ActivateFaultCount),

       0        // eod
};

void FaultSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FaultSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FaultSettingsConstants.data,
    qt_meta_data_FaultSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FaultSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaultSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FaultSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FaultSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FaultSettings_ActivateFault_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaultSettings_ActivateFault_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaultSettings_ActivateFault_t qt_meta_stringdata_FaultSettings_ActivateFault = {
    {
QT_MOC_LITERAL(0, 0, 27), // "FaultSettings_ActivateFault"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 7), // "NoFault"
QT_MOC_LITERAL(3, 41, 16), // "ModuleInitAssert"
QT_MOC_LITERAL(4, 58, 15), // "InitOutOfMemory"
QT_MOC_LITERAL(5, 74, 12), // "InitBusError"
QT_MOC_LITERAL(6, 87, 11), // "RunawayTask"
QT_MOC_LITERAL(7, 99, 15) // "TaskOutOfMemory"

    },
    "FaultSettings_ActivateFault\0Enum\0"
    "NoFault\0ModuleInitAssert\0InitOutOfMemory\0"
    "InitBusError\0RunawayTask\0TaskOutOfMemory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaultSettings_ActivateFault[] = {

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
       2, uint(FaultSettings_ActivateFault::NoFault),
       3, uint(FaultSettings_ActivateFault::ModuleInitAssert),
       4, uint(FaultSettings_ActivateFault::InitOutOfMemory),
       5, uint(FaultSettings_ActivateFault::InitBusError),
       6, uint(FaultSettings_ActivateFault::RunawayTask),
       7, uint(FaultSettings_ActivateFault::TaskOutOfMemory),

       0        // eod
};

void FaultSettings_ActivateFault::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FaultSettings_ActivateFault::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FaultSettings_ActivateFault.data,
    qt_meta_data_FaultSettings_ActivateFault,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FaultSettings_ActivateFault::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaultSettings_ActivateFault::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FaultSettings_ActivateFault.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FaultSettings_ActivateFault::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FaultSettings_t {
    QByteArrayData data[11];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaultSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaultSettings_t qt_meta_stringdata_FaultSettings = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FaultSettings"
QT_MOC_LITERAL(1, 14, 20), // "activateFaultChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 33), // "FaultSettings_ActivateFault::..."
QT_MOC_LITERAL(4, 70, 5), // "value"
QT_MOC_LITERAL(5, 76, 20), // "ActivateFaultChanged"
QT_MOC_LITERAL(6, 97, 16), // "setActivateFault"
QT_MOC_LITERAL(7, 114, 17), // "emitNotifications"
QT_MOC_LITERAL(8, 132, 16), // "getActivateFault"
QT_MOC_LITERAL(9, 149, 13), // "activateFault"
QT_MOC_LITERAL(10, 163, 13) // "ActivateFault"

    },
    "FaultSettings\0activateFaultChanged\0\0"
    "FaultSettings_ActivateFault::Enum\0"
    "value\0ActivateFaultChanged\0setActivateFault\0"
    "emitNotifications\0getActivateFault\0"
    "activateFault\0ActivateFault"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaultSettings[] = {

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

void FaultSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FaultSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activateFaultChanged((*reinterpret_cast< const FaultSettings_ActivateFault::Enum(*)>(_a[1]))); break;
        case 1: _t->ActivateFaultChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->setActivateFault((*reinterpret_cast< const FaultSettings_ActivateFault::Enum(*)>(_a[1]))); break;
        case 3: _t->setActivateFault((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->emitNotifications(); break;
        case 5: { quint8 _r = _t->getActivateFault();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FaultSettings::*)(const FaultSettings_ActivateFault::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FaultSettings::activateFaultChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FaultSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FaultSettings::ActivateFaultChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FaultSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< FaultSettings_ActivateFault::Enum*>(_v) = _t->activateFault(); break;
        case 1: *reinterpret_cast< quint8*>(_v) = _t->getActivateFault(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FaultSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActivateFault(*reinterpret_cast< FaultSettings_ActivateFault::Enum*>(_v)); break;
        case 1: _t->setActivateFault(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_FaultSettings[] = {
        &FaultSettings_ActivateFault::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject FaultSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_FaultSettings.data,
    qt_meta_data_FaultSettings,
    qt_static_metacall,
    qt_meta_extradata_FaultSettings,
    nullptr
} };


const QMetaObject *FaultSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaultSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FaultSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int FaultSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FaultSettings::activateFaultChanged(const FaultSettings_ActivateFault::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FaultSettings::ActivateFaultChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
