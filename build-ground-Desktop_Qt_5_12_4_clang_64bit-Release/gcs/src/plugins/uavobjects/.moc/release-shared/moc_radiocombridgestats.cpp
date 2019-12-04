/****************************************************************************
** Meta object code from reading C++ file 'radiocombridgestats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../radiocombridgestats.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radiocombridgestats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RadioComBridgeStatsConstants_t {
    QByteArrayData data[2];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioComBridgeStatsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioComBridgeStatsConstants_t qt_meta_stringdata_RadioComBridgeStatsConstants = {
    {
QT_MOC_LITERAL(0, 0, 28), // "RadioComBridgeStatsConstants"
QT_MOC_LITERAL(1, 29, 4) // "Enum"

    },
    "RadioComBridgeStatsConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioComBridgeStatsConstants[] = {

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

void RadioComBridgeStatsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RadioComBridgeStatsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_RadioComBridgeStatsConstants.data,
    qt_meta_data_RadioComBridgeStatsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RadioComBridgeStatsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioComBridgeStatsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioComBridgeStatsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RadioComBridgeStatsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RadioComBridgeStats_t {
    QByteArrayData data[88];
    char stringdata0[1789];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioComBridgeStats_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioComBridgeStats_t qt_meta_stringdata_RadioComBridgeStats = {
    {
QT_MOC_LITERAL(0, 0, 19), // "RadioComBridgeStats"
QT_MOC_LITERAL(1, 20, 23), // "telemetryTxBytesChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "value"
QT_MOC_LITERAL(4, 51, 23), // "TelemetryTxBytesChanged"
QT_MOC_LITERAL(5, 75, 26), // "telemetryTxFailuresChanged"
QT_MOC_LITERAL(6, 102, 26), // "TelemetryTxFailuresChanged"
QT_MOC_LITERAL(7, 129, 25), // "telemetryTxRetriesChanged"
QT_MOC_LITERAL(8, 155, 25), // "TelemetryTxRetriesChanged"
QT_MOC_LITERAL(9, 181, 23), // "telemetryRxBytesChanged"
QT_MOC_LITERAL(10, 205, 23), // "TelemetryRxBytesChanged"
QT_MOC_LITERAL(11, 229, 26), // "telemetryRxFailuresChanged"
QT_MOC_LITERAL(12, 256, 26), // "TelemetryRxFailuresChanged"
QT_MOC_LITERAL(13, 283, 28), // "telemetryRxSyncErrorsChanged"
QT_MOC_LITERAL(14, 312, 28), // "TelemetryRxSyncErrorsChanged"
QT_MOC_LITERAL(15, 341, 27), // "telemetryRxCrcErrorsChanged"
QT_MOC_LITERAL(16, 369, 27), // "TelemetryRxCrcErrorsChanged"
QT_MOC_LITERAL(17, 397, 19), // "radioTxBytesChanged"
QT_MOC_LITERAL(18, 417, 19), // "RadioTxBytesChanged"
QT_MOC_LITERAL(19, 437, 22), // "radioTxFailuresChanged"
QT_MOC_LITERAL(20, 460, 22), // "RadioTxFailuresChanged"
QT_MOC_LITERAL(21, 483, 21), // "radioTxRetriesChanged"
QT_MOC_LITERAL(22, 505, 21), // "RadioTxRetriesChanged"
QT_MOC_LITERAL(23, 527, 19), // "radioRxBytesChanged"
QT_MOC_LITERAL(24, 547, 19), // "RadioRxBytesChanged"
QT_MOC_LITERAL(25, 567, 22), // "radioRxFailuresChanged"
QT_MOC_LITERAL(26, 590, 22), // "RadioRxFailuresChanged"
QT_MOC_LITERAL(27, 613, 24), // "radioRxSyncErrorsChanged"
QT_MOC_LITERAL(28, 638, 24), // "RadioRxSyncErrorsChanged"
QT_MOC_LITERAL(29, 663, 23), // "radioRxCrcErrorsChanged"
QT_MOC_LITERAL(30, 687, 23), // "RadioRxCrcErrorsChanged"
QT_MOC_LITERAL(31, 711, 19), // "setTelemetryTxBytes"
QT_MOC_LITERAL(32, 731, 22), // "setTelemetryTxFailures"
QT_MOC_LITERAL(33, 754, 21), // "setTelemetryTxRetries"
QT_MOC_LITERAL(34, 776, 19), // "setTelemetryRxBytes"
QT_MOC_LITERAL(35, 796, 22), // "setTelemetryRxFailures"
QT_MOC_LITERAL(36, 819, 24), // "setTelemetryRxSyncErrors"
QT_MOC_LITERAL(37, 844, 23), // "setTelemetryRxCrcErrors"
QT_MOC_LITERAL(38, 868, 15), // "setRadioTxBytes"
QT_MOC_LITERAL(39, 884, 18), // "setRadioTxFailures"
QT_MOC_LITERAL(40, 903, 17), // "setRadioTxRetries"
QT_MOC_LITERAL(41, 921, 15), // "setRadioRxBytes"
QT_MOC_LITERAL(42, 937, 18), // "setRadioRxFailures"
QT_MOC_LITERAL(43, 956, 20), // "setRadioRxSyncErrors"
QT_MOC_LITERAL(44, 977, 19), // "setRadioRxCrcErrors"
QT_MOC_LITERAL(45, 997, 17), // "emitNotifications"
QT_MOC_LITERAL(46, 1015, 19), // "getTelemetryTxBytes"
QT_MOC_LITERAL(47, 1035, 22), // "getTelemetryTxFailures"
QT_MOC_LITERAL(48, 1058, 21), // "getTelemetryTxRetries"
QT_MOC_LITERAL(49, 1080, 19), // "getTelemetryRxBytes"
QT_MOC_LITERAL(50, 1100, 22), // "getTelemetryRxFailures"
QT_MOC_LITERAL(51, 1123, 24), // "getTelemetryRxSyncErrors"
QT_MOC_LITERAL(52, 1148, 23), // "getTelemetryRxCrcErrors"
QT_MOC_LITERAL(53, 1172, 15), // "getRadioTxBytes"
QT_MOC_LITERAL(54, 1188, 18), // "getRadioTxFailures"
QT_MOC_LITERAL(55, 1207, 17), // "getRadioTxRetries"
QT_MOC_LITERAL(56, 1225, 15), // "getRadioRxBytes"
QT_MOC_LITERAL(57, 1241, 18), // "getRadioRxFailures"
QT_MOC_LITERAL(58, 1260, 20), // "getRadioRxSyncErrors"
QT_MOC_LITERAL(59, 1281, 19), // "getRadioRxCrcErrors"
QT_MOC_LITERAL(60, 1301, 16), // "telemetryTxBytes"
QT_MOC_LITERAL(61, 1318, 19), // "telemetryTxFailures"
QT_MOC_LITERAL(62, 1338, 18), // "telemetryTxRetries"
QT_MOC_LITERAL(63, 1357, 16), // "telemetryRxBytes"
QT_MOC_LITERAL(64, 1374, 19), // "telemetryRxFailures"
QT_MOC_LITERAL(65, 1394, 21), // "telemetryRxSyncErrors"
QT_MOC_LITERAL(66, 1416, 20), // "telemetryRxCrcErrors"
QT_MOC_LITERAL(67, 1437, 12), // "radioTxBytes"
QT_MOC_LITERAL(68, 1450, 15), // "radioTxFailures"
QT_MOC_LITERAL(69, 1466, 14), // "radioTxRetries"
QT_MOC_LITERAL(70, 1481, 12), // "radioRxBytes"
QT_MOC_LITERAL(71, 1494, 15), // "radioRxFailures"
QT_MOC_LITERAL(72, 1510, 17), // "radioRxSyncErrors"
QT_MOC_LITERAL(73, 1528, 16), // "radioRxCrcErrors"
QT_MOC_LITERAL(74, 1545, 16), // "TelemetryTxBytes"
QT_MOC_LITERAL(75, 1562, 19), // "TelemetryTxFailures"
QT_MOC_LITERAL(76, 1582, 18), // "TelemetryTxRetries"
QT_MOC_LITERAL(77, 1601, 16), // "TelemetryRxBytes"
QT_MOC_LITERAL(78, 1618, 19), // "TelemetryRxFailures"
QT_MOC_LITERAL(79, 1638, 21), // "TelemetryRxSyncErrors"
QT_MOC_LITERAL(80, 1660, 20), // "TelemetryRxCrcErrors"
QT_MOC_LITERAL(81, 1681, 12), // "RadioTxBytes"
QT_MOC_LITERAL(82, 1694, 15), // "RadioTxFailures"
QT_MOC_LITERAL(83, 1710, 14), // "RadioTxRetries"
QT_MOC_LITERAL(84, 1725, 12), // "RadioRxBytes"
QT_MOC_LITERAL(85, 1738, 15), // "RadioRxFailures"
QT_MOC_LITERAL(86, 1754, 17), // "RadioRxSyncErrors"
QT_MOC_LITERAL(87, 1772, 16) // "RadioRxCrcErrors"

    },
    "RadioComBridgeStats\0telemetryTxBytesChanged\0"
    "\0value\0TelemetryTxBytesChanged\0"
    "telemetryTxFailuresChanged\0"
    "TelemetryTxFailuresChanged\0"
    "telemetryTxRetriesChanged\0"
    "TelemetryTxRetriesChanged\0"
    "telemetryRxBytesChanged\0TelemetryRxBytesChanged\0"
    "telemetryRxFailuresChanged\0"
    "TelemetryRxFailuresChanged\0"
    "telemetryRxSyncErrorsChanged\0"
    "TelemetryRxSyncErrorsChanged\0"
    "telemetryRxCrcErrorsChanged\0"
    "TelemetryRxCrcErrorsChanged\0"
    "radioTxBytesChanged\0RadioTxBytesChanged\0"
    "radioTxFailuresChanged\0RadioTxFailuresChanged\0"
    "radioTxRetriesChanged\0RadioTxRetriesChanged\0"
    "radioRxBytesChanged\0RadioRxBytesChanged\0"
    "radioRxFailuresChanged\0RadioRxFailuresChanged\0"
    "radioRxSyncErrorsChanged\0"
    "RadioRxSyncErrorsChanged\0"
    "radioRxCrcErrorsChanged\0RadioRxCrcErrorsChanged\0"
    "setTelemetryTxBytes\0setTelemetryTxFailures\0"
    "setTelemetryTxRetries\0setTelemetryRxBytes\0"
    "setTelemetryRxFailures\0setTelemetryRxSyncErrors\0"
    "setTelemetryRxCrcErrors\0setRadioTxBytes\0"
    "setRadioTxFailures\0setRadioTxRetries\0"
    "setRadioRxBytes\0setRadioRxFailures\0"
    "setRadioRxSyncErrors\0setRadioRxCrcErrors\0"
    "emitNotifications\0getTelemetryTxBytes\0"
    "getTelemetryTxFailures\0getTelemetryTxRetries\0"
    "getTelemetryRxBytes\0getTelemetryRxFailures\0"
    "getTelemetryRxSyncErrors\0"
    "getTelemetryRxCrcErrors\0getRadioTxBytes\0"
    "getRadioTxFailures\0getRadioTxRetries\0"
    "getRadioRxBytes\0getRadioRxFailures\0"
    "getRadioRxSyncErrors\0getRadioRxCrcErrors\0"
    "telemetryTxBytes\0telemetryTxFailures\0"
    "telemetryTxRetries\0telemetryRxBytes\0"
    "telemetryRxFailures\0telemetryRxSyncErrors\0"
    "telemetryRxCrcErrors\0radioTxBytes\0"
    "radioTxFailures\0radioTxRetries\0"
    "radioRxBytes\0radioRxFailures\0"
    "radioRxSyncErrors\0radioRxCrcErrors\0"
    "TelemetryTxBytes\0TelemetryTxFailures\0"
    "TelemetryTxRetries\0TelemetryRxBytes\0"
    "TelemetryRxFailures\0TelemetryRxSyncErrors\0"
    "TelemetryRxCrcErrors\0RadioTxBytes\0"
    "RadioTxFailures\0RadioTxRetries\0"
    "RadioRxBytes\0RadioRxFailures\0"
    "RadioRxSyncErrors\0RadioRxCrcErrors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioComBridgeStats[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
      28,  440, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      28,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  299,    2, 0x06 /* Public */,
       4,    1,  302,    2, 0x06 /* Public */,
       5,    1,  305,    2, 0x06 /* Public */,
       6,    1,  308,    2, 0x06 /* Public */,
       7,    1,  311,    2, 0x06 /* Public */,
       8,    1,  314,    2, 0x06 /* Public */,
       9,    1,  317,    2, 0x06 /* Public */,
      10,    1,  320,    2, 0x06 /* Public */,
      11,    1,  323,    2, 0x06 /* Public */,
      12,    1,  326,    2, 0x06 /* Public */,
      13,    1,  329,    2, 0x06 /* Public */,
      14,    1,  332,    2, 0x06 /* Public */,
      15,    1,  335,    2, 0x06 /* Public */,
      16,    1,  338,    2, 0x06 /* Public */,
      17,    1,  341,    2, 0x06 /* Public */,
      18,    1,  344,    2, 0x06 /* Public */,
      19,    1,  347,    2, 0x06 /* Public */,
      20,    1,  350,    2, 0x06 /* Public */,
      21,    1,  353,    2, 0x06 /* Public */,
      22,    1,  356,    2, 0x06 /* Public */,
      23,    1,  359,    2, 0x06 /* Public */,
      24,    1,  362,    2, 0x06 /* Public */,
      25,    1,  365,    2, 0x06 /* Public */,
      26,    1,  368,    2, 0x06 /* Public */,
      27,    1,  371,    2, 0x06 /* Public */,
      28,    1,  374,    2, 0x06 /* Public */,
      29,    1,  377,    2, 0x06 /* Public */,
      30,    1,  380,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    1,  383,    2, 0x0a /* Public */,
      32,    1,  386,    2, 0x0a /* Public */,
      33,    1,  389,    2, 0x0a /* Public */,
      34,    1,  392,    2, 0x0a /* Public */,
      35,    1,  395,    2, 0x0a /* Public */,
      36,    1,  398,    2, 0x0a /* Public */,
      37,    1,  401,    2, 0x0a /* Public */,
      38,    1,  404,    2, 0x0a /* Public */,
      39,    1,  407,    2, 0x0a /* Public */,
      40,    1,  410,    2, 0x0a /* Public */,
      41,    1,  413,    2, 0x0a /* Public */,
      42,    1,  416,    2, 0x0a /* Public */,
      43,    1,  419,    2, 0x0a /* Public */,
      44,    1,  422,    2, 0x0a /* Public */,
      45,    0,  425,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      46,    0,  426,    2, 0x02 /* Public */,
      47,    0,  427,    2, 0x02 /* Public */,
      48,    0,  428,    2, 0x02 /* Public */,
      49,    0,  429,    2, 0x02 /* Public */,
      50,    0,  430,    2, 0x02 /* Public */,
      51,    0,  431,    2, 0x02 /* Public */,
      52,    0,  432,    2, 0x02 /* Public */,
      53,    0,  433,    2, 0x02 /* Public */,
      54,    0,  434,    2, 0x02 /* Public */,
      55,    0,  435,    2, 0x02 /* Public */,
      56,    0,  436,    2, 0x02 /* Public */,
      57,    0,  437,    2, 0x02 /* Public */,
      58,    0,  438,    2, 0x02 /* Public */,
      59,    0,  439,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,

 // slots: parameters
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
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,

 // properties: name, type, flags
      60, QMetaType::UInt, 0x00495103,
      61, QMetaType::UInt, 0x00495103,
      62, QMetaType::UInt, 0x00495103,
      63, QMetaType::UInt, 0x00495103,
      64, QMetaType::UInt, 0x00495103,
      65, QMetaType::UInt, 0x00495103,
      66, QMetaType::UInt, 0x00495103,
      67, QMetaType::UInt, 0x00495103,
      68, QMetaType::UInt, 0x00495103,
      69, QMetaType::UInt, 0x00495103,
      70, QMetaType::UInt, 0x00495103,
      71, QMetaType::UInt, 0x00495103,
      72, QMetaType::UInt, 0x00495103,
      73, QMetaType::UInt, 0x00495103,
      74, QMetaType::UInt, 0x00495103,
      75, QMetaType::UInt, 0x00495103,
      76, QMetaType::UInt, 0x00495103,
      77, QMetaType::UInt, 0x00495103,
      78, QMetaType::UInt, 0x00495103,
      79, QMetaType::UInt, 0x00495103,
      80, QMetaType::UInt, 0x00495103,
      81, QMetaType::UInt, 0x00495103,
      82, QMetaType::UInt, 0x00495103,
      83, QMetaType::UInt, 0x00495103,
      84, QMetaType::UInt, 0x00495103,
      85, QMetaType::UInt, 0x00495103,
      86, QMetaType::UInt, 0x00495103,
      87, QMetaType::UInt, 0x00495103,

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
      20,
      22,
      24,
      26,
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
      21,
      23,
      25,
      27,

       0        // eod
};

