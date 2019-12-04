/****************************************************************************
** Meta object code from reading C++ file 'firmwareiapobj.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../firmwareiapobj.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'firmwareiapobj.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FirmwareIAPObjConstants_t {
    QByteArrayData data[2];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FirmwareIAPObjConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FirmwareIAPObjConstants_t qt_meta_stringdata_FirmwareIAPObjConstants = {
    {
QT_MOC_LITERAL(0, 0, 23), // "FirmwareIAPObjConstants"
QT_MOC_LITERAL(1, 24, 4) // "Enum"

    },
    "FirmwareIAPObjConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirmwareIAPObjConstants[] = {

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

void FirmwareIAPObjConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FirmwareIAPObjConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FirmwareIAPObjConstants.data,
    qt_meta_data_FirmwareIAPObjConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FirmwareIAPObjConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirmwareIAPObjConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FirmwareIAPObjConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FirmwareIAPObjConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FirmwareIAPObj_t {
    QByteArrayData data[129];
    char stringdata0[1874];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FirmwareIAPObj_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FirmwareIAPObj_t qt_meta_stringdata_FirmwareIAPObj = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FirmwareIAPObj"
QT_MOC_LITERAL(1, 15, 10), // "crcChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 14), // "commandChanged"
QT_MOC_LITERAL(5, 48, 14), // "CommandChanged"
QT_MOC_LITERAL(6, 63, 20), // "boardRevisionChanged"
QT_MOC_LITERAL(7, 84, 20), // "BoardRevisionChanged"
QT_MOC_LITERAL(8, 105, 16), // "cpuSerialChanged"
QT_MOC_LITERAL(9, 122, 5), // "index"
QT_MOC_LITERAL(10, 128, 16), // "CPUSerialChanged"
QT_MOC_LITERAL(11, 145, 17), // "cpuSerial0Changed"
QT_MOC_LITERAL(12, 163, 18), // "CPUSerial_0Changed"
QT_MOC_LITERAL(13, 182, 17), // "cpuSerial1Changed"
QT_MOC_LITERAL(14, 200, 18), // "CPUSerial_1Changed"
QT_MOC_LITERAL(15, 219, 17), // "cpuSerial2Changed"
QT_MOC_LITERAL(16, 237, 18), // "CPUSerial_2Changed"
QT_MOC_LITERAL(17, 256, 17), // "cpuSerial3Changed"
QT_MOC_LITERAL(18, 274, 18), // "CPUSerial_3Changed"
QT_MOC_LITERAL(19, 293, 17), // "cpuSerial4Changed"
QT_MOC_LITERAL(20, 311, 18), // "CPUSerial_4Changed"
QT_MOC_LITERAL(21, 330, 17), // "cpuSerial5Changed"
QT_MOC_LITERAL(22, 348, 18), // "CPUSerial_5Changed"
QT_MOC_LITERAL(23, 367, 17), // "cpuSerial6Changed"
QT_MOC_LITERAL(24, 385, 18), // "CPUSerial_6Changed"
QT_MOC_LITERAL(25, 404, 17), // "cpuSerial7Changed"
QT_MOC_LITERAL(26, 422, 18), // "CPUSerial_7Changed"
QT_MOC_LITERAL(27, 441, 17), // "cpuSerial8Changed"
QT_MOC_LITERAL(28, 459, 18), // "CPUSerial_8Changed"
QT_MOC_LITERAL(29, 478, 17), // "cpuSerial9Changed"
QT_MOC_LITERAL(30, 496, 18), // "CPUSerial_9Changed"
QT_MOC_LITERAL(31, 515, 18), // "cpuSerial10Changed"
QT_MOC_LITERAL(32, 534, 19), // "CPUSerial_10Changed"
QT_MOC_LITERAL(33, 554, 18), // "cpuSerial11Changed"
QT_MOC_LITERAL(34, 573, 19), // "CPUSerial_11Changed"
QT_MOC_LITERAL(35, 593, 16), // "boardTypeChanged"
QT_MOC_LITERAL(36, 610, 16), // "BoardTypeChanged"
QT_MOC_LITERAL(37, 627, 25), // "bootloaderRevisionChanged"
QT_MOC_LITERAL(38, 653, 25), // "BootloaderRevisionChanged"
QT_MOC_LITERAL(39, 679, 15), // "armResetChanged"
QT_MOC_LITERAL(40, 695, 15), // "ArmResetChanged"
QT_MOC_LITERAL(41, 711, 6), // "setCrc"
QT_MOC_LITERAL(42, 718, 6), // "setcrc"
QT_MOC_LITERAL(43, 725, 10), // "setCommand"
QT_MOC_LITERAL(44, 736, 16), // "setBoardRevision"
QT_MOC_LITERAL(45, 753, 12), // "setCPUSerial"
QT_MOC_LITERAL(46, 766, 13), // "setCPUSerial0"
QT_MOC_LITERAL(47, 780, 14), // "setCPUSerial_0"
QT_MOC_LITERAL(48, 795, 13), // "setCPUSerial1"
QT_MOC_LITERAL(49, 809, 14), // "setCPUSerial_1"
QT_MOC_LITERAL(50, 824, 13), // "setCPUSerial2"
QT_MOC_LITERAL(51, 838, 14), // "setCPUSerial_2"
QT_MOC_LITERAL(52, 853, 13), // "setCPUSerial3"
QT_MOC_LITERAL(53, 867, 14), // "setCPUSerial_3"
QT_MOC_LITERAL(54, 882, 13), // "setCPUSerial4"
QT_MOC_LITERAL(55, 896, 14), // "setCPUSerial_4"
QT_MOC_LITERAL(56, 911, 13), // "setCPUSerial5"
QT_MOC_LITERAL(57, 925, 14), // "setCPUSerial_5"
QT_MOC_LITERAL(58, 940, 13), // "setCPUSerial6"
QT_MOC_LITERAL(59, 954, 14), // "setCPUSerial_6"
QT_MOC_LITERAL(60, 969, 13), // "setCPUSerial7"
QT_MOC_LITERAL(61, 983, 14), // "setCPUSerial_7"
QT_MOC_LITERAL(62, 998, 13), // "setCPUSerial8"
QT_MOC_LITERAL(63, 1012, 14), // "setCPUSerial_8"
QT_MOC_LITERAL(64, 1027, 13), // "setCPUSerial9"
QT_MOC_LITERAL(65, 1041, 14), // "setCPUSerial_9"
QT_MOC_LITERAL(66, 1056, 14), // "setCPUSerial10"
QT_MOC_LITERAL(67, 1071, 15), // "setCPUSerial_10"
QT_MOC_LITERAL(68, 1087, 14), // "setCPUSerial11"
QT_MOC_LITERAL(69, 1102, 15), // "setCPUSerial_11"
QT_MOC_LITERAL(70, 1118, 12), // "setBoardType"
QT_MOC_LITERAL(71, 1131, 21), // "setBootloaderRevision"
QT_MOC_LITERAL(72, 1153, 11), // "setArmReset"
QT_MOC_LITERAL(73, 1165, 17), // "emitNotifications"
QT_MOC_LITERAL(74, 1183, 6), // "getcrc"
QT_MOC_LITERAL(75, 1190, 10), // "getCommand"
QT_MOC_LITERAL(76, 1201, 16), // "getBoardRevision"
QT_MOC_LITERAL(77, 1218, 9), // "cpuSerial"
QT_MOC_LITERAL(78, 1228, 12), // "getCPUSerial"
QT_MOC_LITERAL(79, 1241, 14), // "getCPUSerial_0"
QT_MOC_LITERAL(80, 1256, 14), // "getCPUSerial_1"
QT_MOC_LITERAL(81, 1271, 14), // "getCPUSerial_2"
QT_MOC_LITERAL(82, 1286, 14), // "getCPUSerial_3"
QT_MOC_LITERAL(83, 1301, 14), // "getCPUSerial_4"
QT_MOC_LITERAL(84, 1316, 14), // "getCPUSerial_5"
QT_MOC_LITERAL(85, 1331, 14), // "getCPUSerial_6"
QT_MOC_LITERAL(86, 1346, 14), // "getCPUSerial_7"
QT_MOC_LITERAL(87, 1361, 14), // "getCPUSerial_8"
QT_MOC_LITERAL(88, 1376, 14), // "getCPUSerial_9"
QT_MOC_LITERAL(89, 1391, 15), // "getCPUSerial_10"
QT_MOC_LITERAL(90, 1407, 15), // "getCPUSerial_11"
QT_MOC_LITERAL(91, 1423, 12), // "getBoardType"
QT_MOC_LITERAL(92, 1436, 21), // "getBootloaderRevision"
QT_MOC_LITERAL(93, 1458, 11), // "getArmReset"
QT_MOC_LITERAL(94, 1470, 3), // "crc"
QT_MOC_LITERAL(95, 1474, 7), // "command"
QT_MOC_LITERAL(96, 1482, 13), // "boardRevision"
QT_MOC_LITERAL(97, 1496, 10), // "cpuSerial0"
QT_MOC_LITERAL(98, 1507, 10), // "cpuSerial1"
QT_MOC_LITERAL(99, 1518, 10), // "cpuSerial2"
QT_MOC_LITERAL(100, 1529, 10), // "cpuSerial3"
QT_MOC_LITERAL(101, 1540, 10), // "cpuSerial4"
QT_MOC_LITERAL(102, 1551, 10), // "cpuSerial5"
QT_MOC_LITERAL(103, 1562, 10), // "cpuSerial6"
QT_MOC_LITERAL(104, 1573, 10), // "cpuSerial7"
QT_MOC_LITERAL(105, 1584, 10), // "cpuSerial8"
QT_MOC_LITERAL(106, 1595, 10), // "cpuSerial9"
QT_MOC_LITERAL(107, 1606, 11), // "cpuSerial10"
QT_MOC_LITERAL(108, 1618, 11), // "cpuSerial11"
QT_MOC_LITERAL(109, 1630, 9), // "boardType"
QT_MOC_LITERAL(110, 1640, 18), // "bootloaderRevision"
QT_MOC_LITERAL(111, 1659, 8), // "armReset"
QT_MOC_LITERAL(112, 1668, 7), // "Command"
QT_MOC_LITERAL(113, 1676, 13), // "BoardRevision"
QT_MOC_LITERAL(114, 1690, 11), // "CPUSerial_0"
QT_MOC_LITERAL(115, 1702, 11), // "CPUSerial_1"
QT_MOC_LITERAL(116, 1714, 11), // "CPUSerial_2"
QT_MOC_LITERAL(117, 1726, 11), // "CPUSerial_3"
QT_MOC_LITERAL(118, 1738, 11), // "CPUSerial_4"
QT_MOC_LITERAL(119, 1750, 11), // "CPUSerial_5"
QT_MOC_LITERAL(120, 1762, 11), // "CPUSerial_6"
QT_MOC_LITERAL(121, 1774, 11), // "CPUSerial_7"
QT_MOC_LITERAL(122, 1786, 11), // "CPUSerial_8"
QT_MOC_LITERAL(123, 1798, 11), // "CPUSerial_9"
QT_MOC_LITERAL(124, 1810, 12), // "CPUSerial_10"
QT_MOC_LITERAL(125, 1823, 12), // "CPUSerial_11"
QT_MOC_LITERAL(126, 1836, 9), // "BoardType"
QT_MOC_LITERAL(127, 1846, 18), // "BootloaderRevision"
QT_MOC_LITERAL(128, 1865, 8) // "ArmReset"

    },
    "FirmwareIAPObj\0crcChanged\0\0value\0"
    "commandChanged\0CommandChanged\0"
    "boardRevisionChanged\0BoardRevisionChanged\0"
    "cpuSerialChanged\0index\0CPUSerialChanged\0"
    "cpuSerial0Changed\0CPUSerial_0Changed\0"
    "cpuSerial1Changed\0CPUSerial_1Changed\0"
    "cpuSerial2Changed\0CPUSerial_2Changed\0"
    "cpuSerial3Changed\0CPUSerial_3Changed\0"
    "cpuSerial4Changed\0CPUSerial_4Changed\0"
    "cpuSerial5Changed\0CPUSerial_5Changed\0"
    "cpuSerial6Changed\0CPUSerial_6Changed\0"
    "cpuSerial7Changed\0CPUSerial_7Changed\0"
    "cpuSerial8Changed\0CPUSerial_8Changed\0"
    "cpuSerial9Changed\0CPUSerial_9Changed\0"
    "cpuSerial10Changed\0CPUSerial_10Changed\0"
    "cpuSerial11Changed\0CPUSerial_11Changed\0"
    "boardTypeChanged\0BoardTypeChanged\0"
    "bootloaderRevisionChanged\0"
    "BootloaderRevisionChanged\0armResetChanged\0"
    "ArmResetChanged\0setCrc\0setcrc\0setCommand\0"
    "setBoardRevision\0setCPUSerial\0"
    "setCPUSerial0\0setCPUSerial_0\0setCPUSerial1\0"
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
    "setCPUSerial_11\0setBoardType\0"
    "setBootloaderRevision\0setArmReset\0"
    "emitNotifications\0getcrc\0getCommand\0"
    "getBoardRevision\0cpuSerial\0getCPUSerial\0"
    "getCPUSerial_0\0getCPUSerial_1\0"
    "getCPUSerial_2\0getCPUSerial_3\0"
    "getCPUSerial_4\0getCPUSerial_5\0"
    "getCPUSerial_6\0getCPUSerial_7\0"
    "getCPUSerial_8\0getCPUSerial_9\0"
    "getCPUSerial_10\0getCPUSerial_11\0"
    "getBoardType\0getBootloaderRevision\0"
    "getArmReset\0crc\0command\0boardRevision\0"
    "cpuSerial0\0cpuSerial1\0cpuSerial2\0"
    "cpuSerial3\0cpuSerial4\0cpuSerial5\0"
    "cpuSerial6\0cpuSerial7\0cpuSerial8\0"
    "cpuSerial9\0cpuSerial10\0cpuSerial11\0"
    "boardType\0bootloaderRevision\0armReset\0"
    "Command\0BoardRevision\0CPUSerial_0\0"
    "CPUSerial_1\0CPUSerial_2\0CPUSerial_3\0"
    "CPUSerial_4\0CPUSerial_5\0CPUSerial_6\0"
    "CPUSerial_7\0CPUSerial_8\0CPUSerial_9\0"
    "CPUSerial_10\0CPUSerial_11\0BoardType\0"
    "BootloaderRevision\0ArmReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirmwareIAPObj[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      94,   14, // methods
      35,  736, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      37,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  484,    2, 0x06 /* Public */,
       4,    1,  487,    2, 0x06 /* Public */,
       5,    1,  490,    2, 0x06 /* Public */,
       6,    1,  493,    2, 0x06 /* Public */,
       7,    1,  496,    2, 0x06 /* Public */,
       8,    2,  499,    2, 0x06 /* Public */,
      10,    2,  504,    2, 0x06 /* Public */,
      11,    1,  509,    2, 0x06 /* Public */,
      12,    1,  512,    2, 0x06 /* Public */,
      13,    1,  515,    2, 0x06 /* Public */,
      14,    1,  518,    2, 0x06 /* Public */,
      15,    1,  521,    2, 0x06 /* Public */,
      16,    1,  524,    2, 0x06 /* Public */,
      17,    1,  527,    2, 0x06 /* Public */,
      18,    1,  530,    2, 0x06 /* Public */,
      19,    1,  533,    2, 0x06 /* Public */,
      20,    1,  536,    2, 0x06 /* Public */,
      21,    1,  539,    2, 0x06 /* Public */,
      22,    1,  542,    2, 0x06 /* Public */,
      23,    1,  545,    2, 0x06 /* Public */,
      24,    1,  548,    2, 0x06 /* Public */,
      25,    1,  551,    2, 0x06 /* Public */,
      26,    1,  554,    2, 0x06 /* Public */,
      27,    1,  557,    2, 0x06 /* Public */,
      28,    1,  560,    2, 0x06 /* Public */,
      29,    1,  563,    2, 0x06 /* Public */,
      30,    1,  566,    2, 0x06 /* Public */,
      31,    1,  569,    2, 0x06 /* Public */,
      32,    1,  572,    2, 0x06 /* Public */,
      33,    1,  575,    2, 0x06 /* Public */,
      34,    1,  578,    2, 0x06 /* Public */,
      35,    1,  581,    2, 0x06 /* Public */,
      36,    1,  584,    2, 0x06 /* Public */,
      37,    1,  587,    2, 0x06 /* Public */,
      38,    1,  590,    2, 0x06 /* Public */,
      39,    1,  593,    2, 0x06 /* Public */,
      40,    1,  596,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      41,    1,  599,    2, 0x0a /* Public */,
      42,    1,  602,    2, 0x0a /* Public */,
      43,    1,  605,    2, 0x0a /* Public */,
      44,    1,  608,    2, 0x0a /* Public */,
      45,    2,  611,    2, 0x0a /* Public */,
      45,    2,  616,    2, 0x0a /* Public */,
      46,    1,  621,    2, 0x0a /* Public */,
      47,    1,  624,    2, 0x0a /* Public */,
      48,    1,  627,    2, 0x0a /* Public */,
      49,    1,  630,    2, 0x0a /* Public */,
      50,    1,  633,    2, 0x0a /* Public */,
      51,    1,  636,    2, 0x0a /* Public */,
      52,    1,  639,    2, 0x0a /* Public */,
      53,    1,  642,    2, 0x0a /* Public */,
      54,    1,  645,    2, 0x0a /* Public */,
      55,    1,  648,    2, 0x0a /* Public */,
      56,    1,  651,    2, 0x0a /* Public */,
      57,    1,  654,    2, 0x0a /* Public */,
      58,    1,  657,    2, 0x0a /* Public */,
      59,    1,  660,    2, 0x0a /* Public */,
      60,    1,  663,    2, 0x0a /* Public */,
      61,    1,  666,    2, 0x0a /* Public */,
      62,    1,  669,    2, 0x0a /* Public */,
      63,    1,  672,    2, 0x0a /* Public */,
      64,    1,  675,    2, 0x0a /* Public */,
      65,    1,  678,    2, 0x0a /* Public */,
      66,    1,  681,    2, 0x0a /* Public */,
      67,    1,  684,    2, 0x0a /* Public */,
      68,    1,  687,    2, 0x0a /* Public */,
      69,    1,  690,    2, 0x0a /* Public */,
      70,    1,  693,    2, 0x0a /* Public */,
      70,    1,  696,    2, 0x0a /* Public */,
      71,    1,  699,    2, 0x0a /* Public */,
      71,    1,  702,    2, 0x0a /* Public */,
      72,    1,  705,    2, 0x0a /* Public */,
      72,    1,  708,    2, 0x0a /* Public */,
      73,    0,  711,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      74,    0,  712,    2, 0x02 /* Public */,
      75,    0,  713,    2, 0x02 /* Public */,
      76,    0,  714,    2, 0x02 /* Public */,
      77,    1,  715,    2, 0x02 /* Public */,
      78,    1,  718,    2, 0x02 /* Public */,
      79,    0,  721,    2, 0x02 /* Public */,
      80,    0,  722,    2, 0x02 /* Public */,
      81,    0,  723,    2, 0x02 /* Public */,
      82,    0,  724,    2, 0x02 /* Public */,
      83,    0,  725,    2, 0x02 /* Public */,
      84,    0,  726,    2, 0x02 /* Public */,
      85,    0,  727,    2, 0x02 /* Public */,
      86,    0,  728,    2, 0x02 /* Public */,
      87,    0,  729,    2, 0x02 /* Public */,
      88,    0,  730,    2, 0x02 /* Public */,
      89,    0,  731,    2, 0x02 /* Public */,
      90,    0,  732,    2, 0x02 /* Public */,
      91,    0,  733,    2, 0x02 /* Public */,
      92,    0,  734,    2, 0x02 /* Public */,
      93,    0,  735,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    9,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    9,    3,
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

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    9,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    9,    3,
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
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort, QMetaType::UInt,    9,
    QMetaType::UChar, QMetaType::UInt,    9,
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

 // properties: name, type, flags
      94, QMetaType::UInt, 0x00495103,
      95, QMetaType::UShort, 0x00495103,
      96, QMetaType::UShort, 0x00495103,
      97, QMetaType::UShort, 0x00495003,
      98, QMetaType::UShort, 0x00495003,
      99, QMetaType::UShort, 0x00495003,
     100, QMetaType::UShort, 0x00495003,
     101, QMetaType::UShort, 0x00495003,
     102, QMetaType::UShort, 0x00495003,
     103, QMetaType::UShort, 0x00495003,
     104, QMetaType::UShort, 0x00495003,
     105, QMetaType::UShort, 0x00495003,
     106, QMetaType::UShort, 0x00495003,
     107, QMetaType::UShort, 0x00495003,
     108, QMetaType::UShort, 0x00495003,
     109, QMetaType::UShort, 0x00495103,
     110, QMetaType::UShort, 0x00495103,
     111, QMetaType::UShort, 0x00495103,
     112, QMetaType::UShort, 0x00495103,
     113, QMetaType::UShort, 0x00495103,
     114, QMetaType::UChar, 0x00495103,
     115, QMetaType::UChar, 0x00495103,
     116, QMetaType::UChar, 0x00495103,
     117, QMetaType::UChar, 0x00495103,
     118, QMetaType::UChar, 0x00495103,
     119, QMetaType::UChar, 0x00495103,
     120, QMetaType::UChar, 0x00495103,
     121, QMetaType::UChar, 0x00495103,
     122, QMetaType::UChar, 0x00495103,
     123, QMetaType::UChar, 0x00495103,
     124, QMetaType::UChar, 0x00495103,
     125, QMetaType::UChar, 0x00495103,
     126, QMetaType::UChar, 0x00495103,
     127, QMetaType::UChar, 0x00495103,
     128, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       3,
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
      31,
      33,
      35,
       2,
       4,
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
      30,
      32,
      34,
      36,

       0        // eod
};

