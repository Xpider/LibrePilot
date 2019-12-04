/****************************************************************************
** Meta object code from reading C++ file 'debuglogentry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../debuglogentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debuglogentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DebugLogEntryConstants_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugLogEntryConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugLogEntryConstants_t qt_meta_stringdata_DebugLogEntryConstants = {
    {
QT_MOC_LITERAL(0, 0, 22), // "DebugLogEntryConstants"
QT_MOC_LITERAL(1, 23, 4), // "Enum"
QT_MOC_LITERAL(2, 28, 9) // "TypeCount"

    },
    "DebugLogEntryConstants\0Enum\0TypeCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugLogEntryConstants[] = {

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
       2, uint(DebugLogEntryConstants::TypeCount),

       0        // eod
};

void DebugLogEntryConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DebugLogEntryConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DebugLogEntryConstants.data,
    qt_meta_data_DebugLogEntryConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugLogEntryConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugLogEntryConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugLogEntryConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DebugLogEntryConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebugLogEntry_Type_t {
    QByteArrayData data[6];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugLogEntry_Type_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugLogEntry_Type_t qt_meta_stringdata_DebugLogEntry_Type = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DebugLogEntry_Type"
QT_MOC_LITERAL(1, 19, 4), // "Enum"
QT_MOC_LITERAL(2, 24, 5), // "Empty"
QT_MOC_LITERAL(3, 30, 4), // "Text"
QT_MOC_LITERAL(4, 35, 9), // "UAVObject"
QT_MOC_LITERAL(5, 45, 18) // "MultipleUAVObjects"

    },
    "DebugLogEntry_Type\0Enum\0Empty\0Text\0"
    "UAVObject\0MultipleUAVObjects"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugLogEntry_Type[] = {

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
       2, uint(DebugLogEntry_Type::Empty),
       3, uint(DebugLogEntry_Type::Text),
       4, uint(DebugLogEntry_Type::UAVObject),
       5, uint(DebugLogEntry_Type::MultipleUAVObjects),

       0        // eod
};

void DebugLogEntry_Type::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DebugLogEntry_Type::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DebugLogEntry_Type.data,
    qt_meta_data_DebugLogEntry_Type,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugLogEntry_Type::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugLogEntry_Type::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugLogEntry_Type.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DebugLogEntry_Type::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebugLogEntry_t {
    QByteArrayData data[1453];
    char stringdata0[16409];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugLogEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugLogEntry_t qt_meta_stringdata_DebugLogEntry = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DebugLogEntry"
QT_MOC_LITERAL(1, 14, 17), // "flightTimeChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "value"
QT_MOC_LITERAL(4, 39, 17), // "FlightTimeChanged"
QT_MOC_LITERAL(5, 57, 15), // "objectIDChanged"
QT_MOC_LITERAL(6, 73, 15), // "ObjectIDChanged"
QT_MOC_LITERAL(7, 89, 13), // "flightChanged"
QT_MOC_LITERAL(8, 103, 13), // "FlightChanged"
QT_MOC_LITERAL(9, 117, 12), // "entryChanged"
QT_MOC_LITERAL(10, 130, 12), // "EntryChanged"
QT_MOC_LITERAL(11, 143, 17), // "instanceIDChanged"
QT_MOC_LITERAL(12, 161, 17), // "InstanceIDChanged"
QT_MOC_LITERAL(13, 179, 11), // "sizeChanged"
QT_MOC_LITERAL(14, 191, 11), // "SizeChanged"
QT_MOC_LITERAL(15, 203, 11), // "typeChanged"
QT_MOC_LITERAL(16, 215, 24), // "DebugLogEntry_Type::Enum"
QT_MOC_LITERAL(17, 240, 11), // "TypeChanged"
QT_MOC_LITERAL(18, 252, 11), // "dataChanged"
QT_MOC_LITERAL(19, 264, 5), // "index"
QT_MOC_LITERAL(20, 270, 11), // "DataChanged"
QT_MOC_LITERAL(21, 282, 12), // "data0Changed"
QT_MOC_LITERAL(22, 295, 13), // "Data_0Changed"
QT_MOC_LITERAL(23, 309, 12), // "data1Changed"
QT_MOC_LITERAL(24, 322, 13), // "Data_1Changed"
QT_MOC_LITERAL(25, 336, 12), // "data2Changed"
QT_MOC_LITERAL(26, 349, 13), // "Data_2Changed"
QT_MOC_LITERAL(27, 363, 12), // "data3Changed"
QT_MOC_LITERAL(28, 376, 13), // "Data_3Changed"
QT_MOC_LITERAL(29, 390, 12), // "data4Changed"
QT_MOC_LITERAL(30, 403, 13), // "Data_4Changed"
QT_MOC_LITERAL(31, 417, 12), // "data5Changed"
QT_MOC_LITERAL(32, 430, 13), // "Data_5Changed"
QT_MOC_LITERAL(33, 444, 12), // "data6Changed"
QT_MOC_LITERAL(34, 457, 13), // "Data_6Changed"
QT_MOC_LITERAL(35, 471, 12), // "data7Changed"
QT_MOC_LITERAL(36, 484, 13), // "Data_7Changed"
QT_MOC_LITERAL(37, 498, 12), // "data8Changed"
QT_MOC_LITERAL(38, 511, 13), // "Data_8Changed"
QT_MOC_LITERAL(39, 525, 12), // "data9Changed"
QT_MOC_LITERAL(40, 538, 13), // "Data_9Changed"
QT_MOC_LITERAL(41, 552, 13), // "data10Changed"
QT_MOC_LITERAL(42, 566, 14), // "Data_10Changed"
QT_MOC_LITERAL(43, 581, 13), // "data11Changed"
QT_MOC_LITERAL(44, 595, 14), // "Data_11Changed"
QT_MOC_LITERAL(45, 610, 13), // "data12Changed"
QT_MOC_LITERAL(46, 624, 14), // "Data_12Changed"
QT_MOC_LITERAL(47, 639, 13), // "data13Changed"
QT_MOC_LITERAL(48, 653, 14), // "Data_13Changed"
QT_MOC_LITERAL(49, 668, 13), // "data14Changed"
QT_MOC_LITERAL(50, 682, 14), // "Data_14Changed"
QT_MOC_LITERAL(51, 697, 13), // "data15Changed"
QT_MOC_LITERAL(52, 711, 14), // "Data_15Changed"
QT_MOC_LITERAL(53, 726, 13), // "data16Changed"
QT_MOC_LITERAL(54, 740, 14), // "Data_16Changed"
QT_MOC_LITERAL(55, 755, 13), // "data17Changed"
QT_MOC_LITERAL(56, 769, 14), // "Data_17Changed"
QT_MOC_LITERAL(57, 784, 13), // "data18Changed"
QT_MOC_LITERAL(58, 798, 14), // "Data_18Changed"
QT_MOC_LITERAL(59, 813, 13), // "data19Changed"
QT_MOC_LITERAL(60, 827, 14), // "Data_19Changed"
QT_MOC_LITERAL(61, 842, 13), // "data20Changed"
QT_MOC_LITERAL(62, 856, 14), // "Data_20Changed"
QT_MOC_LITERAL(63, 871, 13), // "data21Changed"
QT_MOC_LITERAL(64, 885, 14), // "Data_21Changed"
QT_MOC_LITERAL(65, 900, 13), // "data22Changed"
QT_MOC_LITERAL(66, 914, 14), // "Data_22Changed"
QT_MOC_LITERAL(67, 929, 13), // "data23Changed"
QT_MOC_LITERAL(68, 943, 14), // "Data_23Changed"
QT_MOC_LITERAL(69, 958, 13), // "data24Changed"
QT_MOC_LITERAL(70, 972, 14), // "Data_24Changed"
QT_MOC_LITERAL(71, 987, 13), // "data25Changed"
QT_MOC_LITERAL(72, 1001, 14), // "Data_25Changed"
QT_MOC_LITERAL(73, 1016, 13), // "data26Changed"
QT_MOC_LITERAL(74, 1030, 14), // "Data_26Changed"
QT_MOC_LITERAL(75, 1045, 13), // "data27Changed"
QT_MOC_LITERAL(76, 1059, 14), // "Data_27Changed"
QT_MOC_LITERAL(77, 1074, 13), // "data28Changed"
QT_MOC_LITERAL(78, 1088, 14), // "Data_28Changed"
QT_MOC_LITERAL(79, 1103, 13), // "data29Changed"
QT_MOC_LITERAL(80, 1117, 14), // "Data_29Changed"
QT_MOC_LITERAL(81, 1132, 13), // "data30Changed"
QT_MOC_LITERAL(82, 1146, 14), // "Data_30Changed"
QT_MOC_LITERAL(83, 1161, 13), // "data31Changed"
QT_MOC_LITERAL(84, 1175, 14), // "Data_31Changed"
QT_MOC_LITERAL(85, 1190, 13), // "data32Changed"
QT_MOC_LITERAL(86, 1204, 14), // "Data_32Changed"
QT_MOC_LITERAL(87, 1219, 13), // "data33Changed"
QT_MOC_LITERAL(88, 1233, 14), // "Data_33Changed"
QT_MOC_LITERAL(89, 1248, 13), // "data34Changed"
QT_MOC_LITERAL(90, 1262, 14), // "Data_34Changed"
QT_MOC_LITERAL(91, 1277, 13), // "data35Changed"
QT_MOC_LITERAL(92, 1291, 14), // "Data_35Changed"
QT_MOC_LITERAL(93, 1306, 13), // "data36Changed"
QT_MOC_LITERAL(94, 1320, 14), // "Data_36Changed"
QT_MOC_LITERAL(95, 1335, 13), // "data37Changed"
QT_MOC_LITERAL(96, 1349, 14), // "Data_37Changed"
QT_MOC_LITERAL(97, 1364, 13), // "data38Changed"
QT_MOC_LITERAL(98, 1378, 14), // "Data_38Changed"
QT_MOC_LITERAL(99, 1393, 13), // "data39Changed"
QT_MOC_LITERAL(100, 1407, 14), // "Data_39Changed"
QT_MOC_LITERAL(101, 1422, 13), // "data40Changed"
QT_MOC_LITERAL(102, 1436, 14), // "Data_40Changed"
QT_MOC_LITERAL(103, 1451, 13), // "data41Changed"
QT_MOC_LITERAL(104, 1465, 14), // "Data_41Changed"
QT_MOC_LITERAL(105, 1480, 13), // "data42Changed"
QT_MOC_LITERAL(106, 1494, 14), // "Data_42Changed"
QT_MOC_LITERAL(107, 1509, 13), // "data43Changed"
QT_MOC_LITERAL(108, 1523, 14), // "Data_43Changed"
QT_MOC_LITERAL(109, 1538, 13), // "data44Changed"
QT_MOC_LITERAL(110, 1552, 14), // "Data_44Changed"
QT_MOC_LITERAL(111, 1567, 13), // "data45Changed"
QT_MOC_LITERAL(112, 1581, 14), // "Data_45Changed"
QT_MOC_LITERAL(113, 1596, 13), // "data46Changed"
QT_MOC_LITERAL(114, 1610, 14), // "Data_46Changed"
QT_MOC_LITERAL(115, 1625, 13), // "data47Changed"
QT_MOC_LITERAL(116, 1639, 14), // "Data_47Changed"
QT_MOC_LITERAL(117, 1654, 13), // "data48Changed"
QT_MOC_LITERAL(118, 1668, 14), // "Data_48Changed"
QT_MOC_LITERAL(119, 1683, 13), // "data49Changed"
QT_MOC_LITERAL(120, 1697, 14), // "Data_49Changed"
QT_MOC_LITERAL(121, 1712, 13), // "data50Changed"
QT_MOC_LITERAL(122, 1726, 14), // "Data_50Changed"
QT_MOC_LITERAL(123, 1741, 13), // "data51Changed"
QT_MOC_LITERAL(124, 1755, 14), // "Data_51Changed"
QT_MOC_LITERAL(125, 1770, 13), // "data52Changed"
QT_MOC_LITERAL(126, 1784, 14), // "Data_52Changed"
QT_MOC_LITERAL(127, 1799, 13), // "data53Changed"
QT_MOC_LITERAL(128, 1813, 14), // "Data_53Changed"
QT_MOC_LITERAL(129, 1828, 13), // "data54Changed"
QT_MOC_LITERAL(130, 1842, 14), // "Data_54Changed"
QT_MOC_LITERAL(131, 1857, 13), // "data55Changed"
QT_MOC_LITERAL(132, 1871, 14), // "Data_55Changed"
QT_MOC_LITERAL(133, 1886, 13), // "data56Changed"
QT_MOC_LITERAL(134, 1900, 14), // "Data_56Changed"
QT_MOC_LITERAL(135, 1915, 13), // "data57Changed"
QT_MOC_LITERAL(136, 1929, 14), // "Data_57Changed"
QT_MOC_LITERAL(137, 1944, 13), // "data58Changed"
QT_MOC_LITERAL(138, 1958, 14), // "Data_58Changed"
QT_MOC_LITERAL(139, 1973, 13), // "data59Changed"
QT_MOC_LITERAL(140, 1987, 14), // "Data_59Changed"
QT_MOC_LITERAL(141, 2002, 13), // "data60Changed"
QT_MOC_LITERAL(142, 2016, 14), // "Data_60Changed"
QT_MOC_LITERAL(143, 2031, 13), // "data61Changed"
QT_MOC_LITERAL(144, 2045, 14), // "Data_61Changed"
QT_MOC_LITERAL(145, 2060, 13), // "data62Changed"
QT_MOC_LITERAL(146, 2074, 14), // "Data_62Changed"
QT_MOC_LITERAL(147, 2089, 13), // "data63Changed"
QT_MOC_LITERAL(148, 2103, 14), // "Data_63Changed"
QT_MOC_LITERAL(149, 2118, 13), // "data64Changed"
QT_MOC_LITERAL(150, 2132, 14), // "Data_64Changed"
QT_MOC_LITERAL(151, 2147, 13), // "data65Changed"
QT_MOC_LITERAL(152, 2161, 14), // "Data_65Changed"
QT_MOC_LITERAL(153, 2176, 13), // "data66Changed"
QT_MOC_LITERAL(154, 2190, 14), // "Data_66Changed"
QT_MOC_LITERAL(155, 2205, 13), // "data67Changed"
QT_MOC_LITERAL(156, 2219, 14), // "Data_67Changed"
QT_MOC_LITERAL(157, 2234, 13), // "data68Changed"
QT_MOC_LITERAL(158, 2248, 14), // "Data_68Changed"
QT_MOC_LITERAL(159, 2263, 13), // "data69Changed"
QT_MOC_LITERAL(160, 2277, 14), // "Data_69Changed"
QT_MOC_LITERAL(161, 2292, 13), // "data70Changed"
QT_MOC_LITERAL(162, 2306, 14), // "Data_70Changed"
QT_MOC_LITERAL(163, 2321, 13), // "data71Changed"
QT_MOC_LITERAL(164, 2335, 14), // "Data_71Changed"
QT_MOC_LITERAL(165, 2350, 13), // "data72Changed"
QT_MOC_LITERAL(166, 2364, 14), // "Data_72Changed"
QT_MOC_LITERAL(167, 2379, 13), // "data73Changed"
QT_MOC_LITERAL(168, 2393, 14), // "Data_73Changed"
QT_MOC_LITERAL(169, 2408, 13), // "data74Changed"
QT_MOC_LITERAL(170, 2422, 14), // "Data_74Changed"
QT_MOC_LITERAL(171, 2437, 13), // "data75Changed"
QT_MOC_LITERAL(172, 2451, 14), // "Data_75Changed"
QT_MOC_LITERAL(173, 2466, 13), // "data76Changed"
QT_MOC_LITERAL(174, 2480, 14), // "Data_76Changed"
QT_MOC_LITERAL(175, 2495, 13), // "data77Changed"
QT_MOC_LITERAL(176, 2509, 14), // "Data_77Changed"
QT_MOC_LITERAL(177, 2524, 13), // "data78Changed"
QT_MOC_LITERAL(178, 2538, 14), // "Data_78Changed"
QT_MOC_LITERAL(179, 2553, 13), // "data79Changed"
QT_MOC_LITERAL(180, 2567, 14), // "Data_79Changed"
QT_MOC_LITERAL(181, 2582, 13), // "data80Changed"
QT_MOC_LITERAL(182, 2596, 14), // "Data_80Changed"
QT_MOC_LITERAL(183, 2611, 13), // "data81Changed"
QT_MOC_LITERAL(184, 2625, 14), // "Data_81Changed"
QT_MOC_LITERAL(185, 2640, 13), // "data82Changed"
QT_MOC_LITERAL(186, 2654, 14), // "Data_82Changed"
QT_MOC_LITERAL(187, 2669, 13), // "data83Changed"
QT_MOC_LITERAL(188, 2683, 14), // "Data_83Changed"
QT_MOC_LITERAL(189, 2698, 13), // "data84Changed"
QT_MOC_LITERAL(190, 2712, 14), // "Data_84Changed"
QT_MOC_LITERAL(191, 2727, 13), // "data85Changed"
QT_MOC_LITERAL(192, 2741, 14), // "Data_85Changed"
QT_MOC_LITERAL(193, 2756, 13), // "data86Changed"
QT_MOC_LITERAL(194, 2770, 14), // "Data_86Changed"
QT_MOC_LITERAL(195, 2785, 13), // "data87Changed"
QT_MOC_LITERAL(196, 2799, 14), // "Data_87Changed"
QT_MOC_LITERAL(197, 2814, 13), // "data88Changed"
QT_MOC_LITERAL(198, 2828, 14), // "Data_88Changed"
QT_MOC_LITERAL(199, 2843, 13), // "data89Changed"
QT_MOC_LITERAL(200, 2857, 14), // "Data_89Changed"
QT_MOC_LITERAL(201, 2872, 13), // "data90Changed"
QT_MOC_LITERAL(202, 2886, 14), // "Data_90Changed"
QT_MOC_LITERAL(203, 2901, 13), // "data91Changed"
QT_MOC_LITERAL(204, 2915, 14), // "Data_91Changed"
QT_MOC_LITERAL(205, 2930, 13), // "data92Changed"
QT_MOC_LITERAL(206, 2944, 14), // "Data_92Changed"
QT_MOC_LITERAL(207, 2959, 13), // "data93Changed"
QT_MOC_LITERAL(208, 2973, 14), // "Data_93Changed"
QT_MOC_LITERAL(209, 2988, 13), // "data94Changed"
QT_MOC_LITERAL(210, 3002, 14), // "Data_94Changed"
QT_MOC_LITERAL(211, 3017, 13), // "data95Changed"
QT_MOC_LITERAL(212, 3031, 14), // "Data_95Changed"
QT_MOC_LITERAL(213, 3046, 13), // "data96Changed"
QT_MOC_LITERAL(214, 3060, 14), // "Data_96Changed"
QT_MOC_LITERAL(215, 3075, 13), // "data97Changed"
QT_MOC_LITERAL(216, 3089, 14), // "Data_97Changed"
QT_MOC_LITERAL(217, 3104, 13), // "data98Changed"
QT_MOC_LITERAL(218, 3118, 14), // "Data_98Changed"
QT_MOC_LITERAL(219, 3133, 13), // "data99Changed"
QT_MOC_LITERAL(220, 3147, 14), // "Data_99Changed"
QT_MOC_LITERAL(221, 3162, 14), // "data100Changed"
QT_MOC_LITERAL(222, 3177, 15), // "Data_100Changed"
QT_MOC_LITERAL(223, 3193, 14), // "data101Changed"
QT_MOC_LITERAL(224, 3208, 15), // "Data_101Changed"
QT_MOC_LITERAL(225, 3224, 14), // "data102Changed"
QT_MOC_LITERAL(226, 3239, 15), // "Data_102Changed"
QT_MOC_LITERAL(227, 3255, 14), // "data103Changed"
QT_MOC_LITERAL(228, 3270, 15), // "Data_103Changed"
QT_MOC_LITERAL(229, 3286, 14), // "data104Changed"
QT_MOC_LITERAL(230, 3301, 15), // "Data_104Changed"
QT_MOC_LITERAL(231, 3317, 14), // "data105Changed"
QT_MOC_LITERAL(232, 3332, 15), // "Data_105Changed"
QT_MOC_LITERAL(233, 3348, 14), // "data106Changed"
QT_MOC_LITERAL(234, 3363, 15), // "Data_106Changed"
QT_MOC_LITERAL(235, 3379, 14), // "data107Changed"
QT_MOC_LITERAL(236, 3394, 15), // "Data_107Changed"
QT_MOC_LITERAL(237, 3410, 14), // "data108Changed"
QT_MOC_LITERAL(238, 3425, 15), // "Data_108Changed"
QT_MOC_LITERAL(239, 3441, 14), // "data109Changed"
QT_MOC_LITERAL(240, 3456, 15), // "Data_109Changed"
QT_MOC_LITERAL(241, 3472, 14), // "data110Changed"
QT_MOC_LITERAL(242, 3487, 15), // "Data_110Changed"
QT_MOC_LITERAL(243, 3503, 14), // "data111Changed"
QT_MOC_LITERAL(244, 3518, 15), // "Data_111Changed"
QT_MOC_LITERAL(245, 3534, 14), // "data112Changed"
QT_MOC_LITERAL(246, 3549, 15), // "Data_112Changed"
QT_MOC_LITERAL(247, 3565, 14), // "data113Changed"
QT_MOC_LITERAL(248, 3580, 15), // "Data_113Changed"
QT_MOC_LITERAL(249, 3596, 14), // "data114Changed"
QT_MOC_LITERAL(250, 3611, 15), // "Data_114Changed"
QT_MOC_LITERAL(251, 3627, 14), // "data115Changed"
QT_MOC_LITERAL(252, 3642, 15), // "Data_115Changed"
QT_MOC_LITERAL(253, 3658, 14), // "data116Changed"
QT_MOC_LITERAL(254, 3673, 15), // "Data_116Changed"
QT_MOC_LITERAL(255, 3689, 14), // "data117Changed"
QT_MOC_LITERAL(256, 3704, 15), // "Data_117Changed"
QT_MOC_LITERAL(257, 3720, 14), // "data118Changed"
QT_MOC_LITERAL(258, 3735, 15), // "Data_118Changed"
QT_MOC_LITERAL(259, 3751, 14), // "data119Changed"
QT_MOC_LITERAL(260, 3766, 15), // "Data_119Changed"
QT_MOC_LITERAL(261, 3782, 14), // "data120Changed"
QT_MOC_LITERAL(262, 3797, 15), // "Data_120Changed"
QT_MOC_LITERAL(263, 3813, 14), // "data121Changed"
QT_MOC_LITERAL(264, 3828, 15), // "Data_121Changed"
QT_MOC_LITERAL(265, 3844, 14), // "data122Changed"
QT_MOC_LITERAL(266, 3859, 15), // "Data_122Changed"
QT_MOC_LITERAL(267, 3875, 14), // "data123Changed"
QT_MOC_LITERAL(268, 3890, 15), // "Data_123Changed"
QT_MOC_LITERAL(269, 3906, 14), // "data124Changed"
QT_MOC_LITERAL(270, 3921, 15), // "Data_124Changed"
QT_MOC_LITERAL(271, 3937, 14), // "data125Changed"
QT_MOC_LITERAL(272, 3952, 15), // "Data_125Changed"
QT_MOC_LITERAL(273, 3968, 14), // "data126Changed"
QT_MOC_LITERAL(274, 3983, 15), // "Data_126Changed"
QT_MOC_LITERAL(275, 3999, 14), // "data127Changed"
QT_MOC_LITERAL(276, 4014, 15), // "Data_127Changed"
QT_MOC_LITERAL(277, 4030, 14), // "data128Changed"
QT_MOC_LITERAL(278, 4045, 15), // "Data_128Changed"
QT_MOC_LITERAL(279, 4061, 14), // "data129Changed"
QT_MOC_LITERAL(280, 4076, 15), // "Data_129Changed"
QT_MOC_LITERAL(281, 4092, 14), // "data130Changed"
QT_MOC_LITERAL(282, 4107, 15), // "Data_130Changed"
QT_MOC_LITERAL(283, 4123, 14), // "data131Changed"
QT_MOC_LITERAL(284, 4138, 15), // "Data_131Changed"
QT_MOC_LITERAL(285, 4154, 14), // "data132Changed"
QT_MOC_LITERAL(286, 4169, 15), // "Data_132Changed"
QT_MOC_LITERAL(287, 4185, 14), // "data133Changed"
QT_MOC_LITERAL(288, 4200, 15), // "Data_133Changed"
QT_MOC_LITERAL(289, 4216, 14), // "data134Changed"
QT_MOC_LITERAL(290, 4231, 15), // "Data_134Changed"
QT_MOC_LITERAL(291, 4247, 14), // "data135Changed"
QT_MOC_LITERAL(292, 4262, 15), // "Data_135Changed"
QT_MOC_LITERAL(293, 4278, 14), // "data136Changed"
QT_MOC_LITERAL(294, 4293, 15), // "Data_136Changed"
QT_MOC_LITERAL(295, 4309, 14), // "data137Changed"
QT_MOC_LITERAL(296, 4324, 15), // "Data_137Changed"
QT_MOC_LITERAL(297, 4340, 14), // "data138Changed"
QT_MOC_LITERAL(298, 4355, 15), // "Data_138Changed"
QT_MOC_LITERAL(299, 4371, 14), // "data139Changed"
QT_MOC_LITERAL(300, 4386, 15), // "Data_139Changed"
QT_MOC_LITERAL(301, 4402, 14), // "data140Changed"
QT_MOC_LITERAL(302, 4417, 15), // "Data_140Changed"
QT_MOC_LITERAL(303, 4433, 14), // "data141Changed"
QT_MOC_LITERAL(304, 4448, 15), // "Data_141Changed"
QT_MOC_LITERAL(305, 4464, 14), // "data142Changed"
QT_MOC_LITERAL(306, 4479, 15), // "Data_142Changed"
QT_MOC_LITERAL(307, 4495, 14), // "data143Changed"
QT_MOC_LITERAL(308, 4510, 15), // "Data_143Changed"
QT_MOC_LITERAL(309, 4526, 14), // "data144Changed"
QT_MOC_LITERAL(310, 4541, 15), // "Data_144Changed"
QT_MOC_LITERAL(311, 4557, 14), // "data145Changed"
QT_MOC_LITERAL(312, 4572, 15), // "Data_145Changed"
QT_MOC_LITERAL(313, 4588, 14), // "data146Changed"
QT_MOC_LITERAL(314, 4603, 15), // "Data_146Changed"
QT_MOC_LITERAL(315, 4619, 14), // "data147Changed"
QT_MOC_LITERAL(316, 4634, 15), // "Data_147Changed"
QT_MOC_LITERAL(317, 4650, 14), // "data148Changed"
QT_MOC_LITERAL(318, 4665, 15), // "Data_148Changed"
QT_MOC_LITERAL(319, 4681, 14), // "data149Changed"
QT_MOC_LITERAL(320, 4696, 15), // "Data_149Changed"
QT_MOC_LITERAL(321, 4712, 14), // "data150Changed"
QT_MOC_LITERAL(322, 4727, 15), // "Data_150Changed"
QT_MOC_LITERAL(323, 4743, 14), // "data151Changed"
QT_MOC_LITERAL(324, 4758, 15), // "Data_151Changed"
QT_MOC_LITERAL(325, 4774, 14), // "data152Changed"
QT_MOC_LITERAL(326, 4789, 15), // "Data_152Changed"
QT_MOC_LITERAL(327, 4805, 14), // "data153Changed"
QT_MOC_LITERAL(328, 4820, 15), // "Data_153Changed"
QT_MOC_LITERAL(329, 4836, 14), // "data154Changed"
QT_MOC_LITERAL(330, 4851, 15), // "Data_154Changed"
QT_MOC_LITERAL(331, 4867, 14), // "data155Changed"
QT_MOC_LITERAL(332, 4882, 15), // "Data_155Changed"
QT_MOC_LITERAL(333, 4898, 14), // "data156Changed"
QT_MOC_LITERAL(334, 4913, 15), // "Data_156Changed"
QT_MOC_LITERAL(335, 4929, 14), // "data157Changed"
QT_MOC_LITERAL(336, 4944, 15), // "Data_157Changed"
QT_MOC_LITERAL(337, 4960, 14), // "data158Changed"
QT_MOC_LITERAL(338, 4975, 15), // "Data_158Changed"
QT_MOC_LITERAL(339, 4991, 14), // "data159Changed"
QT_MOC_LITERAL(340, 5006, 15), // "Data_159Changed"
QT_MOC_LITERAL(341, 5022, 14), // "data160Changed"
QT_MOC_LITERAL(342, 5037, 15), // "Data_160Changed"
QT_MOC_LITERAL(343, 5053, 14), // "data161Changed"
QT_MOC_LITERAL(344, 5068, 15), // "Data_161Changed"
QT_MOC_LITERAL(345, 5084, 14), // "data162Changed"
QT_MOC_LITERAL(346, 5099, 15), // "Data_162Changed"
QT_MOC_LITERAL(347, 5115, 14), // "data163Changed"
QT_MOC_LITERAL(348, 5130, 15), // "Data_163Changed"
QT_MOC_LITERAL(349, 5146, 14), // "data164Changed"
QT_MOC_LITERAL(350, 5161, 15), // "Data_164Changed"
QT_MOC_LITERAL(351, 5177, 14), // "data165Changed"
QT_MOC_LITERAL(352, 5192, 15), // "Data_165Changed"
QT_MOC_LITERAL(353, 5208, 14), // "data166Changed"
QT_MOC_LITERAL(354, 5223, 15), // "Data_166Changed"
QT_MOC_LITERAL(355, 5239, 14), // "data167Changed"
QT_MOC_LITERAL(356, 5254, 15), // "Data_167Changed"
QT_MOC_LITERAL(357, 5270, 14), // "data168Changed"
QT_MOC_LITERAL(358, 5285, 15), // "Data_168Changed"
QT_MOC_LITERAL(359, 5301, 14), // "data169Changed"
QT_MOC_LITERAL(360, 5316, 15), // "Data_169Changed"
QT_MOC_LITERAL(361, 5332, 14), // "data170Changed"
QT_MOC_LITERAL(362, 5347, 15), // "Data_170Changed"
QT_MOC_LITERAL(363, 5363, 14), // "data171Changed"
QT_MOC_LITERAL(364, 5378, 15), // "Data_171Changed"
QT_MOC_LITERAL(365, 5394, 14), // "data172Changed"
QT_MOC_LITERAL(366, 5409, 15), // "Data_172Changed"
QT_MOC_LITERAL(367, 5425, 14), // "data173Changed"
QT_MOC_LITERAL(368, 5440, 15), // "Data_173Changed"
QT_MOC_LITERAL(369, 5456, 14), // "data174Changed"
QT_MOC_LITERAL(370, 5471, 15), // "Data_174Changed"
QT_MOC_LITERAL(371, 5487, 14), // "data175Changed"
QT_MOC_LITERAL(372, 5502, 15), // "Data_175Changed"
QT_MOC_LITERAL(373, 5518, 14), // "data176Changed"
QT_MOC_LITERAL(374, 5533, 15), // "Data_176Changed"
QT_MOC_LITERAL(375, 5549, 14), // "data177Changed"
QT_MOC_LITERAL(376, 5564, 15), // "Data_177Changed"
QT_MOC_LITERAL(377, 5580, 14), // "data178Changed"
QT_MOC_LITERAL(378, 5595, 15), // "Data_178Changed"
QT_MOC_LITERAL(379, 5611, 14), // "data179Changed"
QT_MOC_LITERAL(380, 5626, 15), // "Data_179Changed"
QT_MOC_LITERAL(381, 5642, 14), // "data180Changed"
QT_MOC_LITERAL(382, 5657, 15), // "Data_180Changed"
QT_MOC_LITERAL(383, 5673, 14), // "data181Changed"
QT_MOC_LITERAL(384, 5688, 15), // "Data_181Changed"
QT_MOC_LITERAL(385, 5704, 14), // "data182Changed"
QT_MOC_LITERAL(386, 5719, 15), // "Data_182Changed"
QT_MOC_LITERAL(387, 5735, 14), // "data183Changed"
QT_MOC_LITERAL(388, 5750, 15), // "Data_183Changed"
QT_MOC_LITERAL(389, 5766, 14), // "data184Changed"
QT_MOC_LITERAL(390, 5781, 15), // "Data_184Changed"
QT_MOC_LITERAL(391, 5797, 14), // "data185Changed"
QT_MOC_LITERAL(392, 5812, 15), // "Data_185Changed"
QT_MOC_LITERAL(393, 5828, 14), // "data186Changed"
QT_MOC_LITERAL(394, 5843, 15), // "Data_186Changed"
QT_MOC_LITERAL(395, 5859, 14), // "data187Changed"
QT_MOC_LITERAL(396, 5874, 15), // "Data_187Changed"
QT_MOC_LITERAL(397, 5890, 14), // "data188Changed"
QT_MOC_LITERAL(398, 5905, 15), // "Data_188Changed"
QT_MOC_LITERAL(399, 5921, 14), // "data189Changed"
QT_MOC_LITERAL(400, 5936, 15), // "Data_189Changed"
QT_MOC_LITERAL(401, 5952, 14), // "data190Changed"
QT_MOC_LITERAL(402, 5967, 15), // "Data_190Changed"
QT_MOC_LITERAL(403, 5983, 14), // "data191Changed"
QT_MOC_LITERAL(404, 5998, 15), // "Data_191Changed"
QT_MOC_LITERAL(405, 6014, 14), // "data192Changed"
QT_MOC_LITERAL(406, 6029, 15), // "Data_192Changed"
QT_MOC_LITERAL(407, 6045, 14), // "data193Changed"
QT_MOC_LITERAL(408, 6060, 15), // "Data_193Changed"
QT_MOC_LITERAL(409, 6076, 14), // "data194Changed"
QT_MOC_LITERAL(410, 6091, 15), // "Data_194Changed"
QT_MOC_LITERAL(411, 6107, 14), // "data195Changed"
QT_MOC_LITERAL(412, 6122, 15), // "Data_195Changed"
QT_MOC_LITERAL(413, 6138, 14), // "data196Changed"
QT_MOC_LITERAL(414, 6153, 15), // "Data_196Changed"
QT_MOC_LITERAL(415, 6169, 14), // "data197Changed"
QT_MOC_LITERAL(416, 6184, 15), // "Data_197Changed"
QT_MOC_LITERAL(417, 6200, 14), // "data198Changed"
QT_MOC_LITERAL(418, 6215, 15), // "Data_198Changed"
QT_MOC_LITERAL(419, 6231, 14), // "data199Changed"
QT_MOC_LITERAL(420, 6246, 15), // "Data_199Changed"
QT_MOC_LITERAL(421, 6262, 13), // "setFlightTime"
QT_MOC_LITERAL(422, 6276, 11), // "setObjectID"
QT_MOC_LITERAL(423, 6288, 9), // "setFlight"
QT_MOC_LITERAL(424, 6298, 8), // "setEntry"
QT_MOC_LITERAL(425, 6307, 13), // "setInstanceID"
QT_MOC_LITERAL(426, 6321, 7), // "setSize"
QT_MOC_LITERAL(427, 6329, 7), // "setType"
QT_MOC_LITERAL(428, 6337, 7), // "setData"
QT_MOC_LITERAL(429, 6345, 8), // "setData0"
QT_MOC_LITERAL(430, 6354, 9), // "setData_0"
QT_MOC_LITERAL(431, 6364, 8), // "setData1"
QT_MOC_LITERAL(432, 6373, 9), // "setData_1"
QT_MOC_LITERAL(433, 6383, 8), // "setData2"
QT_MOC_LITERAL(434, 6392, 9), // "setData_2"
QT_MOC_LITERAL(435, 6402, 8), // "setData3"
QT_MOC_LITERAL(436, 6411, 9), // "setData_3"
QT_MOC_LITERAL(437, 6421, 8), // "setData4"
QT_MOC_LITERAL(438, 6430, 9), // "setData_4"
QT_MOC_LITERAL(439, 6440, 8), // "setData5"
QT_MOC_LITERAL(440, 6449, 9), // "setData_5"
QT_MOC_LITERAL(441, 6459, 8), // "setData6"
QT_MOC_LITERAL(442, 6468, 9), // "setData_6"
QT_MOC_LITERAL(443, 6478, 8), // "setData7"
QT_MOC_LITERAL(444, 6487, 9), // "setData_7"
QT_MOC_LITERAL(445, 6497, 8), // "setData8"
QT_MOC_LITERAL(446, 6506, 9), // "setData_8"
QT_MOC_LITERAL(447, 6516, 8), // "setData9"
QT_MOC_LITERAL(448, 6525, 9), // "setData_9"
QT_MOC_LITERAL(449, 6535, 9), // "setData10"
QT_MOC_LITERAL(450, 6545, 10), // "setData_10"
QT_MOC_LITERAL(451, 6556, 9), // "setData11"
QT_MOC_LITERAL(452, 6566, 10), // "setData_11"
QT_MOC_LITERAL(453, 6577, 9), // "setData12"
QT_MOC_LITERAL(454, 6587, 10), // "setData_12"
QT_MOC_LITERAL(455, 6598, 9), // "setData13"
QT_MOC_LITERAL(456, 6608, 10), // "setData_13"
QT_MOC_LITERAL(457, 6619, 9), // "setData14"
QT_MOC_LITERAL(458, 6629, 10), // "setData_14"
QT_MOC_LITERAL(459, 6640, 9), // "setData15"
QT_MOC_LITERAL(460, 6650, 10), // "setData_15"
QT_MOC_LITERAL(461, 6661, 9), // "setData16"
QT_MOC_LITERAL(462, 6671, 10), // "setData_16"
QT_MOC_LITERAL(463, 6682, 9), // "setData17"
QT_MOC_LITERAL(464, 6692, 10), // "setData_17"
QT_MOC_LITERAL(465, 6703, 9), // "setData18"
QT_MOC_LITERAL(466, 6713, 10), // "setData_18"
QT_MOC_LITERAL(467, 6724, 9), // "setData19"
QT_MOC_LITERAL(468, 6734, 10), // "setData_19"
QT_MOC_LITERAL(469, 6745, 9), // "setData20"
QT_MOC_LITERAL(470, 6755, 10), // "setData_20"
QT_MOC_LITERAL(471, 6766, 9), // "setData21"
QT_MOC_LITERAL(472, 6776, 10), // "setData_21"
QT_MOC_LITERAL(473, 6787, 9), // "setData22"
QT_MOC_LITERAL(474, 6797, 10), // "setData_22"
QT_MOC_LITERAL(475, 6808, 9), // "setData23"
QT_MOC_LITERAL(476, 6818, 10), // "setData_23"
QT_MOC_LITERAL(477, 6829, 9), // "setData24"
QT_MOC_LITERAL(478, 6839, 10), // "setData_24"
QT_MOC_LITERAL(479, 6850, 9), // "setData25"
QT_MOC_LITERAL(480, 6860, 10), // "setData_25"
QT_MOC_LITERAL(481, 6871, 9), // "setData26"
QT_MOC_LITERAL(482, 6881, 10), // "setData_26"
QT_MOC_LITERAL(483, 6892, 9), // "setData27"
QT_MOC_LITERAL(484, 6902, 10), // "setData_27"
QT_MOC_LITERAL(485, 6913, 9), // "setData28"
QT_MOC_LITERAL(486, 6923, 10), // "setData_28"
QT_MOC_LITERAL(487, 6934, 9), // "setData29"
QT_MOC_LITERAL(488, 6944, 10), // "setData_29"
QT_MOC_LITERAL(489, 6955, 9), // "setData30"
QT_MOC_LITERAL(490, 6965, 10), // "setData_30"
QT_MOC_LITERAL(491, 6976, 9), // "setData31"
QT_MOC_LITERAL(492, 6986, 10), // "setData_31"
QT_MOC_LITERAL(493, 6997, 9), // "setData32"
QT_MOC_LITERAL(494, 7007, 10), // "setData_32"
QT_MOC_LITERAL(495, 7018, 9), // "setData33"
QT_MOC_LITERAL(496, 7028, 10), // "setData_33"
QT_MOC_LITERAL(497, 7039, 9), // "setData34"
QT_MOC_LITERAL(498, 7049, 10), // "setData_34"
QT_MOC_LITERAL(499, 7060, 9), // "setData35"
QT_MOC_LITERAL(500, 7070, 10), // "setData_35"
QT_MOC_LITERAL(501, 7081, 9), // "setData36"
QT_MOC_LITERAL(502, 7091, 10), // "setData_36"
QT_MOC_LITERAL(503, 7102, 9), // "setData37"
QT_MOC_LITERAL(504, 7112, 10), // "setData_37"
QT_MOC_LITERAL(505, 7123, 9), // "setData38"
QT_MOC_LITERAL(506, 7133, 10), // "setData_38"
QT_MOC_LITERAL(507, 7144, 9), // "setData39"
QT_MOC_LITERAL(508, 7154, 10), // "setData_39"
QT_MOC_LITERAL(509, 7165, 9), // "setData40"
QT_MOC_LITERAL(510, 7175, 10), // "setData_40"
QT_MOC_LITERAL(511, 7186, 9), // "setData41"
QT_MOC_LITERAL(512, 7196, 10), // "setData_41"
QT_MOC_LITERAL(513, 7207, 9), // "setData42"
QT_MOC_LITERAL(514, 7217, 10), // "setData_42"
QT_MOC_LITERAL(515, 7228, 9), // "setData43"
QT_MOC_LITERAL(516, 7238, 10), // "setData_43"
QT_MOC_LITERAL(517, 7249, 9), // "setData44"
QT_MOC_LITERAL(518, 7259, 10), // "setData_44"
QT_MOC_LITERAL(519, 7270, 9), // "setData45"
QT_MOC_LITERAL(520, 7280, 10), // "setData_45"
QT_MOC_LITERAL(521, 7291, 9), // "setData46"
QT_MOC_LITERAL(522, 7301, 10), // "setData_46"
QT_MOC_LITERAL(523, 7312, 9), // "setData47"
QT_MOC_LITERAL(524, 7322, 10), // "setData_47"
QT_MOC_LITERAL(525, 7333, 9), // "setData48"
QT_MOC_LITERAL(526, 7343, 10), // "setData_48"
QT_MOC_LITERAL(527, 7354, 9), // "setData49"
QT_MOC_LITERAL(528, 7364, 10), // "setData_49"
QT_MOC_LITERAL(529, 7375, 9), // "setData50"
QT_MOC_LITERAL(530, 7385, 10), // "setData_50"
QT_MOC_LITERAL(531, 7396, 9), // "setData51"
QT_MOC_LITERAL(532, 7406, 10), // "setData_51"
QT_MOC_LITERAL(533, 7417, 9), // "setData52"
QT_MOC_LITERAL(534, 7427, 10), // "setData_52"
QT_MOC_LITERAL(535, 7438, 9), // "setData53"
QT_MOC_LITERAL(536, 7448, 10), // "setData_53"
QT_MOC_LITERAL(537, 7459, 9), // "setData54"
QT_MOC_LITERAL(538, 7469, 10), // "setData_54"
QT_MOC_LITERAL(539, 7480, 9), // "setData55"
QT_MOC_LITERAL(540, 7490, 10), // "setData_55"
QT_MOC_LITERAL(541, 7501, 9), // "setData56"
QT_MOC_LITERAL(542, 7511, 10), // "setData_56"
QT_MOC_LITERAL(543, 7522, 9), // "setData57"
QT_MOC_LITERAL(544, 7532, 10), // "setData_57"
QT_MOC_LITERAL(545, 7543, 9), // "setData58"
QT_MOC_LITERAL(546, 7553, 10), // "setData_58"
QT_MOC_LITERAL(547, 7564, 9), // "setData59"
QT_MOC_LITERAL(548, 7574, 10), // "setData_59"
QT_MOC_LITERAL(549, 7585, 9), // "setData60"
QT_MOC_LITERAL(550, 7595, 10), // "setData_60"
QT_MOC_LITERAL(551, 7606, 9), // "setData61"
QT_MOC_LITERAL(552, 7616, 10), // "setData_61"
QT_MOC_LITERAL(553, 7627, 9), // "setData62"
QT_MOC_LITERAL(554, 7637, 10), // "setData_62"
QT_MOC_LITERAL(555, 7648, 9), // "setData63"
QT_MOC_LITERAL(556, 7658, 10), // "setData_63"
QT_MOC_LITERAL(557, 7669, 9), // "setData64"
QT_MOC_LITERAL(558, 7679, 10), // "setData_64"
QT_MOC_LITERAL(559, 7690, 9), // "setData65"
QT_MOC_LITERAL(560, 7700, 10), // "setData_65"
QT_MOC_LITERAL(561, 7711, 9), // "setData66"
QT_MOC_LITERAL(562, 7721, 10), // "setData_66"
QT_MOC_LITERAL(563, 7732, 9), // "setData67"
QT_MOC_LITERAL(564, 7742, 10), // "setData_67"
QT_MOC_LITERAL(565, 7753, 9), // "setData68"
QT_MOC_LITERAL(566, 7763, 10), // "setData_68"
QT_MOC_LITERAL(567, 7774, 9), // "setData69"
QT_MOC_LITERAL(568, 7784, 10), // "setData_69"
QT_MOC_LITERAL(569, 7795, 9), // "setData70"
QT_MOC_LITERAL(570, 7805, 10), // "setData_70"
QT_MOC_LITERAL(571, 7816, 9), // "setData71"
QT_MOC_LITERAL(572, 7826, 10), // "setData_71"
QT_MOC_LITERAL(573, 7837, 9), // "setData72"
QT_MOC_LITERAL(574, 7847, 10), // "setData_72"
QT_MOC_LITERAL(575, 7858, 9), // "setData73"
QT_MOC_LITERAL(576, 7868, 10), // "setData_73"
QT_MOC_LITERAL(577, 7879, 9), // "setData74"
QT_MOC_LITERAL(578, 7889, 10), // "setData_74"
QT_MOC_LITERAL(579, 7900, 9), // "setData75"
QT_MOC_LITERAL(580, 7910, 10), // "setData_75"
QT_MOC_LITERAL(581, 7921, 9), // "setData76"
QT_MOC_LITERAL(582, 7931, 10), // "setData_76"
QT_MOC_LITERAL(583, 7942, 9), // "setData77"
QT_MOC_LITERAL(584, 7952, 10), // "setData_77"
QT_MOC_LITERAL(585, 7963, 9), // "setData78"
QT_MOC_LITERAL(586, 7973, 10), // "setData_78"
QT_MOC_LITERAL(587, 7984, 9), // "setData79"
QT_MOC_LITERAL(588, 7994, 10), // "setData_79"
QT_MOC_LITERAL(589, 8005, 9), // "setData80"
QT_MOC_LITERAL(590, 8015, 10), // "setData_80"
QT_MOC_LITERAL(591, 8026, 9), // "setData81"
QT_MOC_LITERAL(592, 8036, 10), // "setData_81"
QT_MOC_LITERAL(593, 8047, 9), // "setData82"
QT_MOC_LITERAL(594, 8057, 10), // "setData_82"
QT_MOC_LITERAL(595, 8068, 9), // "setData83"
QT_MOC_LITERAL(596, 8078, 10), // "setData_83"
QT_MOC_LITERAL(597, 8089, 9), // "setData84"
QT_MOC_LITERAL(598, 8099, 10), // "setData_84"
QT_MOC_LITERAL(599, 8110, 9), // "setData85"
QT_MOC_LITERAL(600, 8120, 10), // "setData_85"
QT_MOC_LITERAL(601, 8131, 9), // "setData86"
QT_MOC_LITERAL(602, 8141, 10), // "setData_86"
QT_MOC_LITERAL(603, 8152, 9), // "setData87"
QT_MOC_LITERAL(604, 8162, 10), // "setData_87"
QT_MOC_LITERAL(605, 8173, 9), // "setData88"
QT_MOC_LITERAL(606, 8183, 10), // "setData_88"
QT_MOC_LITERAL(607, 8194, 9), // "setData89"
QT_MOC_LITERAL(608, 8204, 10), // "setData_89"
QT_MOC_LITERAL(609, 8215, 9), // "setData90"
QT_MOC_LITERAL(610, 8225, 10), // "setData_90"
QT_MOC_LITERAL(611, 8236, 9), // "setData91"
QT_MOC_LITERAL(612, 8246, 10), // "setData_91"
QT_MOC_LITERAL(613, 8257, 9), // "setData92"
QT_MOC_LITERAL(614, 8267, 10), // "setData_92"
QT_MOC_LITERAL(615, 8278, 9), // "setData93"
QT_MOC_LITERAL(616, 8288, 10), // "setData_93"
QT_MOC_LITERAL(617, 8299, 9), // "setData94"
QT_MOC_LITERAL(618, 8309, 10), // "setData_94"
QT_MOC_LITERAL(619, 8320, 9), // "setData95"
QT_MOC_LITERAL(620, 8330, 10), // "setData_95"
QT_MOC_LITERAL(621, 8341, 9), // "setData96"
QT_MOC_LITERAL(622, 8351, 10), // "setData_96"
QT_MOC_LITERAL(623, 8362, 9), // "setData97"
QT_MOC_LITERAL(624, 8372, 10), // "setData_97"
QT_MOC_LITERAL(625, 8383, 9), // "setData98"
QT_MOC_LITERAL(626, 8393, 10), // "setData_98"
QT_MOC_LITERAL(627, 8404, 9), // "setData99"
QT_MOC_LITERAL(628, 8414, 10), // "setData_99"
QT_MOC_LITERAL(629, 8425, 10), // "setData100"
QT_MOC_LITERAL(630, 8436, 11), // "setData_100"
QT_MOC_LITERAL(631, 8448, 10), // "setData101"
QT_MOC_LITERAL(632, 8459, 11), // "setData_101"
QT_MOC_LITERAL(633, 8471, 10), // "setData102"
QT_MOC_LITERAL(634, 8482, 11), // "setData_102"
QT_MOC_LITERAL(635, 8494, 10), // "setData103"
QT_MOC_LITERAL(636, 8505, 11), // "setData_103"
QT_MOC_LITERAL(637, 8517, 10), // "setData104"
QT_MOC_LITERAL(638, 8528, 11), // "setData_104"
QT_MOC_LITERAL(639, 8540, 10), // "setData105"
QT_MOC_LITERAL(640, 8551, 11), // "setData_105"
QT_MOC_LITERAL(641, 8563, 10), // "setData106"
QT_MOC_LITERAL(642, 8574, 11), // "setData_106"
QT_MOC_LITERAL(643, 8586, 10), // "setData107"
QT_MOC_LITERAL(644, 8597, 11), // "setData_107"
QT_MOC_LITERAL(645, 8609, 10), // "setData108"
QT_MOC_LITERAL(646, 8620, 11), // "setData_108"
QT_MOC_LITERAL(647, 8632, 10), // "setData109"
QT_MOC_LITERAL(648, 8643, 11), // "setData_109"
QT_MOC_LITERAL(649, 8655, 10), // "setData110"
QT_MOC_LITERAL(650, 8666, 11), // "setData_110"
QT_MOC_LITERAL(651, 8678, 10), // "setData111"
QT_MOC_LITERAL(652, 8689, 11), // "setData_111"
QT_MOC_LITERAL(653, 8701, 10), // "setData112"
QT_MOC_LITERAL(654, 8712, 11), // "setData_112"
QT_MOC_LITERAL(655, 8724, 10), // "setData113"
QT_MOC_LITERAL(656, 8735, 11), // "setData_113"
QT_MOC_LITERAL(657, 8747, 10), // "setData114"
QT_MOC_LITERAL(658, 8758, 11), // "setData_114"
QT_MOC_LITERAL(659, 8770, 10), // "setData115"
QT_MOC_LITERAL(660, 8781, 11), // "setData_115"
QT_MOC_LITERAL(661, 8793, 10), // "setData116"
QT_MOC_LITERAL(662, 8804, 11), // "setData_116"
QT_MOC_LITERAL(663, 8816, 10), // "setData117"
QT_MOC_LITERAL(664, 8827, 11), // "setData_117"
QT_MOC_LITERAL(665, 8839, 10), // "setData118"
QT_MOC_LITERAL(666, 8850, 11), // "setData_118"
QT_MOC_LITERAL(667, 8862, 10), // "setData119"
QT_MOC_LITERAL(668, 8873, 11), // "setData_119"
QT_MOC_LITERAL(669, 8885, 10), // "setData120"
QT_MOC_LITERAL(670, 8896, 11), // "setData_120"
QT_MOC_LITERAL(671, 8908, 10), // "setData121"
QT_MOC_LITERAL(672, 8919, 11), // "setData_121"
QT_MOC_LITERAL(673, 8931, 10), // "setData122"
QT_MOC_LITERAL(674, 8942, 11), // "setData_122"
QT_MOC_LITERAL(675, 8954, 10), // "setData123"
QT_MOC_LITERAL(676, 8965, 11), // "setData_123"
QT_MOC_LITERAL(677, 8977, 10), // "setData124"
QT_MOC_LITERAL(678, 8988, 11), // "setData_124"
QT_MOC_LITERAL(679, 9000, 10), // "setData125"
QT_MOC_LITERAL(680, 9011, 11), // "setData_125"
QT_MOC_LITERAL(681, 9023, 10), // "setData126"
QT_MOC_LITERAL(682, 9034, 11), // "setData_126"
QT_MOC_LITERAL(683, 9046, 10), // "setData127"
QT_MOC_LITERAL(684, 9057, 11), // "setData_127"
QT_MOC_LITERAL(685, 9069, 10), // "setData128"
QT_MOC_LITERAL(686, 9080, 11), // "setData_128"
QT_MOC_LITERAL(687, 9092, 10), // "setData129"
QT_MOC_LITERAL(688, 9103, 11), // "setData_129"
QT_MOC_LITERAL(689, 9115, 10), // "setData130"
QT_MOC_LITERAL(690, 9126, 11), // "setData_130"
QT_MOC_LITERAL(691, 9138, 10), // "setData131"
QT_MOC_LITERAL(692, 9149, 11), // "setData_131"
QT_MOC_LITERAL(693, 9161, 10), // "setData132"
QT_MOC_LITERAL(694, 9172, 11), // "setData_132"
QT_MOC_LITERAL(695, 9184, 10), // "setData133"
QT_MOC_LITERAL(696, 9195, 11), // "setData_133"
QT_MOC_LITERAL(697, 9207, 10), // "setData134"
QT_MOC_LITERAL(698, 9218, 11), // "setData_134"
QT_MOC_LITERAL(699, 9230, 10), // "setData135"
QT_MOC_LITERAL(700, 9241, 11), // "setData_135"
QT_MOC_LITERAL(701, 9253, 10), // "setData136"
QT_MOC_LITERAL(702, 9264, 11), // "setData_136"
QT_MOC_LITERAL(703, 9276, 10), // "setData137"
QT_MOC_LITERAL(704, 9287, 11), // "setData_137"
QT_MOC_LITERAL(705, 9299, 10), // "setData138"
QT_MOC_LITERAL(706, 9310, 11), // "setData_138"
QT_MOC_LITERAL(707, 9322, 10), // "setData139"
QT_MOC_LITERAL(708, 9333, 11), // "setData_139"
QT_MOC_LITERAL(709, 9345, 10), // "setData140"
QT_MOC_LITERAL(710, 9356, 11), // "setData_140"
QT_MOC_LITERAL(711, 9368, 10), // "setData141"
QT_MOC_LITERAL(712, 9379, 11), // "setData_141"
QT_MOC_LITERAL(713, 9391, 10), // "setData142"
QT_MOC_LITERAL(714, 9402, 11), // "setData_142"
QT_MOC_LITERAL(715, 9414, 10), // "setData143"
QT_MOC_LITERAL(716, 9425, 11), // "setData_143"
QT_MOC_LITERAL(717, 9437, 10), // "setData144"
QT_MOC_LITERAL(718, 9448, 11), // "setData_144"
QT_MOC_LITERAL(719, 9460, 10), // "setData145"
QT_MOC_LITERAL(720, 9471, 11), // "setData_145"
QT_MOC_LITERAL(721, 9483, 10), // "setData146"
QT_MOC_LITERAL(722, 9494, 11), // "setData_146"
QT_MOC_LITERAL(723, 9506, 10), // "setData147"
QT_MOC_LITERAL(724, 9517, 11), // "setData_147"
QT_MOC_LITERAL(725, 9529, 10), // "setData148"
QT_MOC_LITERAL(726, 9540, 11), // "setData_148"
QT_MOC_LITERAL(727, 9552, 10), // "setData149"
QT_MOC_LITERAL(728, 9563, 11), // "setData_149"
QT_MOC_LITERAL(729, 9575, 10), // "setData150"
QT_MOC_LITERAL(730, 9586, 11), // "setData_150"
QT_MOC_LITERAL(731, 9598, 10), // "setData151"
QT_MOC_LITERAL(732, 9609, 11), // "setData_151"
QT_MOC_LITERAL(733, 9621, 10), // "setData152"
QT_MOC_LITERAL(734, 9632, 11), // "setData_152"
QT_MOC_LITERAL(735, 9644, 10), // "setData153"
QT_MOC_LITERAL(736, 9655, 11), // "setData_153"
QT_MOC_LITERAL(737, 9667, 10), // "setData154"
QT_MOC_LITERAL(738, 9678, 11), // "setData_154"
QT_MOC_LITERAL(739, 9690, 10), // "setData155"
QT_MOC_LITERAL(740, 9701, 11), // "setData_155"
QT_MOC_LITERAL(741, 9713, 10), // "setData156"
QT_MOC_LITERAL(742, 9724, 11), // "setData_156"
QT_MOC_LITERAL(743, 9736, 10), // "setData157"
QT_MOC_LITERAL(744, 9747, 11), // "setData_157"
QT_MOC_LITERAL(745, 9759, 10), // "setData158"
QT_MOC_LITERAL(746, 9770, 11), // "setData_158"
QT_MOC_LITERAL(747, 9782, 10), // "setData159"
QT_MOC_LITERAL(748, 9793, 11), // "setData_159"
QT_MOC_LITERAL(749, 9805, 10), // "setData160"
QT_MOC_LITERAL(750, 9816, 11), // "setData_160"
QT_MOC_LITERAL(751, 9828, 10), // "setData161"
QT_MOC_LITERAL(752, 9839, 11), // "setData_161"
QT_MOC_LITERAL(753, 9851, 10), // "setData162"
QT_MOC_LITERAL(754, 9862, 11), // "setData_162"
QT_MOC_LITERAL(755, 9874, 10), // "setData163"
QT_MOC_LITERAL(756, 9885, 11), // "setData_163"
QT_MOC_LITERAL(757, 9897, 10), // "setData164"
QT_MOC_LITERAL(758, 9908, 11), // "setData_164"
QT_MOC_LITERAL(759, 9920, 10), // "setData165"
QT_MOC_LITERAL(760, 9931, 11), // "setData_165"
QT_MOC_LITERAL(761, 9943, 10), // "setData166"
QT_MOC_LITERAL(762, 9954, 11), // "setData_166"
QT_MOC_LITERAL(763, 9966, 10), // "setData167"
QT_MOC_LITERAL(764, 9977, 11), // "setData_167"
QT_MOC_LITERAL(765, 9989, 10), // "setData168"
QT_MOC_LITERAL(766, 10000, 11), // "setData_168"
QT_MOC_LITERAL(767, 10012, 10), // "setData169"
QT_MOC_LITERAL(768, 10023, 11), // "setData_169"
QT_MOC_LITERAL(769, 10035, 10), // "setData170"
QT_MOC_LITERAL(770, 10046, 11), // "setData_170"
QT_MOC_LITERAL(771, 10058, 10), // "setData171"
QT_MOC_LITERAL(772, 10069, 11), // "setData_171"
QT_MOC_LITERAL(773, 10081, 10), // "setData172"
QT_MOC_LITERAL(774, 10092, 11), // "setData_172"
QT_MOC_LITERAL(775, 10104, 10), // "setData173"
QT_MOC_LITERAL(776, 10115, 11), // "setData_173"
QT_MOC_LITERAL(777, 10127, 10), // "setData174"
QT_MOC_LITERAL(778, 10138, 11), // "setData_174"
QT_MOC_LITERAL(779, 10150, 10), // "setData175"
QT_MOC_LITERAL(780, 10161, 11), // "setData_175"
QT_MOC_LITERAL(781, 10173, 10), // "setData176"
QT_MOC_LITERAL(782, 10184, 11), // "setData_176"
QT_MOC_LITERAL(783, 10196, 10), // "setData177"
QT_MOC_LITERAL(784, 10207, 11), // "setData_177"
QT_MOC_LITERAL(785, 10219, 10), // "setData178"
QT_MOC_LITERAL(786, 10230, 11), // "setData_178"
QT_MOC_LITERAL(787, 10242, 10), // "setData179"
QT_MOC_LITERAL(788, 10253, 11), // "setData_179"
QT_MOC_LITERAL(789, 10265, 10), // "setData180"
QT_MOC_LITERAL(790, 10276, 11), // "setData_180"
QT_MOC_LITERAL(791, 10288, 10), // "setData181"
QT_MOC_LITERAL(792, 10299, 11), // "setData_181"
QT_MOC_LITERAL(793, 10311, 10), // "setData182"
QT_MOC_LITERAL(794, 10322, 11), // "setData_182"
QT_MOC_LITERAL(795, 10334, 10), // "setData183"
QT_MOC_LITERAL(796, 10345, 11), // "setData_183"
QT_MOC_LITERAL(797, 10357, 10), // "setData184"
QT_MOC_LITERAL(798, 10368, 11), // "setData_184"
QT_MOC_LITERAL(799, 10380, 10), // "setData185"
QT_MOC_LITERAL(800, 10391, 11), // "setData_185"
QT_MOC_LITERAL(801, 10403, 10), // "setData186"
QT_MOC_LITERAL(802, 10414, 11), // "setData_186"
QT_MOC_LITERAL(803, 10426, 10), // "setData187"
QT_MOC_LITERAL(804, 10437, 11), // "setData_187"
QT_MOC_LITERAL(805, 10449, 10), // "setData188"
QT_MOC_LITERAL(806, 10460, 11), // "setData_188"
QT_MOC_LITERAL(807, 10472, 10), // "setData189"
QT_MOC_LITERAL(808, 10483, 11), // "setData_189"
QT_MOC_LITERAL(809, 10495, 10), // "setData190"
QT_MOC_LITERAL(810, 10506, 11), // "setData_190"
QT_MOC_LITERAL(811, 10518, 10), // "setData191"
QT_MOC_LITERAL(812, 10529, 11), // "setData_191"
QT_MOC_LITERAL(813, 10541, 10), // "setData192"
QT_MOC_LITERAL(814, 10552, 11), // "setData_192"
QT_MOC_LITERAL(815, 10564, 10), // "setData193"
QT_MOC_LITERAL(816, 10575, 11), // "setData_193"
QT_MOC_LITERAL(817, 10587, 10), // "setData194"
QT_MOC_LITERAL(818, 10598, 11), // "setData_194"
QT_MOC_LITERAL(819, 10610, 10), // "setData195"
QT_MOC_LITERAL(820, 10621, 11), // "setData_195"
QT_MOC_LITERAL(821, 10633, 10), // "setData196"
QT_MOC_LITERAL(822, 10644, 11), // "setData_196"
QT_MOC_LITERAL(823, 10656, 10), // "setData197"
QT_MOC_LITERAL(824, 10667, 11), // "setData_197"
QT_MOC_LITERAL(825, 10679, 10), // "setData198"
QT_MOC_LITERAL(826, 10690, 11), // "setData_198"
QT_MOC_LITERAL(827, 10702, 10), // "setData199"
QT_MOC_LITERAL(828, 10713, 11), // "setData_199"
QT_MOC_LITERAL(829, 10725, 17), // "emitNotifications"
QT_MOC_LITERAL(830, 10743, 13), // "getFlightTime"
QT_MOC_LITERAL(831, 10757, 11), // "getObjectID"
QT_MOC_LITERAL(832, 10769, 9), // "getFlight"
QT_MOC_LITERAL(833, 10779, 8), // "getEntry"
QT_MOC_LITERAL(834, 10788, 13), // "getInstanceID"
QT_MOC_LITERAL(835, 10802, 7), // "getSize"
QT_MOC_LITERAL(836, 10810, 7), // "getType"
QT_MOC_LITERAL(837, 10818, 4), // "data"
QT_MOC_LITERAL(838, 10823, 7), // "getData"
QT_MOC_LITERAL(839, 10831, 9), // "getData_0"
QT_MOC_LITERAL(840, 10841, 9), // "getData_1"
QT_MOC_LITERAL(841, 10851, 9), // "getData_2"
QT_MOC_LITERAL(842, 10861, 9), // "getData_3"
QT_MOC_LITERAL(843, 10871, 9), // "getData_4"
QT_MOC_LITERAL(844, 10881, 9), // "getData_5"
QT_MOC_LITERAL(845, 10891, 9), // "getData_6"
QT_MOC_LITERAL(846, 10901, 9), // "getData_7"
QT_MOC_LITERAL(847, 10911, 9), // "getData_8"
QT_MOC_LITERAL(848, 10921, 9), // "getData_9"
QT_MOC_LITERAL(849, 10931, 10), // "getData_10"
QT_MOC_LITERAL(850, 10942, 10), // "getData_11"
QT_MOC_LITERAL(851, 10953, 10), // "getData_12"
QT_MOC_LITERAL(852, 10964, 10), // "getData_13"
QT_MOC_LITERAL(853, 10975, 10), // "getData_14"
QT_MOC_LITERAL(854, 10986, 10), // "getData_15"
QT_MOC_LITERAL(855, 10997, 10), // "getData_16"
QT_MOC_LITERAL(856, 11008, 10), // "getData_17"
QT_MOC_LITERAL(857, 11019, 10), // "getData_18"
QT_MOC_LITERAL(858, 11030, 10), // "getData_19"
QT_MOC_LITERAL(859, 11041, 10), // "getData_20"
QT_MOC_LITERAL(860, 11052, 10), // "getData_21"
QT_MOC_LITERAL(861, 11063, 10), // "getData_22"
QT_MOC_LITERAL(862, 11074, 10), // "getData_23"
QT_MOC_LITERAL(863, 11085, 10), // "getData_24"
QT_MOC_LITERAL(864, 11096, 10), // "getData_25"
QT_MOC_LITERAL(865, 11107, 10), // "getData_26"
QT_MOC_LITERAL(866, 11118, 10), // "getData_27"
QT_MOC_LITERAL(867, 11129, 10), // "getData_28"
QT_MOC_LITERAL(868, 11140, 10), // "getData_29"
QT_MOC_LITERAL(869, 11151, 10), // "getData_30"
QT_MOC_LITERAL(870, 11162, 10), // "getData_31"
QT_MOC_LITERAL(871, 11173, 10), // "getData_32"
QT_MOC_LITERAL(872, 11184, 10), // "getData_33"
QT_MOC_LITERAL(873, 11195, 10), // "getData_34"
QT_MOC_LITERAL(874, 11206, 10), // "getData_35"
QT_MOC_LITERAL(875, 11217, 10), // "getData_36"
QT_MOC_LITERAL(876, 11228, 10), // "getData_37"
QT_MOC_LITERAL(877, 11239, 10), // "getData_38"
QT_MOC_LITERAL(878, 11250, 10), // "getData_39"
QT_MOC_LITERAL(879, 11261, 10), // "getData_40"
QT_MOC_LITERAL(880, 11272, 10), // "getData_41"
QT_MOC_LITERAL(881, 11283, 10), // "getData_42"
QT_MOC_LITERAL(882, 11294, 10), // "getData_43"
QT_MOC_LITERAL(883, 11305, 10), // "getData_44"
QT_MOC_LITERAL(884, 11316, 10), // "getData_45"
QT_MOC_LITERAL(885, 11327, 10), // "getData_46"
QT_MOC_LITERAL(886, 11338, 10), // "getData_47"
QT_MOC_LITERAL(887, 11349, 10), // "getData_48"
QT_MOC_LITERAL(888, 11360, 10), // "getData_49"
QT_MOC_LITERAL(889, 11371, 10), // "getData_50"
QT_MOC_LITERAL(890, 11382, 10), // "getData_51"
QT_MOC_LITERAL(891, 11393, 10), // "getData_52"
QT_MOC_LITERAL(892, 11404, 10), // "getData_53"
QT_MOC_LITERAL(893, 11415, 10), // "getData_54"
QT_MOC_LITERAL(894, 11426, 10), // "getData_55"
QT_MOC_LITERAL(895, 11437, 10), // "getData_56"
QT_MOC_LITERAL(896, 11448, 10), // "getData_57"
QT_MOC_LITERAL(897, 11459, 10), // "getData_58"
QT_MOC_LITERAL(898, 11470, 10), // "getData_59"
QT_MOC_LITERAL(899, 11481, 10), // "getData_60"
QT_MOC_LITERAL(900, 11492, 10), // "getData_61"
QT_MOC_LITERAL(901, 11503, 10), // "getData_62"
QT_MOC_LITERAL(902, 11514, 10), // "getData_63"
QT_MOC_LITERAL(903, 11525, 10), // "getData_64"
QT_MOC_LITERAL(904, 11536, 10), // "getData_65"
QT_MOC_LITERAL(905, 11547, 10), // "getData_66"
QT_MOC_LITERAL(906, 11558, 10), // "getData_67"
QT_MOC_LITERAL(907, 11569, 10), // "getData_68"
QT_MOC_LITERAL(908, 11580, 10), // "getData_69"
QT_MOC_LITERAL(909, 11591, 10), // "getData_70"
QT_MOC_LITERAL(910, 11602, 10), // "getData_71"
QT_MOC_LITERAL(911, 11613, 10), // "getData_72"
QT_MOC_LITERAL(912, 11624, 10), // "getData_73"
QT_MOC_LITERAL(913, 11635, 10), // "getData_74"
QT_MOC_LITERAL(914, 11646, 10), // "getData_75"
QT_MOC_LITERAL(915, 11657, 10), // "getData_76"
QT_MOC_LITERAL(916, 11668, 10), // "getData_77"
QT_MOC_LITERAL(917, 11679, 10), // "getData_78"
QT_MOC_LITERAL(918, 11690, 10), // "getData_79"
QT_MOC_LITERAL(919, 11701, 10), // "getData_80"
QT_MOC_LITERAL(920, 11712, 10), // "getData_81"
QT_MOC_LITERAL(921, 11723, 10), // "getData_82"
QT_MOC_LITERAL(922, 11734, 10), // "getData_83"
QT_MOC_LITERAL(923, 11745, 10), // "getData_84"
QT_MOC_LITERAL(924, 11756, 10), // "getData_85"
QT_MOC_LITERAL(925, 11767, 10), // "getData_86"
QT_MOC_LITERAL(926, 11778, 10), // "getData_87"
QT_MOC_LITERAL(927, 11789, 10), // "getData_88"
QT_MOC_LITERAL(928, 11800, 10), // "getData_89"
QT_MOC_LITERAL(929, 11811, 10), // "getData_90"
QT_MOC_LITERAL(930, 11822, 10), // "getData_91"
QT_MOC_LITERAL(931, 11833, 10), // "getData_92"
QT_MOC_LITERAL(932, 11844, 10), // "getData_93"
QT_MOC_LITERAL(933, 11855, 10), // "getData_94"
QT_MOC_LITERAL(934, 11866, 10), // "getData_95"
QT_MOC_LITERAL(935, 11877, 10), // "getData_96"
QT_MOC_LITERAL(936, 11888, 10), // "getData_97"
QT_MOC_LITERAL(937, 11899, 10), // "getData_98"
QT_MOC_LITERAL(938, 11910, 10), // "getData_99"
QT_MOC_LITERAL(939, 11921, 11), // "getData_100"
QT_MOC_LITERAL(940, 11933, 11), // "getData_101"
QT_MOC_LITERAL(941, 11945, 11), // "getData_102"
QT_MOC_LITERAL(942, 11957, 11), // "getData_103"
QT_MOC_LITERAL(943, 11969, 11), // "getData_104"
QT_MOC_LITERAL(944, 11981, 11), // "getData_105"
QT_MOC_LITERAL(945, 11993, 11), // "getData_106"
QT_MOC_LITERAL(946, 12005, 11), // "getData_107"
QT_MOC_LITERAL(947, 12017, 11), // "getData_108"
QT_MOC_LITERAL(948, 12029, 11), // "getData_109"
QT_MOC_LITERAL(949, 12041, 11), // "getData_110"
QT_MOC_LITERAL(950, 12053, 11), // "getData_111"
QT_MOC_LITERAL(951, 12065, 11), // "getData_112"
QT_MOC_LITERAL(952, 12077, 11), // "getData_113"
QT_MOC_LITERAL(953, 12089, 11), // "getData_114"
QT_MOC_LITERAL(954, 12101, 11), // "getData_115"
QT_MOC_LITERAL(955, 12113, 11), // "getData_116"
QT_MOC_LITERAL(956, 12125, 11), // "getData_117"
QT_MOC_LITERAL(957, 12137, 11), // "getData_118"
QT_MOC_LITERAL(958, 12149, 11), // "getData_119"
QT_MOC_LITERAL(959, 12161, 11), // "getData_120"
QT_MOC_LITERAL(960, 12173, 11), // "getData_121"
QT_MOC_LITERAL(961, 12185, 11), // "getData_122"
QT_MOC_LITERAL(962, 12197, 11), // "getData_123"
QT_MOC_LITERAL(963, 12209, 11), // "getData_124"
QT_MOC_LITERAL(964, 12221, 11), // "getData_125"
QT_MOC_LITERAL(965, 12233, 11), // "getData_126"
QT_MOC_LITERAL(966, 12245, 11), // "getData_127"
QT_MOC_LITERAL(967, 12257, 11), // "getData_128"
QT_MOC_LITERAL(968, 12269, 11), // "getData_129"
QT_MOC_LITERAL(969, 12281, 11), // "getData_130"
QT_MOC_LITERAL(970, 12293, 11), // "getData_131"
QT_MOC_LITERAL(971, 12305, 11), // "getData_132"
QT_MOC_LITERAL(972, 12317, 11), // "getData_133"
QT_MOC_LITERAL(973, 12329, 11), // "getData_134"
QT_MOC_LITERAL(974, 12341, 11), // "getData_135"
QT_MOC_LITERAL(975, 12353, 11), // "getData_136"
QT_MOC_LITERAL(976, 12365, 11), // "getData_137"
QT_MOC_LITERAL(977, 12377, 11), // "getData_138"
QT_MOC_LITERAL(978, 12389, 11), // "getData_139"
QT_MOC_LITERAL(979, 12401, 11), // "getData_140"
QT_MOC_LITERAL(980, 12413, 11), // "getData_141"
QT_MOC_LITERAL(981, 12425, 11), // "getData_142"
QT_MOC_LITERAL(982, 12437, 11), // "getData_143"
QT_MOC_LITERAL(983, 12449, 11), // "getData_144"
QT_MOC_LITERAL(984, 12461, 11), // "getData_145"
QT_MOC_LITERAL(985, 12473, 11), // "getData_146"
QT_MOC_LITERAL(986, 12485, 11), // "getData_147"
QT_MOC_LITERAL(987, 12497, 11), // "getData_148"
QT_MOC_LITERAL(988, 12509, 11), // "getData_149"
QT_MOC_LITERAL(989, 12521, 11), // "getData_150"
QT_MOC_LITERAL(990, 12533, 11), // "getData_151"
QT_MOC_LITERAL(991, 12545, 11), // "getData_152"
QT_MOC_LITERAL(992, 12557, 11), // "getData_153"
QT_MOC_LITERAL(993, 12569, 11), // "getData_154"
QT_MOC_LITERAL(994, 12581, 11), // "getData_155"
QT_MOC_LITERAL(995, 12593, 11), // "getData_156"
QT_MOC_LITERAL(996, 12605, 11), // "getData_157"
QT_MOC_LITERAL(997, 12617, 11), // "getData_158"
QT_MOC_LITERAL(998, 12629, 11), // "getData_159"
QT_MOC_LITERAL(999, 12641, 11), // "getData_160"
QT_MOC_LITERAL(1000, 12653, 11), // "getData_161"
QT_MOC_LITERAL(1001, 12665, 11), // "getData_162"
QT_MOC_LITERAL(1002, 12677, 11), // "getData_163"
QT_MOC_LITERAL(1003, 12689, 11), // "getData_164"
QT_MOC_LITERAL(1004, 12701, 11), // "getData_165"
QT_MOC_LITERAL(1005, 12713, 11), // "getData_166"
QT_MOC_LITERAL(1006, 12725, 11), // "getData_167"
QT_MOC_LITERAL(1007, 12737, 11), // "getData_168"
QT_MOC_LITERAL(1008, 12749, 11), // "getData_169"
QT_MOC_LITERAL(1009, 12761, 11), // "getData_170"
QT_MOC_LITERAL(1010, 12773, 11), // "getData_171"
QT_MOC_LITERAL(1011, 12785, 11), // "getData_172"
QT_MOC_LITERAL(1012, 12797, 11), // "getData_173"
QT_MOC_LITERAL(1013, 12809, 11), // "getData_174"
QT_MOC_LITERAL(1014, 12821, 11), // "getData_175"
QT_MOC_LITERAL(1015, 12833, 11), // "getData_176"
QT_MOC_LITERAL(1016, 12845, 11), // "getData_177"
QT_MOC_LITERAL(1017, 12857, 11), // "getData_178"
QT_MOC_LITERAL(1018, 12869, 11), // "getData_179"
QT_MOC_LITERAL(1019, 12881, 11), // "getData_180"
QT_MOC_LITERAL(1020, 12893, 11), // "getData_181"
QT_MOC_LITERAL(1021, 12905, 11), // "getData_182"
QT_MOC_LITERAL(1022, 12917, 11), // "getData_183"
QT_MOC_LITERAL(1023, 12929, 11), // "getData_184"
QT_MOC_LITERAL(1024, 12941, 11), // "getData_185"
QT_MOC_LITERAL(1025, 12953, 11), // "getData_186"
QT_MOC_LITERAL(1026, 12965, 11), // "getData_187"
QT_MOC_LITERAL(1027, 12977, 11), // "getData_188"
QT_MOC_LITERAL(1028, 12989, 11), // "getData_189"
QT_MOC_LITERAL(1029, 13001, 11), // "getData_190"
QT_MOC_LITERAL(1030, 13013, 11), // "getData_191"
QT_MOC_LITERAL(1031, 13025, 11), // "getData_192"
QT_MOC_LITERAL(1032, 13037, 11), // "getData_193"
QT_MOC_LITERAL(1033, 13049, 11), // "getData_194"
QT_MOC_LITERAL(1034, 13061, 11), // "getData_195"
QT_MOC_LITERAL(1035, 13073, 11), // "getData_196"
QT_MOC_LITERAL(1036, 13085, 11), // "getData_197"
QT_MOC_LITERAL(1037, 13097, 11), // "getData_198"
QT_MOC_LITERAL(1038, 13109, 11), // "getData_199"
QT_MOC_LITERAL(1039, 13121, 10), // "flightTime"
QT_MOC_LITERAL(1040, 13132, 8), // "objectID"
QT_MOC_LITERAL(1041, 13141, 6), // "flight"
QT_MOC_LITERAL(1042, 13148, 5), // "entry"
QT_MOC_LITERAL(1043, 13154, 10), // "instanceID"
QT_MOC_LITERAL(1044, 13165, 4), // "size"
QT_MOC_LITERAL(1045, 13170, 4), // "type"
QT_MOC_LITERAL(1046, 13175, 5), // "data0"
QT_MOC_LITERAL(1047, 13181, 5), // "data1"
QT_MOC_LITERAL(1048, 13187, 5), // "data2"
QT_MOC_LITERAL(1049, 13193, 5), // "data3"
QT_MOC_LITERAL(1050, 13199, 5), // "data4"
QT_MOC_LITERAL(1051, 13205, 5), // "data5"
QT_MOC_LITERAL(1052, 13211, 5), // "data6"
QT_MOC_LITERAL(1053, 13217, 5), // "data7"
QT_MOC_LITERAL(1054, 13223, 5), // "data8"
QT_MOC_LITERAL(1055, 13229, 5), // "data9"
QT_MOC_LITERAL(1056, 13235, 6), // "data10"
QT_MOC_LITERAL(1057, 13242, 6), // "data11"
QT_MOC_LITERAL(1058, 13249, 6), // "data12"
QT_MOC_LITERAL(1059, 13256, 6), // "data13"
QT_MOC_LITERAL(1060, 13263, 6), // "data14"
QT_MOC_LITERAL(1061, 13270, 6), // "data15"
QT_MOC_LITERAL(1062, 13277, 6), // "data16"
QT_MOC_LITERAL(1063, 13284, 6), // "data17"
QT_MOC_LITERAL(1064, 13291, 6), // "data18"
QT_MOC_LITERAL(1065, 13298, 6), // "data19"
QT_MOC_LITERAL(1066, 13305, 6), // "data20"
QT_MOC_LITERAL(1067, 13312, 6), // "data21"
QT_MOC_LITERAL(1068, 13319, 6), // "data22"
QT_MOC_LITERAL(1069, 13326, 6), // "data23"
QT_MOC_LITERAL(1070, 13333, 6), // "data24"
QT_MOC_LITERAL(1071, 13340, 6), // "data25"
QT_MOC_LITERAL(1072, 13347, 6), // "data26"
QT_MOC_LITERAL(1073, 13354, 6), // "data27"
QT_MOC_LITERAL(1074, 13361, 6), // "data28"
QT_MOC_LITERAL(1075, 13368, 6), // "data29"
QT_MOC_LITERAL(1076, 13375, 6), // "data30"
QT_MOC_LITERAL(1077, 13382, 6), // "data31"
QT_MOC_LITERAL(1078, 13389, 6), // "data32"
QT_MOC_LITERAL(1079, 13396, 6), // "data33"
QT_MOC_LITERAL(1080, 13403, 6), // "data34"
QT_MOC_LITERAL(1081, 13410, 6), // "data35"
QT_MOC_LITERAL(1082, 13417, 6), // "data36"
QT_MOC_LITERAL(1083, 13424, 6), // "data37"
QT_MOC_LITERAL(1084, 13431, 6), // "data38"
QT_MOC_LITERAL(1085, 13438, 6), // "data39"
QT_MOC_LITERAL(1086, 13445, 6), // "data40"
QT_MOC_LITERAL(1087, 13452, 6), // "data41"
QT_MOC_LITERAL(1088, 13459, 6), // "data42"
QT_MOC_LITERAL(1089, 13466, 6), // "data43"
QT_MOC_LITERAL(1090, 13473, 6), // "data44"
QT_MOC_LITERAL(1091, 13480, 6), // "data45"
QT_MOC_LITERAL(1092, 13487, 6), // "data46"
QT_MOC_LITERAL(1093, 13494, 6), // "data47"
QT_MOC_LITERAL(1094, 13501, 6), // "data48"
QT_MOC_LITERAL(1095, 13508, 6), // "data49"
QT_MOC_LITERAL(1096, 13515, 6), // "data50"
QT_MOC_LITERAL(1097, 13522, 6), // "data51"
QT_MOC_LITERAL(1098, 13529, 6), // "data52"
QT_MOC_LITERAL(1099, 13536, 6), // "data53"
QT_MOC_LITERAL(1100, 13543, 6), // "data54"
QT_MOC_LITERAL(1101, 13550, 6), // "data55"
QT_MOC_LITERAL(1102, 13557, 6), // "data56"
QT_MOC_LITERAL(1103, 13564, 6), // "data57"
QT_MOC_LITERAL(1104, 13571, 6), // "data58"
QT_MOC_LITERAL(1105, 13578, 6), // "data59"
QT_MOC_LITERAL(1106, 13585, 6), // "data60"
QT_MOC_LITERAL(1107, 13592, 6), // "data61"
QT_MOC_LITERAL(1108, 13599, 6), // "data62"
QT_MOC_LITERAL(1109, 13606, 6), // "data63"
QT_MOC_LITERAL(1110, 13613, 6), // "data64"
QT_MOC_LITERAL(1111, 13620, 6), // "data65"
QT_MOC_LITERAL(1112, 13627, 6), // "data66"
QT_MOC_LITERAL(1113, 13634, 6), // "data67"
QT_MOC_LITERAL(1114, 13641, 6), // "data68"
QT_MOC_LITERAL(1115, 13648, 6), // "data69"
QT_MOC_LITERAL(1116, 13655, 6), // "data70"
QT_MOC_LITERAL(1117, 13662, 6), // "data71"
QT_MOC_LITERAL(1118, 13669, 6), // "data72"
QT_MOC_LITERAL(1119, 13676, 6), // "data73"
QT_MOC_LITERAL(1120, 13683, 6), // "data74"
QT_MOC_LITERAL(1121, 13690, 6), // "data75"
QT_MOC_LITERAL(1122, 13697, 6), // "data76"
QT_MOC_LITERAL(1123, 13704, 6), // "data77"
QT_MOC_LITERAL(1124, 13711, 6), // "data78"
QT_MOC_LITERAL(1125, 13718, 6), // "data79"
QT_MOC_LITERAL(1126, 13725, 6), // "data80"
QT_MOC_LITERAL(1127, 13732, 6), // "data81"
QT_MOC_LITERAL(1128, 13739, 6), // "data82"
QT_MOC_LITERAL(1129, 13746, 6), // "data83"
QT_MOC_LITERAL(1130, 13753, 6), // "data84"
QT_MOC_LITERAL(1131, 13760, 6), // "data85"
QT_MOC_LITERAL(1132, 13767, 6), // "data86"
QT_MOC_LITERAL(1133, 13774, 6), // "data87"
QT_MOC_LITERAL(1134, 13781, 6), // "data88"
QT_MOC_LITERAL(1135, 13788, 6), // "data89"
QT_MOC_LITERAL(1136, 13795, 6), // "data90"
QT_MOC_LITERAL(1137, 13802, 6), // "data91"
QT_MOC_LITERAL(1138, 13809, 6), // "data92"
QT_MOC_LITERAL(1139, 13816, 6), // "data93"
QT_MOC_LITERAL(1140, 13823, 6), // "data94"
QT_MOC_LITERAL(1141, 13830, 6), // "data95"
QT_MOC_LITERAL(1142, 13837, 6), // "data96"
QT_MOC_LITERAL(1143, 13844, 6), // "data97"
QT_MOC_LITERAL(1144, 13851, 6), // "data98"
QT_MOC_LITERAL(1145, 13858, 6), // "data99"
QT_MOC_LITERAL(1146, 13865, 7), // "data100"
QT_MOC_LITERAL(1147, 13873, 7), // "data101"
QT_MOC_LITERAL(1148, 13881, 7), // "data102"
QT_MOC_LITERAL(1149, 13889, 7), // "data103"
QT_MOC_LITERAL(1150, 13897, 7), // "data104"
QT_MOC_LITERAL(1151, 13905, 7), // "data105"
QT_MOC_LITERAL(1152, 13913, 7), // "data106"
QT_MOC_LITERAL(1153, 13921, 7), // "data107"
QT_MOC_LITERAL(1154, 13929, 7), // "data108"
QT_MOC_LITERAL(1155, 13937, 7), // "data109"
QT_MOC_LITERAL(1156, 13945, 7), // "data110"
QT_MOC_LITERAL(1157, 13953, 7), // "data111"
QT_MOC_LITERAL(1158, 13961, 7), // "data112"
QT_MOC_LITERAL(1159, 13969, 7), // "data113"
QT_MOC_LITERAL(1160, 13977, 7), // "data114"
QT_MOC_LITERAL(1161, 13985, 7), // "data115"
QT_MOC_LITERAL(1162, 13993, 7), // "data116"
QT_MOC_LITERAL(1163, 14001, 7), // "data117"
QT_MOC_LITERAL(1164, 14009, 7), // "data118"
QT_MOC_LITERAL(1165, 14017, 7), // "data119"
QT_MOC_LITERAL(1166, 14025, 7), // "data120"
QT_MOC_LITERAL(1167, 14033, 7), // "data121"
QT_MOC_LITERAL(1168, 14041, 7), // "data122"
QT_MOC_LITERAL(1169, 14049, 7), // "data123"
QT_MOC_LITERAL(1170, 14057, 7), // "data124"
QT_MOC_LITERAL(1171, 14065, 7), // "data125"
QT_MOC_LITERAL(1172, 14073, 7), // "data126"
QT_MOC_LITERAL(1173, 14081, 7), // "data127"
QT_MOC_LITERAL(1174, 14089, 7), // "data128"
QT_MOC_LITERAL(1175, 14097, 7), // "data129"
QT_MOC_LITERAL(1176, 14105, 7), // "data130"
QT_MOC_LITERAL(1177, 14113, 7), // "data131"
QT_MOC_LITERAL(1178, 14121, 7), // "data132"
QT_MOC_LITERAL(1179, 14129, 7), // "data133"
QT_MOC_LITERAL(1180, 14137, 7), // "data134"
QT_MOC_LITERAL(1181, 14145, 7), // "data135"
QT_MOC_LITERAL(1182, 14153, 7), // "data136"
QT_MOC_LITERAL(1183, 14161, 7), // "data137"
QT_MOC_LITERAL(1184, 14169, 7), // "data138"
QT_MOC_LITERAL(1185, 14177, 7), // "data139"
QT_MOC_LITERAL(1186, 14185, 7), // "data140"
QT_MOC_LITERAL(1187, 14193, 7), // "data141"
QT_MOC_LITERAL(1188, 14201, 7), // "data142"
QT_MOC_LITERAL(1189, 14209, 7), // "data143"
QT_MOC_LITERAL(1190, 14217, 7), // "data144"
QT_MOC_LITERAL(1191, 14225, 7), // "data145"
QT_MOC_LITERAL(1192, 14233, 7), // "data146"
QT_MOC_LITERAL(1193, 14241, 7), // "data147"
QT_MOC_LITERAL(1194, 14249, 7), // "data148"
QT_MOC_LITERAL(1195, 14257, 7), // "data149"
QT_MOC_LITERAL(1196, 14265, 7), // "data150"
QT_MOC_LITERAL(1197, 14273, 7), // "data151"
QT_MOC_LITERAL(1198, 14281, 7), // "data152"
QT_MOC_LITERAL(1199, 14289, 7), // "data153"
QT_MOC_LITERAL(1200, 14297, 7), // "data154"
QT_MOC_LITERAL(1201, 14305, 7), // "data155"
QT_MOC_LITERAL(1202, 14313, 7), // "data156"
QT_MOC_LITERAL(1203, 14321, 7), // "data157"
QT_MOC_LITERAL(1204, 14329, 7), // "data158"
QT_MOC_LITERAL(1205, 14337, 7), // "data159"
QT_MOC_LITERAL(1206, 14345, 7), // "data160"
QT_MOC_LITERAL(1207, 14353, 7), // "data161"
QT_MOC_LITERAL(1208, 14361, 7), // "data162"
QT_MOC_LITERAL(1209, 14369, 7), // "data163"
QT_MOC_LITERAL(1210, 14377, 7), // "data164"
QT_MOC_LITERAL(1211, 14385, 7), // "data165"
QT_MOC_LITERAL(1212, 14393, 7), // "data166"
QT_MOC_LITERAL(1213, 14401, 7), // "data167"
QT_MOC_LITERAL(1214, 14409, 7), // "data168"
QT_MOC_LITERAL(1215, 14417, 7), // "data169"
QT_MOC_LITERAL(1216, 14425, 7), // "data170"
QT_MOC_LITERAL(1217, 14433, 7), // "data171"
QT_MOC_LITERAL(1218, 14441, 7), // "data172"
QT_MOC_LITERAL(1219, 14449, 7), // "data173"
QT_MOC_LITERAL(1220, 14457, 7), // "data174"
QT_MOC_LITERAL(1221, 14465, 7), // "data175"
QT_MOC_LITERAL(1222, 14473, 7), // "data176"
QT_MOC_LITERAL(1223, 14481, 7), // "data177"
QT_MOC_LITERAL(1224, 14489, 7), // "data178"
QT_MOC_LITERAL(1225, 14497, 7), // "data179"
QT_MOC_LITERAL(1226, 14505, 7), // "data180"
QT_MOC_LITERAL(1227, 14513, 7), // "data181"
QT_MOC_LITERAL(1228, 14521, 7), // "data182"
QT_MOC_LITERAL(1229, 14529, 7), // "data183"
QT_MOC_LITERAL(1230, 14537, 7), // "data184"
QT_MOC_LITERAL(1231, 14545, 7), // "data185"
QT_MOC_LITERAL(1232, 14553, 7), // "data186"
QT_MOC_LITERAL(1233, 14561, 7), // "data187"
QT_MOC_LITERAL(1234, 14569, 7), // "data188"
QT_MOC_LITERAL(1235, 14577, 7), // "data189"
QT_MOC_LITERAL(1236, 14585, 7), // "data190"
QT_MOC_LITERAL(1237, 14593, 7), // "data191"
QT_MOC_LITERAL(1238, 14601, 7), // "data192"
QT_MOC_LITERAL(1239, 14609, 7), // "data193"
QT_MOC_LITERAL(1240, 14617, 7), // "data194"
QT_MOC_LITERAL(1241, 14625, 7), // "data195"
QT_MOC_LITERAL(1242, 14633, 7), // "data196"
QT_MOC_LITERAL(1243, 14641, 7), // "data197"
QT_MOC_LITERAL(1244, 14649, 7), // "data198"
QT_MOC_LITERAL(1245, 14657, 7), // "data199"
QT_MOC_LITERAL(1246, 14665, 10), // "FlightTime"
QT_MOC_LITERAL(1247, 14676, 8), // "ObjectID"
QT_MOC_LITERAL(1248, 14685, 6), // "Flight"
QT_MOC_LITERAL(1249, 14692, 5), // "Entry"
QT_MOC_LITERAL(1250, 14698, 10), // "InstanceID"
QT_MOC_LITERAL(1251, 14709, 4), // "Size"
QT_MOC_LITERAL(1252, 14714, 4), // "Type"
QT_MOC_LITERAL(1253, 14719, 6), // "Data_0"
QT_MOC_LITERAL(1254, 14726, 6), // "Data_1"
QT_MOC_LITERAL(1255, 14733, 6), // "Data_2"
QT_MOC_LITERAL(1256, 14740, 6), // "Data_3"
QT_MOC_LITERAL(1257, 14747, 6), // "Data_4"
QT_MOC_LITERAL(1258, 14754, 6), // "Data_5"
QT_MOC_LITERAL(1259, 14761, 6), // "Data_6"
QT_MOC_LITERAL(1260, 14768, 6), // "Data_7"
QT_MOC_LITERAL(1261, 14775, 6), // "Data_8"
QT_MOC_LITERAL(1262, 14782, 6), // "Data_9"
QT_MOC_LITERAL(1263, 14789, 7), // "Data_10"
QT_MOC_LITERAL(1264, 14797, 7), // "Data_11"
QT_MOC_LITERAL(1265, 14805, 7), // "Data_12"
QT_MOC_LITERAL(1266, 14813, 7), // "Data_13"
QT_MOC_LITERAL(1267, 14821, 7), // "Data_14"
QT_MOC_LITERAL(1268, 14829, 7), // "Data_15"
QT_MOC_LITERAL(1269, 14837, 7), // "Data_16"
QT_MOC_LITERAL(1270, 14845, 7), // "Data_17"
QT_MOC_LITERAL(1271, 14853, 7), // "Data_18"
QT_MOC_LITERAL(1272, 14861, 7), // "Data_19"
QT_MOC_LITERAL(1273, 14869, 7), // "Data_20"
QT_MOC_LITERAL(1274, 14877, 7), // "Data_21"
QT_MOC_LITERAL(1275, 14885, 7), // "Data_22"
QT_MOC_LITERAL(1276, 14893, 7), // "Data_23"
QT_MOC_LITERAL(1277, 14901, 7), // "Data_24"
QT_MOC_LITERAL(1278, 14909, 7), // "Data_25"
QT_MOC_LITERAL(1279, 14917, 7), // "Data_26"
QT_MOC_LITERAL(1280, 14925, 7), // "Data_27"
QT_MOC_LITERAL(1281, 14933, 7), // "Data_28"
QT_MOC_LITERAL(1282, 14941, 7), // "Data_29"
QT_MOC_LITERAL(1283, 14949, 7), // "Data_30"
QT_MOC_LITERAL(1284, 14957, 7), // "Data_31"
QT_MOC_LITERAL(1285, 14965, 7), // "Data_32"
QT_MOC_LITERAL(1286, 14973, 7), // "Data_33"
QT_MOC_LITERAL(1287, 14981, 7), // "Data_34"
QT_MOC_LITERAL(1288, 14989, 7), // "Data_35"
QT_MOC_LITERAL(1289, 14997, 7), // "Data_36"
QT_MOC_LITERAL(1290, 15005, 7), // "Data_37"
QT_MOC_LITERAL(1291, 15013, 7), // "Data_38"
QT_MOC_LITERAL(1292, 15021, 7), // "Data_39"
QT_MOC_LITERAL(1293, 15029, 7), // "Data_40"
QT_MOC_LITERAL(1294, 15037, 7), // "Data_41"
QT_MOC_LITERAL(1295, 15045, 7), // "Data_42"
QT_MOC_LITERAL(1296, 15053, 7), // "Data_43"
QT_MOC_LITERAL(1297, 15061, 7), // "Data_44"
QT_MOC_LITERAL(1298, 15069, 7), // "Data_45"
QT_MOC_LITERAL(1299, 15077, 7), // "Data_46"
QT_MOC_LITERAL(1300, 15085, 7), // "Data_47"
QT_MOC_LITERAL(1301, 15093, 7), // "Data_48"
QT_MOC_LITERAL(1302, 15101, 7), // "Data_49"
QT_MOC_LITERAL(1303, 15109, 7), // "Data_50"
QT_MOC_LITERAL(1304, 15117, 7), // "Data_51"
QT_MOC_LITERAL(1305, 15125, 7), // "Data_52"
QT_MOC_LITERAL(1306, 15133, 7), // "Data_53"
QT_MOC_LITERAL(1307, 15141, 7), // "Data_54"
QT_MOC_LITERAL(1308, 15149, 7), // "Data_55"
QT_MOC_LITERAL(1309, 15157, 7), // "Data_56"
QT_MOC_LITERAL(1310, 15165, 7), // "Data_57"
QT_MOC_LITERAL(1311, 15173, 7), // "Data_58"
QT_MOC_LITERAL(1312, 15181, 7), // "Data_59"
QT_MOC_LITERAL(1313, 15189, 7), // "Data_60"
QT_MOC_LITERAL(1314, 15197, 7), // "Data_61"
QT_MOC_LITERAL(1315, 15205, 7), // "Data_62"
QT_MOC_LITERAL(1316, 15213, 7), // "Data_63"
QT_MOC_LITERAL(1317, 15221, 7), // "Data_64"
QT_MOC_LITERAL(1318, 15229, 7), // "Data_65"
QT_MOC_LITERAL(1319, 15237, 7), // "Data_66"
QT_MOC_LITERAL(1320, 15245, 7), // "Data_67"
QT_MOC_LITERAL(1321, 15253, 7), // "Data_68"
QT_MOC_LITERAL(1322, 15261, 7), // "Data_69"
QT_MOC_LITERAL(1323, 15269, 7), // "Data_70"
QT_MOC_LITERAL(1324, 15277, 7), // "Data_71"
QT_MOC_LITERAL(1325, 15285, 7), // "Data_72"
QT_MOC_LITERAL(1326, 15293, 7), // "Data_73"
QT_MOC_LITERAL(1327, 15301, 7), // "Data_74"
QT_MOC_LITERAL(1328, 15309, 7), // "Data_75"
QT_MOC_LITERAL(1329, 15317, 7), // "Data_76"
QT_MOC_LITERAL(1330, 15325, 7), // "Data_77"
QT_MOC_LITERAL(1331, 15333, 7), // "Data_78"
QT_MOC_LITERAL(1332, 15341, 7), // "Data_79"
QT_MOC_LITERAL(1333, 15349, 7), // "Data_80"
QT_MOC_LITERAL(1334, 15357, 7), // "Data_81"
QT_MOC_LITERAL(1335, 15365, 7), // "Data_82"
QT_MOC_LITERAL(1336, 15373, 7), // "Data_83"
QT_MOC_LITERAL(1337, 15381, 7), // "Data_84"
QT_MOC_LITERAL(1338, 15389, 7), // "Data_85"
QT_MOC_LITERAL(1339, 15397, 7), // "Data_86"
QT_MOC_LITERAL(1340, 15405, 7), // "Data_87"
QT_MOC_LITERAL(1341, 15413, 7), // "Data_88"
QT_MOC_LITERAL(1342, 15421, 7), // "Data_89"
QT_MOC_LITERAL(1343, 15429, 7), // "Data_90"
QT_MOC_LITERAL(1344, 15437, 7), // "Data_91"
QT_MOC_LITERAL(1345, 15445, 7), // "Data_92"
QT_MOC_LITERAL(1346, 15453, 7), // "Data_93"
QT_MOC_LITERAL(1347, 15461, 7), // "Data_94"
QT_MOC_LITERAL(1348, 15469, 7), // "Data_95"
QT_MOC_LITERAL(1349, 15477, 7), // "Data_96"
QT_MOC_LITERAL(1350, 15485, 7), // "Data_97"
QT_MOC_LITERAL(1351, 15493, 7), // "Data_98"
QT_MOC_LITERAL(1352, 15501, 7), // "Data_99"
QT_MOC_LITERAL(1353, 15509, 8), // "Data_100"
QT_MOC_LITERAL(1354, 15518, 8), // "Data_101"
QT_MOC_LITERAL(1355, 15527, 8), // "Data_102"
QT_MOC_LITERAL(1356, 15536, 8), // "Data_103"
QT_MOC_LITERAL(1357, 15545, 8), // "Data_104"
QT_MOC_LITERAL(1358, 15554, 8), // "Data_105"
QT_MOC_LITERAL(1359, 15563, 8), // "Data_106"
QT_MOC_LITERAL(1360, 15572, 8), // "Data_107"
QT_MOC_LITERAL(1361, 15581, 8), // "Data_108"
QT_MOC_LITERAL(1362, 15590, 8), // "Data_109"
QT_MOC_LITERAL(1363, 15599, 8), // "Data_110"
QT_MOC_LITERAL(1364, 15608, 8), // "Data_111"
QT_MOC_LITERAL(1365, 15617, 8), // "Data_112"
QT_MOC_LITERAL(1366, 15626, 8), // "Data_113"
QT_MOC_LITERAL(1367, 15635, 8), // "Data_114"
QT_MOC_LITERAL(1368, 15644, 8), // "Data_115"
QT_MOC_LITERAL(1369, 15653, 8), // "Data_116"
QT_MOC_LITERAL(1370, 15662, 8), // "Data_117"
QT_MOC_LITERAL(1371, 15671, 8), // "Data_118"
QT_MOC_LITERAL(1372, 15680, 8), // "Data_119"
QT_MOC_LITERAL(1373, 15689, 8), // "Data_120"
QT_MOC_LITERAL(1374, 15698, 8), // "Data_121"
QT_MOC_LITERAL(1375, 15707, 8), // "Data_122"
QT_MOC_LITERAL(1376, 15716, 8), // "Data_123"
QT_MOC_LITERAL(1377, 15725, 8), // "Data_124"
QT_MOC_LITERAL(1378, 15734, 8), // "Data_125"
QT_MOC_LITERAL(1379, 15743, 8), // "Data_126"
QT_MOC_LITERAL(1380, 15752, 8), // "Data_127"
QT_MOC_LITERAL(1381, 15761, 8), // "Data_128"
QT_MOC_LITERAL(1382, 15770, 8), // "Data_129"
QT_MOC_LITERAL(1383, 15779, 8), // "Data_130"
QT_MOC_LITERAL(1384, 15788, 8), // "Data_131"
QT_MOC_LITERAL(1385, 15797, 8), // "Data_132"
QT_MOC_LITERAL(1386, 15806, 8), // "Data_133"
QT_MOC_LITERAL(1387, 15815, 8), // "Data_134"
QT_MOC_LITERAL(1388, 15824, 8), // "Data_135"
QT_MOC_LITERAL(1389, 15833, 8), // "Data_136"
QT_MOC_LITERAL(1390, 15842, 8), // "Data_137"
QT_MOC_LITERAL(1391, 15851, 8), // "Data_138"
QT_MOC_LITERAL(1392, 15860, 8), // "Data_139"
QT_MOC_LITERAL(1393, 15869, 8), // "Data_140"
QT_MOC_LITERAL(1394, 15878, 8), // "Data_141"
QT_MOC_LITERAL(1395, 15887, 8), // "Data_142"
QT_MOC_LITERAL(1396, 15896, 8), // "Data_143"
QT_MOC_LITERAL(1397, 15905, 8), // "Data_144"
QT_MOC_LITERAL(1398, 15914, 8), // "Data_145"
QT_MOC_LITERAL(1399, 15923, 8), // "Data_146"
QT_MOC_LITERAL(1400, 15932, 8), // "Data_147"
QT_MOC_LITERAL(1401, 15941, 8), // "Data_148"
QT_MOC_LITERAL(1402, 15950, 8), // "Data_149"
QT_MOC_LITERAL(1403, 15959, 8), // "Data_150"
QT_MOC_LITERAL(1404, 15968, 8), // "Data_151"
QT_MOC_LITERAL(1405, 15977, 8), // "Data_152"
QT_MOC_LITERAL(1406, 15986, 8), // "Data_153"
QT_MOC_LITERAL(1407, 15995, 8), // "Data_154"
QT_MOC_LITERAL(1408, 16004, 8), // "Data_155"
QT_MOC_LITERAL(1409, 16013, 8), // "Data_156"
QT_MOC_LITERAL(1410, 16022, 8), // "Data_157"
QT_MOC_LITERAL(1411, 16031, 8), // "Data_158"
QT_MOC_LITERAL(1412, 16040, 8), // "Data_159"
QT_MOC_LITERAL(1413, 16049, 8), // "Data_160"
QT_MOC_LITERAL(1414, 16058, 8), // "Data_161"
QT_MOC_LITERAL(1415, 16067, 8), // "Data_162"
QT_MOC_LITERAL(1416, 16076, 8), // "Data_163"
QT_MOC_LITERAL(1417, 16085, 8), // "Data_164"
QT_MOC_LITERAL(1418, 16094, 8), // "Data_165"
QT_MOC_LITERAL(1419, 16103, 8), // "Data_166"
QT_MOC_LITERAL(1420, 16112, 8), // "Data_167"
QT_MOC_LITERAL(1421, 16121, 8), // "Data_168"
QT_MOC_LITERAL(1422, 16130, 8), // "Data_169"
QT_MOC_LITERAL(1423, 16139, 8), // "Data_170"
QT_MOC_LITERAL(1424, 16148, 8), // "Data_171"
QT_MOC_LITERAL(1425, 16157, 8), // "Data_172"
QT_MOC_LITERAL(1426, 16166, 8), // "Data_173"
QT_MOC_LITERAL(1427, 16175, 8), // "Data_174"
QT_MOC_LITERAL(1428, 16184, 8), // "Data_175"
QT_MOC_LITERAL(1429, 16193, 8), // "Data_176"
QT_MOC_LITERAL(1430, 16202, 8), // "Data_177"
QT_MOC_LITERAL(1431, 16211, 8), // "Data_178"
QT_MOC_LITERAL(1432, 16220, 8), // "Data_179"
QT_MOC_LITERAL(1433, 16229, 8), // "Data_180"
QT_MOC_LITERAL(1434, 16238, 8), // "Data_181"
QT_MOC_LITERAL(1435, 16247, 8), // "Data_182"
QT_MOC_LITERAL(1436, 16256, 8), // "Data_183"
QT_MOC_LITERAL(1437, 16265, 8), // "Data_184"
QT_MOC_LITERAL(1438, 16274, 8), // "Data_185"
QT_MOC_LITERAL(1439, 16283, 8), // "Data_186"
QT_MOC_LITERAL(1440, 16292, 8), // "Data_187"
QT_MOC_LITERAL(1441, 16301, 8), // "Data_188"
QT_MOC_LITERAL(1442, 16310, 8), // "Data_189"
QT_MOC_LITERAL(1443, 16319, 8), // "Data_190"
QT_MOC_LITERAL(1444, 16328, 8), // "Data_191"
QT_MOC_LITERAL(1445, 16337, 8), // "Data_192"
QT_MOC_LITERAL(1446, 16346, 8), // "Data_193"
QT_MOC_LITERAL(1447, 16355, 8), // "Data_194"
QT_MOC_LITERAL(1448, 16364, 8), // "Data_195"
QT_MOC_LITERAL(1449, 16373, 8), // "Data_196"
QT_MOC_LITERAL(1450, 16382, 8), // "Data_197"
QT_MOC_LITERAL(1451, 16391, 8), // "Data_198"
QT_MOC_LITERAL(1452, 16400, 8) // "Data_199"

    },
    "DebugLogEntry\0flightTimeChanged\0\0value\0"
    "FlightTimeChanged\0objectIDChanged\0"
    "ObjectIDChanged\0flightChanged\0"
    "FlightChanged\0entryChanged\0EntryChanged\0"
    "instanceIDChanged\0InstanceIDChanged\0"
    "sizeChanged\0SizeChanged\0typeChanged\0"
    "DebugLogEntry_Type::Enum\0TypeChanged\0"
    "dataChanged\0index\0DataChanged\0"
    "data0Changed\0Data_0Changed\0data1Changed\0"
    "Data_1Changed\0data2Changed\0Data_2Changed\0"
    "data3Changed\0Data_3Changed\0data4Changed\0"
    "Data_4Changed\0data5Changed\0Data_5Changed\0"
    "data6Changed\0Data_6Changed\0data7Changed\0"
    "Data_7Changed\0data8Changed\0Data_8Changed\0"
    "data9Changed\0Data_9Changed\0data10Changed\0"
    "Data_10Changed\0data11Changed\0"
    "Data_11Changed\0data12Changed\0"
    "Data_12Changed\0data13Changed\0"
    "Data_13Changed\0data14Changed\0"
    "Data_14Changed\0data15Changed\0"
    "Data_15Changed\0data16Changed\0"
    "Data_16Changed\0data17Changed\0"
    "Data_17Changed\0data18Changed\0"
    "Data_18Changed\0data19Changed\0"
    "Data_19Changed\0data20Changed\0"
    "Data_20Changed\0data21Changed\0"
    "Data_21Changed\0data22Changed\0"
    "Data_22Changed\0data23Changed\0"
    "Data_23Changed\0data24Changed\0"
    "Data_24Changed\0data25Changed\0"
    "Data_25Changed\0data26Changed\0"
    "Data_26Changed\0data27Changed\0"
    "Data_27Changed\0data28Changed\0"
    "Data_28Changed\0data29Changed\0"
    "Data_29Changed\0data30Changed\0"
    "Data_30Changed\0data31Changed\0"
    "Data_31Changed\0data32Changed\0"
    "Data_32Changed\0data33Changed\0"
    "Data_33Changed\0data34Changed\0"
    "Data_34Changed\0data35Changed\0"
    "Data_35Changed\0data36Changed\0"
    "Data_36Changed\0data37Changed\0"
    "Data_37Changed\0data38Changed\0"
    "Data_38Changed\0data39Changed\0"
    "Data_39Changed\0data40Changed\0"
    "Data_40Changed\0data41Changed\0"
    "Data_41Changed\0data42Changed\0"
    "Data_42Changed\0data43Changed\0"
    "Data_43Changed\0data44Changed\0"
    "Data_44Changed\0data45Changed\0"
    "Data_45Changed\0data46Changed\0"
    "Data_46Changed\0data47Changed\0"
    "Data_47Changed\0data48Changed\0"
    "Data_48Changed\0data49Changed\0"
    "Data_49Changed\0data50Changed\0"
    "Data_50Changed\0data51Changed\0"
    "Data_51Changed\0data52Changed\0"
    "Data_52Changed\0data53Changed\0"
    "Data_53Changed\0data54Changed\0"
    "Data_54Changed\0data55Changed\0"
    "Data_55Changed\0data56Changed\0"
    "Data_56Changed\0data57Changed\0"
    "Data_57Changed\0data58Changed\0"
    "Data_58Changed\0data59Changed\0"
    "Data_59Changed\0data60Changed\0"
    "Data_60Changed\0data61Changed\0"
    "Data_61Changed\0data62Changed\0"
    "Data_62Changed\0data63Changed\0"
    "Data_63Changed\0data64Changed\0"
    "Data_64Changed\0data65Changed\0"
    "Data_65Changed\0data66Changed\0"
    "Data_66Changed\0data67Changed\0"
    "Data_67Changed\0data68Changed\0"
    "Data_68Changed\0data69Changed\0"
    "Data_69Changed\0data70Changed\0"
    "Data_70Changed\0data71Changed\0"
    "Data_71Changed\0data72Changed\0"
    "Data_72Changed\0data73Changed\0"
    "Data_73Changed\0data74Changed\0"
    "Data_74Changed\0data75Changed\0"
    "Data_75Changed\0data76Changed\0"
    "Data_76Changed\0data77Changed\0"
    "Data_77Changed\0data78Changed\0"
    "Data_78Changed\0data79Changed\0"
    "Data_79Changed\0data80Changed\0"
    "Data_80Changed\0data81Changed\0"
    "Data_81Changed\0data82Changed\0"
    "Data_82Changed\0data83Changed\0"
    "Data_83Changed\0data84Changed\0"
    "Data_84Changed\0data85Changed\0"
    "Data_85Changed\0data86Changed\0"
    "Data_86Changed\0data87Changed\0"
    "Data_87Changed\0data88Changed\0"
    "Data_88Changed\0data89Changed\0"
    "Data_89Changed\0data90Changed\0"
    "Data_90Changed\0data91Changed\0"
    "Data_91Changed\0data92Changed\0"
    "Data_92Changed\0data93Changed\0"
    "Data_93Changed\0data94Changed\0"
    "Data_94Changed\0data95Changed\0"
    "Data_95Changed\0data96Changed\0"
    "Data_96Changed\0data97Changed\0"
    "Data_97Changed\0data98Changed\0"
    "Data_98Changed\0data99Changed\0"
    "Data_99Changed\0data100Changed\0"
    "Data_100Changed\0data101Changed\0"
    "Data_101Changed\0data102Changed\0"
    "Data_102Changed\0data103Changed\0"
    "Data_103Changed\0data104Changed\0"
    "Data_104Changed\0data105Changed\0"
    "Data_105Changed\0data106Changed\0"
    "Data_106Changed\0data107Changed\0"
    "Data_107Changed\0data108Changed\0"
    "Data_108Changed\0data109Changed\0"
    "Data_109Changed\0data110Changed\0"
    "Data_110Changed\0data111Changed\0"
    "Data_111Changed\0data112Changed\0"
    "Data_112Changed\0data113Changed\0"
    "Data_113Changed\0data114Changed\0"
    "Data_114Changed\0data115Changed\0"
    "Data_115Changed\0data116Changed\0"
    "Data_116Changed\0data117Changed\0"
    "Data_117Changed\0data118Changed\0"
    "Data_118Changed\0data119Changed\0"
    "Data_119Changed\0data120Changed\0"
    "Data_120Changed\0data121Changed\0"
    "Data_121Changed\0data122Changed\0"
    "Data_122Changed\0data123Changed\0"
    "Data_123Changed\0data124Changed\0"
    "Data_124Changed\0data125Changed\0"
    "Data_125Changed\0data126Changed\0"
    "Data_126Changed\0data127Changed\0"
    "Data_127Changed\0data128Changed\0"
    "Data_128Changed\0data129Changed\0"
    "Data_129Changed\0data130Changed\0"
    "Data_130Changed\0data131Changed\0"
    "Data_131Changed\0data132Changed\0"
    "Data_132Changed\0data133Changed\0"
    "Data_133Changed\0data134Changed\0"
    "Data_134Changed\0data135Changed\0"
    "Data_135Changed\0data136Changed\0"
    "Data_136Changed\0data137Changed\0"
    "Data_137Changed\0data138Changed\0"
    "Data_138Changed\0data139Changed\0"
    "Data_139Changed\0data140Changed\0"
    "Data_140Changed\0data141Changed\0"
    "Data_141Changed\0data142Changed\0"
    "Data_142Changed\0data143Changed\0"
    "Data_143Changed\0data144Changed\0"
    "Data_144Changed\0data145Changed\0"
    "Data_145Changed\0data146Changed\0"
    "Data_146Changed\0data147Changed\0"
    "Data_147Changed\0data148Changed\0"
    "Data_148Changed\0data149Changed\0"
    "Data_149Changed\0data150Changed\0"
    "Data_150Changed\0data151Changed\0"
    "Data_151Changed\0data152Changed\0"
    "Data_152Changed\0data153Changed\0"
    "Data_153Changed\0data154Changed\0"
    "Data_154Changed\0data155Changed\0"
    "Data_155Changed\0data156Changed\0"
    "Data_156Changed\0data157Changed\0"
    "Data_157Changed\0data158Changed\0"
    "Data_158Changed\0data159Changed\0"
    "Data_159Changed\0data160Changed\0"
    "Data_160Changed\0data161Changed\0"
    "Data_161Changed\0data162Changed\0"
    "Data_162Changed\0data163Changed\0"
    "Data_163Changed\0data164Changed\0"
    "Data_164Changed\0data165Changed\0"
    "Data_165Changed\0data166Changed\0"
    "Data_166Changed\0data167Changed\0"
    "Data_167Changed\0data168Changed\0"
    "Data_168Changed\0data169Changed\0"
    "Data_169Changed\0data170Changed\0"
    "Data_170Changed\0data171Changed\0"
    "Data_171Changed\0data172Changed\0"
    "Data_172Changed\0data173Changed\0"
    "Data_173Changed\0data174Changed\0"
    "Data_174Changed\0data175Changed\0"
    "Data_175Changed\0data176Changed\0"
    "Data_176Changed\0data177Changed\0"
    "Data_177Changed\0data178Changed\0"
    "Data_178Changed\0data179Changed\0"
    "Data_179Changed\0data180Changed\0"
    "Data_180Changed\0data181Changed\0"
    "Data_181Changed\0data182Changed\0"
    "Data_182Changed\0data183Changed\0"
    "Data_183Changed\0data184Changed\0"
    "Data_184Changed\0data185Changed\0"
    "Data_185Changed\0data186Changed\0"
    "Data_186Changed\0data187Changed\0"
    "Data_187Changed\0data188Changed\0"
    "Data_188Changed\0data189Changed\0"
    "Data_189Changed\0data190Changed\0"
    "Data_190Changed\0data191Changed\0"
    "Data_191Changed\0data192Changed\0"
    "Data_192Changed\0data193Changed\0"
    "Data_193Changed\0data194Changed\0"
    "Data_194Changed\0data195Changed\0"
    "Data_195Changed\0data196Changed\0"
    "Data_196Changed\0data197Changed\0"
    "Data_197Changed\0data198Changed\0"
    "Data_198Changed\0data199Changed\0"
    "Data_199Changed\0setFlightTime\0setObjectID\0"
    "setFlight\0setEntry\0setInstanceID\0"
    "setSize\0setType\0setData\0setData0\0"
    "setData_0\0setData1\0setData_1\0setData2\0"
    "setData_2\0setData3\0setData_3\0setData4\0"
    "setData_4\0setData5\0setData_5\0setData6\0"
    "setData_6\0setData7\0setData_7\0setData8\0"
    "setData_8\0setData9\0setData_9\0setData10\0"
    "setData_10\0setData11\0setData_11\0"
    "setData12\0setData_12\0setData13\0"
    "setData_13\0setData14\0setData_14\0"
    "setData15\0setData_15\0setData16\0"
    "setData_16\0setData17\0setData_17\0"
    "setData18\0setData_18\0setData19\0"
    "setData_19\0setData20\0setData_20\0"
    "setData21\0setData_21\0setData22\0"
    "setData_22\0setData23\0setData_23\0"
    "setData24\0setData_24\0setData25\0"
    "setData_25\0setData26\0setData_26\0"
    "setData27\0setData_27\0setData28\0"
    "setData_28\0setData29\0setData_29\0"
    "setData30\0setData_30\0setData31\0"
    "setData_31\0setData32\0setData_32\0"
    "setData33\0setData_33\0setData34\0"
    "setData_34\0setData35\0setData_35\0"
    "setData36\0setData_36\0setData37\0"
    "setData_37\0setData38\0setData_38\0"
    "setData39\0setData_39\0setData40\0"
    "setData_40\0setData41\0setData_41\0"
    "setData42\0setData_42\0setData43\0"
    "setData_43\0setData44\0setData_44\0"
    "setData45\0setData_45\0setData46\0"
    "setData_46\0setData47\0setData_47\0"
    "setData48\0setData_48\0setData49\0"
    "setData_49\0setData50\0setData_50\0"
    "setData51\0setData_51\0setData52\0"
    "setData_52\0setData53\0setData_53\0"
    "setData54\0setData_54\0setData55\0"
    "setData_55\0setData56\0setData_56\0"
    "setData57\0setData_57\0setData58\0"
    "setData_58\0setData59\0setData_59\0"
    "setData60\0setData_60\0setData61\0"
    "setData_61\0setData62\0setData_62\0"
    "setData63\0setData_63\0setData64\0"
    "setData_64\0setData65\0setData_65\0"
    "setData66\0setData_66\0setData67\0"
    "setData_67\0setData68\0setData_68\0"
    "setData69\0setData_69\0setData70\0"
    "setData_70\0setData71\0setData_71\0"
    "setData72\0setData_72\0setData73\0"
    "setData_73\0setData74\0setData_74\0"
    "setData75\0setData_75\0setData76\0"
    "setData_76\0setData77\0setData_77\0"
    "setData78\0setData_78\0setData79\0"
    "setData_79\0setData80\0setData_80\0"
    "setData81\0setData_81\0setData82\0"
    "setData_82\0setData83\0setData_83\0"
    "setData84\0setData_84\0setData85\0"
    "setData_85\0setData86\0setData_86\0"
    "setData87\0setData_87\0setData88\0"
    "setData_88\0setData89\0setData_89\0"
    "setData90\0setData_90\0setData91\0"
    "setData_91\0setData92\0setData_92\0"
    "setData93\0setData_93\0setData94\0"
    "setData_94\0setData95\0setData_95\0"
    "setData96\0setData_96\0setData97\0"
    "setData_97\0setData98\0setData_98\0"
    "setData99\0setData_99\0setData100\0"
    "setData_100\0setData101\0setData_101\0"
    "setData102\0setData_102\0setData103\0"
    "setData_103\0setData104\0setData_104\0"
    "setData105\0setData_105\0setData106\0"
    "setData_106\0setData107\0setData_107\0"
    "setData108\0setData_108\0setData109\0"
    "setData_109\0setData110\0setData_110\0"
    "setData111\0setData_111\0setData112\0"
    "setData_112\0setData113\0setData_113\0"
    "setData114\0setData_114\0setData115\0"
    "setData_115\0setData116\0setData_116\0"
    "setData117\0setData_117\0setData118\0"
    "setData_118\0setData119\0setData_119\0"
    "setData120\0setData_120\0setData121\0"
    "setData_121\0setData122\0setData_122\0"
    "setData123\0setData_123\0setData124\0"
    "setData_124\0setData125\0setData_125\0"
    "setData126\0setData_126\0setData127\0"
    "setData_127\0setData128\0setData_128\0"
    "setData129\0setData_129\0setData130\0"
    "setData_130\0setData131\0setData_131\0"
    "setData132\0setData_132\0setData133\0"
    "setData_133\0setData134\0setData_134\0"
    "setData135\0setData_135\0setData136\0"
    "setData_136\0setData137\0setData_137\0"
    "setData138\0setData_138\0setData139\0"
    "setData_139\0setData140\0setData_140\0"
    "setData141\0setData_141\0setData142\0"
    "setData_142\0setData143\0setData_143\0"
    "setData144\0setData_144\0setData145\0"
    "setData_145\0setData146\0setData_146\0"
    "setData147\0setData_147\0setData148\0"
    "setData_148\0setData149\0setData_149\0"
    "setData150\0setData_150\0setData151\0"
    "setData_151\0setData152\0setData_152\0"
    "setData153\0setData_153\0setData154\0"
    "setData_154\0setData155\0setData_155\0"
    "setData156\0setData_156\0setData157\0"
    "setData_157\0setData158\0setData_158\0"
    "setData159\0setData_159\0setData160\0"
    "setData_160\0setData161\0setData_161\0"
    "setData162\0setData_162\0setData163\0"
    "setData_163\0setData164\0setData_164\0"
    "setData165\0setData_165\0setData166\0"
    "setData_166\0setData167\0setData_167\0"
    "setData168\0setData_168\0setData169\0"
    "setData_169\0setData170\0setData_170\0"
    "setData171\0setData_171\0setData172\0"
    "setData_172\0setData173\0setData_173\0"
    "setData174\0setData_174\0setData175\0"
    "setData_175\0setData176\0setData_176\0"
    "setData177\0setData_177\0setData178\0"
    "setData_178\0setData179\0setData_179\0"
    "setData180\0setData_180\0setData181\0"
    "setData_181\0setData182\0setData_182\0"
    "setData183\0setData_183\0setData184\0"
    "setData_184\0setData185\0setData_185\0"
    "setData186\0setData_186\0setData187\0"
    "setData_187\0setData188\0setData_188\0"
    "setData189\0setData_189\0setData190\0"
    "setData_190\0setData191\0setData_191\0"
    "setData192\0setData_192\0setData193\0"
    "setData_193\0setData194\0setData_194\0"
    "setData195\0setData_195\0setData196\0"
    "setData_196\0setData197\0setData_197\0"
    "setData198\0setData_198\0setData199\0"
    "setData_199\0emitNotifications\0"
    "getFlightTime\0getObjectID\0getFlight\0"
    "getEntry\0getInstanceID\0getSize\0getType\0"
    "data\0getData\0getData_0\0getData_1\0"
    "getData_2\0getData_3\0getData_4\0getData_5\0"
    "getData_6\0getData_7\0getData_8\0getData_9\0"
    "getData_10\0getData_11\0getData_12\0"
    "getData_13\0getData_14\0getData_15\0"
    "getData_16\0getData_17\0getData_18\0"
    "getData_19\0getData_20\0getData_21\0"
    "getData_22\0getData_23\0getData_24\0"
    "getData_25\0getData_26\0getData_27\0"
    "getData_28\0getData_29\0getData_30\0"
    "getData_31\0getData_32\0getData_33\0"
    "getData_34\0getData_35\0getData_36\0"
    "getData_37\0getData_38\0getData_39\0"
    "getData_40\0getData_41\0getData_42\0"
    "getData_43\0getData_44\0getData_45\0"
    "getData_46\0getData_47\0getData_48\0"
    "getData_49\0getData_50\0getData_51\0"
    "getData_52\0getData_53\0getData_54\0"
    "getData_55\0getData_56\0getData_57\0"
    "getData_58\0getData_59\0getData_60\0"
    "getData_61\0getData_62\0getData_63\0"
    "getData_64\0getData_65\0getData_66\0"
    "getData_67\0getData_68\0getData_69\0"
    "getData_70\0getData_71\0getData_72\0"
    "getData_73\0getData_74\0getData_75\0"
    "getData_76\0getData_77\0getData_78\0"
    "getData_79\0getData_80\0getData_81\0"
    "getData_82\0getData_83\0getData_84\0"
    "getData_85\0getData_86\0getData_87\0"
    "getData_88\0getData_89\0getData_90\0"
    "getData_91\0getData_92\0getData_93\0"
    "getData_94\0getData_95\0getData_96\0"
    "getData_97\0getData_98\0getData_99\0"
    "getData_100\0getData_101\0getData_102\0"
    "getData_103\0getData_104\0getData_105\0"
    "getData_106\0getData_107\0getData_108\0"
    "getData_109\0getData_110\0getData_111\0"
    "getData_112\0getData_113\0getData_114\0"
    "getData_115\0getData_116\0getData_117\0"
    "getData_118\0getData_119\0getData_120\0"
    "getData_121\0getData_122\0getData_123\0"
    "getData_124\0getData_125\0getData_126\0"
    "getData_127\0getData_128\0getData_129\0"
    "getData_130\0getData_131\0getData_132\0"
    "getData_133\0getData_134\0getData_135\0"
    "getData_136\0getData_137\0getData_138\0"
    "getData_139\0getData_140\0getData_141\0"
    "getData_142\0getData_143\0getData_144\0"
    "getData_145\0getData_146\0getData_147\0"
    "getData_148\0getData_149\0getData_150\0"
    "getData_151\0getData_152\0getData_153\0"
    "getData_154\0getData_155\0getData_156\0"
    "getData_157\0getData_158\0getData_159\0"
    "getData_160\0getData_161\0getData_162\0"
    "getData_163\0getData_164\0getData_165\0"
    "getData_166\0getData_167\0getData_168\0"
    "getData_169\0getData_170\0getData_171\0"
    "getData_172\0getData_173\0getData_174\0"
    "getData_175\0getData_176\0getData_177\0"
    "getData_178\0getData_179\0getData_180\0"
    "getData_181\0getData_182\0getData_183\0"
    "getData_184\0getData_185\0getData_186\0"
    "getData_187\0getData_188\0getData_189\0"
    "getData_190\0getData_191\0getData_192\0"
    "getData_193\0getData_194\0getData_195\0"
    "getData_196\0getData_197\0getData_198\0"
    "getData_199\0flightTime\0objectID\0flight\0"
    "entry\0instanceID\0size\0type\0data0\0data1\0"
    "data2\0data3\0data4\0data5\0data6\0data7\0"
    "data8\0data9\0data10\0data11\0data12\0"
    "data13\0data14\0data15\0data16\0data17\0"
    "data18\0data19\0data20\0data21\0data22\0"
    "data23\0data24\0data25\0data26\0data27\0"
    "data28\0data29\0data30\0data31\0data32\0"
    "data33\0data34\0data35\0data36\0data37\0"
    "data38\0data39\0data40\0data41\0data42\0"
    "data43\0data44\0data45\0data46\0data47\0"
    "data48\0data49\0data50\0data51\0data52\0"
    "data53\0data54\0data55\0data56\0data57\0"
    "data58\0data59\0data60\0data61\0data62\0"
    "data63\0data64\0data65\0data66\0data67\0"
    "data68\0data69\0data70\0data71\0data72\0"
    "data73\0data74\0data75\0data76\0data77\0"
    "data78\0data79\0data80\0data81\0data82\0"
    "data83\0data84\0data85\0data86\0data87\0"
    "data88\0data89\0data90\0data91\0data92\0"
    "data93\0data94\0data95\0data96\0data97\0"
    "data98\0data99\0data100\0data101\0data102\0"
    "data103\0data104\0data105\0data106\0data107\0"
    "data108\0data109\0data110\0data111\0data112\0"
    "data113\0data114\0data115\0data116\0data117\0"
    "data118\0data119\0data120\0data121\0data122\0"
    "data123\0data124\0data125\0data126\0data127\0"
    "data128\0data129\0data130\0data131\0data132\0"
    "data133\0data134\0data135\0data136\0data137\0"
    "data138\0data139\0data140\0data141\0data142\0"
    "data143\0data144\0data145\0data146\0data147\0"
    "data148\0data149\0data150\0data151\0data152\0"
    "data153\0data154\0data155\0data156\0data157\0"
    "data158\0data159\0data160\0data161\0data162\0"
    "data163\0data164\0data165\0data166\0data167\0"
    "data168\0data169\0data170\0data171\0data172\0"
    "data173\0data174\0data175\0data176\0data177\0"
    "data178\0data179\0data180\0data181\0data182\0"
    "data183\0data184\0data185\0data186\0data187\0"
    "data188\0data189\0data190\0data191\0data192\0"
    "data193\0data194\0data195\0data196\0data197\0"
    "data198\0data199\0FlightTime\0ObjectID\0"
    "Flight\0Entry\0InstanceID\0Size\0Type\0"
    "Data_0\0Data_1\0Data_2\0Data_3\0Data_4\0"
    "Data_5\0Data_6\0Data_7\0Data_8\0Data_9\0"
    "Data_10\0Data_11\0Data_12\0Data_13\0Data_14\0"
    "Data_15\0Data_16\0Data_17\0Data_18\0Data_19\0"
    "Data_20\0Data_21\0Data_22\0Data_23\0Data_24\0"
    "Data_25\0Data_26\0Data_27\0Data_28\0Data_29\0"
    "Data_30\0Data_31\0Data_32\0Data_33\0Data_34\0"
    "Data_35\0Data_36\0Data_37\0Data_38\0Data_39\0"
    "Data_40\0Data_41\0Data_42\0Data_43\0Data_44\0"
    "Data_45\0Data_46\0Data_47\0Data_48\0Data_49\0"
    "Data_50\0Data_51\0Data_52\0Data_53\0Data_54\0"
    "Data_55\0Data_56\0Data_57\0Data_58\0Data_59\0"
    "Data_60\0Data_61\0Data_62\0Data_63\0Data_64\0"
    "Data_65\0Data_66\0Data_67\0Data_68\0Data_69\0"
    "Data_70\0Data_71\0Data_72\0Data_73\0Data_74\0"
    "Data_75\0Data_76\0Data_77\0Data_78\0Data_79\0"
    "Data_80\0Data_81\0Data_82\0Data_83\0Data_84\0"
    "Data_85\0Data_86\0Data_87\0Data_88\0Data_89\0"
    "Data_90\0Data_91\0Data_92\0Data_93\0Data_94\0"
    "Data_95\0Data_96\0Data_97\0Data_98\0Data_99\0"
    "Data_100\0Data_101\0Data_102\0Data_103\0"
    "Data_104\0Data_105\0Data_106\0Data_107\0"
    "Data_108\0Data_109\0Data_110\0Data_111\0"
    "Data_112\0Data_113\0Data_114\0Data_115\0"
    "Data_116\0Data_117\0Data_118\0Data_119\0"
    "Data_120\0Data_121\0Data_122\0Data_123\0"
    "Data_124\0Data_125\0Data_126\0Data_127\0"
    "Data_128\0Data_129\0Data_130\0Data_131\0"
    "Data_132\0Data_133\0Data_134\0Data_135\0"
    "Data_136\0Data_137\0Data_138\0Data_139\0"
    "Data_140\0Data_141\0Data_142\0Data_143\0"
    "Data_144\0Data_145\0Data_146\0Data_147\0"
    "Data_148\0Data_149\0Data_150\0Data_151\0"
    "Data_152\0Data_153\0Data_154\0Data_155\0"
    "Data_156\0Data_157\0Data_158\0Data_159\0"
    "Data_160\0Data_161\0Data_162\0Data_163\0"
    "Data_164\0Data_165\0Data_166\0Data_167\0"
    "Data_168\0Data_169\0Data_170\0Data_171\0"
    "Data_172\0Data_173\0Data_174\0Data_175\0"
    "Data_176\0Data_177\0Data_178\0Data_179\0"
    "Data_180\0Data_181\0Data_182\0Data_183\0"
    "Data_184\0Data_185\0Data_186\0Data_187\0"
    "Data_188\0Data_189\0Data_190\0Data_191\0"
    "Data_192\0Data_193\0Data_194\0Data_195\0"
    "Data_196\0Data_197\0Data_198\0Data_199"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugLogEntry[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
    1036,   14, // methods
     414, 7894, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     416,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1, 5194,    2, 0x06 /* Public */,
       4,    1, 5197,    2, 0x06 /* Public */,
       5,    1, 5200,    2, 0x06 /* Public */,
       6,    1, 5203,    2, 0x06 /* Public */,
       7,    1, 5206,    2, 0x06 /* Public */,
       8,    1, 5209,    2, 0x06 /* Public */,
       9,    1, 5212,    2, 0x06 /* Public */,
      10,    1, 5215,    2, 0x06 /* Public */,
      11,    1, 5218,    2, 0x06 /* Public */,
      12,    1, 5221,    2, 0x06 /* Public */,
      13,    1, 5224,    2, 0x06 /* Public */,
      14,    1, 5227,    2, 0x06 /* Public */,
      15,    1, 5230,    2, 0x06 /* Public */,
      17,    1, 5233,    2, 0x06 /* Public */,
      18,    2, 5236,    2, 0x06 /* Public */,
      20,    2, 5241,    2, 0x06 /* Public */,
      21,    1, 5246,    2, 0x06 /* Public */,
      22,    1, 5249,    2, 0x06 /* Public */,
      23,    1, 5252,    2, 0x06 /* Public */,
      24,    1, 5255,    2, 0x06 /* Public */,
      25,    1, 5258,    2, 0x06 /* Public */,
      26,    1, 5261,    2, 0x06 /* Public */,
      27,    1, 5264,    2, 0x06 /* Public */,
      28,    1, 5267,    2, 0x06 /* Public */,
      29,    1, 5270,    2, 0x06 /* Public */,
      30,    1, 5273,    2, 0x06 /* Public */,
      31,    1, 5276,    2, 0x06 /* Public */,
      32,    1, 5279,    2, 0x06 /* Public */,
      33,    1, 5282,    2, 0x06 /* Public */,
      34,    1, 5285,    2, 0x06 /* Public */,
      35,    1, 5288,    2, 0x06 /* Public */,
      36,    1, 5291,    2, 0x06 /* Public */,
      37,    1, 5294,    2, 0x06 /* Public */,
      38,    1, 5297,    2, 0x06 /* Public */,
      39,    1, 5300,    2, 0x06 /* Public */,
      40,    1, 5303,    2, 0x06 /* Public */,
      41,    1, 5306,    2, 0x06 /* Public */,
      42,    1, 5309,    2, 0x06 /* Public */,
      43,    1, 5312,    2, 0x06 /* Public */,
      44,    1, 5315,    2, 0x06 /* Public */,
      45,    1, 5318,    2, 0x06 /* Public */,
      46,    1, 5321,    2, 0x06 /* Public */,
      47,    1, 5324,    2, 0x06 /* Public */,
      48,    1, 5327,    2, 0x06 /* Public */,
      49,    1, 5330,    2, 0x06 /* Public */,
      50,    1, 5333,    2, 0x06 /* Public */,
      51,    1, 5336,    2, 0x06 /* Public */,
      52,    1, 5339,    2, 0x06 /* Public */,
      53,    1, 5342,    2, 0x06 /* Public */,
      54,    1, 5345,    2, 0x06 /* Public */,
      55,    1, 5348,    2, 0x06 /* Public */,
      56,    1, 5351,    2, 0x06 /* Public */,
      57,    1, 5354,    2, 0x06 /* Public */,
      58,    1, 5357,    2, 0x06 /* Public */,
      59,    1, 5360,    2, 0x06 /* Public */,
      60,    1, 5363,    2, 0x06 /* Public */,
      61,    1, 5366,    2, 0x06 /* Public */,
      62,    1, 5369,    2, 0x06 /* Public */,
      63,    1, 5372,    2, 0x06 /* Public */,
      64,    1, 5375,    2, 0x06 /* Public */,
      65,    1, 5378,    2, 0x06 /* Public */,
      66,    1, 5381,    2, 0x06 /* Public */,
      67,    1, 5384,    2, 0x06 /* Public */,
      68,    1, 5387,    2, 0x06 /* Public */,
      69,    1, 5390,    2, 0x06 /* Public */,
      70,    1, 5393,    2, 0x06 /* Public */,
      71,    1, 5396,    2, 0x06 /* Public */,
      72,    1, 5399,    2, 0x06 /* Public */,
      73,    1, 5402,    2, 0x06 /* Public */,
      74,    1, 5405,    2, 0x06 /* Public */,
      75,    1, 5408,    2, 0x06 /* Public */,
      76,    1, 5411,    2, 0x06 /* Public */,
      77,    1, 5414,    2, 0x06 /* Public */,
      78,    1, 5417,    2, 0x06 /* Public */,
      79,    1, 5420,    2, 0x06 /* Public */,
      80,    1, 5423,    2, 0x06 /* Public */,
      81,    1, 5426,    2, 0x06 /* Public */,
      82,    1, 5429,    2, 0x06 /* Public */,
      83,    1, 5432,    2, 0x06 /* Public */,
      84,    1, 5435,    2, 0x06 /* Public */,
      85,    1, 5438,    2, 0x06 /* Public */,
      86,    1, 5441,    2, 0x06 /* Public */,
      87,    1, 5444,    2, 0x06 /* Public */,
      88,    1, 5447,    2, 0x06 /* Public */,
      89,    1, 5450,    2, 0x06 /* Public */,
      90,    1, 5453,    2, 0x06 /* Public */,
      91,    1, 5456,    2, 0x06 /* Public */,
      92,    1, 5459,    2, 0x06 /* Public */,
      93,    1, 5462,    2, 0x06 /* Public */,
      94,    1, 5465,    2, 0x06 /* Public */,
      95,    1, 5468,    2, 0x06 /* Public */,
      96,    1, 5471,    2, 0x06 /* Public */,
      97,    1, 5474,    2, 0x06 /* Public */,
      98,    1, 5477,    2, 0x06 /* Public */,
      99,    1, 5480,    2, 0x06 /* Public */,
     100,    1, 5483,    2, 0x06 /* Public */,
     101,    1, 5486,    2, 0x06 /* Public */,
     102,    1, 5489,    2, 0x06 /* Public */,
     103,    1, 5492,    2, 0x06 /* Public */,
     104,    1, 5495,    2, 0x06 /* Public */,
     105,    1, 5498,    2, 0x06 /* Public */,
     106,    1, 5501,    2, 0x06 /* Public */,
     107,    1, 5504,    2, 0x06 /* Public */,
     108,    1, 5507,    2, 0x06 /* Public */,
     109,    1, 5510,    2, 0x06 /* Public */,
     110,    1, 5513,    2, 0x06 /* Public */,
     111,    1, 5516,    2, 0x06 /* Public */,
     112,    1, 5519,    2, 0x06 /* Public */,
     113,    1, 5522,    2, 0x06 /* Public */,
     114,    1, 5525,    2, 0x06 /* Public */,
     115,    1, 5528,    2, 0x06 /* Public */,
     116,    1, 5531,    2, 0x06 /* Public */,
     117,    1, 5534,    2, 0x06 /* Public */,
     118,    1, 5537,    2, 0x06 /* Public */,
     119,    1, 5540,    2, 0x06 /* Public */,
     120,    1, 5543,    2, 0x06 /* Public */,
     121,    1, 5546,    2, 0x06 /* Public */,
     122,    1, 5549,    2, 0x06 /* Public */,
     123,    1, 5552,    2, 0x06 /* Public */,
     124,    1, 5555,    2, 0x06 /* Public */,
     125,    1, 5558,    2, 0x06 /* Public */,
     126,    1, 5561,    2, 0x06 /* Public */,
     127,    1, 5564,    2, 0x06 /* Public */,
     128,    1, 5567,    2, 0x06 /* Public */,
     129,    1, 5570,    2, 0x06 /* Public */,
     130,    1, 5573,    2, 0x06 /* Public */,
     131,    1, 5576,    2, 0x06 /* Public */,
     132,    1, 5579,    2, 0x06 /* Public */,
     133,    1, 5582,    2, 0x06 /* Public */,
     134,    1, 5585,    2, 0x06 /* Public */,
     135,    1, 5588,    2, 0x06 /* Public */,
     136,    1, 5591,    2, 0x06 /* Public */,
     137,    1, 5594,    2, 0x06 /* Public */,
     138,    1, 5597,    2, 0x06 /* Public */,
     139,    1, 5600,    2, 0x06 /* Public */,
     140,    1, 5603,    2, 0x06 /* Public */,
     141,    1, 5606,    2, 0x06 /* Public */,
     142,    1, 5609,    2, 0x06 /* Public */,
     143,    1, 5612,    2, 0x06 /* Public */,
     144,    1, 5615,    2, 0x06 /* Public */,
     145,    1, 5618,    2, 0x06 /* Public */,
     146,    1, 5621,    2, 0x06 /* Public */,
     147,    1, 5624,    2, 0x06 /* Public */,
     148,    1, 5627,    2, 0x06 /* Public */,
     149,    1, 5630,    2, 0x06 /* Public */,
     150,    1, 5633,    2, 0x06 /* Public */,
     151,    1, 5636,    2, 0x06 /* Public */,
     152,    1, 5639,    2, 0x06 /* Public */,
     153,    1, 5642,    2, 0x06 /* Public */,
     154,    1, 5645,    2, 0x06 /* Public */,
     155,    1, 5648,    2, 0x06 /* Public */,
     156,    1, 5651,    2, 0x06 /* Public */,
     157,    1, 5654,    2, 0x06 /* Public */,
     158,    1, 5657,    2, 0x06 /* Public */,
     159,    1, 5660,    2, 0x06 /* Public */,
     160,    1, 5663,    2, 0x06 /* Public */,
     161,    1, 5666,    2, 0x06 /* Public */,
     162,    1, 5669,    2, 0x06 /* Public */,
     163,    1, 5672,    2, 0x06 /* Public */,
     164,    1, 5675,    2, 0x06 /* Public */,
     165,    1, 5678,    2, 0x06 /* Public */,
     166,    1, 5681,    2, 0x06 /* Public */,
     167,    1, 5684,    2, 0x06 /* Public */,
     168,    1, 5687,    2, 0x06 /* Public */,
     169,    1, 5690,    2, 0x06 /* Public */,
     170,    1, 5693,    2, 0x06 /* Public */,
     171,    1, 5696,    2, 0x06 /* Public */,
     172,    1, 5699,    2, 0x06 /* Public */,
     173,    1, 5702,    2, 0x06 /* Public */,
     174,    1, 5705,    2, 0x06 /* Public */,
     175,    1, 5708,    2, 0x06 /* Public */,
     176,    1, 5711,    2, 0x06 /* Public */,
     177,    1, 5714,    2, 0x06 /* Public */,
     178,    1, 5717,    2, 0x06 /* Public */,
     179,    1, 5720,    2, 0x06 /* Public */,
     180,    1, 5723,    2, 0x06 /* Public */,
     181,    1, 5726,    2, 0x06 /* Public */,
     182,    1, 5729,    2, 0x06 /* Public */,
     183,    1, 5732,    2, 0x06 /* Public */,
     184,    1, 5735,    2, 0x06 /* Public */,
     185,    1, 5738,    2, 0x06 /* Public */,
     186,    1, 5741,    2, 0x06 /* Public */,
     187,    1, 5744,    2, 0x06 /* Public */,
     188,    1, 5747,    2, 0x06 /* Public */,
     189,    1, 5750,    2, 0x06 /* Public */,
     190,    1, 5753,    2, 0x06 /* Public */,
     191,    1, 5756,    2, 0x06 /* Public */,
     192,    1, 5759,    2, 0x06 /* Public */,
     193,    1, 5762,    2, 0x06 /* Public */,
     194,    1, 5765,    2, 0x06 /* Public */,
     195,    1, 5768,    2, 0x06 /* Public */,
     196,    1, 5771,    2, 0x06 /* Public */,
     197,    1, 5774,    2, 0x06 /* Public */,
     198,    1, 5777,    2, 0x06 /* Public */,
     199,    1, 5780,    2, 0x06 /* Public */,
     200,    1, 5783,    2, 0x06 /* Public */,
     201,    1, 5786,    2, 0x06 /* Public */,
     202,    1, 5789,    2, 0x06 /* Public */,
     203,    1, 5792,    2, 0x06 /* Public */,
     204,    1, 5795,    2, 0x06 /* Public */,
     205,    1, 5798,    2, 0x06 /* Public */,
     206,    1, 5801,    2, 0x06 /* Public */,
     207,    1, 5804,    2, 0x06 /* Public */,
     208,    1, 5807,    2, 0x06 /* Public */,
     209,    1, 5810,    2, 0x06 /* Public */,
     210,    1, 5813,    2, 0x06 /* Public */,
     211,    1, 5816,    2, 0x06 /* Public */,
     212,    1, 5819,    2, 0x06 /* Public */,
     213,    1, 5822,    2, 0x06 /* Public */,
     214,    1, 5825,    2, 0x06 /* Public */,
     215,    1, 5828,    2, 0x06 /* Public */,
     216,    1, 5831,    2, 0x06 /* Public */,
     217,    1, 5834,    2, 0x06 /* Public */,
     218,    1, 5837,    2, 0x06 /* Public */,
     219,    1, 5840,    2, 0x06 /* Public */,
     220,    1, 5843,    2, 0x06 /* Public */,
     221,    1, 5846,    2, 0x06 /* Public */,
     222,    1, 5849,    2, 0x06 /* Public */,
     223,    1, 5852,    2, 0x06 /* Public */,
     224,    1, 5855,    2, 0x06 /* Public */,
     225,    1, 5858,    2, 0x06 /* Public */,
     226,    1, 5861,    2, 0x06 /* Public */,
     227,    1, 5864,    2, 0x06 /* Public */,
     228,    1, 5867,    2, 0x06 /* Public */,
     229,    1, 5870,    2, 0x06 /* Public */,
     230,    1, 5873,    2, 0x06 /* Public */,
     231,    1, 5876,    2, 0x06 /* Public */,
     232,    1, 5879,    2, 0x06 /* Public */,
     233,    1, 5882,    2, 0x06 /* Public */,
     234,    1, 5885,    2, 0x06 /* Public */,
     235,    1, 5888,    2, 0x06 /* Public */,
     236,    1, 5891,    2, 0x06 /* Public */,
     237,    1, 5894,    2, 0x06 /* Public */,
     238,    1, 5897,    2, 0x06 /* Public */,
     239,    1, 5900,    2, 0x06 /* Public */,
     240,    1, 5903,    2, 0x06 /* Public */,
     241,    1, 5906,    2, 0x06 /* Public */,
     242,    1, 5909,    2, 0x06 /* Public */,
     243,    1, 5912,    2, 0x06 /* Public */,
     244,    1, 5915,    2, 0x06 /* Public */,
     245,    1, 5918,    2, 0x06 /* Public */,
     246,    1, 5921,    2, 0x06 /* Public */,
     247,    1, 5924,    2, 0x06 /* Public */,
     248,    1, 5927,    2, 0x06 /* Public */,
     249,    1, 5930,    2, 0x06 /* Public */,
     250,    1, 5933,    2, 0x06 /* Public */,
     251,    1, 5936,    2, 0x06 /* Public */,
     252,    1, 5939,    2, 0x06 /* Public */,
     253,    1, 5942,    2, 0x06 /* Public */,
     254,    1, 5945,    2, 0x06 /* Public */,
     255,    1, 5948,    2, 0x06 /* Public */,
     256,    1, 5951,    2, 0x06 /* Public */,
     257,    1, 5954,    2, 0x06 /* Public */,
     258,    1, 5957,    2, 0x06 /* Public */,
     259,    1, 5960,    2, 0x06 /* Public */,
     260,    1, 5963,    2, 0x06 /* Public */,
     261,    1, 5966,    2, 0x06 /* Public */,
     262,    1, 5969,    2, 0x06 /* Public */,
     263,    1, 5972,    2, 0x06 /* Public */,
     264,    1, 5975,    2, 0x06 /* Public */,
     265,    1, 5978,    2, 0x06 /* Public */,
     266,    1, 5981,    2, 0x06 /* Public */,
     267,    1, 5984,    2, 0x06 /* Public */,
     268,    1, 5987,    2, 0x06 /* Public */,
     269,    1, 5990,    2, 0x06 /* Public */,
     270,    1, 5993,    2, 0x06 /* Public */,
     271,    1, 5996,    2, 0x06 /* Public */,
     272,    1, 5999,    2, 0x06 /* Public */,
     273,    1, 6002,    2, 0x06 /* Public */,
     274,    1, 6005,    2, 0x06 /* Public */,
     275,    1, 6008,    2, 0x06 /* Public */,
     276,    1, 6011,    2, 0x06 /* Public */,
     277,    1, 6014,    2, 0x06 /* Public */,
     278,    1, 6017,    2, 0x06 /* Public */,
     279,    1, 6020,    2, 0x06 /* Public */,
     280,    1, 6023,    2, 0x06 /* Public */,
     281,    1, 6026,    2, 0x06 /* Public */,
     282,    1, 6029,    2, 0x06 /* Public */,
     283,    1, 6032,    2, 0x06 /* Public */,
     284,    1, 6035,    2, 0x06 /* Public */,
     285,    1, 6038,    2, 0x06 /* Public */,
     286,    1, 6041,    2, 0x06 /* Public */,
     287,    1, 6044,    2, 0x06 /* Public */,
     288,    1, 6047,    2, 0x06 /* Public */,
     289,    1, 6050,    2, 0x06 /* Public */,
     290,    1, 6053,    2, 0x06 /* Public */,
     291,    1, 6056,    2, 0x06 /* Public */,
     292,    1, 6059,    2, 0x06 /* Public */,
     293,    1, 6062,    2, 0x06 /* Public */,
     294,    1, 6065,    2, 0x06 /* Public */,
     295,    1, 6068,    2, 0x06 /* Public */,
     296,    1, 6071,    2, 0x06 /* Public */,
     297,    1, 6074,    2, 0x06 /* Public */,
     298,    1, 6077,    2, 0x06 /* Public */,
     299,    1, 6080,    2, 0x06 /* Public */,
     300,    1, 6083,    2, 0x06 /* Public */,
     301,    1, 6086,    2, 0x06 /* Public */,
     302,    1, 6089,    2, 0x06 /* Public */,
     303,    1, 6092,    2, 0x06 /* Public */,
     304,    1, 6095,    2, 0x06 /* Public */,
     305,    1, 6098,    2, 0x06 /* Public */,
     306,    1, 6101,    2, 0x06 /* Public */,
     307,    1, 6104,    2, 0x06 /* Public */,
     308,    1, 6107,    2, 0x06 /* Public */,
     309,    1, 6110,    2, 0x06 /* Public */,
     310,    1, 6113,    2, 0x06 /* Public */,
     311,    1, 6116,    2, 0x06 /* Public */,
     312,    1, 6119,    2, 0x06 /* Public */,
     313,    1, 6122,    2, 0x06 /* Public */,
     314,    1, 6125,    2, 0x06 /* Public */,
     315,    1, 6128,    2, 0x06 /* Public */,
     316,    1, 6131,    2, 0x06 /* Public */,
     317,    1, 6134,    2, 0x06 /* Public */,
     318,    1, 6137,    2, 0x06 /* Public */,
     319,    1, 6140,    2, 0x06 /* Public */,
     320,    1, 6143,    2, 0x06 /* Public */,
     321,    1, 6146,    2, 0x06 /* Public */,
     322,    1, 6149,    2, 0x06 /* Public */,
     323,    1, 6152,    2, 0x06 /* Public */,
     324,    1, 6155,    2, 0x06 /* Public */,
     325,    1, 6158,    2, 0x06 /* Public */,
     326,    1, 6161,    2, 0x06 /* Public */,
     327,    1, 6164,    2, 0x06 /* Public */,
     328,    1, 6167,    2, 0x06 /* Public */,
     329,    1, 6170,    2, 0x06 /* Public */,
     330,    1, 6173,    2, 0x06 /* Public */,
     331,    1, 6176,    2, 0x06 /* Public */,
     332,    1, 6179,    2, 0x06 /* Public */,
     333,    1, 6182,    2, 0x06 /* Public */,
     334,    1, 6185,    2, 0x06 /* Public */,
     335,    1, 6188,    2, 0x06 /* Public */,
     336,    1, 6191,    2, 0x06 /* Public */,
     337,    1, 6194,    2, 0x06 /* Public */,
     338,    1, 6197,    2, 0x06 /* Public */,
     339,    1, 6200,    2, 0x06 /* Public */,
     340,    1, 6203,    2, 0x06 /* Public */,
     341,    1, 6206,    2, 0x06 /* Public */,
     342,    1, 6209,    2, 0x06 /* Public */,
     343,    1, 6212,    2, 0x06 /* Public */,
     344,    1, 6215,    2, 0x06 /* Public */,
     345,    1, 6218,    2, 0x06 /* Public */,
     346,    1, 6221,    2, 0x06 /* Public */,
     347,    1, 6224,    2, 0x06 /* Public */,
     348,    1, 6227,    2, 0x06 /* Public */,
     349,    1, 6230,    2, 0x06 /* Public */,
     350,    1, 6233,    2, 0x06 /* Public */,
     351,    1, 6236,    2, 0x06 /* Public */,
     352,    1, 6239,    2, 0x06 /* Public */,
     353,    1, 6242,    2, 0x06 /* Public */,
     354,    1, 6245,    2, 0x06 /* Public */,
     355,    1, 6248,    2, 0x06 /* Public */,
     356,    1, 6251,    2, 0x06 /* Public */,
     357,    1, 6254,    2, 0x06 /* Public */,
     358,    1, 6257,    2, 0x06 /* Public */,
     359,    1, 6260,    2, 0x06 /* Public */,
     360,    1, 6263,    2, 0x06 /* Public */,
     361,    1, 6266,    2, 0x06 /* Public */,
     362,    1, 6269,    2, 0x06 /* Public */,
     363,    1, 6272,    2, 0x06 /* Public */,
     364,    1, 6275,    2, 0x06 /* Public */,
     365,    1, 6278,    2, 0x06 /* Public */,
     366,    1, 6281,    2, 0x06 /* Public */,
     367,    1, 6284,    2, 0x06 /* Public */,
     368,    1, 6287,    2, 0x06 /* Public */,
     369,    1, 6290,    2, 0x06 /* Public */,
     370,    1, 6293,    2, 0x06 /* Public */,
     371,    1, 6296,    2, 0x06 /* Public */,
     372,    1, 6299,    2, 0x06 /* Public */,
     373,    1, 6302,    2, 0x06 /* Public */,
     374,    1, 6305,    2, 0x06 /* Public */,
     375,    1, 6308,    2, 0x06 /* Public */,
     376,    1, 6311,    2, 0x06 /* Public */,
     377,    1, 6314,    2, 0x06 /* Public */,
     378,    1, 6317,    2, 0x06 /* Public */,
     379,    1, 6320,    2, 0x06 /* Public */,
     380,    1, 6323,    2, 0x06 /* Public */,
     381,    1, 6326,    2, 0x06 /* Public */,
     382,    1, 6329,    2, 0x06 /* Public */,
     383,    1, 6332,    2, 0x06 /* Public */,
     384,    1, 6335,    2, 0x06 /* Public */,
     385,    1, 6338,    2, 0x06 /* Public */,
     386,    1, 6341,    2, 0x06 /* Public */,
     387,    1, 6344,    2, 0x06 /* Public */,
     388,    1, 6347,    2, 0x06 /* Public */,
     389,    1, 6350,    2, 0x06 /* Public */,
     390,    1, 6353,    2, 0x06 /* Public */,
     391,    1, 6356,    2, 0x06 /* Public */,
     392,    1, 6359,    2, 0x06 /* Public */,
     393,    1, 6362,    2, 0x06 /* Public */,
     394,    1, 6365,    2, 0x06 /* Public */,
     395,    1, 6368,    2, 0x06 /* Public */,
     396,    1, 6371,    2, 0x06 /* Public */,
     397,    1, 6374,    2, 0x06 /* Public */,
     398,    1, 6377,    2, 0x06 /* Public */,
     399,    1, 6380,    2, 0x06 /* Public */,
     400,    1, 6383,    2, 0x06 /* Public */,
     401,    1, 6386,    2, 0x06 /* Public */,
     402,    1, 6389,    2, 0x06 /* Public */,
     403,    1, 6392,    2, 0x06 /* Public */,
     404,    1, 6395,    2, 0x06 /* Public */,
     405,    1, 6398,    2, 0x06 /* Public */,
     406,    1, 6401,    2, 0x06 /* Public */,
     407,    1, 6404,    2, 0x06 /* Public */,
     408,    1, 6407,    2, 0x06 /* Public */,
     409,    1, 6410,    2, 0x06 /* Public */,
     410,    1, 6413,    2, 0x06 /* Public */,
     411,    1, 6416,    2, 0x06 /* Public */,
     412,    1, 6419,    2, 0x06 /* Public */,
     413,    1, 6422,    2, 0x06 /* Public */,
     414,    1, 6425,    2, 0x06 /* Public */,
     415,    1, 6428,    2, 0x06 /* Public */,
     416,    1, 6431,    2, 0x06 /* Public */,
     417,    1, 6434,    2, 0x06 /* Public */,
     418,    1, 6437,    2, 0x06 /* Public */,
     419,    1, 6440,    2, 0x06 /* Public */,
     420,    1, 6443,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     421,    1, 6446,    2, 0x0a /* Public */,
     422,    1, 6449,    2, 0x0a /* Public */,
     423,    1, 6452,    2, 0x0a /* Public */,
     424,    1, 6455,    2, 0x0a /* Public */,
     425,    1, 6458,    2, 0x0a /* Public */,
     426,    1, 6461,    2, 0x0a /* Public */,
     427,    1, 6464,    2, 0x0a /* Public */,
     427,    1, 6467,    2, 0x0a /* Public */,
     428,    2, 6470,    2, 0x0a /* Public */,
     428,    2, 6475,    2, 0x0a /* Public */,
     429,    1, 6480,    2, 0x0a /* Public */,
     430,    1, 6483,    2, 0x0a /* Public */,
     431,    1, 6486,    2, 0x0a /* Public */,
     432,    1, 6489,    2, 0x0a /* Public */,
     433,    1, 6492,    2, 0x0a /* Public */,
     434,    1, 6495,    2, 0x0a /* Public */,
     435,    1, 6498,    2, 0x0a /* Public */,
     436,    1, 6501,    2, 0x0a /* Public */,
     437,    1, 6504,    2, 0x0a /* Public */,
     438,    1, 6507,    2, 0x0a /* Public */,
     439,    1, 6510,    2, 0x0a /* Public */,
     440,    1, 6513,    2, 0x0a /* Public */,
     441,    1, 6516,    2, 0x0a /* Public */,
     442,    1, 6519,    2, 0x0a /* Public */,
     443,    1, 6522,    2, 0x0a /* Public */,
     444,    1, 6525,    2, 0x0a /* Public */,
     445,    1, 6528,    2, 0x0a /* Public */,
     446,    1, 6531,    2, 0x0a /* Public */,
     447,    1, 6534,    2, 0x0a /* Public */,
     448,    1, 6537,    2, 0x0a /* Public */,
     449,    1, 6540,    2, 0x0a /* Public */,
     450,    1, 6543,    2, 0x0a /* Public */,
     451,    1, 6546,    2, 0x0a /* Public */,
     452,    1, 6549,    2, 0x0a /* Public */,
     453,    1, 6552,    2, 0x0a /* Public */,
     454,    1, 6555,    2, 0x0a /* Public */,
     455,    1, 6558,    2, 0x0a /* Public */,
     456,    1, 6561,    2, 0x0a /* Public */,
     457,    1, 6564,    2, 0x0a /* Public */,
     458,    1, 6567,    2, 0x0a /* Public */,
     459,    1, 6570,    2, 0x0a /* Public */,
     460,    1, 6573,    2, 0x0a /* Public */,
     461,    1, 6576,    2, 0x0a /* Public */,
     462,    1, 6579,    2, 0x0a /* Public */,
     463,    1, 6582,    2, 0x0a /* Public */,
     464,    1, 6585,    2, 0x0a /* Public */,
     465,    1, 6588,    2, 0x0a /* Public */,
     466,    1, 6591,    2, 0x0a /* Public */,
     467,    1, 6594,    2, 0x0a /* Public */,
     468,    1, 6597,    2, 0x0a /* Public */,
     469,    1, 6600,    2, 0x0a /* Public */,
     470,    1, 6603,    2, 0x0a /* Public */,
     471,    1, 6606,    2, 0x0a /* Public */,
     472,    1, 6609,    2, 0x0a /* Public */,
     473,    1, 6612,    2, 0x0a /* Public */,
     474,    1, 6615,    2, 0x0a /* Public */,
     475,    1, 6618,    2, 0x0a /* Public */,
     476,    1, 6621,    2, 0x0a /* Public */,
     477,    1, 6624,    2, 0x0a /* Public */,
     478,    1, 6627,    2, 0x0a /* Public */,
     479,    1, 6630,    2, 0x0a /* Public */,
     480,    1, 6633,    2, 0x0a /* Public */,
     481,    1, 6636,    2, 0x0a /* Public */,
     482,    1, 6639,    2, 0x0a /* Public */,
     483,    1, 6642,    2, 0x0a /* Public */,
     484,    1, 6645,    2, 0x0a /* Public */,
     485,    1, 6648,    2, 0x0a /* Public */,
     486,    1, 6651,    2, 0x0a /* Public */,
     487,    1, 6654,    2, 0x0a /* Public */,
     488,    1, 6657,    2, 0x0a /* Public */,
     489,    1, 6660,    2, 0x0a /* Public */,
     490,    1, 6663,    2, 0x0a /* Public */,
     491,    1, 6666,    2, 0x0a /* Public */,
     492,    1, 6669,    2, 0x0a /* Public */,
     493,    1, 6672,    2, 0x0a /* Public */,
     494,    1, 6675,    2, 0x0a /* Public */,
     495,    1, 6678,    2, 0x0a /* Public */,
     496,    1, 6681,    2, 0x0a /* Public */,
     497,    1, 6684,    2, 0x0a /* Public */,
     498,    1, 6687,    2, 0x0a /* Public */,
     499,    1, 6690,    2, 0x0a /* Public */,
     500,    1, 6693,    2, 0x0a /* Public */,
     501,    1, 6696,    2, 0x0a /* Public */,
     502,    1, 6699,    2, 0x0a /* Public */,
     503,    1, 6702,    2, 0x0a /* Public */,
     504,    1, 6705,    2, 0x0a /* Public */,
     505,    1, 6708,    2, 0x0a /* Public */,
     506,    1, 6711,    2, 0x0a /* Public */,
     507,    1, 6714,    2, 0x0a /* Public */,
     508,    1, 6717,    2, 0x0a /* Public */,
     509,    1, 6720,    2, 0x0a /* Public */,
     510,    1, 6723,    2, 0x0a /* Public */,
     511,    1, 6726,    2, 0x0a /* Public */,
     512,    1, 6729,    2, 0x0a /* Public */,
     513,    1, 6732,    2, 0x0a /* Public */,
     514,    1, 6735,    2, 0x0a /* Public */,
     515,    1, 6738,    2, 0x0a /* Public */,
     516,    1, 6741,    2, 0x0a /* Public */,
     517,    1, 6744,    2, 0x0a /* Public */,
     518,    1, 6747,    2, 0x0a /* Public */,
     519,    1, 6750,    2, 0x0a /* Public */,
     520,    1, 6753,    2, 0x0a /* Public */,
     521,    1, 6756,    2, 0x0a /* Public */,
     522,    1, 6759,    2, 0x0a /* Public */,
     523,    1, 6762,    2, 0x0a /* Public */,
     524,    1, 6765,    2, 0x0a /* Public */,
     525,    1, 6768,    2, 0x0a /* Public */,
     526,    1, 6771,    2, 0x0a /* Public */,
     527,    1, 6774,    2, 0x0a /* Public */,
     528,    1, 6777,    2, 0x0a /* Public */,
     529,    1, 6780,    2, 0x0a /* Public */,
     530,    1, 6783,    2, 0x0a /* Public */,
     531,    1, 6786,    2, 0x0a /* Public */,
     532,    1, 6789,    2, 0x0a /* Public */,
     533,    1, 6792,    2, 0x0a /* Public */,
     534,    1, 6795,    2, 0x0a /* Public */,
     535,    1, 6798,    2, 0x0a /* Public */,
     536,    1, 6801,    2, 0x0a /* Public */,
     537,    1, 6804,    2, 0x0a /* Public */,
     538,    1, 6807,    2, 0x0a /* Public */,
     539,    1, 6810,    2, 0x0a /* Public */,
     540,    1, 6813,    2, 0x0a /* Public */,
     541,    1, 6816,    2, 0x0a /* Public */,
     542,    1, 6819,    2, 0x0a /* Public */,
     543,    1, 6822,    2, 0x0a /* Public */,
     544,    1, 6825,    2, 0x0a /* Public */,
     545,    1, 6828,    2, 0x0a /* Public */,
     546,    1, 6831,    2, 0x0a /* Public */,
     547,    1, 6834,    2, 0x0a /* Public */,
     548,    1, 6837,    2, 0x0a /* Public */,
     549,    1, 6840,    2, 0x0a /* Public */,
     550,    1, 6843,    2, 0x0a /* Public */,
     551,    1, 6846,    2, 0x0a /* Public */,
     552,    1, 6849,    2, 0x0a /* Public */,
     553,    1, 6852,    2, 0x0a /* Public */,
     554,    1, 6855,    2, 0x0a /* Public */,
     555,    1, 6858,    2, 0x0a /* Public */,
     556,    1, 6861,    2, 0x0a /* Public */,
     557,    1, 6864,    2, 0x0a /* Public */,
     558,    1, 6867,    2, 0x0a /* Public */,
     559,    1, 6870,    2, 0x0a /* Public */,
     560,    1, 6873,    2, 0x0a /* Public */,
     561,    1, 6876,    2, 0x0a /* Public */,
     562,    1, 6879,    2, 0x0a /* Public */,
     563,    1, 6882,    2, 0x0a /* Public */,
     564,    1, 6885,    2, 0x0a /* Public */,
     565,    1, 6888,    2, 0x0a /* Public */,
     566,    1, 6891,    2, 0x0a /* Public */,
     567,    1, 6894,    2, 0x0a /* Public */,
     568,    1, 6897,    2, 0x0a /* Public */,
     569,    1, 6900,    2, 0x0a /* Public */,
     570,    1, 6903,    2, 0x0a /* Public */,
     571,    1, 6906,    2, 0x0a /* Public */,
     572,    1, 6909,    2, 0x0a /* Public */,
     573,    1, 6912,    2, 0x0a /* Public */,
     574,    1, 6915,    2, 0x0a /* Public */,
     575,    1, 6918,    2, 0x0a /* Public */,
     576,    1, 6921,    2, 0x0a /* Public */,
     577,    1, 6924,    2, 0x0a /* Public */,
     578,    1, 6927,    2, 0x0a /* Public */,
     579,    1, 6930,    2, 0x0a /* Public */,
     580,    1, 6933,    2, 0x0a /* Public */,
     581,    1, 6936,    2, 0x0a /* Public */,
     582,    1, 6939,    2, 0x0a /* Public */,
     583,    1, 6942,    2, 0x0a /* Public */,
     584,    1, 6945,    2, 0x0a /* Public */,
     585,    1, 6948,    2, 0x0a /* Public */,
     586,    1, 6951,    2, 0x0a /* Public */,
     587,    1, 6954,    2, 0x0a /* Public */,
     588,    1, 6957,    2, 0x0a /* Public */,
     589,    1, 6960,    2, 0x0a /* Public */,
     590,    1, 6963,    2, 0x0a /* Public */,
     591,    1, 6966,    2, 0x0a /* Public */,
     592,    1, 6969,    2, 0x0a /* Public */,
     593,    1, 6972,    2, 0x0a /* Public */,
     594,    1, 6975,    2, 0x0a /* Public */,
     595,    1, 6978,    2, 0x0a /* Public */,
     596,    1, 6981,    2, 0x0a /* Public */,
     597,    1, 6984,    2, 0x0a /* Public */,
     598,    1, 6987,    2, 0x0a /* Public */,
     599,    1, 6990,    2, 0x0a /* Public */,
     600,    1, 6993,    2, 0x0a /* Public */,
     601,    1, 6996,    2, 0x0a /* Public */,
     602,    1, 6999,    2, 0x0a /* Public */,
     603,    1, 7002,    2, 0x0a /* Public */,
     604,    1, 7005,    2, 0x0a /* Public */,
     605,    1, 7008,    2, 0x0a /* Public */,
     606,    1, 7011,    2, 0x0a /* Public */,
     607,    1, 7014,    2, 0x0a /* Public */,
     608,    1, 7017,    2, 0x0a /* Public */,
     609,    1, 7020,    2, 0x0a /* Public */,
     610,    1, 7023,    2, 0x0a /* Public */,
     611,    1, 7026,    2, 0x0a /* Public */,
     612,    1, 7029,    2, 0x0a /* Public */,
     613,    1, 7032,    2, 0x0a /* Public */,
     614,    1, 7035,    2, 0x0a /* Public */,
     615,    1, 7038,    2, 0x0a /* Public */,
     616,    1, 7041,    2, 0x0a /* Public */,
     617,    1, 7044,    2, 0x0a /* Public */,
     618,    1, 7047,    2, 0x0a /* Public */,
     619,    1, 7050,    2, 0x0a /* Public */,
     620,    1, 7053,    2, 0x0a /* Public */,
     621,    1, 7056,    2, 0x0a /* Public */,
     622,    1, 7059,    2, 0x0a /* Public */,
     623,    1, 7062,    2, 0x0a /* Public */,
     624,    1, 7065,    2, 0x0a /* Public */,
     625,    1, 7068,    2, 0x0a /* Public */,
     626,    1, 7071,    2, 0x0a /* Public */,
     627,    1, 7074,    2, 0x0a /* Public */,
     628,    1, 7077,    2, 0x0a /* Public */,
     629,    1, 7080,    2, 0x0a /* Public */,
     630,    1, 7083,    2, 0x0a /* Public */,
     631,    1, 7086,    2, 0x0a /* Public */,
     632,    1, 7089,    2, 0x0a /* Public */,
     633,    1, 7092,    2, 0x0a /* Public */,
     634,    1, 7095,    2, 0x0a /* Public */,
     635,    1, 7098,    2, 0x0a /* Public */,
     636,    1, 7101,    2, 0x0a /* Public */,
     637,    1, 7104,    2, 0x0a /* Public */,
     638,    1, 7107,    2, 0x0a /* Public */,
     639,    1, 7110,    2, 0x0a /* Public */,
     640,    1, 7113,    2, 0x0a /* Public */,
     641,    1, 7116,    2, 0x0a /* Public */,
     642,    1, 7119,    2, 0x0a /* Public */,
     643,    1, 7122,    2, 0x0a /* Public */,
     644,    1, 7125,    2, 0x0a /* Public */,
     645,    1, 7128,    2, 0x0a /* Public */,
     646,    1, 7131,    2, 0x0a /* Public */,
     647,    1, 7134,    2, 0x0a /* Public */,
     648,    1, 7137,    2, 0x0a /* Public */,
     649,    1, 7140,    2, 0x0a /* Public */,
     650,    1, 7143,    2, 0x0a /* Public */,
     651,    1, 7146,    2, 0x0a /* Public */,
     652,    1, 7149,    2, 0x0a /* Public */,
     653,    1, 7152,    2, 0x0a /* Public */,
     654,    1, 7155,    2, 0x0a /* Public */,
     655,    1, 7158,    2, 0x0a /* Public */,
     656,    1, 7161,    2, 0x0a /* Public */,
     657,    1, 7164,    2, 0x0a /* Public */,
     658,    1, 7167,    2, 0x0a /* Public */,
     659,    1, 7170,    2, 0x0a /* Public */,
     660,    1, 7173,    2, 0x0a /* Public */,
     661,    1, 7176,    2, 0x0a /* Public */,
     662,    1, 7179,    2, 0x0a /* Public */,
     663,    1, 7182,    2, 0x0a /* Public */,
     664,    1, 7185,    2, 0x0a /* Public */,
     665,    1, 7188,    2, 0x0a /* Public */,
     666,    1, 7191,    2, 0x0a /* Public */,
     667,    1, 7194,    2, 0x0a /* Public */,
     668,    1, 7197,    2, 0x0a /* Public */,
     669,    1, 7200,    2, 0x0a /* Public */,
     670,    1, 7203,    2, 0x0a /* Public */,
     671,    1, 7206,    2, 0x0a /* Public */,
     672,    1, 7209,    2, 0x0a /* Public */,
     673,    1, 7212,    2, 0x0a /* Public */,
     674,    1, 7215,    2, 0x0a /* Public */,
     675,    1, 7218,    2, 0x0a /* Public */,
     676,    1, 7221,    2, 0x0a /* Public */,
     677,    1, 7224,    2, 0x0a /* Public */,
     678,    1, 7227,    2, 0x0a /* Public */,
     679,    1, 7230,    2, 0x0a /* Public */,
     680,    1, 7233,    2, 0x0a /* Public */,
     681,    1, 7236,    2, 0x0a /* Public */,
     682,    1, 7239,    2, 0x0a /* Public */,
     683,    1, 7242,    2, 0x0a /* Public */,
     684,    1, 7245,    2, 0x0a /* Public */,
     685,    1, 7248,    2, 0x0a /* Public */,
     686,    1, 7251,    2, 0x0a /* Public */,
     687,    1, 7254,    2, 0x0a /* Public */,
     688,    1, 7257,    2, 0x0a /* Public */,
     689,    1, 7260,    2, 0x0a /* Public */,
     690,    1, 7263,    2, 0x0a /* Public */,
     691,    1, 7266,    2, 0x0a /* Public */,
     692,    1, 7269,    2, 0x0a /* Public */,
     693,    1, 7272,    2, 0x0a /* Public */,
     694,    1, 7275,    2, 0x0a /* Public */,
     695,    1, 7278,    2, 0x0a /* Public */,
     696,    1, 7281,    2, 0x0a /* Public */,
     697,    1, 7284,    2, 0x0a /* Public */,
     698,    1, 7287,    2, 0x0a /* Public */,
     699,    1, 7290,    2, 0x0a /* Public */,
     700,    1, 7293,    2, 0x0a /* Public */,
     701,    1, 7296,    2, 0x0a /* Public */,
     702,    1, 7299,    2, 0x0a /* Public */,
     703,    1, 7302,    2, 0x0a /* Public */,
     704,    1, 7305,    2, 0x0a /* Public */,
     705,    1, 7308,    2, 0x0a /* Public */,
     706,    1, 7311,    2, 0x0a /* Public */,
     707,    1, 7314,    2, 0x0a /* Public */,
     708,    1, 7317,    2, 0x0a /* Public */,
     709,    1, 7320,    2, 0x0a /* Public */,
     710,    1, 7323,    2, 0x0a /* Public */,
     711,    1, 7326,    2, 0x0a /* Public */,
     712,    1, 7329,    2, 0x0a /* Public */,
     713,    1, 7332,    2, 0x0a /* Public */,
     714,    1, 7335,    2, 0x0a /* Public */,
     715,    1, 7338,    2, 0x0a /* Public */,
     716,    1, 7341,    2, 0x0a /* Public */,
     717,    1, 7344,    2, 0x0a /* Public */,
     718,    1, 7347,    2, 0x0a /* Public */,
     719,    1, 7350,    2, 0x0a /* Public */,
     720,    1, 7353,    2, 0x0a /* Public */,
     721,    1, 7356,    2, 0x0a /* Public */,
     722,    1, 7359,    2, 0x0a /* Public */,
     723,    1, 7362,    2, 0x0a /* Public */,
     724,    1, 7365,    2, 0x0a /* Public */,
     725,    1, 7368,    2, 0x0a /* Public */,
     726,    1, 7371,    2, 0x0a /* Public */,
     727,    1, 7374,    2, 0x0a /* Public */,
     728,    1, 7377,    2, 0x0a /* Public */,
     729,    1, 7380,    2, 0x0a /* Public */,
     730,    1, 7383,    2, 0x0a /* Public */,
     731,    1, 7386,    2, 0x0a /* Public */,
     732,    1, 7389,    2, 0x0a /* Public */,
     733,    1, 7392,    2, 0x0a /* Public */,
     734,    1, 7395,    2, 0x0a /* Public */,
     735,    1, 7398,    2, 0x0a /* Public */,
     736,    1, 7401,    2, 0x0a /* Public */,
     737,    1, 7404,    2, 0x0a /* Public */,
     738,    1, 7407,    2, 0x0a /* Public */,
     739,    1, 7410,    2, 0x0a /* Public */,
     740,    1, 7413,    2, 0x0a /* Public */,
     741,    1, 7416,    2, 0x0a /* Public */,
     742,    1, 7419,    2, 0x0a /* Public */,
     743,    1, 7422,    2, 0x0a /* Public */,
     744,    1, 7425,    2, 0x0a /* Public */,
     745,    1, 7428,    2, 0x0a /* Public */,
     746,    1, 7431,    2, 0x0a /* Public */,
     747,    1, 7434,    2, 0x0a /* Public */,
     748,    1, 7437,    2, 0x0a /* Public */,
     749,    1, 7440,    2, 0x0a /* Public */,
     750,    1, 7443,    2, 0x0a /* Public */,
     751,    1, 7446,    2, 0x0a /* Public */,
     752,    1, 7449,    2, 0x0a /* Public */,
     753,    1, 7452,    2, 0x0a /* Public */,
     754,    1, 7455,    2, 0x0a /* Public */,
     755,    1, 7458,    2, 0x0a /* Public */,
     756,    1, 7461,    2, 0x0a /* Public */,
     757,    1, 7464,    2, 0x0a /* Public */,
     758,    1, 7467,    2, 0x0a /* Public */,
     759,    1, 7470,    2, 0x0a /* Public */,
     760,    1, 7473,    2, 0x0a /* Public */,
     761,    1, 7476,    2, 0x0a /* Public */,
     762,    1, 7479,    2, 0x0a /* Public */,
     763,    1, 7482,    2, 0x0a /* Public */,
     764,    1, 7485,    2, 0x0a /* Public */,
     765,    1, 7488,    2, 0x0a /* Public */,
     766,    1, 7491,    2, 0x0a /* Public */,
     767,    1, 7494,    2, 0x0a /* Public */,
     768,    1, 7497,    2, 0x0a /* Public */,
     769,    1, 7500,    2, 0x0a /* Public */,
     770,    1, 7503,    2, 0x0a /* Public */,
     771,    1, 7506,    2, 0x0a /* Public */,
     772,    1, 7509,    2, 0x0a /* Public */,
     773,    1, 7512,    2, 0x0a /* Public */,
     774,    1, 7515,    2, 0x0a /* Public */,
     775,    1, 7518,    2, 0x0a /* Public */,
     776,    1, 7521,    2, 0x0a /* Public */,
     777,    1, 7524,    2, 0x0a /* Public */,
     778,    1, 7527,    2, 0x0a /* Public */,
     779,    1, 7530,    2, 0x0a /* Public */,
     780,    1, 7533,    2, 0x0a /* Public */,
     781,    1, 7536,    2, 0x0a /* Public */,
     782,    1, 7539,    2, 0x0a /* Public */,
     783,    1, 7542,    2, 0x0a /* Public */,
     784,    1, 7545,    2, 0x0a /* Public */,
     785,    1, 7548,    2, 0x0a /* Public */,
     786,    1, 7551,    2, 0x0a /* Public */,
     787,    1, 7554,    2, 0x0a /* Public */,
     788,    1, 7557,    2, 0x0a /* Public */,
     789,    1, 7560,    2, 0x0a /* Public */,
     790,    1, 7563,    2, 0x0a /* Public */,
     791,    1, 7566,    2, 0x0a /* Public */,
     792,    1, 7569,    2, 0x0a /* Public */,
     793,    1, 7572,    2, 0x0a /* Public */,
     794,    1, 7575,    2, 0x0a /* Public */,
     795,    1, 7578,    2, 0x0a /* Public */,
     796,    1, 7581,    2, 0x0a /* Public */,
     797,    1, 7584,    2, 0x0a /* Public */,
     798,    1, 7587,    2, 0x0a /* Public */,
     799,    1, 7590,    2, 0x0a /* Public */,
     800,    1, 7593,    2, 0x0a /* Public */,
     801,    1, 7596,    2, 0x0a /* Public */,
     802,    1, 7599,    2, 0x0a /* Public */,
     803,    1, 7602,    2, 0x0a /* Public */,
     804,    1, 7605,    2, 0x0a /* Public */,
     805,    1, 7608,    2, 0x0a /* Public */,
     806,    1, 7611,    2, 0x0a /* Public */,
     807,    1, 7614,    2, 0x0a /* Public */,
     808,    1, 7617,    2, 0x0a /* Public */,
     809,    1, 7620,    2, 0x0a /* Public */,
     810,    1, 7623,    2, 0x0a /* Public */,
     811,    1, 7626,    2, 0x0a /* Public */,
     812,    1, 7629,    2, 0x0a /* Public */,
     813,    1, 7632,    2, 0x0a /* Public */,
     814,    1, 7635,    2, 0x0a /* Public */,
     815,    1, 7638,    2, 0x0a /* Public */,
     816,    1, 7641,    2, 0x0a /* Public */,
     817,    1, 7644,    2, 0x0a /* Public */,
     818,    1, 7647,    2, 0x0a /* Public */,
     819,    1, 7650,    2, 0x0a /* Public */,
     820,    1, 7653,    2, 0x0a /* Public */,
     821,    1, 7656,    2, 0x0a /* Public */,
     822,    1, 7659,    2, 0x0a /* Public */,
     823,    1, 7662,    2, 0x0a /* Public */,
     824,    1, 7665,    2, 0x0a /* Public */,
     825,    1, 7668,    2, 0x0a /* Public */,
     826,    1, 7671,    2, 0x0a /* Public */,
     827,    1, 7674,    2, 0x0a /* Public */,
     828,    1, 7677,    2, 0x0a /* Public */,
     829,    0, 7680,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     830,    0, 7681,    2, 0x02 /* Public */,
     831,    0, 7682,    2, 0x02 /* Public */,
     832,    0, 7683,    2, 0x02 /* Public */,
     833,    0, 7684,    2, 0x02 /* Public */,
     834,    0, 7685,    2, 0x02 /* Public */,
     835,    0, 7686,    2, 0x02 /* Public */,
     836,    0, 7687,    2, 0x02 /* Public */,
     837,    1, 7688,    2, 0x02 /* Public */,
     838,    1, 7691,    2, 0x02 /* Public */,
     839,    0, 7694,    2, 0x02 /* Public */,
     840,    0, 7695,    2, 0x02 /* Public */,
     841,    0, 7696,    2, 0x02 /* Public */,
     842,    0, 7697,    2, 0x02 /* Public */,
     843,    0, 7698,    2, 0x02 /* Public */,
     844,    0, 7699,    2, 0x02 /* Public */,
     845,    0, 7700,    2, 0x02 /* Public */,
     846,    0, 7701,    2, 0x02 /* Public */,
     847,    0, 7702,    2, 0x02 /* Public */,
     848,    0, 7703,    2, 0x02 /* Public */,
     849,    0, 7704,    2, 0x02 /* Public */,
     850,    0, 7705,    2, 0x02 /* Public */,
     851,    0, 7706,    2, 0x02 /* Public */,
     852,    0, 7707,    2, 0x02 /* Public */,
     853,    0, 7708,    2, 0x02 /* Public */,
     854,    0, 7709,    2, 0x02 /* Public */,
     855,    0, 7710,    2, 0x02 /* Public */,
     856,    0, 7711,    2, 0x02 /* Public */,
     857,    0, 7712,    2, 0x02 /* Public */,
     858,    0, 7713,    2, 0x02 /* Public */,
     859,    0, 7714,    2, 0x02 /* Public */,
     860,    0, 7715,    2, 0x02 /* Public */,
     861,    0, 7716,    2, 0x02 /* Public */,
     862,    0, 7717,    2, 0x02 /* Public */,
     863,    0, 7718,    2, 0x02 /* Public */,
     864,    0, 7719,    2, 0x02 /* Public */,
     865,    0, 7720,    2, 0x02 /* Public */,
     866,    0, 7721,    2, 0x02 /* Public */,
     867,    0, 7722,    2, 0x02 /* Public */,
     868,    0, 7723,    2, 0x02 /* Public */,
     869,    0, 7724,    2, 0x02 /* Public */,
     870,    0, 7725,    2, 0x02 /* Public */,
     871,    0, 7726,    2, 0x02 /* Public */,
     872,    0, 7727,    2, 0x02 /* Public */,
     873,    0, 7728,    2, 0x02 /* Public */,
     874,    0, 7729,    2, 0x02 /* Public */,
     875,    0, 7730,    2, 0x02 /* Public */,
     876,    0, 7731,    2, 0x02 /* Public */,
     877,    0, 7732,    2, 0x02 /* Public */,
     878,    0, 7733,    2, 0x02 /* Public */,
     879,    0, 7734,    2, 0x02 /* Public */,
     880,    0, 7735,    2, 0x02 /* Public */,
     881,    0, 7736,    2, 0x02 /* Public */,
     882,    0, 7737,    2, 0x02 /* Public */,
     883,    0, 7738,    2, 0x02 /* Public */,
     884,    0, 7739,    2, 0x02 /* Public */,
     885,    0, 7740,    2, 0x02 /* Public */,
     886,    0, 7741,    2, 0x02 /* Public */,
     887,    0, 7742,    2, 0x02 /* Public */,
     888,    0, 7743,    2, 0x02 /* Public */,
     889,    0, 7744,    2, 0x02 /* Public */,
     890,    0, 7745,    2, 0x02 /* Public */,
     891,    0, 7746,    2, 0x02 /* Public */,
     892,    0, 7747,    2, 0x02 /* Public */,
     893,    0, 7748,    2, 0x02 /* Public */,
     894,    0, 7749,    2, 0x02 /* Public */,
     895,    0, 7750,    2, 0x02 /* Public */,
     896,    0, 7751,    2, 0x02 /* Public */,
     897,    0, 7752,    2, 0x02 /* Public */,
     898,    0, 7753,    2, 0x02 /* Public */,
     899,    0, 7754,    2, 0x02 /* Public */,
     900,    0, 7755,    2, 0x02 /* Public */,
     901,    0, 7756,    2, 0x02 /* Public */,
     902,    0, 7757,    2, 0x02 /* Public */,
     903,    0, 7758,    2, 0x02 /* Public */,
     904,    0, 7759,    2, 0x02 /* Public */,
     905,    0, 7760,    2, 0x02 /* Public */,
     906,    0, 7761,    2, 0x02 /* Public */,
     907,    0, 7762,    2, 0x02 /* Public */,
     908,    0, 7763,    2, 0x02 /* Public */,
     909,    0, 7764,    2, 0x02 /* Public */,
     910,    0, 7765,    2, 0x02 /* Public */,
     911,    0, 7766,    2, 0x02 /* Public */,
     912,    0, 7767,    2, 0x02 /* Public */,
     913,    0, 7768,    2, 0x02 /* Public */,
     914,    0, 7769,    2, 0x02 /* Public */,
     915,    0, 7770,    2, 0x02 /* Public */,
     916,    0, 7771,    2, 0x02 /* Public */,
     917,    0, 7772,    2, 0x02 /* Public */,
     918,    0, 7773,    2, 0x02 /* Public */,
     919,    0, 7774,    2, 0x02 /* Public */,
     920,    0, 7775,    2, 0x02 /* Public */,
     921,    0, 7776,    2, 0x02 /* Public */,
     922,    0, 7777,    2, 0x02 /* Public */,
     923,    0, 7778,    2, 0x02 /* Public */,
     924,    0, 7779,    2, 0x02 /* Public */,
     925,    0, 7780,    2, 0x02 /* Public */,
     926,    0, 7781,    2, 0x02 /* Public */,
     927,    0, 7782,    2, 0x02 /* Public */,
     928,    0, 7783,    2, 0x02 /* Public */,
     929,    0, 7784,    2, 0x02 /* Public */,
     930,    0, 7785,    2, 0x02 /* Public */,
     931,    0, 7786,    2, 0x02 /* Public */,
     932,    0, 7787,    2, 0x02 /* Public */,
     933,    0, 7788,    2, 0x02 /* Public */,
     934,    0, 7789,    2, 0x02 /* Public */,
     935,    0, 7790,    2, 0x02 /* Public */,
     936,    0, 7791,    2, 0x02 /* Public */,
     937,    0, 7792,    2, 0x02 /* Public */,
     938,    0, 7793,    2, 0x02 /* Public */,
     939,    0, 7794,    2, 0x02 /* Public */,
     940,    0, 7795,    2, 0x02 /* Public */,
     941,    0, 7796,    2, 0x02 /* Public */,
     942,    0, 7797,    2, 0x02 /* Public */,
     943,    0, 7798,    2, 0x02 /* Public */,
     944,    0, 7799,    2, 0x02 /* Public */,
     945,    0, 7800,    2, 0x02 /* Public */,
     946,    0, 7801,    2, 0x02 /* Public */,
     947,    0, 7802,    2, 0x02 /* Public */,
     948,    0, 7803,    2, 0x02 /* Public */,
     949,    0, 7804,    2, 0x02 /* Public */,
     950,    0, 7805,    2, 0x02 /* Public */,
     951,    0, 7806,    2, 0x02 /* Public */,
     952,    0, 7807,    2, 0x02 /* Public */,
     953,    0, 7808,    2, 0x02 /* Public */,
     954,    0, 7809,    2, 0x02 /* Public */,
     955,    0, 7810,    2, 0x02 /* Public */,
     956,    0, 7811,    2, 0x02 /* Public */,
     957,    0, 7812,    2, 0x02 /* Public */,
     958,    0, 7813,    2, 0x02 /* Public */,
     959,    0, 7814,    2, 0x02 /* Public */,
     960,    0, 7815,    2, 0x02 /* Public */,
     961,    0, 7816,    2, 0x02 /* Public */,
     962,    0, 7817,    2, 0x02 /* Public */,
     963,    0, 7818,    2, 0x02 /* Public */,
     964,    0, 7819,    2, 0x02 /* Public */,
     965,    0, 7820,    2, 0x02 /* Public */,
     966,    0, 7821,    2, 0x02 /* Public */,
     967,    0, 7822,    2, 0x02 /* Public */,
     968,    0, 7823,    2, 0x02 /* Public */,
     969,    0, 7824,    2, 0x02 /* Public */,
     970,    0, 7825,    2, 0x02 /* Public */,
     971,    0, 7826,    2, 0x02 /* Public */,
     972,    0, 7827,    2, 0x02 /* Public */,
     973,    0, 7828,    2, 0x02 /* Public */,
     974,    0, 7829,    2, 0x02 /* Public */,
     975,    0, 7830,    2, 0x02 /* Public */,
     976,    0, 7831,    2, 0x02 /* Public */,
     977,    0, 7832,    2, 0x02 /* Public */,
     978,    0, 7833,    2, 0x02 /* Public */,
     979,    0, 7834,    2, 0x02 /* Public */,
     980,    0, 7835,    2, 0x02 /* Public */,
     981,    0, 7836,    2, 0x02 /* Public */,
     982,    0, 7837,    2, 0x02 /* Public */,
     983,    0, 7838,    2, 0x02 /* Public */,
     984,    0, 7839,    2, 0x02 /* Public */,
     985,    0, 7840,    2, 0x02 /* Public */,
     986,    0, 7841,    2, 0x02 /* Public */,
     987,    0, 7842,    2, 0x02 /* Public */,
     988,    0, 7843,    2, 0x02 /* Public */,
     989,    0, 7844,    2, 0x02 /* Public */,
     990,    0, 7845,    2, 0x02 /* Public */,
     991,    0, 7846,    2, 0x02 /* Public */,
     992,    0, 7847,    2, 0x02 /* Public */,
     993,    0, 7848,    2, 0x02 /* Public */,
     994,    0, 7849,    2, 0x02 /* Public */,
     995,    0, 7850,    2, 0x02 /* Public */,
     996,    0, 7851,    2, 0x02 /* Public */,
     997,    0, 7852,    2, 0x02 /* Public */,
     998,    0, 7853,    2, 0x02 /* Public */,
     999,    0, 7854,    2, 0x02 /* Public */,
    1000,    0, 7855,    2, 0x02 /* Public */,
    1001,    0, 7856,    2, 0x02 /* Public */,
    1002,    0, 7857,    2, 0x02 /* Public */,
    1003,    0, 7858,    2, 0x02 /* Public */,
    1004,    0, 7859,    2, 0x02 /* Public */,
    1005,    0, 7860,    2, 0x02 /* Public */,
    1006,    0, 7861,    2, 0x02 /* Public */,
    1007,    0, 7862,    2, 0x02 /* Public */,
    1008,    0, 7863,    2, 0x02 /* Public */,
    1009,    0, 7864,    2, 0x02 /* Public */,
    1010,    0, 7865,    2, 0x02 /* Public */,
    1011,    0, 7866,    2, 0x02 /* Public */,
    1012,    0, 7867,    2, 0x02 /* Public */,
    1013,    0, 7868,    2, 0x02 /* Public */,
    1014,    0, 7869,    2, 0x02 /* Public */,
    1015,    0, 7870,    2, 0x02 /* Public */,
    1016,    0, 7871,    2, 0x02 /* Public */,
    1017,    0, 7872,    2, 0x02 /* Public */,
    1018,    0, 7873,    2, 0x02 /* Public */,
    1019,    0, 7874,    2, 0x02 /* Public */,
    1020,    0, 7875,    2, 0x02 /* Public */,
    1021,    0, 7876,    2, 0x02 /* Public */,
    1022,    0, 7877,    2, 0x02 /* Public */,
    1023,    0, 7878,    2, 0x02 /* Public */,
    1024,    0, 7879,    2, 0x02 /* Public */,
    1025,    0, 7880,    2, 0x02 /* Public */,
    1026,    0, 7881,    2, 0x02 /* Public */,
    1027,    0, 7882,    2, 0x02 /* Public */,
    1028,    0, 7883,    2, 0x02 /* Public */,
    1029,    0, 7884,    2, 0x02 /* Public */,
    1030,    0, 7885,    2, 0x02 /* Public */,
    1031,    0, 7886,    2, 0x02 /* Public */,
    1032,    0, 7887,    2, 0x02 /* Public */,
    1033,    0, 7888,    2, 0x02 /* Public */,
    1034,    0, 7889,    2, 0x02 /* Public */,
    1035,    0, 7890,    2, 0x02 /* Public */,
    1036,    0, 7891,    2, 0x02 /* Public */,
    1037,    0, 7892,    2, 0x02 /* Public */,
    1038,    0, 7893,    2, 0x02 /* Public */,

 // signals: parameters
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
    QMetaType::Void, 0x80000000 | 16,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,   19,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   19,    3,
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
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, 0x80000000 | 16,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,   19,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   19,    3,
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
    QMetaType::UInt,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,   19,
    QMetaType::UChar, QMetaType::UInt,   19,
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
    1039, QMetaType::UInt, 0x00495103,
    1040, QMetaType::UInt, 0x00495103,
    1041, QMetaType::UShort, 0x00495103,
    1042, QMetaType::UShort, 0x00495103,
    1043, QMetaType::UShort, 0x00495103,
    1044, QMetaType::UShort, 0x00495103,
    1045, 0x80000000 | 16, 0x0049510b,
    1046, QMetaType::UShort, 0x00495103,
    1047, QMetaType::UShort, 0x00495103,
    1048, QMetaType::UShort, 0x00495103,
    1049, QMetaType::UShort, 0x00495103,
    1050, QMetaType::UShort, 0x00495103,
    1051, QMetaType::UShort, 0x00495103,
    1052, QMetaType::UShort, 0x00495103,
    1053, QMetaType::UShort, 0x00495103,
    1054, QMetaType::UShort, 0x00495103,
    1055, QMetaType::UShort, 0x00495103,
    1056, QMetaType::UShort, 0x00495103,
    1057, QMetaType::UShort, 0x00495103,
    1058, QMetaType::UShort, 0x00495103,
    1059, QMetaType::UShort, 0x00495103,
    1060, QMetaType::UShort, 0x00495103,
    1061, QMetaType::UShort, 0x00495103,
    1062, QMetaType::UShort, 0x00495103,
    1063, QMetaType::UShort, 0x00495103,
    1064, QMetaType::UShort, 0x00495103,
    1065, QMetaType::UShort, 0x00495103,
    1066, QMetaType::UShort, 0x00495103,
    1067, QMetaType::UShort, 0x00495103,
    1068, QMetaType::UShort, 0x00495103,
    1069, QMetaType::UShort, 0x00495103,
    1070, QMetaType::UShort, 0x00495103,
    1071, QMetaType::UShort, 0x00495103,
    1072, QMetaType::UShort, 0x00495103,
    1073, QMetaType::UShort, 0x00495103,
    1074, QMetaType::UShort, 0x00495103,
    1075, QMetaType::UShort, 0x00495103,
    1076, QMetaType::UShort, 0x00495103,
    1077, QMetaType::UShort, 0x00495103,
    1078, QMetaType::UShort, 0x00495103,
    1079, QMetaType::UShort, 0x00495103,
    1080, QMetaType::UShort, 0x00495103,
    1081, QMetaType::UShort, 0x00495103,
    1082, QMetaType::UShort, 0x00495103,
    1083, QMetaType::UShort, 0x00495103,
    1084, QMetaType::UShort, 0x00495103,
    1085, QMetaType::UShort, 0x00495103,
    1086, QMetaType::UShort, 0x00495103,
    1087, QMetaType::UShort, 0x00495103,
    1088, QMetaType::UShort, 0x00495103,
    1089, QMetaType::UShort, 0x00495103,
    1090, QMetaType::UShort, 0x00495103,
    1091, QMetaType::UShort, 0x00495103,
    1092, QMetaType::UShort, 0x00495103,
    1093, QMetaType::UShort, 0x00495103,
    1094, QMetaType::UShort, 0x00495103,
    1095, QMetaType::UShort, 0x00495103,
    1096, QMetaType::UShort, 0x00495103,
    1097, QMetaType::UShort, 0x00495103,
    1098, QMetaType::UShort, 0x00495103,
    1099, QMetaType::UShort, 0x00495103,
    1100, QMetaType::UShort, 0x00495103,
    1101, QMetaType::UShort, 0x00495103,
    1102, QMetaType::UShort, 0x00495103,
    1103, QMetaType::UShort, 0x00495103,
    1104, QMetaType::UShort, 0x00495103,
    1105, QMetaType::UShort, 0x00495103,
    1106, QMetaType::UShort, 0x00495103,
    1107, QMetaType::UShort, 0x00495103,
    1108, QMetaType::UShort, 0x00495103,
    1109, QMetaType::UShort, 0x00495103,
    1110, QMetaType::UShort, 0x00495103,
    1111, QMetaType::UShort, 0x00495103,
    1112, QMetaType::UShort, 0x00495103,
    1113, QMetaType::UShort, 0x00495103,
    1114, QMetaType::UShort, 0x00495103,
    1115, QMetaType::UShort, 0x00495103,
    1116, QMetaType::UShort, 0x00495103,
    1117, QMetaType::UShort, 0x00495103,
    1118, QMetaType::UShort, 0x00495103,
    1119, QMetaType::UShort, 0x00495103,
    1120, QMetaType::UShort, 0x00495103,
    1121, QMetaType::UShort, 0x00495103,
    1122, QMetaType::UShort, 0x00495103,
    1123, QMetaType::UShort, 0x00495103,
    1124, QMetaType::UShort, 0x00495103,
    1125, QMetaType::UShort, 0x00495103,
    1126, QMetaType::UShort, 0x00495103,
    1127, QMetaType::UShort, 0x00495103,
    1128, QMetaType::UShort, 0x00495103,
    1129, QMetaType::UShort, 0x00495103,
    1130, QMetaType::UShort, 0x00495103,
    1131, QMetaType::UShort, 0x00495103,
    1132, QMetaType::UShort, 0x00495103,
    1133, QMetaType::UShort, 0x00495103,
    1134, QMetaType::UShort, 0x00495103,
    1135, QMetaType::UShort, 0x00495103,
    1136, QMetaType::UShort, 0x00495103,
    1137, QMetaType::UShort, 0x00495103,
    1138, QMetaType::UShort, 0x00495103,
    1139, QMetaType::UShort, 0x00495103,
    1140, QMetaType::UShort, 0x00495103,
    1141, QMetaType::UShort, 0x00495103,
    1142, QMetaType::UShort, 0x00495103,
    1143, QMetaType::UShort, 0x00495103,
    1144, QMetaType::UShort, 0x00495103,
    1145, QMetaType::UShort, 0x00495103,
    1146, QMetaType::UShort, 0x00495103,
    1147, QMetaType::UShort, 0x00495103,
    1148, QMetaType::UShort, 0x00495103,
    1149, QMetaType::UShort, 0x00495103,
    1150, QMetaType::UShort, 0x00495103,
    1151, QMetaType::UShort, 0x00495103,
    1152, QMetaType::UShort, 0x00495103,
    1153, QMetaType::UShort, 0x00495103,
    1154, QMetaType::UShort, 0x00495103,
    1155, QMetaType::UShort, 0x00495103,
    1156, QMetaType::UShort, 0x00495103,
    1157, QMetaType::UShort, 0x00495103,
    1158, QMetaType::UShort, 0x00495103,
    1159, QMetaType::UShort, 0x00495103,
    1160, QMetaType::UShort, 0x00495103,
    1161, QMetaType::UShort, 0x00495103,
    1162, QMetaType::UShort, 0x00495103,
    1163, QMetaType::UShort, 0x00495103,
    1164, QMetaType::UShort, 0x00495103,
    1165, QMetaType::UShort, 0x00495103,
    1166, QMetaType::UShort, 0x00495103,
    1167, QMetaType::UShort, 0x00495103,
    1168, QMetaType::UShort, 0x00495103,
    1169, QMetaType::UShort, 0x00495103,
    1170, QMetaType::UShort, 0x00495103,
    1171, QMetaType::UShort, 0x00495103,
    1172, QMetaType::UShort, 0x00495103,
    1173, QMetaType::UShort, 0x00495103,
    1174, QMetaType::UShort, 0x00495103,
    1175, QMetaType::UShort, 0x00495103,
    1176, QMetaType::UShort, 0x00495103,
    1177, QMetaType::UShort, 0x00495103,
    1178, QMetaType::UShort, 0x00495103,
    1179, QMetaType::UShort, 0x00495103,
    1180, QMetaType::UShort, 0x00495103,
    1181, QMetaType::UShort, 0x00495103,
    1182, QMetaType::UShort, 0x00495103,
    1183, QMetaType::UShort, 0x00495103,
    1184, QMetaType::UShort, 0x00495103,
    1185, QMetaType::UShort, 0x00495103,
    1186, QMetaType::UShort, 0x00495103,
    1187, QMetaType::UShort, 0x00495103,
    1188, QMetaType::UShort, 0x00495103,
    1189, QMetaType::UShort, 0x00495103,
    1190, QMetaType::UShort, 0x00495103,
    1191, QMetaType::UShort, 0x00495103,
    1192, QMetaType::UShort, 0x00495103,
    1193, QMetaType::UShort, 0x00495103,
    1194, QMetaType::UShort, 0x00495103,
    1195, QMetaType::UShort, 0x00495103,
    1196, QMetaType::UShort, 0x00495103,
    1197, QMetaType::UShort, 0x00495103,
    1198, QMetaType::UShort, 0x00495103,
    1199, QMetaType::UShort, 0x00495103,
    1200, QMetaType::UShort, 0x00495103,
    1201, QMetaType::UShort, 0x00495103,
    1202, QMetaType::UShort, 0x00495103,
    1203, QMetaType::UShort, 0x00495103,
    1204, QMetaType::UShort, 0x00495103,
    1205, QMetaType::UShort, 0x00495103,
    1206, QMetaType::UShort, 0x00495103,
    1207, QMetaType::UShort, 0x00495103,
    1208, QMetaType::UShort, 0x00495103,
    1209, QMetaType::UShort, 0x00495103,
    1210, QMetaType::UShort, 0x00495103,
    1211, QMetaType::UShort, 0x00495103,
    1212, QMetaType::UShort, 0x00495103,
    1213, QMetaType::UShort, 0x00495103,
    1214, QMetaType::UShort, 0x00495103,
    1215, QMetaType::UShort, 0x00495103,
    1216, QMetaType::UShort, 0x00495103,
    1217, QMetaType::UShort, 0x00495103,
    1218, QMetaType::UShort, 0x00495103,
    1219, QMetaType::UShort, 0x00495103,
    1220, QMetaType::UShort, 0x00495103,
    1221, QMetaType::UShort, 0x00495103,
    1222, QMetaType::UShort, 0x00495103,
    1223, QMetaType::UShort, 0x00495103,
    1224, QMetaType::UShort, 0x00495103,
    1225, QMetaType::UShort, 0x00495103,
    1226, QMetaType::UShort, 0x00495103,
    1227, QMetaType::UShort, 0x00495103,
    1228, QMetaType::UShort, 0x00495103,
    1229, QMetaType::UShort, 0x00495103,
    1230, QMetaType::UShort, 0x00495103,
    1231, QMetaType::UShort, 0x00495103,
    1232, QMetaType::UShort, 0x00495103,
    1233, QMetaType::UShort, 0x00495103,
    1234, QMetaType::UShort, 0x00495103,
    1235, QMetaType::UShort, 0x00495103,
    1236, QMetaType::UShort, 0x00495103,
    1237, QMetaType::UShort, 0x00495103,
    1238, QMetaType::UShort, 0x00495103,
    1239, QMetaType::UShort, 0x00495103,
    1240, QMetaType::UShort, 0x00495103,
    1241, QMetaType::UShort, 0x00495103,
    1242, QMetaType::UShort, 0x00495103,
    1243, QMetaType::UShort, 0x00495103,
    1244, QMetaType::UShort, 0x00495103,
    1245, QMetaType::UShort, 0x00495103,
    1246, QMetaType::UInt, 0x00495103,
    1247, QMetaType::UInt, 0x00495103,
    1248, QMetaType::UShort, 0x00495103,
    1249, QMetaType::UShort, 0x00495103,
    1250, QMetaType::UShort, 0x00495103,
    1251, QMetaType::UShort, 0x00495103,
    1252, QMetaType::UChar, 0x00495103,
    1253, QMetaType::UChar, 0x00495103,
    1254, QMetaType::UChar, 0x00495103,
    1255, QMetaType::UChar, 0x00495103,
    1256, QMetaType::UChar, 0x00495103,
    1257, QMetaType::UChar, 0x00495103,
    1258, QMetaType::UChar, 0x00495103,
    1259, QMetaType::UChar, 0x00495103,
    1260, QMetaType::UChar, 0x00495103,
    1261, QMetaType::UChar, 0x00495103,
    1262, QMetaType::UChar, 0x00495103,
    1263, QMetaType::UChar, 0x00495103,
    1264, QMetaType::UChar, 0x00495103,
    1265, QMetaType::UChar, 0x00495103,
    1266, QMetaType::UChar, 0x00495103,
    1267, QMetaType::UChar, 0x00495103,
    1268, QMetaType::UChar, 0x00495103,
    1269, QMetaType::UChar, 0x00495103,
    1270, QMetaType::UChar, 0x00495103,
    1271, QMetaType::UChar, 0x00495103,
    1272, QMetaType::UChar, 0x00495103,
    1273, QMetaType::UChar, 0x00495103,
    1274, QMetaType::UChar, 0x00495103,
    1275, QMetaType::UChar, 0x00495103,
    1276, QMetaType::UChar, 0x00495103,
    1277, QMetaType::UChar, 0x00495103,
    1278, QMetaType::UChar, 0x00495103,
    1279, QMetaType::UChar, 0x00495103,
    1280, QMetaType::UChar, 0x00495103,
    1281, QMetaType::UChar, 0x00495103,
    1282, QMetaType::UChar, 0x00495103,
    1283, QMetaType::UChar, 0x00495103,
    1284, QMetaType::UChar, 0x00495103,
    1285, QMetaType::UChar, 0x00495103,
    1286, QMetaType::UChar, 0x00495103,
    1287, QMetaType::UChar, 0x00495103,
    1288, QMetaType::UChar, 0x00495103,
    1289, QMetaType::UChar, 0x00495103,
    1290, QMetaType::UChar, 0x00495103,
    1291, QMetaType::UChar, 0x00495103,
    1292, QMetaType::UChar, 0x00495103,
    1293, QMetaType::UChar, 0x00495103,
    1294, QMetaType::UChar, 0x00495103,
    1295, QMetaType::UChar, 0x00495103,
    1296, QMetaType::UChar, 0x00495103,
    1297, QMetaType::UChar, 0x00495103,
    1298, QMetaType::UChar, 0x00495103,
    1299, QMetaType::UChar, 0x00495103,
    1300, QMetaType::UChar, 0x00495103,
    1301, QMetaType::UChar, 0x00495103,
    1302, QMetaType::UChar, 0x00495103,
    1303, QMetaType::UChar, 0x00495103,
    1304, QMetaType::UChar, 0x00495103,
    1305, QMetaType::UChar, 0x00495103,
    1306, QMetaType::UChar, 0x00495103,
    1307, QMetaType::UChar, 0x00495103,
    1308, QMetaType::UChar, 0x00495103,
    1309, QMetaType::UChar, 0x00495103,
    1310, QMetaType::UChar, 0x00495103,
    1311, QMetaType::UChar, 0x00495103,
    1312, QMetaType::UChar, 0x00495103,
    1313, QMetaType::UChar, 0x00495103,
    1314, QMetaType::UChar, 0x00495103,
    1315, QMetaType::UChar, 0x00495103,
    1316, QMetaType::UChar, 0x00495103,
    1317, QMetaType::UChar, 0x00495103,
    1318, QMetaType::UChar, 0x00495103,
    1319, QMetaType::UChar, 0x00495103,
    1320, QMetaType::UChar, 0x00495103,
    1321, QMetaType::UChar, 0x00495103,
    1322, QMetaType::UChar, 0x00495103,
    1323, QMetaType::UChar, 0x00495103,
    1324, QMetaType::UChar, 0x00495103,
    1325, QMetaType::UChar, 0x00495103,
    1326, QMetaType::UChar, 0x00495103,
    1327, QMetaType::UChar, 0x00495103,
    1328, QMetaType::UChar, 0x00495103,
    1329, QMetaType::UChar, 0x00495103,
    1330, QMetaType::UChar, 0x00495103,
    1331, QMetaType::UChar, 0x00495103,
    1332, QMetaType::UChar, 0x00495103,
    1333, QMetaType::UChar, 0x00495103,
    1334, QMetaType::UChar, 0x00495103,
    1335, QMetaType::UChar, 0x00495103,
    1336, QMetaType::UChar, 0x00495103,
    1337, QMetaType::UChar, 0x00495103,
    1338, QMetaType::UChar, 0x00495103,
    1339, QMetaType::UChar, 0x00495103,
    1340, QMetaType::UChar, 0x00495103,
    1341, QMetaType::UChar, 0x00495103,
    1342, QMetaType::UChar, 0x00495103,
    1343, QMetaType::UChar, 0x00495103,
    1344, QMetaType::UChar, 0x00495103,
    1345, QMetaType::UChar, 0x00495103,
    1346, QMetaType::UChar, 0x00495103,
    1347, QMetaType::UChar, 0x00495103,
    1348, QMetaType::UChar, 0x00495103,
    1349, QMetaType::UChar, 0x00495103,
    1350, QMetaType::UChar, 0x00495103,
    1351, QMetaType::UChar, 0x00495103,
    1352, QMetaType::UChar, 0x00495103,
    1353, QMetaType::UChar, 0x00495103,
    1354, QMetaType::UChar, 0x00495103,
    1355, QMetaType::UChar, 0x00495103,
    1356, QMetaType::UChar, 0x00495103,
    1357, QMetaType::UChar, 0x00495103,
    1358, QMetaType::UChar, 0x00495103,
    1359, QMetaType::UChar, 0x00495103,
    1360, QMetaType::UChar, 0x00495103,
    1361, QMetaType::UChar, 0x00495103,
    1362, QMetaType::UChar, 0x00495103,
    1363, QMetaType::UChar, 0x00495103,
    1364, QMetaType::UChar, 0x00495103,
    1365, QMetaType::UChar, 0x00495103,
    1366, QMetaType::UChar, 0x00495103,
    1367, QMetaType::UChar, 0x00495103,
    1368, QMetaType::UChar, 0x00495103,
    1369, QMetaType::UChar, 0x00495103,
    1370, QMetaType::UChar, 0x00495103,
    1371, QMetaType::UChar, 0x00495103,
    1372, QMetaType::UChar, 0x00495103,
    1373, QMetaType::UChar, 0x00495103,
    1374, QMetaType::UChar, 0x00495103,
    1375, QMetaType::UChar, 0x00495103,
    1376, QMetaType::UChar, 0x00495103,
    1377, QMetaType::UChar, 0x00495103,
    1378, QMetaType::UChar, 0x00495103,
    1379, QMetaType::UChar, 0x00495103,
    1380, QMetaType::UChar, 0x00495103,
    1381, QMetaType::UChar, 0x00495103,
    1382, QMetaType::UChar, 0x00495103,
    1383, QMetaType::UChar, 0x00495103,
    1384, QMetaType::UChar, 0x00495103,
    1385, QMetaType::UChar, 0x00495103,
    1386, QMetaType::UChar, 0x00495103,
    1387, QMetaType::UChar, 0x00495103,
    1388, QMetaType::UChar, 0x00495103,
    1389, QMetaType::UChar, 0x00495103,
    1390, QMetaType::UChar, 0x00495103,
    1391, QMetaType::UChar, 0x00495103,
    1392, QMetaType::UChar, 0x00495103,
    1393, QMetaType::UChar, 0x00495103,
    1394, QMetaType::UChar, 0x00495103,
    1395, QMetaType::UChar, 0x00495103,
    1396, QMetaType::UChar, 0x00495103,
    1397, QMetaType::UChar, 0x00495103,
    1398, QMetaType::UChar, 0x00495103,
    1399, QMetaType::UChar, 0x00495103,
    1400, QMetaType::UChar, 0x00495103,
    1401, QMetaType::UChar, 0x00495103,
    1402, QMetaType::UChar, 0x00495103,
    1403, QMetaType::UChar, 0x00495103,
    1404, QMetaType::UChar, 0x00495103,
    1405, QMetaType::UChar, 0x00495103,
    1406, QMetaType::UChar, 0x00495103,
    1407, QMetaType::UChar, 0x00495103,
    1408, QMetaType::UChar, 0x00495103,
    1409, QMetaType::UChar, 0x00495103,
    1410, QMetaType::UChar, 0x00495103,
    1411, QMetaType::UChar, 0x00495103,
    1412, QMetaType::UChar, 0x00495103,
    1413, QMetaType::UChar, 0x00495103,
    1414, QMetaType::UChar, 0x00495103,
    1415, QMetaType::UChar, 0x00495103,
    1416, QMetaType::UChar, 0x00495103,
    1417, QMetaType::UChar, 0x00495103,
    1418, QMetaType::UChar, 0x00495103,
    1419, QMetaType::UChar, 0x00495103,
    1420, QMetaType::UChar, 0x00495103,
    1421, QMetaType::UChar, 0x00495103,
    1422, QMetaType::UChar, 0x00495103,
    1423, QMetaType::UChar, 0x00495103,
    1424, QMetaType::UChar, 0x00495103,
    1425, QMetaType::UChar, 0x00495103,
    1426, QMetaType::UChar, 0x00495103,
    1427, QMetaType::UChar, 0x00495103,
    1428, QMetaType::UChar, 0x00495103,
    1429, QMetaType::UChar, 0x00495103,
    1430, QMetaType::UChar, 0x00495103,
    1431, QMetaType::UChar, 0x00495103,
    1432, QMetaType::UChar, 0x00495103,
    1433, QMetaType::UChar, 0x00495103,
    1434, QMetaType::UChar, 0x00495103,
    1435, QMetaType::UChar, 0x00495103,
    1436, QMetaType::UChar, 0x00495103,
    1437, QMetaType::UChar, 0x00495103,
    1438, QMetaType::UChar, 0x00495103,
    1439, QMetaType::UChar, 0x00495103,
    1440, QMetaType::UChar, 0x00495103,
    1441, QMetaType::UChar, 0x00495103,
    1442, QMetaType::UChar, 0x00495103,
    1443, QMetaType::UChar, 0x00495103,
    1444, QMetaType::UChar, 0x00495103,
    1445, QMetaType::UChar, 0x00495103,
    1446, QMetaType::UChar, 0x00495103,
    1447, QMetaType::UChar, 0x00495103,
    1448, QMetaType::UChar, 0x00495103,
    1449, QMetaType::UChar, 0x00495103,
    1450, QMetaType::UChar, 0x00495103,
    1451, QMetaType::UChar, 0x00495103,
    1452, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       8,
      10,
      12,
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
      84,
      86,
      88,
      90,
      92,
      94,
      96,
      98,
     100,
     102,
     104,
     106,
     108,
     110,
     112,
     114,
     116,
     118,
     120,
     122,
     124,
     126,
     128,
     130,
     132,
     134,
     136,
     138,
     140,
     142,
     144,
     146,
     148,
     150,
     152,
     154,
     156,
     158,
     160,
     162,
     164,
     166,
     168,
     170,
     172,
     174,
     176,
     178,
     180,
     182,
     184,
     186,
     188,
     190,
     192,
     194,
     196,
     198,
     200,
     202,
     204,
     206,
     208,
     210,
     212,
     214,
     216,
     218,
     220,
     222,
     224,
     226,
     228,
     230,
     232,
     234,
     236,
     238,
     240,
     242,
     244,
     246,
     248,
     250,
     252,
     254,
     256,
     258,
     260,
     262,
     264,
     266,
     268,
     270,
     272,
     274,
     276,
     278,
     280,
     282,
     284,
     286,
     288,
     290,
     292,
     294,
     296,
     298,
     300,
     302,
     304,
     306,
     308,
     310,
     312,
     314,
     316,
     318,
     320,
     322,
     324,
     326,
     328,
     330,
     332,
     334,
     336,
     338,
     340,
     342,
     344,
     346,
     348,
     350,
     352,
     354,
     356,
     358,
     360,
     362,
     364,
     366,
     368,
     370,
     372,
     374,
     376,
     378,
     380,
     382,
     384,
     386,
     388,
     390,
     392,
     394,
     396,
     398,
     400,
     402,
     404,
     406,
     408,
     410,
     412,
     414,
       1,
       3,
       5,
       7,
       9,
      11,
      13,
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
      85,
      87,
      89,
      91,
      93,
      95,
      97,
      99,
     101,
     103,
     105,
     107,
     109,
     111,
     113,
     115,
     117,
     119,
     121,
     123,
     125,
     127,
     129,
     131,
     133,
     135,
     137,
     139,
     141,
     143,
     145,
     147,
     149,
     151,
     153,
     155,
     157,
     159,
     161,
     163,
     165,
     167,
     169,
     171,
     173,
     175,
     177,
     179,
     181,
     183,
     185,
     187,
     189,
     191,
     193,
     195,
     197,
     199,
     201,
     203,
     205,
     207,
     209,
     211,
     213,
     215,
     217,
     219,
     221,
     223,
     225,
     227,
     229,
     231,
     233,
     235,
     237,
     239,
     241,
     243,
     245,
     247,
     249,
     251,
     253,
     255,
     257,
     259,
     261,
     263,
     265,
     267,
     269,
     271,
     273,
     275,
     277,
     279,
     281,
     283,
     285,
     287,
     289,
     291,
     293,
     295,
     297,
     299,
     301,
     303,
     305,
     307,
     309,
     311,
     313,
     315,
     317,
     319,
     321,
     323,
     325,
     327,
     329,
     331,
     333,
     335,
     337,
     339,
     341,
     343,
     345,
     347,
     349,
     351,
     353,
     355,
     357,
     359,
     361,
     363,
     365,
     367,
     369,
     371,
     373,
     375,
     377,
     379,
     381,
     383,
     385,
     387,
     389,
     391,
     393,
     395,
     397,
     399,
     401,
     403,
     405,
     407,
     409,
     411,
     413,
     415,

       0        // eod
};

void DebugLogEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DebugLogEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flightTimeChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: _t->FlightTimeChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->objectIDChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 3: _t->ObjectIDChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->flightChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 5: _t->FlightChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 6: _t->entryChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 7: _t->EntryChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 8: _t->instanceIDChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 9: _t->InstanceIDChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 10: _t->sizeChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 11: _t->SizeChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 12: _t->typeChanged((*reinterpret_cast< const DebugLogEntry_Type::Enum(*)>(_a[1]))); break;
        case 13: _t->TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 14: _t->dataChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 15: _t->DataChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 16: _t->data0Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 17: _t->Data_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->data1Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 19: _t->Data_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->data2Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 21: _t->Data_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->data3Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 23: _t->Data_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->data4Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 25: _t->Data_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->data5Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 27: _t->Data_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->data6Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 29: _t->Data_6Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->data7Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 31: _t->Data_7Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->data8Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 33: _t->Data_8Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->data9Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 35: _t->Data_9Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->data10Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 37: _t->Data_10Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->data11Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 39: _t->Data_11Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->data12Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 41: _t->Data_12Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->data13Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 43: _t->Data_13Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->data14Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 45: _t->Data_14Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->data15Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 47: _t->Data_15Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 48: _t->data16Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 49: _t->Data_16Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 50: _t->data17Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 51: _t->Data_17Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->data18Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 53: _t->Data_18Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 54: _t->data19Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 55: _t->Data_19Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 56: _t->data20Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 57: _t->Data_20Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 58: _t->data21Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 59: _t->Data_21Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 60: _t->data22Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 61: _t->Data_22Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 62: _t->data23Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 63: _t->Data_23Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 64: _t->data24Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 65: _t->Data_24Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 66: _t->data25Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 67: _t->Data_25Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 68: _t->data26Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 69: _t->Data_26Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 70: _t->data27Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 71: _t->Data_27Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 72: _t->data28Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 73: _t->Data_28Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 74: _t->data29Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 75: _t->Data_29Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 76: _t->data30Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 77: _t->Data_30Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 78: _t->data31Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 79: _t->Data_31Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 80: _t->data32Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 81: _t->Data_32Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 82: _t->data33Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 83: _t->Data_33Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 84: _t->data34Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 85: _t->Data_34Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 86: _t->data35Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 87: _t->Data_35Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 88: _t->data36Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 89: _t->Data_36Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 90: _t->data37Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 91: _t->Data_37Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 92: _t->data38Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 93: _t->Data_38Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 94: _t->data39Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 95: _t->Data_39Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 96: _t->data40Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 97: _t->Data_40Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 98: _t->data41Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 99: _t->Data_41Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 100: _t->data42Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 101: _t->Data_42Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 102: _t->data43Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 103: _t->Data_43Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->data44Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 105: _t->Data_44Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 106: _t->data45Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 107: _t->Data_45Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 108: _t->data46Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 109: _t->Data_46Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 110: _t->data47Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 111: _t->Data_47Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 112: _t->data48Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 113: _t->Data_48Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 114: _t->data49Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 115: _t->Data_49Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 116: _t->data50Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 117: _t->Data_50Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 118: _t->data51Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 119: _t->Data_51Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 120: _t->data52Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 121: _t->Data_52Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 122: _t->data53Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 123: _t->Data_53Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 124: _t->data54Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 125: _t->Data_54Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 126: _t->data55Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 127: _t->Data_55Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 128: _t->data56Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 129: _t->Data_56Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 130: _t->data57Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 131: _t->Data_57Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 132: _t->data58Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 133: _t->Data_58Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 134: _t->data59Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 135: _t->Data_59Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 136: _t->data60Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 137: _t->Data_60Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 138: _t->data61Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 139: _t->Data_61Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 140: _t->data62Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 141: _t->Data_62Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 142: _t->data63Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 143: _t->Data_63Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 144: _t->data64Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 145: _t->Data_64Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 146: _t->data65Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 147: _t->Data_65Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 148: _t->data66Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 149: _t->Data_66Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 150: _t->data67Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 151: _t->Data_67Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 152: _t->data68Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 153: _t->Data_68Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 154: _t->data69Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 155: _t->Data_69Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 156: _t->data70Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 157: _t->Data_70Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 158: _t->data71Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 159: _t->Data_71Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 160: _t->data72Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 161: _t->Data_72Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 162: _t->data73Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 163: _t->Data_73Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 164: _t->data74Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 165: _t->Data_74Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 166: _t->data75Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 167: _t->Data_75Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 168: _t->data76Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 169: _t->Data_76Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 170: _t->data77Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 171: _t->Data_77Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 172: _t->data78Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 173: _t->Data_78Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 174: _t->data79Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 175: _t->Data_79Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 176: _t->data80Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 177: _t->Data_80Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 178: _t->data81Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 179: _t->Data_81Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 180: _t->data82Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 181: _t->Data_82Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 182: _t->data83Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 183: _t->Data_83Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 184: _t->data84Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 185: _t->Data_84Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 186: _t->data85Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 187: _t->Data_85Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 188: _t->data86Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 189: _t->Data_86Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 190: _t->data87Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 191: _t->Data_87Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 192: _t->data88Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 193: _t->Data_88Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 194: _t->data89Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 195: _t->Data_89Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 196: _t->data90Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 197: _t->Data_90Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 198: _t->data91Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 199: _t->Data_91Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 200: _t->data92Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 201: _t->Data_92Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 202: _t->data93Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 203: _t->Data_93Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 204: _t->data94Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 205: _t->Data_94Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 206: _t->data95Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 207: _t->Data_95Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 208: _t->data96Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 209: _t->Data_96Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 210: _t->data97Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 211: _t->Data_97Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 212: _t->data98Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 213: _t->Data_98Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 214: _t->data99Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 215: _t->Data_99Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 216: _t->data100Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 217: _t->Data_100Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 218: _t->data101Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 219: _t->Data_101Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 220: _t->data102Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 221: _t->Data_102Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 222: _t->data103Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 223: _t->Data_103Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 224: _t->data104Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 225: _t->Data_104Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 226: _t->data105Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 227: _t->Data_105Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 228: _t->data106Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 229: _t->Data_106Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 230: _t->data107Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 231: _t->Data_107Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 232: _t->data108Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 233: _t->Data_108Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 234: _t->data109Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 235: _t->Data_109Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 236: _t->data110Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 237: _t->Data_110Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 238: _t->data111Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 239: _t->Data_111Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 240: _t->data112Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 241: _t->Data_112Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 242: _t->data113Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 243: _t->Data_113Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 244: _t->data114Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 245: _t->Data_114Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 246: _t->data115Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 247: _t->Data_115Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 248: _t->data116Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 249: _t->Data_116Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 250: _t->data117Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 251: _t->Data_117Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 252: _t->data118Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 253: _t->Data_118Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 254: _t->data119Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 255: _t->Data_119Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 256: _t->data120Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 257: _t->Data_120Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 258: _t->data121Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 259: _t->Data_121Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 260: _t->data122Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 261: _t->Data_122Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 262: _t->data123Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 263: _t->Data_123Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 264: _t->data124Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 265: _t->Data_124Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 266: _t->data125Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 267: _t->Data_125Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 268: _t->data126Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 269: _t->Data_126Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 270: _t->data127Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 271: _t->Data_127Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 272: _t->data128Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 273: _t->Data_128Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 274: _t->data129Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 275: _t->Data_129Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 276: _t->data130Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 277: _t->Data_130Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 278: _t->data131Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 279: _t->Data_131Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 280: _t->data132Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 281: _t->Data_132Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 282: _t->data133Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 283: _t->Data_133Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 284: _t->data134Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 285: _t->Data_134Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 286: _t->data135Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 287: _t->Data_135Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 288: _t->data136Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 289: _t->Data_136Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 290: _t->data137Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 291: _t->Data_137Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 292: _t->data138Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 293: _t->Data_138Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 294: _t->data139Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 295: _t->Data_139Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 296: _t->data140Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 297: _t->Data_140Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 298: _t->data141Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 299: _t->Data_141Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 300: _t->data142Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 301: _t->Data_142Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 302: _t->data143Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 303: _t->Data_143Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 304: _t->data144Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 305: _t->Data_144Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 306: _t->data145Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 307: _t->Data_145Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 308: _t->data146Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 309: _t->Data_146Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 310: _t->data147Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 311: _t->Data_147Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 312: _t->data148Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 313: _t->Data_148Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 314: _t->data149Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 315: _t->Data_149Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 316: _t->data150Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 317: _t->Data_150Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 318: _t->data151Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 319: _t->Data_151Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 320: _t->data152Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 321: _t->Data_152Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 322: _t->data153Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 323: _t->Data_153Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 324: _t->data154Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 325: _t->Data_154Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 326: _t->data155Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 327: _t->Data_155Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 328: _t->data156Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 329: _t->Data_156Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 330: _t->data157Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 331: _t->Data_157Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 332: _t->data158Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 333: _t->Data_158Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 334: _t->data159Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 335: _t->Data_159Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 336: _t->data160Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 337: _t->Data_160Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 338: _t->data161Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 339: _t->Data_161Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 340: _t->data162Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 341: _t->Data_162Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 342: _t->data163Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 343: _t->Data_163Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 344: _t->data164Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 345: _t->Data_164Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 346: _t->data165Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 347: _t->Data_165Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 348: _t->data166Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 349: _t->Data_166Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 350: _t->data167Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 351: _t->Data_167Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 352: _t->data168Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 353: _t->Data_168Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 354: _t->data169Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 355: _t->Data_169Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 356: _t->data170Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 357: _t->Data_170Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 358: _t->data171Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 359: _t->Data_171Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 360: _t->data172Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 361: _t->Data_172Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 362: _t->data173Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 363: _t->Data_173Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 364: _t->data174Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 365: _t->Data_174Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 366: _t->data175Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 367: _t->Data_175Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 368: _t->data176Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 369: _t->Data_176Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 370: _t->data177Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 371: _t->Data_177Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 372: _t->data178Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 373: _t->Data_178Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 374: _t->data179Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 375: _t->Data_179Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 376: _t->data180Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 377: _t->Data_180Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 378: _t->data181Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 379: _t->Data_181Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 380: _t->data182Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 381: _t->Data_182Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 382: _t->data183Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 383: _t->Data_183Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 384: _t->data184Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 385: _t->Data_184Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 386: _t->data185Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 387: _t->Data_185Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 388: _t->data186Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 389: _t->Data_186Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 390: _t->data187Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 391: _t->Data_187Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 392: _t->data188Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 393: _t->Data_188Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 394: _t->data189Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 395: _t->Data_189Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 396: _t->data190Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 397: _t->Data_190Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 398: _t->data191Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 399: _t->Data_191Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 400: _t->data192Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 401: _t->Data_192Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 402: _t->data193Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 403: _t->Data_193Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 404: _t->data194Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 405: _t->Data_194Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 406: _t->data195Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 407: _t->Data_195Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 408: _t->data196Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 409: _t->Data_196Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 410: _t->data197Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 411: _t->Data_197Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 412: _t->data198Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 413: _t->Data_198Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 414: _t->data199Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 415: _t->Data_199Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 416: _t->setFlightTime((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 417: _t->setObjectID((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 418: _t->setFlight((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 419: _t->setEntry((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 420: _t->setInstanceID((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 421: _t->setSize((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 422: _t->setType((*reinterpret_cast< const DebugLogEntry_Type::Enum(*)>(_a[1]))); break;
        case 423: _t->setType((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 424: _t->setData((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 425: _t->setData((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 426: _t->setData0((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 427: _t->setData_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 428: _t->setData1((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 429: _t->setData_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 430: _t->setData2((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 431: _t->setData_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 432: _t->setData3((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 433: _t->setData_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 434: _t->setData4((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 435: _t->setData_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 436: _t->setData5((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 437: _t->setData_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 438: _t->setData6((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 439: _t->setData_6((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 440: _t->setData7((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 441: _t->setData_7((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 442: _t->setData8((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 443: _t->setData_8((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 444: _t->setData9((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 445: _t->setData_9((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 446: _t->setData10((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 447: _t->setData_10((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 448: _t->setData11((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 449: _t->setData_11((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 450: _t->setData12((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 451: _t->setData_12((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 452: _t->setData13((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 453: _t->setData_13((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 454: _t->setData14((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 455: _t->setData_14((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 456: _t->setData15((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 457: _t->setData_15((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 458: _t->setData16((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 459: _t->setData_16((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 460: _t->setData17((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 461: _t->setData_17((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 462: _t->setData18((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 463: _t->setData_18((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 464: _t->setData19((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 465: _t->setData_19((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 466: _t->setData20((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 467: _t->setData_20((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 468: _t->setData21((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 469: _t->setData_21((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 470: _t->setData22((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 471: _t->setData_22((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 472: _t->setData23((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 473: _t->setData_23((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 474: _t->setData24((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 475: _t->setData_24((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 476: _t->setData25((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 477: _t->setData_25((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 478: _t->setData26((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 479: _t->setData_26((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 480: _t->setData27((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 481: _t->setData_27((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 482: _t->setData28((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 483: _t->setData_28((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 484: _t->setData29((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 485: _t->setData_29((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 486: _t->setData30((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 487: _t->setData_30((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 488: _t->setData31((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 489: _t->setData_31((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 490: _t->setData32((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 491: _t->setData_32((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 492: _t->setData33((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 493: _t->setData_33((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 494: _t->setData34((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 495: _t->setData_34((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 496: _t->setData35((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 497: _t->setData_35((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 498: _t->setData36((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 499: _t->setData_36((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 500: _t->setData37((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 501: _t->setData_37((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 502: _t->setData38((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 503: _t->setData_38((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 504: _t->setData39((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 505: _t->setData_39((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 506: _t->setData40((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 507: _t->setData_40((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 508: _t->setData41((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 509: _t->setData_41((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 510: _t->setData42((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 511: _t->setData_42((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 512: _t->setData43((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 513: _t->setData_43((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 514: _t->setData44((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 515: _t->setData_44((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 516: _t->setData45((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 517: _t->setData_45((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 518: _t->setData46((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 519: _t->setData_46((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 520: _t->setData47((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 521: _t->setData_47((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 522: _t->setData48((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 523: _t->setData_48((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 524: _t->setData49((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 525: _t->setData_49((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 526: _t->setData50((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 527: _t->setData_50((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 528: _t->setData51((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 529: _t->setData_51((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 530: _t->setData52((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 531: _t->setData_52((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 532: _t->setData53((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 533: _t->setData_53((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 534: _t->setData54((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 535: _t->setData_54((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 536: _t->setData55((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 537: _t->setData_55((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 538: _t->setData56((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 539: _t->setData_56((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 540: _t->setData57((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 541: _t->setData_57((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 542: _t->setData58((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 543: _t->setData_58((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 544: _t->setData59((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 545: _t->setData_59((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 546: _t->setData60((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 547: _t->setData_60((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 548: _t->setData61((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 549: _t->setData_61((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 550: _t->setData62((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 551: _t->setData_62((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 552: _t->setData63((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 553: _t->setData_63((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 554: _t->setData64((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 555: _t->setData_64((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 556: _t->setData65((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 557: _t->setData_65((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 558: _t->setData66((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 559: _t->setData_66((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 560: _t->setData67((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 561: _t->setData_67((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 562: _t->setData68((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 563: _t->setData_68((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 564: _t->setData69((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 565: _t->setData_69((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 566: _t->setData70((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 567: _t->setData_70((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 568: _t->setData71((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 569: _t->setData_71((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 570: _t->setData72((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 571: _t->setData_72((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 572: _t->setData73((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 573: _t->setData_73((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 574: _t->setData74((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 575: _t->setData_74((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 576: _t->setData75((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 577: _t->setData_75((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 578: _t->setData76((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 579: _t->setData_76((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 580: _t->setData77((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 581: _t->setData_77((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 582: _t->setData78((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 583: _t->setData_78((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 584: _t->setData79((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 585: _t->setData_79((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 586: _t->setData80((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 587: _t->setData_80((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 588: _t->setData81((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 589: _t->setData_81((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 590: _t->setData82((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 591: _t->setData_82((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 592: _t->setData83((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 593: _t->setData_83((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 594: _t->setData84((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 595: _t->setData_84((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 596: _t->setData85((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 597: _t->setData_85((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 598: _t->setData86((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 599: _t->setData_86((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 600: _t->setData87((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 601: _t->setData_87((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 602: _t->setData88((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 603: _t->setData_88((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 604: _t->setData89((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 605: _t->setData_89((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 606: _t->setData90((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 607: _t->setData_90((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 608: _t->setData91((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 609: _t->setData_91((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 610: _t->setData92((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 611: _t->setData_92((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 612: _t->setData93((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 613: _t->setData_93((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 614: _t->setData94((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 615: _t->setData_94((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 616: _t->setData95((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 617: _t->setData_95((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 618: _t->setData96((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 619: _t->setData_96((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 620: _t->setData97((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 621: _t->setData_97((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 622: _t->setData98((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 623: _t->setData_98((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 624: _t->setData99((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 625: _t->setData_99((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 626: _t->setData100((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 627: _t->setData_100((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 628: _t->setData101((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 629: _t->setData_101((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 630: _t->setData102((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 631: _t->setData_102((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 632: _t->setData103((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 633: _t->setData_103((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 634: _t->setData104((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 635: _t->setData_104((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 636: _t->setData105((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 637: _t->setData_105((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 638: _t->setData106((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 639: _t->setData_106((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 640: _t->setData107((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 641: _t->setData_107((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 642: _t->setData108((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 643: _t->setData_108((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 644: _t->setData109((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 645: _t->setData_109((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 646: _t->setData110((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 647: _t->setData_110((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 648: _t->setData111((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 649: _t->setData_111((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 650: _t->setData112((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 651: _t->setData_112((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 652: _t->setData113((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 653: _t->setData_113((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 654: _t->setData114((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 655: _t->setData_114((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 656: _t->setData115((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 657: _t->setData_115((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 658: _t->setData116((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 659: _t->setData_116((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 660: _t->setData117((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 661: _t->setData_117((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 662: _t->setData118((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 663: _t->setData_118((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 664: _t->setData119((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 665: _t->setData_119((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 666: _t->setData120((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 667: _t->setData_120((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 668: _t->setData121((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 669: _t->setData_121((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 670: _t->setData122((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 671: _t->setData_122((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 672: _t->setData123((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 673: _t->setData_123((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 674: _t->setData124((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 675: _t->setData_124((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 676: _t->setData125((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 677: _t->setData_125((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 678: _t->setData126((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 679: _t->setData_126((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 680: _t->setData127((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 681: _t->setData_127((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 682: _t->setData128((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 683: _t->setData_128((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 684: _t->setData129((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 685: _t->setData_129((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 686: _t->setData130((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 687: _t->setData_130((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 688: _t->setData131((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 689: _t->setData_131((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 690: _t->setData132((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 691: _t->setData_132((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 692: _t->setData133((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 693: _t->setData_133((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 694: _t->setData134((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 695: _t->setData_134((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 696: _t->setData135((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 697: _t->setData_135((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 698: _t->setData136((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 699: _t->setData_136((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 700: _t->setData137((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 701: _t->setData_137((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 702: _t->setData138((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 703: _t->setData_138((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 704: _t->setData139((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 705: _t->setData_139((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 706: _t->setData140((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 707: _t->setData_140((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 708: _t->setData141((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 709: _t->setData_141((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 710: _t->setData142((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 711: _t->setData_142((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 712: _t->setData143((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 713: _t->setData_143((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 714: _t->setData144((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 715: _t->setData_144((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 716: _t->setData145((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 717: _t->setData_145((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 718: _t->setData146((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 719: _t->setData_146((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 720: _t->setData147((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 721: _t->setData_147((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 722: _t->setData148((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 723: _t->setData_148((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 724: _t->setData149((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 725: _t->setData_149((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 726: _t->setData150((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 727: _t->setData_150((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 728: _t->setData151((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 729: _t->setData_151((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 730: _t->setData152((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 731: _t->setData_152((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 732: _t->setData153((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 733: _t->setData_153((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 734: _t->setData154((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 735: _t->setData_154((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 736: _t->setData155((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 737: _t->setData_155((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 738: _t->setData156((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 739: _t->setData_156((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 740: _t->setData157((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 741: _t->setData_157((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 742: _t->setData158((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 743: _t->setData_158((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 744: _t->setData159((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 745: _t->setData_159((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 746: _t->setData160((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 747: _t->setData_160((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 748: _t->setData161((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 749: _t->setData_161((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 750: _t->setData162((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 751: _t->setData_162((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 752: _t->setData163((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 753: _t->setData_163((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 754: _t->setData164((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 755: _t->setData_164((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 756: _t->setData165((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 757: _t->setData_165((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 758: _t->setData166((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 759: _t->setData_166((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 760: _t->setData167((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 761: _t->setData_167((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 762: _t->setData168((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 763: _t->setData_168((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 764: _t->setData169((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 765: _t->setData_169((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 766: _t->setData170((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 767: _t->setData_170((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 768: _t->setData171((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 769: _t->setData_171((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 770: _t->setData172((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 771: _t->setData_172((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 772: _t->setData173((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 773: _t->setData_173((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 774: _t->setData174((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 775: _t->setData_174((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 776: _t->setData175((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 777: _t->setData_175((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 778: _t->setData176((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 779: _t->setData_176((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 780: _t->setData177((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 781: _t->setData_177((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 782: _t->setData178((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 783: _t->setData_178((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 784: _t->setData179((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 785: _t->setData_179((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 786: _t->setData180((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 787: _t->setData_180((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 788: _t->setData181((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 789: _t->setData_181((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 790: _t->setData182((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 791: _t->setData_182((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 792: _t->setData183((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 793: _t->setData_183((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 794: _t->setData184((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 795: _t->setData_184((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 796: _t->setData185((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 797: _t->setData_185((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 798: _t->setData186((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 799: _t->setData_186((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 800: _t->setData187((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 801: _t->setData_187((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 802: _t->setData188((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 803: _t->setData_188((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 804: _t->setData189((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 805: _t->setData_189((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 806: _t->setData190((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 807: _t->setData_190((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 808: _t->setData191((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 809: _t->setData_191((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 810: _t->setData192((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 811: _t->setData_192((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 812: _t->setData193((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 813: _t->setData_193((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 814: _t->setData194((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 815: _t->setData_194((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 816: _t->setData195((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 817: _t->setData_195((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 818: _t->setData196((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 819: _t->setData_196((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 820: _t->setData197((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 821: _t->setData_197((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 822: _t->setData198((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 823: _t->setData_198((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 824: _t->setData199((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 825: _t->setData_199((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 826: _t->emitNotifications(); break;
        case 827: { quint32 _r = _t->getFlightTime();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 828: { quint32 _r = _t->getObjectID();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 829: { quint16 _r = _t->getFlight();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 830: { quint16 _r = _t->getEntry();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 831: { quint16 _r = _t->getInstanceID();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 832: { quint16 _r = _t->getSize();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 833: { quint8 _r = _t->getType();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 834: { quint16 _r = _t->data((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 835: { quint8 _r = _t->getData((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 836: { quint8 _r = _t->getData_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 837: { quint8 _r = _t->getData_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 838: { quint8 _r = _t->getData_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 839: { quint8 _r = _t->getData_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 840: { quint8 _r = _t->getData_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 841: { quint8 _r = _t->getData_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 842: { quint8 _r = _t->getData_6();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 843: { quint8 _r = _t->getData_7();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 844: { quint8 _r = _t->getData_8();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 845: { quint8 _r = _t->getData_9();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 846: { quint8 _r = _t->getData_10();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 847: { quint8 _r = _t->getData_11();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 848: { quint8 _r = _t->getData_12();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 849: { quint8 _r = _t->getData_13();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 850: { quint8 _r = _t->getData_14();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 851: { quint8 _r = _t->getData_15();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 852: { quint8 _r = _t->getData_16();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 853: { quint8 _r = _t->getData_17();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 854: { quint8 _r = _t->getData_18();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 855: { quint8 _r = _t->getData_19();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 856: { quint8 _r = _t->getData_20();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 857: { quint8 _r = _t->getData_21();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 858: { quint8 _r = _t->getData_22();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 859: { quint8 _r = _t->getData_23();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 860: { quint8 _r = _t->getData_24();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 861: { quint8 _r = _t->getData_25();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 862: { quint8 _r = _t->getData_26();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 863: { quint8 _r = _t->getData_27();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 864: { quint8 _r = _t->getData_28();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 865: { quint8 _r = _t->getData_29();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 866: { quint8 _r = _t->getData_30();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 867: { quint8 _r = _t->getData_31();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 868: { quint8 _r = _t->getData_32();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 869: { quint8 _r = _t->getData_33();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 870: { quint8 _r = _t->getData_34();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 871: { quint8 _r = _t->getData_35();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 872: { quint8 _r = _t->getData_36();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 873: { quint8 _r = _t->getData_37();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 874: { quint8 _r = _t->getData_38();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 875: { quint8 _r = _t->getData_39();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 876: { quint8 _r = _t->getData_40();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 877: { quint8 _r = _t->getData_41();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 878: { quint8 _r = _t->getData_42();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 879: { quint8 _r = _t->getData_43();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 880: { quint8 _r = _t->getData_44();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 881: { quint8 _r = _t->getData_45();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 882: { quint8 _r = _t->getData_46();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 883: { quint8 _r = _t->getData_47();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 884: { quint8 _r = _t->getData_48();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 885: { quint8 _r = _t->getData_49();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 886: { quint8 _r = _t->getData_50();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 887: { quint8 _r = _t->getData_51();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 888: { quint8 _r = _t->getData_52();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 889: { quint8 _r = _t->getData_53();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 890: { quint8 _r = _t->getData_54();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 891: { quint8 _r = _t->getData_55();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 892: { quint8 _r = _t->getData_56();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 893: { quint8 _r = _t->getData_57();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 894: { quint8 _r = _t->getData_58();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 895: { quint8 _r = _t->getData_59();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 896: { quint8 _r = _t->getData_60();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 897: { quint8 _r = _t->getData_61();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 898: { quint8 _r = _t->getData_62();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 899: { quint8 _r = _t->getData_63();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 900: { quint8 _r = _t->getData_64();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 901: { quint8 _r = _t->getData_65();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 902: { quint8 _r = _t->getData_66();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 903: { quint8 _r = _t->getData_67();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 904: { quint8 _r = _t->getData_68();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 905: { quint8 _r = _t->getData_69();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 906: { quint8 _r = _t->getData_70();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 907: { quint8 _r = _t->getData_71();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 908: { quint8 _r = _t->getData_72();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 909: { quint8 _r = _t->getData_73();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 910: { quint8 _r = _t->getData_74();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 911: { quint8 _r = _t->getData_75();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 912: { quint8 _r = _t->getData_76();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 913: { quint8 _r = _t->getData_77();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 914: { quint8 _r = _t->getData_78();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 915: { quint8 _r = _t->getData_79();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 916: { quint8 _r = _t->getData_80();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 917: { quint8 _r = _t->getData_81();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 918: { quint8 _r = _t->getData_82();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 919: { quint8 _r = _t->getData_83();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 920: { quint8 _r = _t->getData_84();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 921: { quint8 _r = _t->getData_85();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 922: { quint8 _r = _t->getData_86();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 923: { quint8 _r = _t->getData_87();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 924: { quint8 _r = _t->getData_88();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 925: { quint8 _r = _t->getData_89();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 926: { quint8 _r = _t->getData_90();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 927: { quint8 _r = _t->getData_91();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 928: { quint8 _r = _t->getData_92();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 929: { quint8 _r = _t->getData_93();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 930: { quint8 _r = _t->getData_94();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 931: { quint8 _r = _t->getData_95();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 932: { quint8 _r = _t->getData_96();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 933: { quint8 _r = _t->getData_97();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 934: { quint8 _r = _t->getData_98();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 935: { quint8 _r = _t->getData_99();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 936: { quint8 _r = _t->getData_100();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 937: { quint8 _r = _t->getData_101();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 938: { quint8 _r = _t->getData_102();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 939: { quint8 _r = _t->getData_103();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 940: { quint8 _r = _t->getData_104();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 941: { quint8 _r = _t->getData_105();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 942: { quint8 _r = _t->getData_106();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 943: { quint8 _r = _t->getData_107();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 944: { quint8 _r = _t->getData_108();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 945: { quint8 _r = _t->getData_109();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 946: { quint8 _r = _t->getData_110();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 947: { quint8 _r = _t->getData_111();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 948: { quint8 _r = _t->getData_112();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 949: { quint8 _r = _t->getData_113();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 950: { quint8 _r = _t->getData_114();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 951: { quint8 _r = _t->getData_115();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 952: { quint8 _r = _t->getData_116();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 953: { quint8 _r = _t->getData_117();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 954: { quint8 _r = _t->getData_118();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 955: { quint8 _r = _t->getData_119();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 956: { quint8 _r = _t->getData_120();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 957: { quint8 _r = _t->getData_121();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 958: { quint8 _r = _t->getData_122();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 959: { quint8 _r = _t->getData_123();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 960: { quint8 _r = _t->getData_124();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 961: { quint8 _r = _t->getData_125();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 962: { quint8 _r = _t->getData_126();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 963: { quint8 _r = _t->getData_127();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 964: { quint8 _r = _t->getData_128();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 965: { quint8 _r = _t->getData_129();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 966: { quint8 _r = _t->getData_130();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 967: { quint8 _r = _t->getData_131();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 968: { quint8 _r = _t->getData_132();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 969: { quint8 _r = _t->getData_133();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 970: { quint8 _r = _t->getData_134();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 971: { quint8 _r = _t->getData_135();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 972: { quint8 _r = _t->getData_136();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 973: { quint8 _r = _t->getData_137();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 974: { quint8 _r = _t->getData_138();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 975: { quint8 _r = _t->getData_139();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 976: { quint8 _r = _t->getData_140();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 977: { quint8 _r = _t->getData_141();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 978: { quint8 _r = _t->getData_142();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 979: { quint8 _r = _t->getData_143();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 980: { quint8 _r = _t->getData_144();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 981: { quint8 _r = _t->getData_145();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 982: { quint8 _r = _t->getData_146();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 983: { quint8 _r = _t->getData_147();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 984: { quint8 _r = _t->getData_148();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 985: { quint8 _r = _t->getData_149();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 986: { quint8 _r = _t->getData_150();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 987: { quint8 _r = _t->getData_151();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 988: { quint8 _r = _t->getData_152();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 989: { quint8 _r = _t->getData_153();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 990: { quint8 _r = _t->getData_154();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 991: { quint8 _r = _t->getData_155();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 992: { quint8 _r = _t->getData_156();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 993: { quint8 _r = _t->getData_157();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 994: { quint8 _r = _t->getData_158();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 995: { quint8 _r = _t->getData_159();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 996: { quint8 _r = _t->getData_160();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 997: { quint8 _r = _t->getData_161();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 998: { quint8 _r = _t->getData_162();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 999: { quint8 _r = _t->getData_163();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1000: { quint8 _r = _t->getData_164();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1001: { quint8 _r = _t->getData_165();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1002: { quint8 _r = _t->getData_166();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1003: { quint8 _r = _t->getData_167();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1004: { quint8 _r = _t->getData_168();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1005: { quint8 _r = _t->getData_169();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1006: { quint8 _r = _t->getData_170();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1007: { quint8 _r = _t->getData_171();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1008: { quint8 _r = _t->getData_172();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1009: { quint8 _r = _t->getData_173();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1010: { quint8 _r = _t->getData_174();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1011: { quint8 _r = _t->getData_175();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1012: { quint8 _r = _t->getData_176();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1013: { quint8 _r = _t->getData_177();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1014: { quint8 _r = _t->getData_178();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1015: { quint8 _r = _t->getData_179();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1016: { quint8 _r = _t->getData_180();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1017: { quint8 _r = _t->getData_181();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1018: { quint8 _r = _t->getData_182();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1019: { quint8 _r = _t->getData_183();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1020: { quint8 _r = _t->getData_184();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1021: { quint8 _r = _t->getData_185();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1022: { quint8 _r = _t->getData_186();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1023: { quint8 _r = _t->getData_187();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1024: { quint8 _r = _t->getData_188();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1025: { quint8 _r = _t->getData_189();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1026: { quint8 _r = _t->getData_190();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1027: { quint8 _r = _t->getData_191();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1028: { quint8 _r = _t->getData_192();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1029: { quint8 _r = _t->getData_193();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1030: { quint8 _r = _t->getData_194();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1031: { quint8 _r = _t->getData_195();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1032: { quint8 _r = _t->getData_196();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1033: { quint8 _r = _t->getData_197();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1034: { quint8 _r = _t->getData_198();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 1035: { quint8 _r = _t->getData_199();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DebugLogEntry::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::flightTimeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::FlightTimeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::objectIDChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::ObjectIDChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::flightChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::FlightChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::entryChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::EntryChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::instanceIDChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::InstanceIDChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::sizeChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::SizeChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const DebugLogEntry_Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::typeChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::TypeChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::dataChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::DataChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data0Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_0Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data1Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_1Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data2Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_2Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data3Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_3Changed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data4Changed)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_4Changed)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data5Changed)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_5Changed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data6Changed)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_6Changed)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data7Changed)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_7Changed)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data8Changed)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_8Changed)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data9Changed)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_9Changed)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data10Changed)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_10Changed)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data11Changed)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_11Changed)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data12Changed)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_12Changed)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data13Changed)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_13Changed)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data14Changed)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_14Changed)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data15Changed)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_15Changed)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data16Changed)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_16Changed)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data17Changed)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_17Changed)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data18Changed)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_18Changed)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data19Changed)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_19Changed)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data20Changed)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_20Changed)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data21Changed)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_21Changed)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data22Changed)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_22Changed)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data23Changed)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_23Changed)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data24Changed)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_24Changed)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data25Changed)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_25Changed)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data26Changed)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_26Changed)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data27Changed)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_27Changed)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data28Changed)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_28Changed)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data29Changed)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_29Changed)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data30Changed)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_30Changed)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data31Changed)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_31Changed)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data32Changed)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_32Changed)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data33Changed)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_33Changed)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data34Changed)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_34Changed)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data35Changed)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_35Changed)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data36Changed)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_36Changed)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data37Changed)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_37Changed)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data38Changed)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_38Changed)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data39Changed)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_39Changed)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data40Changed)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_40Changed)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data41Changed)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_41Changed)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data42Changed)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_42Changed)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data43Changed)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_43Changed)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data44Changed)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_44Changed)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data45Changed)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_45Changed)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data46Changed)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_46Changed)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data47Changed)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_47Changed)) {
                *result = 111;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data48Changed)) {
                *result = 112;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_48Changed)) {
                *result = 113;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data49Changed)) {
                *result = 114;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_49Changed)) {
                *result = 115;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data50Changed)) {
                *result = 116;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_50Changed)) {
                *result = 117;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data51Changed)) {
                *result = 118;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_51Changed)) {
                *result = 119;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data52Changed)) {
                *result = 120;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_52Changed)) {
                *result = 121;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data53Changed)) {
                *result = 122;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_53Changed)) {
                *result = 123;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data54Changed)) {
                *result = 124;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_54Changed)) {
                *result = 125;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data55Changed)) {
                *result = 126;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_55Changed)) {
                *result = 127;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data56Changed)) {
                *result = 128;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_56Changed)) {
                *result = 129;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data57Changed)) {
                *result = 130;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_57Changed)) {
                *result = 131;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data58Changed)) {
                *result = 132;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_58Changed)) {
                *result = 133;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data59Changed)) {
                *result = 134;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_59Changed)) {
                *result = 135;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data60Changed)) {
                *result = 136;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_60Changed)) {
                *result = 137;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data61Changed)) {
                *result = 138;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_61Changed)) {
                *result = 139;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data62Changed)) {
                *result = 140;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_62Changed)) {
                *result = 141;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data63Changed)) {
                *result = 142;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_63Changed)) {
                *result = 143;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data64Changed)) {
                *result = 144;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_64Changed)) {
                *result = 145;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data65Changed)) {
                *result = 146;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_65Changed)) {
                *result = 147;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data66Changed)) {
                *result = 148;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_66Changed)) {
                *result = 149;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data67Changed)) {
                *result = 150;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_67Changed)) {
                *result = 151;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data68Changed)) {
                *result = 152;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_68Changed)) {
                *result = 153;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data69Changed)) {
                *result = 154;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_69Changed)) {
                *result = 155;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data70Changed)) {
                *result = 156;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_70Changed)) {
                *result = 157;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data71Changed)) {
                *result = 158;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_71Changed)) {
                *result = 159;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data72Changed)) {
                *result = 160;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_72Changed)) {
                *result = 161;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data73Changed)) {
                *result = 162;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_73Changed)) {
                *result = 163;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data74Changed)) {
                *result = 164;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_74Changed)) {
                *result = 165;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data75Changed)) {
                *result = 166;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_75Changed)) {
                *result = 167;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data76Changed)) {
                *result = 168;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_76Changed)) {
                *result = 169;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data77Changed)) {
                *result = 170;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_77Changed)) {
                *result = 171;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data78Changed)) {
                *result = 172;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_78Changed)) {
                *result = 173;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data79Changed)) {
                *result = 174;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_79Changed)) {
                *result = 175;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data80Changed)) {
                *result = 176;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_80Changed)) {
                *result = 177;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data81Changed)) {
                *result = 178;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_81Changed)) {
                *result = 179;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data82Changed)) {
                *result = 180;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_82Changed)) {
                *result = 181;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data83Changed)) {
                *result = 182;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_83Changed)) {
                *result = 183;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data84Changed)) {
                *result = 184;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_84Changed)) {
                *result = 185;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data85Changed)) {
                *result = 186;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_85Changed)) {
                *result = 187;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data86Changed)) {
                *result = 188;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_86Changed)) {
                *result = 189;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data87Changed)) {
                *result = 190;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_87Changed)) {
                *result = 191;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data88Changed)) {
                *result = 192;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_88Changed)) {
                *result = 193;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data89Changed)) {
                *result = 194;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_89Changed)) {
                *result = 195;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data90Changed)) {
                *result = 196;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_90Changed)) {
                *result = 197;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data91Changed)) {
                *result = 198;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_91Changed)) {
                *result = 199;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data92Changed)) {
                *result = 200;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_92Changed)) {
                *result = 201;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data93Changed)) {
                *result = 202;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_93Changed)) {
                *result = 203;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data94Changed)) {
                *result = 204;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_94Changed)) {
                *result = 205;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data95Changed)) {
                *result = 206;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_95Changed)) {
                *result = 207;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data96Changed)) {
                *result = 208;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_96Changed)) {
                *result = 209;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data97Changed)) {
                *result = 210;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_97Changed)) {
                *result = 211;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data98Changed)) {
                *result = 212;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_98Changed)) {
                *result = 213;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data99Changed)) {
                *result = 214;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_99Changed)) {
                *result = 215;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data100Changed)) {
                *result = 216;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_100Changed)) {
                *result = 217;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data101Changed)) {
                *result = 218;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_101Changed)) {
                *result = 219;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data102Changed)) {
                *result = 220;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_102Changed)) {
                *result = 221;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data103Changed)) {
                *result = 222;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_103Changed)) {
                *result = 223;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data104Changed)) {
                *result = 224;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_104Changed)) {
                *result = 225;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data105Changed)) {
                *result = 226;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_105Changed)) {
                *result = 227;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data106Changed)) {
                *result = 228;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_106Changed)) {
                *result = 229;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data107Changed)) {
                *result = 230;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_107Changed)) {
                *result = 231;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data108Changed)) {
                *result = 232;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_108Changed)) {
                *result = 233;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data109Changed)) {
                *result = 234;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_109Changed)) {
                *result = 235;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data110Changed)) {
                *result = 236;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_110Changed)) {
                *result = 237;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data111Changed)) {
                *result = 238;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_111Changed)) {
                *result = 239;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data112Changed)) {
                *result = 240;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_112Changed)) {
                *result = 241;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data113Changed)) {
                *result = 242;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_113Changed)) {
                *result = 243;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data114Changed)) {
                *result = 244;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_114Changed)) {
                *result = 245;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data115Changed)) {
                *result = 246;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_115Changed)) {
                *result = 247;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data116Changed)) {
                *result = 248;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_116Changed)) {
                *result = 249;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data117Changed)) {
                *result = 250;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_117Changed)) {
                *result = 251;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data118Changed)) {
                *result = 252;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_118Changed)) {
                *result = 253;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data119Changed)) {
                *result = 254;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_119Changed)) {
                *result = 255;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data120Changed)) {
                *result = 256;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_120Changed)) {
                *result = 257;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data121Changed)) {
                *result = 258;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_121Changed)) {
                *result = 259;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data122Changed)) {
                *result = 260;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_122Changed)) {
                *result = 261;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data123Changed)) {
                *result = 262;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_123Changed)) {
                *result = 263;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data124Changed)) {
                *result = 264;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_124Changed)) {
                *result = 265;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data125Changed)) {
                *result = 266;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_125Changed)) {
                *result = 267;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data126Changed)) {
                *result = 268;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_126Changed)) {
                *result = 269;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data127Changed)) {
                *result = 270;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_127Changed)) {
                *result = 271;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data128Changed)) {
                *result = 272;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_128Changed)) {
                *result = 273;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data129Changed)) {
                *result = 274;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_129Changed)) {
                *result = 275;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data130Changed)) {
                *result = 276;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_130Changed)) {
                *result = 277;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data131Changed)) {
                *result = 278;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_131Changed)) {
                *result = 279;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data132Changed)) {
                *result = 280;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_132Changed)) {
                *result = 281;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data133Changed)) {
                *result = 282;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_133Changed)) {
                *result = 283;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data134Changed)) {
                *result = 284;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_134Changed)) {
                *result = 285;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data135Changed)) {
                *result = 286;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_135Changed)) {
                *result = 287;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data136Changed)) {
                *result = 288;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_136Changed)) {
                *result = 289;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data137Changed)) {
                *result = 290;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_137Changed)) {
                *result = 291;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data138Changed)) {
                *result = 292;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_138Changed)) {
                *result = 293;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data139Changed)) {
                *result = 294;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_139Changed)) {
                *result = 295;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data140Changed)) {
                *result = 296;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_140Changed)) {
                *result = 297;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data141Changed)) {
                *result = 298;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_141Changed)) {
                *result = 299;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data142Changed)) {
                *result = 300;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_142Changed)) {
                *result = 301;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data143Changed)) {
                *result = 302;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_143Changed)) {
                *result = 303;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data144Changed)) {
                *result = 304;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_144Changed)) {
                *result = 305;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data145Changed)) {
                *result = 306;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_145Changed)) {
                *result = 307;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data146Changed)) {
                *result = 308;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_146Changed)) {
                *result = 309;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data147Changed)) {
                *result = 310;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_147Changed)) {
                *result = 311;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data148Changed)) {
                *result = 312;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_148Changed)) {
                *result = 313;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data149Changed)) {
                *result = 314;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_149Changed)) {
                *result = 315;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data150Changed)) {
                *result = 316;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_150Changed)) {
                *result = 317;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data151Changed)) {
                *result = 318;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_151Changed)) {
                *result = 319;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data152Changed)) {
                *result = 320;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_152Changed)) {
                *result = 321;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data153Changed)) {
                *result = 322;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_153Changed)) {
                *result = 323;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data154Changed)) {
                *result = 324;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_154Changed)) {
                *result = 325;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data155Changed)) {
                *result = 326;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_155Changed)) {
                *result = 327;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data156Changed)) {
                *result = 328;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_156Changed)) {
                *result = 329;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data157Changed)) {
                *result = 330;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_157Changed)) {
                *result = 331;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data158Changed)) {
                *result = 332;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_158Changed)) {
                *result = 333;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data159Changed)) {
                *result = 334;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_159Changed)) {
                *result = 335;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data160Changed)) {
                *result = 336;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_160Changed)) {
                *result = 337;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data161Changed)) {
                *result = 338;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_161Changed)) {
                *result = 339;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data162Changed)) {
                *result = 340;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_162Changed)) {
                *result = 341;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data163Changed)) {
                *result = 342;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_163Changed)) {
                *result = 343;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data164Changed)) {
                *result = 344;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_164Changed)) {
                *result = 345;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data165Changed)) {
                *result = 346;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_165Changed)) {
                *result = 347;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data166Changed)) {
                *result = 348;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_166Changed)) {
                *result = 349;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data167Changed)) {
                *result = 350;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_167Changed)) {
                *result = 351;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data168Changed)) {
                *result = 352;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_168Changed)) {
                *result = 353;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data169Changed)) {
                *result = 354;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_169Changed)) {
                *result = 355;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data170Changed)) {
                *result = 356;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_170Changed)) {
                *result = 357;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data171Changed)) {
                *result = 358;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_171Changed)) {
                *result = 359;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data172Changed)) {
                *result = 360;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_172Changed)) {
                *result = 361;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data173Changed)) {
                *result = 362;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_173Changed)) {
                *result = 363;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data174Changed)) {
                *result = 364;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_174Changed)) {
                *result = 365;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data175Changed)) {
                *result = 366;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_175Changed)) {
                *result = 367;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data176Changed)) {
                *result = 368;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_176Changed)) {
                *result = 369;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data177Changed)) {
                *result = 370;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_177Changed)) {
                *result = 371;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data178Changed)) {
                *result = 372;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_178Changed)) {
                *result = 373;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data179Changed)) {
                *result = 374;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_179Changed)) {
                *result = 375;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data180Changed)) {
                *result = 376;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_180Changed)) {
                *result = 377;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data181Changed)) {
                *result = 378;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_181Changed)) {
                *result = 379;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data182Changed)) {
                *result = 380;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_182Changed)) {
                *result = 381;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data183Changed)) {
                *result = 382;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_183Changed)) {
                *result = 383;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data184Changed)) {
                *result = 384;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_184Changed)) {
                *result = 385;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data185Changed)) {
                *result = 386;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_185Changed)) {
                *result = 387;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data186Changed)) {
                *result = 388;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_186Changed)) {
                *result = 389;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data187Changed)) {
                *result = 390;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_187Changed)) {
                *result = 391;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data188Changed)) {
                *result = 392;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_188Changed)) {
                *result = 393;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data189Changed)) {
                *result = 394;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_189Changed)) {
                *result = 395;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data190Changed)) {
                *result = 396;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_190Changed)) {
                *result = 397;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data191Changed)) {
                *result = 398;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_191Changed)) {
                *result = 399;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data192Changed)) {
                *result = 400;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_192Changed)) {
                *result = 401;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data193Changed)) {
                *result = 402;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_193Changed)) {
                *result = 403;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data194Changed)) {
                *result = 404;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_194Changed)) {
                *result = 405;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data195Changed)) {
                *result = 406;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_195Changed)) {
                *result = 407;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data196Changed)) {
                *result = 408;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_196Changed)) {
                *result = 409;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data197Changed)) {
                *result = 410;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_197Changed)) {
                *result = 411;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data198Changed)) {
                *result = 412;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_198Changed)) {
                *result = 413;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::data199Changed)) {
                *result = 414;
                return;
            }
        }
        {
            using _t = void (DebugLogEntry::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLogEntry::Data_199Changed)) {
                *result = 415;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DebugLogEntry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->flightTime(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->objectID(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->flight(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->entry(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->instanceID(); break;
        case 5: *reinterpret_cast< quint16*>(_v) = _t->size(); break;
        case 6: *reinterpret_cast< DebugLogEntry_Type::Enum*>(_v) = _t->type(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->data0(); break;
        case 8: *reinterpret_cast< quint16*>(_v) = _t->data1(); break;
        case 9: *reinterpret_cast< quint16*>(_v) = _t->data2(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->data3(); break;
        case 11: *reinterpret_cast< quint16*>(_v) = _t->data4(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->data5(); break;
        case 13: *reinterpret_cast< quint16*>(_v) = _t->data6(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->data7(); break;
        case 15: *reinterpret_cast< quint16*>(_v) = _t->data8(); break;
        case 16: *reinterpret_cast< quint16*>(_v) = _t->data9(); break;
        case 17: *reinterpret_cast< quint16*>(_v) = _t->data10(); break;
        case 18: *reinterpret_cast< quint16*>(_v) = _t->data11(); break;
        case 19: *reinterpret_cast< quint16*>(_v) = _t->data12(); break;
        case 20: *reinterpret_cast< quint16*>(_v) = _t->data13(); break;
        case 21: *reinterpret_cast< quint16*>(_v) = _t->data14(); break;
        case 22: *reinterpret_cast< quint16*>(_v) = _t->data15(); break;
        case 23: *reinterpret_cast< quint16*>(_v) = _t->data16(); break;
        case 24: *reinterpret_cast< quint16*>(_v) = _t->data17(); break;
        case 25: *reinterpret_cast< quint16*>(_v) = _t->data18(); break;
        case 26: *reinterpret_cast< quint16*>(_v) = _t->data19(); break;
        case 27: *reinterpret_cast< quint16*>(_v) = _t->data20(); break;
        case 28: *reinterpret_cast< quint16*>(_v) = _t->data21(); break;
        case 29: *reinterpret_cast< quint16*>(_v) = _t->data22(); break;
        case 30: *reinterpret_cast< quint16*>(_v) = _t->data23(); break;
        case 31: *reinterpret_cast< quint16*>(_v) = _t->data24(); break;
        case 32: *reinterpret_cast< quint16*>(_v) = _t->data25(); break;
        case 33: *reinterpret_cast< quint16*>(_v) = _t->data26(); break;
        case 34: *reinterpret_cast< quint16*>(_v) = _t->data27(); break;
        case 35: *reinterpret_cast< quint16*>(_v) = _t->data28(); break;
        case 36: *reinterpret_cast< quint16*>(_v) = _t->data29(); break;
        case 37: *reinterpret_cast< quint16*>(_v) = _t->data30(); break;
        case 38: *reinterpret_cast< quint16*>(_v) = _t->data31(); break;
        case 39: *reinterpret_cast< quint16*>(_v) = _t->data32(); break;
        case 40: *reinterpret_cast< quint16*>(_v) = _t->data33(); break;
        case 41: *reinterpret_cast< quint16*>(_v) = _t->data34(); break;
        case 42: *reinterpret_cast< quint16*>(_v) = _t->data35(); break;
        case 43: *reinterpret_cast< quint16*>(_v) = _t->data36(); break;
        case 44: *reinterpret_cast< quint16*>(_v) = _t->data37(); break;
        case 45: *reinterpret_cast< quint16*>(_v) = _t->data38(); break;
        case 46: *reinterpret_cast< quint16*>(_v) = _t->data39(); break;
        case 47: *reinterpret_cast< quint16*>(_v) = _t->data40(); break;
        case 48: *reinterpret_cast< quint16*>(_v) = _t->data41(); break;
        case 49: *reinterpret_cast< quint16*>(_v) = _t->data42(); break;
        case 50: *reinterpret_cast< quint16*>(_v) = _t->data43(); break;
        case 51: *reinterpret_cast< quint16*>(_v) = _t->data44(); break;
        case 52: *reinterpret_cast< quint16*>(_v) = _t->data45(); break;
        case 53: *reinterpret_cast< quint16*>(_v) = _t->data46(); break;
        case 54: *reinterpret_cast< quint16*>(_v) = _t->data47(); break;
        case 55: *reinterpret_cast< quint16*>(_v) = _t->data48(); break;
        case 56: *reinterpret_cast< quint16*>(_v) = _t->data49(); break;
        case 57: *reinterpret_cast< quint16*>(_v) = _t->data50(); break;
        case 58: *reinterpret_cast< quint16*>(_v) = _t->data51(); break;
        case 59: *reinterpret_cast< quint16*>(_v) = _t->data52(); break;
        case 60: *reinterpret_cast< quint16*>(_v) = _t->data53(); break;
        case 61: *reinterpret_cast< quint16*>(_v) = _t->data54(); break;
        case 62: *reinterpret_cast< quint16*>(_v) = _t->data55(); break;
        case 63: *reinterpret_cast< quint16*>(_v) = _t->data56(); break;
        case 64: *reinterpret_cast< quint16*>(_v) = _t->data57(); break;
        case 65: *reinterpret_cast< quint16*>(_v) = _t->data58(); break;
        case 66: *reinterpret_cast< quint16*>(_v) = _t->data59(); break;
        case 67: *reinterpret_cast< quint16*>(_v) = _t->data60(); break;
        case 68: *reinterpret_cast< quint16*>(_v) = _t->data61(); break;
        case 69: *reinterpret_cast< quint16*>(_v) = _t->data62(); break;
        case 70: *reinterpret_cast< quint16*>(_v) = _t->data63(); break;
        case 71: *reinterpret_cast< quint16*>(_v) = _t->data64(); break;
        case 72: *reinterpret_cast< quint16*>(_v) = _t->data65(); break;
        case 73: *reinterpret_cast< quint16*>(_v) = _t->data66(); break;
        case 74: *reinterpret_cast< quint16*>(_v) = _t->data67(); break;
        case 75: *reinterpret_cast< quint16*>(_v) = _t->data68(); break;
        case 76: *reinterpret_cast< quint16*>(_v) = _t->data69(); break;
        case 77: *reinterpret_cast< quint16*>(_v) = _t->data70(); break;
        case 78: *reinterpret_cast< quint16*>(_v) = _t->data71(); break;
        case 79: *reinterpret_cast< quint16*>(_v) = _t->data72(); break;
        case 80: *reinterpret_cast< quint16*>(_v) = _t->data73(); break;
        case 81: *reinterpret_cast< quint16*>(_v) = _t->data74(); break;
        case 82: *reinterpret_cast< quint16*>(_v) = _t->data75(); break;
        case 83: *reinterpret_cast< quint16*>(_v) = _t->data76(); break;
        case 84: *reinterpret_cast< quint16*>(_v) = _t->data77(); break;
        case 85: *reinterpret_cast< quint16*>(_v) = _t->data78(); break;
        case 86: *reinterpret_cast< quint16*>(_v) = _t->data79(); break;
        case 87: *reinterpret_cast< quint16*>(_v) = _t->data80(); break;
        case 88: *reinterpret_cast< quint16*>(_v) = _t->data81(); break;
        case 89: *reinterpret_cast< quint16*>(_v) = _t->data82(); break;
        case 90: *reinterpret_cast< quint16*>(_v) = _t->data83(); break;
        case 91: *reinterpret_cast< quint16*>(_v) = _t->data84(); break;
        case 92: *reinterpret_cast< quint16*>(_v) = _t->data85(); break;
        case 93: *reinterpret_cast< quint16*>(_v) = _t->data86(); break;
        case 94: *reinterpret_cast< quint16*>(_v) = _t->data87(); break;
        case 95: *reinterpret_cast< quint16*>(_v) = _t->data88(); break;
        case 96: *reinterpret_cast< quint16*>(_v) = _t->data89(); break;
        case 97: *reinterpret_cast< quint16*>(_v) = _t->data90(); break;
        case 98: *reinterpret_cast< quint16*>(_v) = _t->data91(); break;
        case 99: *reinterpret_cast< quint16*>(_v) = _t->data92(); break;
        case 100: *reinterpret_cast< quint16*>(_v) = _t->data93(); break;
        case 101: *reinterpret_cast< quint16*>(_v) = _t->data94(); break;
        case 102: *reinterpret_cast< quint16*>(_v) = _t->data95(); break;
        case 103: *reinterpret_cast< quint16*>(_v) = _t->data96(); break;
        case 104: *reinterpret_cast< quint16*>(_v) = _t->data97(); break;
        case 105: *reinterpret_cast< quint16*>(_v) = _t->data98(); break;
        case 106: *reinterpret_cast< quint16*>(_v) = _t->data99(); break;
        case 107: *reinterpret_cast< quint16*>(_v) = _t->data100(); break;
        case 108: *reinterpret_cast< quint16*>(_v) = _t->data101(); break;
        case 109: *reinterpret_cast< quint16*>(_v) = _t->data102(); break;
        case 110: *reinterpret_cast< quint16*>(_v) = _t->data103(); break;
        case 111: *reinterpret_cast< quint16*>(_v) = _t->data104(); break;
        case 112: *reinterpret_cast< quint16*>(_v) = _t->data105(); break;
        case 113: *reinterpret_cast< quint16*>(_v) = _t->data106(); break;
        case 114: *reinterpret_cast< quint16*>(_v) = _t->data107(); break;
        case 115: *reinterpret_cast< quint16*>(_v) = _t->data108(); break;
        case 116: *reinterpret_cast< quint16*>(_v) = _t->data109(); break;
        case 117: *reinterpret_cast< quint16*>(_v) = _t->data110(); break;
        case 118: *reinterpret_cast< quint16*>(_v) = _t->data111(); break;
        case 119: *reinterpret_cast< quint16*>(_v) = _t->data112(); break;
        case 120: *reinterpret_cast< quint16*>(_v) = _t->data113(); break;
        case 121: *reinterpret_cast< quint16*>(_v) = _t->data114(); break;
        case 122: *reinterpret_cast< quint16*>(_v) = _t->data115(); break;
        case 123: *reinterpret_cast< quint16*>(_v) = _t->data116(); break;
        case 124: *reinterpret_cast< quint16*>(_v) = _t->data117(); break;
        case 125: *reinterpret_cast< quint16*>(_v) = _t->data118(); break;
        case 126: *reinterpret_cast< quint16*>(_v) = _t->data119(); break;
        case 127: *reinterpret_cast< quint16*>(_v) = _t->data120(); break;
        case 128: *reinterpret_cast< quint16*>(_v) = _t->data121(); break;
        case 129: *reinterpret_cast< quint16*>(_v) = _t->data122(); break;
        case 130: *reinterpret_cast< quint16*>(_v) = _t->data123(); break;
        case 131: *reinterpret_cast< quint16*>(_v) = _t->data124(); break;
        case 132: *reinterpret_cast< quint16*>(_v) = _t->data125(); break;
        case 133: *reinterpret_cast< quint16*>(_v) = _t->data126(); break;
        case 134: *reinterpret_cast< quint16*>(_v) = _t->data127(); break;
        case 135: *reinterpret_cast< quint16*>(_v) = _t->data128(); break;
        case 136: *reinterpret_cast< quint16*>(_v) = _t->data129(); break;
        case 137: *reinterpret_cast< quint16*>(_v) = _t->data130(); break;
        case 138: *reinterpret_cast< quint16*>(_v) = _t->data131(); break;
        case 139: *reinterpret_cast< quint16*>(_v) = _t->data132(); break;
        case 140: *reinterpret_cast< quint16*>(_v) = _t->data133(); break;
        case 141: *reinterpret_cast< quint16*>(_v) = _t->data134(); break;
        case 142: *reinterpret_cast< quint16*>(_v) = _t->data135(); break;
        case 143: *reinterpret_cast< quint16*>(_v) = _t->data136(); break;
        case 144: *reinterpret_cast< quint16*>(_v) = _t->data137(); break;
        case 145: *reinterpret_cast< quint16*>(_v) = _t->data138(); break;
        case 146: *reinterpret_cast< quint16*>(_v) = _t->data139(); break;
        case 147: *reinterpret_cast< quint16*>(_v) = _t->data140(); break;
        case 148: *reinterpret_cast< quint16*>(_v) = _t->data141(); break;
        case 149: *reinterpret_cast< quint16*>(_v) = _t->data142(); break;
        case 150: *reinterpret_cast< quint16*>(_v) = _t->data143(); break;
        case 151: *reinterpret_cast< quint16*>(_v) = _t->data144(); break;
        case 152: *reinterpret_cast< quint16*>(_v) = _t->data145(); break;
        case 153: *reinterpret_cast< quint16*>(_v) = _t->data146(); break;
        case 154: *reinterpret_cast< quint16*>(_v) = _t->data147(); break;
        case 155: *reinterpret_cast< quint16*>(_v) = _t->data148(); break;
        case 156: *reinterpret_cast< quint16*>(_v) = _t->data149(); break;
        case 157: *reinterpret_cast< quint16*>(_v) = _t->data150(); break;
        case 158: *reinterpret_cast< quint16*>(_v) = _t->data151(); break;
        case 159: *reinterpret_cast< quint16*>(_v) = _t->data152(); break;
        case 160: *reinterpret_cast< quint16*>(_v) = _t->data153(); break;
        case 161: *reinterpret_cast< quint16*>(_v) = _t->data154(); break;
        case 162: *reinterpret_cast< quint16*>(_v) = _t->data155(); break;
        case 163: *reinterpret_cast< quint16*>(_v) = _t->data156(); break;
        case 164: *reinterpret_cast< quint16*>(_v) = _t->data157(); break;
        case 165: *reinterpret_cast< quint16*>(_v) = _t->data158(); break;
        case 166: *reinterpret_cast< quint16*>(_v) = _t->data159(); break;
        case 167: *reinterpret_cast< quint16*>(_v) = _t->data160(); break;
        case 168: *reinterpret_cast< quint16*>(_v) = _t->data161(); break;
        case 169: *reinterpret_cast< quint16*>(_v) = _t->data162(); break;
        case 170: *reinterpret_cast< quint16*>(_v) = _t->data163(); break;
        case 171: *reinterpret_cast< quint16*>(_v) = _t->data164(); break;
        case 172: *reinterpret_cast< quint16*>(_v) = _t->data165(); break;
        case 173: *reinterpret_cast< quint16*>(_v) = _t->data166(); break;
        case 174: *reinterpret_cast< quint16*>(_v) = _t->data167(); break;
        case 175: *reinterpret_cast< quint16*>(_v) = _t->data168(); break;
        case 176: *reinterpret_cast< quint16*>(_v) = _t->data169(); break;
        case 177: *reinterpret_cast< quint16*>(_v) = _t->data170(); break;
        case 178: *reinterpret_cast< quint16*>(_v) = _t->data171(); break;
        case 179: *reinterpret_cast< quint16*>(_v) = _t->data172(); break;
        case 180: *reinterpret_cast< quint16*>(_v) = _t->data173(); break;
        case 181: *reinterpret_cast< quint16*>(_v) = _t->data174(); break;
        case 182: *reinterpret_cast< quint16*>(_v) = _t->data175(); break;
        case 183: *reinterpret_cast< quint16*>(_v) = _t->data176(); break;
        case 184: *reinterpret_cast< quint16*>(_v) = _t->data177(); break;
        case 185: *reinterpret_cast< quint16*>(_v) = _t->data178(); break;
        case 186: *reinterpret_cast< quint16*>(_v) = _t->data179(); break;
        case 187: *reinterpret_cast< quint16*>(_v) = _t->data180(); break;
        case 188: *reinterpret_cast< quint16*>(_v) = _t->data181(); break;
        case 189: *reinterpret_cast< quint16*>(_v) = _t->data182(); break;
        case 190: *reinterpret_cast< quint16*>(_v) = _t->data183(); break;
        case 191: *reinterpret_cast< quint16*>(_v) = _t->data184(); break;
        case 192: *reinterpret_cast< quint16*>(_v) = _t->data185(); break;
        case 193: *reinterpret_cast< quint16*>(_v) = _t->data186(); break;
        case 194: *reinterpret_cast< quint16*>(_v) = _t->data187(); break;
        case 195: *reinterpret_cast< quint16*>(_v) = _t->data188(); break;
        case 196: *reinterpret_cast< quint16*>(_v) = _t->data189(); break;
        case 197: *reinterpret_cast< quint16*>(_v) = _t->data190(); break;
        case 198: *reinterpret_cast< quint16*>(_v) = _t->data191(); break;
        case 199: *reinterpret_cast< quint16*>(_v) = _t->data192(); break;
        case 200: *reinterpret_cast< quint16*>(_v) = _t->data193(); break;
        case 201: *reinterpret_cast< quint16*>(_v) = _t->data194(); break;
        case 202: *reinterpret_cast< quint16*>(_v) = _t->data195(); break;
        case 203: *reinterpret_cast< quint16*>(_v) = _t->data196(); break;
        case 204: *reinterpret_cast< quint16*>(_v) = _t->data197(); break;
        case 205: *reinterpret_cast< quint16*>(_v) = _t->data198(); break;
        case 206: *reinterpret_cast< quint16*>(_v) = _t->data199(); break;
        case 207: *reinterpret_cast< quint32*>(_v) = _t->getFlightTime(); break;
        case 208: *reinterpret_cast< quint32*>(_v) = _t->getObjectID(); break;
        case 209: *reinterpret_cast< quint16*>(_v) = _t->getFlight(); break;
        case 210: *reinterpret_cast< quint16*>(_v) = _t->getEntry(); break;
        case 211: *reinterpret_cast< quint16*>(_v) = _t->getInstanceID(); break;
        case 212: *reinterpret_cast< quint16*>(_v) = _t->getSize(); break;
        case 213: *reinterpret_cast< quint8*>(_v) = _t->getType(); break;
        case 214: *reinterpret_cast< quint8*>(_v) = _t->getData_0(); break;
        case 215: *reinterpret_cast< quint8*>(_v) = _t->getData_1(); break;
        case 216: *reinterpret_cast< quint8*>(_v) = _t->getData_2(); break;
        case 217: *reinterpret_cast< quint8*>(_v) = _t->getData_3(); break;
        case 218: *reinterpret_cast< quint8*>(_v) = _t->getData_4(); break;
        case 219: *reinterpret_cast< quint8*>(_v) = _t->getData_5(); break;
        case 220: *reinterpret_cast< quint8*>(_v) = _t->getData_6(); break;
        case 221: *reinterpret_cast< quint8*>(_v) = _t->getData_7(); break;
        case 222: *reinterpret_cast< quint8*>(_v) = _t->getData_8(); break;
        case 223: *reinterpret_cast< quint8*>(_v) = _t->getData_9(); break;
        case 224: *reinterpret_cast< quint8*>(_v) = _t->getData_10(); break;
        case 225: *reinterpret_cast< quint8*>(_v) = _t->getData_11(); break;
        case 226: *reinterpret_cast< quint8*>(_v) = _t->getData_12(); break;
        case 227: *reinterpret_cast< quint8*>(_v) = _t->getData_13(); break;
        case 228: *reinterpret_cast< quint8*>(_v) = _t->getData_14(); break;
        case 229: *reinterpret_cast< quint8*>(_v) = _t->getData_15(); break;
        case 230: *reinterpret_cast< quint8*>(_v) = _t->getData_16(); break;
        case 231: *reinterpret_cast< quint8*>(_v) = _t->getData_17(); break;
        case 232: *reinterpret_cast< quint8*>(_v) = _t->getData_18(); break;
        case 233: *reinterpret_cast< quint8*>(_v) = _t->getData_19(); break;
        case 234: *reinterpret_cast< quint8*>(_v) = _t->getData_20(); break;
        case 235: *reinterpret_cast< quint8*>(_v) = _t->getData_21(); break;
        case 236: *reinterpret_cast< quint8*>(_v) = _t->getData_22(); break;
        case 237: *reinterpret_cast< quint8*>(_v) = _t->getData_23(); break;
        case 238: *reinterpret_cast< quint8*>(_v) = _t->getData_24(); break;
        case 239: *reinterpret_cast< quint8*>(_v) = _t->getData_25(); break;
        case 240: *reinterpret_cast< quint8*>(_v) = _t->getData_26(); break;
        case 241: *reinterpret_cast< quint8*>(_v) = _t->getData_27(); break;
        case 242: *reinterpret_cast< quint8*>(_v) = _t->getData_28(); break;
        case 243: *reinterpret_cast< quint8*>(_v) = _t->getData_29(); break;
        case 244: *reinterpret_cast< quint8*>(_v) = _t->getData_30(); break;
        case 245: *reinterpret_cast< quint8*>(_v) = _t->getData_31(); break;
        case 246: *reinterpret_cast< quint8*>(_v) = _t->getData_32(); break;
        case 247: *reinterpret_cast< quint8*>(_v) = _t->getData_33(); break;
        case 248: *reinterpret_cast< quint8*>(_v) = _t->getData_34(); break;
        case 249: *reinterpret_cast< quint8*>(_v) = _t->getData_35(); break;
        case 250: *reinterpret_cast< quint8*>(_v) = _t->getData_36(); break;
        case 251: *reinterpret_cast< quint8*>(_v) = _t->getData_37(); break;
        case 252: *reinterpret_cast< quint8*>(_v) = _t->getData_38(); break;
        case 253: *reinterpret_cast< quint8*>(_v) = _t->getData_39(); break;
        case 254: *reinterpret_cast< quint8*>(_v) = _t->getData_40(); break;
        case 255: *reinterpret_cast< quint8*>(_v) = _t->getData_41(); break;
        case 256: *reinterpret_cast< quint8*>(_v) = _t->getData_42(); break;
        case 257: *reinterpret_cast< quint8*>(_v) = _t->getData_43(); break;
        case 258: *reinterpret_cast< quint8*>(_v) = _t->getData_44(); break;
        case 259: *reinterpret_cast< quint8*>(_v) = _t->getData_45(); break;
        case 260: *reinterpret_cast< quint8*>(_v) = _t->getData_46(); break;
        case 261: *reinterpret_cast< quint8*>(_v) = _t->getData_47(); break;
        case 262: *reinterpret_cast< quint8*>(_v) = _t->getData_48(); break;
        case 263: *reinterpret_cast< quint8*>(_v) = _t->getData_49(); break;
        case 264: *reinterpret_cast< quint8*>(_v) = _t->getData_50(); break;
        case 265: *reinterpret_cast< quint8*>(_v) = _t->getData_51(); break;
        case 266: *reinterpret_cast< quint8*>(_v) = _t->getData_52(); break;
        case 267: *reinterpret_cast< quint8*>(_v) = _t->getData_53(); break;
        case 268: *reinterpret_cast< quint8*>(_v) = _t->getData_54(); break;
        case 269: *reinterpret_cast< quint8*>(_v) = _t->getData_55(); break;
        case 270: *reinterpret_cast< quint8*>(_v) = _t->getData_56(); break;
        case 271: *reinterpret_cast< quint8*>(_v) = _t->getData_57(); break;
        case 272: *reinterpret_cast< quint8*>(_v) = _t->getData_58(); break;
        case 273: *reinterpret_cast< quint8*>(_v) = _t->getData_59(); break;
        case 274: *reinterpret_cast< quint8*>(_v) = _t->getData_60(); break;
        case 275: *reinterpret_cast< quint8*>(_v) = _t->getData_61(); break;
        case 276: *reinterpret_cast< quint8*>(_v) = _t->getData_62(); break;
        case 277: *reinterpret_cast< quint8*>(_v) = _t->getData_63(); break;
        case 278: *reinterpret_cast< quint8*>(_v) = _t->getData_64(); break;
        case 279: *reinterpret_cast< quint8*>(_v) = _t->getData_65(); break;
        case 280: *reinterpret_cast< quint8*>(_v) = _t->getData_66(); break;
        case 281: *reinterpret_cast< quint8*>(_v) = _t->getData_67(); break;
        case 282: *reinterpret_cast< quint8*>(_v) = _t->getData_68(); break;
        case 283: *reinterpret_cast< quint8*>(_v) = _t->getData_69(); break;
        case 284: *reinterpret_cast< quint8*>(_v) = _t->getData_70(); break;
        case 285: *reinterpret_cast< quint8*>(_v) = _t->getData_71(); break;
        case 286: *reinterpret_cast< quint8*>(_v) = _t->getData_72(); break;
        case 287: *reinterpret_cast< quint8*>(_v) = _t->getData_73(); break;
        case 288: *reinterpret_cast< quint8*>(_v) = _t->getData_74(); break;
        case 289: *reinterpret_cast< quint8*>(_v) = _t->getData_75(); break;
        case 290: *reinterpret_cast< quint8*>(_v) = _t->getData_76(); break;
        case 291: *reinterpret_cast< quint8*>(_v) = _t->getData_77(); break;
        case 292: *reinterpret_cast< quint8*>(_v) = _t->getData_78(); break;
        case 293: *reinterpret_cast< quint8*>(_v) = _t->getData_79(); break;
        case 294: *reinterpret_cast< quint8*>(_v) = _t->getData_80(); break;
        case 295: *reinterpret_cast< quint8*>(_v) = _t->getData_81(); break;
        case 296: *reinterpret_cast< quint8*>(_v) = _t->getData_82(); break;
        case 297: *reinterpret_cast< quint8*>(_v) = _t->getData_83(); break;
        case 298: *reinterpret_cast< quint8*>(_v) = _t->getData_84(); break;
        case 299: *reinterpret_cast< quint8*>(_v) = _t->getData_85(); break;
        case 300: *reinterpret_cast< quint8*>(_v) = _t->getData_86(); break;
        case 301: *reinterpret_cast< quint8*>(_v) = _t->getData_87(); break;
        case 302: *reinterpret_cast< quint8*>(_v) = _t->getData_88(); break;
        case 303: *reinterpret_cast< quint8*>(_v) = _t->getData_89(); break;
        case 304: *reinterpret_cast< quint8*>(_v) = _t->getData_90(); break;
        case 305: *reinterpret_cast< quint8*>(_v) = _t->getData_91(); break;
        case 306: *reinterpret_cast< quint8*>(_v) = _t->getData_92(); break;
        case 307: *reinterpret_cast< quint8*>(_v) = _t->getData_93(); break;
        case 308: *reinterpret_cast< quint8*>(_v) = _t->getData_94(); break;
        case 309: *reinterpret_cast< quint8*>(_v) = _t->getData_95(); break;
        case 310: *reinterpret_cast< quint8*>(_v) = _t->getData_96(); break;
        case 311: *reinterpret_cast< quint8*>(_v) = _t->getData_97(); break;
        case 312: *reinterpret_cast< quint8*>(_v) = _t->getData_98(); break;
        case 313: *reinterpret_cast< quint8*>(_v) = _t->getData_99(); break;
        case 314: *reinterpret_cast< quint8*>(_v) = _t->getData_100(); break;
        case 315: *reinterpret_cast< quint8*>(_v) = _t->getData_101(); break;
        case 316: *reinterpret_cast< quint8*>(_v) = _t->getData_102(); break;
        case 317: *reinterpret_cast< quint8*>(_v) = _t->getData_103(); break;
        case 318: *reinterpret_cast< quint8*>(_v) = _t->getData_104(); break;
        case 319: *reinterpret_cast< quint8*>(_v) = _t->getData_105(); break;
        case 320: *reinterpret_cast< quint8*>(_v) = _t->getData_106(); break;
        case 321: *reinterpret_cast< quint8*>(_v) = _t->getData_107(); break;
        case 322: *reinterpret_cast< quint8*>(_v) = _t->getData_108(); break;
        case 323: *reinterpret_cast< quint8*>(_v) = _t->getData_109(); break;
        case 324: *reinterpret_cast< quint8*>(_v) = _t->getData_110(); break;
        case 325: *reinterpret_cast< quint8*>(_v) = _t->getData_111(); break;
        case 326: *reinterpret_cast< quint8*>(_v) = _t->getData_112(); break;
        case 327: *reinterpret_cast< quint8*>(_v) = _t->getData_113(); break;
        case 328: *reinterpret_cast< quint8*>(_v) = _t->getData_114(); break;
        case 329: *reinterpret_cast< quint8*>(_v) = _t->getData_115(); break;
        case 330: *reinterpret_cast< quint8*>(_v) = _t->getData_116(); break;
        case 331: *reinterpret_cast< quint8*>(_v) = _t->getData_117(); break;
        case 332: *reinterpret_cast< quint8*>(_v) = _t->getData_118(); break;
        case 333: *reinterpret_cast< quint8*>(_v) = _t->getData_119(); break;
        case 334: *reinterpret_cast< quint8*>(_v) = _t->getData_120(); break;
        case 335: *reinterpret_cast< quint8*>(_v) = _t->getData_121(); break;
        case 336: *reinterpret_cast< quint8*>(_v) = _t->getData_122(); break;
        case 337: *reinterpret_cast< quint8*>(_v) = _t->getData_123(); break;
        case 338: *reinterpret_cast< quint8*>(_v) = _t->getData_124(); break;
        case 339: *reinterpret_cast< quint8*>(_v) = _t->getData_125(); break;
        case 340: *reinterpret_cast< quint8*>(_v) = _t->getData_126(); break;
        case 341: *reinterpret_cast< quint8*>(_v) = _t->getData_127(); break;
        case 342: *reinterpret_cast< quint8*>(_v) = _t->getData_128(); break;
        case 343: *reinterpret_cast< quint8*>(_v) = _t->getData_129(); break;
        case 344: *reinterpret_cast< quint8*>(_v) = _t->getData_130(); break;
        case 345: *reinterpret_cast< quint8*>(_v) = _t->getData_131(); break;
        case 346: *reinterpret_cast< quint8*>(_v) = _t->getData_132(); break;
        case 347: *reinterpret_cast< quint8*>(_v) = _t->getData_133(); break;
        case 348: *reinterpret_cast< quint8*>(_v) = _t->getData_134(); break;
        case 349: *reinterpret_cast< quint8*>(_v) = _t->getData_135(); break;
        case 350: *reinterpret_cast< quint8*>(_v) = _t->getData_136(); break;
        case 351: *reinterpret_cast< quint8*>(_v) = _t->getData_137(); break;
        case 352: *reinterpret_cast< quint8*>(_v) = _t->getData_138(); break;
        case 353: *reinterpret_cast< quint8*>(_v) = _t->getData_139(); break;
        case 354: *reinterpret_cast< quint8*>(_v) = _t->getData_140(); break;
        case 355: *reinterpret_cast< quint8*>(_v) = _t->getData_141(); break;
        case 356: *reinterpret_cast< quint8*>(_v) = _t->getData_142(); break;
        case 357: *reinterpret_cast< quint8*>(_v) = _t->getData_143(); break;
        case 358: *reinterpret_cast< quint8*>(_v) = _t->getData_144(); break;
        case 359: *reinterpret_cast< quint8*>(_v) = _t->getData_145(); break;
        case 360: *reinterpret_cast< quint8*>(_v) = _t->getData_146(); break;
        case 361: *reinterpret_cast< quint8*>(_v) = _t->getData_147(); break;
        case 362: *reinterpret_cast< quint8*>(_v) = _t->getData_148(); break;
        case 363: *reinterpret_cast< quint8*>(_v) = _t->getData_149(); break;
        case 364: *reinterpret_cast< quint8*>(_v) = _t->getData_150(); break;
        case 365: *reinterpret_cast< quint8*>(_v) = _t->getData_151(); break;
        case 366: *reinterpret_cast< quint8*>(_v) = _t->getData_152(); break;
        case 367: *reinterpret_cast< quint8*>(_v) = _t->getData_153(); break;
        case 368: *reinterpret_cast< quint8*>(_v) = _t->getData_154(); break;
        case 369: *reinterpret_cast< quint8*>(_v) = _t->getData_155(); break;
        case 370: *reinterpret_cast< quint8*>(_v) = _t->getData_156(); break;
        case 371: *reinterpret_cast< quint8*>(_v) = _t->getData_157(); break;
        case 372: *reinterpret_cast< quint8*>(_v) = _t->getData_158(); break;
        case 373: *reinterpret_cast< quint8*>(_v) = _t->getData_159(); break;
        case 374: *reinterpret_cast< quint8*>(_v) = _t->getData_160(); break;
        case 375: *reinterpret_cast< quint8*>(_v) = _t->getData_161(); break;
        case 376: *reinterpret_cast< quint8*>(_v) = _t->getData_162(); break;
        case 377: *reinterpret_cast< quint8*>(_v) = _t->getData_163(); break;
        case 378: *reinterpret_cast< quint8*>(_v) = _t->getData_164(); break;
        case 379: *reinterpret_cast< quint8*>(_v) = _t->getData_165(); break;
        case 380: *reinterpret_cast< quint8*>(_v) = _t->getData_166(); break;
        case 381: *reinterpret_cast< quint8*>(_v) = _t->getData_167(); break;
        case 382: *reinterpret_cast< quint8*>(_v) = _t->getData_168(); break;
        case 383: *reinterpret_cast< quint8*>(_v) = _t->getData_169(); break;
        case 384: *reinterpret_cast< quint8*>(_v) = _t->getData_170(); break;
        case 385: *reinterpret_cast< quint8*>(_v) = _t->getData_171(); break;
        case 386: *reinterpret_cast< quint8*>(_v) = _t->getData_172(); break;
        case 387: *reinterpret_cast< quint8*>(_v) = _t->getData_173(); break;
        case 388: *reinterpret_cast< quint8*>(_v) = _t->getData_174(); break;
        case 389: *reinterpret_cast< quint8*>(_v) = _t->getData_175(); break;
        case 390: *reinterpret_cast< quint8*>(_v) = _t->getData_176(); break;
        case 391: *reinterpret_cast< quint8*>(_v) = _t->getData_177(); break;
        case 392: *reinterpret_cast< quint8*>(_v) = _t->getData_178(); break;
        case 393: *reinterpret_cast< quint8*>(_v) = _t->getData_179(); break;
        case 394: *reinterpret_cast< quint8*>(_v) = _t->getData_180(); break;
        case 395: *reinterpret_cast< quint8*>(_v) = _t->getData_181(); break;
        case 396: *reinterpret_cast< quint8*>(_v) = _t->getData_182(); break;
        case 397: *reinterpret_cast< quint8*>(_v) = _t->getData_183(); break;
        case 398: *reinterpret_cast< quint8*>(_v) = _t->getData_184(); break;
        case 399: *reinterpret_cast< quint8*>(_v) = _t->getData_185(); break;
        case 400: *reinterpret_cast< quint8*>(_v) = _t->getData_186(); break;
        case 401: *reinterpret_cast< quint8*>(_v) = _t->getData_187(); break;
        case 402: *reinterpret_cast< quint8*>(_v) = _t->getData_188(); break;
        case 403: *reinterpret_cast< quint8*>(_v) = _t->getData_189(); break;
        case 404: *reinterpret_cast< quint8*>(_v) = _t->getData_190(); break;
        case 405: *reinterpret_cast< quint8*>(_v) = _t->getData_191(); break;
        case 406: *reinterpret_cast< quint8*>(_v) = _t->getData_192(); break;
        case 407: *reinterpret_cast< quint8*>(_v) = _t->getData_193(); break;
        case 408: *reinterpret_cast< quint8*>(_v) = _t->getData_194(); break;
        case 409: *reinterpret_cast< quint8*>(_v) = _t->getData_195(); break;
        case 410: *reinterpret_cast< quint8*>(_v) = _t->getData_196(); break;
        case 411: *reinterpret_cast< quint8*>(_v) = _t->getData_197(); break;
        case 412: *reinterpret_cast< quint8*>(_v) = _t->getData_198(); break;
        case 413: *reinterpret_cast< quint8*>(_v) = _t->getData_199(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DebugLogEntry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlightTime(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setObjectID(*reinterpret_cast< quint32*>(_v)); break;
        case 2: _t->setFlight(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setEntry(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setInstanceID(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setSize(*reinterpret_cast< quint16*>(_v)); break;
        case 6: _t->setType(*reinterpret_cast< DebugLogEntry_Type::Enum*>(_v)); break;
        case 7: _t->setData0(*reinterpret_cast< quint16*>(_v)); break;
        case 8: _t->setData1(*reinterpret_cast< quint16*>(_v)); break;
        case 9: _t->setData2(*reinterpret_cast< quint16*>(_v)); break;
        case 10: _t->setData3(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setData4(*reinterpret_cast< quint16*>(_v)); break;
        case 12: _t->setData5(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setData6(*reinterpret_cast< quint16*>(_v)); break;
        case 14: _t->setData7(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setData8(*reinterpret_cast< quint16*>(_v)); break;
        case 16: _t->setData9(*reinterpret_cast< quint16*>(_v)); break;
        case 17: _t->setData10(*reinterpret_cast< quint16*>(_v)); break;
        case 18: _t->setData11(*reinterpret_cast< quint16*>(_v)); break;
        case 19: _t->setData12(*reinterpret_cast< quint16*>(_v)); break;
        case 20: _t->setData13(*reinterpret_cast< quint16*>(_v)); break;
        case 21: _t->setData14(*reinterpret_cast< quint16*>(_v)); break;
        case 22: _t->setData15(*reinterpret_cast< quint16*>(_v)); break;
        case 23: _t->setData16(*reinterpret_cast< quint16*>(_v)); break;
        case 24: _t->setData17(*reinterpret_cast< quint16*>(_v)); break;
        case 25: _t->setData18(*reinterpret_cast< quint16*>(_v)); break;
        case 26: _t->setData19(*reinterpret_cast< quint16*>(_v)); break;
        case 27: _t->setData20(*reinterpret_cast< quint16*>(_v)); break;
        case 28: _t->setData21(*reinterpret_cast< quint16*>(_v)); break;
        case 29: _t->setData22(*reinterpret_cast< quint16*>(_v)); break;
        case 30: _t->setData23(*reinterpret_cast< quint16*>(_v)); break;
        case 31: _t->setData24(*reinterpret_cast< quint16*>(_v)); break;
        case 32: _t->setData25(*reinterpret_cast< quint16*>(_v)); break;
        case 33: _t->setData26(*reinterpret_cast< quint16*>(_v)); break;
        case 34: _t->setData27(*reinterpret_cast< quint16*>(_v)); break;
        case 35: _t->setData28(*reinterpret_cast< quint16*>(_v)); break;
        case 36: _t->setData29(*reinterpret_cast< quint16*>(_v)); break;
        case 37: _t->setData30(*reinterpret_cast< quint16*>(_v)); break;
        case 38: _t->setData31(*reinterpret_cast< quint16*>(_v)); break;
        case 39: _t->setData32(*reinterpret_cast< quint16*>(_v)); break;
        case 40: _t->setData33(*reinterpret_cast< quint16*>(_v)); break;
        case 41: _t->setData34(*reinterpret_cast< quint16*>(_v)); break;
        case 42: _t->setData35(*reinterpret_cast< quint16*>(_v)); break;
        case 43: _t->setData36(*reinterpret_cast< quint16*>(_v)); break;
        case 44: _t->setData37(*reinterpret_cast< quint16*>(_v)); break;
        case 45: _t->setData38(*reinterpret_cast< quint16*>(_v)); break;
        case 46: _t->setData39(*reinterpret_cast< quint16*>(_v)); break;
        case 47: _t->setData40(*reinterpret_cast< quint16*>(_v)); break;
        case 48: _t->setData41(*reinterpret_cast< quint16*>(_v)); break;
        case 49: _t->setData42(*reinterpret_cast< quint16*>(_v)); break;
        case 50: _t->setData43(*reinterpret_cast< quint16*>(_v)); break;
        case 51: _t->setData44(*reinterpret_cast< quint16*>(_v)); break;
        case 52: _t->setData45(*reinterpret_cast< quint16*>(_v)); break;
        case 53: _t->setData46(*reinterpret_cast< quint16*>(_v)); break;
        case 54: _t->setData47(*reinterpret_cast< quint16*>(_v)); break;
        case 55: _t->setData48(*reinterpret_cast< quint16*>(_v)); break;
        case 56: _t->setData49(*reinterpret_cast< quint16*>(_v)); break;
        case 57: _t->setData50(*reinterpret_cast< quint16*>(_v)); break;
        case 58: _t->setData51(*reinterpret_cast< quint16*>(_v)); break;
        case 59: _t->setData52(*reinterpret_cast< quint16*>(_v)); break;
        case 60: _t->setData53(*reinterpret_cast< quint16*>(_v)); break;
        case 61: _t->setData54(*reinterpret_cast< quint16*>(_v)); break;
        case 62: _t->setData55(*reinterpret_cast< quint16*>(_v)); break;
        case 63: _t->setData56(*reinterpret_cast< quint16*>(_v)); break;
        case 64: _t->setData57(*reinterpret_cast< quint16*>(_v)); break;
        case 65: _t->setData58(*reinterpret_cast< quint16*>(_v)); break;
        case 66: _t->setData59(*reinterpret_cast< quint16*>(_v)); break;
        case 67: _t->setData60(*reinterpret_cast< quint16*>(_v)); break;
        case 68: _t->setData61(*reinterpret_cast< quint16*>(_v)); break;
        case 69: _t->setData62(*reinterpret_cast< quint16*>(_v)); break;
        case 70: _t->setData63(*reinterpret_cast< quint16*>(_v)); break;
        case 71: _t->setData64(*reinterpret_cast< quint16*>(_v)); break;
        case 72: _t->setData65(*reinterpret_cast< quint16*>(_v)); break;
        case 73: _t->setData66(*reinterpret_cast< quint16*>(_v)); break;
        case 74: _t->setData67(*reinterpret_cast< quint16*>(_v)); break;
        case 75: _t->setData68(*reinterpret_cast< quint16*>(_v)); break;
        case 76: _t->setData69(*reinterpret_cast< quint16*>(_v)); break;
        case 77: _t->setData70(*reinterpret_cast< quint16*>(_v)); break;
        case 78: _t->setData71(*reinterpret_cast< quint16*>(_v)); break;
        case 79: _t->setData72(*reinterpret_cast< quint16*>(_v)); break;
        case 80: _t->setData73(*reinterpret_cast< quint16*>(_v)); break;
        case 81: _t->setData74(*reinterpret_cast< quint16*>(_v)); break;
        case 82: _t->setData75(*reinterpret_cast< quint16*>(_v)); break;
        case 83: _t->setData76(*reinterpret_cast< quint16*>(_v)); break;
        case 84: _t->setData77(*reinterpret_cast< quint16*>(_v)); break;
        case 85: _t->setData78(*reinterpret_cast< quint16*>(_v)); break;
        case 86: _t->setData79(*reinterpret_cast< quint16*>(_v)); break;
        case 87: _t->setData80(*reinterpret_cast< quint16*>(_v)); break;
        case 88: _t->setData81(*reinterpret_cast< quint16*>(_v)); break;
        case 89: _t->setData82(*reinterpret_cast< quint16*>(_v)); break;
        case 90: _t->setData83(*reinterpret_cast< quint16*>(_v)); break;
        case 91: _t->setData84(*reinterpret_cast< quint16*>(_v)); break;
        case 92: _t->setData85(*reinterpret_cast< quint16*>(_v)); break;
        case 93: _t->setData86(*reinterpret_cast< quint16*>(_v)); break;
        case 94: _t->setData87(*reinterpret_cast< quint16*>(_v)); break;
        case 95: _t->setData88(*reinterpret_cast< quint16*>(_v)); break;
        case 96: _t->setData89(*reinterpret_cast< quint16*>(_v)); break;
        case 97: _t->setData90(*reinterpret_cast< quint16*>(_v)); break;
        case 98: _t->setData91(*reinterpret_cast< quint16*>(_v)); break;
        case 99: _t->setData92(*reinterpret_cast< quint16*>(_v)); break;
        case 100: _t->setData93(*reinterpret_cast< quint16*>(_v)); break;
        case 101: _t->setData94(*reinterpret_cast< quint16*>(_v)); break;
        case 102: _t->setData95(*reinterpret_cast< quint16*>(_v)); break;
        case 103: _t->setData96(*reinterpret_cast< quint16*>(_v)); break;
        case 104: _t->setData97(*reinterpret_cast< quint16*>(_v)); break;
        case 105: _t->setData98(*reinterpret_cast< quint16*>(_v)); break;
        case 106: _t->setData99(*reinterpret_cast< quint16*>(_v)); break;
        case 107: _t->setData100(*reinterpret_cast< quint16*>(_v)); break;
        case 108: _t->setData101(*reinterpret_cast< quint16*>(_v)); break;
        case 109: _t->setData102(*reinterpret_cast< quint16*>(_v)); break;
        case 110: _t->setData103(*reinterpret_cast< quint16*>(_v)); break;
        case 111: _t->setData104(*reinterpret_cast< quint16*>(_v)); break;
        case 112: _t->setData105(*reinterpret_cast< quint16*>(_v)); break;
        case 113: _t->setData106(*reinterpret_cast< quint16*>(_v)); break;
        case 114: _t->setData107(*reinterpret_cast< quint16*>(_v)); break;
        case 115: _t->setData108(*reinterpret_cast< quint16*>(_v)); break;
        case 116: _t->setData109(*reinterpret_cast< quint16*>(_v)); break;
        case 117: _t->setData110(*reinterpret_cast< quint16*>(_v)); break;
        case 118: _t->setData111(*reinterpret_cast< quint16*>(_v)); break;
        case 119: _t->setData112(*reinterpret_cast< quint16*>(_v)); break;
        case 120: _t->setData113(*reinterpret_cast< quint16*>(_v)); break;
        case 121: _t->setData114(*reinterpret_cast< quint16*>(_v)); break;
        case 122: _t->setData115(*reinterpret_cast< quint16*>(_v)); break;
        case 123: _t->setData116(*reinterpret_cast< quint16*>(_v)); break;
        case 124: _t->setData117(*reinterpret_cast< quint16*>(_v)); break;
        case 125: _t->setData118(*reinterpret_cast< quint16*>(_v)); break;
        case 126: _t->setData119(*reinterpret_cast< quint16*>(_v)); break;
        case 127: _t->setData120(*reinterpret_cast< quint16*>(_v)); break;
        case 128: _t->setData121(*reinterpret_cast< quint16*>(_v)); break;
        case 129: _t->setData122(*reinterpret_cast< quint16*>(_v)); break;
        case 130: _t->setData123(*reinterpret_cast< quint16*>(_v)); break;
        case 131: _t->setData124(*reinterpret_cast< quint16*>(_v)); break;
        case 132: _t->setData125(*reinterpret_cast< quint16*>(_v)); break;
        case 133: _t->setData126(*reinterpret_cast< quint16*>(_v)); break;
        case 134: _t->setData127(*reinterpret_cast< quint16*>(_v)); break;
        case 135: _t->setData128(*reinterpret_cast< quint16*>(_v)); break;
        case 136: _t->setData129(*reinterpret_cast< quint16*>(_v)); break;
        case 137: _t->setData130(*reinterpret_cast< quint16*>(_v)); break;
        case 138: _t->setData131(*reinterpret_cast< quint16*>(_v)); break;
        case 139: _t->setData132(*reinterpret_cast< quint16*>(_v)); break;
        case 140: _t->setData133(*reinterpret_cast< quint16*>(_v)); break;
        case 141: _t->setData134(*reinterpret_cast< quint16*>(_v)); break;
        case 142: _t->setData135(*reinterpret_cast< quint16*>(_v)); break;
        case 143: _t->setData136(*reinterpret_cast< quint16*>(_v)); break;
        case 144: _t->setData137(*reinterpret_cast< quint16*>(_v)); break;
        case 145: _t->setData138(*reinterpret_cast< quint16*>(_v)); break;
        case 146: _t->setData139(*reinterpret_cast< quint16*>(_v)); break;
        case 147: _t->setData140(*reinterpret_cast< quint16*>(_v)); break;
        case 148: _t->setData141(*reinterpret_cast< quint16*>(_v)); break;
        case 149: _t->setData142(*reinterpret_cast< quint16*>(_v)); break;
        case 150: _t->setData143(*reinterpret_cast< quint16*>(_v)); break;
        case 151: _t->setData144(*reinterpret_cast< quint16*>(_v)); break;
        case 152: _t->setData145(*reinterpret_cast< quint16*>(_v)); break;
        case 153: _t->setData146(*reinterpret_cast< quint16*>(_v)); break;
        case 154: _t->setData147(*reinterpret_cast< quint16*>(_v)); break;
        case 155: _t->setData148(*reinterpret_cast< quint16*>(_v)); break;
        case 156: _t->setData149(*reinterpret_cast< quint16*>(_v)); break;
        case 157: _t->setData150(*reinterpret_cast< quint16*>(_v)); break;
        case 158: _t->setData151(*reinterpret_cast< quint16*>(_v)); break;
        case 159: _t->setData152(*reinterpret_cast< quint16*>(_v)); break;
        case 160: _t->setData153(*reinterpret_cast< quint16*>(_v)); break;
        case 161: _t->setData154(*reinterpret_cast< quint16*>(_v)); break;
        case 162: _t->setData155(*reinterpret_cast< quint16*>(_v)); break;
        case 163: _t->setData156(*reinterpret_cast< quint16*>(_v)); break;
        case 164: _t->setData157(*reinterpret_cast< quint16*>(_v)); break;
        case 165: _t->setData158(*reinterpret_cast< quint16*>(_v)); break;
        case 166: _t->setData159(*reinterpret_cast< quint16*>(_v)); break;
        case 167: _t->setData160(*reinterpret_cast< quint16*>(_v)); break;
        case 168: _t->setData161(*reinterpret_cast< quint16*>(_v)); break;
        case 169: _t->setData162(*reinterpret_cast< quint16*>(_v)); break;
        case 170: _t->setData163(*reinterpret_cast< quint16*>(_v)); break;
        case 171: _t->setData164(*reinterpret_cast< quint16*>(_v)); break;
        case 172: _t->setData165(*reinterpret_cast< quint16*>(_v)); break;
        case 173: _t->setData166(*reinterpret_cast< quint16*>(_v)); break;
        case 174: _t->setData167(*reinterpret_cast< quint16*>(_v)); break;
        case 175: _t->setData168(*reinterpret_cast< quint16*>(_v)); break;
        case 176: _t->setData169(*reinterpret_cast< quint16*>(_v)); break;
        case 177: _t->setData170(*reinterpret_cast< quint16*>(_v)); break;
        case 178: _t->setData171(*reinterpret_cast< quint16*>(_v)); break;
        case 179: _t->setData172(*reinterpret_cast< quint16*>(_v)); break;
        case 180: _t->setData173(*reinterpret_cast< quint16*>(_v)); break;
        case 181: _t->setData174(*reinterpret_cast< quint16*>(_v)); break;
        case 182: _t->setData175(*reinterpret_cast< quint16*>(_v)); break;
        case 183: _t->setData176(*reinterpret_cast< quint16*>(_v)); break;
        case 184: _t->setData177(*reinterpret_cast< quint16*>(_v)); break;
        case 185: _t->setData178(*reinterpret_cast< quint16*>(_v)); break;
        case 186: _t->setData179(*reinterpret_cast< quint16*>(_v)); break;
        case 187: _t->setData180(*reinterpret_cast< quint16*>(_v)); break;
        case 188: _t->setData181(*reinterpret_cast< quint16*>(_v)); break;
        case 189: _t->setData182(*reinterpret_cast< quint16*>(_v)); break;
        case 190: _t->setData183(*reinterpret_cast< quint16*>(_v)); break;
        case 191: _t->setData184(*reinterpret_cast< quint16*>(_v)); break;
        case 192: _t->setData185(*reinterpret_cast< quint16*>(_v)); break;
        case 193: _t->setData186(*reinterpret_cast< quint16*>(_v)); break;
        case 194: _t->setData187(*reinterpret_cast< quint16*>(_v)); break;
        case 195: _t->setData188(*reinterpret_cast< quint16*>(_v)); break;
        case 196: _t->setData189(*reinterpret_cast< quint16*>(_v)); break;
        case 197: _t->setData190(*reinterpret_cast< quint16*>(_v)); break;
        case 198: _t->setData191(*reinterpret_cast< quint16*>(_v)); break;
        case 199: _t->setData192(*reinterpret_cast< quint16*>(_v)); break;
        case 200: _t->setData193(*reinterpret_cast< quint16*>(_v)); break;
        case 201: _t->setData194(*reinterpret_cast< quint16*>(_v)); break;
        case 202: _t->setData195(*reinterpret_cast< quint16*>(_v)); break;
        case 203: _t->setData196(*reinterpret_cast< quint16*>(_v)); break;
        case 204: _t->setData197(*reinterpret_cast< quint16*>(_v)); break;
        case 205: _t->setData198(*reinterpret_cast< quint16*>(_v)); break;
        case 206: _t->setData199(*reinterpret_cast< quint16*>(_v)); break;
        case 207: _t->setFlightTime(*reinterpret_cast< quint32*>(_v)); break;
        case 208: _t->setObjectID(*reinterpret_cast< quint32*>(_v)); break;
        case 209: _t->setFlight(*reinterpret_cast< quint16*>(_v)); break;
        case 210: _t->setEntry(*reinterpret_cast< quint16*>(_v)); break;
        case 211: _t->setInstanceID(*reinterpret_cast< quint16*>(_v)); break;
        case 212: _t->setSize(*reinterpret_cast< quint16*>(_v)); break;
        case 213: _t->setType(*reinterpret_cast< quint8*>(_v)); break;
        case 214: _t->setData_0(*reinterpret_cast< quint8*>(_v)); break;
        case 215: _t->setData_1(*reinterpret_cast< quint8*>(_v)); break;
        case 216: _t->setData_2(*reinterpret_cast< quint8*>(_v)); break;
        case 217: _t->setData_3(*reinterpret_cast< quint8*>(_v)); break;
        case 218: _t->setData_4(*reinterpret_cast< quint8*>(_v)); break;
        case 219: _t->setData_5(*reinterpret_cast< quint8*>(_v)); break;
        case 220: _t->setData_6(*reinterpret_cast< quint8*>(_v)); break;
        case 221: _t->setData_7(*reinterpret_cast< quint8*>(_v)); break;
        case 222: _t->setData_8(*reinterpret_cast< quint8*>(_v)); break;
        case 223: _t->setData_9(*reinterpret_cast< quint8*>(_v)); break;
        case 224: _t->setData_10(*reinterpret_cast< quint8*>(_v)); break;
        case 225: _t->setData_11(*reinterpret_cast< quint8*>(_v)); break;
        case 226: _t->setData_12(*reinterpret_cast< quint8*>(_v)); break;
        case 227: _t->setData_13(*reinterpret_cast< quint8*>(_v)); break;
        case 228: _t->setData_14(*reinterpret_cast< quint8*>(_v)); break;
        case 229: _t->setData_15(*reinterpret_cast< quint8*>(_v)); break;
        case 230: _t->setData_16(*reinterpret_cast< quint8*>(_v)); break;
        case 231: _t->setData_17(*reinterpret_cast< quint8*>(_v)); break;
        case 232: _t->setData_18(*reinterpret_cast< quint8*>(_v)); break;
        case 233: _t->setData_19(*reinterpret_cast< quint8*>(_v)); break;
        case 234: _t->setData_20(*reinterpret_cast< quint8*>(_v)); break;
        case 235: _t->setData_21(*reinterpret_cast< quint8*>(_v)); break;
        case 236: _t->setData_22(*reinterpret_cast< quint8*>(_v)); break;
        case 237: _t->setData_23(*reinterpret_cast< quint8*>(_v)); break;
        case 238: _t->setData_24(*reinterpret_cast< quint8*>(_v)); break;
        case 239: _t->setData_25(*reinterpret_cast< quint8*>(_v)); break;
        case 240: _t->setData_26(*reinterpret_cast< quint8*>(_v)); break;
        case 241: _t->setData_27(*reinterpret_cast< quint8*>(_v)); break;
        case 242: _t->setData_28(*reinterpret_cast< quint8*>(_v)); break;
        case 243: _t->setData_29(*reinterpret_cast< quint8*>(_v)); break;
        case 244: _t->setData_30(*reinterpret_cast< quint8*>(_v)); break;
        case 245: _t->setData_31(*reinterpret_cast< quint8*>(_v)); break;
        case 246: _t->setData_32(*reinterpret_cast< quint8*>(_v)); break;
        case 247: _t->setData_33(*reinterpret_cast< quint8*>(_v)); break;
        case 248: _t->setData_34(*reinterpret_cast< quint8*>(_v)); break;
        case 249: _t->setData_35(*reinterpret_cast< quint8*>(_v)); break;
        case 250: _t->setData_36(*reinterpret_cast< quint8*>(_v)); break;
        case 251: _t->setData_37(*reinterpret_cast< quint8*>(_v)); break;
        case 252: _t->setData_38(*reinterpret_cast< quint8*>(_v)); break;
        case 253: _t->setData_39(*reinterpret_cast< quint8*>(_v)); break;
        case 254: _t->setData_40(*reinterpret_cast< quint8*>(_v)); break;
        case 255: _t->setData_41(*reinterpret_cast< quint8*>(_v)); break;
        case 256: _t->setData_42(*reinterpret_cast< quint8*>(_v)); break;
        case 257: _t->setData_43(*reinterpret_cast< quint8*>(_v)); break;
        case 258: _t->setData_44(*reinterpret_cast< quint8*>(_v)); break;
        case 259: _t->setData_45(*reinterpret_cast< quint8*>(_v)); break;
        case 260: _t->setData_46(*reinterpret_cast< quint8*>(_v)); break;
        case 261: _t->setData_47(*reinterpret_cast< quint8*>(_v)); break;
        case 262: _t->setData_48(*reinterpret_cast< quint8*>(_v)); break;
        case 263: _t->setData_49(*reinterpret_cast< quint8*>(_v)); break;
        case 264: _t->setData_50(*reinterpret_cast< quint8*>(_v)); break;
        case 265: _t->setData_51(*reinterpret_cast< quint8*>(_v)); break;
        case 266: _t->setData_52(*reinterpret_cast< quint8*>(_v)); break;
        case 267: _t->setData_53(*reinterpret_cast< quint8*>(_v)); break;
        case 268: _t->setData_54(*reinterpret_cast< quint8*>(_v)); break;
        case 269: _t->setData_55(*reinterpret_cast< quint8*>(_v)); break;
        case 270: _t->setData_56(*reinterpret_cast< quint8*>(_v)); break;
        case 271: _t->setData_57(*reinterpret_cast< quint8*>(_v)); break;
        case 272: _t->setData_58(*reinterpret_cast< quint8*>(_v)); break;
        case 273: _t->setData_59(*reinterpret_cast< quint8*>(_v)); break;
        case 274: _t->setData_60(*reinterpret_cast< quint8*>(_v)); break;
        case 275: _t->setData_61(*reinterpret_cast< quint8*>(_v)); break;
        case 276: _t->setData_62(*reinterpret_cast< quint8*>(_v)); break;
        case 277: _t->setData_63(*reinterpret_cast< quint8*>(_v)); break;
        case 278: _t->setData_64(*reinterpret_cast< quint8*>(_v)); break;
        case 279: _t->setData_65(*reinterpret_cast< quint8*>(_v)); break;
        case 280: _t->setData_66(*reinterpret_cast< quint8*>(_v)); break;
        case 281: _t->setData_67(*reinterpret_cast< quint8*>(_v)); break;
        case 282: _t->setData_68(*reinterpret_cast< quint8*>(_v)); break;
        case 283: _t->setData_69(*reinterpret_cast< quint8*>(_v)); break;
        case 284: _t->setData_70(*reinterpret_cast< quint8*>(_v)); break;
        case 285: _t->setData_71(*reinterpret_cast< quint8*>(_v)); break;
        case 286: _t->setData_72(*reinterpret_cast< quint8*>(_v)); break;
        case 287: _t->setData_73(*reinterpret_cast< quint8*>(_v)); break;
        case 288: _t->setData_74(*reinterpret_cast< quint8*>(_v)); break;
        case 289: _t->setData_75(*reinterpret_cast< quint8*>(_v)); break;
        case 290: _t->setData_76(*reinterpret_cast< quint8*>(_v)); break;
        case 291: _t->setData_77(*reinterpret_cast< quint8*>(_v)); break;
        case 292: _t->setData_78(*reinterpret_cast< quint8*>(_v)); break;
        case 293: _t->setData_79(*reinterpret_cast< quint8*>(_v)); break;
        case 294: _t->setData_80(*reinterpret_cast< quint8*>(_v)); break;
        case 295: _t->setData_81(*reinterpret_cast< quint8*>(_v)); break;
        case 296: _t->setData_82(*reinterpret_cast< quint8*>(_v)); break;
        case 297: _t->setData_83(*reinterpret_cast< quint8*>(_v)); break;
        case 298: _t->setData_84(*reinterpret_cast< quint8*>(_v)); break;
        case 299: _t->setData_85(*reinterpret_cast< quint8*>(_v)); break;
        case 300: _t->setData_86(*reinterpret_cast< quint8*>(_v)); break;
        case 301: _t->setData_87(*reinterpret_cast< quint8*>(_v)); break;
        case 302: _t->setData_88(*reinterpret_cast< quint8*>(_v)); break;
        case 303: _t->setData_89(*reinterpret_cast< quint8*>(_v)); break;
        case 304: _t->setData_90(*reinterpret_cast< quint8*>(_v)); break;
        case 305: _t->setData_91(*reinterpret_cast< quint8*>(_v)); break;
        case 306: _t->setData_92(*reinterpret_cast< quint8*>(_v)); break;
        case 307: _t->setData_93(*reinterpret_cast< quint8*>(_v)); break;
        case 308: _t->setData_94(*reinterpret_cast< quint8*>(_v)); break;
        case 309: _t->setData_95(*reinterpret_cast< quint8*>(_v)); break;
        case 310: _t->setData_96(*reinterpret_cast< quint8*>(_v)); break;
        case 311: _t->setData_97(*reinterpret_cast< quint8*>(_v)); break;
        case 312: _t->setData_98(*reinterpret_cast< quint8*>(_v)); break;
        case 313: _t->setData_99(*reinterpret_cast< quint8*>(_v)); break;
        case 314: _t->setData_100(*reinterpret_cast< quint8*>(_v)); break;
        case 315: _t->setData_101(*reinterpret_cast< quint8*>(_v)); break;
        case 316: _t->setData_102(*reinterpret_cast< quint8*>(_v)); break;
        case 317: _t->setData_103(*reinterpret_cast< quint8*>(_v)); break;
        case 318: _t->setData_104(*reinterpret_cast< quint8*>(_v)); break;
        case 319: _t->setData_105(*reinterpret_cast< quint8*>(_v)); break;
        case 320: _t->setData_106(*reinterpret_cast< quint8*>(_v)); break;
        case 321: _t->setData_107(*reinterpret_cast< quint8*>(_v)); break;
        case 322: _t->setData_108(*reinterpret_cast< quint8*>(_v)); break;
        case 323: _t->setData_109(*reinterpret_cast< quint8*>(_v)); break;
        case 324: _t->setData_110(*reinterpret_cast< quint8*>(_v)); break;
        case 325: _t->setData_111(*reinterpret_cast< quint8*>(_v)); break;
        case 326: _t->setData_112(*reinterpret_cast< quint8*>(_v)); break;
        case 327: _t->setData_113(*reinterpret_cast< quint8*>(_v)); break;
        case 328: _t->setData_114(*reinterpret_cast< quint8*>(_v)); break;
        case 329: _t->setData_115(*reinterpret_cast< quint8*>(_v)); break;
        case 330: _t->setData_116(*reinterpret_cast< quint8*>(_v)); break;
        case 331: _t->setData_117(*reinterpret_cast< quint8*>(_v)); break;
        case 332: _t->setData_118(*reinterpret_cast< quint8*>(_v)); break;
        case 333: _t->setData_119(*reinterpret_cast< quint8*>(_v)); break;
        case 334: _t->setData_120(*reinterpret_cast< quint8*>(_v)); break;
        case 335: _t->setData_121(*reinterpret_cast< quint8*>(_v)); break;
        case 336: _t->setData_122(*reinterpret_cast< quint8*>(_v)); break;
        case 337: _t->setData_123(*reinterpret_cast< quint8*>(_v)); break;
        case 338: _t->setData_124(*reinterpret_cast< quint8*>(_v)); break;
        case 339: _t->setData_125(*reinterpret_cast< quint8*>(_v)); break;
        case 340: _t->setData_126(*reinterpret_cast< quint8*>(_v)); break;
        case 341: _t->setData_127(*reinterpret_cast< quint8*>(_v)); break;
        case 342: _t->setData_128(*reinterpret_cast< quint8*>(_v)); break;
        case 343: _t->setData_129(*reinterpret_cast< quint8*>(_v)); break;
        case 344: _t->setData_130(*reinterpret_cast< quint8*>(_v)); break;
        case 345: _t->setData_131(*reinterpret_cast< quint8*>(_v)); break;
        case 346: _t->setData_132(*reinterpret_cast< quint8*>(_v)); break;
        case 347: _t->setData_133(*reinterpret_cast< quint8*>(_v)); break;
        case 348: _t->setData_134(*reinterpret_cast< quint8*>(_v)); break;
        case 349: _t->setData_135(*reinterpret_cast< quint8*>(_v)); break;
        case 350: _t->setData_136(*reinterpret_cast< quint8*>(_v)); break;
        case 351: _t->setData_137(*reinterpret_cast< quint8*>(_v)); break;
        case 352: _t->setData_138(*reinterpret_cast< quint8*>(_v)); break;
        case 353: _t->setData_139(*reinterpret_cast< quint8*>(_v)); break;
        case 354: _t->setData_140(*reinterpret_cast< quint8*>(_v)); break;
        case 355: _t->setData_141(*reinterpret_cast< quint8*>(_v)); break;
        case 356: _t->setData_142(*reinterpret_cast< quint8*>(_v)); break;
        case 357: _t->setData_143(*reinterpret_cast< quint8*>(_v)); break;
        case 358: _t->setData_144(*reinterpret_cast< quint8*>(_v)); break;
        case 359: _t->setData_145(*reinterpret_cast< quint8*>(_v)); break;
        case 360: _t->setData_146(*reinterpret_cast< quint8*>(_v)); break;
        case 361: _t->setData_147(*reinterpret_cast< quint8*>(_v)); break;
        case 362: _t->setData_148(*reinterpret_cast< quint8*>(_v)); break;
        case 363: _t->setData_149(*reinterpret_cast< quint8*>(_v)); break;
        case 364: _t->setData_150(*reinterpret_cast< quint8*>(_v)); break;
        case 365: _t->setData_151(*reinterpret_cast< quint8*>(_v)); break;
        case 366: _t->setData_152(*reinterpret_cast< quint8*>(_v)); break;
        case 367: _t->setData_153(*reinterpret_cast< quint8*>(_v)); break;
        case 368: _t->setData_154(*reinterpret_cast< quint8*>(_v)); break;
        case 369: _t->setData_155(*reinterpret_cast< quint8*>(_v)); break;
        case 370: _t->setData_156(*reinterpret_cast< quint8*>(_v)); break;
        case 371: _t->setData_157(*reinterpret_cast< quint8*>(_v)); break;
        case 372: _t->setData_158(*reinterpret_cast< quint8*>(_v)); break;
        case 373: _t->setData_159(*reinterpret_cast< quint8*>(_v)); break;
        case 374: _t->setData_160(*reinterpret_cast< quint8*>(_v)); break;
        case 375: _t->setData_161(*reinterpret_cast< quint8*>(_v)); break;
        case 376: _t->setData_162(*reinterpret_cast< quint8*>(_v)); break;
        case 377: _t->setData_163(*reinterpret_cast< quint8*>(_v)); break;
        case 378: _t->setData_164(*reinterpret_cast< quint8*>(_v)); break;
        case 379: _t->setData_165(*reinterpret_cast< quint8*>(_v)); break;
        case 380: _t->setData_166(*reinterpret_cast< quint8*>(_v)); break;
        case 381: _t->setData_167(*reinterpret_cast< quint8*>(_v)); break;
        case 382: _t->setData_168(*reinterpret_cast< quint8*>(_v)); break;
        case 383: _t->setData_169(*reinterpret_cast< quint8*>(_v)); break;
        case 384: _t->setData_170(*reinterpret_cast< quint8*>(_v)); break;
        case 385: _t->setData_171(*reinterpret_cast< quint8*>(_v)); break;
        case 386: _t->setData_172(*reinterpret_cast< quint8*>(_v)); break;
        case 387: _t->setData_173(*reinterpret_cast< quint8*>(_v)); break;
        case 388: _t->setData_174(*reinterpret_cast< quint8*>(_v)); break;
        case 389: _t->setData_175(*reinterpret_cast< quint8*>(_v)); break;
        case 390: _t->setData_176(*reinterpret_cast< quint8*>(_v)); break;
        case 391: _t->setData_177(*reinterpret_cast< quint8*>(_v)); break;
        case 392: _t->setData_178(*reinterpret_cast< quint8*>(_v)); break;
        case 393: _t->setData_179(*reinterpret_cast< quint8*>(_v)); break;
        case 394: _t->setData_180(*reinterpret_cast< quint8*>(_v)); break;
        case 395: _t->setData_181(*reinterpret_cast< quint8*>(_v)); break;
        case 396: _t->setData_182(*reinterpret_cast< quint8*>(_v)); break;
        case 397: _t->setData_183(*reinterpret_cast< quint8*>(_v)); break;
        case 398: _t->setData_184(*reinterpret_cast< quint8*>(_v)); break;
        case 399: _t->setData_185(*reinterpret_cast< quint8*>(_v)); break;
        case 400: _t->setData_186(*reinterpret_cast< quint8*>(_v)); break;
        case 401: _t->setData_187(*reinterpret_cast< quint8*>(_v)); break;
        case 402: _t->setData_188(*reinterpret_cast< quint8*>(_v)); break;
        case 403: _t->setData_189(*reinterpret_cast< quint8*>(_v)); break;
        case 404: _t->setData_190(*reinterpret_cast< quint8*>(_v)); break;
        case 405: _t->setData_191(*reinterpret_cast< quint8*>(_v)); break;
        case 406: _t->setData_192(*reinterpret_cast< quint8*>(_v)); break;
        case 407: _t->setData_193(*reinterpret_cast< quint8*>(_v)); break;
        case 408: _t->setData_194(*reinterpret_cast< quint8*>(_v)); break;
        case 409: _t->setData_195(*reinterpret_cast< quint8*>(_v)); break;
        case 410: _t->setData_196(*reinterpret_cast< quint8*>(_v)); break;
        case 411: _t->setData_197(*reinterpret_cast< quint8*>(_v)); break;
        case 412: _t->setData_198(*reinterpret_cast< quint8*>(_v)); break;
        case 413: _t->setData_199(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_DebugLogEntry[] = {
        &DebugLogEntry_Type::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject DebugLogEntry::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_DebugLogEntry.data,
    qt_meta_data_DebugLogEntry,
    qt_static_metacall,
    qt_meta_extradata_DebugLogEntry,
    nullptr
} };


const QMetaObject *DebugLogEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugLogEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugLogEntry.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int DebugLogEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1036)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1036;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1036)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1036;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 414;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 414;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 414;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 414;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 414;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 414;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DebugLogEntry::flightTimeChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DebugLogEntry::FlightTimeChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DebugLogEntry::objectIDChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DebugLogEntry::ObjectIDChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DebugLogEntry::flightChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DebugLogEntry::FlightChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DebugLogEntry::entryChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DebugLogEntry::EntryChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DebugLogEntry::instanceIDChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DebugLogEntry::InstanceIDChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DebugLogEntry::sizeChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DebugLogEntry::SizeChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DebugLogEntry::typeChanged(const DebugLogEntry_Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DebugLogEntry::TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DebugLogEntry::dataChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DebugLogEntry::DataChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DebugLogEntry::data0Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DebugLogEntry::Data_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DebugLogEntry::data1Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void DebugLogEntry::Data_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void DebugLogEntry::data2Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void DebugLogEntry::Data_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void DebugLogEntry::data3Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void DebugLogEntry::Data_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void DebugLogEntry::data4Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void DebugLogEntry::Data_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void DebugLogEntry::data5Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void DebugLogEntry::Data_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void DebugLogEntry::data6Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void DebugLogEntry::Data_6Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void DebugLogEntry::data7Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void DebugLogEntry::Data_7Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void DebugLogEntry::data8Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void DebugLogEntry::Data_8Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void DebugLogEntry::data9Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void DebugLogEntry::Data_9Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void DebugLogEntry::data10Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void DebugLogEntry::Data_10Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void DebugLogEntry::data11Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void DebugLogEntry::Data_11Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void DebugLogEntry::data12Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void DebugLogEntry::Data_12Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void DebugLogEntry::data13Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void DebugLogEntry::Data_13Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void DebugLogEntry::data14Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void DebugLogEntry::Data_14Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void DebugLogEntry::data15Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void DebugLogEntry::Data_15Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void DebugLogEntry::data16Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void DebugLogEntry::Data_16Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void DebugLogEntry::data17Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void DebugLogEntry::Data_17Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void DebugLogEntry::data18Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void DebugLogEntry::Data_18Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void DebugLogEntry::data19Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void DebugLogEntry::Data_19Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void DebugLogEntry::data20Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void DebugLogEntry::Data_20Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void DebugLogEntry::data21Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void DebugLogEntry::Data_21Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void DebugLogEntry::data22Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void DebugLogEntry::Data_22Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void DebugLogEntry::data23Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void DebugLogEntry::Data_23Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void DebugLogEntry::data24Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void DebugLogEntry::Data_24Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void DebugLogEntry::data25Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void DebugLogEntry::Data_25Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void DebugLogEntry::data26Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void DebugLogEntry::Data_26Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void DebugLogEntry::data27Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void DebugLogEntry::Data_27Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void DebugLogEntry::data28Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void DebugLogEntry::Data_28Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void DebugLogEntry::data29Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void DebugLogEntry::Data_29Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void DebugLogEntry::data30Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void DebugLogEntry::Data_30Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void DebugLogEntry::data31Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void DebugLogEntry::Data_31Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void DebugLogEntry::data32Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void DebugLogEntry::Data_32Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void DebugLogEntry::data33Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void DebugLogEntry::Data_33Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void DebugLogEntry::data34Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void DebugLogEntry::Data_34Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void DebugLogEntry::data35Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void DebugLogEntry::Data_35Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void DebugLogEntry::data36Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void DebugLogEntry::Data_36Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void DebugLogEntry::data37Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void DebugLogEntry::Data_37Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void DebugLogEntry::data38Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void DebugLogEntry::Data_38Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void DebugLogEntry::data39Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void DebugLogEntry::Data_39Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void DebugLogEntry::data40Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void DebugLogEntry::Data_40Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void DebugLogEntry::data41Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void DebugLogEntry::Data_41Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void DebugLogEntry::data42Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void DebugLogEntry::Data_42Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void DebugLogEntry::data43Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void DebugLogEntry::Data_43Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void DebugLogEntry::data44Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void DebugLogEntry::Data_44Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void DebugLogEntry::data45Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void DebugLogEntry::Data_45Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void DebugLogEntry::data46Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void DebugLogEntry::Data_46Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void DebugLogEntry::data47Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void DebugLogEntry::Data_47Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void DebugLogEntry::data48Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void DebugLogEntry::Data_48Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void DebugLogEntry::data49Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}

// SIGNAL 115
void DebugLogEntry::Data_49Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 115, _a);
}

// SIGNAL 116
void DebugLogEntry::data50Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 116, _a);
}

// SIGNAL 117
void DebugLogEntry::Data_50Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 117, _a);
}

// SIGNAL 118
void DebugLogEntry::data51Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 118, _a);
}

// SIGNAL 119
void DebugLogEntry::Data_51Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 119, _a);
}

// SIGNAL 120
void DebugLogEntry::data52Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 120, _a);
}

// SIGNAL 121
void DebugLogEntry::Data_52Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 121, _a);
}

// SIGNAL 122
void DebugLogEntry::data53Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 122, _a);
}

// SIGNAL 123
void DebugLogEntry::Data_53Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 123, _a);
}

// SIGNAL 124
void DebugLogEntry::data54Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 124, _a);
}

// SIGNAL 125
void DebugLogEntry::Data_54Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 125, _a);
}

// SIGNAL 126
void DebugLogEntry::data55Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 126, _a);
}

// SIGNAL 127
void DebugLogEntry::Data_55Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 127, _a);
}

// SIGNAL 128
void DebugLogEntry::data56Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 128, _a);
}

// SIGNAL 129
void DebugLogEntry::Data_56Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 129, _a);
}

// SIGNAL 130
void DebugLogEntry::data57Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 130, _a);
}

// SIGNAL 131
void DebugLogEntry::Data_57Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 131, _a);
}

// SIGNAL 132
void DebugLogEntry::data58Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 132, _a);
}

// SIGNAL 133
void DebugLogEntry::Data_58Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 133, _a);
}

// SIGNAL 134
void DebugLogEntry::data59Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 134, _a);
}

// SIGNAL 135
void DebugLogEntry::Data_59Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 135, _a);
}

// SIGNAL 136
void DebugLogEntry::data60Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 136, _a);
}

// SIGNAL 137
void DebugLogEntry::Data_60Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 137, _a);
}

// SIGNAL 138
void DebugLogEntry::data61Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 138, _a);
}

// SIGNAL 139
void DebugLogEntry::Data_61Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 139, _a);
}

// SIGNAL 140
void DebugLogEntry::data62Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 140, _a);
}

// SIGNAL 141
void DebugLogEntry::Data_62Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 141, _a);
}

// SIGNAL 142
void DebugLogEntry::data63Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 142, _a);
}

// SIGNAL 143
void DebugLogEntry::Data_63Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 143, _a);
}

// SIGNAL 144
void DebugLogEntry::data64Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 144, _a);
}

// SIGNAL 145
void DebugLogEntry::Data_64Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 145, _a);
}

// SIGNAL 146
void DebugLogEntry::data65Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 146, _a);
}

// SIGNAL 147
void DebugLogEntry::Data_65Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 147, _a);
}

// SIGNAL 148
void DebugLogEntry::data66Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 148, _a);
}

// SIGNAL 149
void DebugLogEntry::Data_66Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 149, _a);
}

// SIGNAL 150
void DebugLogEntry::data67Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 150, _a);
}

// SIGNAL 151
void DebugLogEntry::Data_67Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 151, _a);
}

// SIGNAL 152
void DebugLogEntry::data68Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 152, _a);
}

// SIGNAL 153
void DebugLogEntry::Data_68Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 153, _a);
}

// SIGNAL 154
void DebugLogEntry::data69Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 154, _a);
}

// SIGNAL 155
void DebugLogEntry::Data_69Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 155, _a);
}

// SIGNAL 156
void DebugLogEntry::data70Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 156, _a);
}

// SIGNAL 157
void DebugLogEntry::Data_70Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 157, _a);
}

// SIGNAL 158
void DebugLogEntry::data71Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 158, _a);
}

// SIGNAL 159
void DebugLogEntry::Data_71Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 159, _a);
}

// SIGNAL 160
void DebugLogEntry::data72Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 160, _a);
}

// SIGNAL 161
void DebugLogEntry::Data_72Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 161, _a);
}

// SIGNAL 162
void DebugLogEntry::data73Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 162, _a);
}

// SIGNAL 163
void DebugLogEntry::Data_73Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 163, _a);
}

// SIGNAL 164
void DebugLogEntry::data74Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 164, _a);
}

// SIGNAL 165
void DebugLogEntry::Data_74Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 165, _a);
}

// SIGNAL 166
void DebugLogEntry::data75Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 166, _a);
}

// SIGNAL 167
void DebugLogEntry::Data_75Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 167, _a);
}

// SIGNAL 168
void DebugLogEntry::data76Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 168, _a);
}

// SIGNAL 169
void DebugLogEntry::Data_76Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 169, _a);
}

// SIGNAL 170
void DebugLogEntry::data77Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 170, _a);
}

// SIGNAL 171
void DebugLogEntry::Data_77Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 171, _a);
}

// SIGNAL 172
void DebugLogEntry::data78Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 172, _a);
}

// SIGNAL 173
void DebugLogEntry::Data_78Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 173, _a);
}

// SIGNAL 174
void DebugLogEntry::data79Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 174, _a);
}

// SIGNAL 175
void DebugLogEntry::Data_79Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 175, _a);
}

// SIGNAL 176
void DebugLogEntry::data80Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 176, _a);
}

// SIGNAL 177
void DebugLogEntry::Data_80Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 177, _a);
}

// SIGNAL 178
void DebugLogEntry::data81Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 178, _a);
}

// SIGNAL 179
void DebugLogEntry::Data_81Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 179, _a);
}

// SIGNAL 180
void DebugLogEntry::data82Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 180, _a);
}

// SIGNAL 181
void DebugLogEntry::Data_82Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 181, _a);
}

// SIGNAL 182
void DebugLogEntry::data83Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 182, _a);
}

// SIGNAL 183
void DebugLogEntry::Data_83Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 183, _a);
}

// SIGNAL 184
void DebugLogEntry::data84Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 184, _a);
}

// SIGNAL 185
void DebugLogEntry::Data_84Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 185, _a);
}

// SIGNAL 186
void DebugLogEntry::data85Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 186, _a);
}

// SIGNAL 187
void DebugLogEntry::Data_85Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 187, _a);
}

// SIGNAL 188
void DebugLogEntry::data86Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 188, _a);
}

// SIGNAL 189
void DebugLogEntry::Data_86Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 189, _a);
}

// SIGNAL 190
void DebugLogEntry::data87Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 190, _a);
}

// SIGNAL 191
void DebugLogEntry::Data_87Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 191, _a);
}

// SIGNAL 192
void DebugLogEntry::data88Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 192, _a);
}

// SIGNAL 193
void DebugLogEntry::Data_88Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 193, _a);
}

// SIGNAL 194
void DebugLogEntry::data89Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 194, _a);
}

// SIGNAL 195
void DebugLogEntry::Data_89Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 195, _a);
}

// SIGNAL 196
void DebugLogEntry::data90Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 196, _a);
}

// SIGNAL 197
void DebugLogEntry::Data_90Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 197, _a);
}

// SIGNAL 198
void DebugLogEntry::data91Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 198, _a);
}

// SIGNAL 199
void DebugLogEntry::Data_91Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 199, _a);
}

// SIGNAL 200
void DebugLogEntry::data92Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 200, _a);
}

// SIGNAL 201
void DebugLogEntry::Data_92Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 201, _a);
}

// SIGNAL 202
void DebugLogEntry::data93Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 202, _a);
}

// SIGNAL 203
void DebugLogEntry::Data_93Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 203, _a);
}

// SIGNAL 204
void DebugLogEntry::data94Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 204, _a);
}

// SIGNAL 205
void DebugLogEntry::Data_94Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 205, _a);
}

// SIGNAL 206
void DebugLogEntry::data95Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 206, _a);
}

// SIGNAL 207
void DebugLogEntry::Data_95Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 207, _a);
}

// SIGNAL 208
void DebugLogEntry::data96Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 208, _a);
}

// SIGNAL 209
void DebugLogEntry::Data_96Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 209, _a);
}

// SIGNAL 210
void DebugLogEntry::data97Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 210, _a);
}

// SIGNAL 211
void DebugLogEntry::Data_97Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 211, _a);
}

// SIGNAL 212
void DebugLogEntry::data98Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 212, _a);
}

// SIGNAL 213
void DebugLogEntry::Data_98Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 213, _a);
}

// SIGNAL 214
void DebugLogEntry::data99Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 214, _a);
}

// SIGNAL 215
void DebugLogEntry::Data_99Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 215, _a);
}

// SIGNAL 216
void DebugLogEntry::data100Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 216, _a);
}

// SIGNAL 217
void DebugLogEntry::Data_100Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 217, _a);
}

// SIGNAL 218
void DebugLogEntry::data101Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 218, _a);
}

// SIGNAL 219
void DebugLogEntry::Data_101Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 219, _a);
}

// SIGNAL 220
void DebugLogEntry::data102Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 220, _a);
}

// SIGNAL 221
void DebugLogEntry::Data_102Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 221, _a);
}

// SIGNAL 222
void DebugLogEntry::data103Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 222, _a);
}

// SIGNAL 223
void DebugLogEntry::Data_103Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 223, _a);
}

// SIGNAL 224
void DebugLogEntry::data104Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 224, _a);
}

// SIGNAL 225
void DebugLogEntry::Data_104Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 225, _a);
}

// SIGNAL 226
void DebugLogEntry::data105Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 226, _a);
}

// SIGNAL 227
void DebugLogEntry::Data_105Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 227, _a);
}

// SIGNAL 228
void DebugLogEntry::data106Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 228, _a);
}

// SIGNAL 229
void DebugLogEntry::Data_106Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 229, _a);
}

// SIGNAL 230
void DebugLogEntry::data107Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 230, _a);
}

// SIGNAL 231
void DebugLogEntry::Data_107Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 231, _a);
}

// SIGNAL 232
void DebugLogEntry::data108Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 232, _a);
}

// SIGNAL 233
void DebugLogEntry::Data_108Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 233, _a);
}

// SIGNAL 234
void DebugLogEntry::data109Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 234, _a);
}

// SIGNAL 235
void DebugLogEntry::Data_109Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 235, _a);
}

// SIGNAL 236
void DebugLogEntry::data110Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 236, _a);
}

// SIGNAL 237
void DebugLogEntry::Data_110Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 237, _a);
}

// SIGNAL 238
void DebugLogEntry::data111Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 238, _a);
}

// SIGNAL 239
void DebugLogEntry::Data_111Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 239, _a);
}

// SIGNAL 240
void DebugLogEntry::data112Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 240, _a);
}

// SIGNAL 241
void DebugLogEntry::Data_112Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 241, _a);
}

// SIGNAL 242
void DebugLogEntry::data113Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 242, _a);
}

// SIGNAL 243
void DebugLogEntry::Data_113Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 243, _a);
}

// SIGNAL 244
void DebugLogEntry::data114Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 244, _a);
}

// SIGNAL 245
void DebugLogEntry::Data_114Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 245, _a);
}

// SIGNAL 246
void DebugLogEntry::data115Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 246, _a);
}

// SIGNAL 247
void DebugLogEntry::Data_115Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 247, _a);
}

// SIGNAL 248
void DebugLogEntry::data116Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 248, _a);
}

// SIGNAL 249
void DebugLogEntry::Data_116Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 249, _a);
}

// SIGNAL 250
void DebugLogEntry::data117Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 250, _a);
}

// SIGNAL 251
void DebugLogEntry::Data_117Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 251, _a);
}

// SIGNAL 252
void DebugLogEntry::data118Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 252, _a);
}

// SIGNAL 253
void DebugLogEntry::Data_118Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 253, _a);
}

// SIGNAL 254
void DebugLogEntry::data119Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 254, _a);
}

// SIGNAL 255
void DebugLogEntry::Data_119Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 255, _a);
}

// SIGNAL 256
void DebugLogEntry::data120Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 256, _a);
}

// SIGNAL 257
void DebugLogEntry::Data_120Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 257, _a);
}

// SIGNAL 258
void DebugLogEntry::data121Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 258, _a);
}

// SIGNAL 259
void DebugLogEntry::Data_121Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 259, _a);
}

// SIGNAL 260
void DebugLogEntry::data122Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 260, _a);
}

// SIGNAL 261
void DebugLogEntry::Data_122Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 261, _a);
}

// SIGNAL 262
void DebugLogEntry::data123Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 262, _a);
}

// SIGNAL 263
void DebugLogEntry::Data_123Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 263, _a);
}

// SIGNAL 264
void DebugLogEntry::data124Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 264, _a);
}

// SIGNAL 265
void DebugLogEntry::Data_124Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 265, _a);
}

// SIGNAL 266
void DebugLogEntry::data125Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 266, _a);
}

// SIGNAL 267
void DebugLogEntry::Data_125Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 267, _a);
}

// SIGNAL 268
void DebugLogEntry::data126Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 268, _a);
}

// SIGNAL 269
void DebugLogEntry::Data_126Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 269, _a);
}

// SIGNAL 270
void DebugLogEntry::data127Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 270, _a);
}

// SIGNAL 271
void DebugLogEntry::Data_127Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 271, _a);
}

// SIGNAL 272
void DebugLogEntry::data128Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 272, _a);
}

// SIGNAL 273
void DebugLogEntry::Data_128Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 273, _a);
}

// SIGNAL 274
void DebugLogEntry::data129Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 274, _a);
}

// SIGNAL 275
void DebugLogEntry::Data_129Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 275, _a);
}

// SIGNAL 276
void DebugLogEntry::data130Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 276, _a);
}

// SIGNAL 277
void DebugLogEntry::Data_130Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 277, _a);
}

// SIGNAL 278
void DebugLogEntry::data131Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 278, _a);
}

// SIGNAL 279
void DebugLogEntry::Data_131Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 279, _a);
}

// SIGNAL 280
void DebugLogEntry::data132Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 280, _a);
}

// SIGNAL 281
void DebugLogEntry::Data_132Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 281, _a);
}

// SIGNAL 282
void DebugLogEntry::data133Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 282, _a);
}

// SIGNAL 283
void DebugLogEntry::Data_133Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 283, _a);
}

// SIGNAL 284
void DebugLogEntry::data134Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 284, _a);
}

// SIGNAL 285
void DebugLogEntry::Data_134Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 285, _a);
}

// SIGNAL 286
void DebugLogEntry::data135Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 286, _a);
}

// SIGNAL 287
void DebugLogEntry::Data_135Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 287, _a);
}

// SIGNAL 288
void DebugLogEntry::data136Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 288, _a);
}

// SIGNAL 289
void DebugLogEntry::Data_136Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 289, _a);
}

// SIGNAL 290
void DebugLogEntry::data137Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 290, _a);
}

// SIGNAL 291
void DebugLogEntry::Data_137Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 291, _a);
}

// SIGNAL 292
void DebugLogEntry::data138Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 292, _a);
}

// SIGNAL 293
void DebugLogEntry::Data_138Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 293, _a);
}

// SIGNAL 294
void DebugLogEntry::data139Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 294, _a);
}

// SIGNAL 295
void DebugLogEntry::Data_139Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 295, _a);
}

// SIGNAL 296
void DebugLogEntry::data140Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 296, _a);
}

// SIGNAL 297
void DebugLogEntry::Data_140Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 297, _a);
}

// SIGNAL 298
void DebugLogEntry::data141Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 298, _a);
}

// SIGNAL 299
void DebugLogEntry::Data_141Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 299, _a);
}

// SIGNAL 300
void DebugLogEntry::data142Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 300, _a);
}

// SIGNAL 301
void DebugLogEntry::Data_142Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 301, _a);
}

// SIGNAL 302
void DebugLogEntry::data143Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 302, _a);
}

// SIGNAL 303
void DebugLogEntry::Data_143Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 303, _a);
}

// SIGNAL 304
void DebugLogEntry::data144Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 304, _a);
}

// SIGNAL 305
void DebugLogEntry::Data_144Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 305, _a);
}

// SIGNAL 306
void DebugLogEntry::data145Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 306, _a);
}

// SIGNAL 307
void DebugLogEntry::Data_145Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 307, _a);
}

// SIGNAL 308
void DebugLogEntry::data146Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 308, _a);
}

// SIGNAL 309
void DebugLogEntry::Data_146Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 309, _a);
}

// SIGNAL 310
void DebugLogEntry::data147Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 310, _a);
}

// SIGNAL 311
void DebugLogEntry::Data_147Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 311, _a);
}

// SIGNAL 312
void DebugLogEntry::data148Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 312, _a);
}

// SIGNAL 313
void DebugLogEntry::Data_148Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 313, _a);
}

// SIGNAL 314
void DebugLogEntry::data149Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 314, _a);
}

// SIGNAL 315
void DebugLogEntry::Data_149Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 315, _a);
}

// SIGNAL 316
void DebugLogEntry::data150Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 316, _a);
}

// SIGNAL 317
void DebugLogEntry::Data_150Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 317, _a);
}

// SIGNAL 318
void DebugLogEntry::data151Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 318, _a);
}

// SIGNAL 319
void DebugLogEntry::Data_151Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 319, _a);
}

// SIGNAL 320
void DebugLogEntry::data152Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 320, _a);
}

// SIGNAL 321
void DebugLogEntry::Data_152Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 321, _a);
}

// SIGNAL 322
void DebugLogEntry::data153Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 322, _a);
}

// SIGNAL 323
void DebugLogEntry::Data_153Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 323, _a);
}

// SIGNAL 324
void DebugLogEntry::data154Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 324, _a);
}

// SIGNAL 325
void DebugLogEntry::Data_154Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 325, _a);
}

// SIGNAL 326
void DebugLogEntry::data155Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 326, _a);
}

// SIGNAL 327
void DebugLogEntry::Data_155Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 327, _a);
}

// SIGNAL 328
void DebugLogEntry::data156Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 328, _a);
}

// SIGNAL 329
void DebugLogEntry::Data_156Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 329, _a);
}

// SIGNAL 330
void DebugLogEntry::data157Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 330, _a);
}

// SIGNAL 331
void DebugLogEntry::Data_157Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 331, _a);
}

// SIGNAL 332
void DebugLogEntry::data158Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 332, _a);
}

// SIGNAL 333
void DebugLogEntry::Data_158Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 333, _a);
}

// SIGNAL 334
void DebugLogEntry::data159Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 334, _a);
}

// SIGNAL 335
void DebugLogEntry::Data_159Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 335, _a);
}

// SIGNAL 336
void DebugLogEntry::data160Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 336, _a);
}

// SIGNAL 337
void DebugLogEntry::Data_160Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 337, _a);
}

// SIGNAL 338
void DebugLogEntry::data161Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 338, _a);
}

// SIGNAL 339
void DebugLogEntry::Data_161Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 339, _a);
}

// SIGNAL 340
void DebugLogEntry::data162Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 340, _a);
}

// SIGNAL 341
void DebugLogEntry::Data_162Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 341, _a);
}

// SIGNAL 342
void DebugLogEntry::data163Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 342, _a);
}

// SIGNAL 343
void DebugLogEntry::Data_163Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 343, _a);
}

// SIGNAL 344
void DebugLogEntry::data164Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 344, _a);
}

// SIGNAL 345
void DebugLogEntry::Data_164Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 345, _a);
}

// SIGNAL 346
void DebugLogEntry::data165Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 346, _a);
}

// SIGNAL 347
void DebugLogEntry::Data_165Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 347, _a);
}

// SIGNAL 348
void DebugLogEntry::data166Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 348, _a);
}

// SIGNAL 349
void DebugLogEntry::Data_166Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 349, _a);
}

// SIGNAL 350
void DebugLogEntry::data167Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 350, _a);
}

// SIGNAL 351
void DebugLogEntry::Data_167Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 351, _a);
}

// SIGNAL 352
void DebugLogEntry::data168Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 352, _a);
}

// SIGNAL 353
void DebugLogEntry::Data_168Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 353, _a);
}

// SIGNAL 354
void DebugLogEntry::data169Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 354, _a);
}

// SIGNAL 355
void DebugLogEntry::Data_169Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 355, _a);
}

// SIGNAL 356
void DebugLogEntry::data170Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 356, _a);
}

// SIGNAL 357
void DebugLogEntry::Data_170Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 357, _a);
}

// SIGNAL 358
void DebugLogEntry::data171Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 358, _a);
}

// SIGNAL 359
void DebugLogEntry::Data_171Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 359, _a);
}

// SIGNAL 360
void DebugLogEntry::data172Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 360, _a);
}

// SIGNAL 361
void DebugLogEntry::Data_172Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 361, _a);
}

// SIGNAL 362
void DebugLogEntry::data173Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 362, _a);
}

// SIGNAL 363
void DebugLogEntry::Data_173Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 363, _a);
}

// SIGNAL 364
void DebugLogEntry::data174Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 364, _a);
}

// SIGNAL 365
void DebugLogEntry::Data_174Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 365, _a);
}

// SIGNAL 366
void DebugLogEntry::data175Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 366, _a);
}

// SIGNAL 367
void DebugLogEntry::Data_175Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 367, _a);
}

// SIGNAL 368
void DebugLogEntry::data176Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 368, _a);
}

// SIGNAL 369
void DebugLogEntry::Data_176Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 369, _a);
}

// SIGNAL 370
void DebugLogEntry::data177Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 370, _a);
}

// SIGNAL 371
void DebugLogEntry::Data_177Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 371, _a);
}

// SIGNAL 372
void DebugLogEntry::data178Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 372, _a);
}

// SIGNAL 373
void DebugLogEntry::Data_178Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 373, _a);
}

// SIGNAL 374
void DebugLogEntry::data179Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 374, _a);
}

// SIGNAL 375
void DebugLogEntry::Data_179Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 375, _a);
}

// SIGNAL 376
void DebugLogEntry::data180Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 376, _a);
}

// SIGNAL 377
void DebugLogEntry::Data_180Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 377, _a);
}

// SIGNAL 378
void DebugLogEntry::data181Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 378, _a);
}

// SIGNAL 379
void DebugLogEntry::Data_181Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 379, _a);
}

// SIGNAL 380
void DebugLogEntry::data182Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 380, _a);
}

// SIGNAL 381
void DebugLogEntry::Data_182Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 381, _a);
}

// SIGNAL 382
void DebugLogEntry::data183Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 382, _a);
}

// SIGNAL 383
void DebugLogEntry::Data_183Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 383, _a);
}

// SIGNAL 384
void DebugLogEntry::data184Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 384, _a);
}

// SIGNAL 385
void DebugLogEntry::Data_184Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 385, _a);
}

// SIGNAL 386
void DebugLogEntry::data185Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 386, _a);
}

// SIGNAL 387
void DebugLogEntry::Data_185Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 387, _a);
}

// SIGNAL 388
void DebugLogEntry::data186Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 388, _a);
}

// SIGNAL 389
void DebugLogEntry::Data_186Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 389, _a);
}

// SIGNAL 390
void DebugLogEntry::data187Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 390, _a);
}

// SIGNAL 391
void DebugLogEntry::Data_187Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 391, _a);
}

// SIGNAL 392
void DebugLogEntry::data188Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 392, _a);
}

// SIGNAL 393
void DebugLogEntry::Data_188Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 393, _a);
}

// SIGNAL 394
void DebugLogEntry::data189Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 394, _a);
}

// SIGNAL 395
void DebugLogEntry::Data_189Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 395, _a);
}

// SIGNAL 396
void DebugLogEntry::data190Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 396, _a);
}

// SIGNAL 397
void DebugLogEntry::Data_190Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 397, _a);
}

// SIGNAL 398
void DebugLogEntry::data191Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 398, _a);
}

// SIGNAL 399
void DebugLogEntry::Data_191Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 399, _a);
}

// SIGNAL 400
void DebugLogEntry::data192Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 400, _a);
}

// SIGNAL 401
void DebugLogEntry::Data_192Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 401, _a);
}

// SIGNAL 402
void DebugLogEntry::data193Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 402, _a);
}

// SIGNAL 403
void DebugLogEntry::Data_193Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 403, _a);
}

// SIGNAL 404
void DebugLogEntry::data194Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 404, _a);
}

// SIGNAL 405
void DebugLogEntry::Data_194Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 405, _a);
}

// SIGNAL 406
void DebugLogEntry::data195Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 406, _a);
}

// SIGNAL 407
void DebugLogEntry::Data_195Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 407, _a);
}

// SIGNAL 408
void DebugLogEntry::data196Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 408, _a);
}

// SIGNAL 409
void DebugLogEntry::Data_196Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 409, _a);
}

// SIGNAL 410
void DebugLogEntry::data197Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 410, _a);
}

// SIGNAL 411
void DebugLogEntry::Data_197Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 411, _a);
}

// SIGNAL 412
void DebugLogEntry::data198Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 412, _a);
}

// SIGNAL 413
void DebugLogEntry::Data_198Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 413, _a);
}

// SIGNAL 414
void DebugLogEntry::data199Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 414, _a);
}

// SIGNAL 415
void DebugLogEntry::Data_199Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 415, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
