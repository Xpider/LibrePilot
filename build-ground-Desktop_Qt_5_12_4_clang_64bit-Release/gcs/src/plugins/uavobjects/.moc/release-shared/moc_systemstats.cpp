/****************************************************************************
** Meta object code from reading C++ file 'systemstats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../systemstats.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemstats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemStatsConstants_t {
    QByteArrayData data[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemStatsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemStatsConstants_t qt_meta_stringdata_SystemStatsConstants = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SystemStatsConstants"
QT_MOC_LITERAL(1, 21, 4) // "Enum"

    },
    "SystemStatsConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemStatsConstants[] = {

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

void SystemStatsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemStatsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemStatsConstants.data,
    qt_meta_data_SystemStatsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemStatsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemStatsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemStatsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemStatsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemStats_t {
    QByteArrayData data[94];
    char stringdata0[1747];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemStats_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemStats_t qt_meta_stringdata_SystemStats = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SystemStats"
QT_MOC_LITERAL(1, 12, 17), // "flightTimeChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "value"
QT_MOC_LITERAL(4, 37, 17), // "FlightTimeChanged"
QT_MOC_LITERAL(5, 55, 20), // "heapRemainingChanged"
QT_MOC_LITERAL(6, 76, 20), // "HeapRemainingChanged"
QT_MOC_LITERAL(7, 97, 19), // "cpuIdleTicksChanged"
QT_MOC_LITERAL(8, 117, 19), // "CPUIdleTicksChanged"
QT_MOC_LITERAL(9, 137, 23), // "cpuZeroLoadTicksChanged"
QT_MOC_LITERAL(10, 161, 23), // "CPUZeroLoadTicksChanged"
QT_MOC_LITERAL(11, 185, 27), // "eventSystemWarningIDChanged"
QT_MOC_LITERAL(12, 213, 27), // "EventSystemWarningIDChanged"
QT_MOC_LITERAL(13, 241, 30), // "objectManagerCallbackIDChanged"
QT_MOC_LITERAL(14, 272, 30), // "ObjectManagerCallbackIDChanged"
QT_MOC_LITERAL(15, 303, 27), // "objectManagerQueueIDChanged"
QT_MOC_LITERAL(16, 331, 27), // "ObjectManagerQueueIDChanged"
QT_MOC_LITERAL(17, 359, 24), // "irqStackRemainingChanged"
QT_MOC_LITERAL(18, 384, 24), // "IRQStackRemainingChanged"
QT_MOC_LITERAL(19, 409, 30), // "systemModStackRemainingChanged"
QT_MOC_LITERAL(20, 440, 30), // "SystemModStackRemainingChanged"
QT_MOC_LITERAL(21, 471, 19), // "sysSlotsFreeChanged"
QT_MOC_LITERAL(22, 491, 19), // "SysSlotsFreeChanged"
QT_MOC_LITERAL(23, 511, 21), // "sysSlotsActiveChanged"
QT_MOC_LITERAL(24, 533, 21), // "SysSlotsActiveChanged"
QT_MOC_LITERAL(25, 555, 19), // "usrSlotsFreeChanged"
QT_MOC_LITERAL(26, 575, 19), // "UsrSlotsFreeChanged"
QT_MOC_LITERAL(27, 595, 21), // "usrSlotsActiveChanged"
QT_MOC_LITERAL(28, 617, 21), // "UsrSlotsActiveChanged"
QT_MOC_LITERAL(29, 639, 14), // "cpuLoadChanged"
QT_MOC_LITERAL(30, 654, 14), // "CPULoadChanged"
QT_MOC_LITERAL(31, 669, 14), // "cpuTempChanged"
QT_MOC_LITERAL(32, 684, 14), // "CPUTempChanged"
QT_MOC_LITERAL(33, 699, 13), // "setFlightTime"
QT_MOC_LITERAL(34, 713, 16), // "setHeapRemaining"
QT_MOC_LITERAL(35, 730, 15), // "setCPUIdleTicks"
QT_MOC_LITERAL(36, 746, 19), // "setCPUZeroLoadTicks"
QT_MOC_LITERAL(37, 766, 23), // "setEventSystemWarningID"
QT_MOC_LITERAL(38, 790, 26), // "setObjectManagerCallbackID"
QT_MOC_LITERAL(39, 817, 23), // "setObjectManagerQueueID"
QT_MOC_LITERAL(40, 841, 20), // "setIRQStackRemaining"
QT_MOC_LITERAL(41, 862, 26), // "setSystemModStackRemaining"
QT_MOC_LITERAL(42, 889, 15), // "setSysSlotsFree"
QT_MOC_LITERAL(43, 905, 17), // "setSysSlotsActive"
QT_MOC_LITERAL(44, 923, 15), // "setUsrSlotsFree"
QT_MOC_LITERAL(45, 939, 17), // "setUsrSlotsActive"
QT_MOC_LITERAL(46, 957, 10), // "setCPULoad"
QT_MOC_LITERAL(47, 968, 10), // "setCPUTemp"
QT_MOC_LITERAL(48, 979, 17), // "emitNotifications"
QT_MOC_LITERAL(49, 997, 13), // "getFlightTime"
QT_MOC_LITERAL(50, 1011, 16), // "getHeapRemaining"
QT_MOC_LITERAL(51, 1028, 15), // "getCPUIdleTicks"
QT_MOC_LITERAL(52, 1044, 19), // "getCPUZeroLoadTicks"
QT_MOC_LITERAL(53, 1064, 23), // "getEventSystemWarningID"
QT_MOC_LITERAL(54, 1088, 26), // "getObjectManagerCallbackID"
QT_MOC_LITERAL(55, 1115, 23), // "getObjectManagerQueueID"
QT_MOC_LITERAL(56, 1139, 20), // "getIRQStackRemaining"
QT_MOC_LITERAL(57, 1160, 26), // "getSystemModStackRemaining"
QT_MOC_LITERAL(58, 1187, 15), // "getSysSlotsFree"
QT_MOC_LITERAL(59, 1203, 17), // "getSysSlotsActive"
QT_MOC_LITERAL(60, 1221, 15), // "getUsrSlotsFree"
QT_MOC_LITERAL(61, 1237, 17), // "getUsrSlotsActive"
QT_MOC_LITERAL(62, 1255, 10), // "getCPULoad"
QT_MOC_LITERAL(63, 1266, 10), // "getCPUTemp"
QT_MOC_LITERAL(64, 1277, 10), // "flightTime"
QT_MOC_LITERAL(65, 1288, 13), // "heapRemaining"
QT_MOC_LITERAL(66, 1302, 12), // "cpuIdleTicks"
QT_MOC_LITERAL(67, 1315, 16), // "cpuZeroLoadTicks"
QT_MOC_LITERAL(68, 1332, 20), // "eventSystemWarningID"
QT_MOC_LITERAL(69, 1353, 23), // "objectManagerCallbackID"
QT_MOC_LITERAL(70, 1377, 20), // "objectManagerQueueID"
QT_MOC_LITERAL(71, 1398, 17), // "irqStackRemaining"
QT_MOC_LITERAL(72, 1416, 23), // "systemModStackRemaining"
QT_MOC_LITERAL(73, 1440, 12), // "sysSlotsFree"
QT_MOC_LITERAL(74, 1453, 14), // "sysSlotsActive"
QT_MOC_LITERAL(75, 1468, 12), // "usrSlotsFree"
QT_MOC_LITERAL(76, 1481, 14), // "usrSlotsActive"
QT_MOC_LITERAL(77, 1496, 7), // "cpuLoad"
QT_MOC_LITERAL(78, 1504, 7), // "cpuTemp"
QT_MOC_LITERAL(79, 1512, 10), // "FlightTime"
QT_MOC_LITERAL(80, 1523, 13), // "HeapRemaining"
QT_MOC_LITERAL(81, 1537, 12), // "CPUIdleTicks"
QT_MOC_LITERAL(82, 1550, 16), // "CPUZeroLoadTicks"
QT_MOC_LITERAL(83, 1567, 20), // "EventSystemWarningID"
QT_MOC_LITERAL(84, 1588, 23), // "ObjectManagerCallbackID"
QT_MOC_LITERAL(85, 1612, 20), // "ObjectManagerQueueID"
QT_MOC_LITERAL(86, 1633, 17), // "IRQStackRemaining"
QT_MOC_LITERAL(87, 1651, 23), // "SystemModStackRemaining"
QT_MOC_LITERAL(88, 1675, 12), // "SysSlotsFree"
QT_MOC_LITERAL(89, 1688, 14), // "SysSlotsActive"
QT_MOC_LITERAL(90, 1703, 12), // "UsrSlotsFree"
QT_MOC_LITERAL(91, 1716, 14), // "UsrSlotsActive"
QT_MOC_LITERAL(92, 1731, 7), // "CPULoad"
QT_MOC_LITERAL(93, 1739, 7) // "CPUTemp"

    },
    "SystemStats\0flightTimeChanged\0\0value\0"
    "FlightTimeChanged\0heapRemainingChanged\0"
    "HeapRemainingChanged\0cpuIdleTicksChanged\0"
    "CPUIdleTicksChanged\0cpuZeroLoadTicksChanged\0"
    "CPUZeroLoadTicksChanged\0"
    "eventSystemWarningIDChanged\0"
    "EventSystemWarningIDChanged\0"
    "objectManagerCallbackIDChanged\0"
    "ObjectManagerCallbackIDChanged\0"
    "objectManagerQueueIDChanged\0"
    "ObjectManagerQueueIDChanged\0"
    "irqStackRemainingChanged\0"
    "IRQStackRemainingChanged\0"
    "systemModStackRemainingChanged\0"
    "SystemModStackRemainingChanged\0"
    "sysSlotsFreeChanged\0SysSlotsFreeChanged\0"
    "sysSlotsActiveChanged\0SysSlotsActiveChanged\0"
    "usrSlotsFreeChanged\0UsrSlotsFreeChanged\0"
    "usrSlotsActiveChanged\0UsrSlotsActiveChanged\0"
    "cpuLoadChanged\0CPULoadChanged\0"
    "cpuTempChanged\0CPUTempChanged\0"
    "setFlightTime\0setHeapRemaining\0"
    "setCPUIdleTicks\0setCPUZeroLoadTicks\0"
    "setEventSystemWarningID\0"
    "setObjectManagerCallbackID\0"
    "setObjectManagerQueueID\0setIRQStackRemaining\0"
    "setSystemModStackRemaining\0setSysSlotsFree\0"
    "setSysSlotsActive\0setUsrSlotsFree\0"
    "setUsrSlotsActive\0setCPULoad\0setCPUTemp\0"
    "emitNotifications\0getFlightTime\0"
    "getHeapRemaining\0getCPUIdleTicks\0"
    "getCPUZeroLoadTicks\0getEventSystemWarningID\0"
    "getObjectManagerCallbackID\0"
    "getObjectManagerQueueID\0getIRQStackRemaining\0"
    "getSystemModStackRemaining\0getSysSlotsFree\0"
    "getSysSlotsActive\0getUsrSlotsFree\0"
    "getUsrSlotsActive\0getCPULoad\0getCPUTemp\0"
    "flightTime\0heapRemaining\0cpuIdleTicks\0"
    "cpuZeroLoadTicks\0eventSystemWarningID\0"
    "objectManagerCallbackID\0objectManagerQueueID\0"
    "irqStackRemaining\0systemModStackRemaining\0"
    "sysSlotsFree\0sysSlotsActive\0usrSlotsFree\0"
    "usrSlotsActive\0cpuLoad\0cpuTemp\0"
    "FlightTime\0HeapRemaining\0CPUIdleTicks\0"
    "CPUZeroLoadTicks\0EventSystemWarningID\0"
    "ObjectManagerCallbackID\0ObjectManagerQueueID\0"
    "IRQStackRemaining\0SystemModStackRemaining\0"
    "SysSlotsFree\0SysSlotsActive\0UsrSlotsFree\0"
    "UsrSlotsActive\0CPULoad\0CPUTemp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemStats[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
      30,  486, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      30,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  329,    2, 0x06 /* Public */,
       4,    1,  332,    2, 0x06 /* Public */,
       5,    1,  335,    2, 0x06 /* Public */,
       6,    1,  338,    2, 0x06 /* Public */,
       7,    1,  341,    2, 0x06 /* Public */,
       8,    1,  344,    2, 0x06 /* Public */,
       9,    1,  347,    2, 0x06 /* Public */,
      10,    1,  350,    2, 0x06 /* Public */,
      11,    1,  353,    2, 0x06 /* Public */,
      12,    1,  356,    2, 0x06 /* Public */,
      13,    1,  359,    2, 0x06 /* Public */,
      14,    1,  362,    2, 0x06 /* Public */,
      15,    1,  365,    2, 0x06 /* Public */,
      16,    1,  368,    2, 0x06 /* Public */,
      17,    1,  371,    2, 0x06 /* Public */,
      18,    1,  374,    2, 0x06 /* Public */,
      19,    1,  377,    2, 0x06 /* Public */,
      20,    1,  380,    2, 0x06 /* Public */,
      21,    1,  383,    2, 0x06 /* Public */,
      22,    1,  386,    2, 0x06 /* Public */,
      23,    1,  389,    2, 0x06 /* Public */,
      24,    1,  392,    2, 0x06 /* Public */,
      25,    1,  395,    2, 0x06 /* Public */,
      26,    1,  398,    2, 0x06 /* Public */,
      27,    1,  401,    2, 0x06 /* Public */,
      28,    1,  404,    2, 0x06 /* Public */,
      29,    1,  407,    2, 0x06 /* Public */,
      30,    1,  410,    2, 0x06 /* Public */,
      31,    1,  413,    2, 0x06 /* Public */,
      32,    1,  416,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    1,  419,    2, 0x0a /* Public */,
      34,    1,  422,    2, 0x0a /* Public */,
      35,    1,  425,    2, 0x0a /* Public */,
      36,    1,  428,    2, 0x0a /* Public */,
      37,    1,  431,    2, 0x0a /* Public */,
      38,    1,  434,    2, 0x0a /* Public */,
      39,    1,  437,    2, 0x0a /* Public */,
      40,    1,  440,    2, 0x0a /* Public */,
      41,    1,  443,    2, 0x0a /* Public */,
      42,    1,  446,    2, 0x0a /* Public */,
      43,    1,  449,    2, 0x0a /* Public */,
      44,    1,  452,    2, 0x0a /* Public */,
      45,    1,  455,    2, 0x0a /* Public */,
      46,    1,  458,    2, 0x0a /* Public */,
      46,    1,  461,    2, 0x0a /* Public */,
      47,    1,  464,    2, 0x0a /* Public */,
      47,    1,  467,    2, 0x0a /* Public */,
      48,    0,  470,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      49,    0,  471,    2, 0x02 /* Public */,
      50,    0,  472,    2, 0x02 /* Public */,
      51,    0,  473,    2, 0x02 /* Public */,
      52,    0,  474,    2, 0x02 /* Public */,
      53,    0,  475,    2, 0x02 /* Public */,
      54,    0,  476,    2, 0x02 /* Public */,
      55,    0,  477,    2, 0x02 /* Public */,
      56,    0,  478,    2, 0x02 /* Public */,
      57,    0,  479,    2, 0x02 /* Public */,
      58,    0,  480,    2, 0x02 /* Public */,
      59,    0,  481,    2, 0x02 /* Public */,
      60,    0,  482,    2, 0x02 /* Public */,
      61,    0,  483,    2, 0x02 /* Public */,
      62,    0,  484,    2, 0x02 /* Public */,
      63,    0,  485,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UChar,
    QMetaType::SChar,

 // properties: name, type, flags
      64, QMetaType::UInt, 0x00495103,
      65, QMetaType::UInt, 0x00495103,
      66, QMetaType::UInt, 0x00495003,
      67, QMetaType::UInt, 0x00495003,
      68, QMetaType::UInt, 0x00495103,
      69, QMetaType::UInt, 0x00495103,
      70, QMetaType::UInt, 0x00495103,
      71, QMetaType::UShort, 0x00495003,
      72, QMetaType::UShort, 0x00495103,
      73, QMetaType::UShort, 0x00495103,
      74, QMetaType::UShort, 0x00495103,
      75, QMetaType::UShort, 0x00495103,
      76, QMetaType::UShort, 0x00495103,
      77, QMetaType::UShort, 0x00495003,
      78, QMetaType::Short, 0x00495003,
      79, QMetaType::UInt, 0x00495103,
      80, QMetaType::UInt, 0x00495103,
      81, QMetaType::UInt, 0x00495103,
      82, QMetaType::UInt, 0x00495103,
      83, QMetaType::UInt, 0x00495103,
      84, QMetaType::UInt, 0x00495103,
      85, QMetaType::UInt, 0x00495103,
      86, QMetaType::UShort, 0x00495103,
      87, QMetaType::UShort, 0x00495103,
      88, QMetaType::UShort, 0x00495103,
      89, QMetaType::UShort, 0x00495103,
      90, QMetaType::UShort, 0x00495103,
      91, QMetaType::UShort, 0x00495103,
      92, QMetaType::UChar, 0x00495103,
      93, QMetaType::SChar, 0x00495103,

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
      28,
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
      29,

       0        // eod
};