void FirmwareIAPObj::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FirmwareIAPObj *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->crcChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: _t->commandChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 2: _t->CommandChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 3: _t->boardRevisionChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 4: _t->BoardRevisionChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 5: _t->cpuSerialChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 6: _t->CPUSerialChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 7: _t->cpuSerial0Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 8: _t->CPUSerial_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 9: _t->cpuSerial1Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 10: _t->CPUSerial_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 11: _t->cpuSerial2Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 12: _t->CPUSerial_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 13: _t->cpuSerial3Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 14: _t->CPUSerial_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 15: _t->cpuSerial4Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 16: _t->CPUSerial_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 17: _t->cpuSerial5Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 18: _t->CPUSerial_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 19: _t->cpuSerial6Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 20: _t->CPUSerial_6Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 21: _t->cpuSerial7Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 22: _t->CPUSerial_7Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 23: _t->cpuSerial8Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 24: _t->CPUSerial_8Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 25: _t->cpuSerial9Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 26: _t->CPUSerial_9Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 27: _t->cpuSerial10Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 28: _t->CPUSerial_10Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 29: _t->cpuSerial11Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 30: _t->CPUSerial_11Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 31: _t->boardTypeChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 32: _t->BoardTypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 33: _t->bootloaderRevisionChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 34: _t->BootloaderRevisionChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 35: _t->armResetChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 36: _t->ArmResetChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 37: _t->setCrc((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 38: _t->setcrc((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 39: _t->setCommand((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 40: _t->setBoardRevision((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 41: _t->setCPUSerial((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 42: _t->setCPUSerial((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 43: _t->setCPUSerial0((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 44: _t->setCPUSerial_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 45: _t->setCPUSerial1((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 46: _t->setCPUSerial_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 47: _t->setCPUSerial2((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 48: _t->setCPUSerial_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 49: _t->setCPUSerial3((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 50: _t->setCPUSerial_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 51: _t->setCPUSerial4((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 52: _t->setCPUSerial_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 53: _t->setCPUSerial5((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 54: _t->setCPUSerial_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 55: _t->setCPUSerial6((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 56: _t->setCPUSerial_6((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 57: _t->setCPUSerial7((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 58: _t->setCPUSerial_7((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 59: _t->setCPUSerial8((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 60: _t->setCPUSerial_8((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 61: _t->setCPUSerial9((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 62: _t->setCPUSerial_9((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 63: _t->setCPUSerial10((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 64: _t->setCPUSerial_10((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 65: _t->setCPUSerial11((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 66: _t->setCPUSerial_11((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 67: _t->setBoardType((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 68: _t->setBoardType((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 69: _t->setBootloaderRevision((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 70: _t->setBootloaderRevision((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 71: _t->setArmReset((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 72: _t->setArmReset((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 73: _t->emitNotifications(); break;
        case 74: { quint32 _r = _t->getcrc();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 75: { quint16 _r = _t->getCommand();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 76: { quint16 _r = _t->getBoardRevision();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 77: { quint16 _r = _t->cpuSerial((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 78: { quint8 _r = _t->getCPUSerial((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 79: { quint8 _r = _t->getCPUSerial_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 80: { quint8 _r = _t->getCPUSerial_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 81: { quint8 _r = _t->getCPUSerial_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 82: { quint8 _r = _t->getCPUSerial_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 83: { quint8 _r = _t->getCPUSerial_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 84: { quint8 _r = _t->getCPUSerial_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 85: { quint8 _r = _t->getCPUSerial_6();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 86: { quint8 _r = _t->getCPUSerial_7();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 87: { quint8 _r = _t->getCPUSerial_8();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 88: { quint8 _r = _t->getCPUSerial_9();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 89: { quint8 _r = _t->getCPUSerial_10();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 90: { quint8 _r = _t->getCPUSerial_11();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 91: { quint8 _r = _t->getBoardType();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 92: { quint8 _r = _t->getBootloaderRevision();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 93: { quint8 _r = _t->getArmReset();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FirmwareIAPObj::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::crcChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::commandChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CommandChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::boardRevisionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::BoardRevisionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerialChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerialChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerial0Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerial_0Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerial1Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerial_1Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerial2Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerial_2Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerial3Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerial_3Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerial4Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerial_4Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerial5Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerial_5Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerial6Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerial_6Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerial7Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerial_7Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerial8Changed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerial_8Changed)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerial9Changed)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerial_9Changed)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerial10Changed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerial_10Changed)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::cpuSerial11Changed)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::CPUSerial_11Changed)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::boardTypeChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::BoardTypeChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::bootloaderRevisionChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::BootloaderRevisionChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::armResetChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (FirmwareIAPObj::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareIAPObj::ArmResetChanged)) {
                *result = 36;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FirmwareIAPObj *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->crc(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->command(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->boardRevision(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial0(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial1(); break;
        case 5: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial2(); break;
        case 6: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial3(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial4(); break;
        case 8: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial5(); break;
        case 9: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial6(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial7(); break;
        case 11: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial8(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial9(); break;
        case 13: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial10(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->cpuSerial11(); break;
        case 15: *reinterpret_cast< quint16*>(_v) = _t->boardType(); break;
        case 16: *reinterpret_cast< quint16*>(_v) = _t->bootloaderRevision(); break;
        case 17: *reinterpret_cast< quint16*>(_v) = _t->armReset(); break;
        case 18: *reinterpret_cast< quint16*>(_v) = _t->getCommand(); break;
        case 19: *reinterpret_cast< quint16*>(_v) = _t->getBoardRevision(); break;
        case 20: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_0(); break;
        case 21: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_1(); break;
        case 22: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_2(); break;
        case 23: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_3(); break;
        case 24: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_4(); break;
        case 25: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_5(); break;
        case 26: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_6(); break;
        case 27: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_7(); break;
        case 28: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_8(); break;
        case 29: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_9(); break;
        case 30: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_10(); break;
        case 31: *reinterpret_cast< quint8*>(_v) = _t->getCPUSerial_11(); break;
        case 32: *reinterpret_cast< quint8*>(_v) = _t->getBoardType(); break;
        case 33: *reinterpret_cast< quint8*>(_v) = _t->getBootloaderRevision(); break;
        case 34: *reinterpret_cast< quint8*>(_v) = _t->getArmReset(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FirmwareIAPObj *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCrc(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setCommand(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setBoardRevision(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setCPUSerial0(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setCPUSerial1(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setCPUSerial2(*reinterpret_cast< quint16*>(_v)); break;
        case 6: _t->setCPUSerial3(*reinterpret_cast< quint16*>(_v)); break;
        case 7: _t->setCPUSerial4(*reinterpret_cast< quint16*>(_v)); break;
        case 8: _t->setCPUSerial5(*reinterpret_cast< quint16*>(_v)); break;
        case 9: _t->setCPUSerial6(*reinterpret_cast< quint16*>(_v)); break;
        case 10: _t->setCPUSerial7(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setCPUSerial8(*reinterpret_cast< quint16*>(_v)); break;
        case 12: _t->setCPUSerial9(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setCPUSerial10(*reinterpret_cast< quint16*>(_v)); break;
        case 14: _t->setCPUSerial11(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setBoardType(*reinterpret_cast< quint16*>(_v)); break;
        case 16: _t->setBootloaderRevision(*reinterpret_cast< quint16*>(_v)); break;
        case 17: _t->setArmReset(*reinterpret_cast< quint16*>(_v)); break;
        case 18: _t->setCommand(*reinterpret_cast< quint16*>(_v)); break;
        case 19: _t->setBoardRevision(*reinterpret_cast< quint16*>(_v)); break;
        case 20: _t->setCPUSerial_0(*reinterpret_cast< quint8*>(_v)); break;
        case 21: _t->setCPUSerial_1(*reinterpret_cast< quint8*>(_v)); break;
        case 22: _t->setCPUSerial_2(*reinterpret_cast< quint8*>(_v)); break;
        case 23: _t->setCPUSerial_3(*reinterpret_cast< quint8*>(_v)); break;
        case 24: _t->setCPUSerial_4(*reinterpret_cast< quint8*>(_v)); break;
        case 25: _t->setCPUSerial_5(*reinterpret_cast< quint8*>(_v)); break;
        case 26: _t->setCPUSerial_6(*reinterpret_cast< quint8*>(_v)); break;
        case 27: _t->setCPUSerial_7(*reinterpret_cast< quint8*>(_v)); break;
        case 28: _t->setCPUSerial_8(*reinterpret_cast< quint8*>(_v)); break;
        case 29: _t->setCPUSerial_9(*reinterpret_cast< quint8*>(_v)); break;
        case 30: _t->setCPUSerial_10(*reinterpret_cast< quint8*>(_v)); break;
        case 31: _t->setCPUSerial_11(*reinterpret_cast< quint8*>(_v)); break;
        case 32: _t->setBoardType(*reinterpret_cast< quint8*>(_v)); break;
        case 33: _t->setBootloaderRevision(*reinterpret_cast< quint8*>(_v)); break;
        case 34: _t->setArmReset(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FirmwareIAPObj::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_FirmwareIAPObj.data,
    qt_meta_data_FirmwareIAPObj,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FirmwareIAPObj::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirmwareIAPObj::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FirmwareIAPObj.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int FirmwareIAPObj::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 94)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 94;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 94)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 94;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 35;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 35;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 35;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 35;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 35;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FirmwareIAPObj::crcChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FirmwareIAPObj::commandChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FirmwareIAPObj::CommandChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FirmwareIAPObj::boardRevisionChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FirmwareIAPObj::BoardRevisionChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FirmwareIAPObj::cpuSerialChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FirmwareIAPObj::CPUSerialChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FirmwareIAPObj::cpuSerial0Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FirmwareIAPObj::CPUSerial_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FirmwareIAPObj::cpuSerial1Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FirmwareIAPObj::CPUSerial_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FirmwareIAPObj::cpuSerial2Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FirmwareIAPObj::CPUSerial_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FirmwareIAPObj::cpuSerial3Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void FirmwareIAPObj::CPUSerial_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void FirmwareIAPObj::cpuSerial4Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void FirmwareIAPObj::CPUSerial_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void FirmwareIAPObj::cpuSerial5Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void FirmwareIAPObj::CPUSerial_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void FirmwareIAPObj::cpuSerial6Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void FirmwareIAPObj::CPUSerial_6Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void FirmwareIAPObj::cpuSerial7Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void FirmwareIAPObj::CPUSerial_7Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void FirmwareIAPObj::cpuSerial8Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void FirmwareIAPObj::CPUSerial_8Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void FirmwareIAPObj::cpuSerial9Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void FirmwareIAPObj::CPUSerial_9Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void FirmwareIAPObj::cpuSerial10Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void FirmwareIAPObj::CPUSerial_10Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void FirmwareIAPObj::cpuSerial11Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void FirmwareIAPObj::CPUSerial_11Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void FirmwareIAPObj::boardTypeChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void FirmwareIAPObj::BoardTypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void FirmwareIAPObj::bootloaderRevisionChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void FirmwareIAPObj::BootloaderRevisionChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void FirmwareIAPObj::armResetChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void FirmwareIAPObj::ArmResetChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
