/****************************************************************************
** Meta object code from reading C++ file 'magstate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../magstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MagStateConstants_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MagStateConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MagStateConstants_t qt_meta_stringdata_MagStateConstants = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MagStateConstants"
QT_MOC_LITERAL(1, 18, 4), // "Enum"
QT_MOC_LITERAL(2, 23, 11) // "SourceCount"

    },
    "MagStateConstants\0Enum\0SourceCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MagStateConstants[] = {

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
       2, uint(MagStateConstants::SourceCount),

       0        // eod
};

void MagStateConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MagStateConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MagStateConstants.data,
    qt_meta_data_MagStateConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MagStateConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MagStateConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MagStateConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MagStateConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MagState_Source_t {
    QByteArrayData data[5];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MagState_Source_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MagState_Source_t qt_meta_stringdata_MagState_Source = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MagState_Source"
QT_MOC_LITERAL(1, 16, 4), // "Enum"
QT_MOC_LITERAL(2, 21, 7), // "Invalid"
QT_MOC_LITERAL(3, 29, 7), // "OnBoard"
QT_MOC_LITERAL(4, 37, 3) // "Aux"

    },
    "MagState_Source\0Enum\0Invalid\0OnBoard\0"
    "Aux"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MagState_Source[] = {

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
       2, uint(MagState_Source::Invalid),
       3, uint(MagState_Source::OnBoard),
       4, uint(MagState_Source::Aux),

       0        // eod
};

void MagState_Source::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MagState_Source::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MagState_Source.data,
    qt_meta_data_MagState_Source,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MagState_Source::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MagState_Source::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MagState_Source.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MagState_Source::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MagState_t {
    QByteArrayData data[26];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MagState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MagState_t qt_meta_stringdata_MagState = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MagState"
QT_MOC_LITERAL(1, 9, 8), // "xChanged"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "value"
QT_MOC_LITERAL(4, 25, 8), // "yChanged"
QT_MOC_LITERAL(5, 34, 8), // "zChanged"
QT_MOC_LITERAL(6, 43, 13), // "sourceChanged"
QT_MOC_LITERAL(7, 57, 21), // "MagState_Source::Enum"
QT_MOC_LITERAL(8, 79, 13), // "SourceChanged"
QT_MOC_LITERAL(9, 93, 4), // "setX"
QT_MOC_LITERAL(10, 98, 4), // "setx"
QT_MOC_LITERAL(11, 103, 4), // "setY"
QT_MOC_LITERAL(12, 108, 4), // "sety"
QT_MOC_LITERAL(13, 113, 4), // "setZ"
QT_MOC_LITERAL(14, 118, 4), // "setz"
QT_MOC_LITERAL(15, 123, 9), // "setSource"
QT_MOC_LITERAL(16, 133, 17), // "emitNotifications"
QT_MOC_LITERAL(17, 151, 4), // "getx"
QT_MOC_LITERAL(18, 156, 4), // "gety"
QT_MOC_LITERAL(19, 161, 4), // "getz"
QT_MOC_LITERAL(20, 166, 9), // "getSource"
QT_MOC_LITERAL(21, 176, 1), // "x"
QT_MOC_LITERAL(22, 178, 1), // "y"
QT_MOC_LITERAL(23, 180, 1), // "z"
QT_MOC_LITERAL(24, 182, 6), // "source"
QT_MOC_LITERAL(25, 189, 6) // "Source"

    },
    "MagState\0xChanged\0\0value\0yChanged\0"
    "zChanged\0sourceChanged\0MagState_Source::Enum\0"
    "SourceChanged\0setX\0setx\0setY\0sety\0"
    "setZ\0setz\0setSource\0emitNotifications\0"
    "getx\0gety\0getz\0getSource\0x\0y\0z\0source\0"
    "Source"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MagState[] = {

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

void MagState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MagState *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->yChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->zChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->sourceChanged((*reinterpret_cast< const MagState_Source::Enum(*)>(_a[1]))); break;
        case 4: _t->SourceChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 5: _t->setX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 6: _t->setx((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->setY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 8: _t->sety((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->setZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 10: _t->setz((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->setSource((*reinterpret_cast< const MagState_Source::Enum(*)>(_a[1]))); break;
        case 12: _t->setSource((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 13: _t->emitNotifications(); break;
        case 14: { float _r = _t->getx();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 15: { float _r = _t->gety();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 16: { float _r = _t->getz();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 17: { quint8 _r = _t->getSource();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MagState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MagState::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MagState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MagState::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MagState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MagState::zChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MagState::*)(const MagState_Source::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MagState::sourceChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MagState::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MagState::SourceChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MagState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->z(); break;
        case 3: *reinterpret_cast< MagState_Source::Enum*>(_v) = _t->source(); break;
        case 4: *reinterpret_cast< quint8*>(_v) = _t->getSource(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MagState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setZ(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setSource(*reinterpret_cast< MagState_Source::Enum*>(_v)); break;
        case 4: _t->setSource(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_MagState[] = {
        &MagState_Source::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject MagState::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_MagState.data,
    qt_meta_data_MagState,
    qt_static_metacall,
    qt_meta_extradata_MagState,
    nullptr
} };


const QMetaObject *MagState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MagState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MagState.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int MagState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MagState::xChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MagState::yChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MagState::zChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MagState::sourceChanged(const MagState_Source::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MagState::SourceChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
