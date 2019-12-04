/****************************************************************************
** Meta object code from reading C++ file 'perfcounter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../perfcounter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'perfcounter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PerfCounterConstants_t {
    QByteArrayData data[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PerfCounterConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PerfCounterConstants_t qt_meta_stringdata_PerfCounterConstants = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PerfCounterConstants"
QT_MOC_LITERAL(1, 21, 4) // "Enum"

    },
    "PerfCounterConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PerfCounterConstants[] = {

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

void PerfCounterConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PerfCounterConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PerfCounterConstants.data,
    qt_meta_data_PerfCounterConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PerfCounterConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PerfCounterConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PerfCounterConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PerfCounterConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PerfCounter_t {
    QByteArrayData data[37];
    char stringdata0[467];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PerfCounter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PerfCounter_t qt_meta_stringdata_PerfCounter = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PerfCounter"
QT_MOC_LITERAL(1, 12, 9), // "idChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "value"
QT_MOC_LITERAL(4, 29, 9), // "IdChanged"
QT_MOC_LITERAL(5, 39, 14), // "counterChanged"
QT_MOC_LITERAL(6, 54, 5), // "index"
QT_MOC_LITERAL(7, 60, 14), // "CounterChanged"
QT_MOC_LITERAL(8, 75, 19), // "counterValueChanged"
QT_MOC_LITERAL(9, 95, 20), // "Counter_ValueChanged"
QT_MOC_LITERAL(10, 116, 17), // "counterMinChanged"
QT_MOC_LITERAL(11, 134, 18), // "Counter_MinChanged"
QT_MOC_LITERAL(12, 153, 17), // "counterMaxChanged"
QT_MOC_LITERAL(13, 171, 18), // "Counter_MaxChanged"
QT_MOC_LITERAL(14, 190, 5), // "setId"
QT_MOC_LITERAL(15, 196, 10), // "setCounter"
QT_MOC_LITERAL(16, 207, 15), // "setCounterValue"
QT_MOC_LITERAL(17, 223, 16), // "setCounter_Value"
QT_MOC_LITERAL(18, 240, 13), // "setCounterMin"
QT_MOC_LITERAL(19, 254, 14), // "setCounter_Min"
QT_MOC_LITERAL(20, 269, 13), // "setCounterMax"
QT_MOC_LITERAL(21, 283, 14), // "setCounter_Max"
QT_MOC_LITERAL(22, 298, 17), // "emitNotifications"
QT_MOC_LITERAL(23, 316, 5), // "getId"
QT_MOC_LITERAL(24, 322, 7), // "counter"
QT_MOC_LITERAL(25, 330, 10), // "getCounter"
QT_MOC_LITERAL(26, 341, 16), // "getCounter_Value"
QT_MOC_LITERAL(27, 358, 14), // "getCounter_Min"
QT_MOC_LITERAL(28, 373, 14), // "getCounter_Max"
QT_MOC_LITERAL(29, 388, 2), // "id"
QT_MOC_LITERAL(30, 391, 12), // "counterValue"
QT_MOC_LITERAL(31, 404, 10), // "counterMin"
QT_MOC_LITERAL(32, 415, 10), // "counterMax"
QT_MOC_LITERAL(33, 426, 2), // "Id"
QT_MOC_LITERAL(34, 429, 13), // "Counter_Value"
QT_MOC_LITERAL(35, 443, 11), // "Counter_Min"
QT_MOC_LITERAL(36, 455, 11) // "Counter_Max"

    },
    "PerfCounter\0idChanged\0\0value\0IdChanged\0"
    "counterChanged\0index\0CounterChanged\0"
    "counterValueChanged\0Counter_ValueChanged\0"
    "counterMinChanged\0Counter_MinChanged\0"
    "counterMaxChanged\0Counter_MaxChanged\0"
    "setId\0setCounter\0setCounterValue\0"
    "setCounter_Value\0setCounterMin\0"
    "setCounter_Min\0setCounterMax\0"
    "setCounter_Max\0emitNotifications\0getId\0"
    "counter\0getCounter\0getCounter_Value\0"
    "getCounter_Min\0getCounter_Max\0id\0"
    "counterValue\0counterMin\0counterMax\0"
    "Id\0Counter_Value\0Counter_Min\0Counter_Max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PerfCounter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       8,  210, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       4,    1,  142,    2, 0x06 /* Public */,
       5,    2,  145,    2, 0x06 /* Public */,
       7,    2,  150,    2, 0x06 /* Public */,
       8,    1,  155,    2, 0x06 /* Public */,
       9,    1,  158,    2, 0x06 /* Public */,
      10,    1,  161,    2, 0x06 /* Public */,
      11,    1,  164,    2, 0x06 /* Public */,
      12,    1,  167,    2, 0x06 /* Public */,
      13,    1,  170,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,  173,    2, 0x0a /* Public */,
      15,    2,  176,    2, 0x0a /* Public */,
      16,    1,  181,    2, 0x0a /* Public */,
      17,    1,  184,    2, 0x0a /* Public */,
      18,    1,  187,    2, 0x0a /* Public */,
      19,    1,  190,    2, 0x0a /* Public */,
      20,    1,  193,    2, 0x0a /* Public */,
      21,    1,  196,    2, 0x0a /* Public */,
      22,    0,  199,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      23,    0,  200,    2, 0x02 /* Public */,
      24,    1,  201,    2, 0x02 /* Public */,
      25,    1,  204,    2, 0x02 /* Public */,
      26,    0,  207,    2, 0x02 /* Public */,
      27,    0,  208,    2, 0x02 /* Public */,
      28,    0,  209,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,    6,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,    6,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,    6,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::Int, QMetaType::UInt,    6,
    QMetaType::Int, QMetaType::UInt,    6,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags
      29, QMetaType::UInt, 0x00495103,
      30, QMetaType::Int, 0x00495103,
      31, QMetaType::Int, 0x00495103,
      32, QMetaType::Int, 0x00495103,
      33, QMetaType::UInt, 0x00495103,
      34, QMetaType::Int, 0x00495103,
      35, QMetaType::Int, 0x00495103,
      36, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       4,
       6,
       8,
       1,
       5,
       7,
       9,

       0        // eod
};

