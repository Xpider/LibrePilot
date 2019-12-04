/****************************************************************************
** Meta object code from reading C++ file 'ratedesired.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ratedesired.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ratedesired.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RateDesiredConstants_t {
    QByteArrayData data[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RateDesiredConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RateDesiredConstants_t qt_meta_stringdata_RateDesiredConstants = {
    {
QT_MOC_LITERAL(0, 0, 20), // "RateDesiredConstants"
QT_MOC_LITERAL(1, 21, 4) // "Enum"

    },
    "RateDesiredConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RateDesiredConstants[] = {

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

void RateDesiredConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RateDesiredConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_RateDesiredConstants.data,
    qt_meta_data_RateDesiredConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RateDesiredConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RateDesiredConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RateDesiredConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RateDesiredConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RateDesired_t {
    QByteArrayData data[28];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RateDesired_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RateDesired_t qt_meta_stringdata_RateDesired = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RateDesired"
QT_MOC_LITERAL(1, 12, 11), // "rollChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "value"
QT_MOC_LITERAL(4, 31, 11), // "RollChanged"
QT_MOC_LITERAL(5, 43, 12), // "pitchChanged"
QT_MOC_LITERAL(6, 56, 12), // "PitchChanged"
QT_MOC_LITERAL(7, 69, 10), // "yawChanged"
QT_MOC_LITERAL(8, 80, 10), // "YawChanged"
QT_MOC_LITERAL(9, 91, 13), // "thrustChanged"
QT_MOC_LITERAL(10, 105, 13), // "ThrustChanged"
QT_MOC_LITERAL(11, 119, 7), // "setRoll"
QT_MOC_LITERAL(12, 127, 8), // "setPitch"
QT_MOC_LITERAL(13, 136, 6), // "setYaw"
QT_MOC_LITERAL(14, 143, 9), // "setThrust"
QT_MOC_LITERAL(15, 153, 17), // "emitNotifications"
QT_MOC_LITERAL(16, 171, 7), // "getRoll"
QT_MOC_LITERAL(17, 179, 8), // "getPitch"
QT_MOC_LITERAL(18, 188, 6), // "getYaw"
QT_MOC_LITERAL(19, 195, 9), // "getThrust"
QT_MOC_LITERAL(20, 205, 4), // "roll"
QT_MOC_LITERAL(21, 210, 5), // "pitch"
QT_MOC_LITERAL(22, 216, 3), // "yaw"
QT_MOC_LITERAL(23, 220, 6), // "thrust"
QT_MOC_LITERAL(24, 227, 4), // "Roll"
QT_MOC_LITERAL(25, 232, 5), // "Pitch"
QT_MOC_LITERAL(26, 238, 3), // "Yaw"
QT_MOC_LITERAL(27, 242, 6) // "Thrust"

    },
    "RateDesired\0rollChanged\0\0value\0"
    "RollChanged\0pitchChanged\0PitchChanged\0"
    "yawChanged\0YawChanged\0thrustChanged\0"
    "ThrustChanged\0setRoll\0setPitch\0setYaw\0"
    "setThrust\0emitNotifications\0getRoll\0"
    "getPitch\0getYaw\0getThrust\0roll\0pitch\0"
    "yaw\0thrust\0Roll\0Pitch\0Yaw\0Thrust"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RateDesired[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       8,  140, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       5,    1,  105,    2, 0x06 /* Public */,
       6,    1,  108,    2, 0x06 /* Public */,
       7,    1,  111,    2, 0x06 /* Public */,
       8,    1,  114,    2, 0x06 /* Public */,
       9,    1,  117,    2, 0x06 /* Public */,
      10,    1,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  123,    2, 0x0a /* Public */,
      12,    1,  126,    2, 0x0a /* Public */,
      13,    1,  129,    2, 0x0a /* Public */,
      14,    1,  132,    2, 0x0a /* Public */,
      15,    0,  135,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      16,    0,  136,    2, 0x02 /* Public */,
      17,    0,  137,    2, 0x02 /* Public */,
      18,    0,  138,    2, 0x02 /* Public */,
      19,    0,  139,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      20, QMetaType::Float, 0x00495103,
      21, QMetaType::Float, 0x00495103,
      22, QMetaType::Float, 0x00495103,
      23, QMetaType::Float, 0x00495103,
      24, QMetaType::Float, 0x00495103,
      25, QMetaType::Float, 0x00495103,
      26, QMetaType::Float, 0x00495103,
      27, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       1,
       3,
       5,
       7,

       0        // eod
};

void RateDesired::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RateDesired *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->pitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->yawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->thrustChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->ThrustChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->setPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 10: _t->setYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->setThrust((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 12: _t->emitNotifications(); break;
        case 13: { float _r = _t->getRoll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 14: { float _r = _t->getPitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 15: { float _r = _t->getYaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 16: { float _r = _t->getThrust();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RateDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RateDesired::rollChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RateDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RateDesired::RollChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RateDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RateDesired::pitchChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RateDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RateDesired::PitchChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RateDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RateDesired::yawChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RateDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RateDesired::YawChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RateDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RateDesired::thrustChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RateDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RateDesired::ThrustChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RateDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->roll(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->pitch(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->yaw(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->thrust(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getRoll(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getPitch(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getYaw(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getThrust(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RateDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoll(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setPitch(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setThrust(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setRoll(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setPitch(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setThrust(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RateDesired::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_RateDesired.data,
    qt_meta_data_RateDesired,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RateDesired::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RateDesired::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RateDesired.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int RateDesired::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RateDesired::rollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RateDesired::RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RateDesired::pitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RateDesired::PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RateDesired::yawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RateDesired::YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RateDesired::thrustChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RateDesired::ThrustChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
