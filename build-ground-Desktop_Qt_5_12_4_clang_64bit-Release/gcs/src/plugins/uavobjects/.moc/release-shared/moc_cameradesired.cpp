/****************************************************************************
** Meta object code from reading C++ file 'cameradesired.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cameradesired.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cameradesired.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraDesiredConstants_t {
    QByteArrayData data[2];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraDesiredConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraDesiredConstants_t qt_meta_stringdata_CameraDesiredConstants = {
    {
QT_MOC_LITERAL(0, 0, 22), // "CameraDesiredConstants"
QT_MOC_LITERAL(1, 23, 4) // "Enum"

    },
    "CameraDesiredConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraDesiredConstants[] = {

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

void CameraDesiredConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraDesiredConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraDesiredConstants.data,
    qt_meta_data_CameraDesiredConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraDesiredConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraDesiredConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraDesiredConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraDesiredConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraDesired_t {
    QByteArrayData data[28];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraDesired_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraDesired_t qt_meta_stringdata_CameraDesired = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CameraDesired"
QT_MOC_LITERAL(1, 14, 19), // "rollOrServo1Changed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "value"
QT_MOC_LITERAL(4, 41, 19), // "RollOrServo1Changed"
QT_MOC_LITERAL(5, 61, 20), // "pitchOrServo2Changed"
QT_MOC_LITERAL(6, 82, 20), // "PitchOrServo2Changed"
QT_MOC_LITERAL(7, 103, 10), // "yawChanged"
QT_MOC_LITERAL(8, 114, 10), // "YawChanged"
QT_MOC_LITERAL(9, 125, 14), // "triggerChanged"
QT_MOC_LITERAL(10, 140, 14), // "TriggerChanged"
QT_MOC_LITERAL(11, 155, 15), // "setRollOrServo1"
QT_MOC_LITERAL(12, 171, 16), // "setPitchOrServo2"
QT_MOC_LITERAL(13, 188, 6), // "setYaw"
QT_MOC_LITERAL(14, 195, 10), // "setTrigger"
QT_MOC_LITERAL(15, 206, 17), // "emitNotifications"
QT_MOC_LITERAL(16, 224, 15), // "getRollOrServo1"
QT_MOC_LITERAL(17, 240, 16), // "getPitchOrServo2"
QT_MOC_LITERAL(18, 257, 6), // "getYaw"
QT_MOC_LITERAL(19, 264, 10), // "getTrigger"
QT_MOC_LITERAL(20, 275, 12), // "rollOrServo1"
QT_MOC_LITERAL(21, 288, 13), // "pitchOrServo2"
QT_MOC_LITERAL(22, 302, 3), // "yaw"
QT_MOC_LITERAL(23, 306, 7), // "trigger"
QT_MOC_LITERAL(24, 314, 12), // "RollOrServo1"
QT_MOC_LITERAL(25, 327, 13), // "PitchOrServo2"
QT_MOC_LITERAL(26, 341, 3), // "Yaw"
QT_MOC_LITERAL(27, 345, 7) // "Trigger"

    },
    "CameraDesired\0rollOrServo1Changed\0\0"
    "value\0RollOrServo1Changed\0"
    "pitchOrServo2Changed\0PitchOrServo2Changed\0"
    "yawChanged\0YawChanged\0triggerChanged\0"
    "TriggerChanged\0setRollOrServo1\0"
    "setPitchOrServo2\0setYaw\0setTrigger\0"
    "emitNotifications\0getRollOrServo1\0"
    "getPitchOrServo2\0getYaw\0getTrigger\0"
    "rollOrServo1\0pitchOrServo2\0yaw\0trigger\0"
    "RollOrServo1\0PitchOrServo2\0Yaw\0Trigger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraDesired[] = {

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

void CameraDesired::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CameraDesired *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rollOrServo1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->RollOrServo1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->pitchOrServo2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->PitchOrServo2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->yawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->triggerChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->TriggerChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setRollOrServo1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->setPitchOrServo2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 10: _t->setYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->setTrigger((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 12: _t->emitNotifications(); break;
        case 13: { float _r = _t->getRollOrServo1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 14: { float _r = _t->getPitchOrServo2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 15: { float _r = _t->getYaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 16: { float _r = _t->getTrigger();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CameraDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraDesired::rollOrServo1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CameraDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraDesired::RollOrServo1Changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CameraDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraDesired::pitchOrServo2Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CameraDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraDesired::PitchOrServo2Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CameraDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraDesired::yawChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CameraDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraDesired::YawChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CameraDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraDesired::triggerChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CameraDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraDesired::TriggerChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CameraDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->rollOrServo1(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->pitchOrServo2(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->yaw(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->trigger(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getRollOrServo1(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getPitchOrServo2(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getYaw(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getTrigger(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CameraDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRollOrServo1(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setPitchOrServo2(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setTrigger(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setRollOrServo1(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setPitchOrServo2(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setTrigger(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CameraDesired::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_CameraDesired.data,
    qt_meta_data_CameraDesired,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraDesired::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraDesired::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraDesired.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int CameraDesired::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CameraDesired::rollOrServo1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CameraDesired::RollOrServo1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CameraDesired::pitchOrServo2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CameraDesired::PitchOrServo2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CameraDesired::yawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CameraDesired::YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CameraDesired::triggerChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CameraDesired::TriggerChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
