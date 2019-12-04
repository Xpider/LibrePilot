/****************************************************************************
** Meta object code from reading C++ file 'barosensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../barosensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'barosensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaroSensorConstants_t {
    QByteArrayData data[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaroSensorConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaroSensorConstants_t qt_meta_stringdata_BaroSensorConstants = {
    {
QT_MOC_LITERAL(0, 0, 19), // "BaroSensorConstants"
QT_MOC_LITERAL(1, 20, 4) // "Enum"

    },
    "BaroSensorConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaroSensorConstants[] = {

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

void BaroSensorConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BaroSensorConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_BaroSensorConstants.data,
    qt_meta_data_BaroSensorConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BaroSensorConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaroSensorConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaroSensorConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BaroSensorConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BaroSensor_t {
    QByteArrayData data[22];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaroSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaroSensor_t qt_meta_stringdata_BaroSensor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BaroSensor"
QT_MOC_LITERAL(1, 11, 15), // "altitudeChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "value"
QT_MOC_LITERAL(4, 34, 15), // "AltitudeChanged"
QT_MOC_LITERAL(5, 50, 18), // "temperatureChanged"
QT_MOC_LITERAL(6, 69, 18), // "TemperatureChanged"
QT_MOC_LITERAL(7, 88, 15), // "pressureChanged"
QT_MOC_LITERAL(8, 104, 15), // "PressureChanged"
QT_MOC_LITERAL(9, 120, 11), // "setAltitude"
QT_MOC_LITERAL(10, 132, 14), // "setTemperature"
QT_MOC_LITERAL(11, 147, 11), // "setPressure"
QT_MOC_LITERAL(12, 159, 17), // "emitNotifications"
QT_MOC_LITERAL(13, 177, 11), // "getAltitude"
QT_MOC_LITERAL(14, 189, 14), // "getTemperature"
QT_MOC_LITERAL(15, 204, 11), // "getPressure"
QT_MOC_LITERAL(16, 216, 8), // "altitude"
QT_MOC_LITERAL(17, 225, 11), // "temperature"
QT_MOC_LITERAL(18, 237, 8), // "pressure"
QT_MOC_LITERAL(19, 246, 8), // "Altitude"
QT_MOC_LITERAL(20, 255, 11), // "Temperature"
QT_MOC_LITERAL(21, 267, 8) // "Pressure"

    },
    "BaroSensor\0altitudeChanged\0\0value\0"
    "AltitudeChanged\0temperatureChanged\0"
    "TemperatureChanged\0pressureChanged\0"
    "PressureChanged\0setAltitude\0setTemperature\0"
    "setPressure\0emitNotifications\0getAltitude\0"
    "getTemperature\0getPressure\0altitude\0"
    "temperature\0pressure\0Altitude\0Temperature\0"
    "Pressure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaroSensor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       5,    1,   85,    2, 0x06 /* Public */,
       6,    1,   88,    2, 0x06 /* Public */,
       7,    1,   91,    2, 0x06 /* Public */,
       8,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   97,    2, 0x0a /* Public */,
      10,    1,  100,    2, 0x0a /* Public */,
      11,    1,  103,    2, 0x0a /* Public */,
      12,    0,  106,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      13,    0,  107,    2, 0x02 /* Public */,
      14,    0,  108,    2, 0x02 /* Public */,
      15,    0,  109,    2, 0x02 /* Public */,

 // signals: parameters
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
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      16, QMetaType::Float, 0x00495103,
      17, QMetaType::Float, 0x00495103,
      18, QMetaType::Float, 0x00495103,
      19, QMetaType::Float, 0x00495103,
      20, QMetaType::Float, 0x00495103,
      21, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       1,
       3,
       5,

       0        // eod
};

void BaroSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BaroSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->altitudeChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->AltitudeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->temperatureChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->TemperatureChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->pressureChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->PressureChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setAltitude((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->setTemperature((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 8: _t->setPressure((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->emitNotifications(); break;
        case 10: { float _r = _t->getAltitude();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 11: { float _r = _t->getTemperature();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 12: { float _r = _t->getPressure();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BaroSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaroSensor::altitudeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BaroSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaroSensor::AltitudeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BaroSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaroSensor::temperatureChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BaroSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaroSensor::TemperatureChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BaroSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaroSensor::pressureChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BaroSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaroSensor::PressureChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BaroSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->altitude(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->temperature(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->pressure(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getAltitude(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getTemperature(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getPressure(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BaroSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAltitude(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setTemperature(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setPressure(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setAltitude(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setTemperature(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setPressure(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject BaroSensor::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_BaroSensor.data,
    qt_meta_data_BaroSensor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BaroSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaroSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaroSensor.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int BaroSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void BaroSensor::altitudeChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BaroSensor::AltitudeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BaroSensor::temperatureChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BaroSensor::TemperatureChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BaroSensor::pressureChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BaroSensor::PressureChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