void PerfCounter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PerfCounter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->idChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: _t->IdChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->counterChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint32(*)>(_a[2]))); break;
        case 3: _t->CounterChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 4: _t->counterValueChanged((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 5: _t->Counter_ValueChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 6: _t->counterMinChanged((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 7: _t->Counter_MinChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 8: _t->counterMaxChanged((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 9: _t->Counter_MaxChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 10: _t->setId((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 11: _t->setCounter((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint32(*)>(_a[2]))); break;
        case 12: _t->setCounterValue((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 13: _t->setCounter_Value((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 14: _t->setCounterMin((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 15: _t->setCounter_Min((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 16: _t->setCounterMax((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 17: _t->setCounter_Max((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 18: _t->emitNotifications(); break;
        case 19: { quint32 _r = _t->getId();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 20: { qint32 _r = _t->counter((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 21: { qint32 _r = _t->getCounter((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 22: { qint32 _r = _t->getCounter_Value();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 23: { qint32 _r = _t->getCounter_Min();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 24: { qint32 _r = _t->getCounter_Max();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PerfCounter::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerfCounter::idChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PerfCounter::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerfCounter::IdChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PerfCounter::*)(quint32 , const qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerfCounter::counterChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PerfCounter::*)(quint32 , qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerfCounter::CounterChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PerfCounter::*)(const qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerfCounter::counterValueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PerfCounter::*)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerfCounter::Counter_ValueChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PerfCounter::*)(const qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerfCounter::counterMinChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PerfCounter::*)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerfCounter::Counter_MinChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PerfCounter::*)(const qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerfCounter::counterMaxChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PerfCounter::*)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerfCounter::Counter_MaxChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PerfCounter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< qint32*>(_v) = _t->counterValue(); break;
        case 2: *reinterpret_cast< qint32*>(_v) = _t->counterMin(); break;
        case 3: *reinterpret_cast< qint32*>(_v) = _t->counterMax(); break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->getId(); break;
        case 5: *reinterpret_cast< qint32*>(_v) = _t->getCounter_Value(); break;
        case 6: *reinterpret_cast< qint32*>(_v) = _t->getCounter_Min(); break;
        case 7: *reinterpret_cast< qint32*>(_v) = _t->getCounter_Max(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PerfCounter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setCounterValue(*reinterpret_cast< qint32*>(_v)); break;
        case 2: _t->setCounterMin(*reinterpret_cast< qint32*>(_v)); break;
        case 3: _t->setCounterMax(*reinterpret_cast< qint32*>(_v)); break;
        case 4: _t->setId(*reinterpret_cast< quint32*>(_v)); break;
        case 5: _t->setCounter_Value(*reinterpret_cast< qint32*>(_v)); break;
        case 6: _t->setCounter_Min(*reinterpret_cast< qint32*>(_v)); break;
        case 7: _t->setCounter_Max(*reinterpret_cast< qint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PerfCounter::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_PerfCounter.data,
    qt_meta_data_PerfCounter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PerfCounter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PerfCounter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PerfCounter.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int PerfCounter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
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
void PerfCounter::idChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PerfCounter::IdChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PerfCounter::counterChanged(quint32 _t1, const qint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PerfCounter::CounterChanged(quint32 _t1, qint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PerfCounter::counterValueChanged(const qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PerfCounter::Counter_ValueChanged(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PerfCounter::counterMinChanged(const qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PerfCounter::Counter_MinChanged(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PerfCounter::counterMaxChanged(const qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PerfCounter::Counter_MaxChanged(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
