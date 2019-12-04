/****************************************************************************
** Meta object code from reading C++ file 'receiveractivity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../receiveractivity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receiveractivity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReceiverActivityConstants_t {
    QByteArrayData data[3];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReceiverActivityConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReceiverActivityConstants_t qt_meta_stringdata_ReceiverActivityConstants = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ReceiverActivityConstants"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 16) // "ActiveGroupCount"

    },
    "ReceiverActivityConstants\0Enum\0"
    "ActiveGroupCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReceiverActivityConstants[] = {

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
       2, uint(ReceiverActivityConstants::ActiveGroupCount),

       0        // eod
};

void ReceiverActivityConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ReceiverActivityConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ReceiverActivityConstants.data,
    qt_meta_data_ReceiverActivityConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReceiverActivityConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiverActivityConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiverActivityConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ReceiverActivityConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ReceiverActivity_ActiveGroup_t {
    QByteArrayData data[16];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReceiverActivity_ActiveGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReceiverActivity_ActiveGroup_t qt_meta_stringdata_ReceiverActivity_ActiveGroup = {
    {
QT_MOC_LITERAL(0, 0, 28), // "ReceiverActivity_ActiveGroup"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 3), // "PWM"
QT_MOC_LITERAL(3, 38, 3), // "PPM"
QT_MOC_LITERAL(4, 42, 11), // "DSMMainPort"
QT_MOC_LITERAL(5, 54, 12), // "DSMFlexiPort"
QT_MOC_LITERAL(6, 67, 11), // "DSMRcvrPort"
QT_MOC_LITERAL(7, 79, 4), // "SBus"
QT_MOC_LITERAL(8, 84, 5), // "EXBus"
QT_MOC_LITERAL(9, 90, 4), // "HoTT"
QT_MOC_LITERAL(10, 95, 4), // "SRXL"
QT_MOC_LITERAL(11, 100, 4), // "IBus"
QT_MOC_LITERAL(12, 105, 3), // "GCS"
QT_MOC_LITERAL(13, 109, 6), // "OPLink"
QT_MOC_LITERAL(14, 116, 7), // "OpenLRS"
QT_MOC_LITERAL(15, 124, 4) // "None"

    },
    "ReceiverActivity_ActiveGroup\0Enum\0PWM\0"
    "PPM\0DSMMainPort\0DSMFlexiPort\0DSMRcvrPort\0"
    "SBus\0EXBus\0HoTT\0SRXL\0IBus\0GCS\0OPLink\0"
    "OpenLRS\0None"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReceiverActivity_ActiveGroup[] = {

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
       1,    1, 0x0,   14,   19,

 // enum data: key, value
       2, uint(ReceiverActivity_ActiveGroup::PWM),
       3, uint(ReceiverActivity_ActiveGroup::PPM),
       4, uint(ReceiverActivity_ActiveGroup::DSMMainPort),
       5, uint(ReceiverActivity_ActiveGroup::DSMFlexiPort),
       6, uint(ReceiverActivity_ActiveGroup::DSMRcvrPort),
       7, uint(ReceiverActivity_ActiveGroup::SBus),
       8, uint(ReceiverActivity_ActiveGroup::EXBus),
       9, uint(ReceiverActivity_ActiveGroup::HoTT),
      10, uint(ReceiverActivity_ActiveGroup::SRXL),
      11, uint(ReceiverActivity_ActiveGroup::IBus),
      12, uint(ReceiverActivity_ActiveGroup::GCS),
      13, uint(ReceiverActivity_ActiveGroup::OPLink),
      14, uint(ReceiverActivity_ActiveGroup::OpenLRS),
      15, uint(ReceiverActivity_ActiveGroup::None),

       0        // eod
};

void ReceiverActivity_ActiveGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ReceiverActivity_ActiveGroup::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ReceiverActivity_ActiveGroup.data,
    qt_meta_data_ReceiverActivity_ActiveGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReceiverActivity_ActiveGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiverActivity_ActiveGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiverActivity_ActiveGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ReceiverActivity_ActiveGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ReceiverActivity_t {
    QByteArrayData data[17];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReceiverActivity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReceiverActivity_t qt_meta_stringdata_ReceiverActivity = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ReceiverActivity"
QT_MOC_LITERAL(1, 17, 18), // "activeGroupChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 34), // "ReceiverActivity_ActiveGroup:..."
QT_MOC_LITERAL(4, 72, 5), // "value"
QT_MOC_LITERAL(5, 78, 18), // "ActiveGroupChanged"
QT_MOC_LITERAL(6, 97, 20), // "activeChannelChanged"
QT_MOC_LITERAL(7, 118, 20), // "ActiveChannelChanged"
QT_MOC_LITERAL(8, 139, 14), // "setActiveGroup"
QT_MOC_LITERAL(9, 154, 16), // "setActiveChannel"
QT_MOC_LITERAL(10, 171, 17), // "emitNotifications"
QT_MOC_LITERAL(11, 189, 14), // "getActiveGroup"
QT_MOC_LITERAL(12, 204, 16), // "getActiveChannel"
QT_MOC_LITERAL(13, 221, 11), // "activeGroup"
QT_MOC_LITERAL(14, 233, 13), // "activeChannel"
QT_MOC_LITERAL(15, 247, 11), // "ActiveGroup"
QT_MOC_LITERAL(16, 259, 13) // "ActiveChannel"

    },
    "ReceiverActivity\0activeGroupChanged\0"
    "\0ReceiverActivity_ActiveGroup::Enum\0"
    "value\0ActiveGroupChanged\0activeChannelChanged\0"
    "ActiveChannelChanged\0setActiveGroup\0"
    "setActiveChannel\0emitNotifications\0"
    "getActiveGroup\0getActiveChannel\0"
    "activeGroup\0activeChannel\0ActiveGroup\0"
    "ActiveChannel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReceiverActivity[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,
       7,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   81,    2, 0x0a /* Public */,
       8,    1,   84,    2, 0x0a /* Public */,
       9,    1,   87,    2, 0x0a /* Public */,
       9,    1,   90,    2, 0x0a /* Public */,
      10,    0,   93,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   94,    2, 0x02 /* Public */,
      12,    0,   95,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      13, 0x80000000 | 3, 0x0049510b,
      14, QMetaType::UShort, 0x00495103,
      15, QMetaType::UChar, 0x00495103,
      16, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       1,
       3,

       0        // eod
};

