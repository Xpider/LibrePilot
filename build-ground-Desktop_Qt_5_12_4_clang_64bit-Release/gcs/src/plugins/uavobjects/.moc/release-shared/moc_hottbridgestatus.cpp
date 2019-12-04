/****************************************************************************
** Meta object code from reading C++ file 'hottbridgestatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hottbridgestatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hottbridgestatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HoTTBridgeStatusConstants_t {
    QByteArrayData data[2];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HoTTBridgeStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HoTTBridgeStatusConstants_t qt_meta_stringdata_HoTTBridgeStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 25), // "HoTTBridgeStatusConstants"
QT_MOC_LITERAL(1, 26, 4) // "Enum"

    },
    "HoTTBridgeStatusConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HoTTBridgeStatusConstants[] = {

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

void HoTTBridgeStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HoTTBridgeStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HoTTBridgeStatusConstants.data,
    qt_meta_data_HoTTBridgeStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HoTTBridgeStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HoTTBridgeStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HoTTBridgeStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HoTTBridgeStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HoTTBridgeStatus_t {
    QByteArrayData data[28];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HoTTBridgeStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HoTTBridgeStatus_t qt_meta_stringdata_HoTTBridgeStatus = {
    {
QT_MOC_LITERAL(0, 0, 16), // "HoTTBridgeStatus"
QT_MOC_LITERAL(1, 17, 16), // "txPacketsChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "value"
QT_MOC_LITERAL(4, 41, 16), // "TxPacketsChanged"
QT_MOC_LITERAL(5, 58, 16), // "rxPacketsChanged"
QT_MOC_LITERAL(6, 75, 16), // "RxPacketsChanged"
QT_MOC_LITERAL(7, 92, 13), // "txFailChanged"
QT_MOC_LITERAL(8, 106, 13), // "TxFailChanged"
QT_MOC_LITERAL(9, 120, 13), // "rxFailChanged"
QT_MOC_LITERAL(10, 134, 13), // "RxFailChanged"
QT_MOC_LITERAL(11, 148, 12), // "setTxPackets"
QT_MOC_LITERAL(12, 161, 12), // "setRxPackets"
QT_MOC_LITERAL(13, 174, 9), // "setTxFail"
QT_MOC_LITERAL(14, 184, 9), // "setRxFail"
QT_MOC_LITERAL(15, 194, 17), // "emitNotifications"
QT_MOC_LITERAL(16, 212, 12), // "getTxPackets"
QT_MOC_LITERAL(17, 225, 12), // "getRxPackets"
QT_MOC_LITERAL(18, 238, 9), // "getTxFail"
QT_MOC_LITERAL(19, 248, 9), // "getRxFail"
QT_MOC_LITERAL(20, 258, 9), // "txPackets"
QT_MOC_LITERAL(21, 268, 9), // "rxPackets"
QT_MOC_LITERAL(22, 278, 6), // "txFail"
QT_MOC_LITERAL(23, 285, 6), // "rxFail"
QT_MOC_LITERAL(24, 292, 9), // "TxPackets"
QT_MOC_LITERAL(25, 302, 9), // "RxPackets"
QT_MOC_LITERAL(26, 312, 6), // "TxFail"
QT_MOC_LITERAL(27, 319, 6) // "RxFail"

    },
    "HoTTBridgeStatus\0txPacketsChanged\0\0"
    "value\0TxPacketsChanged\0rxPacketsChanged\0"
    "RxPacketsChanged\0txFailChanged\0"
    "TxFailChanged\0rxFailChanged\0RxFailChanged\0"
    "setTxPackets\0setRxPackets\0setTxFail\0"
    "setRxFail\0emitNotifications\0getTxPackets\0"
    "getRxPackets\0getTxFail\0getRxFail\0"
    "txPackets\0rxPackets\0txFail\0rxFail\0"
    "TxPackets\0RxPackets\0TxFail\0RxFail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HoTTBridgeStatus[] = {

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
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,

 // properties: name, type, flags
      20, QMetaType::UInt, 0x00495103,
      21, QMetaType::UInt, 0x00495103,
      22, QMetaType::UInt, 0x00495103,
      23, QMetaType::UInt, 0x00495103,
      24, QMetaType::UInt, 0x00495103,
      25, QMetaType::UInt, 0x00495103,
      26, QMetaType::UInt, 0x00495103,
      27, QMetaType::UInt, 0x00495103,

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

void HoTTBridgeStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HoTTBridgeStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->txPacketsChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: _t->TxPacketsChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->rxPacketsChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 3: _t->RxPacketsChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->txFailChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 5: _t->TxFailChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->rxFailChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 7: _t->RxFailChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 8: _t->setTxPackets((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 9: _t->setRxPackets((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 10: _t->setTxFail((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 11: _t->setRxFail((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 12: _t->emitNotifications(); break;
        case 13: { quint32 _r = _t->getTxPackets();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 14: { quint32 _r = _t->getRxPackets();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 15: { quint32 _r = _t->getTxFail();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 16: { quint32 _r = _t->getRxFail();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HoTTBridgeStatus::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeStatus::txPacketsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeStatus::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeStatus::TxPacketsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeStatus::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeStatus::rxPacketsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeStatus::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeStatus::RxPacketsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeStatus::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeStatus::txFailChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeStatus::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeStatus::TxFailChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeStatus::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeStatus::rxFailChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (HoTTBridgeStatus::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoTTBridgeStatus::RxFailChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HoTTBridgeStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->txPackets(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->rxPackets(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = _t->txFail(); break;
        case 3: *reinterpret_cast< quint32*>(_v) = _t->rxFail(); break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->getTxPackets(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->getRxPackets(); break;
        case 6: *reinterpret_cast< quint32*>(_v) = _t->getTxFail(); break;
        case 7: *reinterpret_cast< quint32*>(_v) = _t->getRxFail(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HoTTBridgeStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTxPackets(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setRxPackets(*reinterpret_cast< quint32*>(_v)); break;
        case 2: _t->setTxFail(*reinterpret_cast< quint32*>(_v)); break;
        case 3: _t->setRxFail(*reinterpret_cast< quint32*>(_v)); break;
        case 4: _t->setTxPackets(*reinterpret_cast< quint32*>(_v)); break;
        case 5: _t->setRxPackets(*reinterpret_cast< quint32*>(_v)); break;
        case 6: _t->setTxFail(*reinterpret_cast< quint32*>(_v)); break;
        case 7: _t->setRxFail(*reinterpret_cast< quint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject HoTTBridgeStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_HoTTBridgeStatus.data,
    qt_meta_data_HoTTBridgeStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HoTTBridgeStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HoTTBridgeStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HoTTBridgeStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int HoTTBridgeStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void HoTTBridgeStatus::txPacketsChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HoTTBridgeStatus::TxPacketsChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HoTTBridgeStatus::rxPacketsChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HoTTBridgeStatus::RxPacketsChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HoTTBridgeStatus::txFailChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HoTTBridgeStatus::TxFailChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HoTTBridgeStatus::rxFailChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void HoTTBridgeStatus::RxFailChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
