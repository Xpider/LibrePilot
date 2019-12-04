/****************************************************************************
** Meta object code from reading C++ file 'gcsreceiver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gcsreceiver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gcsreceiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GCSReceiverConstants_t {
    QByteArrayData data[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GCSReceiverConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GCSReceiverConstants_t qt_meta_stringdata_GCSReceiverConstants = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GCSReceiverConstants"
QT_MOC_LITERAL(1, 21, 4) // "Enum"

    },
    "GCSReceiverConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GCSReceiverConstants[] = {

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

void GCSReceiverConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GCSReceiverConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GCSReceiverConstants.data,
    qt_meta_data_GCSReceiverConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GCSReceiverConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GCSReceiverConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GCSReceiverConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GCSReceiverConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GCSReceiver_t {
    QByteArrayData data[66];
    char stringdata0[823];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GCSReceiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GCSReceiver_t qt_meta_stringdata_GCSReceiver = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GCSReceiver"
QT_MOC_LITERAL(1, 12, 14), // "channelChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "index"
QT_MOC_LITERAL(4, 34, 5), // "value"
QT_MOC_LITERAL(5, 40, 14), // "ChannelChanged"
QT_MOC_LITERAL(6, 55, 15), // "channel0Changed"
QT_MOC_LITERAL(7, 71, 16), // "Channel_0Changed"
QT_MOC_LITERAL(8, 88, 15), // "channel1Changed"
QT_MOC_LITERAL(9, 104, 16), // "Channel_1Changed"
QT_MOC_LITERAL(10, 121, 15), // "channel2Changed"
QT_MOC_LITERAL(11, 137, 16), // "Channel_2Changed"
QT_MOC_LITERAL(12, 154, 15), // "channel3Changed"
QT_MOC_LITERAL(13, 170, 16), // "Channel_3Changed"
QT_MOC_LITERAL(14, 187, 15), // "channel4Changed"
QT_MOC_LITERAL(15, 203, 16), // "Channel_4Changed"
QT_MOC_LITERAL(16, 220, 15), // "channel5Changed"
QT_MOC_LITERAL(17, 236, 16), // "Channel_5Changed"
QT_MOC_LITERAL(18, 253, 15), // "channel6Changed"
QT_MOC_LITERAL(19, 269, 16), // "Channel_6Changed"
QT_MOC_LITERAL(20, 286, 15), // "channel7Changed"
QT_MOC_LITERAL(21, 302, 16), // "Channel_7Changed"
QT_MOC_LITERAL(22, 319, 10), // "setChannel"
QT_MOC_LITERAL(23, 330, 11), // "setChannel0"
QT_MOC_LITERAL(24, 342, 12), // "setChannel_0"
QT_MOC_LITERAL(25, 355, 11), // "setChannel1"
QT_MOC_LITERAL(26, 367, 12), // "setChannel_1"
QT_MOC_LITERAL(27, 380, 11), // "setChannel2"
QT_MOC_LITERAL(28, 392, 12), // "setChannel_2"
QT_MOC_LITERAL(29, 405, 11), // "setChannel3"
QT_MOC_LITERAL(30, 417, 12), // "setChannel_3"
QT_MOC_LITERAL(31, 430, 11), // "setChannel4"
QT_MOC_LITERAL(32, 442, 12), // "setChannel_4"
QT_MOC_LITERAL(33, 455, 11), // "setChannel5"
QT_MOC_LITERAL(34, 467, 12), // "setChannel_5"
QT_MOC_LITERAL(35, 480, 11), // "setChannel6"
QT_MOC_LITERAL(36, 492, 12), // "setChannel_6"
QT_MOC_LITERAL(37, 505, 11), // "setChannel7"
QT_MOC_LITERAL(38, 517, 12), // "setChannel_7"
QT_MOC_LITERAL(39, 530, 17), // "emitNotifications"
QT_MOC_LITERAL(40, 548, 7), // "channel"
QT_MOC_LITERAL(41, 556, 10), // "getChannel"
QT_MOC_LITERAL(42, 567, 12), // "getChannel_0"
QT_MOC_LITERAL(43, 580, 12), // "getChannel_1"
QT_MOC_LITERAL(44, 593, 12), // "getChannel_2"
QT_MOC_LITERAL(45, 606, 12), // "getChannel_3"
QT_MOC_LITERAL(46, 619, 12), // "getChannel_4"
QT_MOC_LITERAL(47, 632, 12), // "getChannel_5"
QT_MOC_LITERAL(48, 645, 12), // "getChannel_6"
QT_MOC_LITERAL(49, 658, 12), // "getChannel_7"
QT_MOC_LITERAL(50, 671, 8), // "channel0"
QT_MOC_LITERAL(51, 680, 8), // "channel1"
QT_MOC_LITERAL(52, 689, 8), // "channel2"
QT_MOC_LITERAL(53, 698, 8), // "channel3"
QT_MOC_LITERAL(54, 707, 8), // "channel4"
QT_MOC_LITERAL(55, 716, 8), // "channel5"
QT_MOC_LITERAL(56, 725, 8), // "channel6"
QT_MOC_LITERAL(57, 734, 8), // "channel7"
QT_MOC_LITERAL(58, 743, 9), // "Channel_0"
QT_MOC_LITERAL(59, 753, 9), // "Channel_1"
QT_MOC_LITERAL(60, 763, 9), // "Channel_2"
QT_MOC_LITERAL(61, 773, 9), // "Channel_3"
QT_MOC_LITERAL(62, 783, 9), // "Channel_4"
QT_MOC_LITERAL(63, 793, 9), // "Channel_5"
QT_MOC_LITERAL(64, 803, 9), // "Channel_6"
QT_MOC_LITERAL(65, 813, 9) // "Channel_7"

    },
    "GCSReceiver\0channelChanged\0\0index\0"
    "value\0ChannelChanged\0channel0Changed\0"
    "Channel_0Changed\0channel1Changed\0"
    "Channel_1Changed\0channel2Changed\0"
    "Channel_2Changed\0channel3Changed\0"
    "Channel_3Changed\0channel4Changed\0"
    "Channel_4Changed\0channel5Changed\0"
    "Channel_5Changed\0channel6Changed\0"
    "Channel_6Changed\0channel7Changed\0"
    "Channel_7Changed\0setChannel\0setChannel0\0"
    "setChannel_0\0setChannel1\0setChannel_1\0"
    "setChannel2\0setChannel_2\0setChannel3\0"
    "setChannel_3\0setChannel4\0setChannel_4\0"
    "setChannel5\0setChannel_5\0setChannel6\0"
    "setChannel_6\0setChannel7\0setChannel_7\0"
    "emitNotifications\0channel\0getChannel\0"
    "getChannel_0\0getChannel_1\0getChannel_2\0"
    "getChannel_3\0getChannel_4\0getChannel_5\0"
    "getChannel_6\0getChannel_7\0channel0\0"
    "channel1\0channel2\0channel3\0channel4\0"
    "channel5\0channel6\0channel7\0Channel_0\0"
    "Channel_1\0Channel_2\0Channel_3\0Channel_4\0"
    "Channel_5\0Channel_6\0Channel_7"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GCSReceiver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
      16,  370, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  244,    2, 0x06 /* Public */,
       5,    2,  249,    2, 0x06 /* Public */,
       6,    1,  254,    2, 0x06 /* Public */,
       7,    1,  257,    2, 0x06 /* Public */,
       8,    1,  260,    2, 0x06 /* Public */,
       9,    1,  263,    2, 0x06 /* Public */,
      10,    1,  266,    2, 0x06 /* Public */,
      11,    1,  269,    2, 0x06 /* Public */,
      12,    1,  272,    2, 0x06 /* Public */,
      13,    1,  275,    2, 0x06 /* Public */,
      14,    1,  278,    2, 0x06 /* Public */,
      15,    1,  281,    2, 0x06 /* Public */,
      16,    1,  284,    2, 0x06 /* Public */,
      17,    1,  287,    2, 0x06 /* Public */,
      18,    1,  290,    2, 0x06 /* Public */,
      19,    1,  293,    2, 0x06 /* Public */,
      20,    1,  296,    2, 0x06 /* Public */,
      21,    1,  299,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    2,  302,    2, 0x0a /* Public */,
      23,    1,  307,    2, 0x0a /* Public */,
      24,    1,  310,    2, 0x0a /* Public */,
      25,    1,  313,    2, 0x0a /* Public */,
      26,    1,  316,    2, 0x0a /* Public */,
      27,    1,  319,    2, 0x0a /* Public */,
      28,    1,  322,    2, 0x0a /* Public */,
      29,    1,  325,    2, 0x0a /* Public */,
      30,    1,  328,    2, 0x0a /* Public */,
      31,    1,  331,    2, 0x0a /* Public */,
      32,    1,  334,    2, 0x0a /* Public */,
      33,    1,  337,    2, 0x0a /* Public */,
      34,    1,  340,    2, 0x0a /* Public */,
      35,    1,  343,    2, 0x0a /* Public */,
      36,    1,  346,    2, 0x0a /* Public */,
      37,    1,  349,    2, 0x0a /* Public */,
      38,    1,  352,    2, 0x0a /* Public */,
      39,    0,  355,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      40,    1,  356,    2, 0x02 /* Public */,
      41,    1,  359,    2, 0x02 /* Public */,
      42,    0,  362,    2, 0x02 /* Public */,
      43,    0,  363,    2, 0x02 /* Public */,
      44,    0,  364,    2, 0x02 /* Public */,
      45,    0,  365,    2, 0x02 /* Public */,
      46,    0,  366,    2, 0x02 /* Public */,
      47,    0,  367,    2, 0x02 /* Public */,
      48,    0,  368,    2, 0x02 /* Public */,
      49,    0,  369,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,

 // properties: name, type, flags
      50, QMetaType::UShort, 0x00495103,
      51, QMetaType::UShort, 0x00495103,
      52, QMetaType::UShort, 0x00495103,
      53, QMetaType::UShort, 0x00495103,
      54, QMetaType::UShort, 0x00495103,
      55, QMetaType::UShort, 0x00495103,
      56, QMetaType::UShort, 0x00495103,
      57, QMetaType::UShort, 0x00495103,
      58, QMetaType::UShort, 0x00495103,
      59, QMetaType::UShort, 0x00495103,
      60, QMetaType::UShort, 0x00495103,
      61, QMetaType::UShort, 0x00495103,
      62, QMetaType::UShort, 0x00495103,
      63, QMetaType::UShort, 0x00495103,
      64, QMetaType::UShort, 0x00495103,
      65, QMetaType::UShort, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
       8,
      10,
      12,
      14,
      16,
       3,
       5,
       7,
       9,
      11,
      13,
      15,
      17,

       0        // eod
};

void GCSReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GCSReceiver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->channelChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 1: _t->ChannelChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 2: _t->channel0Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 3: _t->Channel_0Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 4: _t->channel1Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 5: _t->Channel_1Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 6: _t->channel2Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 7: _t->Channel_2Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 8: _t->channel3Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 9: _t->Channel_3Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 10: _t->channel4Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 11: _t->Channel_4Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 12: _t->channel5Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 13: _t->Channel_5Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 14: _t->channel6Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 15: _t->Channel_6Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 16: _t->channel7Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 17: _t->Channel_7Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 18: _t->setChannel((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 19: _t->setChannel0((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 20: _t->setChannel_0((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 21: _t->setChannel1((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 22: _t->setChannel_1((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 23: _t->setChannel2((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 24: _t->setChannel_2((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 25: _t->setChannel3((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 26: _t->setChannel_3((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 27: _t->setChannel4((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 28: _t->setChannel_4((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 29: _t->setChannel5((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 30: _t->setChannel_5((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 31: _t->setChannel6((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 32: _t->setChannel_6((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 33: _t->setChannel7((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 34: _t->setChannel_7((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 35: _t->emitNotifications(); break;
        case 36: { quint16 _r = _t->channel((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 37: { quint16 _r = _t->getChannel((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 38: { quint16 _r = _t->getChannel_0();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 39: { quint16 _r = _t->getChannel_1();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 40: { quint16 _r = _t->getChannel_2();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 41: { quint16 _r = _t->getChannel_3();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 42: { quint16 _r = _t->getChannel_4();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 43: { quint16 _r = _t->getChannel_5();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 44: { quint16 _r = _t->getChannel_6();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 45: { quint16 _r = _t->getChannel_7();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GCSReceiver::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::channelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(quint32 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::ChannelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::channel0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::Channel_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::channel1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::Channel_1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::channel2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::Channel_2Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::channel3Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::Channel_3Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::channel4Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::Channel_4Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::channel5Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::Channel_5Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::channel6Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::Channel_6Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::channel7Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (GCSReceiver::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSReceiver::Channel_7Changed)) {
                *result = 17;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GCSReceiver *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->channel0(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->channel1(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->channel2(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->channel3(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->channel4(); break;
        case 5: *reinterpret_cast< quint16*>(_v) = _t->channel5(); break;
        case 6: *reinterpret_cast< quint16*>(_v) = _t->channel6(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->channel7(); break;
        case 8: *reinterpret_cast< quint16*>(_v) = _t->getChannel_0(); break;
        case 9: *reinterpret_cast< quint16*>(_v) = _t->getChannel_1(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->getChannel_2(); break;
        case 11: *reinterpret_cast< quint16*>(_v) = _t->getChannel_3(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->getChannel_4(); break;
        case 13: *reinterpret_cast< quint16*>(_v) = _t->getChannel_5(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->getChannel_6(); break;
        case 15: *reinterpret_cast< quint16*>(_v) = _t->getChannel_7(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GCSReceiver *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setChannel0(*reinterpret_cast< quint16*>(_v)); break;
        case 1: _t->setChannel1(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setChannel2(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setChannel3(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setChannel4(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setChannel5(*reinterpret_cast< quint16*>(_v)); break;
        case 6: _t->setChannel6(*reinterpret_cast< quint16*>(_v)); break;
        case 7: _t->setChannel7(*reinterpret_cast< quint16*>(_v)); break;
        case 8: _t->setChannel_0(*reinterpret_cast< quint16*>(_v)); break;
        case 9: _t->setChannel_1(*reinterpret_cast< quint16*>(_v)); break;
        case 10: _t->setChannel_2(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setChannel_3(*reinterpret_cast< quint16*>(_v)); break;
        case 12: _t->setChannel_4(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setChannel_5(*reinterpret_cast< quint16*>(_v)); break;
        case 14: _t->setChannel_6(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setChannel_7(*reinterpret_cast< quint16*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GCSReceiver::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_GCSReceiver.data,
    qt_meta_data_GCSReceiver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GCSReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GCSReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GCSReceiver.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int GCSReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GCSReceiver::channelChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GCSReceiver::ChannelChanged(quint32 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GCSReceiver::channel0Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GCSReceiver::Channel_0Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GCSReceiver::channel1Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GCSReceiver::Channel_1Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GCSReceiver::channel2Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GCSReceiver::Channel_2Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GCSReceiver::channel3Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GCSReceiver::Channel_3Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GCSReceiver::channel4Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GCSReceiver::Channel_4Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GCSReceiver::channel5Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GCSReceiver::Channel_5Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GCSReceiver::channel6Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GCSReceiver::Channel_6Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GCSReceiver::channel7Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GCSReceiver::Channel_7Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
