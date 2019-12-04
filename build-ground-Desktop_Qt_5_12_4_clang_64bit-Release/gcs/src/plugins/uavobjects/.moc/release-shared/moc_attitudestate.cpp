/****************************************************************************
** Meta object code from reading C++ file 'attitudestate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../attitudestate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attitudestate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AttitudeStateConstants_t {
    QByteArrayData data[2];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttitudeStateConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttitudeStateConstants_t qt_meta_stringdata_AttitudeStateConstants = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AttitudeStateConstants"
QT_MOC_LITERAL(1, 23, 4) // "Enum"

    },
    "AttitudeStateConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttitudeStateConstants[] = {

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

void AttitudeStateConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AttitudeStateConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AttitudeStateConstants.data,
    qt_meta_data_AttitudeStateConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AttitudeStateConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttitudeStateConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttitudeStateConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AttitudeStateConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AttitudeState_t {
    QByteArrayData data[48];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttitudeState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttitudeState_t qt_meta_stringdata_AttitudeState = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AttitudeState"
QT_MOC_LITERAL(1, 14, 9), // "q1Changed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "value"
QT_MOC_LITERAL(4, 31, 9), // "q2Changed"
QT_MOC_LITERAL(5, 41, 9), // "q3Changed"
QT_MOC_LITERAL(6, 51, 9), // "q4Changed"
QT_MOC_LITERAL(7, 61, 11), // "rollChanged"
QT_MOC_LITERAL(8, 73, 11), // "RollChanged"
QT_MOC_LITERAL(9, 85, 12), // "pitchChanged"
QT_MOC_LITERAL(10, 98, 12), // "PitchChanged"
QT_MOC_LITERAL(11, 111, 10), // "yawChanged"
QT_MOC_LITERAL(12, 122, 10), // "YawChanged"
QT_MOC_LITERAL(13, 133, 13), // "navYawChanged"
QT_MOC_LITERAL(14, 147, 13), // "NavYawChanged"
QT_MOC_LITERAL(15, 161, 5), // "setQ1"
QT_MOC_LITERAL(16, 167, 5), // "setq1"
QT_MOC_LITERAL(17, 173, 5), // "setQ2"
QT_MOC_LITERAL(18, 179, 5), // "setq2"
QT_MOC_LITERAL(19, 185, 5), // "setQ3"
QT_MOC_LITERAL(20, 191, 5), // "setq3"
QT_MOC_LITERAL(21, 197, 5), // "setQ4"
QT_MOC_LITERAL(22, 203, 5), // "setq4"
QT_MOC_LITERAL(23, 209, 7), // "setRoll"
QT_MOC_LITERAL(24, 217, 8), // "setPitch"
QT_MOC_LITERAL(25, 226, 6), // "setYaw"
QT_MOC_LITERAL(26, 233, 9), // "setNavYaw"
QT_MOC_LITERAL(27, 243, 17), // "emitNotifications"
QT_MOC_LITERAL(28, 261, 5), // "getq1"
QT_MOC_LITERAL(29, 267, 5), // "getq2"
QT_MOC_LITERAL(30, 273, 5), // "getq3"
QT_MOC_LITERAL(31, 279, 5), // "getq4"
QT_MOC_LITERAL(32, 285, 7), // "getRoll"
QT_MOC_LITERAL(33, 293, 8), // "getPitch"
QT_MOC_LITERAL(34, 302, 6), // "getYaw"
QT_MOC_LITERAL(35, 309, 9), // "getNavYaw"
QT_MOC_LITERAL(36, 319, 2), // "q1"
QT_MOC_LITERAL(37, 322, 2), // "q2"
QT_MOC_LITERAL(38, 325, 2), // "q3"
QT_MOC_LITERAL(39, 328, 2), // "q4"
QT_MOC_LITERAL(40, 331, 4), // "roll"
QT_MOC_LITERAL(41, 336, 5), // "pitch"
QT_MOC_LITERAL(42, 342, 3), // "yaw"
QT_MOC_LITERAL(43, 346, 6), // "navYaw"
QT_MOC_LITERAL(44, 353, 4), // "Roll"
QT_MOC_LITERAL(45, 358, 5), // "Pitch"
QT_MOC_LITERAL(46, 364, 3), // "Yaw"
QT_MOC_LITERAL(47, 368, 6) // "NavYaw"

    },
    "AttitudeState\0q1Changed\0\0value\0q2Changed\0"
    "q3Changed\0q4Changed\0rollChanged\0"
    "RollChanged\0pitchChanged\0PitchChanged\0"
    "yawChanged\0YawChanged\0navYawChanged\0"
    "NavYawChanged\0setQ1\0setq1\0setQ2\0setq2\0"
    "setQ3\0setq3\0setQ4\0setq4\0setRoll\0"
    "setPitch\0setYaw\0setNavYaw\0emitNotifications\0"
    "getq1\0getq2\0getq3\0getq4\0getRoll\0"
    "getPitch\0getYaw\0getNavYaw\0q1\0q2\0q3\0"
    "q4\0roll\0pitch\0yaw\0navYaw\0Roll\0Pitch\0"
    "Yaw\0NavYaw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttitudeState[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
      12,  260, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  179,    2, 0x06 /* Public */,
       4,    1,  182,    2, 0x06 /* Public */,
       5,    1,  185,    2, 0x06 /* Public */,
       6,    1,  188,    2, 0x06 /* Public */,
       7,    1,  191,    2, 0x06 /* Public */,
       8,    1,  194,    2, 0x06 /* Public */,
       9,    1,  197,    2, 0x06 /* Public */,
      10,    1,  200,    2, 0x06 /* Public */,
      11,    1,  203,    2, 0x06 /* Public */,
      12,    1,  206,    2, 0x06 /* Public */,
      13,    1,  209,    2, 0x06 /* Public */,
      14,    1,  212,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  215,    2, 0x0a /* Public */,
      16,    1,  218,    2, 0x0a /* Public */,
      17,    1,  221,    2, 0x0a /* Public */,
      18,    1,  224,    2, 0x0a /* Public */,
      19,    1,  227,    2, 0x0a /* Public */,
      20,    1,  230,    2, 0x0a /* Public */,
      21,    1,  233,    2, 0x0a /* Public */,
      22,    1,  236,    2, 0x0a /* Public */,
      23,    1,  239,    2, 0x0a /* Public */,
      24,    1,  242,    2, 0x0a /* Public */,
      25,    1,  245,    2, 0x0a /* Public */,
      26,    1,  248,    2, 0x0a /* Public */,
      27,    0,  251,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      28,    0,  252,    2, 0x02 /* Public */,
      29,    0,  253,    2, 0x02 /* Public */,
      30,    0,  254,    2, 0x02 /* Public */,
      31,    0,  255,    2, 0x02 /* Public */,
      32,    0,  256,    2, 0x02 /* Public */,
      33,    0,  257,    2, 0x02 /* Public */,
      34,    0,  258,    2, 0x02 /* Public */,
      35,    0,  259,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
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
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
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
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      36, QMetaType::Float, 0x00495103,
      37, QMetaType::Float, 0x00495103,
      38, QMetaType::Float, 0x00495103,
      39, QMetaType::Float, 0x00495103,
      40, QMetaType::Float, 0x00495103,
      41, QMetaType::Float, 0x00495103,
      42, QMetaType::Float, 0x00495103,
      43, QMetaType::Float, 0x00495103,
      44, QMetaType::Float, 0x00495103,
      45, QMetaType::Float, 0x00495103,
      46, QMetaType::Float, 0x00495103,
      47, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       6,
       8,
      10,
       5,
       7,
       9,
      11,

       0        // eod
};

