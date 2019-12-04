/****************************************************************************
** Meta object code from reading C++ file 'takeofflocation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../takeofflocation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'takeofflocation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TakeOffLocationConstants_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TakeOffLocationConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TakeOffLocationConstants_t qt_meta_stringdata_TakeOffLocationConstants = {
    {
QT_MOC_LITERAL(0, 0, 24), // "TakeOffLocationConstants"
QT_MOC_LITERAL(1, 25, 4), // "Enum"
QT_MOC_LITERAL(2, 30, 9), // "ModeCount"
QT_MOC_LITERAL(3, 40, 11) // "StatusCount"

    },
    "TakeOffLocationConstants\0Enum\0ModeCount\0"
    "StatusCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TakeOffLocationConstants[] = {

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
       2, uint(TakeOffLocationConstants::ModeCount),
       3, uint(TakeOffLocationConstants::StatusCount),

       0        // eod
};

void TakeOffLocationConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TakeOffLocationConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TakeOffLocationConstants.data,
    qt_meta_data_TakeOffLocationConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TakeOffLocationConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TakeOffLocationConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TakeOffLocationConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TakeOffLocationConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TakeOffLocation_Mode_t {
    QByteArrayData data[5];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TakeOffLocation_Mode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TakeOffLocation_Mode_t qt_meta_stringdata_TakeOffLocation_Mode = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TakeOffLocation_Mode"
QT_MOC_LITERAL(1, 21, 4), // "Enum"
QT_MOC_LITERAL(2, 26, 14), // "ArmingLocation"
QT_MOC_LITERAL(3, 41, 19), // "FirstArmingLocation"
QT_MOC_LITERAL(4, 61, 6) // "Preset"

    },
    "TakeOffLocation_Mode\0Enum\0ArmingLocation\0"
    "FirstArmingLocation\0Preset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TakeOffLocation_Mode[] = {

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
       2, uint(TakeOffLocation_Mode::ArmingLocation),
       3, uint(TakeOffLocation_Mode::FirstArmingLocation),
       4, uint(TakeOffLocation_Mode::Preset),

       0        // eod
};

void TakeOffLocation_Mode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TakeOffLocation_Mode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TakeOffLocation_Mode.data,
    qt_meta_data_TakeOffLocation_Mode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TakeOffLocation_Mode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TakeOffLocation_Mode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TakeOffLocation_Mode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TakeOffLocation_Mode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TakeOffLocation_Status_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TakeOffLocation_Status_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TakeOffLocation_Status_t qt_meta_stringdata_TakeOffLocation_Status = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TakeOffLocation_Status"
QT_MOC_LITERAL(1, 23, 4), // "Enum"
QT_MOC_LITERAL(2, 28, 5), // "Valid"
QT_MOC_LITERAL(3, 34, 7) // "Invalid"

    },
    "TakeOffLocation_Status\0Enum\0Valid\0"
    "Invalid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TakeOffLocation_Status[] = {

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
       2, uint(TakeOffLocation_Status::Valid),
       3, uint(TakeOffLocation_Status::Invalid),

       0        // eod
};

void TakeOffLocation_Status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TakeOffLocation_Status::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TakeOffLocation_Status.data,
    qt_meta_data_TakeOffLocation_Status,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TakeOffLocation_Status::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TakeOffLocation_Status::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TakeOffLocation_Status.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TakeOffLocation_Status::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TakeOffLocation_t {
    QByteArrayData data[36];
    char stringdata0[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TakeOffLocation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TakeOffLocation_t qt_meta_stringdata_TakeOffLocation = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TakeOffLocation"
QT_MOC_LITERAL(1, 16, 12), // "northChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "value"
QT_MOC_LITERAL(4, 36, 12), // "NorthChanged"
QT_MOC_LITERAL(5, 49, 11), // "eastChanged"
QT_MOC_LITERAL(6, 61, 11), // "EastChanged"
QT_MOC_LITERAL(7, 73, 11), // "downChanged"
QT_MOC_LITERAL(8, 85, 11), // "DownChanged"
QT_MOC_LITERAL(9, 97, 11), // "modeChanged"
QT_MOC_LITERAL(10, 109, 26), // "TakeOffLocation_Mode::Enum"
QT_MOC_LITERAL(11, 136, 11), // "ModeChanged"
QT_MOC_LITERAL(12, 148, 13), // "statusChanged"
QT_MOC_LITERAL(13, 162, 28), // "TakeOffLocation_Status::Enum"
QT_MOC_LITERAL(14, 191, 13), // "StatusChanged"
QT_MOC_LITERAL(15, 205, 8), // "setNorth"
QT_MOC_LITERAL(16, 214, 7), // "setEast"
QT_MOC_LITERAL(17, 222, 7), // "setDown"
QT_MOC_LITERAL(18, 230, 7), // "setMode"
QT_MOC_LITERAL(19, 238, 9), // "setStatus"
QT_MOC_LITERAL(20, 248, 17), // "emitNotifications"
QT_MOC_LITERAL(21, 266, 8), // "getNorth"
QT_MOC_LITERAL(22, 275, 7), // "getEast"
QT_MOC_LITERAL(23, 283, 7), // "getDown"
QT_MOC_LITERAL(24, 291, 7), // "getMode"
QT_MOC_LITERAL(25, 299, 9), // "getStatus"
QT_MOC_LITERAL(26, 309, 5), // "north"
QT_MOC_LITERAL(27, 315, 4), // "east"
QT_MOC_LITERAL(28, 320, 4), // "down"
QT_MOC_LITERAL(29, 325, 4), // "mode"
QT_MOC_LITERAL(30, 330, 6), // "status"
QT_MOC_LITERAL(31, 337, 5), // "North"
QT_MOC_LITERAL(32, 343, 4), // "East"
QT_MOC_LITERAL(33, 348, 4), // "Down"
QT_MOC_LITERAL(34, 353, 4), // "Mode"
QT_MOC_LITERAL(35, 358, 6) // "Status"

    },
    "TakeOffLocation\0northChanged\0\0value\0"
    "NorthChanged\0eastChanged\0EastChanged\0"
    "downChanged\0DownChanged\0modeChanged\0"
    "TakeOffLocation_Mode::Enum\0ModeChanged\0"
    "statusChanged\0TakeOffLocation_Status::Enum\0"
    "StatusChanged\0setNorth\0setEast\0setDown\0"
    "setMode\0setStatus\0emitNotifications\0"
    "getNorth\0getEast\0getDown\0getMode\0"
    "getStatus\0north\0east\0down\0mode\0status\0"
    "North\0East\0Down\0Mode\0Status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TakeOffLocation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
      10,  186, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,
       4,    1,  132,    2, 0x06 /* Public */,
       5,    1,  135,    2, 0x06 /* Public */,
       6,    1,  138,    2, 0x06 /* Public */,
       7,    1,  141,    2, 0x06 /* Public */,
       8,    1,  144,    2, 0x06 /* Public */,
       9,    1,  147,    2, 0x06 /* Public */,
      11,    1,  150,    2, 0x06 /* Public */,
      12,    1,  153,    2, 0x06 /* Public */,
      14,    1,  156,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  159,    2, 0x0a /* Public */,
      16,    1,  162,    2, 0x0a /* Public */,
      17,    1,  165,    2, 0x0a /* Public */,
      18,    1,  168,    2, 0x0a /* Public */,
      18,    1,  171,    2, 0x0a /* Public */,
      19,    1,  174,    2, 0x0a /* Public */,
      19,    1,  177,    2, 0x0a /* Public */,
      20,    0,  180,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      21,    0,  181,    2, 0x02 /* Public */,
      22,    0,  182,    2, 0x02 /* Public */,
      23,    0,  183,    2, 0x02 /* Public */,
      24,    0,  184,    2, 0x02 /* Public */,
      25,    0,  185,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 10,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 13,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 10,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 13,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      26, QMetaType::Float, 0x00495103,
      27, QMetaType::Float, 0x00495103,
      28, QMetaType::Float, 0x00495103,
      29, 0x80000000 | 10, 0x0049510b,
      30, 0x80000000 | 13, 0x0049510b,
      31, QMetaType::Float, 0x00495103,
      32, QMetaType::Float, 0x00495103,
      33, QMetaType::Float, 0x00495103,
      34, QMetaType::UChar, 0x00495103,
      35, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       8,
       1,
       3,
       5,
       7,
       9,

       0        // eod
};

