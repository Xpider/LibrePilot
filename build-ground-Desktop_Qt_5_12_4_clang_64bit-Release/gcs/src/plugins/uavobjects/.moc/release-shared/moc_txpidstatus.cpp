/****************************************************************************
** Meta object code from reading C++ file 'txpidstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../txpidstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'txpidstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TxPIDStatusConstants_t {
    QByteArrayData data[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TxPIDStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TxPIDStatusConstants_t qt_meta_stringdata_TxPIDStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TxPIDStatusConstants"
QT_MOC_LITERAL(1, 21, 4) // "Enum"

    },
    "TxPIDStatusConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TxPIDStatusConstants[] = {

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

void TxPIDStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TxPIDStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TxPIDStatusConstants.data,
    qt_meta_data_TxPIDStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TxPIDStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TxPIDStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TxPIDStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TxPIDStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TxPIDStatus_t {
    QByteArrayData data[31];
    char stringdata0[515];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TxPIDStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TxPIDStatus_t qt_meta_stringdata_TxPIDStatus = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TxPIDStatus"
QT_MOC_LITERAL(1, 12, 13), // "curPIDChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "index"
QT_MOC_LITERAL(4, 33, 5), // "value"
QT_MOC_LITERAL(5, 39, 13), // "CurPIDChanged"
QT_MOC_LITERAL(6, 53, 22), // "curPIDInstance1Changed"
QT_MOC_LITERAL(7, 76, 23), // "CurPID_Instance1Changed"
QT_MOC_LITERAL(8, 100, 22), // "curPIDInstance2Changed"
QT_MOC_LITERAL(9, 123, 23), // "CurPID_Instance2Changed"
QT_MOC_LITERAL(10, 147, 22), // "curPIDInstance3Changed"
QT_MOC_LITERAL(11, 170, 23), // "CurPID_Instance3Changed"
QT_MOC_LITERAL(12, 194, 9), // "setCurPID"
QT_MOC_LITERAL(13, 204, 18), // "setCurPIDInstance1"
QT_MOC_LITERAL(14, 223, 19), // "setCurPID_Instance1"
QT_MOC_LITERAL(15, 243, 18), // "setCurPIDInstance2"
QT_MOC_LITERAL(16, 262, 19), // "setCurPID_Instance2"
QT_MOC_LITERAL(17, 282, 18), // "setCurPIDInstance3"
QT_MOC_LITERAL(18, 301, 19), // "setCurPID_Instance3"
QT_MOC_LITERAL(19, 321, 17), // "emitNotifications"
QT_MOC_LITERAL(20, 339, 6), // "curPID"
QT_MOC_LITERAL(21, 346, 9), // "getCurPID"
QT_MOC_LITERAL(22, 356, 19), // "getCurPID_Instance1"
QT_MOC_LITERAL(23, 376, 19), // "getCurPID_Instance2"
QT_MOC_LITERAL(24, 396, 19), // "getCurPID_Instance3"
QT_MOC_LITERAL(25, 416, 15), // "curPIDInstance1"
QT_MOC_LITERAL(26, 432, 15), // "curPIDInstance2"
QT_MOC_LITERAL(27, 448, 15), // "curPIDInstance3"
QT_MOC_LITERAL(28, 464, 16), // "CurPID_Instance1"
QT_MOC_LITERAL(29, 481, 16), // "CurPID_Instance2"
QT_MOC_LITERAL(30, 498, 16) // "CurPID_Instance3"

    },
    "TxPIDStatus\0curPIDChanged\0\0index\0value\0"
    "CurPIDChanged\0curPIDInstance1Changed\0"
    "CurPID_Instance1Changed\0curPIDInstance2Changed\0"
    "CurPID_Instance2Changed\0curPIDInstance3Changed\0"
    "CurPID_Instance3Changed\0setCurPID\0"
    "setCurPIDInstance1\0setCurPID_Instance1\0"
    "setCurPIDInstance2\0setCurPID_Instance2\0"
    "setCurPIDInstance3\0setCurPID_Instance3\0"
    "emitNotifications\0curPID\0getCurPID\0"
    "getCurPID_Instance1\0getCurPID_Instance2\0"
    "getCurPID_Instance3\0curPIDInstance1\0"
    "curPIDInstance2\0curPIDInstance3\0"
    "CurPID_Instance1\0CurPID_Instance2\0"
    "CurPID_Instance3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TxPIDStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       6,  180, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  119,    2, 0x06 /* Public */,
       5,    2,  124,    2, 0x06 /* Public */,
       6,    1,  129,    2, 0x06 /* Public */,
       7,    1,  132,    2, 0x06 /* Public */,
       8,    1,  135,    2, 0x06 /* Public */,
       9,    1,  138,    2, 0x06 /* Public */,
      10,    1,  141,    2, 0x06 /* Public */,
      11,    1,  144,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,  147,    2, 0x0a /* Public */,
      13,    1,  152,    2, 0x0a /* Public */,
      14,    1,  155,    2, 0x0a /* Public */,
      15,    1,  158,    2, 0x0a /* Public */,
      16,    1,  161,    2, 0x0a /* Public */,
      17,    1,  164,    2, 0x0a /* Public */,
      18,    1,  167,    2, 0x0a /* Public */,
      19,    0,  170,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      20,    1,  171,    2, 0x02 /* Public */,
      21,    1,  174,    2, 0x02 /* Public */,
      22,    0,  177,    2, 0x02 /* Public */,
      23,    0,  178,    2, 0x02 /* Public */,
      24,    0,  179,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      25, QMetaType::Float, 0x00495103,
      26, QMetaType::Float, 0x00495103,
      27, QMetaType::Float, 0x00495103,
      28, QMetaType::Float, 0x00495103,
      29, QMetaType::Float, 0x00495103,
      30, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
       3,
       5,
       7,

       0        // eod
};

void TxPIDStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TxPIDStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->curPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->CurPIDChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->curPIDInstance1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->CurPID_Instance1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->curPIDInstance2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->CurPID_Instance2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->curPIDInstance3Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->CurPID_Instance3Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setCurPID((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 9: _t->setCurPIDInstance1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 10: _t->setCurPID_Instance1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->setCurPIDInstance2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 12: _t->setCurPID_Instance2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: _t->setCurPIDInstance3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 14: _t->setCurPID_Instance3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 15: _t->emitNotifications(); break;
        case 16: { float _r = _t->curPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 17: { float _r = _t->getCurPID((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 18: { float _r = _t->getCurPID_Instance1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 19: { float _r = _t->getCurPID_Instance2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 20: { float _r = _t->getCurPID_Instance3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TxPIDStatus::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDStatus::curPIDChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TxPIDStatus::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDStatus::CurPIDChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TxPIDStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDStatus::curPIDInstance1Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TxPIDStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDStatus::CurPID_Instance1Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TxPIDStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDStatus::curPIDInstance2Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TxPIDStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDStatus::CurPID_Instance2Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TxPIDStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDStatus::curPIDInstance3Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TxPIDStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TxPIDStatus::CurPID_Instance3Changed)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TxPIDStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->curPIDInstance1(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->curPIDInstance2(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->curPIDInstance3(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getCurPID_Instance1(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getCurPID_Instance2(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getCurPID_Instance3(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TxPIDStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurPIDInstance1(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setCurPIDInstance2(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setCurPIDInstance3(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setCurPID_Instance1(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setCurPID_Instance2(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setCurPID_Instance3(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TxPIDStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_TxPIDStatus.data,
    qt_meta_data_TxPIDStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TxPIDStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TxPIDStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TxPIDStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int TxPIDStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TxPIDStatus::curPIDChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TxPIDStatus::CurPIDChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TxPIDStatus::curPIDInstance1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TxPIDStatus::CurPID_Instance1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TxPIDStatus::curPIDInstance2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TxPIDStatus::CurPID_Instance2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TxPIDStatus::curPIDInstance3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TxPIDStatus::CurPID_Instance3Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
