/****************************************************************************
** Meta object code from reading C++ file 'altitudeholdstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../altitudeholdstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'altitudeholdstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AltitudeHoldStatusConstants_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AltitudeHoldStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AltitudeHoldStatusConstants_t qt_meta_stringdata_AltitudeHoldStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AltitudeHoldStatusConstants"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 10) // "StateCount"

    },
    "AltitudeHoldStatusConstants\0Enum\0"
    "StateCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AltitudeHoldStatusConstants[] = {

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
       2, uint(AltitudeHoldStatusConstants::StateCount),

       0        // eod
};

void AltitudeHoldStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AltitudeHoldStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AltitudeHoldStatusConstants.data,
    qt_meta_data_AltitudeHoldStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AltitudeHoldStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AltitudeHoldStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AltitudeHoldStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AltitudeHoldStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AltitudeHoldStatus_State_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AltitudeHoldStatus_State_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AltitudeHoldStatus_State_t qt_meta_stringdata_AltitudeHoldStatus_State = {
    {
QT_MOC_LITERAL(0, 0, 24), // "AltitudeHoldStatus_State"
QT_MOC_LITERAL(1, 25, 4), // "Enum"
QT_MOC_LITERAL(2, 30, 6), // "Direct"
QT_MOC_LITERAL(3, 37, 13), // "AltitudeVario"
QT_MOC_LITERAL(4, 51, 12) // "AltitudeHold"

    },
    "AltitudeHoldStatus_State\0Enum\0Direct\0"
    "AltitudeVario\0AltitudeHold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AltitudeHoldStatus_State[] = {

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
       2, uint(AltitudeHoldStatus_State::Direct),
       3, uint(AltitudeHoldStatus_State::AltitudeVario),
       4, uint(AltitudeHoldStatus_State::AltitudeHold),

       0        // eod
};

void AltitudeHoldStatus_State::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AltitudeHoldStatus_State::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AltitudeHoldStatus_State.data,
    qt_meta_data_AltitudeHoldStatus_State,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AltitudeHoldStatus_State::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AltitudeHoldStatus_State::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AltitudeHoldStatus_State.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AltitudeHoldStatus_State::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AltitudeHoldStatus_t {
    QByteArrayData data[23];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AltitudeHoldStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AltitudeHoldStatus_t qt_meta_stringdata_AltitudeHoldStatus = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AltitudeHoldStatus"
QT_MOC_LITERAL(1, 19, 22), // "velocityDesiredChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "value"
QT_MOC_LITERAL(4, 49, 22), // "VelocityDesiredChanged"
QT_MOC_LITERAL(5, 72, 19), // "thrustDemandChanged"
QT_MOC_LITERAL(6, 92, 19), // "ThrustDemandChanged"
QT_MOC_LITERAL(7, 112, 12), // "stateChanged"
QT_MOC_LITERAL(8, 125, 30), // "AltitudeHoldStatus_State::Enum"
QT_MOC_LITERAL(9, 156, 12), // "StateChanged"
QT_MOC_LITERAL(10, 169, 18), // "setVelocityDesired"
QT_MOC_LITERAL(11, 188, 15), // "setThrustDemand"
QT_MOC_LITERAL(12, 204, 8), // "setState"
QT_MOC_LITERAL(13, 213, 17), // "emitNotifications"
QT_MOC_LITERAL(14, 231, 18), // "getVelocityDesired"
QT_MOC_LITERAL(15, 250, 15), // "getThrustDemand"
QT_MOC_LITERAL(16, 266, 8), // "getState"
QT_MOC_LITERAL(17, 275, 15), // "velocityDesired"
QT_MOC_LITERAL(18, 291, 12), // "thrustDemand"
QT_MOC_LITERAL(19, 304, 5), // "state"
QT_MOC_LITERAL(20, 310, 15), // "VelocityDesired"
QT_MOC_LITERAL(21, 326, 12), // "ThrustDemand"
QT_MOC_LITERAL(22, 339, 5) // "State"

    },
    "AltitudeHoldStatus\0velocityDesiredChanged\0"
    "\0value\0VelocityDesiredChanged\0"
    "thrustDemandChanged\0ThrustDemandChanged\0"
    "stateChanged\0AltitudeHoldStatus_State::Enum\0"
    "StateChanged\0setVelocityDesired\0"
    "setThrustDemand\0setState\0emitNotifications\0"
    "getVelocityDesired\0getThrustDemand\0"
    "getState\0velocityDesired\0thrustDemand\0"
    "state\0VelocityDesired\0ThrustDemand\0"
    "State"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AltitudeHoldStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       6,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       6,    1,   93,    2, 0x06 /* Public */,
       7,    1,   96,    2, 0x06 /* Public */,
       9,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  102,    2, 0x0a /* Public */,
      11,    1,  105,    2, 0x0a /* Public */,
      12,    1,  108,    2, 0x0a /* Public */,
      12,    1,  111,    2, 0x0a /* Public */,
      13,    0,  114,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      14,    0,  115,    2, 0x02 /* Public */,
      15,    0,  116,    2, 0x02 /* Public */,
      16,    0,  117,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,

 // properties: name, type, flags
      17, QMetaType::Float, 0x00495103,
      18, QMetaType::Float, 0x00495103,
      19, 0x80000000 | 8, 0x0049510b,
      20, QMetaType::Float, 0x00495103,
      21, QMetaType::Float, 0x00495103,
      22, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       1,
       3,
       5,

       0        // eod
};

void AltitudeHoldStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AltitudeHoldStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->velocityDesiredChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->VelocityDesiredChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->thrustDemandChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->ThrustDemandChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->stateChanged((*reinterpret_cast< const AltitudeHoldStatus_State::Enum(*)>(_a[1]))); break;
        case 5: _t->StateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->setVelocityDesired((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->setThrustDemand((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 8: _t->setState((*reinterpret_cast< const AltitudeHoldStatus_State::Enum(*)>(_a[1]))); break;
        case 9: _t->setState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->emitNotifications(); break;
        case 11: { float _r = _t->getVelocityDesired();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 12: { float _r = _t->getThrustDemand();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 13: { quint8 _r = _t->getState();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AltitudeHoldStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeHoldStatus::velocityDesiredChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AltitudeHoldStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeHoldStatus::VelocityDesiredChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AltitudeHoldStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeHoldStatus::thrustDemandChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AltitudeHoldStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeHoldStatus::ThrustDemandChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AltitudeHoldStatus::*)(const AltitudeHoldStatus_State::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeHoldStatus::stateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AltitudeHoldStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeHoldStatus::StateChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AltitudeHoldStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->velocityDesired(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->thrustDemand(); break;
        case 2: *reinterpret_cast< AltitudeHoldStatus_State::Enum*>(_v) = _t->state(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getVelocityDesired(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getThrustDemand(); break;
        case 5: *reinterpret_cast< quint8*>(_v) = _t->getState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AltitudeHoldStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVelocityDesired(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setThrustDemand(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setState(*reinterpret_cast< AltitudeHoldStatus_State::Enum*>(_v)); break;
        case 3: _t->setVelocityDesired(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setThrustDemand(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setState(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_AltitudeHoldStatus[] = {
        &AltitudeHoldStatus_State::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject AltitudeHoldStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_AltitudeHoldStatus.data,
    qt_meta_data_AltitudeHoldStatus,
    qt_static_metacall,
    qt_meta_extradata_AltitudeHoldStatus,
    nullptr
} };


const QMetaObject *AltitudeHoldStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AltitudeHoldStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AltitudeHoldStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AltitudeHoldStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
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
void AltitudeHoldStatus::velocityDesiredChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AltitudeHoldStatus::VelocityDesiredChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AltitudeHoldStatus::thrustDemandChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AltitudeHoldStatus::ThrustDemandChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AltitudeHoldStatus::stateChanged(const AltitudeHoldStatus_State::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AltitudeHoldStatus::StateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
