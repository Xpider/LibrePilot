/****************************************************************************
** Meta object code from reading C++ file 'altitudefiltersettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../altitudefiltersettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'altitudefiltersettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AltitudeFilterSettingsConstants_t {
    QByteArrayData data[2];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AltitudeFilterSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AltitudeFilterSettingsConstants_t qt_meta_stringdata_AltitudeFilterSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 31), // "AltitudeFilterSettingsConstants"
QT_MOC_LITERAL(1, 32, 4) // "Enum"

    },
    "AltitudeFilterSettingsConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AltitudeFilterSettingsConstants[] = {

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

void AltitudeFilterSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AltitudeFilterSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AltitudeFilterSettingsConstants.data,
    qt_meta_data_AltitudeFilterSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AltitudeFilterSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AltitudeFilterSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AltitudeFilterSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AltitudeFilterSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AltitudeFilterSettings_t {
    QByteArrayData data[28];
    char stringdata0[500];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AltitudeFilterSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AltitudeFilterSettings_t qt_meta_stringdata_AltitudeFilterSettings = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AltitudeFilterSettings"
QT_MOC_LITERAL(1, 23, 21), // "accelLowPassKpChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5), // "value"
QT_MOC_LITERAL(4, 52, 21), // "AccelLowPassKpChanged"
QT_MOC_LITERAL(5, 74, 19), // "accelDriftKiChanged"
QT_MOC_LITERAL(6, 94, 19), // "AccelDriftKiChanged"
QT_MOC_LITERAL(7, 114, 33), // "initializationAccelDriftKiCha..."
QT_MOC_LITERAL(8, 148, 33), // "InitializationAccelDriftKiCha..."
QT_MOC_LITERAL(9, 182, 13), // "baroKpChanged"
QT_MOC_LITERAL(10, 196, 13), // "BaroKpChanged"
QT_MOC_LITERAL(11, 210, 17), // "setAccelLowPassKp"
QT_MOC_LITERAL(12, 228, 15), // "setAccelDriftKi"
QT_MOC_LITERAL(13, 244, 29), // "setInitializationAccelDriftKi"
QT_MOC_LITERAL(14, 274, 9), // "setBaroKp"
QT_MOC_LITERAL(15, 284, 17), // "emitNotifications"
QT_MOC_LITERAL(16, 302, 17), // "getAccelLowPassKp"
QT_MOC_LITERAL(17, 320, 15), // "getAccelDriftKi"
QT_MOC_LITERAL(18, 336, 29), // "getInitializationAccelDriftKi"
QT_MOC_LITERAL(19, 366, 9), // "getBaroKp"
QT_MOC_LITERAL(20, 376, 14), // "accelLowPassKp"
QT_MOC_LITERAL(21, 391, 12), // "accelDriftKi"
QT_MOC_LITERAL(22, 404, 26), // "initializationAccelDriftKi"
QT_MOC_LITERAL(23, 431, 6), // "baroKp"
QT_MOC_LITERAL(24, 438, 14), // "AccelLowPassKp"
QT_MOC_LITERAL(25, 453, 12), // "AccelDriftKi"
QT_MOC_LITERAL(26, 466, 26), // "InitializationAccelDriftKi"
QT_MOC_LITERAL(27, 493, 6) // "BaroKp"

    },
    "AltitudeFilterSettings\0accelLowPassKpChanged\0"
    "\0value\0AccelLowPassKpChanged\0"
    "accelDriftKiChanged\0AccelDriftKiChanged\0"
    "initializationAccelDriftKiChanged\0"
    "InitializationAccelDriftKiChanged\0"
    "baroKpChanged\0BaroKpChanged\0"
    "setAccelLowPassKp\0setAccelDriftKi\0"
    "setInitializationAccelDriftKi\0setBaroKp\0"
    "emitNotifications\0getAccelLowPassKp\0"
    "getAccelDriftKi\0getInitializationAccelDriftKi\0"
    "getBaroKp\0accelLowPassKp\0accelDriftKi\0"
    "initializationAccelDriftKi\0baroKp\0"
    "AccelLowPassKp\0AccelDriftKi\0"
    "InitializationAccelDriftKi\0BaroKp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AltitudeFilterSettings[] = {

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

void AltitudeFilterSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AltitudeFilterSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accelLowPassKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->AccelLowPassKpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->accelDriftKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->AccelDriftKiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->initializationAccelDriftKiChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->InitializationAccelDriftKiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->baroKpChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->BaroKpChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setAccelLowPassKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->setAccelDriftKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 10: _t->setInitializationAccelDriftKi((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->setBaroKp((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 12: _t->emitNotifications(); break;
        case 13: { float _r = _t->getAccelLowPassKp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 14: { float _r = _t->getAccelDriftKi();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 15: { float _r = _t->getInitializationAccelDriftKi();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 16: { float _r = _t->getBaroKp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AltitudeFilterSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeFilterSettings::accelLowPassKpChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AltitudeFilterSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeFilterSettings::AccelLowPassKpChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AltitudeFilterSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeFilterSettings::accelDriftKiChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AltitudeFilterSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeFilterSettings::AccelDriftKiChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AltitudeFilterSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeFilterSettings::initializationAccelDriftKiChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AltitudeFilterSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeFilterSettings::InitializationAccelDriftKiChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AltitudeFilterSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeFilterSettings::baroKpChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AltitudeFilterSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AltitudeFilterSettings::BaroKpChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AltitudeFilterSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->accelLowPassKp(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->accelDriftKi(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->initializationAccelDriftKi(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->baroKp(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getAccelLowPassKp(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getAccelDriftKi(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getInitializationAccelDriftKi(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getBaroKp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AltitudeFilterSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccelLowPassKp(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setAccelDriftKi(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setInitializationAccelDriftKi(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setBaroKp(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setAccelLowPassKp(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setAccelDriftKi(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setInitializationAccelDriftKi(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setBaroKp(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AltitudeFilterSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_AltitudeFilterSettings.data,
    qt_meta_data_AltitudeFilterSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AltitudeFilterSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AltitudeFilterSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AltitudeFilterSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AltitudeFilterSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AltitudeFilterSettings::accelLowPassKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AltitudeFilterSettings::AccelLowPassKpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AltitudeFilterSettings::accelDriftKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AltitudeFilterSettings::AccelDriftKiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AltitudeFilterSettings::initializationAccelDriftKiChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AltitudeFilterSettings::InitializationAccelDriftKiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AltitudeFilterSettings::baroKpChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AltitudeFilterSettings::BaroKpChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