void TakeOffLocation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TakeOffLocation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->northChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->NorthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->eastChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->EastChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->downChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->DownChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->modeChanged((*reinterpret_cast< const TakeOffLocation_Mode::Enum(*)>(_a[1]))); break;
        case 7: _t->ModeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->statusChanged((*reinterpret_cast< const TakeOffLocation_Status::Enum(*)>(_a[1]))); break;
        case 9: _t->StatusChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->setNorth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->setEast((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 12: _t->setDown((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->setMode((*reinterpret_cast< const TakeOffLocation_Mode::Enum(*)>(_a[1]))); break;
        case 14: _t->setMode((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 15: _t->setStatus((*reinterpret_cast< const TakeOffLocation_Status::Enum(*)>(_a[1]))); break;
        case 16: _t->setStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 17: _t->emitNotifications(); break;
        case 18: { float _r = _t->getNorth();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 19: { float _r = _t->getEast();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 20: { float _r = _t->getDown();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 21: { quint8 _r = _t->getMode();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 22: { quint8 _r = _t->getStatus();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TakeOffLocation::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TakeOffLocation::northChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TakeOffLocation::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TakeOffLocation::NorthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TakeOffLocation::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TakeOffLocation::eastChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TakeOffLocation::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TakeOffLocation::EastChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TakeOffLocation::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TakeOffLocation::downChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TakeOffLocation::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TakeOffLocation::DownChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TakeOffLocation::*)(const TakeOffLocation_Mode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TakeOffLocation::modeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TakeOffLocation::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TakeOffLocation::ModeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TakeOffLocation::*)(const TakeOffLocation_Status::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TakeOffLocation::statusChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TakeOffLocation::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TakeOffLocation::StatusChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TakeOffLocation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->north(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->east(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->down(); break;
        case 3: *reinterpret_cast< TakeOffLocation_Mode::Enum*>(_v) = _t->mode(); break;
        case 4: *reinterpret_cast< TakeOffLocation_Status::Enum*>(_v) = _t->status(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getNorth(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getEast(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getDown(); break;
        case 8: *reinterpret_cast< quint8*>(_v) = _t->getMode(); break;
        case 9: *reinterpret_cast< quint8*>(_v) = _t->getStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TakeOffLocation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNorth(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setEast(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setDown(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setMode(*reinterpret_cast< TakeOffLocation_Mode::Enum*>(_v)); break;
        case 4: _t->setStatus(*reinterpret_cast< TakeOffLocation_Status::Enum*>(_v)); break;
        case 5: _t->setNorth(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setEast(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setDown(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setMode(*reinterpret_cast< quint8*>(_v)); break;
        case 9: _t->setStatus(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_TakeOffLocation[] = {
        &TakeOffLocation_Mode::staticMetaObject,
    &TakeOffLocation_Status::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject TakeOffLocation::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_TakeOffLocation.data,
    qt_meta_data_TakeOffLocation,
    qt_static_metacall,
    qt_meta_extradata_TakeOffLocation,
    nullptr
} };


const QMetaObject *TakeOffLocation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TakeOffLocation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TakeOffLocation.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int TakeOffLocation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TakeOffLocation::northChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TakeOffLocation::NorthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TakeOffLocation::eastChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TakeOffLocation::EastChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TakeOffLocation::downChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TakeOffLocation::DownChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TakeOffLocation::modeChanged(const TakeOffLocation_Mode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TakeOffLocation::ModeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TakeOffLocation::statusChanged(const TakeOffLocation_Status::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TakeOffLocation::StatusChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
