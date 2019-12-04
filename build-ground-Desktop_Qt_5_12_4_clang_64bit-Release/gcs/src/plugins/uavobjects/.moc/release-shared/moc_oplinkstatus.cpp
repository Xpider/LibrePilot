/****************************************************************************
** Meta object code from reading C++ file 'oplinkstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../oplinkstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oplinkstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OPLinkStatusConstants_t {
    QByteArrayData data[3];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPLinkStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPLinkStatusConstants_t qt_meta_stringdata_OPLinkStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 21), // "OPLinkStatusConstants"
QT_MOC_LITERAL(1, 22, 4), // "Enum"
QT_MOC_LITERAL(2, 27, 14) // "LinkStateCount"

    },
    "OPLinkStatusConstants\0Enum\0LinkStateCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPLinkStatusConstants[] = {

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
       2, uint(OPLinkStatusConstants::LinkStateCount),

       0        // eod
};

void OPLinkStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OPLinkStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OPLinkStatusConstants.data,
    qt_meta_data_OPLinkStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OPLinkStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPLinkStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPLinkStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OPLinkStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OPLinkStatus_LinkState_t {
    QByteArrayData data[9];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPLinkStatus_LinkState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPLinkStatus_LinkState_t qt_meta_stringdata_OPLinkStatus_LinkState = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OPLinkStatus_LinkState"
QT_MOC_LITERAL(1, 23, 4), // "Enum"
QT_MOC_LITERAL(2, 28, 8), // "Disabled"
QT_MOC_LITERAL(3, 37, 7), // "Enabled"
QT_MOC_LITERAL(4, 45, 7), // "Binding"
QT_MOC_LITERAL(5, 53, 5), // "Bound"
QT_MOC_LITERAL(6, 59, 12), // "Disconnected"
QT_MOC_LITERAL(7, 72, 10), // "Connecting"
QT_MOC_LITERAL(8, 83, 9) // "Connected"

    },
    "OPLinkStatus_LinkState\0Enum\0Disabled\0"
    "Enabled\0Binding\0Bound\0Disconnected\0"
    "Connecting\0Connected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPLinkStatus_LinkState[] = {

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
       1,    1, 0x0,    7,   19,

 // enum data: key, value
       2, uint(OPLinkStatus_LinkState::Disabled),
       3, uint(OPLinkStatus_LinkState::Enabled),
       4, uint(OPLinkStatus_LinkState::Binding),
       5, uint(OPLinkStatus_LinkState::Bound),
       6, uint(OPLinkStatus_LinkState::Disconnected),
       7, uint(OPLinkStatus_LinkState::Connecting),
       8, uint(OPLinkStatus_LinkState::Connected),

       0        // eod
};

void OPLinkStatus_LinkState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OPLinkStatus_LinkState::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OPLinkStatus_LinkState.data,
    qt_meta_data_OPLinkStatus_LinkState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OPLinkStatus_LinkState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPLinkStatus_LinkState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPLinkStatus_LinkState.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OPLinkStatus_LinkState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OPLinkStatus_t {
    QByteArrayData data[239];
    char stringdata0[3307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPLinkStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPLinkStatus_t qt_meta_stringdata_OPLinkStatus = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OPLinkStatus"
QT_MOC_LITERAL(1, 13, 15), // "deviceIDChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "value"
QT_MOC_LITERAL(4, 36, 15), // "DeviceIDChanged"
QT_MOC_LITERAL(5, 52, 20), // "afcCorrectionChanged"
QT_MOC_LITERAL(6, 73, 20), // "AFCCorrectionChanged"
QT_MOC_LITERAL(7, 94, 20), // "boardRevisionChanged"
QT_MOC_LITERAL(8, 115, 20), // "BoardRevisionChanged"
QT_MOC_LITERAL(9, 136, 20), // "heapRemainingChanged"
QT_MOC_LITERAL(10, 157, 20), // "HeapRemainingChanged"
QT_MOC_LITERAL(11, 178, 20), // "uavTalkErrorsChanged"
QT_MOC_LITERAL(12, 199, 20), // "UAVTalkErrorsChanged"
QT_MOC_LITERAL(13, 220, 18), // "linkQualityChanged"
QT_MOC_LITERAL(14, 239, 18), // "LinkQualityChanged"
QT_MOC_LITERAL(15, 258, 13), // "txRateChanged"
QT_MOC_LITERAL(16, 272, 13), // "TXRateChanged"
QT_MOC_LITERAL(17, 286, 13), // "rxRateChanged"
QT_MOC_LITERAL(18, 300, 13), // "RXRateChanged"
QT_MOC_LITERAL(19, 314, 12), // "txSeqChanged"
QT_MOC_LITERAL(20, 327, 12), // "TXSeqChanged"
QT_MOC_LITERAL(21, 340, 12), // "rxSeqChanged"
QT_MOC_LITERAL(22, 353, 12), // "RXSeqChanged"
QT_MOC_LITERAL(23, 366, 19), // "txPacketRateChanged"
QT_MOC_LITERAL(24, 386, 19), // "TXPacketRateChanged"
QT_MOC_LITERAL(25, 406, 19), // "rxPacketRateChanged"
QT_MOC_LITERAL(26, 426, 19), // "RXPacketRateChanged"
QT_MOC_LITERAL(27, 446, 16), // "cpuSerialChanged"
QT_MOC_LITERAL(28, 463, 5), // "index"
QT_MOC_LITERAL(29, 469, 16), // "CPUSerialChanged"
QT_MOC_LITERAL(30, 486, 17), // "cpuSerial0Changed"
QT_MOC_LITERAL(31, 504, 18), // "CPUSerial_0Changed"
QT_MOC_LITERAL(32, 523, 17), // "cpuSerial1Changed"
QT_MOC_LITERAL(33, 541, 18), // "CPUSerial_1Changed"
QT_MOC_LITERAL(34, 560, 17), // "cpuSerial2Changed"
QT_MOC_LITERAL(35, 578, 18), // "CPUSerial_2Changed"
QT_MOC_LITERAL(36, 597, 17), // "cpuSerial3Changed"
QT_MOC_LITERAL(37, 615, 18), // "CPUSerial_3Changed"
QT_MOC_LITERAL(38, 634, 17), // "cpuSerial4Changed"
QT_MOC_LITERAL(39, 652, 18), // "CPUSerial_4Changed"
QT_MOC_LITERAL(40, 671, 17), // "cpuSerial5Changed"
QT_MOC_LITERAL(41, 689, 18), // "CPUSerial_5Changed"
QT_MOC_LITERAL(42, 708, 17), // "cpuSerial6Changed"
QT_MOC_LITERAL(43, 726, 18), // "CPUSerial_6Changed"
QT_MOC_LITERAL(44, 745, 17), // "cpuSerial7Changed"
QT_MOC_LITERAL(45, 763, 18), // "CPUSerial_7Changed"
QT_MOC_LITERAL(46, 782, 17), // "cpuSerial8Changed"
QT_MOC_LITERAL(47, 800, 18), // "CPUSerial_8Changed"
QT_MOC_LITERAL(48, 819, 17), // "cpuSerial9Changed"
QT_MOC_LITERAL(49, 837, 18), // "CPUSerial_9Changed"
QT_MOC_LITERAL(50, 856, 18), // "cpuSerial10Changed"
QT_MOC_LITERAL(51, 875, 19), // "CPUSerial_10Changed"
QT_MOC_LITERAL(52, 895, 18), // "cpuSerial11Changed"
QT_MOC_LITERAL(53, 914, 19), // "CPUSerial_11Changed"
QT_MOC_LITERAL(54, 934, 16), // "boardTypeChanged"
QT_MOC_LITERAL(55, 951, 16), // "BoardTypeChanged"
QT_MOC_LITERAL(56, 968, 13), // "rxGoodChanged"
QT_MOC_LITERAL(57, 982, 13), // "RxGoodChanged"
QT_MOC_LITERAL(58, 996, 18), // "rxCorrectedChanged"
QT_MOC_LITERAL(59, 1015, 18), // "RxCorrectedChanged"
QT_MOC_LITERAL(60, 1034, 15), // "rxErrorsChanged"
QT_MOC_LITERAL(61, 1050, 15), // "RxErrorsChanged"
QT_MOC_LITERAL(62, 1066, 15), // "rxMissedChanged"
QT_MOC_LITERAL(63, 1082, 15), // "RxMissedChanged"
QT_MOC_LITERAL(64, 1098, 16), // "rxFailureChanged"
QT_MOC_LITERAL(65, 1115, 16), // "RxFailureChanged"
QT_MOC_LITERAL(66, 1132, 16), // "txDroppedChanged"
QT_MOC_LITERAL(67, 1149, 16), // "TxDroppedChanged"
QT_MOC_LITERAL(68, 1166, 16), // "txFailureChanged"
QT_MOC_LITERAL(69, 1183, 16), // "TxFailureChanged"
QT_MOC_LITERAL(70, 1200, 13), // "resetsChanged"
QT_MOC_LITERAL(71, 1214, 13), // "ResetsChanged"
QT_MOC_LITERAL(72, 1228, 15), // "timeoutsChanged"
QT_MOC_LITERAL(73, 1244, 15), // "TimeoutsChanged"
QT_MOC_LITERAL(74, 1260, 11), // "rssiChanged"
QT_MOC_LITERAL(75, 1272, 11), // "RSSIChanged"
QT_MOC_LITERAL(76, 1284, 16), // "linkStateChanged"
QT_MOC_LITERAL(77, 1301, 28), // "OPLinkStatus_LinkState::Enum"
QT_MOC_LITERAL(78, 1330, 16), // "LinkStateChanged"
QT_MOC_LITERAL(79, 1347, 11), // "setDeviceID"
QT_MOC_LITERAL(80, 1359, 16), // "setAFCCorrection"
QT_MOC_LITERAL(81, 1376, 16), // "setBoardRevision"
QT_MOC_LITERAL(82, 1393, 16), // "setHeapRemaining"
QT_MOC_LITERAL(83, 1410, 16), // "setUAVTalkErrors"
QT_MOC_LITERAL(84, 1427, 14), // "setLinkQuality"
QT_MOC_LITERAL(85, 1442, 9), // "setTXRate"
QT_MOC_LITERAL(86, 1452, 9), // "setRXRate"
QT_MOC_LITERAL(87, 1462, 8), // "setTXSeq"
QT_MOC_LITERAL(88, 1471, 8), // "setRXSeq"
QT_MOC_LITERAL(89, 1480, 15), // "setTXPacketRate"
QT_MOC_LITERAL(90, 1496, 15), // "setRXPacketRate"
QT_MOC_LITERAL(91, 1512, 12), // "setCPUSerial"
QT_MOC_LITERAL(92, 1525, 13), // "setCPUSerial0"
QT_MOC_LITERAL(93, 1539, 14), // "setCPUSerial_0"
QT_MOC_LITERAL(94, 1554, 13), // "setCPUSerial1"
QT_MOC_LITERAL(95, 1568, 14), // "setCPUSerial_1"
QT_MOC_LITERAL(96, 1583, 13), // "setCPUSerial2"
QT_MOC_LITERAL(97, 1597, 14), // "setCPUSerial_2"
QT_MOC_LITERAL(98, 1612, 13), // "setCPUSerial3"
QT_MOC_LITERAL(99, 1626, 14), // "setCPUSerial_3"
QT_MOC_LITERAL(100, 1641, 13), // "setCPUSerial4"
QT_MOC_LITERAL(101, 1655, 14), // "setCPUSerial_4"
QT_MOC_LITERAL(102, 1670, 13), // "setCPUSerial5"
QT_MOC_LITERAL(103, 1684, 14), // "setCPUSerial_5"
QT_MOC_LITERAL(104, 1699, 13), // "setCPUSerial6"
QT_MOC_LITERAL(105, 1713, 14), // "setCPUSerial_6"
QT_MOC_LITERAL(106, 1728, 13), // "setCPUSerial7"
QT_MOC_LITERAL(107, 1742, 14), // "setCPUSerial_7"
QT_MOC_LITERAL(108, 1757, 13), // "setCPUSerial8"
QT_MOC_LITERAL(109, 1771, 14), // "setCPUSerial_8"
QT_MOC_LITERAL(110, 1786, 13), // "setCPUSerial9"
QT_MOC_LITERAL(111, 1800, 14), // "setCPUSerial_9"
QT_MOC_LITERAL(112, 1815, 14), // "setCPUSerial10"
QT_MOC_LITERAL(113, 1830, 15), // "setCPUSerial_10"
QT_MOC_LITERAL(114, 1846, 14), // "setCPUSerial11"
QT_MOC_LITERAL(115, 1861, 15), // "setCPUSerial_11"
QT_MOC_LITERAL(116, 1877, 12), // "setBoardType"
QT_MOC_LITERAL(117, 1890, 9), // "setRxGood"
QT_MOC_LITERAL(118, 1900, 14), // "setRxCorrected"
QT_MOC_LITERAL(119, 1915, 11), // "setRxErrors"
QT_MOC_LITERAL(120, 1927, 11), // "setRxMissed"
QT_MOC_LITERAL(121, 1939, 12), // "setRxFailure"
QT_MOC_LITERAL(122, 1952, 12), // "setTxDropped"
QT_MOC_LITERAL(123, 1965, 12), // "setTxFailure"
QT_MOC_LITERAL(124, 1978, 9), // "setResets"
QT_MOC_LITERAL(125, 1988, 11), // "setTimeouts"
QT_MOC_LITERAL(126, 2000, 7), // "setRSSI"
QT_MOC_LITERAL(127, 2008, 12), // "setLinkState"
QT_MOC_LITERAL(128, 2021, 17), // "emitNotifications"
QT_MOC_LITERAL(129, 2039, 11), // "getDeviceID"
QT_MOC_LITERAL(130, 2051, 16), // "getAFCCorrection"
QT_MOC_LITERAL(131, 2068, 16), // "getBoardRevision"
QT_MOC_LITERAL(132, 2085, 16), // "getHeapRemaining"
QT_MOC_LITERAL(133, 2102, 16), // "getUAVTalkErrors"
QT_MOC_LITERAL(134, 2119, 14), // "getLinkQuality"
QT_MOC_LITERAL(135, 2134, 9), // "getTXRate"
QT_MOC_LITERAL(136, 2144, 9), // "getRXRate"
QT_MOC_LITERAL(137, 2154, 8), // "getTXSeq"
QT_MOC_LITERAL(138, 2163, 8), // "getRXSeq"
QT_MOC_LITERAL(139, 2172, 15), // "getTXPacketRate"
QT_MOC_LITERAL(140, 2188, 15), // "getRXPacketRate"
QT_MOC_LITERAL(141, 2204, 9), // "cpuSerial"
QT_MOC_LITERAL(142, 2214, 12), // "getCPUSerial"
QT_MOC_LITERAL(143, 2227, 14), // "getCPUSerial_0"
QT_MOC_LITERAL(144, 2242, 14), // "getCPUSerial_1"
QT_MOC_LITERAL(145, 2257, 14), // "getCPUSerial_2"
QT_MOC_LITERAL(146, 2272, 14), // "getCPUSerial_3"
QT_MOC_LITERAL(147, 2287, 14), // "getCPUSerial_4"
QT_MOC_LITERAL(148, 2302, 14), // "getCPUSerial_5"
QT_MOC_LITERAL(149, 2317, 14), // "getCPUSerial_6"
QT_MOC_LITERAL(150, 2332, 14), // "getCPUSerial_7"
QT_MOC_LITERAL(151, 2347, 14), // "getCPUSerial_8"
QT_MOC_LITERAL(152, 2362, 14), // "getCPUSerial_9"
QT_MOC_LITERAL(153, 2377, 15), // "getCPUSerial_10"
QT_MOC_LITERAL(154, 2393, 15), // "getCPUSerial_11"
QT_MOC_LITERAL(155, 2409, 12), // "getBoardType"
QT_MOC_LITERAL(156, 2422, 9), // "getRxGood"
QT_MOC_LITERAL(157, 2432, 14), // "getRxCorrected"
QT_MOC_LITERAL(158, 2447, 11), // "getRxErrors"
QT_MOC_LITERAL(159, 2459, 11), // "getRxMissed"
QT_MOC_LITERAL(160, 2471, 12), // "getRxFailure"
QT_MOC_LITERAL(161, 2484, 12), // "getTxDropped"
QT_MOC_LITERAL(162, 2497, 12), // "getTxFailure"
QT_MOC_LITERAL(163, 2510, 9), // "getResets"
QT_MOC_LITERAL(164, 2520, 11), // "getTimeouts"
QT_MOC_LITERAL(165, 2532, 7), // "getRSSI"
QT_MOC_LITERAL(166, 2540, 12), // "getLinkState"
QT_MOC_LITERAL(167, 2553, 8), // "deviceID"
QT_MOC_LITERAL(168, 2562, 13), // "afcCorrection"
QT_MOC_LITERAL(169, 2576, 13), // "boardRevision"
QT_MOC_LITERAL(170, 2590, 13), // "heapRemaining"
QT_MOC_LITERAL(171, 2604, 13), // "uavTalkErrors"
QT_MOC_LITERAL(172, 2618, 11), // "linkQuality"
QT_MOC_LITERAL(173, 2630, 6), // "txRate"
QT_MOC_LITERAL(174, 2637, 6), // "rxRate"
QT_MOC_LITERAL(175, 2644, 5), // "txSeq"
QT_MOC_LITERAL(176, 2650, 5), // "rxSeq"
QT_MOC_LITERAL(177, 2656, 12), // "txPacketRate"
QT_MOC_LITERAL(178, 2669, 12), // "rxPacketRate"
QT_MOC_LITERAL(179, 2682, 10), // "cpuSerial0"
QT_MOC_LITERAL(180, 2693, 10), // "cpuSerial1"
QT_MOC_LITERAL(181, 2704, 10), // "cpuSerial2"
QT_MOC_LITERAL(182, 2715, 10), // "cpuSerial3"
QT_MOC_LITERAL(183, 2726, 10), // "cpuSerial4"
QT_MOC_LITERAL(184, 2737, 10), // "cpuSerial5"
QT_MOC_LITERAL(185, 2748, 10), // "cpuSerial6"
QT_MOC_LITERAL(186, 2759, 10), // "cpuSerial7"
QT_MOC_LITERAL(187, 2770, 10), // "cpuSerial8"
QT_MOC_LITERAL(188, 2781, 10), // "cpuSerial9"
QT_MOC_LITERAL(189, 2792, 11), // "cpuSerial10"
QT_MOC_LITERAL(190, 2804, 11), // "cpuSerial11"
QT_MOC_LITERAL(191, 2816, 9), // "boardType"
QT_MOC_LITERAL(192, 2826, 6), // "rxGood"
QT_MOC_LITERAL(193, 2833, 11), // "rxCorrected"
QT_MOC_LITERAL(194, 2845, 8), // "rxErrors"
QT_MOC_LITERAL(195, 2854, 8), // "rxMissed"
QT_MOC_LITERAL(196, 2863, 9), // "rxFailure"
QT_MOC_LITERAL(197, 2873, 9), // "txDropped"
QT_MOC_LITERAL(198, 2883, 9), // "txFailure"
QT_MOC_LITERAL(199, 2893, 6), // "resets"
QT_MOC_LITERAL(200, 2900, 8), // "timeouts"
QT_MOC_LITERAL(201, 2909, 4), // "rssi"
QT_MOC_LITERAL(202, 2914, 9), // "linkState"
QT_MOC_LITERAL(203, 2924, 8), // "DeviceID"
QT_MOC_LITERAL(204, 2933, 13), // "AFCCorrection"
QT_MOC_LITERAL(205, 2947, 13), // "BoardRevision"
QT_MOC_LITERAL(206, 2961, 13), // "HeapRemaining"
QT_MOC_LITERAL(207, 2975, 13), // "UAVTalkErrors"
QT_MOC_LITERAL(208, 2989, 11), // "LinkQuality"
QT_MOC_LITERAL(209, 3001, 6), // "TXRate"
QT_MOC_LITERAL(210, 3008, 6), // "RXRate"
QT_MOC_LITERAL(211, 3015, 5), // "TXSeq"
QT_MOC_LITERAL(212, 3021, 5), // "RXSeq"
QT_MOC_LITERAL(213, 3027, 12), // "TXPacketRate"
QT_MOC_LITERAL(214, 3040, 12), // "RXPacketRate"
QT_MOC_LITERAL(215, 3053, 11), // "CPUSerial_0"
QT_MOC_LITERAL(216, 3065, 11), // "CPUSerial_1"
QT_MOC_LITERAL(217, 3077, 11), // "CPUSerial_2"
QT_MOC_LITERAL(218, 3089, 11), // "CPUSerial_3"
QT_MOC_LITERAL(219, 3101, 11), // "CPUSerial_4"
QT_MOC_LITERAL(220, 3113, 11), // "CPUSerial_5"
QT_MOC_LITERAL(221, 3125, 11), // "CPUSerial_6"
QT_MOC_LITERAL(222, 3137, 11), // "CPUSerial_7"
QT_MOC_LITERAL(223, 3149, 11), // "CPUSerial_8"
QT_MOC_LITERAL(224, 3161, 11), // "CPUSerial_9"
QT_MOC_LITERAL(225, 3173, 12), // "CPUSerial_10"
QT_MOC_LITERAL(226, 3186, 12), // "CPUSerial_11"
QT_MOC_LITERAL(227, 3199, 9), // "BoardType"
QT_MOC_LITERAL(228, 3209, 6), // "RxGood"
QT_MOC_LITERAL(229, 3216, 11), // "RxCorrected"
QT_MOC_LITERAL(230, 3228, 8), // "RxErrors"
QT_MOC_LITERAL(231, 3237, 8), // "RxMissed"
QT_MOC_LITERAL(232, 3246, 9), // "RxFailure"
QT_MOC_LITERAL(233, 3256, 9), // "TxDropped"
QT_MOC_LITERAL(234, 3266, 9), // "TxFailure"
QT_MOC_LITERAL(235, 3276, 6), // "Resets"
QT_MOC_LITERAL(236, 3283, 8), // "Timeouts"
QT_MOC_LITERAL(237, 3292, 4), // "RSSI"
QT_MOC_LITERAL(238, 3297, 9) // "LinkState"

    },
    "OPLinkStatus\0deviceIDChanged\0\0value\0"
    "DeviceIDChanged\0afcCorrectionChanged\0"
    "AFCCorrectionChanged\0boardRevisionChanged\0"
    "BoardRevisionChanged\0heapRemainingChanged\0"
    "HeapRemainingChanged\0uavTalkErrorsChanged\0"
    "UAVTalkErrorsChanged\0linkQualityChanged\0"
    "LinkQualityChanged\0txRateChanged\0"
    "TXRateChanged\0rxRateChanged\0RXRateChanged\0"
    "txSeqChanged\0TXSeqChanged\0rxSeqChanged\0"
    "RXSeqChanged\0txPacketRateChanged\0"
    "TXPacketRateChanged\0rxPacketRateChanged\0"
    "RXPacketRateChanged\0cpuSerialChanged\0"
    "index\0CPUSerialChanged\0cpuSerial0Changed\0"
    "CPUSerial_0Changed\0cpuSerial1Changed\0"
    "CPUSerial_1Changed\0cpuSerial2Changed\0"
    "CPUSerial_2Changed\0cpuSerial3Changed\0"
    "CPUSerial_3Changed\0cpuSerial4Changed\0"
    "CPUSerial_4Changed\0cpuSerial5Changed\0"
    "CPUSerial_5Changed\0cpuSerial6Changed\0"
    "CPUSerial_6Changed\0cpuSerial7Changed\0"
    "CPUSerial_7Changed\0cpuSerial8Changed\0"
    "CPUSerial_8Changed\0cpuSerial9Changed\0"
    "CPUSerial_9Changed\0cpuSerial10Changed\0"
    "CPUSerial_10Changed\0cpuSerial11Changed\0"
    "CPUSerial_11Changed\0boardTypeChanged\0"
    "BoardTypeChanged\0rxGoodChanged\0"
    "RxGoodChanged\0rxCorrectedChanged\0"
    "RxCorrectedChanged\0rxErrorsChanged\0"
    "RxErrorsChanged\0rxMissedChanged\0"
    "RxMissedChanged\0rxFailureChanged\0"
    "RxFailureChanged\0txDroppedChanged\0"
    "TxDroppedChanged\0txFailureChanged\0"
    "TxFailureChanged\0resetsChanged\0"
    "ResetsChanged\0timeoutsChanged\0"
    "TimeoutsChanged\0rssiChanged\0RSSIChanged\0"
    "linkStateChanged\0OPLinkStatus_LinkState::Enum\0"
    "LinkStateChanged\0setDeviceID\0"
    "setAFCCorrection\0setBoardRevision\0"
    "setHeapRemaining\0setUAVTalkErrors\0"
    "setLinkQuality\0setTXRate\0setRXRate\0"
    "setTXSeq\0setRXSeq\0setTXPacketRate\0"
    "setRXPacketRate\0setCPUSerial\0setCPUSerial0\0"
    "setCPUSerial_0\0setCPUSerial1\0"
    "setCPUSerial_1\0setCPUSerial2\0"
    "setCPUSerial_2\0setCPUSerial3\0"
    "setCPUSerial_3\0setCPUSerial4\0"
    "setCPUSerial_4\0setCPUSerial5\0"
    "setCPUSerial_5\0setCPUSerial6\0"
    "setCPUSerial_6\0setCPUSerial7\0"
    "setCPUSerial_7\0setCPUSerial8\0"
    "setCPUSerial_8\0setCPUSerial9\0"
    "setCPUSerial_9\0setCPUSerial10\0"
    "setCPUSerial_10\0setCPUSerial11\0"
    "setCPUSerial_11\0setBoardType\0setRxGood\0"
    "setRxCorrected\0setRxErrors\0setRxMissed\0"
    "setRxFailure\0setTxDropped\0setTxFailure\0"
    "setResets\0setTimeouts\0setRSSI\0"
    "setLinkState\0emitNotifications\0"
    "getDeviceID\0getAFCCorrection\0"
    "getBoardRevision\0getHeapRemaining\0"
    "getUAVTalkErrors\0getLinkQuality\0"
    "getTXRate\0getRXRate\0getTXSeq\0getRXSeq\0"
    "getTXPacketRate\0getRXPacketRate\0"
    "cpuSerial\0getCPUSerial\0getCPUSerial_0\0"
    "getCPUSerial_1\0getCPUSerial_2\0"
    "getCPUSerial_3\0getCPUSerial_4\0"
    "getCPUSerial_5\0getCPUSerial_6\0"
    "getCPUSerial_7\0getCPUSerial_8\0"
    "getCPUSerial_9\0getCPUSerial_10\0"
    "getCPUSerial_11\0getBoardType\0getRxGood\0"
    "getRxCorrected\0getRxErrors\0getRxMissed\0"
    "getRxFailure\0getTxDropped\0getTxFailure\0"
    "getResets\0getTimeouts\0getRSSI\0"
    "getLinkState\0deviceID\0afcCorrection\0"
    "boardRevision\0heapRemaining\0uavTalkErrors\0"
    "linkQuality\0txRate\0rxRate\0txSeq\0rxSeq\0"
    "txPacketRate\0rxPacketRate\0cpuSerial0\0"
    "cpuSerial1\0cpuSerial2\0cpuSerial3\0"
    "cpuSerial4\0cpuSerial5\0cpuSerial6\0"
    "cpuSerial7\0cpuSerial8\0cpuSerial9\0"
    "cpuSerial10\0cpuSerial11\0boardType\0"
    "rxGood\0rxCorrected\0rxErrors\0rxMissed\0"
    "rxFailure\0txDropped\0txFailure\0resets\0"
    "timeouts\0rssi\0linkState\0DeviceID\0"
    "AFCCorrection\0BoardRevision\0HeapRemaining\0"
    "UAVTalkErrors\0LinkQuality\0TXRate\0"
    "RXRate\0TXSeq\0RXSeq\0TXPacketRate\0"
    "RXPacketRate\0CPUSerial_0\0CPUSerial_1\0"
    "CPUSerial_2\0CPUSerial_3\0CPUSerial_4\0"
    "CPUSerial_5\0CPUSerial_6\0CPUSerial_7\0"
    "CPUSerial_8\0CPUSerial_9\0CPUSerial_10\0"
    "CPUSerial_11\0BoardType\0RxGood\0RxCorrected\0"
    "RxErrors\0RxMissed\0RxFailure\0TxDropped\0"
    "TxFailure\0Resets\0Timeouts\0RSSI\0LinkState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPLinkStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     175,   14, // methods
      72, 1348, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      74,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  889,    2, 0x06 /* Public */,
       4,    1,  892,    2, 0x06 /* Public */,
       5,    1,  895,    2, 0x06 /* Public */,
       6,    1,  898,    2, 0x06 /* Public */,
       7,    1,  901,    2, 0x06 /* Public */,
       8,    1,  904,    2, 0x06 /* Public */,
       9,    1,  907,    2, 0x06 /* Public */,
      10,    1,  910,    2, 0x06 /* Public */,
      11,    1,  913,    2, 0x06 /* Public */,
      12,    1,  916,    2, 0x06 /* Public */,
      13,    1,  919,    2, 0x06 /* Public */,
      14,    1,  922,    2, 0x06 /* Public */,
      15,    1,  925,    2, 0x06 /* Public */,
      16,    1,  928,    2, 0x06 /* Public */,
      17,    1,  931,    2, 0x06 /* Public */,
      18,    1,  934,    2, 0x06 /* Public */,
      19,    1,  937,    2, 0x06 /* Public */,
      20,    1,  940,    2, 0x06 /* Public */,
      21,    1,  943,    2, 0x06 /* Public */,
      22,    1,  946,    2, 0x06 /* Public */,
      23,    1,  949,    2, 0x06 /* Public */,
      24,    1,  952,    2, 0x06 /* Public */,
      25,    1,  955,    2, 0x06 /* Public */,
      26,    1,  958,    2, 0x06 /* Public */,
      27,    2,  961,    2, 0x06 /* Public */,
      29,    2,  966,    2, 0x06 /* Public */,
      30,    1,  971,    2, 0x06 /* Public */,
      31,    1,  974,    2, 0x06 /* Public */,
      32,    1,  977,    2, 0x06 /* Public */,
      33,    1,  980,    2, 0x06 /* Public */,
      34,    1,  983,    2, 0x06 /* Public */,
      35,    1,  986,    2, 0x06 /* Public */,
      36,    1,  989,    2, 0x06 /* Public */,
      37,    1,  992,    2, 0x06 /* Public */,
      38,    1,  995,    2, 0x06 /* Public */,
      39,    1,  998,    2, 0x06 /* Public */,
      40,    1, 1001,    2, 0x06 /* Public */,
      41,    1, 1004,    2, 0x06 /* Public */,
      42,    1, 1007,    2, 0x06 /* Public */,
      43,    1, 1010,    2, 0x06 /* Public */,
      44,    1, 1013,    2, 0x06 /* Public */,
      45,    1, 1016,    2, 0x06 /* Public */,
      46,    1, 1019,    2, 0x06 /* Public */,
      47,    1, 1022,    2, 0x06 /* Public */,
      48,    1, 1025,    2, 0x06 /* Public */,
      49,    1, 1028,    2, 0x06 /* Public */,
      50,    1, 1031,    2, 0x06 /* Public */,
      51,    1, 1034,    2, 0x06 /* Public */,
      52,    1, 1037,    2, 0x06 /* Public */,
      53,    1, 1040,    2, 0x06 /* Public */,
      54,    1, 1043,    2, 0x06 /* Public */,
      55,    1, 1046,    2, 0x06 /* Public */,
      56,    1, 1049,    2, 0x06 /* Public */,
      57,    1, 1052,    2, 0x06 /* Public */,
      58,    1, 1055,    2, 0x06 /* Public */,
      59,    1, 1058,    2, 0x06 /* Public */,
      60,    1, 1061,    2, 0x06 /* Public */,
      61,    1, 1064,    2, 0x06 /* Public */,
      62,    1, 1067,    2, 0x06 /* Public */,
      63,    1, 1070,    2, 0x06 /* Public */,
      64,    1, 1073,    2, 0x06 /* Public */,
      65,    1, 1076,    2, 0x06 /* Public */,
      66,    1, 1079,    2, 0x06 /* Public */,
      67,    1, 1082,    2, 0x06 /* Public */,
      68,    1, 1085,    2, 0x06 /* Public */,
      69,    1, 1088,    2, 0x06 /* Public */,
      70,    1, 1091,    2, 0x06 /* Public */,
      71,    1, 1094,    2, 0x06 /* Public */,
      72,    1, 1097,    2, 0x06 /* Public */,
      73,    1, 1100,    2, 0x06 /* Public */,
      74,    1, 1103,    2, 0x06 /* Public */,
      75,    1, 1106,    2, 0x06 /* Public */,
      76,    1, 1109,    2, 0x06 /* Public */,
      78,    1, 1112,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      79,    1, 1115,    2, 0x0a /* Public */,
      80,    1, 1118,    2, 0x0a /* Public */,
      81,    1, 1121,    2, 0x0a /* Public */,
      82,    1, 1124,    2, 0x0a /* Public */,
      83,    1, 1127,    2, 0x0a /* Public */,
      84,    1, 1130,    2, 0x0a /* Public */,
      85,    1, 1133,    2, 0x0a /* Public */,
      86,    1, 1136,    2, 0x0a /* Public */,
      87,    1, 1139,    2, 0x0a /* Public */,
      88,    1, 1142,    2, 0x0a /* Public */,
      89,    1, 1145,    2, 0x0a /* Public */,
      90,    1, 1148,    2, 0x0a /* Public */,
      91,    2, 1151,    2, 0x0a /* Public */,
      91,    2, 1156,    2, 0x0a /* Public */,
      92,    1, 1161,    2, 0x0a /* Public */,
      93,    1, 1164,    2, 0x0a /* Public */,
      94,    1, 1167,    2, 0x0a /* Public */,
      95,    1, 1170,    2, 0x0a /* Public */,
      96,    1, 1173,    2, 0x0a /* Public */,
      97,    1, 1176,    2, 0x0a /* Public */,
      98,    1, 1179,    2, 0x0a /* Public */,
      99,    1, 1182,    2, 0x0a /* Public */,
     100,    1, 1185,    2, 0x0a /* Public */,
     101,    1, 1188,    2, 0x0a /* Public */,
     102,    1, 1191,    2, 0x0a /* Public */,
     103,    1, 1194,    2, 0x0a /* Public */,
     104,    1, 1197,    2, 0x0a /* Public */,
     105,    1, 1200,    2, 0x0a /* Public */,
     106,    1, 1203,    2, 0x0a /* Public */,
     107,    1, 1206,    2, 0x0a /* Public */,
     108,    1, 1209,    2, 0x0a /* Public */,
     109,    1, 1212,    2, 0x0a /* Public */,
     110,    1, 1215,    2, 0x0a /* Public */,
     111,    1, 1218,    2, 0x0a /* Public */,
     112,    1, 1221,    2, 0x0a /* Public */,
     113,    1, 1224,    2, 0x0a /* Public */,
     114,    1, 1227,    2, 0x0a /* Public */,
     115,    1, 1230,    2, 0x0a /* Public */,
     116,    1, 1233,    2, 0x0a /* Public */,
     116,    1, 1236,    2, 0x0a /* Public */,
     117,    1, 1239,    2, 0x0a /* Public */,
     117,    1, 1242,    2, 0x0a /* Public */,
     118,    1, 1245,    2, 0x0a /* Public */,
     118,    1, 1248,    2, 0x0a /* Public */,
     119,    1, 1251,    2, 0x0a /* Public */,
     119,    1, 1254,    2, 0x0a /* Public */,
     120,    1, 1257,    2, 0x0a /* Public */,
     120,    1, 1260,    2, 0x0a /* Public */,
     121,    1, 1263,    2, 0x0a /* Public */,
     121,    1, 1266,    2, 0x0a /* Public */,
     122,    1, 1269,    2, 0x0a /* Public */,
     122,    1, 1272,    2, 0x0a /* Public */,
     123,    1, 1275,    2, 0x0a /* Public */,
     123,    1, 1278,    2, 0x0a /* Public */,
     124,    1, 1281,    2, 0x0a /* Public */,
     124,    1, 1284,    2, 0x0a /* Public */,
     125,    1, 1287,    2, 0x0a /* Public */,
     125,    1, 1290,    2, 0x0a /* Public */,
     126,    1, 1293,    2, 0x0a /* Public */,
     126,    1, 1296,    2, 0x0a /* Public */,
     127,    1, 1299,    2, 0x0a /* Public */,
     127,    1, 1302,    2, 0x0a /* Public */,
     128,    0, 1305,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     129,    0, 1306,    2, 0x02 /* Public */,
     130,    0, 1307,    2, 0x02 /* Public */,
     131,    0, 1308,    2, 0x02 /* Public */,
     132,    0, 1309,    2, 0x02 /* Public */,
     133,    0, 1310,    2, 0x02 /* Public */,
     134,    0, 1311,    2, 0x02 /* Public */,
     135,    0, 1312,    2, 0x02 /* Public */,
     136,    0, 1313,    2, 0x02 /* Public */,
     137,    0, 1314,    2, 0x02 /* Public */,
     138,    0, 1315,    2, 0x02 /* Public */,
     139,    0, 1316,    2, 0x02 /* Public */,
     140,    0, 1317,    2, 0x02 /* Public */,
     141,    1, 1318,    2, 0x02 /* Public */,
     142,    1, 1321,    2, 0x02 /* Public */,
     143,    0, 1324,    2, 0x02 /* Public */,
     144,    0, 1325,    2, 0x02 /* Public */,
     145,    0, 1326,    2, 0x02 /* Public */,
     146,    0, 1327,    2, 0x02 /* Public */,
     147,    0, 1328,    2, 0x02 /* Public */,
     148,    0, 1329,    2, 0x02 /* Public */,
     149,    0, 1330,    2, 0x02 /* Public */,
     150,    0, 1331,    2, 0x02 /* Public */,
     151,    0, 1332,    2, 0x02 /* Public */,
     152,    0, 1333,    2, 0x02 /* Public */,
     153,    0, 1334,    2, 0x02 /* Public */,
     154,    0, 1335,    2, 0x02 /* Public */,
     155,    0, 1336,    2, 0x02 /* Public */,
     156,    0, 1337,    2, 0x02 /* Public */,
     157,    0, 1338,    2, 0x02 /* Public */,
     158,    0, 1339,    2, 0x02 /* Public */,
     159,    0, 1340,    2, 0x02 /* Public */,
     160,    0, 1341,    2, 0x02 /* Public */,
     161,    0, 1342,    2, 0x02 /* Public */,
     162,    0, 1343,    2, 0x02 /* Public */,
     163,    0, 1344,    2, 0x02 /* Public */,
     164,    0, 1345,    2, 0x02 /* Public */,
     165,    0, 1346,    2, 0x02 /* Public */,
     166,    0, 1347,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,   28,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   28,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, 0x80000000 | 77,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,   28,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   28,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, 0x80000000 | 77,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::Int,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort, QMetaType::UInt,   28,
    QMetaType::UChar, QMetaType::UInt,   28,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::SChar,
    QMetaType::UChar,

 // properties: name, type, flags
     167, QMetaType::UInt, 0x00495103,
     168, QMetaType::Int, 0x00495003,
     169, QMetaType::UShort, 0x00495103,
     170, QMetaType::UShort, 0x00495103,
     171, QMetaType::UShort, 0x00495003,
     172, QMetaType::UShort, 0x00495103,
     173, QMetaType::UShort, 0x00495003,
     174, QMetaType::UShort, 0x00495003,
     175, QMetaType::UShort, 0x00495003,
     176, QMetaType::UShort, 0x00495003,
     177, QMetaType::UShort, 0x00495003,
     178, QMetaType::UShort, 0x00495003,
     179, QMetaType::UShort, 0x00495003,
     180, QMetaType::UShort, 0x00495003,
     181, QMetaType::UShort, 0x00495003,
     182, QMetaType::UShort, 0x00495003,
     183, QMetaType::UShort, 0x00495003,
     184, QMetaType::UShort, 0x00495003,
     185, QMetaType::UShort, 0x00495003,
     186, QMetaType::UShort, 0x00495003,
     187, QMetaType::UShort, 0x00495003,
     188, QMetaType::UShort, 0x00495003,
     189, QMetaType::UShort, 0x00495003,
     190, QMetaType::UShort, 0x00495003,
     191, QMetaType::UShort, 0x00495103,
     192, QMetaType::UShort, 0x00495103,
     193, QMetaType::UShort, 0x00495103,
     194, QMetaType::UShort, 0x00495103,
     195, QMetaType::UShort, 0x00495103,
     196, QMetaType::UShort, 0x00495103,
     197, QMetaType::UShort, 0x00495103,
     198, QMetaType::UShort, 0x00495103,
     199, QMetaType::UShort, 0x00495103,
     200, QMetaType::UShort, 0x00495103,
     201, QMetaType::Short, 0x00495003,
     202, 0x80000000 | 77, 0x0049510b,
     203, QMetaType::UInt, 0x00495103,
     204, QMetaType::Int, 0x00495103,
     205, QMetaType::UShort, 0x00495103,
     206, QMetaType::UShort, 0x00495103,
     207, QMetaType::UShort, 0x00495103,
     208, QMetaType::UShort, 0x00495103,
     209, QMetaType::UShort, 0x00495103,
     210, QMetaType::UShort, 0x00495103,
     211, QMetaType::UShort, 0x00495103,
     212, QMetaType::UShort, 0x00495103,
     213, QMetaType::UShort, 0x00495103,
     214, QMetaType::UShort, 0x00495103,
     215, QMetaType::UChar, 0x00495103,
     216, QMetaType::UChar, 0x00495103,
     217, QMetaType::UChar, 0x00495103,
     218, QMetaType::UChar, 0x00495103,
     219, QMetaType::UChar, 0x00495103,
     220, QMetaType::UChar, 0x00495103,
     221, QMetaType::UChar, 0x00495103,
     222, QMetaType::UChar, 0x00495103,
     223, QMetaType::UChar, 0x00495103,
     224, QMetaType::UChar, 0x00495103,
     225, QMetaType::UChar, 0x00495103,
     226, QMetaType::UChar, 0x00495103,
     227, QMetaType::UChar, 0x00495103,
     228, QMetaType::UChar, 0x00495103,
     229, QMetaType::UChar, 0x00495103,
     230, QMetaType::UChar, 0x00495103,
     231, QMetaType::UChar, 0x00495103,
     232, QMetaType::UChar, 0x00495103,
     233, QMetaType::UChar, 0x00495103,
     234, QMetaType::UChar, 0x00495103,
     235, QMetaType::UChar, 0x00495103,
     236, QMetaType::UChar, 0x00495103,
     237, QMetaType::SChar, 0x00495103,
     238, QMetaType::UChar, 0x00495103,

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
      26,
      28,
      30,
      32,
      34,
      36,
      38,
      40,
      42,
      44,
      46,
      48,
      50,
      52,
      54,
      56,
      58,
      60,
      62,
      64,
      66,
      68,
      70,
      72,
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
      27,
      29,
      31,
      33,
      35,
      37,
      39,
      41,
      43,
      45,
      47,
      49,
      51,
      53,
      55,
      57,
      59,
      61,
      63,
      65,
      67,
      69,
      71,
      73,

       0        // eod
};

void OPLinkStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OPLinkStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceIDChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: _t->DeviceIDChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->afcCorrectionChanged((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 3: _t->AFCCorrectionChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 4: _t->boardRevisionChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 5: _t->BoardRevisionChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 6: _t->heapRemainingChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 7: _t->HeapRemainingChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 8: _t->uavTalkErrorsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 9: _t->UAVTalkErrorsChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 10: _t->linkQualityChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 11: _t->LinkQualityChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 12: _t->txRateChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 13: _t->TXRateChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 14: _t->rxRateChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 15: _t->RXRateChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 16: _t->txSeqChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 17: _t->TXSeqChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 18: _t->rxSeqChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 19: _t->RXSeqChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 20: _t->txPacketRateChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 21: _t->TXPacketRateChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 22: _t->rxPacketRateChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 23: _t->RXPacketRateChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 24: _t->cpuSerialChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 25: _t->CPUSerialChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 26: _t->cpuSerial0Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 27: _t->CPUSerial_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->cpuSerial1Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 29: _t->CPUSerial_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->cpuSerial2Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 31: _t->CPUSerial_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->cpuSerial3Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 33: _t->CPUSerial_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->cpuSerial4Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 35: _t->CPUSerial_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->cpuSerial5Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 37: _t->CPUSerial_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->cpuSerial6Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 39: _t->CPUSerial_6Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->cpuSerial7Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 41: _t->CPUSerial_7Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->cpuSerial8Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 43: _t->CPUSerial_8Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->cpuSerial9Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 45: _t->CPUSerial_9Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->cpuSerial10Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 47: _t->CPUSerial_10Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 48: _t->cpuSerial11Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 49: _t->CPUSerial_11Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 50: _t->boardTypeChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 51: _t->BoardTypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->rxGoodChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 53: _t->RxGoodChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 54: _t->rxCorrectedChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 55: _t->RxCorrectedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 56: _t->rxErrorsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 57: _t->RxErrorsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 58: _t->rxMissedChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 59: _t->RxMissedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 60: _t->rxFailureChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 61: _t->RxFailureChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 62: _t->txDroppedChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 63: _t->TxDroppedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 64: _t->txFailureChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 65: _t->TxFailureChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 66: _t->resetsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 67: _t->ResetsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 68: _t->timeoutsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 69: _t->TimeoutsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 70: _t->rssiChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 71: _t->RSSIChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 72: _t->linkStateChanged((*reinterpret_cast< const OPLinkStatus_LinkState::Enum(*)>(_a[1]))); break;
        case 73: _t->LinkStateChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 74: _t->setDeviceID((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 75: _t->setAFCCorrection((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 76: _t->setBoardRevision((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 77: _t->setHeapRemaining((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 78: _t->setUAVTalkErrors((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 79: _t->setLinkQuality((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 80: _t->setTXRate((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 81: _t->setRXRate((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 82: _t->setTXSeq((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 83: _t->setRXSeq((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 84: _t->setTXPacketRate((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 85: _t->setRXPacketRate((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 86: _t->setCPUSerial((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 87: _t->setCPUSerial((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 88: _t->setCPUSerial0((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 89: _t->setCPUSerial_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 90: _t->setCPUSerial1((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 91: _t->setCPUSerial_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 92: _t->setCPUSerial2((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 93: _t->setCPUSerial_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 94: _t->setCPUSerial3((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 95: _t->setCPUSerial_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 96: _t->setCPUSerial4((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 97: _t->setCPUSerial_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 98: _t->setCPUSerial5((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 99: _t->setCPUSerial_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 100: _t->setCPUSerial6((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 101: _t->setCPUSerial_6((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 102: _t->setCPUSerial7((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 103: _t->setCPUSerial_7((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->setCPUSerial8((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 105: _t->setCPUSerial_8((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 106: _t->setCPUSerial9((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 107: _t->setCPUSerial_9((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 108: _t->setCPUSerial10((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 109: _t->setCPUSerial_10((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 110: _t->setCPUSerial11((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 111: _t->setCPUSerial_11((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 112: _t->setBoardType((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 113: _t->setBoardType((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 114: _t->setRxGood((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 115: _t->setRxGood((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 116: _t->setRxCorrected((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 117: _t->setRxCorrected((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 118: _t->setRxErrors((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 119: _t->setRxErrors((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 120: _t->setRxMissed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 121: _t->setRxMissed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 122: _t->setRxFailure((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 123: _t->setRxFailure((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 124: _t->setTxDropped((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 125: _t->setTxDropped((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 126: _t->setTxFailure((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 127: _t->setTxFailure((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 128: _t->setResets((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 129: _t->setResets((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 130: _t->setTimeouts((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 131: _t->setTimeouts((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 132: _t->setRSSI((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 133: _t->setRSSI((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 134: _t->setLinkState((*reinterpret_cast< const OPLinkStatus_LinkState::Enum(*)>(_a[1]))); break;
        case 135: _t->setLinkState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 136: _t->emitNotifications(); break;
        case 137: { quint32 _r = _t->getDeviceID();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 138: { qint32 _r = _t->getAFCCorrection();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 139: { quint16 _r = _t->getBoardRevision();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 140: { quint16 _r = _t->getHeapRemaining();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 141: { quint16 _r = _t->getUAVTalkErrors();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 142: { quint16 _r = _t->getLinkQuality();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 143: { quint16 _r = _t->getTXRate();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 144: { quint16 _r = _t->getRXRate();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 145: { quint16 _r = _t->getTXSeq();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 146: { quint16 _r = _t->getRXSeq();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 147: { quint16 _r = _t->getTXPacketRate();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 148: { quint16 _r = _t->getRXPacketRate();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 149: { quint16 _r = _t->cpuSerial((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 150: { quint8 _r = _t->getCPUSerial((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 151: { quint8 _r = _t->getCPUSerial_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 152: { quint8 _r = _t->getCPUSerial_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 153: { quint8 _r = _t->getCPUSerial_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 154: { quint8 _r = _t->getCPUSerial_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 155: { quint8 _r = _t->getCPUSerial_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 156: { quint8 _r = _t->getCPUSerial_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 157: { quint8 _r = _t->getCPUSerial_6();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 158: { quint8 _r = _t->getCPUSerial_7();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 159: { quint8 _r = _t->getCPUSerial_8();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 160: { quint8 _r = _t->getCPUSerial_9();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 161: { quint8 _r = _t->getCPUSerial_10();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 162: { quint8 _r = _t->getCPUSerial_11();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 163: { quint8 _r = _t->getBoardType();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 164: { quint8 _r = _t->getRxGood();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 165: { quint8 _r = _t->getRxCorrected();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 166: { quint8 _r = _t->getRxErrors();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 167: { quint8 _r = _t->getRxMissed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 168: { quint8 _r = _t->getRxFailure();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 169: { quint8 _r = _t->getTxDropped();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 170: { quint8 _r = _t->getTxFailure();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 171: { quint8 _r = _t->getResets();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 172: { quint8 _r = _t->getTimeouts();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 173: { qint8 _r = _t->getRSSI();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 174: { quint8 _r = _t->getLinkState();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OPLinkStatus::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::deviceIDChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::DeviceIDChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::afcCorrectionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::AFCCorrectionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::boardRevisionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::BoardRevisionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::heapRemainingChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::HeapRemainingChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::uavTalkErrorsChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::UAVTalkErrorsChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::linkQualityChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::LinkQualityChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::txRateChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::TXRateChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::rxRateChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::RXRateChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::txSeqChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::TXSeqChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::rxSeqChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::RXSeqChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::txPacketRateChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::TXPacketRateChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::rxPacketRateChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::RXPacketRateChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerialChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerialChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerial0Changed)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerial_0Changed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerial1Changed)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerial_1Changed)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerial2Changed)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerial_2Changed)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerial3Changed)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerial_3Changed)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerial4Changed)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerial_4Changed)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerial5Changed)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerial_5Changed)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerial6Changed)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerial_6Changed)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerial7Changed)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerial_7Changed)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerial8Changed)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerial_8Changed)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerial9Changed)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerial_9Changed)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerial10Changed)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerial_10Changed)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::cpuSerial11Changed)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::CPUSerial_11Changed)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::boardTypeChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::BoardTypeChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::rxGoodChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::RxGoodChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::rxCorrectedChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::RxCorrectedChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::rxErrorsChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::RxErrorsChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::rxMissedChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::RxMissedChanged)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::rxFailureChanged)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::RxFailureChanged)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::txDroppedChanged)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::TxDroppedChanged)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::txFailureChanged)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::TxFailureChanged)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::resetsChanged)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::ResetsChanged)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::timeoutsChanged)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::TimeoutsChanged)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::rssiChanged)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::RSSIChanged)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(const OPLinkStatus_LinkState::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::linkStateChanged)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (OPLinkStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPLinkStatus::LinkStateChanged)) {
                *result = 73;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OPLinkStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->deviceID(); break;
        case 1: *reinterpret_cast< qint32*>(_v) = _t->afcCorrection(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->boardRevision(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->heapRemaining(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->uavTalkErrors(); break;
        case 5: *reinterpret_cast< quint16*>(_v) = _t->linkQuality(); break;
        case 6: *reinterpret_cast< quint16*>(_v) = _t->txRate(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->rxRate(); break;
        case 8: *reinterpret_cast< quint16*>(_v) = _t->txSeq(); break;
        case 9: *reinterpret_cast< quint16*>(_v) = _t->rxSeq(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->txPacketRate(); break;
        case 11: *reinterpret_cast< quint16*>(_v) = _t->rxPacketRate(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial0(); break;
        case 13: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial1(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial2(); break;
        case 15: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial3(); break;
        case 16: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial4(); break;
        case 17: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial5(); break;
        case 18: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial6(); break;
        case 19: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial7(); break;
        case 20: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial8(); break;
        case 21: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial9(); break;
        case 22: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial10(); break;
        case 23: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial11(); break;
        case 24: *reinterpret_cast< quint16*>(_v) = _t->boardType(); break;
        case 25: *reinterpret_cast< quint16*>(_v) = _t->rxGood(); break;
        case 26: *reinterpret_cast< quint16*>(_v) = _t->rxCorrected(); break;
        case 27: *reinterpret_cast< quint16*>(_v) = _t->rxErrors(); break;
        case 28: *reinterpret_cast< quint16*>(_v) = _t->rxMissed(); break;
        case 29: *reinterpret_cast< quint16*>(_v) = _t->rxFailure(); break;
        case 30: *reinterpret_cast< quint16*>(_v) = _t->txDropped(); break;
        case 31: *reinterpret_cast< quint16*>(_v) = _t->txFailure(); break;
        case 32: *reinterpret_cast< quint16*>(_v) = _t->resets(); break;
        case 33: *reinterpret_cast< quint16*>(_v) = _t->timeouts(); break;
        case 34: *reinterpret_cast< qint16*>(_v) = _t->rssi(); break;
        case 35: *reinterpret_cast< OPLinkStatus_LinkState::Enum*>(_v) = _t->linkState(); break;
        case 36: *reinterpret_cast< quint32*>(_v) = _t->getDeviceID(); break;
        case 37: *reinterpret_cast< qint32*>(_v) = _t->getAFCCorrection(); break;
        case 38: *reinterpret_cast< quint16*>(_v) = _t->getBoardRevision(); break;
        case 39: *reinterpret_cast< quint16*>(_v) = _t->getHeapRemaining(); break;
        case 40: *reinterpret_cast< quint16*>(_v) = _t->getUAVTalkErrors(); break;
        case 41: *reinterpret_cast< quint16*>(_v) = _t->getLinkQuality(); break;
        case 42: *reinterpret_cast< quint16*>(_v) = _t->getTXRate(); break;
        case 43: *reinterpret_cast< quint16*>(_v) = _t->getRXRate(); break;
        case 44: *reinterpret_cast< quint16*>(_v) = _t->getTXSeq(); break;
        case 45: *reinterpret_cast< quint16*>(_v) = _t->getRXSeq(); break;
        case 46: *reinterpret_cast< quint16*>(_v) = _t->getTXPacketRate(); break;
        case 47: *reinterpret_cast< quint16*>(_v) = _t->getRXPacketRate(); break;
        case 48: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_0(); break;
        case 49: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_1(); break;
        case 50: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_2(); break;
        case 51: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_3(); break;
        case 52: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_4(); break;
        case 53: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_5(); break;
        case 54: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_6(); break;
        case 55: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_7(); break;
        case 56: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_8(); break;
        case 57: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_9(); break;
        case 58: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_10(); break;
        case 59: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_11(); break;
        case 60: *reinterpret_cast< quint8*>(_v) = _t->getBoardType(); break;
        case 61: *reinterpret_cast< quint8*>(_v) = _t->getRxGood(); break;
        case 62: *reinterpret_cast< quint8*>(_v) = _t->getRxCorrected(); break;
        case 63: *reinterpret_cast< quint8*>(_v) = _t->getRxErrors(); break;
        case 64: *reinterpret_cast< quint8*>(_v) = _t->getRxMissed(); break;
        case 65: *reinterpret_cast< quint8*>(_v) = _t->getRxFailure(); break;
        case 66: *reinterpret_cast< quint8*>(_v) = _t->getTxDropped(); break;
        case 67: *reinterpret_cast< quint8*>(_v) = _t->getTxFailure(); break;
        case 68: *reinterpret_cast< quint8*>(_v) = _t->getResets(); break;
        case 69: *reinterpret_cast< quint8*>(_v) = _t->getTimeouts(); break;
        case 70: *reinterpret_cast< qint8*>(_v) = _t->getRSSI(); break;
        case 71: *reinterpret_cast< quint8*>(_v) = _t->getLinkState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OPLinkStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDeviceID(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setAFCCorrection(*reinterpret_cast< qint32*>(_v)); break;
        case 2: _t->setBoardRevision(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setHeapRemaining(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setUAVTalkErrors(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setLinkQuality(*reinterpret_cast< quint16*>(_v)); break;
        case 6: _t->setTXRate(*reinterpret_cast< quint16*>(_v)); break;
        case 7: _t->setRXRate(*reinterpret_cast< quint16*>(_v)); break;
        case 8: _t->setTXSeq(*reinterpret_cast< quint16*>(_v)); break;
        case 9: _t->setRXSeq(*reinterpret_cast< quint16*>(_v)); break;
        case 10: _t->setTXPacketRate(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setRXPacketRate(*reinterpret_cast< quint16*>(_v)); break;
        case 12: _t->setCPUSerial0(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setCPUSerial1(*reinterpret_cast< quint16*>(_v)); break;
        case 14: _t->setCPUSerial2(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setCPUSerial3(*reinterpret_cast< quint16*>(_v)); break;
        case 16: _t->setCPUSerial4(*reinterpret_cast< quint16*>(_v)); break;
        case 17: _t->setCPUSerial5(*reinterpret_cast< quint16*>(_v)); break;
        case 18: _t->setCPUSerial6(*reinterpret_cast< quint16*>(_v)); break;
        case 19: _t->setCPUSerial7(*reinterpret_cast< quint16*>(_v)); break;
        case 20: _t->setCPUSerial8(*reinterpret_cast< quint16*>(_v)); break;
        case 21: _t->setCPUSerial9(*reinterpret_cast< quint16*>(_v)); break;
        case 22: _t->setCPUSerial10(*reinterpret_cast< quint16*>(_v)); break;
        case 23: _t->setCPUSerial11(*reinterpret_cast< quint16*>(_v)); break;
        case 24: _t->setBoardType(*reinterpret_cast< quint16*>(_v)); break;
        case 25: _t->setRxGood(*reinterpret_cast< quint16*>(_v)); break;
        case 26: _t->setRxCorrected(*reinterpret_cast< quint16*>(_v)); break;
        case 27: _t->setRxErrors(*reinterpret_cast< quint16*>(_v)); break;
        case 28: _t->setRxMissed(*reinterpret_cast< quint16*>(_v)); break;
        case 29: _t->setRxFailure(*reinterpret_cast< quint16*>(_v)); break;
        case 30: _t->setTxDropped(*reinterpret_cast< quint16*>(_v)); break;
        case 31: _t->setTxFailure(*reinterpret_cast< quint16*>(_v)); break;
        case 32: _t->setResets(*reinterpret_cast< quint16*>(_v)); break;
        case 33: _t->setTimeouts(*reinterpret_cast< quint16*>(_v)); break;
        case 34: _t->setRSSI(*reinterpret_cast< qint16*>(_v)); break;
        case 35: _t->setLinkState(*reinterpret_cast< OPLinkStatus_LinkState::Enum*>(_v)); break;
        case 36: _t->setDeviceID(*reinterpret_cast< quint32*>(_v)); break;
        case 37: _t->setAFCCorrection(*reinterpret_cast< qint32*>(_v)); break;
        case 38: _t->setBoardRevision(*reinterpret_cast< quint16*>(_v)); break;
        case 39: _t->setHeapRemaining(*reinterpret_cast< quint16*>(_v)); break;
        case 40: _t->setUAVTalkErrors(*reinterpret_cast< quint16*>(_v)); break;
        case 41: _t->setLinkQuality(*reinterpret_cast< quint16*>(_v)); break;
        case 42: _t->setTXRate(*reinterpret_cast< quint16*>(_v)); break;
        case 43: _t->setRXRate(*reinterpret_cast< quint16*>(_v)); break;
        case 44: _t->setTXSeq(*reinterpret_cast< quint16*>(_v)); break;
        case 45: _t->setRXSeq(*reinterpret_cast< quint16*>(_v)); break;
        case 46: _t->setTXPacketRate(*reinterpret_cast< quint16*>(_v)); break;
        case 47: _t->setRXPacketRate(*reinterpret_cast< quint16*>(_v)); break;
        case 48: _t->setCPUSerial_0(*reinterpret_cast< quint8*>(_v)); break;
        case 49: _t->setCPUSerial_1(*reinterpret_cast< quint8*>(_v)); break;
        case 50: _t->setCPUSerial_2(*reinterpret_cast< quint8*>(_v)); break;
        case 51: _t->setCPUSerial_3(*reinterpret_cast< quint8*>(_v)); break;
        case 52: _t->setCPUSerial_4(*reinterpret_cast< quint8*>(_v)); break;
        case 53: _t->setCPUSerial_5(*reinterpret_cast< quint8*>(_v)); break;
        case 54: _t->setCPUSerial_6(*reinterpret_cast< quint8*>(_v)); break;
        case 55: _t->setCPUSerial_7(*reinterpret_cast< quint8*>(_v)); break;
        case 56: _t->setCPUSerial_8(*reinterpret_cast< quint8*>(_v)); break;
        case 57: _t->setCPUSerial_9(*reinterpret_cast< quint8*>(_v)); break;
        case 58: _t->setCPUSerial_10(*reinterpret_cast< quint8*>(_v)); break;
        case 59: _t->setCPUSerial_11(*reinterpret_cast< quint8*>(_v)); break;
        case 60: _t->setBoardType(*reinterpret_cast< quint8*>(_v)); break;
        case 61: _t->setRxGood(*reinterpret_cast< quint8*>(_v)); break;
        case 62: _t->setRxCorrected(*reinterpret_cast< quint8*>(_v)); break;
        case 63: _t->setRxErrors(*reinterpret_cast< quint8*>(_v)); break;
        case 64: _t->setRxMissed(*reinterpret_cast< quint8*>(_v)); break;
        case 65: _t->setRxFailure(*reinterpret_cast< quint8*>(_v)); break;
        case 66: _t->setTxDropped(*reinterpret_cast< quint8*>(_v)); break;
        case 67: _t->setTxFailure(*reinterpret_cast< quint8*>(_v)); break;
        case 68: _t->setResets(*reinterpret_cast< quint8*>(_v)); break;
        case 69: _t->setTimeouts(*reinterpret_cast< quint8*>(_v)); break;
        case 70: _t->setRSSI(*reinterpret_cast< qint8*>(_v)); break;
        case 71: _t->setLinkState(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_OPLinkStatus[] = {
        &OPLinkStatus_LinkState::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject OPLinkStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_OPLinkStatus.data,
    qt_meta_data_OPLinkStatus,
    qt_static_metacall,
    qt_meta_extradata_OPLinkStatus,
    nullptr
} };


const QMetaObject *OPLinkStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPLinkStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPLinkStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int OPLinkStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 175)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 175;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 175)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 175;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 72;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 72;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 72;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 72;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 72;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OPLinkStatus::deviceIDChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OPLinkStatus::DeviceIDChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OPLinkStatus::afcCorrectionChanged(const qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OPLinkStatus::AFCCorrectionChanged(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OPLinkStatus::boardRevisionChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OPLinkStatus::BoardRevisionChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OPLinkStatus::heapRemainingChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OPLinkStatus::HeapRemainingChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OPLinkStatus::uavTalkErrorsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void OPLinkStatus::UAVTalkErrorsChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void OPLinkStatus::linkQualityChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void OPLinkStatus::LinkQualityChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void OPLinkStatus::txRateChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void OPLinkStatus::TXRateChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void OPLinkStatus::rxRateChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void OPLinkStatus::RXRateChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void OPLinkStatus::txSeqChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void OPLinkStatus::TXSeqChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void OPLinkStatus::rxSeqChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void OPLinkStatus::RXSeqChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void OPLinkStatus::txPacketRateChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void OPLinkStatus::TXPacketRateChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void OPLinkStatus::rxPacketRateChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void OPLinkStatus::RXPacketRateChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void OPLinkStatus::cpuSerialChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void OPLinkStatus::CPUSerialChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void OPLinkStatus::cpuSerial0Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void OPLinkStatus::CPUSerial_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void OPLinkStatus::cpuSerial1Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void OPLinkStatus::CPUSerial_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void OPLinkStatus::cpuSerial2Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void OPLinkStatus::CPUSerial_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void OPLinkStatus::cpuSerial3Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void OPLinkStatus::CPUSerial_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void OPLinkStatus::cpuSerial4Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void OPLinkStatus::CPUSerial_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void OPLinkStatus::cpuSerial5Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void OPLinkStatus::CPUSerial_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void OPLinkStatus::cpuSerial6Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void OPLinkStatus::CPUSerial_6Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void OPLinkStatus::cpuSerial7Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void OPLinkStatus::CPUSerial_7Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void OPLinkStatus::cpuSerial8Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void OPLinkStatus::CPUSerial_8Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void OPLinkStatus::cpuSerial9Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void OPLinkStatus::CPUSerial_9Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void OPLinkStatus::cpuSerial10Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void OPLinkStatus::CPUSerial_10Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void OPLinkStatus::cpuSerial11Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void OPLinkStatus::CPUSerial_11Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void OPLinkStatus::boardTypeChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void OPLinkStatus::BoardTypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void OPLinkStatus::rxGoodChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void OPLinkStatus::RxGoodChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void OPLinkStatus::rxCorrectedChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void OPLinkStatus::RxCorrectedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void OPLinkStatus::rxErrorsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void OPLinkStatus::RxErrorsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void OPLinkStatus::rxMissedChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void OPLinkStatus::RxMissedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void OPLinkStatus::rxFailureChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void OPLinkStatus::RxFailureChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void OPLinkStatus::txDroppedChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void OPLinkStatus::TxDroppedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void OPLinkStatus::txFailureChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void OPLinkStatus::TxFailureChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void OPLinkStatus::resetsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void OPLinkStatus::ResetsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void OPLinkStatus::timeoutsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void OPLinkStatus::TimeoutsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void OPLinkStatus::rssiChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void OPLinkStatus::RSSIChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void OPLinkStatus::linkStateChanged(const OPLinkStatus_LinkState::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void OPLinkStatus::LinkStateChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
