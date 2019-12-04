/****************************************************************************
** Meta object code from reading C++ file 'airspeedstate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../airspeedstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'airspeedstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AirspeedStateConstants_t {
    QByteArrayData data[2];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirspeedStateConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirspeedStateConstants_t qt_meta_stringdata_AirspeedStateConstants = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AirspeedStateConstants"
QT_MOC_LITERAL(1, 23, 4) // "Enum"

    },
    "AirspeedStateConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirspeedStateConstants[] = {

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

void AirspeedStateConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AirspeedStateConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AirspeedStateConstants.data,
    qt_meta_data_AirspeedStateConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AirspeedStateConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirspeedStateConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirspeedStateConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AirspeedStateConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AirspeedState_t {
    QByteArrayData data[16];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirspeedState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirspeedState_t qt_meta_stringdata_AirspeedState = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AirspeedState"
QT_MOC_LITERAL(1, 14, 25), // "calibratedAirspeedChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "value"
QT_MOC_LITERAL(4, 47, 25), // "CalibratedAirspeedChanged"
QT_MOC_LITERAL(5, 73, 19), // "trueAirspeedChanged"
QT_MOC_LITERAL(6, 93, 19), // "TrueAirspeedChanged"
QT_MOC_LITERAL(7, 113, 21), // "setCalibratedAirspeed"
QT_MOC_LITERAL(8, 135, 15), // "setTrueAirspeed"
QT_MOC_LITERAL(9, 151, 17), // "emitNotifications"
QT_MOC_LITERAL(10, 169, 21), // "getCalibratedAirspeed"
QT_MOC_LITERAL(11, 191, 15), // "getTrueAirspeed"
QT_MOC_LITERAL(12, 207, 18), // "calibratedAirspeed"
QT_MOC_LITERAL(13, 226, 12), // "trueAirspeed"
QT_MOC_LITERAL(14, 239, 18), // "CalibratedAirspeed"
QT_MOC_LITERAL(15, 258, 12) // "TrueAirspeed"

    },
    "AirspeedState\0calibratedAirspeedChanged\0"
    "\0value\0CalibratedAirspeedChanged\0"
    "trueAirspeedChanged\0TrueAirspeedChanged\0"
    "setCalibratedAirspeed\0setTrueAirspeed\0"
    "emitNotifications\0getCalibratedAirspeed\0"
    "getTrueAirspeed\0calibratedAirspeed\0"
    "trueAirspeed\0CalibratedAirspeed\0"
    "TrueAirspeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirspeedState[] = {

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
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      12, QMetaType::Float, 0x00495103,
      13, QMetaType::Float, 0x00495103,
      14, QMetaType::Float, 0x00495103,
      15, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       1,
       3,

       0        // eod
};

void AirspeedState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AirspeedState *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calibratedAirspeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->CalibratedAirspeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->trueAirspeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->TrueAirspeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setCalibratedAirspeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->setTrueAirspeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 6: _t->emitNotifications(); break;
        case 7: { float _r = _t->getCalibratedAirspeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 8: { float _r = _t->getTrueAirspeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AirspeedState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedState::calibratedAirspeedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AirspeedState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedState::CalibratedAirspeedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AirspeedState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedState::trueAirspeedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AirspeedState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedState::TrueAirspeedChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AirspeedState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->calibratedAirspeed(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->trueAirspeed(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getCalibratedAirspeed(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getTrueAirspeed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AirspeedState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCalibratedAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setTrueAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setCalibratedAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setTrueAirspeed(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AirspeedState::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_AirspeedState.data,
    qt_meta_data_AirspeedState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AirspeedState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirspeedState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirspeedState.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AirspeedState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AirspeedState::calibratedAirspeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AirspeedState::CalibratedAirspeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AirspeedState::trueAirspeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AirspeedState::TrueAirspeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
