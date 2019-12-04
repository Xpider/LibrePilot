/****************************************************************************
** Meta object code from reading C++ file 'debuglogcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../debuglogcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debuglogcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DebugLogControlConstants_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugLogControlConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugLogControlConstants_t qt_meta_stringdata_DebugLogControlConstants = {
    {
QT_MOC_LITERAL(0, 0, 24), // "DebugLogControlConstants"
QT_MOC_LITERAL(1, 25, 4), // "Enum"
QT_MOC_LITERAL(2, 30, 14) // "OperationCount"

    },
    "DebugLogControlConstants\0Enum\0"
    "OperationCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugLogControlConstants[] = {

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
       2, uint(DebugLogControlConstants::OperationCount),

       0        // eod
};

void DebugLogControlConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DebugLogControlConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DebugLogControlConstants.data,
    qt_meta_data_DebugLogControlConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugLogControlConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugLogControlConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugLogControlConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DebugLogControlConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebugLogControl_Operation_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugLogControl_Operation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugLogControl_Operation_t qt_meta_stringdata_DebugLogControl_Operation = {
    {
QT_MOC_LITERAL(0, 0, 25), // "DebugLogControl_Operation"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 4), // "None"
QT_MOC_LITERAL(3, 36, 8), // "Retrieve"
QT_MOC_LITERAL(4, 45, 11) // "FormatFlash"

    },
    "DebugLogControl_Operation\0Enum\0None\0"
    "Retrieve\0FormatFlash"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugLogControl_Operation[] = {

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
       2, uint(DebugLogControl_Operation::None),
       3, uint(DebugLogControl_Operation::Retrieve),
       4, uint(DebugLogControl_Operation::FormatFlash),

       0        // eod
};

void DebugLogControl_Operation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DebugLogControl_Operation::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DebugLogControl_Operation.data,
    qt_meta_data_DebugLogControl_Operation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugLogControl_Operation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugLogControl_Operation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugLogControl_Operation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DebugLogControl_Operation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebugLogControl_t {
    QByteArrayData data[23];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugLogControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugLogControl_t qt_meta_stringdata_DebugLogControl = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DebugLogControl"
QT_MOC_LITERAL(1, 16, 13), // "flightChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "value"
QT_MOC_LITERAL(4, 37, 13), // "FlightChanged"
QT_MOC_LITERAL(5, 51, 12), // "entryChanged"
QT_MOC_LITERAL(6, 64, 12), // "EntryChanged"
QT_MOC_LITERAL(7, 77, 16), // "operationChanged"
QT_MOC_LITERAL(8, 94, 31), // "DebugLogControl_Operation::Enum"
QT_MOC_LITERAL(9, 126, 16), // "OperationChanged"
QT_MOC_LITERAL(10, 143, 9), // "setFlight"
QT_MOC_LITERAL(11, 153, 8), // "setEntry"
QT_MOC_LITERAL(12, 162, 12), // "setOperation"
QT_MOC_LITERAL(13, 175, 17), // "emitNotifications"
QT_MOC_LITERAL(14, 193, 9), // "getFlight"
QT_MOC_LITERAL(15, 203, 8), // "getEntry"
QT_MOC_LITERAL(16, 212, 12), // "getOperation"
QT_MOC_LITERAL(17, 225, 6), // "flight"
QT_MOC_LITERAL(18, 232, 5), // "entry"
QT_MOC_LITERAL(19, 238, 9), // "operation"
QT_MOC_LITERAL(20, 248, 6), // "Flight"
QT_MOC_LITERAL(21, 255, 5), // "Entry"
QT_MOC_LITERAL(22, 261, 9) // "Operation"

    },
    "DebugLogControl\0flightChanged\0\0value\0"
    "FlightChanged\0entryChanged\0EntryChanged\0"
    "operationChanged\0DebugLogControl_Operation::Enum\0"
    "OperationChanged\0setFlight\0setEntry\0"
    "setOperation\0emitNotifications\0getFlight\0"
    "getEntry\0getOperation\0flight\0entry\0"
    "operation\0Flight\0Entry\0Operation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugLogControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       6,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       6,    1,   93,    2, 0x06 /* Public */,
       7,    1,   96,    2, 0x06 /* Public */,
       9,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  102,    2, 0x0a /* Public */,
      11,    1,  105,    2, 0x0a /* Public */,
      12,    1,  108,    2, 0x0a /* Public */,
      12,    1,  111,    2, 0x0a /* Public */,
      13,    0,  114,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      14,    0,  115,    2, 0x02 /* Public */,
      15,    0,  116,    2, 0x02 /* Public */,
      16,    0,  117,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UChar,

 // properties: name, type, flags
      17, QMetaType::UShort, 0x00495103,
      18, QMetaType::UShort, 0x00495103,
      19, 0x80000000 | 8, 0x0049510b,
      20, QMetaType::UShort, 0x00495103,
      21, QMetaType::UShort, 0x00495103,
      22, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       1,
       3,
       5,

       0        // eod
};

void DebugLogControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DebugLogControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flightChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 1: _t->FlightChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 2: _t->entryChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 3: _t->EntryChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 4: _t->operationChanged((*reinterpret_cast< const DebugLogControl_Operation::Enum(*)>(_a[1]))); break;
        case 5: _t->OperationChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->setFlight((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 7: _t->setEntry((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 8: _t->setOperation((*reinterpret_cast< const DebugLogControl_Operation::Enum(*)>(_a[1]))); break;
        case 9: _t->setOperation((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->emitNotifications(); break;
        case 11: { quint16 _r = _t->getFlight();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 12: { quint16 _r = _t->getEntry();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 13: { quint8 _r = _t->getOperation();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DebugLogControl::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogControl::flightChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DebugLogControl::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogControl::FlightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DebugLogControl::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogControl::entryChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DebugLogControl::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogControl::EntryChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DebugLogControl::*)(const DebugLogControl_Operation::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogControl::operationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DebugLogControl::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogControl::OperationChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DebugLogControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->flight(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->entry(); break;
        case 2: *reinterpret_cast< DebugLogControl_Operation::Enum*>(_v) = _t->operation(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->getFlight(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->getEntry(); break;
        case 5: *reinterpret_cast< quint8*>(_v) = _t->getOperation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DebugLogControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlight(*reinterpret_cast< quint16*>(_v)); break;
        case 1: _t->setEntry(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setOperation(*reinterpret_cast< DebugLogControl_Operation::Enum*>(_v)); break;
        case 3: _t->setFlight(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setEntry(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setOperation(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_DebugLogControl[] = {
        &DebugLogControl_Operation::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject DebugLogControl::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_DebugLogControl.data,
    qt_meta_data_DebugLogControl,
    qt_static_metacall,
    qt_meta_extradata_DebugLogControl,
    nullptr
} };


const QMetaObject *DebugLogControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugLogControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugLogControl.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int DebugLogControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
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
void DebugLogControl::flightChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DebugLogControl::FlightChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DebugLogControl::entryChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DebugLogControl::EntryChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DebugLogControl::operationChanged(const DebugLogControl_Operation::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DebugLogControl::OperationChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
