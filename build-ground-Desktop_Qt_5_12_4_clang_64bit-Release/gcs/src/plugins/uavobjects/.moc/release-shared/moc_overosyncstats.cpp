/****************************************************************************
** Meta object code from reading C++ file 'overosyncstats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../overosyncstats.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overosyncstats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OveroSyncStatsConstants_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OveroSyncStatsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OveroSyncStatsConstants_t qt_meta_stringdata_OveroSyncStatsConstants = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OveroSyncStatsConstants"
QT_MOC_LITERAL(1, 24, 4), // "Enum"
QT_MOC_LITERAL(2, 29, 14) // "ConnectedCount"

    },
    "OveroSyncStatsConstants\0Enum\0"
    "ConnectedCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OveroSyncStatsConstants[] = {

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
       2, uint(OveroSyncStatsConstants::ConnectedCount),

       0        // eod
};

void OveroSyncStatsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OveroSyncStatsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OveroSyncStatsConstants.data,
    qt_meta_data_OveroSyncStatsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OveroSyncStatsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OveroSyncStatsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OveroSyncStatsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OveroSyncStatsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OveroSyncStats_Connected_t {
    QByteArrayData data[4];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OveroSyncStats_Connected_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OveroSyncStats_Connected_t qt_meta_stringdata_OveroSyncStats_Connected = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OveroSyncStats_Connected"
QT_MOC_LITERAL(1, 25, 4), // "Enum"
QT_MOC_LITERAL(2, 30, 5), // "False"
QT_MOC_LITERAL(3, 36, 4) // "True"

    },
    "OveroSyncStats_Connected\0Enum\0False\0"
    "True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OveroSyncStats_Connected[] = {

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
       2, uint(OveroSyncStats_Connected::False),
       3, uint(OveroSyncStats_Connected::True),

       0        // eod
};

void OveroSyncStats_Connected::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OveroSyncStats_Connected::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OveroSyncStats_Connected.data,
    qt_meta_data_OveroSyncStats_Connected,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OveroSyncStats_Connected::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OveroSyncStats_Connected::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OveroSyncStats_Connected.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OveroSyncStats_Connected::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OveroSyncStats_t {
    QByteArrayData data[47];
    char stringdata0[679];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OveroSyncStats_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OveroSyncStats_t qt_meta_stringdata_OveroSyncStats = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OveroSyncStats"
QT_MOC_LITERAL(1, 15, 11), // "sendChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "value"
QT_MOC_LITERAL(4, 34, 11), // "SendChanged"
QT_MOC_LITERAL(5, 46, 15), // "receivedChanged"
QT_MOC_LITERAL(6, 62, 15), // "ReceivedChanged"
QT_MOC_LITERAL(7, 78, 22), // "framesyncErrorsChanged"
QT_MOC_LITERAL(8, 101, 22), // "FramesyncErrorsChanged"
QT_MOC_LITERAL(9, 124, 21), // "underrunErrorsChanged"
QT_MOC_LITERAL(10, 146, 21), // "UnderrunErrorsChanged"
QT_MOC_LITERAL(11, 168, 21), // "droppedUpdatesChanged"
QT_MOC_LITERAL(12, 190, 21), // "DroppedUpdatesChanged"
QT_MOC_LITERAL(13, 212, 14), // "packetsChanged"
QT_MOC_LITERAL(14, 227, 14), // "PacketsChanged"
QT_MOC_LITERAL(15, 242, 16), // "connectedChanged"
QT_MOC_LITERAL(16, 259, 30), // "OveroSyncStats_Connected::Enum"
QT_MOC_LITERAL(17, 290, 16), // "ConnectedChanged"
QT_MOC_LITERAL(18, 307, 7), // "setSend"
QT_MOC_LITERAL(19, 315, 11), // "setReceived"
QT_MOC_LITERAL(20, 327, 18), // "setFramesyncErrors"
QT_MOC_LITERAL(21, 346, 17), // "setUnderrunErrors"
QT_MOC_LITERAL(22, 364, 17), // "setDroppedUpdates"
QT_MOC_LITERAL(23, 382, 10), // "setPackets"
QT_MOC_LITERAL(24, 393, 12), // "setConnected"
QT_MOC_LITERAL(25, 406, 17), // "emitNotifications"
QT_MOC_LITERAL(26, 424, 7), // "getSend"
QT_MOC_LITERAL(27, 432, 11), // "getReceived"
QT_MOC_LITERAL(28, 444, 18), // "getFramesyncErrors"
QT_MOC_LITERAL(29, 463, 17), // "getUnderrunErrors"
QT_MOC_LITERAL(30, 481, 17), // "getDroppedUpdates"
QT_MOC_LITERAL(31, 499, 10), // "getPackets"
QT_MOC_LITERAL(32, 510, 12), // "getConnected"
QT_MOC_LITERAL(33, 523, 4), // "send"
QT_MOC_LITERAL(34, 528, 8), // "received"
QT_MOC_LITERAL(35, 537, 15), // "framesyncErrors"
QT_MOC_LITERAL(36, 553, 14), // "underrunErrors"
QT_MOC_LITERAL(37, 568, 14), // "droppedUpdates"
QT_MOC_LITERAL(38, 583, 7), // "packets"
QT_MOC_LITERAL(39, 591, 9), // "connected"
QT_MOC_LITERAL(40, 601, 4), // "Send"
QT_MOC_LITERAL(41, 606, 8), // "Received"
QT_MOC_LITERAL(42, 615, 15), // "FramesyncErrors"
QT_MOC_LITERAL(43, 631, 14), // "UnderrunErrors"
QT_MOC_LITERAL(44, 646, 14), // "DroppedUpdates"
QT_MOC_LITERAL(45, 661, 7), // "Packets"
QT_MOC_LITERAL(46, 669, 9) // "Connected"

    },
    "OveroSyncStats\0sendChanged\0\0value\0"
    "SendChanged\0receivedChanged\0ReceivedChanged\0"
    "framesyncErrorsChanged\0FramesyncErrorsChanged\0"
    "underrunErrorsChanged\0UnderrunErrorsChanged\0"
    "droppedUpdatesChanged\0DroppedUpdatesChanged\0"
    "packetsChanged\0PacketsChanged\0"
    "connectedChanged\0OveroSyncStats_Connected::Enum\0"
    "ConnectedChanged\0setSend\0setReceived\0"
    "setFramesyncErrors\0setUnderrunErrors\0"
    "setDroppedUpdates\0setPackets\0setConnected\0"
    "emitNotifications\0getSend\0getReceived\0"
    "getFramesyncErrors\0getUnderrunErrors\0"
    "getDroppedUpdates\0getPackets\0getConnected\0"
    "send\0received\0framesyncErrors\0"
    "underrunErrors\0droppedUpdates\0packets\0"
    "connected\0Send\0Received\0FramesyncErrors\0"
    "UnderrunErrors\0DroppedUpdates\0Packets\0"
    "Connected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OveroSyncStats[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
      14,  238, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x06 /* Public */,
       4,    1,  167,    2, 0x06 /* Public */,
       5,    1,  170,    2, 0x06 /* Public */,
       6,    1,  173,    2, 0x06 /* Public */,
       7,    1,  176,    2, 0x06 /* Public */,
       8,    1,  179,    2, 0x06 /* Public */,
       9,    1,  182,    2, 0x06 /* Public */,
      10,    1,  185,    2, 0x06 /* Public */,
      11,    1,  188,    2, 0x06 /* Public */,
      12,    1,  191,    2, 0x06 /* Public */,
      13,    1,  194,    2, 0x06 /* Public */,
      14,    1,  197,    2, 0x06 /* Public */,
      15,    1,  200,    2, 0x06 /* Public */,
      17,    1,  203,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  206,    2, 0x0a /* Public */,
      19,    1,  209,    2, 0x0a /* Public */,
      20,    1,  212,    2, 0x0a /* Public */,
      21,    1,  215,    2, 0x0a /* Public */,
      22,    1,  218,    2, 0x0a /* Public */,
      23,    1,  221,    2, 0x0a /* Public */,
      24,    1,  224,    2, 0x0a /* Public */,
      24,    1,  227,    2, 0x0a /* Public */,
      25,    0,  230,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      26,    0,  231,    2, 0x02 /* Public */,
      27,    0,  232,    2, 0x02 /* Public */,
      28,    0,  233,    2, 0x02 /* Public */,
      29,    0,  234,    2, 0x02 /* Public */,
      30,    0,  235,    2, 0x02 /* Public */,
      31,    0,  236,    2, 0x02 /* Public */,
      32,    0,  237,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 16,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 16,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UChar,

 // properties: name, type, flags
      33, QMetaType::UInt, 0x00495103,
      34, QMetaType::UInt, 0x00495103,
      35, QMetaType::UInt, 0x00495103,
      36, QMetaType::UInt, 0x00495103,
      37, QMetaType::UInt, 0x00495103,
      38, QMetaType::UInt, 0x00495103,
      39, 0x80000000 | 16, 0x0049510b,
      40, QMetaType::UInt, 0x00495103,
      41, QMetaType::UInt, 0x00495103,
      42, QMetaType::UInt, 0x00495103,
      43, QMetaType::UInt, 0x00495103,
      44, QMetaType::UInt, 0x00495103,
      45, QMetaType::UInt, 0x00495103,
      46, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       8,
      10,
      12,
       1,
       3,
       5,
       7,
       9,
      11,
      13,

       0        // eod
};

