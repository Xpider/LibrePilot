/****************************************************************************
** Meta object code from reading C++ file 'velocitydesired.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../velocitydesired.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'velocitydesired.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VelocityDesiredConstants_t {
    QByteArrayData data[2];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VelocityDesiredConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VelocityDesiredConstants_t qt_meta_stringdata_VelocityDesiredConstants = {
    {
QT_MOC_LITERAL(0, 0, 24), // "VelocityDesiredConstants"
QT_MOC_LITERAL(1, 25, 4) // "Enum"

    },
    "VelocityDesiredConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VelocityDesiredConstants[] = {

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

void VelocityDesiredConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VelocityDesiredConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VelocityDesiredConstants.data,
    qt_meta_data_VelocityDesiredConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VelocityDesiredConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VelocityDesiredConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VelocityDesiredConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VelocityDesiredConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VelocityDesired_t {
    QByteArrayData data[22];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VelocityDesired_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VelocityDesired_t qt_meta_stringdata_VelocityDesired = {
    {
QT_MOC_LITERAL(0, 0, 15), // "VelocityDesired"
QT_MOC_LITERAL(1, 16, 12), // "northChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "value"
QT_MOC_LITERAL(4, 36, 12), // "NorthChanged"
QT_MOC_LITERAL(5, 49, 11), // "eastChanged"
QT_MOC_LITERAL(6, 61, 11), // "EastChanged"
QT_MOC_LITERAL(7, 73, 11), // "downChanged"
QT_MOC_LITERAL(8, 85, 11), // "DownChanged"
QT_MOC_LITERAL(9, 97, 8), // "setNorth"
QT_MOC_LITERAL(10, 106, 7), // "setEast"
QT_MOC_LITERAL(11, 114, 7), // "setDown"
QT_MOC_LITERAL(12, 122, 17), // "emitNotifications"
QT_MOC_LITERAL(13, 140, 8), // "getNorth"
QT_MOC_LITERAL(14, 149, 7), // "getEast"
QT_MOC_LITERAL(15, 157, 7), // "getDown"
QT_MOC_LITERAL(16, 165, 5), // "north"
QT_MOC_LITERAL(17, 171, 4), // "east"
QT_MOC_LITERAL(18, 176, 4), // "down"
QT_MOC_LITERAL(19, 181, 5), // "North"
QT_MOC_LITERAL(20, 187, 4), // "East"
QT_MOC_LITERAL(21, 192, 4) // "Down"

    },
    "VelocityDesired\0northChanged\0\0value\0"
    "NorthChanged\0eastChanged\0EastChanged\0"
    "downChanged\0DownChanged\0setNorth\0"
    "setEast\0setDown\0emitNotifications\0"
    "getNorth\0getEast\0getDown\0north\0east\0"
    "down\0North\0East\0Down"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VelocityDesired[] = {

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

void VelocityDesired::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VelocityDesired *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->northChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->NorthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->eastChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->EastChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->downChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->DownChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setNorth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->setEast((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 8: _t->setDown((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->emitNotifications(); break;
        case 10: { float _r = _t->getNorth();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 11: { float _r = _t->getEast();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 12: { float _r = _t->getDown();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VelocityDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VelocityDesired::northChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VelocityDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VelocityDesired::NorthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VelocityDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VelocityDesired::eastChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VelocityDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VelocityDesired::EastChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VelocityDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VelocityDesired::downChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VelocityDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VelocityDesired::DownChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VelocityDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->north(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->east(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->down(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getNorth(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getEast(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getDown(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VelocityDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNorth(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setEast(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setDown(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setNorth(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setEast(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setDown(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VelocityDesired::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_VelocityDesired.data,
    qt_meta_data_VelocityDesired,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VelocityDesired::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VelocityDesired::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VelocityDesired.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int VelocityDesired::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void VelocityDesired::northChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VelocityDesired::NorthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VelocityDesired::eastChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VelocityDesired::EastChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VelocityDesired::downChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VelocityDesired::DownChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
