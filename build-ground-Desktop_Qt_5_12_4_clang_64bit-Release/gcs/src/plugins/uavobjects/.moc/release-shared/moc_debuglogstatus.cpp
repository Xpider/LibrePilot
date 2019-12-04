/****************************************************************************
** Meta object code from reading C++ file 'debuglogstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../debuglogstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debuglogstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DebugLogStatusConstants_t {
    QByteArrayData data[2];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugLogStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugLogStatusConstants_t qt_meta_stringdata_DebugLogStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 23), // "DebugLogStatusConstants"
QT_MOC_LITERAL(1, 24, 4) // "Enum"

    },
    "DebugLogStatusConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugLogStatusConstants[] = {

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

void DebugLogStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DebugLogStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DebugLogStatusConstants.data,
    qt_meta_data_DebugLogStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugLogStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugLogStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugLogStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DebugLogStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebugLogStatus_t {
    QByteArrayData data[28];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugLogStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugLogStatus_t qt_meta_stringdata_DebugLogStatus = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DebugLogStatus"
QT_MOC_LITERAL(1, 15, 13), // "flightChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "value"
QT_MOC_LITERAL(4, 36, 13), // "FlightChanged"
QT_MOC_LITERAL(5, 50, 12), // "entryChanged"
QT_MOC_LITERAL(6, 63, 12), // "EntryChanged"
QT_MOC_LITERAL(7, 76, 16), // "usedSlotsChanged"
QT_MOC_LITERAL(8, 93, 16), // "UsedSlotsChanged"
QT_MOC_LITERAL(9, 110, 16), // "freeSlotsChanged"
QT_MOC_LITERAL(10, 127, 16), // "FreeSlotsChanged"
QT_MOC_LITERAL(11, 144, 9), // "setFlight"
QT_MOC_LITERAL(12, 154, 8), // "setEntry"
QT_MOC_LITERAL(13, 163, 12), // "setUsedSlots"
QT_MOC_LITERAL(14, 176, 12), // "setFreeSlots"
QT_MOC_LITERAL(15, 189, 17), // "emitNotifications"
QT_MOC_LITERAL(16, 207, 9), // "getFlight"
QT_MOC_LITERAL(17, 217, 8), // "getEntry"
QT_MOC_LITERAL(18, 226, 12), // "getUsedSlots"
QT_MOC_LITERAL(19, 239, 12), // "getFreeSlots"
QT_MOC_LITERAL(20, 252, 6), // "flight"
QT_MOC_LITERAL(21, 259, 5), // "entry"
QT_MOC_LITERAL(22, 265, 9), // "usedSlots"
QT_MOC_LITERAL(23, 275, 9), // "freeSlots"
QT_MOC_LITERAL(24, 285, 6), // "Flight"
QT_MOC_LITERAL(25, 292, 5), // "Entry"
QT_MOC_LITERAL(26, 298, 9), // "UsedSlots"
QT_MOC_LITERAL(27, 308, 9) // "FreeSlots"

    },
    "DebugLogStatus\0flightChanged\0\0value\0"
    "FlightChanged\0entryChanged\0EntryChanged\0"
    "usedSlotsChanged\0UsedSlotsChanged\0"
    "freeSlotsChanged\0FreeSlotsChanged\0"
    "setFlight\0setEntry\0setUsedSlots\0"
    "setFreeSlots\0emitNotifications\0getFlight\0"
    "getEntry\0getUsedSlots\0getFreeSlots\0"
    "flight\0entry\0usedSlots\0freeSlots\0"
    "Flight\0Entry\0UsedSlots\0FreeSlots"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugLogStatus[] = {

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
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,

 // properties: name, type, flags
      20, QMetaType::UShort, 0x00495103,
      21, QMetaType::UShort, 0x00495103,
      22, QMetaType::UShort, 0x00495103,
      23, QMetaType::UShort, 0x00495103,
      24, QMetaType::UShort, 0x00495103,
      25, QMetaType::UShort, 0x00495103,
      26, QMetaType::UShort, 0x00495103,
      27, QMetaType::UShort, 0x00495103,

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

void DebugLogStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DebugLogStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flightChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 1: _t->FlightChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 2: _t->entryChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 3: _t->EntryChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 4: _t->usedSlotsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 5: _t->UsedSlotsChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 6: _t->freeSlotsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 7: _t->FreeSlotsChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 8: _t->setFlight((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 9: _t->setEntry((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 10: _t->setUsedSlots((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 11: _t->setFreeSlots((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 12: _t->emitNotifications(); break;
        case 13: { quint16 _r = _t->getFlight();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 14: { quint16 _r = _t->getEntry();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 15: { quint16 _r = _t->getUsedSlots();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 16: { quint16 _r = _t->getFreeSlots();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DebugLogStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogStatus::flightChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DebugLogStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogStatus::FlightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DebugLogStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogStatus::entryChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DebugLogStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogStatus::EntryChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DebugLogStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogStatus::usedSlotsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DebugLogStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogStatus::UsedSlotsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DebugLogStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogStatus::freeSlotsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DebugLogStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogStatus::FreeSlotsChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DebugLogStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->flight(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->entry(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->usedSlots(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->freeSlots(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->getFlight(); break;
        case 5: *reinterpret_cast< quint16*>(_v) = _t->getEntry(); break;
        case 6: *reinterpret_cast< quint16*>(_v) = _t->getUsedSlots(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->getFreeSlots(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DebugLogStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlight(*reinterpret_cast< quint16*>(_v)); break;
        case 1: _t->setEntry(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setUsedSlots(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setFreeSlots(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setFlight(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setEntry(*reinterpret_cast< quint16*>(_v)); break;
        case 6: _t->setUsedSlots(*reinterpret_cast< quint16*>(_v)); break;
        case 7: _t->setFreeSlots(*reinterpret_cast< quint16*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DebugLogStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_DebugLogStatus.data,
    qt_meta_data_DebugLogStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugLogStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugLogStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugLogStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int DebugLogStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DebugLogStatus::flightChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DebugLogStatus::FlightChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DebugLogStatus::entryChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DebugLogStatus::EntryChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DebugLogStatus::usedSlotsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DebugLogStatus::UsedSlotsChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DebugLogStatus::freeSlotsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DebugLogStatus::FreeSlotsChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
