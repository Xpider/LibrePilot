/****************************************************************************
** Meta object code from reading C++ file 'flightplancontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../flightplancontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightplancontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightPlanControlConstants_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightPlanControlConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightPlanControlConstants_t qt_meta_stringdata_FlightPlanControlConstants = {
    {
QT_MOC_LITERAL(0, 0, 26), // "FlightPlanControlConstants"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 12) // "CommandCount"

    },
    "FlightPlanControlConstants\0Enum\0"
    "CommandCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightPlanControlConstants[] = {

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
       2, uint(FlightPlanControlConstants::CommandCount),

       0        // eod
};

void FlightPlanControlConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightPlanControlConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightPlanControlConstants.data,
    qt_meta_data_FlightPlanControlConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightPlanControlConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightPlanControlConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightPlanControlConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightPlanControlConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightPlanControl_Command_t {
    QByteArrayData data[5];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightPlanControl_Command_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightPlanControl_Command_t qt_meta_stringdata_FlightPlanControl_Command = {
    {
QT_MOC_LITERAL(0, 0, 25), // "FlightPlanControl_Command"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 5), // "Start"
QT_MOC_LITERAL(3, 37, 4), // "Stop"
QT_MOC_LITERAL(4, 42, 4) // "Kill"

    },
    "FlightPlanControl_Command\0Enum\0Start\0"
    "Stop\0Kill"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightPlanControl_Command[] = {

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
       2, uint(FlightPlanControl_Command::Start),
       3, uint(FlightPlanControl_Command::Stop),
       4, uint(FlightPlanControl_Command::Kill),

       0        // eod
};

void FlightPlanControl_Command::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightPlanControl_Command::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightPlanControl_Command.data,
    qt_meta_data_FlightPlanControl_Command,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightPlanControl_Command::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightPlanControl_Command::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightPlanControl_Command.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightPlanControl_Command::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightPlanControl_t {
    QByteArrayData data[11];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightPlanControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightPlanControl_t qt_meta_stringdata_FlightPlanControl = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FlightPlanControl"
QT_MOC_LITERAL(1, 18, 14), // "commandChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 31), // "FlightPlanControl_Command::Enum"
QT_MOC_LITERAL(4, 66, 5), // "value"
QT_MOC_LITERAL(5, 72, 14), // "CommandChanged"
QT_MOC_LITERAL(6, 87, 10), // "setCommand"
QT_MOC_LITERAL(7, 98, 17), // "emitNotifications"
QT_MOC_LITERAL(8, 116, 10), // "getCommand"
QT_MOC_LITERAL(9, 127, 7), // "command"
QT_MOC_LITERAL(10, 135, 7) // "Command"

    },
    "FlightPlanControl\0commandChanged\0\0"
    "FlightPlanControl_Command::Enum\0value\0"
    "CommandChanged\0setCommand\0emitNotifications\0"
    "getCommand\0command\0Command"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightPlanControl[] = {

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

void FlightPlanControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightPlanControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commandChanged((*reinterpret_cast< const FlightPlanControl_Command::Enum(*)>(_a[1]))); break;
        case 1: _t->CommandChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->setCommand((*reinterpret_cast< const FlightPlanControl_Command::Enum(*)>(_a[1]))); break;
        case 3: _t->setCommand((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->emitNotifications(); break;
        case 5: { quint8 _r = _t->getCommand();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightPlanControl::*)(const FlightPlanControl_Command::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanControl::commandChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlightPlanControl::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanControl::CommandChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FlightPlanControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< FlightPlanControl_Command::Enum*>(_v) = _t->command(); break;
        case 1: *reinterpret_cast< quint8*>(_v) = _t->getCommand(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FlightPlanControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCommand(*reinterpret_cast< FlightPlanControl_Command::Enum*>(_v)); break;
        case 1: _t->setCommand(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_FlightPlanControl[] = {
        &FlightPlanControl_Command::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject FlightPlanControl::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_FlightPlanControl.data,
    qt_meta_data_FlightPlanControl,
    qt_static_metacall,
    qt_meta_extradata_FlightPlanControl,
    nullptr
} };


const QMetaObject *FlightPlanControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightPlanControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightPlanControl.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int FlightPlanControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FlightPlanControl::commandChanged(const FlightPlanControl_Command::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlightPlanControl::CommandChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