void SystemStats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemStats *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flightTimeChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: _t->FlightTimeChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->heapRemainingChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 3: _t->HeapRemainingChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->cpuIdleTicksChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 5: _t->CPUIdleTicksChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->cpuZeroLoadTicksChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 7: _t->CPUZeroLoadTicksChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 8: _t->eventSystemWarningIDChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 9: _t->EventSystemWarningIDChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 10: _t->objectManagerCallbackIDChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 11: _t->ObjectManagerCallbackIDChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 12: _t->objectManagerQueueIDChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 13: _t->ObjectManagerQueueIDChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 14: _t->irqStackRemainingChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 15: _t->IRQStackRemainingChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 16: _t->systemModStackRemainingChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 17: _t->SystemModStackRemainingChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 18: _t->sysSlotsFreeChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 19: _t->SysSlotsFreeChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 20: _t->sysSlotsActiveChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 21: _t->SysSlotsActiveChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 22: _t->usrSlotsFreeChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 23: _t->UsrSlotsFreeChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 24: _t->usrSlotsActiveChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 25: _t->UsrSlotsActiveChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 26: _t->cpuLoadChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 27: _t->CPULoadChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->cpuTempChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 29: _t->CPUTempChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 30: _t->setFlightTime((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 31: _t->setHeapRemaining((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 32: _t->setCPUIdleTicks((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 33: _t->setCPUZeroLoadTicks((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 34: _t->setEventSystemWarningID((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 35: _t->setObjectManagerCallbackID((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 36: _t->setObjectManagerQueueID((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 37: _t->setIRQStackRemaining((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 38: _t->setSystemModStackRemaining((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 39: _t->setSysSlotsFree((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 40: _t->setSysSlotsActive((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 41: _t->setUsrSlotsFree((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 42: _t->setUsrSlotsActive((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 43: _t->setCPULoad((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 44: _t->setCPULoad((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 45: _t->setCPUTemp((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 46: _t->setCPUTemp((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 47: _t->emitNotifications(); break;
        case 48: { quint32 _r = _t->getFlightTime();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 49: { quint32 _r = _t->getHeapRemaining();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 50: { quint32 _r = _t->getCPUIdleTicks();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 51: { quint32 _r = _t->getCPUZeroLoadTicks();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 52: { quint32 _r = _t->getEventSystemWarningID();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 53: { quint32 _r = _t->getObjectManagerCallbackID();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 54: { quint32 _r = _t->getObjectManagerQueueID();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 55: { quint16 _r = _t->getIRQStackRemaining();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 56: { quint16 _r = _t->getSystemModStackRemaining();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 57: { quint16 _r = _t->getSysSlotsFree();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 58: { quint16 _r = _t->getSysSlotsActive();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 59: { quint16 _r = _t->getUsrSlotsFree();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 60: { quint16 _r = _t->getUsrSlotsActive();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 61: { quint8 _r = _t->getCPULoad();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 62: { qint8 _r = _t->getCPUTemp();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SystemStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::flightTimeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::FlightTimeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::heapRemainingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::HeapRemainingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::cpuIdleTicksChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::CPUIdleTicksChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::cpuZeroLoadTicksChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::CPUZeroLoadTicksChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::eventSystemWarningIDChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::EventSystemWarningIDChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::objectManagerCallbackIDChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::ObjectManagerCallbackIDChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::objectManagerQueueIDChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::ObjectManagerQueueIDChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::irqStackRemainingChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::IRQStackRemainingChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::systemModStackRemainingChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::SystemModStackRemainingChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::sysSlotsFreeChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::SysSlotsFreeChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::sysSlotsActiveChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::SysSlotsActiveChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::usrSlotsFreeChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::UsrSlotsFreeChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::usrSlotsActiveChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::UsrSlotsActiveChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::cpuLoadChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::CPULoadChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::cpuTempChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (SystemStats::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemStats::CPUTempChanged)) {
                *result = 29;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SystemStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->flightTime(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->heapRemaining(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = _t->cpuIdleTicks(); break;
        case 3: *reinterpret_cast< quint32*>(_v) = _t->cpuZeroLoadTicks(); break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->eventSystemWarningID(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->objectManagerCallbackID(); break;
        case 6: *reinterpret_cast< quint32*>(_v) = _t->objectManagerQueueID(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->irqStackRemaining(); break;
        case 8: *reinterpret_cast< quint16*>(_v) = _t->systemModStackRemaining(); break;
        case 9: *reinterpret_cast< quint16*>(_v) = _t->sysSlotsFree(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->sysSlotsActive(); break;
        case 11: *reinterpret_cast< quint16*>(_v) = _t->usrSlotsFree(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->usrSlotsActive(); break;
        case 13: *reinterpret_cast< quint16*>(_v) = _t->cpuLoad(); break;
        case 14: *reinterpret_cast< qint16*>(_v) = _t->cpuTemp(); break;
        case 15: *reinterpret_cast< quint32*>(_v) = _t->getFlightTime(); break;
        case 16: *reinterpret_cast< quint32*>(_v) = _t->getHeapRemaining(); break;
        case 17: *reinterpret_cast< quint32*>(_v) = _t->getCPUIdleTicks(); break;
        case 18: *reinterpret_cast< quint32*>(_v) = _t->getCPUZeroLoadTicks(); break;
        case 19: *reinterpret_cast< quint32*>(_v) = _t->getEventSystemWarningID(); break;
        case 20: *reinterpret_cast< quint32*>(_v) = _t->getObjectManagerCallbackID(); break;
        case 21: *reinterpret_cast< quint32*>(_v) = _t->getObjectManagerQueueID(); break;
        case 22: *reinterpret_cast< quint16*>(_v) = _t->getIRQStackRemaining(); break;
        case 23: *reinterpret_cast< quint16*>(_v) = _t->getSystemModStackRemaining(); break;
        case 24: *reinterpret_cast< quint16*>(_v) = _t->getSysSlotsFree(); break;
        case 25: *reinterpret_cast< quint16*>(_v) = _t->getSysSlotsActive(); break;
        case 26: *reinterpret_cast< quint16*>(_v) = _t->getUsrSlotsFree(); break;
        case 27: *reinterpret_cast< quint16*>(_v) = _t->getUsrSlotsActive(); break;
        case 28: *reinterpret_cast< quint8*>(_v) = _t->getCPULoad(); break;
        case 29: *reinterpret_cast< qint8*>(_v) = _t->getCPUTemp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SystemStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlightTime(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setHeapRemaining(*reinterpret_cast< quint32*>(_v)); break;
        case 2: _t->setCPUIdleTicks(*reinterpret_cast< quint32*>(_v)); break;
        case 3: _t->setCPUZeroLoadTicks(*reinterpret_cast< quint32*>(_v)); break;
        case 4: _t->setEventSystemWarningID(*reinterpret_cast< quint32*>(_v)); break;
        case 5: _t->setObjectManagerCallbackID(*reinterpret_cast< quint32*>(_v)); break;
        case 6: _t->setObjectManagerQueueID(*reinterpret_cast< quint32*>(_v)); break;
        case 7: _t->setIRQStackRemaining(*reinterpret_cast< quint16*>(_v)); break;
        case 8: _t->setSystemModStackRemaining(*reinterpret_cast< quint16*>(_v)); break;
        case 9: _t->setSysSlotsFree(*reinterpret_cast< quint16*>(_v)); break;
        case 10: _t->setSysSlotsActive(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setUsrSlotsFree(*reinterpret_cast< quint16*>(_v)); break;
        case 12: _t->setUsrSlotsActive(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setCPULoad(*reinterpret_cast< quint16*>(_v)); break;
        case 14: _t->setCPUTemp(*reinterpret_cast< qint16*>(_v)); break;
        case 15: _t->setFlightTime(*reinterpret_cast< quint32*>(_v)); break;
        case 16: _t->setHeapRemaining(*reinterpret_cast< quint32*>(_v)); break;
        case 17: _t->setCPUIdleTicks(*reinterpret_cast< quint32*>(_v)); break;
        case 18: _t->setCPUZeroLoadTicks(*reinterpret_cast< quint32*>(_v)); break;
        case 19: _t->setEventSystemWarningID(*reinterpret_cast< quint32*>(_v)); break;
        case 20: _t->setObjectManagerCallbackID(*reinterpret_cast< quint32*>(_v)); break;
        case 21: _t->setObjectManagerQueueID(*reinterpret_cast< quint32*>(_v)); break;
        case 22: _t->setIRQStackRemaining(*reinterpret_cast< quint16*>(_v)); break;
        case 23: _t->setSystemModStackRemaining(*reinterpret_cast< quint16*>(_v)); break;
        case 24: _t->setSysSlotsFree(*reinterpret_cast< quint16*>(_v)); break;
        case 25: _t->setSysSlotsActive(*reinterpret_cast< quint16*>(_v)); break;
        case 26: _t->setUsrSlotsFree(*reinterpret_cast< quint16*>(_v)); break;
        case 27: _t->setUsrSlotsActive(*reinterpret_cast< quint16*>(_v)); break;
        case 28: _t->setCPULoad(*reinterpret_cast< quint8*>(_v)); break;
        case 29: _t->setCPUTemp(*reinterpret_cast< qint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SystemStats::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_SystemStats.data,
    qt_meta_data_SystemStats,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemStats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemStats::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemStats.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int SystemStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 63;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 30;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SystemStats::flightTimeChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemStats::FlightTimeChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SystemStats::heapRemainingChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SystemStats::HeapRemainingChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SystemStats::cpuIdleTicksChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SystemStats::CPUIdleTicksChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SystemStats::cpuZeroLoadTicksChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SystemStats::CPUZeroLoadTicksChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SystemStats::eventSystemWarningIDChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SystemStats::EventSystemWarningIDChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SystemStats::objectManagerCallbackIDChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void SystemStats::ObjectManagerCallbackIDChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void SystemStats::objectManagerQueueIDChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void SystemStats::ObjectManagerQueueIDChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void SystemStats::irqStackRemainingChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void SystemStats::IRQStackRemainingChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void SystemStats::systemModStackRemainingChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void SystemStats::SystemModStackRemainingChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void SystemStats::sysSlotsFreeChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void SystemStats::SysSlotsFreeChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void SystemStats::sysSlotsActiveChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void SystemStats::SysSlotsActiveChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void SystemStats::usrSlotsFreeChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void SystemStats::UsrSlotsFreeChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void SystemStats::usrSlotsActiveChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void SystemStats::UsrSlotsActiveChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void SystemStats::cpuLoadChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void SystemStats::CPULoadChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void SystemStats::cpuTempChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void SystemStats::CPUTempChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