void OveroSyncStats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OveroSyncStats *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: _t->SendChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->receivedChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 3: _t->ReceivedChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->framesyncErrorsChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 5: _t->FramesyncErrorsChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->underrunErrorsChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 7: _t->UnderrunErrorsChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 8: _t->droppedUpdatesChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 9: _t->DroppedUpdatesChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 10: _t->packetsChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 11: _t->PacketsChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 12: _t->connectedChanged((*reinterpret_cast< const OveroSyncStats_Connected::Enum(*)>(_a[1]))); break;
        case 13: _t->ConnectedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 14: _t->setSend((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 15: _t->setReceived((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 16: _t->setFramesyncErrors((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 17: _t->setUnderrunErrors((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 18: _t->setDroppedUpdates((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 19: _t->setPackets((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 20: _t->setConnected((*reinterpret_cast< const OveroSyncStats_Connected::Enum(*)>(_a[1]))); break;
        case 21: _t->setConnected((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->emitNotifications(); break;
        case 23: { quint32 _r = _t->getSend();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 24: { quint32 _r = _t->getReceived();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 25: { quint32 _r = _t->getFramesyncErrors();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 26: { quint32 _r = _t->getUnderrunErrors();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 27: { quint32 _r = _t->getDroppedUpdates();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 28: { quint32 _r = _t->getPackets();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 29: { quint8 _r = _t->getConnected();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OveroSyncStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::sendChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::SendChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::receivedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::ReceivedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::framesyncErrorsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::FramesyncErrorsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::underrunErrorsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::UnderrunErrorsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::droppedUpdatesChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::DroppedUpdatesChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::packetsChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::PacketsChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(const OveroSyncStats_Connected::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::connectedChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (OveroSyncStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OveroSyncStats::ConnectedChanged)) {
                *result = 13;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OveroSyncStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->send(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->received(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = _t->framesyncErrors(); break;
        case 3: *reinterpret_cast< quint32*>(_v) = _t->underrunErrors(); break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->droppedUpdates(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->packets(); break;
        case 6: *reinterpret_cast< OveroSyncStats_Connected::Enum*>(_v) = _t->connected(); break;
        case 7: *reinterpret_cast< quint32*>(_v) = _t->getSend(); break;
        case 8: *reinterpret_cast< quint32*>(_v) = _t->getReceived(); break;
        case 9: *reinterpret_cast< quint32*>(_v) = _t->getFramesyncErrors(); break;
        case 10: *reinterpret_cast< quint32*>(_v) = _t->getUnderrunErrors(); break;
        case 11: *reinterpret_cast< quint32*>(_v) = _t->getDroppedUpdates(); break;
        case 12: *reinterpret_cast< quint32*>(_v) = _t->getPackets(); break;
        case 13: *reinterpret_cast< quint8*>(_v) = _t->getConnected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OveroSyncStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSend(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setReceived(*reinterpret_cast< quint32*>(_v)); break;
        case 2: _t->setFramesyncErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 3: _t->setUnderrunErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 4: _t->setDroppedUpdates(*reinterpret_cast< quint32*>(_v)); break;
        case 5: _t->setPackets(*reinterpret_cast< quint32*>(_v)); break;
        case 6: _t->setConnected(*reinterpret_cast< OveroSyncStats_Connected::Enum*>(_v)); break;
        case 7: _t->setSend(*reinterpret_cast< quint32*>(_v)); break;
        case 8: _t->setReceived(*reinterpret_cast< quint32*>(_v)); break;
        case 9: _t->setFramesyncErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 10: _t->setUnderrunErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 11: _t->setDroppedUpdates(*reinterpret_cast< quint32*>(_v)); break;
        case 12: _t->setPackets(*reinterpret_cast< quint32*>(_v)); break;
        case 13: _t->setConnected(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_OveroSyncStats[] = {
        &OveroSyncStats_Connected::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject OveroSyncStats::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_OveroSyncStats.data,
    qt_meta_data_OveroSyncStats,
    qt_static_metacall,
    qt_meta_extradata_OveroSyncStats,
    nullptr
} };


const QMetaObject *OveroSyncStats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OveroSyncStats::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OveroSyncStats.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int OveroSyncStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OveroSyncStats::sendChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OveroSyncStats::SendChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OveroSyncStats::receivedChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OveroSyncStats::ReceivedChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OveroSyncStats::framesyncErrorsChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OveroSyncStats::FramesyncErrorsChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OveroSyncStats::underrunErrorsChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OveroSyncStats::UnderrunErrorsChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OveroSyncStats::droppedUpdatesChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void OveroSyncStats::DroppedUpdatesChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void OveroSyncStats::packetsChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void OveroSyncStats::PacketsChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void OveroSyncStats::connectedChanged(const OveroSyncStats_Connected::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void OveroSyncStats::ConnectedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
