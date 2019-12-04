/****************************************************************************
** Meta object code from reading C++ file 'auxmagsensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../auxmagsensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auxmagsensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AuxMagSensorConstants_t {
    QByteArrayData data[3];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuxMagSensorConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuxMagSensorConstants_t qt_meta_stringdata_AuxMagSensorConstants = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AuxMagSensorConstants"
QT_MOC_LITERAL(1, 22, 4), // "Enum"
QT_MOC_LITERAL(2, 27, 11) // "StatusCount"

    },
    "AuxMagSensorConstants\0Enum\0StatusCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuxMagSensorConstants[] = {

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
       2, uint(AuxMagSensorConstants::StatusCount),

       0        // eod
};

void AuxMagSensorConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AuxMagSensorConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AuxMagSensorConstants.data,
    qt_meta_data_AuxMagSensorConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AuxMagSensorConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuxMagSensorConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuxMagSensorConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AuxMagSensorConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AuxMagSensor_Status_t {
    QByteArrayData data[4];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuxMagSensor_Status_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuxMagSensor_Status_t qt_meta_stringdata_AuxMagSensor_Status = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AuxMagSensor_Status"
QT_MOC_LITERAL(1, 20, 4), // "Enum"
QT_MOC_LITERAL(2, 25, 4), // "None"
QT_MOC_LITERAL(3, 30, 2) // "Ok"

    },
    "AuxMagSensor_Status\0Enum\0None\0Ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuxMagSensor_Status[] = {

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
       1,    1, 0x0,    2,   19,

 // enum data: key, value
       2, uint(AuxMagSensor_Status::None),
       3, uint(AuxMagSensor_Status::Ok),

       0        // eod
};

void AuxMagSensor_Status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AuxMagSensor_Status::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AuxMagSensor_Status.data,
    qt_meta_data_AuxMagSensor_Status,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AuxMagSensor_Status::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuxMagSensor_Status::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuxMagSensor_Status.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AuxMagSensor_Status::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AuxMagSensor_t {
    QByteArrayData data[26];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuxMagSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuxMagSensor_t qt_meta_stringdata_AuxMagSensor = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AuxMagSensor"
QT_MOC_LITERAL(1, 13, 8), // "xChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "value"
QT_MOC_LITERAL(4, 29, 8), // "yChanged"
QT_MOC_LITERAL(5, 38, 8), // "zChanged"
QT_MOC_LITERAL(6, 47, 13), // "statusChanged"
QT_MOC_LITERAL(7, 61, 25), // "AuxMagSensor_Status::Enum"
QT_MOC_LITERAL(8, 87, 13), // "StatusChanged"
QT_MOC_LITERAL(9, 101, 4), // "setX"
QT_MOC_LITERAL(10, 106, 4), // "setx"
QT_MOC_LITERAL(11, 111, 4), // "setY"
QT_MOC_LITERAL(12, 116, 4), // "sety"
QT_MOC_LITERAL(13, 121, 4), // "setZ"
QT_MOC_LITERAL(14, 126, 4), // "setz"
QT_MOC_LITERAL(15, 131, 9), // "setStatus"
QT_MOC_LITERAL(16, 141, 17), // "emitNotifications"
QT_MOC_LITERAL(17, 159, 4), // "getx"
QT_MOC_LITERAL(18, 164, 4), // "gety"
QT_MOC_LITERAL(19, 169, 4), // "getz"
QT_MOC_LITERAL(20, 174, 9), // "getStatus"
QT_MOC_LITERAL(21, 184, 1), // "x"
QT_MOC_LITERAL(22, 186, 1), // "y"
QT_MOC_LITERAL(23, 188, 1), // "z"
QT_MOC_LITERAL(24, 190, 6), // "status"
QT_MOC_LITERAL(25, 197, 6) // "Status"

    },
    "AuxMagSensor\0xChanged\0\0value\0yChanged\0"
    "zChanged\0statusChanged\0AuxMagSensor_Status::Enum\0"
    "StatusChanged\0setX\0setx\0setY\0sety\0"
    "setZ\0setz\0setStatus\0emitNotifications\0"
    "getx\0gety\0getz\0getStatus\0x\0y\0z\0status\0"
    "Status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuxMagSensor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       5,  148, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x06 /* Public */,
       5,    1,  110,    2, 0x06 /* Public */,
       6,    1,  113,    2, 0x06 /* Public */,
       8,    1,  116,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  119,    2, 0x0a /* Public */,
      10,    1,  122,    2, 0x0a /* Public */,
      11,    1,  125,    2, 0x0a /* Public */,
      12,    1,  128,    2, 0x0a /* Public */,
      13,    1,  131,    2, 0x0a /* Public */,
      14,    1,  134,    2, 0x0a /* Public */,
      15,    1,  137,    2, 0x0a /* Public */,
      15,    1,  140,    2, 0x0a /* Public */,
      16,    0,  143,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      17,    0,  144,    2, 0x02 /* Public */,
      18,    0,  145,    2, 0x02 /* Public */,
      19,    0,  146,    2, 0x02 /* Public */,
      20,    0,  147,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 7,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 7,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,

 // properties: name, type, flags
      21, QMetaType::Float, 0x00495103,
      22, QMetaType::Float, 0x00495103,
      23, QMetaType::Float, 0x00495103,
      24, 0x80000000 | 7, 0x0049510b,
      25, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void AuxMagSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AuxMagSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->yChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->zChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->statusChanged((*reinterpret_cast< const AuxMagSensor_Status::Enum(*)>(_a[1]))); break;
        case 4: _t->StatusChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 5: _t->setX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 6: _t->setx((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->setY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 8: _t->sety((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->setZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 10: _t->setz((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->setStatus((*reinterpret_cast< const AuxMagSensor_Status::Enum(*)>(_a[1]))); break;
        case 12: _t->setStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 13: _t->emitNotifications(); break;
        case 14: { float _r = _t->getx();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 15: { float _r = _t->gety();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 16: { float _r = _t->getz();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 17: { quint8 _r = _t->getStatus();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AuxMagSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSensor::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AuxMagSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSensor::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AuxMagSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSensor::zChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AuxMagSensor::*)(const AuxMagSensor_Status::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSensor::statusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AuxMagSensor::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuxMagSensor::StatusChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AuxMagSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->z(); break;
        case 3: *reinterpret_cast< AuxMagSensor_Status::Enum*>(_v) = _t->status(); break;
        case 4: *reinterpret_cast< quint8*>(_v) = _t->getStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AuxMagSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setZ(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setStatus(*reinterpret_cast< AuxMagSensor_Status::Enum*>(_v)); break;
        case 4: _t->setStatus(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_AuxMagSensor[] = {
        &AuxMagSensor_Status::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject AuxMagSensor::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_AuxMagSensor.data,
    qt_meta_data_AuxMagSensor,
    qt_static_metacall,
    qt_meta_extradata_AuxMagSensor,
    nullptr
} };


const QMetaObject *AuxMagSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuxMagSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuxMagSensor.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AuxMagSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
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
void AuxMagSensor::xChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AuxMagSensor::yChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AuxMagSensor::zChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AuxMagSensor::statusChanged(const AuxMagSensor_Status::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AuxMagSensor::StatusChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
