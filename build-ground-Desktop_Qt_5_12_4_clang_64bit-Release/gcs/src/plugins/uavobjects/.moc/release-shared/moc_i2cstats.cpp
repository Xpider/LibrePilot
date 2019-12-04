/****************************************************************************
** Meta object code from reading C++ file 'i2cstats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../i2cstats.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'i2cstats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_I2CStatsConstants_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_I2CStatsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_I2CStatsConstants_t qt_meta_stringdata_I2CStatsConstants = {
    {
QT_MOC_LITERAL(0, 0, 17), // "I2CStatsConstants"
QT_MOC_LITERAL(1, 18, 4), // "Enum"
QT_MOC_LITERAL(2, 23, 18), // "LastErrorTypeCount"
QT_MOC_LITERAL(3, 42, 13), // "EventLogCount"
QT_MOC_LITERAL(4, 56, 13) // "StateLogCount"

    },
    "I2CStatsConstants\0Enum\0LastErrorTypeCount\0"
    "EventLogCount\0StateLogCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_I2CStatsConstants[] = {

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
       2, uint(I2CStatsConstants::LastErrorTypeCount),
       3, uint(I2CStatsConstants::EventLogCount),
       4, uint(I2CStatsConstants::StateLogCount),

       0        // eod
};

void I2CStatsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject I2CStatsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_I2CStatsConstants.data,
    qt_meta_data_I2CStatsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *I2CStatsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *I2CStatsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_I2CStatsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int I2CStatsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_I2CStats_LastErrorType_t {
    QByteArrayData data[5];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_I2CStats_LastErrorType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_I2CStats_LastErrorType_t qt_meta_stringdata_I2CStats_LastErrorType = {
    {
QT_MOC_LITERAL(0, 0, 22), // "I2CStats_LastErrorType"
QT_MOC_LITERAL(1, 23, 4), // "Enum"
QT_MOC_LITERAL(2, 28, 5), // "EVENT"
QT_MOC_LITERAL(3, 34, 3), // "FSM"
QT_MOC_LITERAL(4, 38, 9) // "INTERRUPT"

    },
    "I2CStats_LastErrorType\0Enum\0EVENT\0FSM\0"
    "INTERRUPT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_I2CStats_LastErrorType[] = {

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
       2, uint(I2CStats_LastErrorType::EVENT),
       3, uint(I2CStats_LastErrorType::FSM),
       4, uint(I2CStats_LastErrorType::INTERRUPT),

       0        // eod
};

void I2CStats_LastErrorType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject I2CStats_LastErrorType::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_I2CStats_LastErrorType.data,
    qt_meta_data_I2CStats_LastErrorType,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *I2CStats_LastErrorType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *I2CStats_LastErrorType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_I2CStats_LastErrorType.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int I2CStats_LastErrorType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_I2CStats_EventLog_t {
    QByteArrayData data[19];
    char stringdata0[485];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_I2CStats_EventLog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_I2CStats_EventLog_t qt_meta_stringdata_I2CStats_EventLog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "I2CStats_EventLog"
QT_MOC_LITERAL(1, 18, 4), // "Enum"
QT_MOC_LITERAL(2, 23, 19), // "I2C_EVENT_BUS_ERROR"
QT_MOC_LITERAL(3, 43, 15), // "I2C_EVENT_START"
QT_MOC_LITERAL(4, 59, 31), // "I2C_EVENT_STARTED_MORE_TXN_READ"
QT_MOC_LITERAL(5, 91, 32), // "I2C_EVENT_STARTED_MORE_TXN_WRITE"
QT_MOC_LITERAL(6, 124, 31), // "I2C_EVENT_STARTED_LAST_TXN_READ"
QT_MOC_LITERAL(7, 156, 32), // "I2C_EVENT_STARTED_LAST_TXN_WRITE"
QT_MOC_LITERAL(8, 189, 28), // "I2C_EVENT_ADDR_SENT_LEN_EQ_0"
QT_MOC_LITERAL(9, 218, 28), // "I2C_EVENT_ADDR_SENT_LEN_EQ_1"
QT_MOC_LITERAL(10, 247, 28), // "I2C_EVENT_ADDR_SENT_LEN_EQ_2"
QT_MOC_LITERAL(11, 276, 28), // "I2C_EVENT_ADDR_SENT_LEN_GT_2"
QT_MOC_LITERAL(12, 305, 32), // "I2C_EVENT_TRANSFER_DONE_LEN_EQ_0"
QT_MOC_LITERAL(13, 338, 32), // "I2C_EVENT_TRANSFER_DONE_LEN_EQ_1"
QT_MOC_LITERAL(14, 371, 32), // "I2C_EVENT_TRANSFER_DONE_LEN_EQ_2"
QT_MOC_LITERAL(15, 404, 32), // "I2C_EVENT_TRANSFER_DONE_LEN_GT_2"
QT_MOC_LITERAL(16, 437, 14), // "I2C_EVENT_NACK"
QT_MOC_LITERAL(17, 452, 17), // "I2C_EVENT_STOPPED"
QT_MOC_LITERAL(18, 470, 14) // "I2C_EVENT_AUTO"

    },
    "I2CStats_EventLog\0Enum\0I2C_EVENT_BUS_ERROR\0"
    "I2C_EVENT_START\0I2C_EVENT_STARTED_MORE_TXN_READ\0"
    "I2C_EVENT_STARTED_MORE_TXN_WRITE\0"
    "I2C_EVENT_STARTED_LAST_TXN_READ\0"
    "I2C_EVENT_STARTED_LAST_TXN_WRITE\0"
    "I2C_EVENT_ADDR_SENT_LEN_EQ_0\0"
    "I2C_EVENT_ADDR_SENT_LEN_EQ_1\0"
    "I2C_EVENT_ADDR_SENT_LEN_EQ_2\0"
    "I2C_EVENT_ADDR_SENT_LEN_GT_2\0"
    "I2C_EVENT_TRANSFER_DONE_LEN_EQ_0\0"
    "I2C_EVENT_TRANSFER_DONE_LEN_EQ_1\0"
    "I2C_EVENT_TRANSFER_DONE_LEN_EQ_2\0"
    "I2C_EVENT_TRANSFER_DONE_LEN_GT_2\0"
    "I2C_EVENT_NACK\0I2C_EVENT_STOPPED\0"
    "I2C_EVENT_AUTO"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_I2CStats_EventLog[] = {

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
       1,    1, 0x0,   17,   19,

 // enum data: key, value
       2, uint(I2CStats_EventLog::I2C_EVENT_BUS_ERROR),
       3, uint(I2CStats_EventLog::I2C_EVENT_START),
       4, uint(I2CStats_EventLog::I2C_EVENT_STARTED_MORE_TXN_READ),
       5, uint(I2CStats_EventLog::I2C_EVENT_STARTED_MORE_TXN_WRITE),
       6, uint(I2CStats_EventLog::I2C_EVENT_STARTED_LAST_TXN_READ),
       7, uint(I2CStats_EventLog::I2C_EVENT_STARTED_LAST_TXN_WRITE),
       8, uint(I2CStats_EventLog::I2C_EVENT_ADDR_SENT_LEN_EQ_0),
       9, uint(I2CStats_EventLog::I2C_EVENT_ADDR_SENT_LEN_EQ_1),
      10, uint(I2CStats_EventLog::I2C_EVENT_ADDR_SENT_LEN_EQ_2),
      11, uint(I2CStats_EventLog::I2C_EVENT_ADDR_SENT_LEN_GT_2),
      12, uint(I2CStats_EventLog::I2C_EVENT_TRANSFER_DONE_LEN_EQ_0),
      13, uint(I2CStats_EventLog::I2C_EVENT_TRANSFER_DONE_LEN_EQ_1),
      14, uint(I2CStats_EventLog::I2C_EVENT_TRANSFER_DONE_LEN_EQ_2),
      15, uint(I2CStats_EventLog::I2C_EVENT_TRANSFER_DONE_LEN_GT_2),
      16, uint(I2CStats_EventLog::I2C_EVENT_NACK),
      17, uint(I2CStats_EventLog::I2C_EVENT_STOPPED),
      18, uint(I2CStats_EventLog::I2C_EVENT_AUTO),

       0        // eod
};

void I2CStats_EventLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject I2CStats_EventLog::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_I2CStats_EventLog.data,
    qt_meta_data_I2CStats_EventLog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *I2CStats_EventLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *I2CStats_EventLog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_I2CStats_EventLog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int I2CStats_EventLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_I2CStats_StateLog_t {
    QByteArrayData data[26];
    char stringdata0[638];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_I2CStats_StateLog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_I2CStats_StateLog_t qt_meta_stringdata_I2CStats_StateLog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "I2CStats_StateLog"
QT_MOC_LITERAL(1, 18, 4), // "Enum"
QT_MOC_LITERAL(2, 23, 19), // "I2C_STATE_FSM_FAULT"
QT_MOC_LITERAL(3, 43, 19), // "I2C_STATE_BUS_ERROR"
QT_MOC_LITERAL(4, 63, 17), // "I2C_STATE_STOPPED"
QT_MOC_LITERAL(5, 81, 18), // "I2C_STATE_STOPPING"
QT_MOC_LITERAL(6, 100, 18), // "I2C_STATE_STARTING"
QT_MOC_LITERAL(7, 119, 25), // "I2C_STATE_R_MORE_TXN_ADDR"
QT_MOC_LITERAL(8, 145, 28), // "I2C_STATE_R_MORE_TXN_PRE_ONE"
QT_MOC_LITERAL(9, 174, 30), // "I2C_STATE_R_MORE_TXN_PRE_FIRST"
QT_MOC_LITERAL(10, 205, 31), // "I2C_STATE_R_MORE_TXN_PRE_MIDDLE"
QT_MOC_LITERAL(11, 237, 25), // "I2C_STATE_R_MORE_TXN_LAST"
QT_MOC_LITERAL(12, 263, 30), // "I2C_STATE_R_MORE_TXN_POST_LAST"
QT_MOC_LITERAL(13, 294, 15), // "R_LAST_TXN_ADDR"
QT_MOC_LITERAL(14, 310, 28), // "I2C_STATE_R_LAST_TXN_PRE_ONE"
QT_MOC_LITERAL(15, 339, 30), // "I2C_STATE_R_LAST_TXN_PRE_FIRST"
QT_MOC_LITERAL(16, 370, 31), // "I2C_STATE_R_LAST_TXN_PRE_MIDDLE"
QT_MOC_LITERAL(17, 402, 29), // "I2C_STATE_R_LAST_TXN_PRE_LAST"
QT_MOC_LITERAL(18, 432, 30), // "I2C_STATE_R_LAST_TXN_POST_LAST"
QT_MOC_LITERAL(19, 463, 25), // "I2C_STATE_W_MORE_TXN_ADDR"
QT_MOC_LITERAL(20, 489, 27), // "I2C_STATE_W_MORE_TXN_MIDDLE"
QT_MOC_LITERAL(21, 517, 25), // "I2C_STATE_W_MORE_TXN_LAST"
QT_MOC_LITERAL(22, 543, 25), // "I2C_STATE_W_LAST_TXN_ADDR"
QT_MOC_LITERAL(23, 569, 27), // "I2C_STATE_W_LAST_TXN_MIDDLE"
QT_MOC_LITERAL(24, 597, 25), // "I2C_STATE_W_LAST_TXN_LAST"
QT_MOC_LITERAL(25, 623, 14) // "I2C_STATE_NACK"

    },
    "I2CStats_StateLog\0Enum\0I2C_STATE_FSM_FAULT\0"
    "I2C_STATE_BUS_ERROR\0I2C_STATE_STOPPED\0"
    "I2C_STATE_STOPPING\0I2C_STATE_STARTING\0"
    "I2C_STATE_R_MORE_TXN_ADDR\0"
    "I2C_STATE_R_MORE_TXN_PRE_ONE\0"
    "I2C_STATE_R_MORE_TXN_PRE_FIRST\0"
    "I2C_STATE_R_MORE_TXN_PRE_MIDDLE\0"
    "I2C_STATE_R_MORE_TXN_LAST\0"
    "I2C_STATE_R_MORE_TXN_POST_LAST\0"
    "R_LAST_TXN_ADDR\0I2C_STATE_R_LAST_TXN_PRE_ONE\0"
    "I2C_STATE_R_LAST_TXN_PRE_FIRST\0"
    "I2C_STATE_R_LAST_TXN_PRE_MIDDLE\0"
    "I2C_STATE_R_LAST_TXN_PRE_LAST\0"
    "I2C_STATE_R_LAST_TXN_POST_LAST\0"
    "I2C_STATE_W_MORE_TXN_ADDR\0"
    "I2C_STATE_W_MORE_TXN_MIDDLE\0"
    "I2C_STATE_W_MORE_TXN_LAST\0"
    "I2C_STATE_W_LAST_TXN_ADDR\0"
    "I2C_STATE_W_LAST_TXN_MIDDLE\0"
    "I2C_STATE_W_LAST_TXN_LAST\0I2C_STATE_NACK"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_I2CStats_StateLog[] = {

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
       1,    1, 0x0,   24,   19,

 // enum data: key, value
       2, uint(I2CStats_StateLog::I2C_STATE_FSM_FAULT),
       3, uint(I2CStats_StateLog::I2C_STATE_BUS_ERROR),
       4, uint(I2CStats_StateLog::I2C_STATE_STOPPED),
       5, uint(I2CStats_StateLog::I2C_STATE_STOPPING),
       6, uint(I2CStats_StateLog::I2C_STATE_STARTING),
       7, uint(I2CStats_StateLog::I2C_STATE_R_MORE_TXN_ADDR),
       8, uint(I2CStats_StateLog::I2C_STATE_R_MORE_TXN_PRE_ONE),
       9, uint(I2CStats_StateLog::I2C_STATE_R_MORE_TXN_PRE_FIRST),
      10, uint(I2CStats_StateLog::I2C_STATE_R_MORE_TXN_PRE_MIDDLE),
      11, uint(I2CStats_StateLog::I2C_STATE_R_MORE_TXN_LAST),
      12, uint(I2CStats_StateLog::I2C_STATE_R_MORE_TXN_POST_LAST),
      13, uint(I2CStats_StateLog::R_LAST_TXN_ADDR),
      14, uint(I2CStats_StateLog::I2C_STATE_R_LAST_TXN_PRE_ONE),
      15, uint(I2CStats_StateLog::I2C_STATE_R_LAST_TXN_PRE_FIRST),
      16, uint(I2CStats_StateLog::I2C_STATE_R_LAST_TXN_PRE_MIDDLE),
      17, uint(I2CStats_StateLog::I2C_STATE_R_LAST_TXN_PRE_LAST),
      18, uint(I2CStats_StateLog::I2C_STATE_R_LAST_TXN_POST_LAST),
      19, uint(I2CStats_StateLog::I2C_STATE_W_MORE_TXN_ADDR),
      20, uint(I2CStats_StateLog::I2C_STATE_W_MORE_TXN_MIDDLE),
      21, uint(I2CStats_StateLog::I2C_STATE_W_MORE_TXN_LAST),
      22, uint(I2CStats_StateLog::I2C_STATE_W_LAST_TXN_ADDR),
      23, uint(I2CStats_StateLog::I2C_STATE_W_LAST_TXN_MIDDLE),
      24, uint(I2CStats_StateLog::I2C_STATE_W_LAST_TXN_LAST),
      25, uint(I2CStats_StateLog::I2C_STATE_NACK),

       0        // eod
};

void I2CStats_StateLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject I2CStats_StateLog::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_I2CStats_StateLog.data,
    qt_meta_data_I2CStats_StateLog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *I2CStats_StateLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *I2CStats_StateLog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_I2CStats_StateLog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int I2CStats_StateLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_I2CStats_t {
    QByteArrayData data[210];
    char stringdata0[2998];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_I2CStats_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_I2CStats_t qt_meta_stringdata_I2CStats = {
    {
QT_MOC_LITERAL(0, 0, 8), // "I2CStats"
QT_MOC_LITERAL(1, 9, 15), // "evirqLogChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "index"
QT_MOC_LITERAL(4, 32, 5), // "value"
QT_MOC_LITERAL(5, 38, 16), // "evirq_logChanged"
QT_MOC_LITERAL(6, 55, 16), // "evirqLog0Changed"
QT_MOC_LITERAL(7, 72, 18), // "evirq_log_0Changed"
QT_MOC_LITERAL(8, 91, 16), // "evirqLog1Changed"
QT_MOC_LITERAL(9, 108, 18), // "evirq_log_1Changed"
QT_MOC_LITERAL(10, 127, 16), // "evirqLog2Changed"
QT_MOC_LITERAL(11, 144, 18), // "evirq_log_2Changed"
QT_MOC_LITERAL(12, 163, 16), // "evirqLog3Changed"
QT_MOC_LITERAL(13, 180, 18), // "evirq_log_3Changed"
QT_MOC_LITERAL(14, 199, 16), // "evirqLog4Changed"
QT_MOC_LITERAL(15, 216, 18), // "evirq_log_4Changed"
QT_MOC_LITERAL(16, 235, 15), // "erirqLogChanged"
QT_MOC_LITERAL(17, 251, 16), // "erirq_logChanged"
QT_MOC_LITERAL(18, 268, 16), // "erirqLog0Changed"
QT_MOC_LITERAL(19, 285, 18), // "erirq_log_0Changed"
QT_MOC_LITERAL(20, 304, 16), // "erirqLog1Changed"
QT_MOC_LITERAL(21, 321, 18), // "erirq_log_1Changed"
QT_MOC_LITERAL(22, 340, 16), // "erirqLog2Changed"
QT_MOC_LITERAL(23, 357, 18), // "erirq_log_2Changed"
QT_MOC_LITERAL(24, 376, 16), // "erirqLog3Changed"
QT_MOC_LITERAL(25, 393, 18), // "erirq_log_3Changed"
QT_MOC_LITERAL(26, 412, 16), // "erirqLog4Changed"
QT_MOC_LITERAL(27, 429, 18), // "erirq_log_4Changed"
QT_MOC_LITERAL(28, 448, 18), // "eventErrorsChanged"
QT_MOC_LITERAL(29, 467, 19), // "event_errorsChanged"
QT_MOC_LITERAL(30, 487, 16), // "fsmErrorsChanged"
QT_MOC_LITERAL(31, 504, 17), // "fsm_errorsChanged"
QT_MOC_LITERAL(32, 522, 16), // "irqErrorsChanged"
QT_MOC_LITERAL(33, 539, 17), // "irq_errorsChanged"
QT_MOC_LITERAL(34, 557, 12), // "nacksChanged"
QT_MOC_LITERAL(35, 570, 15), // "timeoutsChanged"
QT_MOC_LITERAL(36, 586, 20), // "lastErrorTypeChanged"
QT_MOC_LITERAL(37, 607, 28), // "I2CStats_LastErrorType::Enum"
QT_MOC_LITERAL(38, 636, 22), // "last_error_typeChanged"
QT_MOC_LITERAL(39, 659, 15), // "eventLogChanged"
QT_MOC_LITERAL(40, 675, 23), // "I2CStats_EventLog::Enum"
QT_MOC_LITERAL(41, 699, 16), // "event_logChanged"
QT_MOC_LITERAL(42, 716, 16), // "eventLog0Changed"
QT_MOC_LITERAL(43, 733, 18), // "event_log_0Changed"
QT_MOC_LITERAL(44, 752, 16), // "eventLog1Changed"
QT_MOC_LITERAL(45, 769, 18), // "event_log_1Changed"
QT_MOC_LITERAL(46, 788, 16), // "eventLog2Changed"
QT_MOC_LITERAL(47, 805, 18), // "event_log_2Changed"
QT_MOC_LITERAL(48, 824, 16), // "eventLog3Changed"
QT_MOC_LITERAL(49, 841, 18), // "event_log_3Changed"
QT_MOC_LITERAL(50, 860, 16), // "eventLog4Changed"
QT_MOC_LITERAL(51, 877, 18), // "event_log_4Changed"
QT_MOC_LITERAL(52, 896, 15), // "stateLogChanged"
QT_MOC_LITERAL(53, 912, 23), // "I2CStats_StateLog::Enum"
QT_MOC_LITERAL(54, 936, 16), // "state_logChanged"
QT_MOC_LITERAL(55, 953, 16), // "stateLog0Changed"
QT_MOC_LITERAL(56, 970, 18), // "state_log_0Changed"
QT_MOC_LITERAL(57, 989, 16), // "stateLog1Changed"
QT_MOC_LITERAL(58, 1006, 18), // "state_log_1Changed"
QT_MOC_LITERAL(59, 1025, 16), // "stateLog2Changed"
QT_MOC_LITERAL(60, 1042, 18), // "state_log_2Changed"
QT_MOC_LITERAL(61, 1061, 16), // "stateLog3Changed"
QT_MOC_LITERAL(62, 1078, 18), // "state_log_3Changed"
QT_MOC_LITERAL(63, 1097, 16), // "stateLog4Changed"
QT_MOC_LITERAL(64, 1114, 18), // "state_log_4Changed"
QT_MOC_LITERAL(65, 1133, 11), // "setEvirqLog"
QT_MOC_LITERAL(66, 1145, 12), // "setevirq_log"
QT_MOC_LITERAL(67, 1158, 12), // "setEvirqLog0"
QT_MOC_LITERAL(68, 1171, 14), // "setevirq_log_0"
QT_MOC_LITERAL(69, 1186, 12), // "setEvirqLog1"
QT_MOC_LITERAL(70, 1199, 14), // "setevirq_log_1"
QT_MOC_LITERAL(71, 1214, 12), // "setEvirqLog2"
QT_MOC_LITERAL(72, 1227, 14), // "setevirq_log_2"
QT_MOC_LITERAL(73, 1242, 12), // "setEvirqLog3"
QT_MOC_LITERAL(74, 1255, 14), // "setevirq_log_3"
QT_MOC_LITERAL(75, 1270, 12), // "setEvirqLog4"
QT_MOC_LITERAL(76, 1283, 14), // "setevirq_log_4"
QT_MOC_LITERAL(77, 1298, 11), // "setErirqLog"
QT_MOC_LITERAL(78, 1310, 12), // "seterirq_log"
QT_MOC_LITERAL(79, 1323, 12), // "setErirqLog0"
QT_MOC_LITERAL(80, 1336, 14), // "seterirq_log_0"
QT_MOC_LITERAL(81, 1351, 12), // "setErirqLog1"
QT_MOC_LITERAL(82, 1364, 14), // "seterirq_log_1"
QT_MOC_LITERAL(83, 1379, 12), // "setErirqLog2"
QT_MOC_LITERAL(84, 1392, 14), // "seterirq_log_2"
QT_MOC_LITERAL(85, 1407, 12), // "setErirqLog3"
QT_MOC_LITERAL(86, 1420, 14), // "seterirq_log_3"
QT_MOC_LITERAL(87, 1435, 12), // "setErirqLog4"
QT_MOC_LITERAL(88, 1448, 14), // "seterirq_log_4"
QT_MOC_LITERAL(89, 1463, 14), // "setEventErrors"
QT_MOC_LITERAL(90, 1478, 15), // "setevent_errors"
QT_MOC_LITERAL(91, 1494, 12), // "setFsmErrors"
QT_MOC_LITERAL(92, 1507, 13), // "setfsm_errors"
QT_MOC_LITERAL(93, 1521, 12), // "setIrqErrors"
QT_MOC_LITERAL(94, 1534, 13), // "setirq_errors"
QT_MOC_LITERAL(95, 1548, 8), // "setNacks"
QT_MOC_LITERAL(96, 1557, 8), // "setnacks"
QT_MOC_LITERAL(97, 1566, 11), // "setTimeouts"
QT_MOC_LITERAL(98, 1578, 11), // "settimeouts"
QT_MOC_LITERAL(99, 1590, 16), // "setLastErrorType"
QT_MOC_LITERAL(100, 1607, 18), // "setlast_error_type"
QT_MOC_LITERAL(101, 1626, 11), // "setEventLog"
QT_MOC_LITERAL(102, 1638, 12), // "setevent_log"
QT_MOC_LITERAL(103, 1651, 12), // "setEventLog0"
QT_MOC_LITERAL(104, 1664, 14), // "setevent_log_0"
QT_MOC_LITERAL(105, 1679, 12), // "setEventLog1"
QT_MOC_LITERAL(106, 1692, 14), // "setevent_log_1"
QT_MOC_LITERAL(107, 1707, 12), // "setEventLog2"
QT_MOC_LITERAL(108, 1720, 14), // "setevent_log_2"
QT_MOC_LITERAL(109, 1735, 12), // "setEventLog3"
QT_MOC_LITERAL(110, 1748, 14), // "setevent_log_3"
QT_MOC_LITERAL(111, 1763, 12), // "setEventLog4"
QT_MOC_LITERAL(112, 1776, 14), // "setevent_log_4"
QT_MOC_LITERAL(113, 1791, 11), // "setStateLog"
QT_MOC_LITERAL(114, 1803, 12), // "setstate_log"
QT_MOC_LITERAL(115, 1816, 12), // "setStateLog0"
QT_MOC_LITERAL(116, 1829, 14), // "setstate_log_0"
QT_MOC_LITERAL(117, 1844, 12), // "setStateLog1"
QT_MOC_LITERAL(118, 1857, 14), // "setstate_log_1"
QT_MOC_LITERAL(119, 1872, 12), // "setStateLog2"
QT_MOC_LITERAL(120, 1885, 14), // "setstate_log_2"
QT_MOC_LITERAL(121, 1900, 12), // "setStateLog3"
QT_MOC_LITERAL(122, 1913, 14), // "setstate_log_3"
QT_MOC_LITERAL(123, 1928, 12), // "setStateLog4"
QT_MOC_LITERAL(124, 1941, 14), // "setstate_log_4"
QT_MOC_LITERAL(125, 1956, 17), // "emitNotifications"
QT_MOC_LITERAL(126, 1974, 8), // "evirqLog"
QT_MOC_LITERAL(127, 1983, 12), // "getevirq_log"
QT_MOC_LITERAL(128, 1996, 14), // "getevirq_log_0"
QT_MOC_LITERAL(129, 2011, 14), // "getevirq_log_1"
QT_MOC_LITERAL(130, 2026, 14), // "getevirq_log_2"
QT_MOC_LITERAL(131, 2041, 14), // "getevirq_log_3"
QT_MOC_LITERAL(132, 2056, 14), // "getevirq_log_4"
QT_MOC_LITERAL(133, 2071, 8), // "erirqLog"
QT_MOC_LITERAL(134, 2080, 12), // "geterirq_log"
QT_MOC_LITERAL(135, 2093, 14), // "geterirq_log_0"
QT_MOC_LITERAL(136, 2108, 14), // "geterirq_log_1"
QT_MOC_LITERAL(137, 2123, 14), // "geterirq_log_2"
QT_MOC_LITERAL(138, 2138, 14), // "geterirq_log_3"
QT_MOC_LITERAL(139, 2153, 14), // "geterirq_log_4"
QT_MOC_LITERAL(140, 2168, 15), // "getevent_errors"
QT_MOC_LITERAL(141, 2184, 13), // "getfsm_errors"
QT_MOC_LITERAL(142, 2198, 13), // "getirq_errors"
QT_MOC_LITERAL(143, 2212, 8), // "getnacks"
QT_MOC_LITERAL(144, 2221, 11), // "gettimeouts"
QT_MOC_LITERAL(145, 2233, 18), // "getlast_error_type"
QT_MOC_LITERAL(146, 2252, 8), // "eventLog"
QT_MOC_LITERAL(147, 2261, 12), // "getevent_log"
QT_MOC_LITERAL(148, 2274, 14), // "getevent_log_0"
QT_MOC_LITERAL(149, 2289, 14), // "getevent_log_1"
QT_MOC_LITERAL(150, 2304, 14), // "getevent_log_2"
QT_MOC_LITERAL(151, 2319, 14), // "getevent_log_3"
QT_MOC_LITERAL(152, 2334, 14), // "getevent_log_4"
QT_MOC_LITERAL(153, 2349, 8), // "stateLog"
QT_MOC_LITERAL(154, 2358, 12), // "getstate_log"
QT_MOC_LITERAL(155, 2371, 14), // "getstate_log_0"
QT_MOC_LITERAL(156, 2386, 14), // "getstate_log_1"
QT_MOC_LITERAL(157, 2401, 14), // "getstate_log_2"
QT_MOC_LITERAL(158, 2416, 14), // "getstate_log_3"
QT_MOC_LITERAL(159, 2431, 14), // "getstate_log_4"
QT_MOC_LITERAL(160, 2446, 9), // "evirqLog0"
QT_MOC_LITERAL(161, 2456, 9), // "evirqLog1"
QT_MOC_LITERAL(162, 2466, 9), // "evirqLog2"
QT_MOC_LITERAL(163, 2476, 9), // "evirqLog3"
QT_MOC_LITERAL(164, 2486, 9), // "evirqLog4"
QT_MOC_LITERAL(165, 2496, 9), // "erirqLog0"
QT_MOC_LITERAL(166, 2506, 9), // "erirqLog1"
QT_MOC_LITERAL(167, 2516, 9), // "erirqLog2"
QT_MOC_LITERAL(168, 2526, 9), // "erirqLog3"
QT_MOC_LITERAL(169, 2536, 9), // "erirqLog4"
QT_MOC_LITERAL(170, 2546, 11), // "eventErrors"
QT_MOC_LITERAL(171, 2558, 9), // "fsmErrors"
QT_MOC_LITERAL(172, 2568, 9), // "irqErrors"
QT_MOC_LITERAL(173, 2578, 5), // "nacks"
QT_MOC_LITERAL(174, 2584, 8), // "timeouts"
QT_MOC_LITERAL(175, 2593, 13), // "lastErrorType"
QT_MOC_LITERAL(176, 2607, 9), // "eventLog0"
QT_MOC_LITERAL(177, 2617, 9), // "eventLog1"
QT_MOC_LITERAL(178, 2627, 9), // "eventLog2"
QT_MOC_LITERAL(179, 2637, 9), // "eventLog3"
QT_MOC_LITERAL(180, 2647, 9), // "eventLog4"
QT_MOC_LITERAL(181, 2657, 9), // "stateLog0"
QT_MOC_LITERAL(182, 2667, 9), // "stateLog1"
QT_MOC_LITERAL(183, 2677, 9), // "stateLog2"
QT_MOC_LITERAL(184, 2687, 9), // "stateLog3"
QT_MOC_LITERAL(185, 2697, 9), // "stateLog4"
QT_MOC_LITERAL(186, 2707, 11), // "evirq_log_0"
QT_MOC_LITERAL(187, 2719, 11), // "evirq_log_1"
QT_MOC_LITERAL(188, 2731, 11), // "evirq_log_2"
QT_MOC_LITERAL(189, 2743, 11), // "evirq_log_3"
QT_MOC_LITERAL(190, 2755, 11), // "evirq_log_4"
QT_MOC_LITERAL(191, 2767, 11), // "erirq_log_0"
QT_MOC_LITERAL(192, 2779, 11), // "erirq_log_1"
QT_MOC_LITERAL(193, 2791, 11), // "erirq_log_2"
QT_MOC_LITERAL(194, 2803, 11), // "erirq_log_3"
QT_MOC_LITERAL(195, 2815, 11), // "erirq_log_4"
QT_MOC_LITERAL(196, 2827, 12), // "event_errors"
QT_MOC_LITERAL(197, 2840, 10), // "fsm_errors"
QT_MOC_LITERAL(198, 2851, 10), // "irq_errors"
QT_MOC_LITERAL(199, 2862, 15), // "last_error_type"
QT_MOC_LITERAL(200, 2878, 11), // "event_log_0"
QT_MOC_LITERAL(201, 2890, 11), // "event_log_1"
QT_MOC_LITERAL(202, 2902, 11), // "event_log_2"
QT_MOC_LITERAL(203, 2914, 11), // "event_log_3"
QT_MOC_LITERAL(204, 2926, 11), // "event_log_4"
QT_MOC_LITERAL(205, 2938, 11), // "state_log_0"
QT_MOC_LITERAL(206, 2950, 11), // "state_log_1"
QT_MOC_LITERAL(207, 2962, 11), // "state_log_2"
QT_MOC_LITERAL(208, 2974, 11), // "state_log_3"
QT_MOC_LITERAL(209, 2986, 11) // "state_log_4"

    },
    "I2CStats\0evirqLogChanged\0\0index\0value\0"
    "evirq_logChanged\0evirqLog0Changed\0"
    "evirq_log_0Changed\0evirqLog1Changed\0"
    "evirq_log_1Changed\0evirqLog2Changed\0"
    "evirq_log_2Changed\0evirqLog3Changed\0"
    "evirq_log_3Changed\0evirqLog4Changed\0"
    "evirq_log_4Changed\0erirqLogChanged\0"
    "erirq_logChanged\0erirqLog0Changed\0"
    "erirq_log_0Changed\0erirqLog1Changed\0"
    "erirq_log_1Changed\0erirqLog2Changed\0"
    "erirq_log_2Changed\0erirqLog3Changed\0"
    "erirq_log_3Changed\0erirqLog4Changed\0"
    "erirq_log_4Changed\0eventErrorsChanged\0"
    "event_errorsChanged\0fsmErrorsChanged\0"
    "fsm_errorsChanged\0irqErrorsChanged\0"
    "irq_errorsChanged\0nacksChanged\0"
    "timeoutsChanged\0lastErrorTypeChanged\0"
    "I2CStats_LastErrorType::Enum\0"
    "last_error_typeChanged\0eventLogChanged\0"
    "I2CStats_EventLog::Enum\0event_logChanged\0"
    "eventLog0Changed\0event_log_0Changed\0"
    "eventLog1Changed\0event_log_1Changed\0"
    "eventLog2Changed\0event_log_2Changed\0"
    "eventLog3Changed\0event_log_3Changed\0"
    "eventLog4Changed\0event_log_4Changed\0"
    "stateLogChanged\0I2CStats_StateLog::Enum\0"
    "state_logChanged\0stateLog0Changed\0"
    "state_log_0Changed\0stateLog1Changed\0"
    "state_log_1Changed\0stateLog2Changed\0"
    "state_log_2Changed\0stateLog3Changed\0"
    "state_log_3Changed\0stateLog4Changed\0"
    "state_log_4Changed\0setEvirqLog\0"
    "setevirq_log\0setEvirqLog0\0setevirq_log_0\0"
    "setEvirqLog1\0setevirq_log_1\0setEvirqLog2\0"
    "setevirq_log_2\0setEvirqLog3\0setevirq_log_3\0"
    "setEvirqLog4\0setevirq_log_4\0setErirqLog\0"
    "seterirq_log\0setErirqLog0\0seterirq_log_0\0"
    "setErirqLog1\0seterirq_log_1\0setErirqLog2\0"
    "seterirq_log_2\0setErirqLog3\0seterirq_log_3\0"
    "setErirqLog4\0seterirq_log_4\0setEventErrors\0"
    "setevent_errors\0setFsmErrors\0setfsm_errors\0"
    "setIrqErrors\0setirq_errors\0setNacks\0"
    "setnacks\0setTimeouts\0settimeouts\0"
    "setLastErrorType\0setlast_error_type\0"
    "setEventLog\0setevent_log\0setEventLog0\0"
    "setevent_log_0\0setEventLog1\0setevent_log_1\0"
    "setEventLog2\0setevent_log_2\0setEventLog3\0"
    "setevent_log_3\0setEventLog4\0setevent_log_4\0"
    "setStateLog\0setstate_log\0setStateLog0\0"
    "setstate_log_0\0setStateLog1\0setstate_log_1\0"
    "setStateLog2\0setstate_log_2\0setStateLog3\0"
    "setstate_log_3\0setStateLog4\0setstate_log_4\0"
    "emitNotifications\0evirqLog\0getevirq_log\0"
    "getevirq_log_0\0getevirq_log_1\0"
    "getevirq_log_2\0getevirq_log_3\0"
    "getevirq_log_4\0erirqLog\0geterirq_log\0"
    "geterirq_log_0\0geterirq_log_1\0"
    "geterirq_log_2\0geterirq_log_3\0"
    "geterirq_log_4\0getevent_errors\0"
    "getfsm_errors\0getirq_errors\0getnacks\0"
    "gettimeouts\0getlast_error_type\0eventLog\0"
    "getevent_log\0getevent_log_0\0getevent_log_1\0"
    "getevent_log_2\0getevent_log_3\0"
    "getevent_log_4\0stateLog\0getstate_log\0"
    "getstate_log_0\0getstate_log_1\0"
    "getstate_log_2\0getstate_log_3\0"
    "getstate_log_4\0evirqLog0\0evirqLog1\0"
    "evirqLog2\0evirqLog3\0evirqLog4\0erirqLog0\0"
    "erirqLog1\0erirqLog2\0erirqLog3\0erirqLog4\0"
    "eventErrors\0fsmErrors\0irqErrors\0nacks\0"
    "timeouts\0lastErrorType\0eventLog0\0"
    "eventLog1\0eventLog2\0eventLog3\0eventLog4\0"
    "stateLog0\0stateLog1\0stateLog2\0stateLog3\0"
    "stateLog4\0evirq_log_0\0evirq_log_1\0"
    "evirq_log_2\0evirq_log_3\0evirq_log_4\0"
    "erirq_log_0\0erirq_log_1\0erirq_log_2\0"
    "erirq_log_3\0erirq_log_4\0event_errors\0"
    "fsm_errors\0irq_errors\0last_error_type\0"
    "event_log_0\0event_log_1\0event_log_2\0"
    "event_log_3\0event_log_4\0state_log_0\0"
    "state_log_1\0state_log_2\0state_log_3\0"
    "state_log_4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_I2CStats[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     155,   14, // methods
      50, 1232, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      60,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  789,    2, 0x06 /* Public */,
       5,    2,  794,    2, 0x06 /* Public */,
       6,    1,  799,    2, 0x06 /* Public */,
       7,    1,  802,    2, 0x06 /* Public */,
       8,    1,  805,    2, 0x06 /* Public */,
       9,    1,  808,    2, 0x06 /* Public */,
      10,    1,  811,    2, 0x06 /* Public */,
      11,    1,  814,    2, 0x06 /* Public */,
      12,    1,  817,    2, 0x06 /* Public */,
      13,    1,  820,    2, 0x06 /* Public */,
      14,    1,  823,    2, 0x06 /* Public */,
      15,    1,  826,    2, 0x06 /* Public */,
      16,    2,  829,    2, 0x06 /* Public */,
      17,    2,  834,    2, 0x06 /* Public */,
      18,    1,  839,    2, 0x06 /* Public */,
      19,    1,  842,    2, 0x06 /* Public */,
      20,    1,  845,    2, 0x06 /* Public */,
      21,    1,  848,    2, 0x06 /* Public */,
      22,    1,  851,    2, 0x06 /* Public */,
      23,    1,  854,    2, 0x06 /* Public */,
      24,    1,  857,    2, 0x06 /* Public */,
      25,    1,  860,    2, 0x06 /* Public */,
      26,    1,  863,    2, 0x06 /* Public */,
      27,    1,  866,    2, 0x06 /* Public */,
      28,    1,  869,    2, 0x06 /* Public */,
      29,    1,  872,    2, 0x06 /* Public */,
      30,    1,  875,    2, 0x06 /* Public */,
      31,    1,  878,    2, 0x06 /* Public */,
      32,    1,  881,    2, 0x06 /* Public */,
      33,    1,  884,    2, 0x06 /* Public */,
      34,    1,  887,    2, 0x06 /* Public */,
      34,    1,  890,    2, 0x06 /* Public */,
      35,    1,  893,    2, 0x06 /* Public */,
      35,    1,  896,    2, 0x06 /* Public */,
      36,    1,  899,    2, 0x06 /* Public */,
      38,    1,  902,    2, 0x06 /* Public */,
      39,    2,  905,    2, 0x06 /* Public */,
      41,    2,  910,    2, 0x06 /* Public */,
      42,    1,  915,    2, 0x06 /* Public */,
      43,    1,  918,    2, 0x06 /* Public */,
      44,    1,  921,    2, 0x06 /* Public */,
      45,    1,  924,    2, 0x06 /* Public */,
      46,    1,  927,    2, 0x06 /* Public */,
      47,    1,  930,    2, 0x06 /* Public */,
      48,    1,  933,    2, 0x06 /* Public */,
      49,    1,  936,    2, 0x06 /* Public */,
      50,    1,  939,    2, 0x06 /* Public */,
      51,    1,  942,    2, 0x06 /* Public */,
      52,    2,  945,    2, 0x06 /* Public */,
      54,    2,  950,    2, 0x06 /* Public */,
      55,    1,  955,    2, 0x06 /* Public */,
      56,    1,  958,    2, 0x06 /* Public */,
      57,    1,  961,    2, 0x06 /* Public */,
      58,    1,  964,    2, 0x06 /* Public */,
      59,    1,  967,    2, 0x06 /* Public */,
      60,    1,  970,    2, 0x06 /* Public */,
      61,    1,  973,    2, 0x06 /* Public */,
      62,    1,  976,    2, 0x06 /* Public */,
      63,    1,  979,    2, 0x06 /* Public */,
      64,    1,  982,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      65,    2,  985,    2, 0x0a /* Public */,
      66,    2,  990,    2, 0x0a /* Public */,
      67,    1,  995,    2, 0x0a /* Public */,
      68,    1,  998,    2, 0x0a /* Public */,
      69,    1, 1001,    2, 0x0a /* Public */,
      70,    1, 1004,    2, 0x0a /* Public */,
      71,    1, 1007,    2, 0x0a /* Public */,
      72,    1, 1010,    2, 0x0a /* Public */,
      73,    1, 1013,    2, 0x0a /* Public */,
      74,    1, 1016,    2, 0x0a /* Public */,
      75,    1, 1019,    2, 0x0a /* Public */,
      76,    1, 1022,    2, 0x0a /* Public */,
      77,    2, 1025,    2, 0x0a /* Public */,
      78,    2, 1030,    2, 0x0a /* Public */,
      79,    1, 1035,    2, 0x0a /* Public */,
      80,    1, 1038,    2, 0x0a /* Public */,
      81,    1, 1041,    2, 0x0a /* Public */,
      82,    1, 1044,    2, 0x0a /* Public */,
      83,    1, 1047,    2, 0x0a /* Public */,
      84,    1, 1050,    2, 0x0a /* Public */,
      85,    1, 1053,    2, 0x0a /* Public */,
      86,    1, 1056,    2, 0x0a /* Public */,
      87,    1, 1059,    2, 0x0a /* Public */,
      88,    1, 1062,    2, 0x0a /* Public */,
      89,    1, 1065,    2, 0x0a /* Public */,
      90,    1, 1068,    2, 0x0a /* Public */,
      91,    1, 1071,    2, 0x0a /* Public */,
      92,    1, 1074,    2, 0x0a /* Public */,
      93,    1, 1077,    2, 0x0a /* Public */,
      94,    1, 1080,    2, 0x0a /* Public */,
      95,    1, 1083,    2, 0x0a /* Public */,
      96,    1, 1086,    2, 0x0a /* Public */,
      97,    1, 1089,    2, 0x0a /* Public */,
      98,    1, 1092,    2, 0x0a /* Public */,
      99,    1, 1095,    2, 0x0a /* Public */,
     100,    1, 1098,    2, 0x0a /* Public */,
     101,    2, 1101,    2, 0x0a /* Public */,
     102,    2, 1106,    2, 0x0a /* Public */,
     103,    1, 1111,    2, 0x0a /* Public */,
     104,    1, 1114,    2, 0x0a /* Public */,
     105,    1, 1117,    2, 0x0a /* Public */,
     106,    1, 1120,    2, 0x0a /* Public */,
     107,    1, 1123,    2, 0x0a /* Public */,
     108,    1, 1126,    2, 0x0a /* Public */,
     109,    1, 1129,    2, 0x0a /* Public */,
     110,    1, 1132,    2, 0x0a /* Public */,
     111,    1, 1135,    2, 0x0a /* Public */,
     112,    1, 1138,    2, 0x0a /* Public */,
     113,    2, 1141,    2, 0x0a /* Public */,
     114,    2, 1146,    2, 0x0a /* Public */,
     115,    1, 1151,    2, 0x0a /* Public */,
     116,    1, 1154,    2, 0x0a /* Public */,
     117,    1, 1157,    2, 0x0a /* Public */,
     118,    1, 1160,    2, 0x0a /* Public */,
     119,    1, 1163,    2, 0x0a /* Public */,
     120,    1, 1166,    2, 0x0a /* Public */,
     121,    1, 1169,    2, 0x0a /* Public */,
     122,    1, 1172,    2, 0x0a /* Public */,
     123,    1, 1175,    2, 0x0a /* Public */,
     124,    1, 1178,    2, 0x0a /* Public */,
     125,    0, 1181,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     126,    1, 1182,    2, 0x02 /* Public */,
     127,    1, 1185,    2, 0x02 /* Public */,
     128,    0, 1188,    2, 0x02 /* Public */,
     129,    0, 1189,    2, 0x02 /* Public */,
     130,    0, 1190,    2, 0x02 /* Public */,
     131,    0, 1191,    2, 0x02 /* Public */,
     132,    0, 1192,    2, 0x02 /* Public */,
     133,    1, 1193,    2, 0x02 /* Public */,
     134,    1, 1196,    2, 0x02 /* Public */,
     135,    0, 1199,    2, 0x02 /* Public */,
     136,    0, 1200,    2, 0x02 /* Public */,
     137,    0, 1201,    2, 0x02 /* Public */,
     138,    0, 1202,    2, 0x02 /* Public */,
     139,    0, 1203,    2, 0x02 /* Public */,
     140,    0, 1204,    2, 0x02 /* Public */,
     141,    0, 1205,    2, 0x02 /* Public */,
     142,    0, 1206,    2, 0x02 /* Public */,
     143,    0, 1207,    2, 0x02 /* Public */,
     144,    0, 1208,    2, 0x02 /* Public */,
     145,    0, 1209,    2, 0x02 /* Public */,
     146,    1, 1210,    2, 0x02 /* Public */,
     147,    1, 1213,    2, 0x02 /* Public */,
     148,    0, 1216,    2, 0x02 /* Public */,
     149,    0, 1217,    2, 0x02 /* Public */,
     150,    0, 1218,    2, 0x02 /* Public */,
     151,    0, 1219,    2, 0x02 /* Public */,
     152,    0, 1220,    2, 0x02 /* Public */,
     153,    1, 1221,    2, 0x02 /* Public */,
     154,    1, 1224,    2, 0x02 /* Public */,
     155,    0, 1227,    2, 0x02 /* Public */,
     156,    0, 1228,    2, 0x02 /* Public */,
     157,    0, 1229,    2, 0x02 /* Public */,
     158,    0, 1230,    2, 0x02 /* Public */,
     159,    0, 1231,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 37,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 40,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 53,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 37,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 40,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 40,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 53,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 53,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt, QMetaType::UInt,    3,
    QMetaType::UInt, QMetaType::UInt,    3,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt, QMetaType::UInt,    3,
    QMetaType::UInt, QMetaType::UInt,    3,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    0x80000000 | 40, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    0x80000000 | 53, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
     160, QMetaType::UInt, 0x00495103,
     161, QMetaType::UInt, 0x00495103,
     162, QMetaType::UInt, 0x00495103,
     163, QMetaType::UInt, 0x00495103,
     164, QMetaType::UInt, 0x00495103,
     165, QMetaType::UInt, 0x00495103,
     166, QMetaType::UInt, 0x00495103,
     167, QMetaType::UInt, 0x00495103,
     168, QMetaType::UInt, 0x00495103,
     169, QMetaType::UInt, 0x00495103,
     170, QMetaType::UShort, 0x00495103,
     171, QMetaType::UShort, 0x00495103,
     172, QMetaType::UShort, 0x00495103,
     173, QMetaType::UShort, 0x00495103,
     174, QMetaType::UShort, 0x00495103,
     175, 0x80000000 | 37, 0x0049510b,
     176, 0x80000000 | 40, 0x0049510b,
     177, 0x80000000 | 40, 0x0049510b,
     178, 0x80000000 | 40, 0x0049510b,
     179, 0x80000000 | 40, 0x0049510b,
     180, 0x80000000 | 40, 0x0049510b,
     181, 0x80000000 | 53, 0x0049510b,
     182, 0x80000000 | 53, 0x0049510b,
     183, 0x80000000 | 53, 0x0049510b,
     184, 0x80000000 | 53, 0x0049510b,
     185, 0x80000000 | 53, 0x0049510b,
     186, QMetaType::UInt, 0x00495003,
     187, QMetaType::UInt, 0x00495003,
     188, QMetaType::UInt, 0x00495003,
     189, QMetaType::UInt, 0x00495003,
     190, QMetaType::UInt, 0x00495003,
     191, QMetaType::UInt, 0x00495003,
     192, QMetaType::UInt, 0x00495003,
     193, QMetaType::UInt, 0x00495003,
     194, QMetaType::UInt, 0x00495003,
     195, QMetaType::UInt, 0x00495003,
     196, QMetaType::UChar, 0x00495003,
     197, QMetaType::UChar, 0x00495003,
     198, QMetaType::UChar, 0x00495003,
     199, QMetaType::UChar, 0x00495003,
     200, QMetaType::UChar, 0x00495003,
     201, QMetaType::UChar, 0x00495003,
     202, QMetaType::UChar, 0x00495003,
     203, QMetaType::UChar, 0x00495003,
     204, QMetaType::UChar, 0x00495003,
     205, QMetaType::UChar, 0x00495003,
     206, QMetaType::UChar, 0x00495003,
     207, QMetaType::UChar, 0x00495003,
     208, QMetaType::UChar, 0x00495003,
     209, QMetaType::UChar, 0x00495003,

 // properties: notify_signal_id
       2,
       4,
       6,
       8,
      10,
      14,
      16,
      18,
      20,
      22,
      24,
      26,
      28,
      30,
      32,
      34,
      38,
      40,
      42,
      44,
      46,
      50,
      52,
      54,
      56,
      58,
       3,
       5,
       7,
       9,
      11,
      15,
      17,
      19,
      21,
      23,
      25,
      27,
      29,
      35,
      39,
      41,
      43,
      45,
      47,
      51,
      53,
      55,
      57,
      59,

       0        // eod
};

