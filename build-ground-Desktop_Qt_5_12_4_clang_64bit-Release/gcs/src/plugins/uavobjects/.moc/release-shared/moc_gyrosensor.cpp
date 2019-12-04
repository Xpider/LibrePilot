/****************************************************************************
** Meta object code from reading C++ file 'gyrosensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gyrosensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gyrosensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GyroSensorConstants_t {
    QByteArrayData data[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GyroSensorConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GyroSensorConstants_t qt_meta_stringdata_GyroSensorConstants = {
    {
QT_MOC_LITERAL(0, 0, 19), // "GyroSensorConstants"
QT_MOC_LITERAL(1, 20, 4) // "Enum"

    },
    "GyroSensorConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GyroSensorConstants[] = {

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

void GyroSensorConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GyroSensorConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GyroSensorConstants.data,
    qt_meta_data_GyroSensorConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GyroSensorConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GyroSensorConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GyroSensorConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GyroSensorConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GyroSensor_t {
    QByteArrayData data[30];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GyroSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GyroSensor_t qt_meta_stringdata_GyroSensor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GyroSensor"
QT_MOC_LITERAL(1, 11, 8), // "xChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "value"
QT_MOC_LITERAL(4, 27, 8), // "yChanged"
QT_MOC_LITERAL(5, 36, 8), // "zChanged"
QT_MOC_LITERAL(6, 45, 18), // "temperatureChanged"
QT_MOC_LITERAL(7, 64, 26), // "sensorReadTimestampChanged"
QT_MOC_LITERAL(8, 91, 26), // "SensorReadTimestampChanged"
QT_MOC_LITERAL(9, 118, 4), // "setX"
QT_MOC_LITERAL(10, 123, 4), // "setx"
QT_MOC_LITERAL(11, 128, 4), // "setY"
QT_MOC_LITERAL(12, 133, 4), // "sety"
QT_MOC_LITERAL(13, 138, 4), // "setZ"
QT_MOC_LITERAL(14, 143, 4), // "setz"
QT_MOC_LITERAL(15, 148, 14), // "setTemperature"
QT_MOC_LITERAL(16, 163, 14), // "settemperature"
QT_MOC_LITERAL(17, 178, 22), // "setSensorReadTimestamp"
QT_MOC_LITERAL(18, 201, 17), // "emitNotifications"
QT_MOC_LITERAL(19, 219, 4), // "getx"
QT_MOC_LITERAL(20, 224, 4), // "gety"
QT_MOC_LITERAL(21, 229, 4), // "getz"
QT_MOC_LITERAL(22, 234, 14), // "gettemperature"
QT_MOC_LITERAL(23, 249, 22), // "getSensorReadTimestamp"
QT_MOC_LITERAL(24, 272, 1), // "x"
QT_MOC_LITERAL(25, 274, 1), // "y"
QT_MOC_LITERAL(26, 276, 1), // "z"
QT_MOC_LITERAL(27, 278, 11), // "temperature"
QT_MOC_LITERAL(28, 290, 19), // "sensorReadTimestamp"
QT_MOC_LITERAL(29, 310, 19) // "SensorReadTimestamp"

    },
    "GyroSensor\0xChanged\0\0value\0yChanged\0"
    "zChanged\0temperatureChanged\0"
    "sensorReadTimestampChanged\0"
    "SensorReadTimestampChanged\0setX\0setx\0"
    "setY\0sety\0setZ\0setz\0setTemperature\0"
    "settemperature\0setSensorReadTimestamp\0"
    "emitNotifications\0getx\0gety\0getz\0"
    "gettemperature\0getSensorReadTimestamp\0"
    "x\0y\0z\0temperature\0sensorReadTimestamp\0"
    "SensorReadTimestamp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GyroSensor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       6,  170, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    1,  122,    2, 0x06 /* Public */,
       5,    1,  125,    2, 0x06 /* Public */,
       6,    1,  128,    2, 0x06 /* Public */,
       7,    1,  131,    2, 0x06 /* Public */,
       8,    1,  134,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  137,    2, 0x0a /* Public */,
      10,    1,  140,    2, 0x0a /* Public */,
      11,    1,  143,    2, 0x0a /* Public */,
      12,    1,  146,    2, 0x0a /* Public */,
      13,    1,  149,    2, 0x0a /* Public */,
      14,    1,  152,    2, 0x0a /* Public */,
      15,    1,  155,    2, 0x0a /* Public */,
      16,    1,  158,    2, 0x0a /* Public */,
      17,    1,  161,    2, 0x0a /* Public */,
      18,    0,  164,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      19,    0,  165,    2, 0x02 /* Public */,
      20,    0,  166,    2, 0x02 /* Public */,
      21,    0,  167,    2, 0x02 /* Public */,
      22,    0,  168,    2, 0x02 /* Public */,
      23,    0,  169,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UInt,

 // properties: name, type, flags
      24, QMetaType::Float, 0x00495103,
      25, QMetaType::Float, 0x00495103,
      26, QMetaType::Float, 0x00495103,
      27, QMetaType::Float, 0x00495103,
      28, QMetaType::UInt, 0x00495103,
      29, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void GyroSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GyroSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->yChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->zChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->temperatureChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 4: _t->sensorReadTimestampChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 5: _t->SensorReadTimestampChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->setX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->setx((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->sety((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->setZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->setz((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->setTemperature((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->settemperature((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->setSensorReadTimestamp((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 15: _t->emitNotifications(); break;
        case 16: { float _r = _t->getx();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 17: { float _r = _t->gety();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 18: { float _r = _t->getz();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 19: { float _r = _t->gettemperature();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 20: { quint32 _r = _t->getSensorReadTimestamp();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GyroSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GyroSensor::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GyroSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GyroSensor::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GyroSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GyroSensor::zChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GyroSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GyroSensor::temperatureChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GyroSensor::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GyroSensor::sensorReadTimestampChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GyroSensor::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GyroSensor::SensorReadTimestampChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GyroSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->z(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->temperature(); break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->sensorReadTimestamp(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->getSensorReadTimestamp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GyroSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setZ(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setTemperature(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setSensorReadTimestamp(*reinterpret_cast< quint32*>(_v)); break;
        case 5: _t->setSensorReadTimestamp(*reinterpret_cast< quint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GyroSensor::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_GyroSensor.data,
    qt_meta_data_GyroSensor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GyroSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GyroSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GyroSensor.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int GyroSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
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
void GyroSensor::xChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GyroSensor::yChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GyroSensor::zChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GyroSensor::temperatureChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GyroSensor::sensorReadTimestampChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GyroSensor::SensorReadTimestampChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
