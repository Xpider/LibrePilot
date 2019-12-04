/****************************************************************************
** Meta object code from reading C++ file 'watchdogstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../watchdogstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'watchdogstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WatchdogStatusConstants_t {
    QByteArrayData data[2];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatchdogStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatchdogStatusConstants_t qt_meta_stringdata_WatchdogStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WatchdogStatusConstants"
QT_MOC_LITERAL(1, 24, 4) // "Enum"

    },
    "WatchdogStatusConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatchdogStatusConstants[] = {

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
       1,    1, 0x0,    0,   19,

 // enum data: key, value

       0        // eod
};

void WatchdogStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WatchdogStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_WatchdogStatusConstants.data,
    qt_meta_data_WatchdogStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WatchdogStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatchdogStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WatchdogStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WatchdogStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WatchdogStatus_t {
    QByteArrayData data[16];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatchdogStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatchdogStatus_t qt_meta_stringdata_WatchdogStatus = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WatchdogStatus"
QT_MOC_LITERAL(1, 15, 18), // "bootupFlagsChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "value"
QT_MOC_LITERAL(4, 41, 18), // "BootupFlagsChanged"
QT_MOC_LITERAL(5, 60, 18), // "activeFlagsChanged"
QT_MOC_LITERAL(6, 79, 18), // "ActiveFlagsChanged"
QT_MOC_LITERAL(7, 98, 14), // "setBootupFlags"
QT_MOC_LITERAL(8, 113, 14), // "setActiveFlags"
QT_MOC_LITERAL(9, 128, 17), // "emitNotifications"
QT_MOC_LITERAL(10, 146, 14), // "getBootupFlags"
QT_MOC_LITERAL(11, 161, 14), // "getActiveFlags"
QT_MOC_LITERAL(12, 176, 11), // "bootupFlags"
QT_MOC_LITERAL(13, 188, 11), // "activeFlags"
QT_MOC_LITERAL(14, 200, 11), // "BootupFlags"
QT_MOC_LITERAL(15, 212, 11) // "ActiveFlags"

    },
    "WatchdogStatus\0bootupFlagsChanged\0\0"
    "value\0BootupFlagsChanged\0activeFlagsChanged\0"
    "ActiveFlagsChanged\0setBootupFlags\0"
    "setActiveFlags\0emitNotifications\0"
    "getBootupFlags\0getActiveFlags\0bootupFlags\0"
    "activeFlags\0BootupFlags\0ActiveFlags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatchdogStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    1,   65,    2, 0x06 /* Public */,
       6,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   71,    2, 0x0a /* Public */,
       8,    1,   74,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   78,    2, 0x02 /* Public */,
      11,    0,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UShort,
    QMetaType::UShort,

 // properties: name, type, flags
      12, QMetaType::UShort, 0x00495103,
      13, QMetaType::UShort, 0x00495103,
      14, QMetaType::UShort, 0x00495103,
      15, QMetaType::UShort, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       1,
       3,

       0        // eod
};

void WatchdogStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WatchdogStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bootupFlagsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 1: _t->BootupFlagsChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 2: _t->activeFlagsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 3: _t->ActiveFlagsChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 4: _t->setBootupFlags((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 5: _t->setActiveFlags((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 6: _t->emitNotifications(); break;
        case 7: { quint16 _r = _t->getBootupFlags();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 8: { quint16 _r = _t->getActiveFlags();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WatchdogStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WatchdogStatus::bootupFlagsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WatchdogStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WatchdogStatus::BootupFlagsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WatchdogStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WatchdogStatus::activeFlagsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WatchdogStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WatchdogStatus::ActiveFlagsChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WatchdogStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->bootupFlags(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->activeFlags(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->getBootupFlags(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->getActiveFlags(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<WatchdogStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBootupFlags(*reinterpret_cast< quint16*>(_v)); break;
        case 1: _t->setActiveFlags(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setBootupFlags(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setActiveFlags(*reinterpret_cast< quint16*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject WatchdogStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_WatchdogStatus.data,
    qt_meta_data_WatchdogStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WatchdogStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatchdogStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WatchdogStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int WatchdogStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WatchdogStatus::bootupFlagsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WatchdogStatus::BootupFlagsChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WatchdogStatus::activeFlagsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WatchdogStatus::ActiveFlagsChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
