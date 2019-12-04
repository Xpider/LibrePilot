/****************************************************************************
** Meta object code from reading C++ file 'flighttelemetrystats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../flighttelemetrystats.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flighttelemetrystats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightTelemetryStatsConstants_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightTelemetryStatsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightTelemetryStatsConstants_t qt_meta_stringdata_FlightTelemetryStatsConstants = {
    {
QT_MOC_LITERAL(0, 0, 29), // "FlightTelemetryStatsConstants"
QT_MOC_LITERAL(1, 30, 4), // "Enum"
QT_MOC_LITERAL(2, 35, 11) // "StatusCount"

    },
    "FlightTelemetryStatsConstants\0Enum\0"
    "StatusCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightTelemetryStatsConstants[] = {

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
       2, uint(FlightTelemetryStatsConstants::StatusCount),

       0        // eod
};

void FlightTelemetryStatsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightTelemetryStatsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightTelemetryStatsConstants.data,
    qt_meta_data_FlightTelemetryStatsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightTelemetryStatsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightTelemetryStatsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightTelemetryStatsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightTelemetryStatsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightTelemetryStats_Status_t {
    QByteArrayData data[6];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightTelemetryStats_Status_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightTelemetryStats_Status_t qt_meta_stringdata_FlightTelemetryStats_Status = {
    {
QT_MOC_LITERAL(0, 0, 27), // "FlightTelemetryStats_Status"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 12), // "Disconnected"
QT_MOC_LITERAL(3, 46, 12), // "HandshakeReq"
QT_MOC_LITERAL(4, 59, 12), // "HandshakeAck"
QT_MOC_LITERAL(5, 72, 9) // "Connected"

    },
    "FlightTelemetryStats_Status\0Enum\0"
    "Disconnected\0HandshakeReq\0HandshakeAck\0"
    "Connected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightTelemetryStats_Status[] = {

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
       1,    1, 0x0,    4,   19,

 // enum data: key, value
       2, uint(FlightTelemetryStats_Status::Disconnected),
       3, uint(FlightTelemetryStats_Status::HandshakeReq),
       4, uint(FlightTelemetryStats_Status::HandshakeAck),
       5, uint(FlightTelemetryStats_Status::Connected),

       0        // eod
};

void FlightTelemetryStats_Status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightTelemetryStats_Status::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightTelemetryStats_Status.data,
    qt_meta_data_FlightTelemetryStats_Status,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightTelemetryStats_Status::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightTelemetryStats_Status::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightTelemetryStats_Status.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightTelemetryStats_Status::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightTelemetryStats_t {
    QByteArrayData data[65];
    char stringdata0[892];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightTelemetryStats_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightTelemetryStats_t qt_meta_stringdata_FlightTelemetryStats = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FlightTelemetryStats"
QT_MOC_LITERAL(1, 21, 17), // "txDataRateChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "value"
QT_MOC_LITERAL(4, 46, 17), // "TxDataRateChanged"
QT_MOC_LITERAL(5, 64, 14), // "txBytesChanged"
QT_MOC_LITERAL(6, 79, 14), // "TxBytesChanged"
QT_MOC_LITERAL(7, 94, 17), // "txFailuresChanged"
QT_MOC_LITERAL(8, 112, 17), // "TxFailuresChanged"
QT_MOC_LITERAL(9, 130, 16), // "txRetriesChanged"
QT_MOC_LITERAL(10, 147, 16), // "TxRetriesChanged"
QT_MOC_LITERAL(11, 164, 17), // "rxDataRateChanged"
QT_MOC_LITERAL(12, 182, 17), // "RxDataRateChanged"
QT_MOC_LITERAL(13, 200, 14), // "rxBytesChanged"
QT_MOC_LITERAL(14, 215, 14), // "RxBytesChanged"
QT_MOC_LITERAL(15, 230, 17), // "rxFailuresChanged"
QT_MOC_LITERAL(16, 248, 17), // "RxFailuresChanged"
QT_MOC_LITERAL(17, 266, 19), // "rxSyncErrorsChanged"
QT_MOC_LITERAL(18, 286, 19), // "RxSyncErrorsChanged"
QT_MOC_LITERAL(19, 306, 18), // "rxCrcErrorsChanged"
QT_MOC_LITERAL(20, 325, 18), // "RxCrcErrorsChanged"
QT_MOC_LITERAL(21, 344, 13), // "statusChanged"
QT_MOC_LITERAL(22, 358, 33), // "FlightTelemetryStats_Status::..."
QT_MOC_LITERAL(23, 392, 13), // "StatusChanged"
QT_MOC_LITERAL(24, 406, 13), // "setTxDataRate"
QT_MOC_LITERAL(25, 420, 10), // "setTxBytes"
QT_MOC_LITERAL(26, 431, 13), // "setTxFailures"
QT_MOC_LITERAL(27, 445, 12), // "setTxRetries"
QT_MOC_LITERAL(28, 458, 13), // "setRxDataRate"
QT_MOC_LITERAL(29, 472, 10), // "setRxBytes"
QT_MOC_LITERAL(30, 483, 13), // "setRxFailures"
QT_MOC_LITERAL(31, 497, 15), // "setRxSyncErrors"
QT_MOC_LITERAL(32, 513, 14), // "setRxCrcErrors"
QT_MOC_LITERAL(33, 528, 9), // "setStatus"
QT_MOC_LITERAL(34, 538, 17), // "emitNotifications"
QT_MOC_LITERAL(35, 556, 13), // "getTxDataRate"
QT_MOC_LITERAL(36, 570, 10), // "getTxBytes"
QT_MOC_LITERAL(37, 581, 13), // "getTxFailures"
QT_MOC_LITERAL(38, 595, 12), // "getTxRetries"
QT_MOC_LITERAL(39, 608, 13), // "getRxDataRate"
QT_MOC_LITERAL(40, 622, 10), // "getRxBytes"
QT_MOC_LITERAL(41, 633, 13), // "getRxFailures"
QT_MOC_LITERAL(42, 647, 15), // "getRxSyncErrors"
QT_MOC_LITERAL(43, 663, 14), // "getRxCrcErrors"
QT_MOC_LITERAL(44, 678, 9), // "getStatus"
QT_MOC_LITERAL(45, 688, 10), // "txDataRate"
QT_MOC_LITERAL(46, 699, 7), // "txBytes"
QT_MOC_LITERAL(47, 707, 10), // "txFailures"
QT_MOC_LITERAL(48, 718, 9), // "txRetries"
QT_MOC_LITERAL(49, 728, 10), // "rxDataRate"
QT_MOC_LITERAL(50, 739, 7), // "rxBytes"
QT_MOC_LITERAL(51, 747, 10), // "rxFailures"
QT_MOC_LITERAL(52, 758, 12), // "rxSyncErrors"
QT_MOC_LITERAL(53, 771, 11), // "rxCrcErrors"
QT_MOC_LITERAL(54, 783, 6), // "status"
QT_MOC_LITERAL(55, 790, 10), // "TxDataRate"
QT_MOC_LITERAL(56, 801, 7), // "TxBytes"
QT_MOC_LITERAL(57, 809, 10), // "TxFailures"
QT_MOC_LITERAL(58, 820, 9), // "TxRetries"
QT_MOC_LITERAL(59, 830, 10), // "RxDataRate"
QT_MOC_LITERAL(60, 841, 7), // "RxBytes"
QT_MOC_LITERAL(61, 849, 10), // "RxFailures"
QT_MOC_LITERAL(62, 860, 12), // "RxSyncErrors"
QT_MOC_LITERAL(63, 873, 11), // "RxCrcErrors"
QT_MOC_LITERAL(64, 885, 6) // "Status"

    },
    "FlightTelemetryStats\0txDataRateChanged\0"
    "\0value\0TxDataRateChanged\0txBytesChanged\0"
    "TxBytesChanged\0txFailuresChanged\0"
    "TxFailuresChanged\0txRetriesChanged\0"
    "TxRetriesChanged\0rxDataRateChanged\0"
    "RxDataRateChanged\0rxBytesChanged\0"
    "RxBytesChanged\0rxFailuresChanged\0"
    "RxFailuresChanged\0rxSyncErrorsChanged\0"
    "RxSyncErrorsChanged\0rxCrcErrorsChanged\0"
    "RxCrcErrorsChanged\0statusChanged\0"
    "FlightTelemetryStats_Status::Enum\0"
    "StatusChanged\0setTxDataRate\0setTxBytes\0"
    "setTxFailures\0setTxRetries\0setRxDataRate\0"
    "setRxBytes\0setRxFailures\0setRxSyncErrors\0"
    "setRxCrcErrors\0setStatus\0emitNotifications\0"
    "getTxDataRate\0getTxBytes\0getTxFailures\0"
    "getTxRetries\0getRxDataRate\0getRxBytes\0"
    "getRxFailures\0getRxSyncErrors\0"
    "getRxCrcErrors\0getStatus\0txDataRate\0"
    "txBytes\0txFailures\0txRetries\0rxDataRate\0"
    "rxBytes\0rxFailures\0rxSyncErrors\0"
    "rxCrcErrors\0status\0TxDataRate\0TxBytes\0"
    "TxFailures\0TxRetries\0RxDataRate\0RxBytes\0"
    "RxFailures\0RxSyncErrors\0RxCrcErrors\0"
    "Status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightTelemetryStats[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
      20,  328, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  224,    2, 0x06 /* Public */,
       4,    1,  227,    2, 0x06 /* Public */,
       5,    1,  230,    2, 0x06 /* Public */,
       6,    1,  233,    2, 0x06 /* Public */,
       7,    1,  236,    2, 0x06 /* Public */,
       8,    1,  239,    2, 0x06 /* Public */,
       9,    1,  242,    2, 0x06 /* Public */,
      10,    1,  245,    2, 0x06 /* Public */,
      11,    1,  248,    2, 0x06 /* Public */,
      12,    1,  251,    2, 0x06 /* Public */,
      13,    1,  254,    2, 0x06 /* Public */,
      14,    1,  257,    2, 0x06 /* Public */,
      15,    1,  260,    2, 0x06 /* Public */,
      16,    1,  263,    2, 0x06 /* Public */,
      17,    1,  266,    2, 0x06 /* Public */,
      18,    1,  269,    2, 0x06 /* Public */,
      19,    1,  272,    2, 0x06 /* Public */,
      20,    1,  275,    2, 0x06 /* Public */,
      21,    1,  278,    2, 0x06 /* Public */,
      23,    1,  281,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    1,  284,    2, 0x0a /* Public */,
      25,    1,  287,    2, 0x0a /* Public */,
      26,    1,  290,    2, 0x0a /* Public */,
      27,    1,  293,    2, 0x0a /* Public */,
      28,    1,  296,    2, 0x0a /* Public */,
      29,    1,  299,    2, 0x0a /* Public */,
      30,    1,  302,    2, 0x0a /* Public */,
      31,    1,  305,    2, 0x0a /* Public */,
      32,    1,  308,    2, 0x0a /* Public */,
      33,    1,  311,    2, 0x0a /* Public */,
      33,    1,  314,    2, 0x0a /* Public */,
      34,    0,  317,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      35,    0,  318,    2, 0x02 /* Public */,
      36,    0,  319,    2, 0x02 /* Public */,
      37,    0,  320,    2, 0x02 /* Public */,
      38,    0,  321,    2, 0x02 /* Public */,
      39,    0,  322,    2, 0x02 /* Public */,
      40,    0,  323,    2, 0x02 /* Public */,
      41,    0,  324,    2, 0x02 /* Public */,
      42,    0,  325,    2, 0x02 /* Public */,
      43,    0,  326,    2, 0x02 /* Public */,
      44,    0,  327,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 22,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 22,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::Float,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UChar,

 // properties: name, type, flags
      45, QMetaType::Float, 0x00495103,
      46, QMetaType::UInt, 0x00495103,
      47, QMetaType::UInt, 0x00495103,
      48, QMetaType::UInt, 0x00495103,
      49, QMetaType::Float, 0x00495103,
      50, QMetaType::UInt, 0x00495103,
      51, QMetaType::UInt, 0x00495103,
      52, QMetaType::UInt, 0x00495103,
      53, QMetaType::UInt, 0x00495103,
      54, 0x80000000 | 22, 0x0049510b,
      55, QMetaType::Float, 0x00495103,
      56, QMetaType::UInt, 0x00495103,
      57, QMetaType::UInt, 0x00495103,
      58, QMetaType::UInt, 0x00495103,
      59, QMetaType::Float, 0x00495103,
      60, QMetaType::UInt, 0x00495103,
      61, QMetaType::UInt, 0x00495103,
      62, QMetaType::UInt, 0x00495103,
      63, QMetaType::UInt, 0x00495103,
      64, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       8,
      10,
      12,
      14,
      16,
      18,
       1,
       3,
       5,
       7,
       9,
      11,
      13,
      15,
      17,
      19,

       0        // eod
};