void I2CStats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<I2CStats *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->evirqLogChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint32(*)>(_a[2]))); break;
        case 1: _t->evirq_logChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 2: _t->evirqLog0Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 3: _t->evirq_log_0Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->evirqLog1Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 5: _t->evirq_log_1Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->evirqLog2Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 7: _t->evirq_log_2Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 8: _t->evirqLog3Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 9: _t->evirq_log_3Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 10: _t->evirqLog4Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 11: _t->evirq_log_4Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 12: _t->erirqLogChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint32(*)>(_a[2]))); break;
        case 13: _t->erirq_logChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 14: _t->erirqLog0Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 15: _t->erirq_log_0Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 16: _t->erirqLog1Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 17: _t->erirq_log_1Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 18: _t->erirqLog2Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 19: _t->erirq_log_2Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 20: _t->erirqLog3Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 21: _t->erirq_log_3Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 22: _t->erirqLog4Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 23: _t->erirq_log_4Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 24: _t->eventErrorsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 25: _t->event_errorsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->fsmErrorsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 27: _t->fsm_errorsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->irqErrorsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 29: _t->irq_errorsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->nacksChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 31: _t->nacksChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->timeoutsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 33: _t->timeoutsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->lastErrorTypeChanged((*reinterpret_cast< const I2CStats_LastErrorType::Enum(*)>(_a[1]))); break;
        case 35: _t->last_error_typeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->eventLogChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const I2CStats_EventLog::Enum(*)>(_a[2]))); break;
        case 37: _t->event_logChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 38: _t->eventLog0Changed((*reinterpret_cast< const I2CStats_EventLog::Enum(*)>(_a[1]))); break;
        case 39: _t->event_log_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->eventLog1Changed((*reinterpret_cast< const I2CStats_EventLog::Enum(*)>(_a[1]))); break;
        case 41: _t->event_log_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->eventLog2Changed((*reinterpret_cast< const I2CStats_EventLog::Enum(*)>(_a[1]))); break;
        case 43: _t->event_log_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->eventLog3Changed((*reinterpret_cast< const I2CStats_EventLog::Enum(*)>(_a[1]))); break;
        case 45: _t->event_log_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->eventLog4Changed((*reinterpret_cast< const I2CStats_EventLog::Enum(*)>(_a[1]))); break;
        case 47: _t->event_log_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 48: _t->stateLogChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const I2CStats_StateLog::Enum(*)>(_a[2]))); break;
        case 49: _t->state_logChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 50: _t->stateLog0Changed((*reinterpret_cast< const I2CStats_StateLog::Enum(*)>(_a[1]))); break;
        case 51: _t->state_log_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->stateLog1Changed((*reinterpret_cast< const I2CStats_StateLog::Enum(*)>(_a[1]))); break;
        case 53: _t->state_log_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 54: _t->stateLog2Changed((*reinterpret_cast< const I2CStats_StateLog::Enum(*)>(_a[1]))); break;
        case 55: _t->state_log_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 56: _t->stateLog3Changed((*reinterpret_cast< const I2CStats_StateLog::Enum(*)>(_a[1]))); break;
        case 57: _t->state_log_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 58: _t->stateLog4Changed((*reinterpret_cast< const I2CStats_StateLog::Enum(*)>(_a[1]))); break;
        case 59: _t->state_log_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 60: _t->setEvirqLog((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint32(*)>(_a[2]))); break;
        case 61: _t->setevirq_log((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 62: _t->setEvirqLog0((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 63: _t->setevirq_log_0((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 64: _t->setEvirqLog1((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 65: _t->setevirq_log_1((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 66: _t->setEvirqLog2((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 67: _t->setevirq_log_2((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 68: _t->setEvirqLog3((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 69: _t->setevirq_log_3((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 70: _t->setEvirqLog4((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 71: _t->setevirq_log_4((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 72: _t->setErirqLog((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint32(*)>(_a[2]))); break;
        case 73: _t->seterirq_log((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 74: _t->setErirqLog0((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 75: _t->seterirq_log_0((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 76: _t->setErirqLog1((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 77: _t->seterirq_log_1((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 78: _t->setErirqLog2((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 79: _t->seterirq_log_2((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 80: _t->setErirqLog3((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 81: _t->seterirq_log_3((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 82: _t->setErirqLog4((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 83: _t->seterirq_log_4((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 84: _t->setEventErrors((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 85: _t->setevent_errors((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 86: _t->setFsmErrors((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 87: _t->setfsm_errors((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 88: _t->setIrqErrors((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 89: _t->setirq_errors((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 90: _t->setNacks((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 91: _t->setnacks((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 92: _t->setTimeouts((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 93: _t->settimeouts((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 94: _t->setLastErrorType((*reinterpret_cast< const I2CStats_LastErrorType::Enum(*)>(_a[1]))); break;
        case 95: _t->setlast_error_type((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 96: _t->setEventLog((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const I2CStats_EventLog::Enum(*)>(_a[2]))); break;
        case 97: _t->setevent_log((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 98: _t->setEventLog0((*reinterpret_cast< const I2CStats_EventLog::Enum(*)>(_a[1]))); break;
        case 99: _t->setevent_log_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 100: _t->setEventLog1((*reinterpret_cast< const I2CStats_EventLog::Enum(*)>(_a[1]))); break;
        case 101: _t->setevent_log_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 102: _t->setEventLog2((*reinterpret_cast< const I2CStats_EventLog::Enum(*)>(_a[1]))); break;
        case 103: _t->setevent_log_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->setEventLog3((*reinterpret_cast< const I2CStats_EventLog::Enum(*)>(_a[1]))); break;
        case 105: _t->setevent_log_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 106: _t->setEventLog4((*reinterpret_cast< const I2CStats_EventLog::Enum(*)>(_a[1]))); break;
        case 107: _t->setevent_log_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 108: _t->setStateLog((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const I2CStats_StateLog::Enum(*)>(_a[2]))); break;
        case 109: _t->setstate_log((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 110: _t->setStateLog0((*reinterpret_cast< const I2CStats_StateLog::Enum(*)>(_a[1]))); break;
        case 111: _t->setstate_log_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 112: _t->setStateLog1((*reinterpret_cast< const I2CStats_StateLog::Enum(*)>(_a[1]))); break;
        case 113: _t->setstate_log_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 114: _t->setStateLog2((*reinterpret_cast< const I2CStats_StateLog::Enum(*)>(_a[1]))); break;
        case 115: _t->setstate_log_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 116: _t->setStateLog3((*reinterpret_cast< const I2CStats_StateLog::Enum(*)>(_a[1]))); break;
        case 117: _t->setstate_log_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 118: _t->setStateLog4((*reinterpret_cast< const I2CStats_StateLog::Enum(*)>(_a[1]))); break;
        case 119: _t->setstate_log_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 120: _t->emitNotifications(); break;
        case 121: { quint32 _r = _t->evirqLog((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 122: { quint32 _r = _t->getevirq_log((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 123: { quint32 _r = _t->getevirq_log_0();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 124: { quint32 _r = _t->getevirq_log_1();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 125: { quint32 _r = _t->getevirq_log_2();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 126: { quint32 _r = _t->getevirq_log_3();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 127: { quint32 _r = _t->getevirq_log_4();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 128: { quint32 _r = _t->erirqLog((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 129: { quint32 _r = _t->geterirq_log((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 130: { quint32 _r = _t->geterirq_log_0();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 131: { quint32 _r = _t->geterirq_log_1();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 132: { quint32 _r = _t->geterirq_log_2();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 133: { quint32 _r = _t->geterirq_log_3();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 134: { quint32 _r = _t->geterirq_log_4();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 135: { quint8 _r = _t->getevent_errors();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 136: { quint8 _r = _t->getfsm_errors();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 137: { quint8 _r = _t->getirq_errors();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 138: { quint8 _r = _t->getnacks();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 139: { quint8 _r = _t->gettimeouts();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 140: { quint8 _r = _t->getlast_error_type();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 141: { I2CStats_EventLog::Enum _r = _t->eventLog((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< I2CStats_EventLog::Enum*>(_a[0]) = std::move(_r); }  break;
        case 142: { quint8 _r = _t->getevent_log((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 143: { quint8 _r = _t->getevent_log_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 144: { quint8 _r = _t->getevent_log_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 145: { quint8 _r = _t->getevent_log_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 146: { quint8 _r = _t->getevent_log_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 147: { quint8 _r = _t->getevent_log_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 148: { I2CStats_StateLog::Enum _r = _t->stateLog((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< I2CStats_StateLog::Enum*>(_a[0]) = std::move(_r); }  break;
        case 149: { quint8 _r = _t->getstate_log((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 150: { quint8 _r = _t->getstate_log_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 151: { quint8 _r = _t->getstate_log_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 152: { quint8 _r = _t->getstate_log_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 153: { quint8 _r = _t->getstate_log_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 154: { quint8 _r = _t->getstate_log_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (I2CStats::*)(quint32 , const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::evirqLogChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::evirq_logChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::evirqLog0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::evirq_log_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::evirqLog1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::evirq_log_1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::evirqLog2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::evirq_log_2Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::evirqLog3Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::evirq_log_3Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::evirqLog4Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::evirq_log_4Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 , const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::erirqLogChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::erirq_logChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::erirqLog0Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::erirq_log_0Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::erirqLog1Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::erirq_log_1Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::erirqLog2Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::erirq_log_2Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::erirqLog3Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::erirq_log_3Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::erirqLog4Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::erirq_log_4Changed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::eventErrorsChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::event_errorsChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::fsmErrorsChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::fsm_errorsChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::irqErrorsChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::irq_errorsChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::nacksChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::nacksChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::timeoutsChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::timeoutsChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const I2CStats_LastErrorType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::lastErrorTypeChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::last_error_typeChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 , const I2CStats_EventLog::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::eventLogChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::event_logChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const I2CStats_EventLog::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::eventLog0Changed)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::event_log_0Changed)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const I2CStats_EventLog::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::eventLog1Changed)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::event_log_1Changed)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const I2CStats_EventLog::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::eventLog2Changed)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::event_log_2Changed)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const I2CStats_EventLog::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::eventLog3Changed)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::event_log_3Changed)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const I2CStats_EventLog::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::eventLog4Changed)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::event_log_4Changed)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 , const I2CStats_StateLog::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::stateLogChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::state_logChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const I2CStats_StateLog::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::stateLog0Changed)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::state_log_0Changed)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const I2CStats_StateLog::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::stateLog1Changed)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::state_log_1Changed)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const I2CStats_StateLog::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::stateLog2Changed)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::state_log_2Changed)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const I2CStats_StateLog::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::stateLog3Changed)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::state_log_3Changed)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(const I2CStats_StateLog::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::stateLog4Changed)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (I2CStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CStats::state_log_4Changed)) {
                *result = 59;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<I2CStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->evirqLog0(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->evirqLog1(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = _t->evirqLog2(); break;
        case 3: *reinterpret_cast< quint32*>(_v) = _t->evirqLog3(); break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->evirqLog4(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->erirqLog0(); break;
        case 6: *reinterpret_cast< quint32*>(_v) = _t->erirqLog1(); break;
        case 7: *reinterpret_cast< quint32*>(_v) = _t->erirqLog2(); break;
        case 8: *reinterpret_cast< quint32*>(_v) = _t->erirqLog3(); break;
        case 9: *reinterpret_cast< quint32*>(_v) = _t->erirqLog4(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->eventErrors(); break;
        case 11: *reinterpret_cast< quint16*>(_v) = _t->fsmErrors(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->irqErrors(); break;
        case 13: *reinterpret_cast< quint16*>(_v) = _t->nacks(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->timeouts(); break;
        case 15: *reinterpret_cast< I2CStats_LastErrorType::Enum*>(_v) = _t->lastErrorType(); break;
        case 16: *reinterpret_cast< I2CStats_EventLog::Enum*>(_v) = _t->eventLog0(); break;
        case 17: *reinterpret_cast< I2CStats_EventLog::Enum*>(_v) = _t->eventLog1(); break;
        case 18: *reinterpret_cast< I2CStats_EventLog::Enum*>(_v) = _t->eventLog2(); break;
        case 19: *reinterpret_cast< I2CStats_EventLog::Enum*>(_v) = _t->eventLog3(); break;
        case 20: *reinterpret_cast< I2CStats_EventLog::Enum*>(_v) = _t->eventLog4(); break;
        case 21: *reinterpret_cast< I2CStats_StateLog::Enum*>(_v) = _t->stateLog0(); break;
        case 22: *reinterpret_cast< I2CStats_StateLog::Enum*>(_v) = _t->stateLog1(); break;
        case 23: *reinterpret_cast< I2CStats_StateLog::Enum*>(_v) = _t->stateLog2(); break;
        case 24: *reinterpret_cast< I2CStats_StateLog::Enum*>(_v) = _t->stateLog3(); break;
        case 25: *reinterpret_cast< I2CStats_StateLog::Enum*>(_v) = _t->stateLog4(); break;
        case 26: *reinterpret_cast< quint32*>(_v) = _t->getevirq_log_0(); break;
        case 27: *reinterpret_cast< quint32*>(_v) = _t->getevirq_log_1(); break;
        case 28: *reinterpret_cast< quint32*>(_v) = _t->getevirq_log_2(); break;
        case 29: *reinterpret_cast< quint32*>(_v) = _t->getevirq_log_3(); break;
        case 30: *reinterpret_cast< quint32*>(_v) = _t->getevirq_log_4(); break;
        case 31: *reinterpret_cast< quint32*>(_v) = _t->geterirq_log_0(); break;
        case 32: *reinterpret_cast< quint32*>(_v) = _t->geterirq_log_1(); break;
        case 33: *reinterpret_cast< quint32*>(_v) = _t->geterirq_log_2(); break;
        case 34: *reinterpret_cast< quint32*>(_v) = _t->geterirq_log_3(); break;
        case 35: *reinterpret_cast< quint32*>(_v) = _t->geterirq_log_4(); break;
        case 36: *reinterpret_cast< quint8*>(_v) = _t->getevent_errors(); break;
        case 37: *reinterpret_cast< quint8*>(_v) = _t->getfsm_errors(); break;
        case 38: *reinterpret_cast< quint8*>(_v) = _t->getirq_errors(); break;
        case 39: *reinterpret_cast< quint8*>(_v) = _t->getlast_error_type(); break;
        case 40: *reinterpret_cast< quint8*>(_v) = _t->getevent_log_0(); break;
        case 41: *reinterpret_cast< quint8*>(_v) = _t->getevent_log_1(); break;
        case 42: *reinterpret_cast< quint8*>(_v) = _t->getevent_log_2(); break;
        case 43: *reinterpret_cast< quint8*>(_v) = _t->getevent_log_3(); break;
        case 44: *reinterpret_cast< quint8*>(_v) = _t->getevent_log_4(); break;
        case 45: *reinterpret_cast< quint8*>(_v) = _t->getstate_log_0(); break;
        case 46: *reinterpret_cast< quint8*>(_v) = _t->getstate_log_1(); break;
        case 47: *reinterpret_cast< quint8*>(_v) = _t->getstate_log_2(); break;
        case 48: *reinterpret_cast< quint8*>(_v) = _t->getstate_log_3(); break;
        case 49: *reinterpret_cast< quint8*>(_v) = _t->getstate_log_4(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<I2CStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEvirqLog0(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setEvirqLog1(*reinterpret_cast< quint32*>(_v)); break;
        case 2: _t->setEvirqLog2(*reinterpret_cast< quint32*>(_v)); break;
        case 3: _t->setEvirqLog3(*reinterpret_cast< quint32*>(_v)); break;
        case 4: _t->setEvirqLog4(*reinterpret_cast< quint32*>(_v)); break;
        case 5: _t->setErirqLog0(*reinterpret_cast< quint32*>(_v)); break;
        case 6: _t->setErirqLog1(*reinterpret_cast< quint32*>(_v)); break;
        case 7: _t->setErirqLog2(*reinterpret_cast< quint32*>(_v)); break;
        case 8: _t->setErirqLog3(*reinterpret_cast< quint32*>(_v)); break;
        case 9: _t->setErirqLog4(*reinterpret_cast< quint32*>(_v)); break;
        case 10: _t->setEventErrors(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setFsmErrors(*reinterpret_cast< quint16*>(_v)); break;
        case 12: _t->setIrqErrors(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setNacks(*reinterpret_cast< quint16*>(_v)); break;
        case 14: _t->setTimeouts(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setLastErrorType(*reinterpret_cast< I2CStats_LastErrorType::Enum*>(_v)); break;
        case 16: _t->setEventLog0(*reinterpret_cast< I2CStats_EventLog::Enum*>(_v)); break;
        case 17: _t->setEventLog1(*reinterpret_cast< I2CStats_EventLog::Enum*>(_v)); break;
        case 18: _t->setEventLog2(*reinterpret_cast< I2CStats_EventLog::Enum*>(_v)); break;
        case 19: _t->setEventLog3(*reinterpret_cast< I2CStats_EventLog::Enum*>(_v)); break;
        case 20: _t->setEventLog4(*reinterpret_cast< I2CStats_EventLog::Enum*>(_v)); break;
        case 21: _t->setStateLog0(*reinterpret_cast< I2CStats_StateLog::Enum*>(_v)); break;
        case 22: _t->setStateLog1(*reinterpret_cast< I2CStats_StateLog::Enum*>(_v)); break;
        case 23: _t->setStateLog2(*reinterpret_cast< I2CStats_StateLog::Enum*>(_v)); break;
        case 24: _t->setStateLog3(*reinterpret_cast< I2CStats_StateLog::Enum*>(_v)); break;
        case 25: _t->setStateLog4(*reinterpret_cast< I2CStats_StateLog::Enum*>(_v)); break;
        case 26: _t->setevirq_log_0(*reinterpret_cast< quint32*>(_v)); break;
        case 27: _t->setevirq_log_1(*reinterpret_cast< quint32*>(_v)); break;
        case 28: _t->setevirq_log_2(*reinterpret_cast< quint32*>(_v)); break;
        case 29: _t->setevirq_log_3(*reinterpret_cast< quint32*>(_v)); break;
        case 30: _t->setevirq_log_4(*reinterpret_cast< quint32*>(_v)); break;
        case 31: _t->seterirq_log_0(*reinterpret_cast< quint32*>(_v)); break;
        case 32: _t->seterirq_log_1(*reinterpret_cast< quint32*>(_v)); break;
        case 33: _t->seterirq_log_2(*reinterpret_cast< quint32*>(_v)); break;
        case 34: _t->seterirq_log_3(*reinterpret_cast< quint32*>(_v)); break;
        case 35: _t->seterirq_log_4(*reinterpret_cast< quint32*>(_v)); break;
        case 36: _t->setevent_errors(*reinterpret_cast< quint8*>(_v)); break;
        case 37: _t->setfsm_errors(*reinterpret_cast< quint8*>(_v)); break;
        case 38: _t->setirq_errors(*reinterpret_cast< quint8*>(_v)); break;
        case 39: _t->setlast_error_type(*reinterpret_cast< quint8*>(_v)); break;
        case 40: _t->setevent_log_0(*reinterpret_cast< quint8*>(_v)); break;
        case 41: _t->setevent_log_1(*reinterpret_cast< quint8*>(_v)); break;
        case 42: _t->setevent_log_2(*reinterpret_cast< quint8*>(_v)); break;
        case 43: _t->setevent_log_3(*reinterpret_cast< quint8*>(_v)); break;
        case 44: _t->setevent_log_4(*reinterpret_cast< quint8*>(_v)); break;
        case 45: _t->setstate_log_0(*reinterpret_cast< quint8*>(_v)); break;
        case 46: _t->setstate_log_1(*reinterpret_cast< quint8*>(_v)); break;
        case 47: _t->setstate_log_2(*reinterpret_cast< quint8*>(_v)); break;
        case 48: _t->setstate_log_3(*reinterpret_cast< quint8*>(_v)); break;
        case 49: _t->setstate_log_4(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_I2CStats[] = {
        &I2CStats_LastErrorType::staticMetaObject,
    &I2CStats_EventLog::staticMetaObject,
    &I2CStats_StateLog::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject I2CStats::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_I2CStats.data,
    qt_meta_data_I2CStats,
    qt_static_metacall,
    qt_meta_extradata_I2CStats,
    nullptr
} };


const QMetaObject *I2CStats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *I2CStats::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_I2CStats.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int I2CStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 155)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 155;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 155)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 155;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 50;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 50;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 50;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 50;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 50;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void I2CStats::evirqLogChanged(quint32 _t1, const quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void I2CStats::evirq_logChanged(quint32 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void I2CStats::evirqLog0Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void I2CStats::evirq_log_0Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void I2CStats::evirqLog1Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void I2CStats::evirq_log_1Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void I2CStats::evirqLog2Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void I2CStats::evirq_log_2Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void I2CStats::evirqLog3Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void I2CStats::evirq_log_3Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void I2CStats::evirqLog4Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void I2CStats::evirq_log_4Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void I2CStats::erirqLogChanged(quint32 _t1, const quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void I2CStats::erirq_logChanged(quint32 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void I2CStats::erirqLog0Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void I2CStats::erirq_log_0Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void I2CStats::erirqLog1Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void I2CStats::erirq_log_1Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void I2CStats::erirqLog2Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void I2CStats::erirq_log_2Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void I2CStats::erirqLog3Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void I2CStats::erirq_log_3Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void I2CStats::erirqLog4Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void I2CStats::erirq_log_4Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void I2CStats::eventErrorsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void I2CStats::event_errorsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void I2CStats::fsmErrorsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void I2CStats::fsm_errorsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void I2CStats::irqErrorsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void I2CStats::irq_errorsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void I2CStats::nacksChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void I2CStats::nacksChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void I2CStats::timeoutsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void I2CStats::timeoutsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void I2CStats::lastErrorTypeChanged(const I2CStats_LastErrorType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void I2CStats::last_error_typeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void I2CStats::eventLogChanged(quint32 _t1, const I2CStats_EventLog::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void I2CStats::event_logChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void I2CStats::eventLog0Changed(const I2CStats_EventLog::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void I2CStats::event_log_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void I2CStats::eventLog1Changed(const I2CStats_EventLog::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void I2CStats::event_log_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void I2CStats::eventLog2Changed(const I2CStats_EventLog::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void I2CStats::event_log_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void I2CStats::eventLog3Changed(const I2CStats_EventLog::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void I2CStats::event_log_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void I2CStats::eventLog4Changed(const I2CStats_EventLog::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void I2CStats::event_log_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void I2CStats::stateLogChanged(quint32 _t1, const I2CStats_StateLog::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void I2CStats::state_logChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void I2CStats::stateLog0Changed(const I2CStats_StateLog::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void I2CStats::state_log_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void I2CStats::stateLog1Changed(const I2CStats_StateLog::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void I2CStats::state_log_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void I2CStats::stateLog2Changed(const I2CStats_StateLog::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void I2CStats::state_log_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void I2CStats::stateLog3Changed(const I2CStats_StateLog::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void I2CStats::state_log_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void I2CStats::stateLog4Changed(const I2CStats_StateLog::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void I2CStats::state_log_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