void AttitudeState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AttitudeState *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->q1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->q2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->q3Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->q4Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 4: _t->rollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->pitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->yawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->navYawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->NavYawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->setQ1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->setq1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->setQ2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->setq2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->setQ3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->setq3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->setQ4((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->setq4((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->setRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->setPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 22: _t->setYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->setNavYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 24: _t->emitNotifications(); break;
        case 25: { float _r = _t->getq1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 26: { float _r = _t->getq2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 27: { float _r = _t->getq3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 28: { float _r = _t->getq4();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 29: { float _r = _t->getRoll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 30: { float _r = _t->getPitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 31: { float _r = _t->getYaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 32: { float _r = _t->getNavYaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AttitudeState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeState::q1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AttitudeState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeState::q2Changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AttitudeState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeState::q3Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AttitudeState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeState::q4Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AttitudeState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeState::rollChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AttitudeState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeState::RollChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AttitudeState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeState::pitchChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AttitudeState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeState::PitchChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AttitudeState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeState::yawChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AttitudeState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeState::YawChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AttitudeState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeState::navYawChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AttitudeState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttitudeState::NavYawChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AttitudeState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->q1(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->q2(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->q3(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->q4(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->roll(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->pitch(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->yaw(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->navYaw(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getRoll(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getPitch(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getYaw(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getNavYaw(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AttitudeState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setQ1(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setQ2(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setQ3(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setQ4(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setRoll(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setPitch(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setNavYaw(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setRoll(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setPitch(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setNavYaw(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AttitudeState::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_AttitudeState.data,
    qt_meta_data_AttitudeState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AttitudeState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttitudeState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttitudeState.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AttitudeState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AttitudeState::q1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AttitudeState::q2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AttitudeState::q3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AttitudeState::q4Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AttitudeState::rollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AttitudeState::RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AttitudeState::pitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AttitudeState::PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AttitudeState::yawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AttitudeState::YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void AttitudeState::navYawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void AttitudeState::NavYawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