void FlightTelemetryStats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightTelemetryStats *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->txDataRateChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->TxDataRateChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->txBytesChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 3: _t->TxBytesChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->txFailuresChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 5: _t->TxFailuresChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->txRetriesChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 7: _t->TxRetriesChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 8: _t->rxDataRateChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->RxDataRateChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->rxBytesChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 11: _t->RxBytesChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 12: _t->rxFailuresChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 13: _t->RxFailuresChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 14: _t->rxSyncErrorsChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 15: _t->RxSyncErrorsChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 16: _t->rxCrcErrorsChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 17: _t->RxCrcErrorsChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 18: _t->statusChanged((*reinterpret_cast< const FlightTelemetryStats_Status::Enum(*)>(_a[1]))); break;
        case 19: _t->StatusChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->setTxDataRate((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->setTxBytes((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 22: _t->setTxFailures((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 23: _t->setTxRetries((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 24: _t->setRxDataRate((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->setRxBytes((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 26: _t->setRxFailures((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 27: _t->setRxSyncErrors((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 28: _t->setRxCrcErrors((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 29: _t->setStatus((*reinterpret_cast< const FlightTelemetryStats_Status::Enum(*)>(_a[1]))); break;
        case 30: _t->setStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 31: _t->emitNotifications(); break;
        case 32: { float _r = _t->getTxDataRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 33: { quint32 _r = _t->getTxBytes();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 34: { quint32 _r = _t->getTxFailures();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 35: { quint32 _r = _t->getTxRetries();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 36: { float _r = _t->getRxDataRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 37: { quint32 _r = _t->getRxBytes();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 38: { quint32 _r = _t->getRxFailures();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 39: { quint32 _r = _t->getRxSyncErrors();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 40: { quint32 _r = _t->getRxCrcErrors();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 41: { quint8 _r = _t->getStatus();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightTelemetryStats::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::txDataRateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::TxDataRateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::txBytesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::TxBytesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::txFailuresChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::TxFailuresChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::txRetriesChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::TxRetriesChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::rxDataRateChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::RxDataRateChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::rxBytesChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::RxBytesChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::rxFailuresChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::RxFailuresChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::rxSyncErrorsChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::RxSyncErrorsChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::rxCrcErrorsChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::RxCrcErrorsChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(const FlightTelemetryStats_Status::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::statusChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (FlightTelemetryStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightTelemetryStats::StatusChanged)) {
                *result = 19;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FlightTelemetryStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->txDataRate(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->txBytes(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = _t->txFailures(); break;
        case 3: *reinterpret_cast< quint32*>(_v) = _t->txRetries(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->rxDataRate(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->rxBytes(); break;
        case 6: *reinterpret_cast< quint32*>(_v) = _t->rxFailures(); break;
        case 7: *reinterpret_cast< quint32*>(_v) = _t->rxSyncErrors(); break;
        case 8: *reinterpret_cast< quint32*>(_v) = _t->rxCrcErrors(); break;
        case 9: *reinterpret_cast< FlightTelemetryStats_Status::Enum*>(_v) = _t->status(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getTxDataRate(); break;
        case 11: *reinterpret_cast< quint32*>(_v) = _t->getTxBytes(); break;
        case 12: *reinterpret_cast< quint32*>(_v) = _t->getTxFailures(); break;
        case 13: *reinterpret_cast< quint32*>(_v) = _t->getTxRetries(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getRxDataRate(); break;
        case 15: *reinterpret_cast< quint32*>(_v) = _t->getRxBytes(); break;
        case 16: *reinterpret_cast< quint32*>(_v) = _t->getRxFailures(); break;
        case 17: *reinterpret_cast< quint32*>(_v) = _t->getRxSyncErrors(); break;
        case 18: *reinterpret_cast< quint32*>(_v) = _t->getRxCrcErrors(); break;
        case 19: *reinterpret_cast< quint8*>(_v) = _t->getStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FlightTelemetryStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTxDataRate(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setTxBytes(*reinterpret_cast< quint32*>(_v)); break;
        case 2: _t->setTxFailures(*reinterpret_cast< quint32*>(_v)); break;
        case 3: _t->setTxRetries(*reinterpret_cast< quint32*>(_v)); break;
        case 4: _t->setRxDataRate(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setRxBytes(*reinterpret_cast< quint32*>(_v)); break;
        case 6: _t->setRxFailures(*reinterpret_cast< quint32*>(_v)); break;
        case 7: _t->setRxSyncErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 8: _t->setRxCrcErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 9: _t->setStatus(*reinterpret_cast< FlightTelemetryStats_Status::Enum*>(_v)); break;
        case 10: _t->setTxDataRate(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setTxBytes(*reinterpret_cast< quint32*>(_v)); break;
        case 12: _t->setTxFailures(*reinterpret_cast< quint32*>(_v)); break;
        case 13: _t->setTxRetries(*reinterpret_cast< quint32*>(_v)); break;
        case 14: _t->setRxDataRate(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setRxBytes(*reinterpret_cast< quint32*>(_v)); break;
        case 16: _t->setRxFailures(*reinterpret_cast< quint32*>(_v)); break;
        case 17: _t->setRxSyncErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 18: _t->setRxCrcErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 19: _t->setStatus(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_FlightTelemetryStats[] = {
        &FlightTelemetryStats_Status::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject FlightTelemetryStats::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_FlightTelemetryStats.data,
    qt_meta_data_FlightTelemetryStats,
    qt_static_metacall,
    qt_meta_extradata_FlightTelemetryStats,
    nullptr
} };


const QMetaObject *FlightTelemetryStats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightTelemetryStats::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightTelemetryStats.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int FlightTelemetryStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 42;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 20;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FlightTelemetryStats::txDataRateChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlightTelemetryStats::TxDataRateChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FlightTelemetryStats::txBytesChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FlightTelemetryStats::TxBytesChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FlightTelemetryStats::txFailuresChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FlightTelemetryStats::TxFailuresChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FlightTelemetryStats::txRetriesChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FlightTelemetryStats::TxRetriesChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FlightTelemetryStats::rxDataRateChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FlightTelemetryStats::RxDataRateChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FlightTelemetryStats::rxBytesChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FlightTelemetryStats::RxBytesChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FlightTelemetryStats::rxFailuresChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FlightTelemetryStats::RxFailuresChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void FlightTelemetryStats::rxSyncErrorsChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void FlightTelemetryStats::RxSyncErrorsChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void FlightTelemetryStats::rxCrcErrorsChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void FlightTelemetryStats::RxCrcErrorsChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void FlightTelemetryStats::statusChanged(const FlightTelemetryStats_Status::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void FlightTelemetryStats::StatusChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