void RadioComBridgeStats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RadioComBridgeStats *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->telemetryTxBytesChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: _t->TelemetryTxBytesChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->telemetryTxFailuresChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 3: _t->TelemetryTxFailuresChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->telemetryTxRetriesChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 5: _t->TelemetryTxRetriesChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->telemetryRxBytesChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 7: _t->TelemetryRxBytesChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 8: _t->telemetryRxFailuresChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 9: _t->TelemetryRxFailuresChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 10: _t->telemetryRxSyncErrorsChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 11: _t->TelemetryRxSyncErrorsChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 12: _t->telemetryRxCrcErrorsChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 13: _t->TelemetryRxCrcErrorsChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 14: _t->radioTxBytesChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 15: _t->RadioTxBytesChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 16: _t->radioTxFailuresChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 17: _t->RadioTxFailuresChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 18: _t->radioTxRetriesChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 19: _t->RadioTxRetriesChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 20: _t->radioRxBytesChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 21: _t->RadioRxBytesChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 22: _t->radioRxFailuresChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 23: _t->RadioRxFailuresChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 24: _t->radioRxSyncErrorsChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 25: _t->RadioRxSyncErrorsChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 26: _t->radioRxCrcErrorsChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 27: _t->RadioRxCrcErrorsChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 28: _t->setTelemetryTxBytes((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 29: _t->setTelemetryTxFailures((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 30: _t->setTelemetryTxRetries((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 31: _t->setTelemetryRxBytes((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 32: _t->setTelemetryRxFailures((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 33: _t->setTelemetryRxSyncErrors((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 34: _t->setTelemetryRxCrcErrors((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 35: _t->setRadioTxBytes((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 36: _t->setRadioTxFailures((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 37: _t->setRadioTxRetries((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 38: _t->setRadioRxBytes((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 39: _t->setRadioRxFailures((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 40: _t->setRadioRxSyncErrors((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 41: _t->setRadioRxCrcErrors((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 42: _t->emitNotifications(); break;
        case 43: { quint32 _r = _t->getTelemetryTxBytes();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 44: { quint32 _r = _t->getTelemetryTxFailures();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 45: { quint32 _r = _t->getTelemetryTxRetries();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 46: { quint32 _r = _t->getTelemetryRxBytes();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 47: { quint32 _r = _t->getTelemetryRxFailures();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 48: { quint32 _r = _t->getTelemetryRxSyncErrors();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 49: { quint32 _r = _t->getTelemetryRxCrcErrors();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 50: { quint32 _r = _t->getRadioTxBytes();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 51: { quint32 _r = _t->getRadioTxFailures();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 52: { quint32 _r = _t->getRadioTxRetries();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 53: { quint32 _r = _t->getRadioRxBytes();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 54: { quint32 _r = _t->getRadioRxFailures();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 55: { quint32 _r = _t->getRadioRxSyncErrors();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 56: { quint32 _r = _t->getRadioRxCrcErrors();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::telemetryTxBytesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::TelemetryTxBytesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::telemetryTxFailuresChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::TelemetryTxFailuresChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::telemetryTxRetriesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::TelemetryTxRetriesChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::telemetryRxBytesChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::TelemetryRxBytesChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::telemetryRxFailuresChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::TelemetryRxFailuresChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::telemetryRxSyncErrorsChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::TelemetryRxSyncErrorsChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::telemetryRxCrcErrorsChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::TelemetryRxCrcErrorsChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::radioTxBytesChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::RadioTxBytesChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::radioTxFailuresChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::RadioTxFailuresChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::radioTxRetriesChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::RadioTxRetriesChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::radioRxBytesChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::RadioRxBytesChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::radioRxFailuresChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::RadioRxFailuresChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::radioRxSyncErrorsChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::RadioRxSyncErrorsChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::radioRxCrcErrorsChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (RadioComBridgeStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComBridgeStats::RadioRxCrcErrorsChanged)) {
                *result = 27;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RadioComBridgeStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->telemetryTxBytes(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->telemetryTxFailures(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = _t->telemetryTxRetries(); break;
        case 3: *reinterpret_cast< quint32*>(_v) = _t->telemetryRxBytes(); break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->telemetryRxFailures(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->telemetryRxSyncErrors(); break;
        case 6: *reinterpret_cast< quint32*>(_v) = _t->telemetryRxCrcErrors(); break;
        case 7: *reinterpret_cast< quint32*>(_v) = _t->radioTxBytes(); break;
        case 8: *reinterpret_cast< quint32*>(_v) = _t->radioTxFailures(); break;
        case 9: *reinterpret_cast< quint32*>(_v) = _t->radioTxRetries(); break;
        case 10: *reinterpret_cast< quint32*>(_v) = _t->radioRxBytes(); break;
        case 11: *reinterpret_cast< quint32*>(_v) = _t->radioRxFailures(); break;
        case 12: *reinterpret_cast< quint32*>(_v) = _t->radioRxSyncErrors(); break;
        case 13: *reinterpret_cast< quint32*>(_v) = _t->radioRxCrcErrors(); break;
        case 14: *reinterpret_cast< quint32*>(_v) = _t->getTelemetryTxBytes(); break;
        case 15: *reinterpret_cast< quint32*>(_v) = _t->getTelemetryTxFailures(); break;
        case 16: *reinterpret_cast< quint32*>(_v) = _t->getTelemetryTxRetries(); break;
        case 17: *reinterpret_cast< quint32*>(_v) = _t->getTelemetryRxBytes(); break;
        case 18: *reinterpret_cast< quint32*>(_v) = _t->getTelemetryRxFailures(); break;
        case 19: *reinterpret_cast< quint32*>(_v) = _t->getTelemetryRxSyncErrors(); break;
        case 20: *reinterpret_cast< quint32*>(_v) = _t->getTelemetryRxCrcErrors(); break;
        case 21: *reinterpret_cast< quint32*>(_v) = _t->getRadioTxBytes(); break;
        case 22: *reinterpret_cast< quint32*>(_v) = _t->getRadioTxFailures(); break;
        case 23: *reinterpret_cast< quint32*>(_v) = _t->getRadioTxRetries(); break;
        case 24: *reinterpret_cast< quint32*>(_v) = _t->getRadioRxBytes(); break;
        case 25: *reinterpret_cast< quint32*>(_v) = _t->getRadioRxFailures(); break;
        case 26: *reinterpret_cast< quint32*>(_v) = _t->getRadioRxSyncErrors(); break;
        case 27: *reinterpret_cast< quint32*>(_v) = _t->getRadioRxCrcErrors(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RadioComBridgeStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTelemetryTxBytes(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setTelemetryTxFailures(*reinterpret_cast< quint32*>(_v)); break;
        case 2: _t->setTelemetryTxRetries(*reinterpret_cast< quint32*>(_v)); break;
        case 3: _t->setTelemetryRxBytes(*reinterpret_cast< quint32*>(_v)); break;
        case 4: _t->setTelemetryRxFailures(*reinterpret_cast< quint32*>(_v)); break;
        case 5: _t->setTelemetryRxSyncErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 6: _t->setTelemetryRxCrcErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 7: _t->setRadioTxBytes(*reinterpret_cast< quint32*>(_v)); break;
        case 8: _t->setRadioTxFailures(*reinterpret_cast< quint32*>(_v)); break;
        case 9: _t->setRadioTxRetries(*reinterpret_cast< quint32*>(_v)); break;
        case 10: _t->setRadioRxBytes(*reinterpret_cast< quint32*>(_v)); break;
        case 11: _t->setRadioRxFailures(*reinterpret_cast< quint32*>(_v)); break;
        case 12: _t->setRadioRxSyncErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 13: _t->setRadioRxCrcErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 14: _t->setTelemetryTxBytes(*reinterpret_cast< quint32*>(_v)); break;
        case 15: _t->setTelemetryTxFailures(*reinterpret_cast< quint32*>(_v)); break;
        case 16: _t->setTelemetryTxRetries(*reinterpret_cast< quint32*>(_v)); break;
        case 17: _t->setTelemetryRxBytes(*reinterpret_cast< quint32*>(_v)); break;
        case 18: _t->setTelemetryRxFailures(*reinterpret_cast< quint32*>(_v)); break;
        case 19: _t->setTelemetryRxSyncErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 20: _t->setTelemetryRxCrcErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 21: _t->setRadioTxBytes(*reinterpret_cast< quint32*>(_v)); break;
        case 22: _t->setRadioTxFailures(*reinterpret_cast< quint32*>(_v)); break;
        case 23: _t->setRadioTxRetries(*reinterpret_cast< quint32*>(_v)); break;
        case 24: _t->setRadioRxBytes(*reinterpret_cast< quint32*>(_v)); break;
        case 25: _t->setRadioRxFailures(*reinterpret_cast< quint32*>(_v)); break;
        case 26: _t->setRadioRxSyncErrors(*reinterpret_cast< quint32*>(_v)); break;
        case 27: _t->setRadioRxCrcErrors(*reinterpret_cast< quint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RadioComBridgeStats::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_RadioComBridgeStats.data,
    qt_meta_data_RadioComBridgeStats,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RadioComBridgeStats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioComBridgeStats::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioComBridgeStats.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int RadioComBridgeStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 57;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 28;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RadioComBridgeStats::telemetryTxBytesChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RadioComBridgeStats::TelemetryTxBytesChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RadioComBridgeStats::telemetryTxFailuresChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RadioComBridgeStats::TelemetryTxFailuresChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RadioComBridgeStats::telemetryTxRetriesChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RadioComBridgeStats::TelemetryTxRetriesChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RadioComBridgeStats::telemetryRxBytesChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RadioComBridgeStats::TelemetryRxBytesChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RadioComBridgeStats::telemetryRxFailuresChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RadioComBridgeStats::TelemetryRxFailuresChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RadioComBridgeStats::telemetryRxSyncErrorsChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RadioComBridgeStats::TelemetryRxSyncErrorsChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RadioComBridgeStats::telemetryRxCrcErrorsChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void RadioComBridgeStats::TelemetryRxCrcErrorsChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void RadioComBridgeStats::radioTxBytesChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void RadioComBridgeStats::RadioTxBytesChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void RadioComBridgeStats::radioTxFailuresChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void RadioComBridgeStats::RadioTxFailuresChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void RadioComBridgeStats::radioTxRetriesChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void RadioComBridgeStats::RadioTxRetriesChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void RadioComBridgeStats::radioRxBytesChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void RadioComBridgeStats::RadioRxBytesChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void RadioComBridgeStats::radioRxFailuresChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void RadioComBridgeStats::RadioRxFailuresChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void RadioComBridgeStats::radioRxSyncErrorsChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void RadioComBridgeStats::RadioRxSyncErrorsChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void RadioComBridgeStats::radioRxCrcErrorsChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void RadioComBridgeStats::RadioRxCrcErrorsChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