void ReceiverActivity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReceiverActivity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeGroupChanged((*reinterpret_cast< const ReceiverActivity_ActiveGroup::Enum(*)>(_a[1]))); break;
        case 1: _t->ActiveGroupChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->activeChannelChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 3: _t->ActiveChannelChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->setActiveGroup((*reinterpret_cast< const ReceiverActivity_ActiveGroup::Enum(*)>(_a[1]))); break;
        case 5: _t->setActiveGroup((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->setActiveChannel((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 7: _t->setActiveChannel((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->emitNotifications(); break;
        case 9: { quint8 _r = _t->getActiveGroup();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 10: { quint8 _r = _t->getActiveChannel();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReceiverActivity::*)(const ReceiverActivity_ActiveGroup::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiverActivity::activeGroupChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ReceiverActivity::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiverActivity::ActiveGroupChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ReceiverActivity::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiverActivity::activeChannelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ReceiverActivity::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiverActivity::ActiveChannelChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ReceiverActivity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ReceiverActivity_ActiveGroup::Enum*>(_v) = _t->activeGroup(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->activeChannel(); break;
        case 2: *reinterpret_cast< quint8*>(_v) = _t->getActiveGroup(); break;
        case 3: *reinterpret_cast< quint8*>(_v) = _t->getActiveChannel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ReceiverActivity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActiveGroup(*reinterpret_cast< ReceiverActivity_ActiveGroup::Enum*>(_v)); break;
        case 1: _t->setActiveChannel(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setActiveGroup(*reinterpret_cast< quint8*>(_v)); break;
        case 3: _t->setActiveChannel(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_ReceiverActivity[] = {
        &ReceiverActivity_ActiveGroup::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ReceiverActivity::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_ReceiverActivity.data,
    qt_meta_data_ReceiverActivity,
    qt_static_metacall,
    qt_meta_extradata_ReceiverActivity,
    nullptr
} };


const QMetaObject *ReceiverActivity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiverActivity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiverActivity.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int ReceiverActivity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ReceiverActivity::activeGroupChanged(const ReceiverActivity_ActiveGroup::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReceiverActivity::ActiveGroupChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ReceiverActivity::activeChannelChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ReceiverActivity::ActiveChannelChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
