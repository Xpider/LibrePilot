/****************************************************************************
** Meta object code from reading C++ file 'gpsextendedstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gpsextendedstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpsextendedstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPSExtendedStatusConstants_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSExtendedStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSExtendedStatusConstants_t qt_meta_stringdata_GPSExtendedStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 26), // "GPSExtendedStatusConstants"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 11) // "StatusCount"

    },
    "GPSExtendedStatusConstants\0Enum\0"
    "StatusCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSExtendedStatusConstants[] = {

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
       2, uint(GPSExtendedStatusConstants::StatusCount),

       0        // eod
};

void GPSExtendedStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSExtendedStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSExtendedStatusConstants.data,
    qt_meta_data_GPSExtendedStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSExtendedStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSExtendedStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSExtendedStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSExtendedStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSExtendedStatus_Status_t {
    QByteArrayData data[4];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSExtendedStatus_Status_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSExtendedStatus_Status_t qt_meta_stringdata_GPSExtendedStatus_Status = {
    {
QT_MOC_LITERAL(0, 0, 24), // "GPSExtendedStatus_Status"
QT_MOC_LITERAL(1, 25, 4), // "Enum"
QT_MOC_LITERAL(2, 30, 4), // "NONE"
QT_MOC_LITERAL(3, 35, 5) // "GPSV9"

    },
    "GPSExtendedStatus_Status\0Enum\0NONE\0"
    "GPSV9"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSExtendedStatus_Status[] = {

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
       2, uint(GPSExtendedStatus_Status::NONE),
       3, uint(GPSExtendedStatus_Status::GPSV9),

       0        // eod
};

void GPSExtendedStatus_Status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSExtendedStatus_Status::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSExtendedStatus_Status.data,
    qt_meta_data_GPSExtendedStatus_Status,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSExtendedStatus_Status::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSExtendedStatus_Status::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSExtendedStatus_Status.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSExtendedStatus_Status::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSExtendedStatus_t {
    QByteArrayData data[291];
    char stringdata0[4919];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSExtendedStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSExtendedStatus_t qt_meta_stringdata_GPSExtendedStatus = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GPSExtendedStatus"
QT_MOC_LITERAL(1, 18, 17), // "flightTimeChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 17), // "FlightTimeChanged"
QT_MOC_LITERAL(5, 61, 14), // "optionsChanged"
QT_MOC_LITERAL(6, 76, 14), // "OptionsChanged"
QT_MOC_LITERAL(7, 91, 13), // "statusChanged"
QT_MOC_LITERAL(8, 105, 30), // "GPSExtendedStatus_Status::Enum"
QT_MOC_LITERAL(9, 136, 13), // "StatusChanged"
QT_MOC_LITERAL(10, 150, 16), // "boardTypeChanged"
QT_MOC_LITERAL(11, 167, 5), // "index"
QT_MOC_LITERAL(12, 173, 16), // "BoardTypeChanged"
QT_MOC_LITERAL(13, 190, 17), // "boardType0Changed"
QT_MOC_LITERAL(14, 208, 18), // "BoardType_0Changed"
QT_MOC_LITERAL(15, 227, 17), // "boardType1Changed"
QT_MOC_LITERAL(16, 245, 18), // "BoardType_1Changed"
QT_MOC_LITERAL(17, 264, 19), // "firmwareHashChanged"
QT_MOC_LITERAL(18, 284, 19), // "FirmwareHashChanged"
QT_MOC_LITERAL(19, 304, 20), // "firmwareHash0Changed"
QT_MOC_LITERAL(20, 325, 21), // "FirmwareHash_0Changed"
QT_MOC_LITERAL(21, 347, 20), // "firmwareHash1Changed"
QT_MOC_LITERAL(22, 368, 21), // "FirmwareHash_1Changed"
QT_MOC_LITERAL(23, 390, 20), // "firmwareHash2Changed"
QT_MOC_LITERAL(24, 411, 21), // "FirmwareHash_2Changed"
QT_MOC_LITERAL(25, 433, 20), // "firmwareHash3Changed"
QT_MOC_LITERAL(26, 454, 21), // "FirmwareHash_3Changed"
QT_MOC_LITERAL(27, 476, 20), // "firmwareHash4Changed"
QT_MOC_LITERAL(28, 497, 21), // "FirmwareHash_4Changed"
QT_MOC_LITERAL(29, 519, 20), // "firmwareHash5Changed"
QT_MOC_LITERAL(30, 540, 21), // "FirmwareHash_5Changed"
QT_MOC_LITERAL(31, 562, 20), // "firmwareHash6Changed"
QT_MOC_LITERAL(32, 583, 21), // "FirmwareHash_6Changed"
QT_MOC_LITERAL(33, 605, 20), // "firmwareHash7Changed"
QT_MOC_LITERAL(34, 626, 21), // "FirmwareHash_7Changed"
QT_MOC_LITERAL(35, 648, 18), // "firmwareTagChanged"
QT_MOC_LITERAL(36, 667, 18), // "FirmwareTagChanged"
QT_MOC_LITERAL(37, 686, 19), // "firmwareTag0Changed"
QT_MOC_LITERAL(38, 706, 20), // "FirmwareTag_0Changed"
QT_MOC_LITERAL(39, 727, 19), // "firmwareTag1Changed"
QT_MOC_LITERAL(40, 747, 20), // "FirmwareTag_1Changed"
QT_MOC_LITERAL(41, 768, 19), // "firmwareTag2Changed"
QT_MOC_LITERAL(42, 788, 20), // "FirmwareTag_2Changed"
QT_MOC_LITERAL(43, 809, 19), // "firmwareTag3Changed"
QT_MOC_LITERAL(44, 829, 20), // "FirmwareTag_3Changed"
QT_MOC_LITERAL(45, 850, 19), // "firmwareTag4Changed"
QT_MOC_LITERAL(46, 870, 20), // "FirmwareTag_4Changed"
QT_MOC_LITERAL(47, 891, 19), // "firmwareTag5Changed"
QT_MOC_LITERAL(48, 911, 20), // "FirmwareTag_5Changed"
QT_MOC_LITERAL(49, 932, 19), // "firmwareTag6Changed"
QT_MOC_LITERAL(50, 952, 20), // "FirmwareTag_6Changed"
QT_MOC_LITERAL(51, 973, 19), // "firmwareTag7Changed"
QT_MOC_LITERAL(52, 993, 20), // "FirmwareTag_7Changed"
QT_MOC_LITERAL(53, 1014, 19), // "firmwareTag8Changed"
QT_MOC_LITERAL(54, 1034, 20), // "FirmwareTag_8Changed"
QT_MOC_LITERAL(55, 1055, 19), // "firmwareTag9Changed"
QT_MOC_LITERAL(56, 1075, 20), // "FirmwareTag_9Changed"
QT_MOC_LITERAL(57, 1096, 20), // "firmwareTag10Changed"
QT_MOC_LITERAL(58, 1117, 21), // "FirmwareTag_10Changed"
QT_MOC_LITERAL(59, 1139, 20), // "firmwareTag11Changed"
QT_MOC_LITERAL(60, 1160, 21), // "FirmwareTag_11Changed"
QT_MOC_LITERAL(61, 1182, 20), // "firmwareTag12Changed"
QT_MOC_LITERAL(62, 1203, 21), // "FirmwareTag_12Changed"
QT_MOC_LITERAL(63, 1225, 20), // "firmwareTag13Changed"
QT_MOC_LITERAL(64, 1246, 21), // "FirmwareTag_13Changed"
QT_MOC_LITERAL(65, 1268, 20), // "firmwareTag14Changed"
QT_MOC_LITERAL(66, 1289, 21), // "FirmwareTag_14Changed"
QT_MOC_LITERAL(67, 1311, 20), // "firmwareTag15Changed"
QT_MOC_LITERAL(68, 1332, 21), // "FirmwareTag_15Changed"
QT_MOC_LITERAL(69, 1354, 20), // "firmwareTag16Changed"
QT_MOC_LITERAL(70, 1375, 21), // "FirmwareTag_16Changed"
QT_MOC_LITERAL(71, 1397, 20), // "firmwareTag17Changed"
QT_MOC_LITERAL(72, 1418, 21), // "FirmwareTag_17Changed"
QT_MOC_LITERAL(73, 1440, 20), // "firmwareTag18Changed"
QT_MOC_LITERAL(74, 1461, 21), // "FirmwareTag_18Changed"
QT_MOC_LITERAL(75, 1483, 20), // "firmwareTag19Changed"
QT_MOC_LITERAL(76, 1504, 21), // "FirmwareTag_19Changed"
QT_MOC_LITERAL(77, 1526, 20), // "firmwareTag20Changed"
QT_MOC_LITERAL(78, 1547, 21), // "FirmwareTag_20Changed"
QT_MOC_LITERAL(79, 1569, 20), // "firmwareTag21Changed"
QT_MOC_LITERAL(80, 1590, 21), // "FirmwareTag_21Changed"
QT_MOC_LITERAL(81, 1612, 20), // "firmwareTag22Changed"
QT_MOC_LITERAL(82, 1633, 21), // "FirmwareTag_22Changed"
QT_MOC_LITERAL(83, 1655, 20), // "firmwareTag23Changed"
QT_MOC_LITERAL(84, 1676, 21), // "FirmwareTag_23Changed"
QT_MOC_LITERAL(85, 1698, 20), // "firmwareTag24Changed"
QT_MOC_LITERAL(86, 1719, 21), // "FirmwareTag_24Changed"
QT_MOC_LITERAL(87, 1741, 20), // "firmwareTag25Changed"
QT_MOC_LITERAL(88, 1762, 21), // "FirmwareTag_25Changed"
QT_MOC_LITERAL(89, 1784, 13), // "setFlightTime"
QT_MOC_LITERAL(90, 1798, 10), // "setOptions"
QT_MOC_LITERAL(91, 1809, 9), // "setStatus"
QT_MOC_LITERAL(92, 1819, 12), // "setBoardType"
QT_MOC_LITERAL(93, 1832, 13), // "setBoardType0"
QT_MOC_LITERAL(94, 1846, 14), // "setBoardType_0"
QT_MOC_LITERAL(95, 1861, 13), // "setBoardType1"
QT_MOC_LITERAL(96, 1875, 14), // "setBoardType_1"
QT_MOC_LITERAL(97, 1890, 15), // "setFirmwareHash"
QT_MOC_LITERAL(98, 1906, 16), // "setFirmwareHash0"
QT_MOC_LITERAL(99, 1923, 17), // "setFirmwareHash_0"
QT_MOC_LITERAL(100, 1941, 16), // "setFirmwareHash1"
QT_MOC_LITERAL(101, 1958, 17), // "setFirmwareHash_1"
QT_MOC_LITERAL(102, 1976, 16), // "setFirmwareHash2"
QT_MOC_LITERAL(103, 1993, 17), // "setFirmwareHash_2"
QT_MOC_LITERAL(104, 2011, 16), // "setFirmwareHash3"
QT_MOC_LITERAL(105, 2028, 17), // "setFirmwareHash_3"
QT_MOC_LITERAL(106, 2046, 16), // "setFirmwareHash4"
QT_MOC_LITERAL(107, 2063, 17), // "setFirmwareHash_4"
QT_MOC_LITERAL(108, 2081, 16), // "setFirmwareHash5"
QT_MOC_LITERAL(109, 2098, 17), // "setFirmwareHash_5"
QT_MOC_LITERAL(110, 2116, 16), // "setFirmwareHash6"
QT_MOC_LITERAL(111, 2133, 17), // "setFirmwareHash_6"
QT_MOC_LITERAL(112, 2151, 16), // "setFirmwareHash7"
QT_MOC_LITERAL(113, 2168, 17), // "setFirmwareHash_7"
QT_MOC_LITERAL(114, 2186, 14), // "setFirmwareTag"
QT_MOC_LITERAL(115, 2201, 15), // "setFirmwareTag0"
QT_MOC_LITERAL(116, 2217, 16), // "setFirmwareTag_0"
QT_MOC_LITERAL(117, 2234, 15), // "setFirmwareTag1"
QT_MOC_LITERAL(118, 2250, 16), // "setFirmwareTag_1"
QT_MOC_LITERAL(119, 2267, 15), // "setFirmwareTag2"
QT_MOC_LITERAL(120, 2283, 16), // "setFirmwareTag_2"
QT_MOC_LITERAL(121, 2300, 15), // "setFirmwareTag3"
QT_MOC_LITERAL(122, 2316, 16), // "setFirmwareTag_3"
QT_MOC_LITERAL(123, 2333, 15), // "setFirmwareTag4"
QT_MOC_LITERAL(124, 2349, 16), // "setFirmwareTag_4"
QT_MOC_LITERAL(125, 2366, 15), // "setFirmwareTag5"
QT_MOC_LITERAL(126, 2382, 16), // "setFirmwareTag_5"
QT_MOC_LITERAL(127, 2399, 15), // "setFirmwareTag6"
QT_MOC_LITERAL(128, 2415, 16), // "setFirmwareTag_6"
QT_MOC_LITERAL(129, 2432, 15), // "setFirmwareTag7"
QT_MOC_LITERAL(130, 2448, 16), // "setFirmwareTag_7"
QT_MOC_LITERAL(131, 2465, 15), // "setFirmwareTag8"
QT_MOC_LITERAL(132, 2481, 16), // "setFirmwareTag_8"
QT_MOC_LITERAL(133, 2498, 15), // "setFirmwareTag9"
QT_MOC_LITERAL(134, 2514, 16), // "setFirmwareTag_9"
QT_MOC_LITERAL(135, 2531, 16), // "setFirmwareTag10"
QT_MOC_LITERAL(136, 2548, 17), // "setFirmwareTag_10"
QT_MOC_LITERAL(137, 2566, 16), // "setFirmwareTag11"
QT_MOC_LITERAL(138, 2583, 17), // "setFirmwareTag_11"
QT_MOC_LITERAL(139, 2601, 16), // "setFirmwareTag12"
QT_MOC_LITERAL(140, 2618, 17), // "setFirmwareTag_12"
QT_MOC_LITERAL(141, 2636, 16), // "setFirmwareTag13"
QT_MOC_LITERAL(142, 2653, 17), // "setFirmwareTag_13"
QT_MOC_LITERAL(143, 2671, 16), // "setFirmwareTag14"
QT_MOC_LITERAL(144, 2688, 17), // "setFirmwareTag_14"
QT_MOC_LITERAL(145, 2706, 16), // "setFirmwareTag15"
QT_MOC_LITERAL(146, 2723, 17), // "setFirmwareTag_15"
QT_MOC_LITERAL(147, 2741, 16), // "setFirmwareTag16"
QT_MOC_LITERAL(148, 2758, 17), // "setFirmwareTag_16"
QT_MOC_LITERAL(149, 2776, 16), // "setFirmwareTag17"
QT_MOC_LITERAL(150, 2793, 17), // "setFirmwareTag_17"
QT_MOC_LITERAL(151, 2811, 16), // "setFirmwareTag18"
QT_MOC_LITERAL(152, 2828, 17), // "setFirmwareTag_18"
QT_MOC_LITERAL(153, 2846, 16), // "setFirmwareTag19"
QT_MOC_LITERAL(154, 2863, 17), // "setFirmwareTag_19"
QT_MOC_LITERAL(155, 2881, 16), // "setFirmwareTag20"
QT_MOC_LITERAL(156, 2898, 17), // "setFirmwareTag_20"
QT_MOC_LITERAL(157, 2916, 16), // "setFirmwareTag21"
QT_MOC_LITERAL(158, 2933, 17), // "setFirmwareTag_21"
QT_MOC_LITERAL(159, 2951, 16), // "setFirmwareTag22"
QT_MOC_LITERAL(160, 2968, 17), // "setFirmwareTag_22"
QT_MOC_LITERAL(161, 2986, 16), // "setFirmwareTag23"
QT_MOC_LITERAL(162, 3003, 17), // "setFirmwareTag_23"
QT_MOC_LITERAL(163, 3021, 16), // "setFirmwareTag24"
QT_MOC_LITERAL(164, 3038, 17), // "setFirmwareTag_24"
QT_MOC_LITERAL(165, 3056, 16), // "setFirmwareTag25"
QT_MOC_LITERAL(166, 3073, 17), // "setFirmwareTag_25"
QT_MOC_LITERAL(167, 3091, 17), // "emitNotifications"
QT_MOC_LITERAL(168, 3109, 13), // "getFlightTime"
QT_MOC_LITERAL(169, 3123, 10), // "getOptions"
QT_MOC_LITERAL(170, 3134, 9), // "getStatus"
QT_MOC_LITERAL(171, 3144, 9), // "boardType"
QT_MOC_LITERAL(172, 3154, 12), // "getBoardType"
QT_MOC_LITERAL(173, 3167, 14), // "getBoardType_0"
QT_MOC_LITERAL(174, 3182, 14), // "getBoardType_1"
QT_MOC_LITERAL(175, 3197, 12), // "firmwareHash"
QT_MOC_LITERAL(176, 3210, 15), // "getFirmwareHash"
QT_MOC_LITERAL(177, 3226, 17), // "getFirmwareHash_0"
QT_MOC_LITERAL(178, 3244, 17), // "getFirmwareHash_1"
QT_MOC_LITERAL(179, 3262, 17), // "getFirmwareHash_2"
QT_MOC_LITERAL(180, 3280, 17), // "getFirmwareHash_3"
QT_MOC_LITERAL(181, 3298, 17), // "getFirmwareHash_4"
QT_MOC_LITERAL(182, 3316, 17), // "getFirmwareHash_5"
QT_MOC_LITERAL(183, 3334, 17), // "getFirmwareHash_6"
QT_MOC_LITERAL(184, 3352, 17), // "getFirmwareHash_7"
QT_MOC_LITERAL(185, 3370, 11), // "firmwareTag"
QT_MOC_LITERAL(186, 3382, 14), // "getFirmwareTag"
QT_MOC_LITERAL(187, 3397, 16), // "getFirmwareTag_0"
QT_MOC_LITERAL(188, 3414, 16), // "getFirmwareTag_1"
QT_MOC_LITERAL(189, 3431, 16), // "getFirmwareTag_2"
QT_MOC_LITERAL(190, 3448, 16), // "getFirmwareTag_3"
QT_MOC_LITERAL(191, 3465, 16), // "getFirmwareTag_4"
QT_MOC_LITERAL(192, 3482, 16), // "getFirmwareTag_5"
QT_MOC_LITERAL(193, 3499, 16), // "getFirmwareTag_6"
QT_MOC_LITERAL(194, 3516, 16), // "getFirmwareTag_7"
QT_MOC_LITERAL(195, 3533, 16), // "getFirmwareTag_8"
QT_MOC_LITERAL(196, 3550, 16), // "getFirmwareTag_9"
QT_MOC_LITERAL(197, 3567, 17), // "getFirmwareTag_10"
QT_MOC_LITERAL(198, 3585, 17), // "getFirmwareTag_11"
QT_MOC_LITERAL(199, 3603, 17), // "getFirmwareTag_12"
QT_MOC_LITERAL(200, 3621, 17), // "getFirmwareTag_13"
QT_MOC_LITERAL(201, 3639, 17), // "getFirmwareTag_14"
QT_MOC_LITERAL(202, 3657, 17), // "getFirmwareTag_15"
QT_MOC_LITERAL(203, 3675, 17), // "getFirmwareTag_16"
QT_MOC_LITERAL(204, 3693, 17), // "getFirmwareTag_17"
QT_MOC_LITERAL(205, 3711, 17), // "getFirmwareTag_18"
QT_MOC_LITERAL(206, 3729, 17), // "getFirmwareTag_19"
QT_MOC_LITERAL(207, 3747, 17), // "getFirmwareTag_20"
QT_MOC_LITERAL(208, 3765, 17), // "getFirmwareTag_21"
QT_MOC_LITERAL(209, 3783, 17), // "getFirmwareTag_22"
QT_MOC_LITERAL(210, 3801, 17), // "getFirmwareTag_23"
QT_MOC_LITERAL(211, 3819, 17), // "getFirmwareTag_24"
QT_MOC_LITERAL(212, 3837, 17), // "getFirmwareTag_25"
QT_MOC_LITERAL(213, 3855, 10), // "flightTime"
QT_MOC_LITERAL(214, 3866, 7), // "options"
QT_MOC_LITERAL(215, 3874, 6), // "status"
QT_MOC_LITERAL(216, 3881, 10), // "boardType0"
QT_MOC_LITERAL(217, 3892, 10), // "boardType1"
QT_MOC_LITERAL(218, 3903, 13), // "firmwareHash0"
QT_MOC_LITERAL(219, 3917, 13), // "firmwareHash1"
QT_MOC_LITERAL(220, 3931, 13), // "firmwareHash2"
QT_MOC_LITERAL(221, 3945, 13), // "firmwareHash3"
QT_MOC_LITERAL(222, 3959, 13), // "firmwareHash4"
QT_MOC_LITERAL(223, 3973, 13), // "firmwareHash5"
QT_MOC_LITERAL(224, 3987, 13), // "firmwareHash6"
QT_MOC_LITERAL(225, 4001, 13), // "firmwareHash7"
QT_MOC_LITERAL(226, 4015, 12), // "firmwareTag0"
QT_MOC_LITERAL(227, 4028, 12), // "firmwareTag1"
QT_MOC_LITERAL(228, 4041, 12), // "firmwareTag2"
QT_MOC_LITERAL(229, 4054, 12), // "firmwareTag3"
QT_MOC_LITERAL(230, 4067, 12), // "firmwareTag4"
QT_MOC_LITERAL(231, 4080, 12), // "firmwareTag5"
QT_MOC_LITERAL(232, 4093, 12), // "firmwareTag6"
QT_MOC_LITERAL(233, 4106, 12), // "firmwareTag7"
QT_MOC_LITERAL(234, 4119, 12), // "firmwareTag8"
QT_MOC_LITERAL(235, 4132, 12), // "firmwareTag9"
QT_MOC_LITERAL(236, 4145, 13), // "firmwareTag10"
QT_MOC_LITERAL(237, 4159, 13), // "firmwareTag11"
QT_MOC_LITERAL(238, 4173, 13), // "firmwareTag12"
QT_MOC_LITERAL(239, 4187, 13), // "firmwareTag13"
QT_MOC_LITERAL(240, 4201, 13), // "firmwareTag14"
QT_MOC_LITERAL(241, 4215, 13), // "firmwareTag15"
QT_MOC_LITERAL(242, 4229, 13), // "firmwareTag16"
QT_MOC_LITERAL(243, 4243, 13), // "firmwareTag17"
QT_MOC_LITERAL(244, 4257, 13), // "firmwareTag18"
QT_MOC_LITERAL(245, 4271, 13), // "firmwareTag19"
QT_MOC_LITERAL(246, 4285, 13), // "firmwareTag20"
QT_MOC_LITERAL(247, 4299, 13), // "firmwareTag21"
QT_MOC_LITERAL(248, 4313, 13), // "firmwareTag22"
QT_MOC_LITERAL(249, 4327, 13), // "firmwareTag23"
QT_MOC_LITERAL(250, 4341, 13), // "firmwareTag24"
QT_MOC_LITERAL(251, 4355, 13), // "firmwareTag25"
QT_MOC_LITERAL(252, 4369, 10), // "FlightTime"
QT_MOC_LITERAL(253, 4380, 7), // "Options"
QT_MOC_LITERAL(254, 4388, 6), // "Status"
QT_MOC_LITERAL(255, 4395, 11), // "BoardType_0"
QT_MOC_LITERAL(256, 4407, 11), // "BoardType_1"
QT_MOC_LITERAL(257, 4419, 14), // "FirmwareHash_0"
QT_MOC_LITERAL(258, 4434, 14), // "FirmwareHash_1"
QT_MOC_LITERAL(259, 4449, 14), // "FirmwareHash_2"
QT_MOC_LITERAL(260, 4464, 14), // "FirmwareHash_3"
QT_MOC_LITERAL(261, 4479, 14), // "FirmwareHash_4"
QT_MOC_LITERAL(262, 4494, 14), // "FirmwareHash_5"
QT_MOC_LITERAL(263, 4509, 14), // "FirmwareHash_6"
QT_MOC_LITERAL(264, 4524, 14), // "FirmwareHash_7"
QT_MOC_LITERAL(265, 4539, 13), // "FirmwareTag_0"
QT_MOC_LITERAL(266, 4553, 13), // "FirmwareTag_1"
QT_MOC_LITERAL(267, 4567, 13), // "FirmwareTag_2"
QT_MOC_LITERAL(268, 4581, 13), // "FirmwareTag_3"
QT_MOC_LITERAL(269, 4595, 13), // "FirmwareTag_4"
QT_MOC_LITERAL(270, 4609, 13), // "FirmwareTag_5"
QT_MOC_LITERAL(271, 4623, 13), // "FirmwareTag_6"
QT_MOC_LITERAL(272, 4637, 13), // "FirmwareTag_7"
QT_MOC_LITERAL(273, 4651, 13), // "FirmwareTag_8"
QT_MOC_LITERAL(274, 4665, 13), // "FirmwareTag_9"
QT_MOC_LITERAL(275, 4679, 14), // "FirmwareTag_10"
QT_MOC_LITERAL(276, 4694, 14), // "FirmwareTag_11"
QT_MOC_LITERAL(277, 4709, 14), // "FirmwareTag_12"
QT_MOC_LITERAL(278, 4724, 14), // "FirmwareTag_13"
QT_MOC_LITERAL(279, 4739, 14), // "FirmwareTag_14"
QT_MOC_LITERAL(280, 4754, 14), // "FirmwareTag_15"
QT_MOC_LITERAL(281, 4769, 14), // "FirmwareTag_16"
QT_MOC_LITERAL(282, 4784, 14), // "FirmwareTag_17"
QT_MOC_LITERAL(283, 4799, 14), // "FirmwareTag_18"
QT_MOC_LITERAL(284, 4814, 14), // "FirmwareTag_19"
QT_MOC_LITERAL(285, 4829, 14), // "FirmwareTag_20"
QT_MOC_LITERAL(286, 4844, 14), // "FirmwareTag_21"
QT_MOC_LITERAL(287, 4859, 14), // "FirmwareTag_22"
QT_MOC_LITERAL(288, 4874, 14), // "FirmwareTag_23"
QT_MOC_LITERAL(289, 4889, 14), // "FirmwareTag_24"
QT_MOC_LITERAL(290, 4904, 14) // "FirmwareTag_25"

    },
    "GPSExtendedStatus\0flightTimeChanged\0"
    "\0value\0FlightTimeChanged\0optionsChanged\0"
    "OptionsChanged\0statusChanged\0"
    "GPSExtendedStatus_Status::Enum\0"
    "StatusChanged\0boardTypeChanged\0index\0"
    "BoardTypeChanged\0boardType0Changed\0"
    "BoardType_0Changed\0boardType1Changed\0"
    "BoardType_1Changed\0firmwareHashChanged\0"
    "FirmwareHashChanged\0firmwareHash0Changed\0"
    "FirmwareHash_0Changed\0firmwareHash1Changed\0"
    "FirmwareHash_1Changed\0firmwareHash2Changed\0"
    "FirmwareHash_2Changed\0firmwareHash3Changed\0"
    "FirmwareHash_3Changed\0firmwareHash4Changed\0"
    "FirmwareHash_4Changed\0firmwareHash5Changed\0"
    "FirmwareHash_5Changed\0firmwareHash6Changed\0"
    "FirmwareHash_6Changed\0firmwareHash7Changed\0"
    "FirmwareHash_7Changed\0firmwareTagChanged\0"
    "FirmwareTagChanged\0firmwareTag0Changed\0"
    "FirmwareTag_0Changed\0firmwareTag1Changed\0"
    "FirmwareTag_1Changed\0firmwareTag2Changed\0"
    "FirmwareTag_2Changed\0firmwareTag3Changed\0"
    "FirmwareTag_3Changed\0firmwareTag4Changed\0"
    "FirmwareTag_4Changed\0firmwareTag5Changed\0"
    "FirmwareTag_5Changed\0firmwareTag6Changed\0"
    "FirmwareTag_6Changed\0firmwareTag7Changed\0"
    "FirmwareTag_7Changed\0firmwareTag8Changed\0"
    "FirmwareTag_8Changed\0firmwareTag9Changed\0"
    "FirmwareTag_9Changed\0firmwareTag10Changed\0"
    "FirmwareTag_10Changed\0firmwareTag11Changed\0"
    "FirmwareTag_11Changed\0firmwareTag12Changed\0"
    "FirmwareTag_12Changed\0firmwareTag13Changed\0"
    "FirmwareTag_13Changed\0firmwareTag14Changed\0"
    "FirmwareTag_14Changed\0firmwareTag15Changed\0"
    "FirmwareTag_15Changed\0firmwareTag16Changed\0"
    "FirmwareTag_16Changed\0firmwareTag17Changed\0"
    "FirmwareTag_17Changed\0firmwareTag18Changed\0"
    "FirmwareTag_18Changed\0firmwareTag19Changed\0"
    "FirmwareTag_19Changed\0firmwareTag20Changed\0"
    "FirmwareTag_20Changed\0firmwareTag21Changed\0"
    "FirmwareTag_21Changed\0firmwareTag22Changed\0"
    "FirmwareTag_22Changed\0firmwareTag23Changed\0"
    "FirmwareTag_23Changed\0firmwareTag24Changed\0"
    "FirmwareTag_24Changed\0firmwareTag25Changed\0"
    "FirmwareTag_25Changed\0setFlightTime\0"
    "setOptions\0setStatus\0setBoardType\0"
    "setBoardType0\0setBoardType_0\0setBoardType1\0"
    "setBoardType_1\0setFirmwareHash\0"
    "setFirmwareHash0\0setFirmwareHash_0\0"
    "setFirmwareHash1\0setFirmwareHash_1\0"
    "setFirmwareHash2\0setFirmwareHash_2\0"
    "setFirmwareHash3\0setFirmwareHash_3\0"
    "setFirmwareHash4\0setFirmwareHash_4\0"
    "setFirmwareHash5\0setFirmwareHash_5\0"
    "setFirmwareHash6\0setFirmwareHash_6\0"
    "setFirmwareHash7\0setFirmwareHash_7\0"
    "setFirmwareTag\0setFirmwareTag0\0"
    "setFirmwareTag_0\0setFirmwareTag1\0"
    "setFirmwareTag_1\0setFirmwareTag2\0"
    "setFirmwareTag_2\0setFirmwareTag3\0"
    "setFirmwareTag_3\0setFirmwareTag4\0"
    "setFirmwareTag_4\0setFirmwareTag5\0"
    "setFirmwareTag_5\0setFirmwareTag6\0"
    "setFirmwareTag_6\0setFirmwareTag7\0"
    "setFirmwareTag_7\0setFirmwareTag8\0"
    "setFirmwareTag_8\0setFirmwareTag9\0"
    "setFirmwareTag_9\0setFirmwareTag10\0"
    "setFirmwareTag_10\0setFirmwareTag11\0"
    "setFirmwareTag_11\0setFirmwareTag12\0"
    "setFirmwareTag_12\0setFirmwareTag13\0"
    "setFirmwareTag_13\0setFirmwareTag14\0"
    "setFirmwareTag_14\0setFirmwareTag15\0"
    "setFirmwareTag_15\0setFirmwareTag16\0"
    "setFirmwareTag_16\0setFirmwareTag17\0"
    "setFirmwareTag_17\0setFirmwareTag18\0"
    "setFirmwareTag_18\0setFirmwareTag19\0"
    "setFirmwareTag_19\0setFirmwareTag20\0"
    "setFirmwareTag_20\0setFirmwareTag21\0"
    "setFirmwareTag_21\0setFirmwareTag22\0"
    "setFirmwareTag_22\0setFirmwareTag23\0"
    "setFirmwareTag_23\0setFirmwareTag24\0"
    "setFirmwareTag_24\0setFirmwareTag25\0"
    "setFirmwareTag_25\0emitNotifications\0"
    "getFlightTime\0getOptions\0getStatus\0"
    "boardType\0getBoardType\0getBoardType_0\0"
    "getBoardType_1\0firmwareHash\0getFirmwareHash\0"
    "getFirmwareHash_0\0getFirmwareHash_1\0"
    "getFirmwareHash_2\0getFirmwareHash_3\0"
    "getFirmwareHash_4\0getFirmwareHash_5\0"
    "getFirmwareHash_6\0getFirmwareHash_7\0"
    "firmwareTag\0getFirmwareTag\0getFirmwareTag_0\0"
    "getFirmwareTag_1\0getFirmwareTag_2\0"
    "getFirmwareTag_3\0getFirmwareTag_4\0"
    "getFirmwareTag_5\0getFirmwareTag_6\0"
    "getFirmwareTag_7\0getFirmwareTag_8\0"
    "getFirmwareTag_9\0getFirmwareTag_10\0"
    "getFirmwareTag_11\0getFirmwareTag_12\0"
    "getFirmwareTag_13\0getFirmwareTag_14\0"
    "getFirmwareTag_15\0getFirmwareTag_16\0"
    "getFirmwareTag_17\0getFirmwareTag_18\0"
    "getFirmwareTag_19\0getFirmwareTag_20\0"
    "getFirmwareTag_21\0getFirmwareTag_22\0"
    "getFirmwareTag_23\0getFirmwareTag_24\0"
    "getFirmwareTag_25\0flightTime\0options\0"
    "status\0boardType0\0boardType1\0firmwareHash0\0"
    "firmwareHash1\0firmwareHash2\0firmwareHash3\0"
    "firmwareHash4\0firmwareHash5\0firmwareHash6\0"
    "firmwareHash7\0firmwareTag0\0firmwareTag1\0"
    "firmwareTag2\0firmwareTag3\0firmwareTag4\0"
    "firmwareTag5\0firmwareTag6\0firmwareTag7\0"
    "firmwareTag8\0firmwareTag9\0firmwareTag10\0"
    "firmwareTag11\0firmwareTag12\0firmwareTag13\0"
    "firmwareTag14\0firmwareTag15\0firmwareTag16\0"
    "firmwareTag17\0firmwareTag18\0firmwareTag19\0"
    "firmwareTag20\0firmwareTag21\0firmwareTag22\0"
    "firmwareTag23\0firmwareTag24\0firmwareTag25\0"
    "FlightTime\0Options\0Status\0BoardType_0\0"
    "BoardType_1\0FirmwareHash_0\0FirmwareHash_1\0"
    "FirmwareHash_2\0FirmwareHash_3\0"
    "FirmwareHash_4\0FirmwareHash_5\0"
    "FirmwareHash_6\0FirmwareHash_7\0"
    "FirmwareTag_0\0FirmwareTag_1\0FirmwareTag_2\0"
    "FirmwareTag_3\0FirmwareTag_4\0FirmwareTag_5\0"
    "FirmwareTag_6\0FirmwareTag_7\0FirmwareTag_8\0"
    "FirmwareTag_9\0FirmwareTag_10\0"
    "FirmwareTag_11\0FirmwareTag_12\0"
    "FirmwareTag_13\0FirmwareTag_14\0"
    "FirmwareTag_15\0FirmwareTag_16\0"
    "FirmwareTag_17\0FirmwareTag_18\0"
    "FirmwareTag_19\0FirmwareTag_20\0"
    "FirmwareTag_21\0FirmwareTag_22\0"
    "FirmwareTag_23\0FirmwareTag_24\0"
    "FirmwareTag_25"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSExtendedStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     212,   14, // methods
      78, 1654, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      84,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1, 1074,    2, 0x06 /* Public */,
       4,    1, 1077,    2, 0x06 /* Public */,
       5,    1, 1080,    2, 0x06 /* Public */,
       6,    1, 1083,    2, 0x06 /* Public */,
       7,    1, 1086,    2, 0x06 /* Public */,
       9,    1, 1089,    2, 0x06 /* Public */,
      10,    2, 1092,    2, 0x06 /* Public */,
      12,    2, 1097,    2, 0x06 /* Public */,
      13,    1, 1102,    2, 0x06 /* Public */,
      14,    1, 1105,    2, 0x06 /* Public */,
      15,    1, 1108,    2, 0x06 /* Public */,
      16,    1, 1111,    2, 0x06 /* Public */,
      17,    2, 1114,    2, 0x06 /* Public */,
      18,    2, 1119,    2, 0x06 /* Public */,
      19,    1, 1124,    2, 0x06 /* Public */,
      20,    1, 1127,    2, 0x06 /* Public */,
      21,    1, 1130,    2, 0x06 /* Public */,
      22,    1, 1133,    2, 0x06 /* Public */,
      23,    1, 1136,    2, 0x06 /* Public */,
      24,    1, 1139,    2, 0x06 /* Public */,
      25,    1, 1142,    2, 0x06 /* Public */,
      26,    1, 1145,    2, 0x06 /* Public */,
      27,    1, 1148,    2, 0x06 /* Public */,
      28,    1, 1151,    2, 0x06 /* Public */,
      29,    1, 1154,    2, 0x06 /* Public */,
      30,    1, 1157,    2, 0x06 /* Public */,
      31,    1, 1160,    2, 0x06 /* Public */,
      32,    1, 1163,    2, 0x06 /* Public */,
      33,    1, 1166,    2, 0x06 /* Public */,
      34,    1, 1169,    2, 0x06 /* Public */,
      35,    2, 1172,    2, 0x06 /* Public */,
      36,    2, 1177,    2, 0x06 /* Public */,
      37,    1, 1182,    2, 0x06 /* Public */,
      38,    1, 1185,    2, 0x06 /* Public */,
      39,    1, 1188,    2, 0x06 /* Public */,
      40,    1, 1191,    2, 0x06 /* Public */,
      41,    1, 1194,    2, 0x06 /* Public */,
      42,    1, 1197,    2, 0x06 /* Public */,
      43,    1, 1200,    2, 0x06 /* Public */,
      44,    1, 1203,    2, 0x06 /* Public */,
      45,    1, 1206,    2, 0x06 /* Public */,
      46,    1, 1209,    2, 0x06 /* Public */,
      47,    1, 1212,    2, 0x06 /* Public */,
      48,    1, 1215,    2, 0x06 /* Public */,
      49,    1, 1218,    2, 0x06 /* Public */,
      50,    1, 1221,    2, 0x06 /* Public */,
      51,    1, 1224,    2, 0x06 /* Public */,
      52,    1, 1227,    2, 0x06 /* Public */,
      53,    1, 1230,    2, 0x06 /* Public */,
      54,    1, 1233,    2, 0x06 /* Public */,
      55,    1, 1236,    2, 0x06 /* Public */,
      56,    1, 1239,    2, 0x06 /* Public */,
      57,    1, 1242,    2, 0x06 /* Public */,
      58,    1, 1245,    2, 0x06 /* Public */,
      59,    1, 1248,    2, 0x06 /* Public */,
      60,    1, 1251,    2, 0x06 /* Public */,
      61,    1, 1254,    2, 0x06 /* Public */,
      62,    1, 1257,    2, 0x06 /* Public */,
      63,    1, 1260,    2, 0x06 /* Public */,
      64,    1, 1263,    2, 0x06 /* Public */,
      65,    1, 1266,    2, 0x06 /* Public */,
      66,    1, 1269,    2, 0x06 /* Public */,
      67,    1, 1272,    2, 0x06 /* Public */,
      68,    1, 1275,    2, 0x06 /* Public */,
      69,    1, 1278,    2, 0x06 /* Public */,
      70,    1, 1281,    2, 0x06 /* Public */,
      71,    1, 1284,    2, 0x06 /* Public */,
      72,    1, 1287,    2, 0x06 /* Public */,
      73,    1, 1290,    2, 0x06 /* Public */,
      74,    1, 1293,    2, 0x06 /* Public */,
      75,    1, 1296,    2, 0x06 /* Public */,
      76,    1, 1299,    2, 0x06 /* Public */,
      77,    1, 1302,    2, 0x06 /* Public */,
      78,    1, 1305,    2, 0x06 /* Public */,
      79,    1, 1308,    2, 0x06 /* Public */,
      80,    1, 1311,    2, 0x06 /* Public */,
      81,    1, 1314,    2, 0x06 /* Public */,
      82,    1, 1317,    2, 0x06 /* Public */,
      83,    1, 1320,    2, 0x06 /* Public */,
      84,    1, 1323,    2, 0x06 /* Public */,
      85,    1, 1326,    2, 0x06 /* Public */,
      86,    1, 1329,    2, 0x06 /* Public */,
      87,    1, 1332,    2, 0x06 /* Public */,
      88,    1, 1335,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      89,    1, 1338,    2, 0x0a /* Public */,
      90,    1, 1341,    2, 0x0a /* Public */,
      91,    1, 1344,    2, 0x0a /* Public */,
      91,    1, 1347,    2, 0x0a /* Public */,
      92,    2, 1350,    2, 0x0a /* Public */,
      92,    2, 1355,    2, 0x0a /* Public */,
      93,    1, 1360,    2, 0x0a /* Public */,
      94,    1, 1363,    2, 0x0a /* Public */,
      95,    1, 1366,    2, 0x0a /* Public */,
      96,    1, 1369,    2, 0x0a /* Public */,
      97,    2, 1372,    2, 0x0a /* Public */,
      97,    2, 1377,    2, 0x0a /* Public */,
      98,    1, 1382,    2, 0x0a /* Public */,
      99,    1, 1385,    2, 0x0a /* Public */,
     100,    1, 1388,    2, 0x0a /* Public */,
     101,    1, 1391,    2, 0x0a /* Public */,
     102,    1, 1394,    2, 0x0a /* Public */,
     103,    1, 1397,    2, 0x0a /* Public */,
     104,    1, 1400,    2, 0x0a /* Public */,
     105,    1, 1403,    2, 0x0a /* Public */,
     106,    1, 1406,    2, 0x0a /* Public */,
     107,    1, 1409,    2, 0x0a /* Public */,
     108,    1, 1412,    2, 0x0a /* Public */,
     109,    1, 1415,    2, 0x0a /* Public */,
     110,    1, 1418,    2, 0x0a /* Public */,
     111,    1, 1421,    2, 0x0a /* Public */,
     112,    1, 1424,    2, 0x0a /* Public */,
     113,    1, 1427,    2, 0x0a /* Public */,
     114,    2, 1430,    2, 0x0a /* Public */,
     114,    2, 1435,    2, 0x0a /* Public */,
     115,    1, 1440,    2, 0x0a /* Public */,
     116,    1, 1443,    2, 0x0a /* Public */,
     117,    1, 1446,    2, 0x0a /* Public */,
     118,    1, 1449,    2, 0x0a /* Public */,
     119,    1, 1452,    2, 0x0a /* Public */,
     120,    1, 1455,    2, 0x0a /* Public */,
     121,    1, 1458,    2, 0x0a /* Public */,
     122,    1, 1461,    2, 0x0a /* Public */,
     123,    1, 1464,    2, 0x0a /* Public */,
     124,    1, 1467,    2, 0x0a /* Public */,
     125,    1, 1470,    2, 0x0a /* Public */,
     126,    1, 1473,    2, 0x0a /* Public */,
     127,    1, 1476,    2, 0x0a /* Public */,
     128,    1, 1479,    2, 0x0a /* Public */,
     129,    1, 1482,    2, 0x0a /* Public */,
     130,    1, 1485,    2, 0x0a /* Public */,
     131,    1, 1488,    2, 0x0a /* Public */,
     132,    1, 1491,    2, 0x0a /* Public */,
     133,    1, 1494,    2, 0x0a /* Public */,
     134,    1, 1497,    2, 0x0a /* Public */,
     135,    1, 1500,    2, 0x0a /* Public */,
     136,    1, 1503,    2, 0x0a /* Public */,
     137,    1, 1506,    2, 0x0a /* Public */,
     138,    1, 1509,    2, 0x0a /* Public */,
     139,    1, 1512,    2, 0x0a /* Public */,
     140,    1, 1515,    2, 0x0a /* Public */,
     141,    1, 1518,    2, 0x0a /* Public */,
     142,    1, 1521,    2, 0x0a /* Public */,
     143,    1, 1524,    2, 0x0a /* Public */,
     144,    1, 1527,    2, 0x0a /* Public */,
     145,    1, 1530,    2, 0x0a /* Public */,
     146,    1, 1533,    2, 0x0a /* Public */,
     147,    1, 1536,    2, 0x0a /* Public */,
     148,    1, 1539,    2, 0x0a /* Public */,
     149,    1, 1542,    2, 0x0a /* Public */,
     150,    1, 1545,    2, 0x0a /* Public */,
     151,    1, 1548,    2, 0x0a /* Public */,
     152,    1, 1551,    2, 0x0a /* Public */,
     153,    1, 1554,    2, 0x0a /* Public */,
     154,    1, 1557,    2, 0x0a /* Public */,
     155,    1, 1560,    2, 0x0a /* Public */,
     156,    1, 1563,    2, 0x0a /* Public */,
     157,    1, 1566,    2, 0x0a /* Public */,
     158,    1, 1569,    2, 0x0a /* Public */,
     159,    1, 1572,    2, 0x0a /* Public */,
     160,    1, 1575,    2, 0x0a /* Public */,
     161,    1, 1578,    2, 0x0a /* Public */,
     162,    1, 1581,    2, 0x0a /* Public */,
     163,    1, 1584,    2, 0x0a /* Public */,
     164,    1, 1587,    2, 0x0a /* Public */,
     165,    1, 1590,    2, 0x0a /* Public */,
     166,    1, 1593,    2, 0x0a /* Public */,
     167,    0, 1596,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     168,    0, 1597,    2, 0x02 /* Public */,
     169,    0, 1598,    2, 0x02 /* Public */,
     170,    0, 1599,    2, 0x02 /* Public */,
     171,    1, 1600,    2, 0x02 /* Public */,
     172,    1, 1603,    2, 0x02 /* Public */,
     173,    0, 1606,    2, 0x02 /* Public */,
     174,    0, 1607,    2, 0x02 /* Public */,
     175,    1, 1608,    2, 0x02 /* Public */,
     176,    1, 1611,    2, 0x02 /* Public */,
     177,    0, 1614,    2, 0x02 /* Public */,
     178,    0, 1615,    2, 0x02 /* Public */,
     179,    0, 1616,    2, 0x02 /* Public */,
     180,    0, 1617,    2, 0x02 /* Public */,
     181,    0, 1618,    2, 0x02 /* Public */,
     182,    0, 1619,    2, 0x02 /* Public */,
     183,    0, 1620,    2, 0x02 /* Public */,
     184,    0, 1621,    2, 0x02 /* Public */,
     185,    1, 1622,    2, 0x02 /* Public */,
     186,    1, 1625,    2, 0x02 /* Public */,
     187,    0, 1628,    2, 0x02 /* Public */,
     188,    0, 1629,    2, 0x02 /* Public */,
     189,    0, 1630,    2, 0x02 /* Public */,
     190,    0, 1631,    2, 0x02 /* Public */,
     191,    0, 1632,    2, 0x02 /* Public */,
     192,    0, 1633,    2, 0x02 /* Public */,
     193,    0, 1634,    2, 0x02 /* Public */,
     194,    0, 1635,    2, 0x02 /* Public */,
     195,    0, 1636,    2, 0x02 /* Public */,
     196,    0, 1637,    2, 0x02 /* Public */,
     197,    0, 1638,    2, 0x02 /* Public */,
     198,    0, 1639,    2, 0x02 /* Public */,
     199,    0, 1640,    2, 0x02 /* Public */,
     200,    0, 1641,    2, 0x02 /* Public */,
     201,    0, 1642,    2, 0x02 /* Public */,
     202,    0, 1643,    2, 0x02 /* Public */,
     203,    0, 1644,    2, 0x02 /* Public */,
     204,    0, 1645,    2, 0x02 /* Public */,
     205,    0, 1646,    2, 0x02 /* Public */,
     206,    0, 1647,    2, 0x02 /* Public */,
     207,    0, 1648,    2, 0x02 /* Public */,
     208,    0, 1649,    2, 0x02 /* Public */,
     209,    0, 1650,    2, 0x02 /* Public */,
     210,    0, 1651,    2, 0x02 /* Public */,
     211,    0, 1652,    2, 0x02 /* Public */,
     212,    0, 1653,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,   11,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   11,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,   11,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   11,    3,
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
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,   11,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   11,    3,
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
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,   11,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   11,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,   11,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   11,    3,
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
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,   11,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   11,    3,
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
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,   11,
    QMetaType::UChar, QMetaType::UInt,   11,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,   11,
    QMetaType::UChar, QMetaType::UInt,   11,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,   11,
    QMetaType::UChar, QMetaType::UInt,   11,
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
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
     213, QMetaType::UInt, 0x00495103,
     214, QMetaType::UShort, 0x00495103,
     215, 0x80000000 | 8, 0x0049510b,
     216, QMetaType::UShort, 0x00495103,
     217, QMetaType::UShort, 0x00495103,
     218, QMetaType::UShort, 0x00495103,
     219, QMetaType::UShort, 0x00495103,
     220, QMetaType::UShort, 0x00495103,
     221, QMetaType::UShort, 0x00495103,
     222, QMetaType::UShort, 0x00495103,
     223, QMetaType::UShort, 0x00495103,
     224, QMetaType::UShort, 0x00495103,
     225, QMetaType::UShort, 0x00495103,
     226, QMetaType::UShort, 0x00495103,
     227, QMetaType::UShort, 0x00495103,
     228, QMetaType::UShort, 0x00495103,
     229, QMetaType::UShort, 0x00495103,
     230, QMetaType::UShort, 0x00495103,
     231, QMetaType::UShort, 0x00495103,
     232, QMetaType::UShort, 0x00495103,
     233, QMetaType::UShort, 0x00495103,
     234, QMetaType::UShort, 0x00495103,
     235, QMetaType::UShort, 0x00495103,
     236, QMetaType::UShort, 0x00495103,
     237, QMetaType::UShort, 0x00495103,
     238, QMetaType::UShort, 0x00495103,
     239, QMetaType::UShort, 0x00495103,
     240, QMetaType::UShort, 0x00495103,
     241, QMetaType::UShort, 0x00495103,
     242, QMetaType::UShort, 0x00495103,
     243, QMetaType::UShort, 0x00495103,
     244, QMetaType::UShort, 0x00495103,
     245, QMetaType::UShort, 0x00495103,
     246, QMetaType::UShort, 0x00495103,
     247, QMetaType::UShort, 0x00495103,
     248, QMetaType::UShort, 0x00495103,
     249, QMetaType::UShort, 0x00495103,
     250, QMetaType::UShort, 0x00495103,
     251, QMetaType::UShort, 0x00495103,
     252, QMetaType::UInt, 0x00495103,
     253, QMetaType::UShort, 0x00495103,
     254, QMetaType::UChar, 0x00495103,
     255, QMetaType::UChar, 0x00495103,
     256, QMetaType::UChar, 0x00495103,
     257, QMetaType::UChar, 0x00495103,
     258, QMetaType::UChar, 0x00495103,
     259, QMetaType::UChar, 0x00495103,
     260, QMetaType::UChar, 0x00495103,
     261, QMetaType::UChar, 0x00495103,
     262, QMetaType::UChar, 0x00495103,
     263, QMetaType::UChar, 0x00495103,
     264, QMetaType::UChar, 0x00495103,
     265, QMetaType::UChar, 0x00495103,
     266, QMetaType::UChar, 0x00495103,
     267, QMetaType::UChar, 0x00495103,
     268, QMetaType::UChar, 0x00495103,
     269, QMetaType::UChar, 0x00495103,
     270, QMetaType::UChar, 0x00495103,
     271, QMetaType::UChar, 0x00495103,
     272, QMetaType::UChar, 0x00495103,
     273, QMetaType::UChar, 0x00495103,
     274, QMetaType::UChar, 0x00495103,
     275, QMetaType::UChar, 0x00495103,
     276, QMetaType::UChar, 0x00495103,
     277, QMetaType::UChar, 0x00495103,
     278, QMetaType::UChar, 0x00495103,
     279, QMetaType::UChar, 0x00495103,
     280, QMetaType::UChar, 0x00495103,
     281, QMetaType::UChar, 0x00495103,
     282, QMetaType::UChar, 0x00495103,
     283, QMetaType::UChar, 0x00495103,
     284, QMetaType::UChar, 0x00495103,
     285, QMetaType::UChar, 0x00495103,
     286, QMetaType::UChar, 0x00495103,
     287, QMetaType::UChar, 0x00495103,
     288, QMetaType::UChar, 0x00495103,
     289, QMetaType::UChar, 0x00495103,
     290, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
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
      74,
      76,
      78,
      80,
      82,
       1,
       3,
       5,
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
      75,
      77,
      79,
      81,
      83,

       0        // eod
};

void GPSExtendedStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPSExtendedStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flightTimeChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: _t->FlightTimeChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->optionsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 3: _t->OptionsChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 4: _t->statusChanged((*reinterpret_cast< const GPSExtendedStatus_Status::Enum(*)>(_a[1]))); break;
        case 5: _t->StatusChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->boardTypeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 7: _t->BoardTypeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 8: _t->boardType0Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 9: _t->BoardType_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->boardType1Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 11: _t->BoardType_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->firmwareHashChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 13: _t->FirmwareHashChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 14: _t->firmwareHash0Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 15: _t->FirmwareHash_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 16: _t->firmwareHash1Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 17: _t->FirmwareHash_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->firmwareHash2Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 19: _t->FirmwareHash_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->firmwareHash3Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 21: _t->FirmwareHash_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->firmwareHash4Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 23: _t->FirmwareHash_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->firmwareHash5Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 25: _t->FirmwareHash_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->firmwareHash6Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 27: _t->FirmwareHash_6Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->firmwareHash7Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 29: _t->FirmwareHash_7Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->firmwareTagChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 31: _t->FirmwareTagChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 32: _t->firmwareTag0Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 33: _t->FirmwareTag_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->firmwareTag1Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 35: _t->FirmwareTag_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->firmwareTag2Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 37: _t->FirmwareTag_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->firmwareTag3Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 39: _t->FirmwareTag_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->firmwareTag4Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 41: _t->FirmwareTag_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->firmwareTag5Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 43: _t->FirmwareTag_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->firmwareTag6Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 45: _t->FirmwareTag_6Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->firmwareTag7Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 47: _t->FirmwareTag_7Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 48: _t->firmwareTag8Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 49: _t->FirmwareTag_8Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 50: _t->firmwareTag9Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 51: _t->FirmwareTag_9Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->firmwareTag10Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 53: _t->FirmwareTag_10Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 54: _t->firmwareTag11Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 55: _t->FirmwareTag_11Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 56: _t->firmwareTag12Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 57: _t->FirmwareTag_12Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 58: _t->firmwareTag13Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 59: _t->FirmwareTag_13Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 60: _t->firmwareTag14Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 61: _t->FirmwareTag_14Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 62: _t->firmwareTag15Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 63: _t->FirmwareTag_15Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 64: _t->firmwareTag16Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 65: _t->FirmwareTag_16Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 66: _t->firmwareTag17Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 67: _t->FirmwareTag_17Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 68: _t->firmwareTag18Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 69: _t->FirmwareTag_18Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 70: _t->firmwareTag19Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 71: _t->FirmwareTag_19Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 72: _t->firmwareTag20Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 73: _t->FirmwareTag_20Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 74: _t->firmwareTag21Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 75: _t->FirmwareTag_21Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 76: _t->firmwareTag22Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 77: _t->FirmwareTag_22Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 78: _t->firmwareTag23Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 79: _t->FirmwareTag_23Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 80: _t->firmwareTag24Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 81: _t->FirmwareTag_24Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 82: _t->firmwareTag25Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 83: _t->FirmwareTag_25Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 84: _t->setFlightTime((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 85: _t->setOptions((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 86: _t->setStatus((*reinterpret_cast< const GPSExtendedStatus_Status::Enum(*)>(_a[1]))); break;
        case 87: _t->setStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 88: _t->setBoardType((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 89: _t->setBoardType((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 90: _t->setBoardType0((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 91: _t->setBoardType_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 92: _t->setBoardType1((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 93: _t->setBoardType_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 94: _t->setFirmwareHash((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 95: _t->setFirmwareHash((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 96: _t->setFirmwareHash0((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 97: _t->setFirmwareHash_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 98: _t->setFirmwareHash1((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 99: _t->setFirmwareHash_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 100: _t->setFirmwareHash2((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 101: _t->setFirmwareHash_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 102: _t->setFirmwareHash3((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 103: _t->setFirmwareHash_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->setFirmwareHash4((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 105: _t->setFirmwareHash_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 106: _t->setFirmwareHash5((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 107: _t->setFirmwareHash_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 108: _t->setFirmwareHash6((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 109: _t->setFirmwareHash_6((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 110: _t->setFirmwareHash7((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 111: _t->setFirmwareHash_7((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 112: _t->setFirmwareTag((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 113: _t->setFirmwareTag((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 114: _t->setFirmwareTag0((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 115: _t->setFirmwareTag_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 116: _t->setFirmwareTag1((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 117: _t->setFirmwareTag_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 118: _t->setFirmwareTag2((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 119: _t->setFirmwareTag_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 120: _t->setFirmwareTag3((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 121: _t->setFirmwareTag_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 122: _t->setFirmwareTag4((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 123: _t->setFirmwareTag_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 124: _t->setFirmwareTag5((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 125: _t->setFirmwareTag_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 126: _t->setFirmwareTag6((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 127: _t->setFirmwareTag_6((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 128: _t->setFirmwareTag7((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 129: _t->setFirmwareTag_7((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 130: _t->setFirmwareTag8((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 131: _t->setFirmwareTag_8((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 132: _t->setFirmwareTag9((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 133: _t->setFirmwareTag_9((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 134: _t->setFirmwareTag10((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 135: _t->setFirmwareTag_10((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 136: _t->setFirmwareTag11((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 137: _t->setFirmwareTag_11((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 138: _t->setFirmwareTag12((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 139: _t->setFirmwareTag_12((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 140: _t->setFirmwareTag13((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 141: _t->setFirmwareTag_13((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 142: _t->setFirmwareTag14((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 143: _t->setFirmwareTag_14((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 144: _t->setFirmwareTag15((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 145: _t->setFirmwareTag_15((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 146: _t->setFirmwareTag16((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 147: _t->setFirmwareTag_16((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 148: _t->setFirmwareTag17((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 149: _t->setFirmwareTag_17((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 150: _t->setFirmwareTag18((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 151: _t->setFirmwareTag_18((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 152: _t->setFirmwareTag19((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 153: _t->setFirmwareTag_19((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 154: _t->setFirmwareTag20((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 155: _t->setFirmwareTag_20((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 156: _t->setFirmwareTag21((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 157: _t->setFirmwareTag_21((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 158: _t->setFirmwareTag22((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 159: _t->setFirmwareTag_22((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 160: _t->setFirmwareTag23((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 161: _t->setFirmwareTag_23((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 162: _t->setFirmwareTag24((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 163: _t->setFirmwareTag_24((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 164: _t->setFirmwareTag25((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 165: _t->setFirmwareTag_25((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 166: _t->emitNotifications(); break;
        case 167: { quint32 _r = _t->getFlightTime();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 168: { quint16 _r = _t->getOptions();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 169: { quint8 _r = _t->getStatus();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 170: { quint16 _r = _t->boardType((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 171: { quint8 _r = _t->getBoardType((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 172: { quint8 _r = _t->getBoardType_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 173: { quint8 _r = _t->getBoardType_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 174: { quint16 _r = _t->firmwareHash((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 175: { quint8 _r = _t->getFirmwareHash((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 176: { quint8 _r = _t->getFirmwareHash_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 177: { quint8 _r = _t->getFirmwareHash_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 178: { quint8 _r = _t->getFirmwareHash_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 179: { quint8 _r = _t->getFirmwareHash_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 180: { quint8 _r = _t->getFirmwareHash_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 181: { quint8 _r = _t->getFirmwareHash_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 182: { quint8 _r = _t->getFirmwareHash_6();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 183: { quint8 _r = _t->getFirmwareHash_7();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 184: { quint16 _r = _t->firmwareTag((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 185: { quint8 _r = _t->getFirmwareTag((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 186: { quint8 _r = _t->getFirmwareTag_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 187: { quint8 _r = _t->getFirmwareTag_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 188: { quint8 _r = _t->getFirmwareTag_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 189: { quint8 _r = _t->getFirmwareTag_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 190: { quint8 _r = _t->getFirmwareTag_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 191: { quint8 _r = _t->getFirmwareTag_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 192: { quint8 _r = _t->getFirmwareTag_6();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 193: { quint8 _r = _t->getFirmwareTag_7();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 194: { quint8 _r = _t->getFirmwareTag_8();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 195: { quint8 _r = _t->getFirmwareTag_9();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 196: { quint8 _r = _t->getFirmwareTag_10();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 197: { quint8 _r = _t->getFirmwareTag_11();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 198: { quint8 _r = _t->getFirmwareTag_12();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 199: { quint8 _r = _t->getFirmwareTag_13();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 200: { quint8 _r = _t->getFirmwareTag_14();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 201: { quint8 _r = _t->getFirmwareTag_15();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 202: { quint8 _r = _t->getFirmwareTag_16();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 203: { quint8 _r = _t->getFirmwareTag_17();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 204: { quint8 _r = _t->getFirmwareTag_18();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 205: { quint8 _r = _t->getFirmwareTag_19();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 206: { quint8 _r = _t->getFirmwareTag_20();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 207: { quint8 _r = _t->getFirmwareTag_21();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 208: { quint8 _r = _t->getFirmwareTag_22();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 209: { quint8 _r = _t->getFirmwareTag_23();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 210: { quint8 _r = _t->getFirmwareTag_24();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 211: { quint8 _r = _t->getFirmwareTag_25();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GPSExtendedStatus::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::flightTimeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FlightTimeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::optionsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::OptionsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const GPSExtendedStatus_Status::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::statusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::StatusChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::boardTypeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::BoardTypeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::boardType0Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::BoardType_0Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::boardType1Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::BoardType_1Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareHashChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareHashChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareHash0Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareHash_0Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareHash1Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareHash_1Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareHash2Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareHash_2Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareHash3Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareHash_3Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareHash4Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareHash_4Changed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareHash5Changed)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareHash_5Changed)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareHash6Changed)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareHash_6Changed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareHash7Changed)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareHash_7Changed)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTagChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTagChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag0Changed)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_0Changed)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag1Changed)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_1Changed)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag2Changed)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_2Changed)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag3Changed)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_3Changed)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag4Changed)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_4Changed)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag5Changed)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_5Changed)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag6Changed)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_6Changed)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag7Changed)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_7Changed)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag8Changed)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_8Changed)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag9Changed)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_9Changed)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag10Changed)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_10Changed)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag11Changed)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_11Changed)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag12Changed)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_12Changed)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag13Changed)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_13Changed)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag14Changed)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_14Changed)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag15Changed)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_15Changed)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag16Changed)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_16Changed)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag17Changed)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_17Changed)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag18Changed)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_18Changed)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag19Changed)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_19Changed)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag20Changed)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_20Changed)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag21Changed)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_21Changed)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag22Changed)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_22Changed)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag23Changed)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_23Changed)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag24Changed)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_24Changed)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::firmwareTag25Changed)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (GPSExtendedStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSExtendedStatus::FirmwareTag_25Changed)) {
                *result = 83;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GPSExtendedStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->flightTime(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->options(); break;
        case 2: *reinterpret_cast< GPSExtendedStatus_Status::Enum*>(_v) = _t->status(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->boardType0(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->boardType1(); break;
        case 5: *reinterpret_cast< quint16*>(_v) = _t->firmwareHash0(); break;
        case 6: *reinterpret_cast< quint16*>(_v) = _t->firmwareHash1(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->firmwareHash2(); break;
        case 8: *reinterpret_cast< quint16*>(_v) = _t->firmwareHash3(); break;
        case 9: *reinterpret_cast< quint16*>(_v) = _t->firmwareHash4(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->firmwareHash5(); break;
        case 11: *reinterpret_cast< quint16*>(_v) = _t->firmwareHash6(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->firmwareHash7(); break;
        case 13: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag0(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag1(); break;
        case 15: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag2(); break;
        case 16: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag3(); break;
        case 17: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag4(); break;
        case 18: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag5(); break;
        case 19: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag6(); break;
        case 20: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag7(); break;
        case 21: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag8(); break;
        case 22: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag9(); break;
        case 23: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag10(); break;
        case 24: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag11(); break;
        case 25: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag12(); break;
        case 26: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag13(); break;
        case 27: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag14(); break;
        case 28: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag15(); break;
        case 29: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag16(); break;
        case 30: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag17(); break;
        case 31: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag18(); break;
        case 32: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag19(); break;
        case 33: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag20(); break;
        case 34: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag21(); break;
        case 35: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag22(); break;
        case 36: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag23(); break;
        case 37: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag24(); break;
        case 38: *reinterpret_cast< quint16*>(_v) = _t->firmwareTag25(); break;
        case 39: *reinterpret_cast< quint32*>(_v) = _t->getFlightTime(); break;
        case 40: *reinterpret_cast< quint16*>(_v) = _t->getOptions(); break;
        case 41: *reinterpret_cast< quint8*>(_v) = _t->getStatus(); break;
        case 42: *reinterpret_cast< quint8*>(_v) = _t->getBoardType_0(); break;
        case 43: *reinterpret_cast< quint8*>(_v) = _t->getBoardType_1(); break;
        case 44: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareHash_0(); break;
        case 45: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareHash_1(); break;
        case 46: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareHash_2(); break;
        case 47: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareHash_3(); break;
        case 48: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareHash_4(); break;
        case 49: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareHash_5(); break;
        case 50: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareHash_6(); break;
        case 51: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareHash_7(); break;
        case 52: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_0(); break;
        case 53: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_1(); break;
        case 54: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_2(); break;
        case 55: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_3(); break;
        case 56: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_4(); break;
        case 57: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_5(); break;
        case 58: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_6(); break;
        case 59: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_7(); break;
        case 60: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_8(); break;
        case 61: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_9(); break;
        case 62: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_10(); break;
        case 63: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_11(); break;
        case 64: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_12(); break;
        case 65: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_13(); break;
        case 66: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_14(); break;
        case 67: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_15(); break;
        case 68: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_16(); break;
        case 69: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_17(); break;
        case 70: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_18(); break;
        case 71: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_19(); break;
        case 72: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_20(); break;
        case 73: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_21(); break;
        case 74: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_22(); break;
        case 75: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_23(); break;
        case 76: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_24(); break;
        case 77: *reinterpret_cast< quint8*>(_v) = _t->getFirmwareTag_25(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GPSExtendedStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlightTime(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setOptions(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setStatus(*reinterpret_cast< GPSExtendedStatus_Status::Enum*>(_v)); break;
        case 3: _t->setBoardType0(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setBoardType1(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setFirmwareHash0(*reinterpret_cast< quint16*>(_v)); break;
        case 6: _t->setFirmwareHash1(*reinterpret_cast< quint16*>(_v)); break;
        case 7: _t->setFirmwareHash2(*reinterpret_cast< quint16*>(_v)); break;
        case 8: _t->setFirmwareHash3(*reinterpret_cast< quint16*>(_v)); break;
        case 9: _t->setFirmwareHash4(*reinterpret_cast< quint16*>(_v)); break;
        case 10: _t->setFirmwareHash5(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setFirmwareHash6(*reinterpret_cast< quint16*>(_v)); break;
        case 12: _t->setFirmwareHash7(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setFirmwareTag0(*reinterpret_cast< quint16*>(_v)); break;
        case 14: _t->setFirmwareTag1(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setFirmwareTag2(*reinterpret_cast< quint16*>(_v)); break;
        case 16: _t->setFirmwareTag3(*reinterpret_cast< quint16*>(_v)); break;
        case 17: _t->setFirmwareTag4(*reinterpret_cast< quint16*>(_v)); break;
        case 18: _t->setFirmwareTag5(*reinterpret_cast< quint16*>(_v)); break;
        case 19: _t->setFirmwareTag6(*reinterpret_cast< quint16*>(_v)); break;
        case 20: _t->setFirmwareTag7(*reinterpret_cast< quint16*>(_v)); break;
        case 21: _t->setFirmwareTag8(*reinterpret_cast< quint16*>(_v)); break;
        case 22: _t->setFirmwareTag9(*reinterpret_cast< quint16*>(_v)); break;
        case 23: _t->setFirmwareTag10(*reinterpret_cast< quint16*>(_v)); break;
        case 24: _t->setFirmwareTag11(*reinterpret_cast< quint16*>(_v)); break;
        case 25: _t->setFirmwareTag12(*reinterpret_cast< quint16*>(_v)); break;
        case 26: _t->setFirmwareTag13(*reinterpret_cast< quint16*>(_v)); break;
        case 27: _t->setFirmwareTag14(*reinterpret_cast< quint16*>(_v)); break;
        case 28: _t->setFirmwareTag15(*reinterpret_cast< quint16*>(_v)); break;
        case 29: _t->setFirmwareTag16(*reinterpret_cast< quint16*>(_v)); break;
        case 30: _t->setFirmwareTag17(*reinterpret_cast< quint16*>(_v)); break;
        case 31: _t->setFirmwareTag18(*reinterpret_cast< quint16*>(_v)); break;
        case 32: _t->setFirmwareTag19(*reinterpret_cast< quint16*>(_v)); break;
        case 33: _t->setFirmwareTag20(*reinterpret_cast< quint16*>(_v)); break;
        case 34: _t->setFirmwareTag21(*reinterpret_cast< quint16*>(_v)); break;
        case 35: _t->setFirmwareTag22(*reinterpret_cast< quint16*>(_v)); break;
        case 36: _t->setFirmwareTag23(*reinterpret_cast< quint16*>(_v)); break;
        case 37: _t->setFirmwareTag24(*reinterpret_cast< quint16*>(_v)); break;
        case 38: _t->setFirmwareTag25(*reinterpret_cast< quint16*>(_v)); break;
        case 39: _t->setFlightTime(*reinterpret_cast< quint32*>(_v)); break;
        case 40: _t->setOptions(*reinterpret_cast< quint16*>(_v)); break;
        case 41: _t->setStatus(*reinterpret_cast< quint8*>(_v)); break;
        case 42: _t->setBoardType_0(*reinterpret_cast< quint8*>(_v)); break;
        case 43: _t->setBoardType_1(*reinterpret_cast< quint8*>(_v)); break;
        case 44: _t->setFirmwareHash_0(*reinterpret_cast< quint8*>(_v)); break;
        case 45: _t->setFirmwareHash_1(*reinterpret_cast< quint8*>(_v)); break;
        case 46: _t->setFirmwareHash_2(*reinterpret_cast< quint8*>(_v)); break;
        case 47: _t->setFirmwareHash_3(*reinterpret_cast< quint8*>(_v)); break;
        case 48: _t->setFirmwareHash_4(*reinterpret_cast< quint8*>(_v)); break;
        case 49: _t->setFirmwareHash_5(*reinterpret_cast< quint8*>(_v)); break;
        case 50: _t->setFirmwareHash_6(*reinterpret_cast< quint8*>(_v)); break;
        case 51: _t->setFirmwareHash_7(*reinterpret_cast< quint8*>(_v)); break;
        case 52: _t->setFirmwareTag_0(*reinterpret_cast< quint8*>(_v)); break;
        case 53: _t->setFirmwareTag_1(*reinterpret_cast< quint8*>(_v)); break;
        case 54: _t->setFirmwareTag_2(*reinterpret_cast< quint8*>(_v)); break;
        case 55: _t->setFirmwareTag_3(*reinterpret_cast< quint8*>(_v)); break;
        case 56: _t->setFirmwareTag_4(*reinterpret_cast< quint8*>(_v)); break;
        case 57: _t->setFirmwareTag_5(*reinterpret_cast< quint8*>(_v)); break;
        case 58: _t->setFirmwareTag_6(*reinterpret_cast< quint8*>(_v)); break;
        case 59: _t->setFirmwareTag_7(*reinterpret_cast< quint8*>(_v)); break;
        case 60: _t->setFirmwareTag_8(*reinterpret_cast< quint8*>(_v)); break;
        case 61: _t->setFirmwareTag_9(*reinterpret_cast< quint8*>(_v)); break;
        case 62: _t->setFirmwareTag_10(*reinterpret_cast< quint8*>(_v)); break;
        case 63: _t->setFirmwareTag_11(*reinterpret_cast< quint8*>(_v)); break;
        case 64: _t->setFirmwareTag_12(*reinterpret_cast< quint8*>(_v)); break;
        case 65: _t->setFirmwareTag_13(*reinterpret_cast< quint8*>(_v)); break;
        case 66: _t->setFirmwareTag_14(*reinterpret_cast< quint8*>(_v)); break;
        case 67: _t->setFirmwareTag_15(*reinterpret_cast< quint8*>(_v)); break;
        case 68: _t->setFirmwareTag_16(*reinterpret_cast< quint8*>(_v)); break;
        case 69: _t->setFirmwareTag_17(*reinterpret_cast< quint8*>(_v)); break;
        case 70: _t->setFirmwareTag_18(*reinterpret_cast< quint8*>(_v)); break;
        case 71: _t->setFirmwareTag_19(*reinterpret_cast< quint8*>(_v)); break;
        case 72: _t->setFirmwareTag_20(*reinterpret_cast< quint8*>(_v)); break;
        case 73: _t->setFirmwareTag_21(*reinterpret_cast< quint8*>(_v)); break;
        case 74: _t->setFirmwareTag_22(*reinterpret_cast< quint8*>(_v)); break;
        case 75: _t->setFirmwareTag_23(*reinterpret_cast< quint8*>(_v)); break;
        case 76: _t->setFirmwareTag_24(*reinterpret_cast< quint8*>(_v)); break;
        case 77: _t->setFirmwareTag_25(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_GPSExtendedStatus[] = {
        &GPSExtendedStatus_Status::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject GPSExtendedStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_GPSExtendedStatus.data,
    qt_meta_data_GPSExtendedStatus,
    qt_static_metacall,
    qt_meta_extradata_GPSExtendedStatus,
    nullptr
} };


const QMetaObject *GPSExtendedStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSExtendedStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSExtendedStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int GPSExtendedStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 212)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 212;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 212)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 212;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 78;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 78;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 78;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 78;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 78;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 78;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GPSExtendedStatus::flightTimeChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GPSExtendedStatus::FlightTimeChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GPSExtendedStatus::optionsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GPSExtendedStatus::OptionsChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GPSExtendedStatus::statusChanged(const GPSExtendedStatus_Status::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GPSExtendedStatus::StatusChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GPSExtendedStatus::boardTypeChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GPSExtendedStatus::BoardTypeChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GPSExtendedStatus::boardType0Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GPSExtendedStatus::BoardType_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GPSExtendedStatus::boardType1Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GPSExtendedStatus::BoardType_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GPSExtendedStatus::firmwareHashChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GPSExtendedStatus::FirmwareHashChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GPSExtendedStatus::firmwareHash0Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GPSExtendedStatus::FirmwareHash_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GPSExtendedStatus::firmwareHash1Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GPSExtendedStatus::FirmwareHash_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void GPSExtendedStatus::firmwareHash2Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void GPSExtendedStatus::FirmwareHash_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void GPSExtendedStatus::firmwareHash3Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void GPSExtendedStatus::FirmwareHash_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void GPSExtendedStatus::firmwareHash4Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void GPSExtendedStatus::FirmwareHash_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void GPSExtendedStatus::firmwareHash5Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void GPSExtendedStatus::FirmwareHash_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void GPSExtendedStatus::firmwareHash6Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void GPSExtendedStatus::FirmwareHash_6Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void GPSExtendedStatus::firmwareHash7Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void GPSExtendedStatus::FirmwareHash_7Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void GPSExtendedStatus::firmwareTagChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void GPSExtendedStatus::FirmwareTagChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void GPSExtendedStatus::firmwareTag0Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void GPSExtendedStatus::FirmwareTag_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void GPSExtendedStatus::firmwareTag1Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void GPSExtendedStatus::FirmwareTag_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void GPSExtendedStatus::firmwareTag2Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void GPSExtendedStatus::FirmwareTag_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void GPSExtendedStatus::firmwareTag3Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void GPSExtendedStatus::FirmwareTag_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void GPSExtendedStatus::firmwareTag4Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void GPSExtendedStatus::FirmwareTag_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void GPSExtendedStatus::firmwareTag5Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void GPSExtendedStatus::FirmwareTag_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void GPSExtendedStatus::firmwareTag6Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void GPSExtendedStatus::FirmwareTag_6Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void GPSExtendedStatus::firmwareTag7Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void GPSExtendedStatus::FirmwareTag_7Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void GPSExtendedStatus::firmwareTag8Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void GPSExtendedStatus::FirmwareTag_8Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void GPSExtendedStatus::firmwareTag9Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void GPSExtendedStatus::FirmwareTag_9Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void GPSExtendedStatus::firmwareTag10Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void GPSExtendedStatus::FirmwareTag_10Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void GPSExtendedStatus::firmwareTag11Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void GPSExtendedStatus::FirmwareTag_11Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void GPSExtendedStatus::firmwareTag12Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void GPSExtendedStatus::FirmwareTag_12Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void GPSExtendedStatus::firmwareTag13Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void GPSExtendedStatus::FirmwareTag_13Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void GPSExtendedStatus::firmwareTag14Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void GPSExtendedStatus::FirmwareTag_14Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void GPSExtendedStatus::firmwareTag15Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void GPSExtendedStatus::FirmwareTag_15Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void GPSExtendedStatus::firmwareTag16Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void GPSExtendedStatus::FirmwareTag_16Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void GPSExtendedStatus::firmwareTag17Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void GPSExtendedStatus::FirmwareTag_17Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void GPSExtendedStatus::firmwareTag18Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void GPSExtendedStatus::FirmwareTag_18Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void GPSExtendedStatus::firmwareTag19Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void GPSExtendedStatus::FirmwareTag_19Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void GPSExtendedStatus::firmwareTag20Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void GPSExtendedStatus::FirmwareTag_20Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void GPSExtendedStatus::firmwareTag21Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void GPSExtendedStatus::FirmwareTag_21Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void GPSExtendedStatus::firmwareTag22Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void GPSExtendedStatus::FirmwareTag_22Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void GPSExtendedStatus::firmwareTag23Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void GPSExtendedStatus::FirmwareTag_23Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void GPSExtendedStatus::firmwareTag24Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void GPSExtendedStatus::FirmwareTag_24Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void GPSExtendedStatus::firmwareTag25Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void GPSExtendedStatus::FirmwareTag_25Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
