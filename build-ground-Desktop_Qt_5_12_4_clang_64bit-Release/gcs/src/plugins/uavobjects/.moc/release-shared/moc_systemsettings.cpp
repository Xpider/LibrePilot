/****************************************************************************
** Meta object code from reading C++ file 'systemsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../systemsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemSettingsConstants_t {
    QByteArrayData data[4];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemSettingsConstants_t qt_meta_stringdata_SystemSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 23), // "SystemSettingsConstants"
QT_MOC_LITERAL(1, 24, 4), // "Enum"
QT_MOC_LITERAL(2, 29, 17), // "AirframeTypeCount"
QT_MOC_LITERAL(3, 47, 18) // "ThrustControlCount"

    },
    "SystemSettingsConstants\0Enum\0"
    "AirframeTypeCount\0ThrustControlCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemSettingsConstants[] = {

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
       2, uint(SystemSettingsConstants::AirframeTypeCount),
       3, uint(SystemSettingsConstants::ThrustControlCount),

       0        // eod
};

void SystemSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemSettingsConstants.data,
    qt_meta_data_SystemSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemSettings_AirframeType_t {
    QByteArrayData data[25];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemSettings_AirframeType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemSettings_AirframeType_t qt_meta_stringdata_SystemSettings_AirframeType = {
    {
QT_MOC_LITERAL(0, 0, 27), // "SystemSettings_AirframeType"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 9), // "FixedWing"
QT_MOC_LITERAL(3, 43, 15), // "FixedWingElevon"
QT_MOC_LITERAL(4, 59, 14), // "FixedWingVtail"
QT_MOC_LITERAL(5, 74, 4), // "VTOL"
QT_MOC_LITERAL(6, 79, 6), // "HeliCP"
QT_MOC_LITERAL(7, 86, 5), // "QuadX"
QT_MOC_LITERAL(8, 92, 5), // "QuadP"
QT_MOC_LITERAL(9, 98, 4), // "Hexa"
QT_MOC_LITERAL(10, 103, 4), // "Octo"
QT_MOC_LITERAL(11, 108, 6), // "Custom"
QT_MOC_LITERAL(12, 115, 5), // "HexaX"
QT_MOC_LITERAL(13, 121, 5), // "HexaH"
QT_MOC_LITERAL(14, 127, 5), // "OctoV"
QT_MOC_LITERAL(15, 133, 9), // "OctoCoaxP"
QT_MOC_LITERAL(16, 143, 9), // "OctoCoaxX"
QT_MOC_LITERAL(17, 153, 5), // "OctoX"
QT_MOC_LITERAL(18, 159, 8), // "HexaCoax"
QT_MOC_LITERAL(19, 168, 3), // "Tri"
QT_MOC_LITERAL(20, 172, 16), // "GroundVehicleCar"
QT_MOC_LITERAL(21, 189, 25), // "GroundVehicleDifferential"
QT_MOC_LITERAL(22, 215, 23), // "GroundVehicleMotorcycle"
QT_MOC_LITERAL(23, 239, 17), // "GroundVehicleBoat"
QT_MOC_LITERAL(24, 257, 29) // "GroundVehicleDifferentialBoat"

    },
    "SystemSettings_AirframeType\0Enum\0"
    "FixedWing\0FixedWingElevon\0FixedWingVtail\0"
    "VTOL\0HeliCP\0QuadX\0QuadP\0Hexa\0Octo\0"
    "Custom\0HexaX\0HexaH\0OctoV\0OctoCoaxP\0"
    "OctoCoaxX\0OctoX\0HexaCoax\0Tri\0"
    "GroundVehicleCar\0GroundVehicleDifferential\0"
    "GroundVehicleMotorcycle\0GroundVehicleBoat\0"
    "GroundVehicleDifferentialBoat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemSettings_AirframeType[] = {

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
       1,    1, 0x0,   23,   19,

 // enum data: key, value
       2, uint(SystemSettings_AirframeType::FixedWing),
       3, uint(SystemSettings_AirframeType::FixedWingElevon),
       4, uint(SystemSettings_AirframeType::FixedWingVtail),
       5, uint(SystemSettings_AirframeType::VTOL),
       6, uint(SystemSettings_AirframeType::HeliCP),
       7, uint(SystemSettings_AirframeType::QuadX),
       8, uint(SystemSettings_AirframeType::QuadP),
       9, uint(SystemSettings_AirframeType::Hexa),
      10, uint(SystemSettings_AirframeType::Octo),
      11, uint(SystemSettings_AirframeType::Custom),
      12, uint(SystemSettings_AirframeType::HexaX),
      13, uint(SystemSettings_AirframeType::HexaH),
      14, uint(SystemSettings_AirframeType::OctoV),
      15, uint(SystemSettings_AirframeType::OctoCoaxP),
      16, uint(SystemSettings_AirframeType::OctoCoaxX),
      17, uint(SystemSettings_AirframeType::OctoX),
      18, uint(SystemSettings_AirframeType::HexaCoax),
      19, uint(SystemSettings_AirframeType::Tri),
      20, uint(SystemSettings_AirframeType::GroundVehicleCar),
      21, uint(SystemSettings_AirframeType::GroundVehicleDifferential),
      22, uint(SystemSettings_AirframeType::GroundVehicleMotorcycle),
      23, uint(SystemSettings_AirframeType::GroundVehicleBoat),
      24, uint(SystemSettings_AirframeType::GroundVehicleDifferentialBoat),

       0        // eod
};

void SystemSettings_AirframeType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemSettings_AirframeType::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemSettings_AirframeType.data,
    qt_meta_data_SystemSettings_AirframeType,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemSettings_AirframeType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemSettings_AirframeType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemSettings_AirframeType.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemSettings_AirframeType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemSettings_ThrustControl_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemSettings_ThrustControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemSettings_ThrustControl_t qt_meta_stringdata_SystemSettings_ThrustControl = {
    {
QT_MOC_LITERAL(0, 0, 28), // "SystemSettings_ThrustControl"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 8), // "Throttle"
QT_MOC_LITERAL(3, 43, 10), // "Collective"
QT_MOC_LITERAL(4, 54, 4) // "None"

    },
    "SystemSettings_ThrustControl\0Enum\0"
    "Throttle\0Collective\0None"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemSettings_ThrustControl[] = {

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
       2, uint(SystemSettings_ThrustControl::Throttle),
       3, uint(SystemSettings_ThrustControl::Collective),
       4, uint(SystemSettings_ThrustControl::None),

       0        // eod
};

void SystemSettings_ThrustControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemSettings_ThrustControl::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemSettings_ThrustControl.data,
    qt_meta_data_SystemSettings_ThrustControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemSettings_ThrustControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemSettings_ThrustControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemSettings_ThrustControl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemSettings_ThrustControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemSettings_t {
    QByteArrayData data[209];
    char stringdata0[3629];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemSettings_t qt_meta_stringdata_SystemSettings = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SystemSettings"
QT_MOC_LITERAL(1, 15, 20), // "guiConfigDataChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "index"
QT_MOC_LITERAL(4, 43, 5), // "value"
QT_MOC_LITERAL(5, 49, 20), // "GUIConfigDataChanged"
QT_MOC_LITERAL(6, 70, 21), // "guiConfigData0Changed"
QT_MOC_LITERAL(7, 92, 22), // "GUIConfigData_0Changed"
QT_MOC_LITERAL(8, 115, 21), // "guiConfigData1Changed"
QT_MOC_LITERAL(9, 137, 22), // "GUIConfigData_1Changed"
QT_MOC_LITERAL(10, 160, 21), // "guiConfigData2Changed"
QT_MOC_LITERAL(11, 182, 22), // "GUIConfigData_2Changed"
QT_MOC_LITERAL(12, 205, 21), // "guiConfigData3Changed"
QT_MOC_LITERAL(13, 227, 22), // "GUIConfigData_3Changed"
QT_MOC_LITERAL(14, 250, 18), // "airSpeedMaxChanged"
QT_MOC_LITERAL(15, 269, 18), // "AirSpeedMaxChanged"
QT_MOC_LITERAL(16, 288, 18), // "airSpeedMinChanged"
QT_MOC_LITERAL(17, 307, 18), // "AirSpeedMinChanged"
QT_MOC_LITERAL(18, 326, 19), // "airframeTypeChanged"
QT_MOC_LITERAL(19, 346, 33), // "SystemSettings_AirframeType::..."
QT_MOC_LITERAL(20, 380, 19), // "AirframeTypeChanged"
QT_MOC_LITERAL(21, 400, 18), // "vehicleNameChanged"
QT_MOC_LITERAL(22, 419, 18), // "VehicleNameChanged"
QT_MOC_LITERAL(23, 438, 19), // "vehicleName0Changed"
QT_MOC_LITERAL(24, 458, 20), // "VehicleName_0Changed"
QT_MOC_LITERAL(25, 479, 19), // "vehicleName1Changed"
QT_MOC_LITERAL(26, 499, 20), // "VehicleName_1Changed"
QT_MOC_LITERAL(27, 520, 19), // "vehicleName2Changed"
QT_MOC_LITERAL(28, 540, 20), // "VehicleName_2Changed"
QT_MOC_LITERAL(29, 561, 19), // "vehicleName3Changed"
QT_MOC_LITERAL(30, 581, 20), // "VehicleName_3Changed"
QT_MOC_LITERAL(31, 602, 19), // "vehicleName4Changed"
QT_MOC_LITERAL(32, 622, 20), // "VehicleName_4Changed"
QT_MOC_LITERAL(33, 643, 19), // "vehicleName5Changed"
QT_MOC_LITERAL(34, 663, 20), // "VehicleName_5Changed"
QT_MOC_LITERAL(35, 684, 19), // "vehicleName6Changed"
QT_MOC_LITERAL(36, 704, 20), // "VehicleName_6Changed"
QT_MOC_LITERAL(37, 725, 19), // "vehicleName7Changed"
QT_MOC_LITERAL(38, 745, 20), // "VehicleName_7Changed"
QT_MOC_LITERAL(39, 766, 19), // "vehicleName8Changed"
QT_MOC_LITERAL(40, 786, 20), // "VehicleName_8Changed"
QT_MOC_LITERAL(41, 807, 19), // "vehicleName9Changed"
QT_MOC_LITERAL(42, 827, 20), // "VehicleName_9Changed"
QT_MOC_LITERAL(43, 848, 20), // "vehicleName10Changed"
QT_MOC_LITERAL(44, 869, 21), // "VehicleName_10Changed"
QT_MOC_LITERAL(45, 891, 20), // "vehicleName11Changed"
QT_MOC_LITERAL(46, 912, 21), // "VehicleName_11Changed"
QT_MOC_LITERAL(47, 934, 20), // "vehicleName12Changed"
QT_MOC_LITERAL(48, 955, 21), // "VehicleName_12Changed"
QT_MOC_LITERAL(49, 977, 20), // "vehicleName13Changed"
QT_MOC_LITERAL(50, 998, 21), // "VehicleName_13Changed"
QT_MOC_LITERAL(51, 1020, 20), // "vehicleName14Changed"
QT_MOC_LITERAL(52, 1041, 21), // "VehicleName_14Changed"
QT_MOC_LITERAL(53, 1063, 20), // "vehicleName15Changed"
QT_MOC_LITERAL(54, 1084, 21), // "VehicleName_15Changed"
QT_MOC_LITERAL(55, 1106, 20), // "vehicleName16Changed"
QT_MOC_LITERAL(56, 1127, 21), // "VehicleName_16Changed"
QT_MOC_LITERAL(57, 1149, 20), // "vehicleName17Changed"
QT_MOC_LITERAL(58, 1170, 21), // "VehicleName_17Changed"
QT_MOC_LITERAL(59, 1192, 20), // "vehicleName18Changed"
QT_MOC_LITERAL(60, 1213, 21), // "VehicleName_18Changed"
QT_MOC_LITERAL(61, 1235, 20), // "vehicleName19Changed"
QT_MOC_LITERAL(62, 1256, 21), // "VehicleName_19Changed"
QT_MOC_LITERAL(63, 1278, 20), // "thrustControlChanged"
QT_MOC_LITERAL(64, 1299, 34), // "SystemSettings_ThrustControl:..."
QT_MOC_LITERAL(65, 1334, 20), // "ThrustControlChanged"
QT_MOC_LITERAL(66, 1355, 16), // "setGUIConfigData"
QT_MOC_LITERAL(67, 1372, 17), // "setGUIConfigData0"
QT_MOC_LITERAL(68, 1390, 18), // "setGUIConfigData_0"
QT_MOC_LITERAL(69, 1409, 17), // "setGUIConfigData1"
QT_MOC_LITERAL(70, 1427, 18), // "setGUIConfigData_1"
QT_MOC_LITERAL(71, 1446, 17), // "setGUIConfigData2"
QT_MOC_LITERAL(72, 1464, 18), // "setGUIConfigData_2"
QT_MOC_LITERAL(73, 1483, 17), // "setGUIConfigData3"
QT_MOC_LITERAL(74, 1501, 18), // "setGUIConfigData_3"
QT_MOC_LITERAL(75, 1520, 14), // "setAirSpeedMax"
QT_MOC_LITERAL(76, 1535, 14), // "setAirSpeedMin"
QT_MOC_LITERAL(77, 1550, 15), // "setAirframeType"
QT_MOC_LITERAL(78, 1566, 14), // "setVehicleName"
QT_MOC_LITERAL(79, 1581, 15), // "setVehicleName0"
QT_MOC_LITERAL(80, 1597, 16), // "setVehicleName_0"
QT_MOC_LITERAL(81, 1614, 15), // "setVehicleName1"
QT_MOC_LITERAL(82, 1630, 16), // "setVehicleName_1"
QT_MOC_LITERAL(83, 1647, 15), // "setVehicleName2"
QT_MOC_LITERAL(84, 1663, 16), // "setVehicleName_2"
QT_MOC_LITERAL(85, 1680, 15), // "setVehicleName3"
QT_MOC_LITERAL(86, 1696, 16), // "setVehicleName_3"
QT_MOC_LITERAL(87, 1713, 15), // "setVehicleName4"
QT_MOC_LITERAL(88, 1729, 16), // "setVehicleName_4"
QT_MOC_LITERAL(89, 1746, 15), // "setVehicleName5"
QT_MOC_LITERAL(90, 1762, 16), // "setVehicleName_5"
QT_MOC_LITERAL(91, 1779, 15), // "setVehicleName6"
QT_MOC_LITERAL(92, 1795, 16), // "setVehicleName_6"
QT_MOC_LITERAL(93, 1812, 15), // "setVehicleName7"
QT_MOC_LITERAL(94, 1828, 16), // "setVehicleName_7"
QT_MOC_LITERAL(95, 1845, 15), // "setVehicleName8"
QT_MOC_LITERAL(96, 1861, 16), // "setVehicleName_8"
QT_MOC_LITERAL(97, 1878, 15), // "setVehicleName9"
QT_MOC_LITERAL(98, 1894, 16), // "setVehicleName_9"
QT_MOC_LITERAL(99, 1911, 16), // "setVehicleName10"
QT_MOC_LITERAL(100, 1928, 17), // "setVehicleName_10"
QT_MOC_LITERAL(101, 1946, 16), // "setVehicleName11"
QT_MOC_LITERAL(102, 1963, 17), // "setVehicleName_11"
QT_MOC_LITERAL(103, 1981, 16), // "setVehicleName12"
QT_MOC_LITERAL(104, 1998, 17), // "setVehicleName_12"
QT_MOC_LITERAL(105, 2016, 16), // "setVehicleName13"
QT_MOC_LITERAL(106, 2033, 17), // "setVehicleName_13"
QT_MOC_LITERAL(107, 2051, 16), // "setVehicleName14"
QT_MOC_LITERAL(108, 2068, 17), // "setVehicleName_14"
QT_MOC_LITERAL(109, 2086, 16), // "setVehicleName15"
QT_MOC_LITERAL(110, 2103, 17), // "setVehicleName_15"
QT_MOC_LITERAL(111, 2121, 16), // "setVehicleName16"
QT_MOC_LITERAL(112, 2138, 17), // "setVehicleName_16"
QT_MOC_LITERAL(113, 2156, 16), // "setVehicleName17"
QT_MOC_LITERAL(114, 2173, 17), // "setVehicleName_17"
QT_MOC_LITERAL(115, 2191, 16), // "setVehicleName18"
QT_MOC_LITERAL(116, 2208, 17), // "setVehicleName_18"
QT_MOC_LITERAL(117, 2226, 16), // "setVehicleName19"
QT_MOC_LITERAL(118, 2243, 17), // "setVehicleName_19"
QT_MOC_LITERAL(119, 2261, 16), // "setThrustControl"
QT_MOC_LITERAL(120, 2278, 17), // "emitNotifications"
QT_MOC_LITERAL(121, 2296, 13), // "guiConfigData"
QT_MOC_LITERAL(122, 2310, 16), // "getGUIConfigData"
QT_MOC_LITERAL(123, 2327, 18), // "getGUIConfigData_0"
QT_MOC_LITERAL(124, 2346, 18), // "getGUIConfigData_1"
QT_MOC_LITERAL(125, 2365, 18), // "getGUIConfigData_2"
QT_MOC_LITERAL(126, 2384, 18), // "getGUIConfigData_3"
QT_MOC_LITERAL(127, 2403, 14), // "getAirSpeedMax"
QT_MOC_LITERAL(128, 2418, 14), // "getAirSpeedMin"
QT_MOC_LITERAL(129, 2433, 15), // "getAirframeType"
QT_MOC_LITERAL(130, 2449, 11), // "vehicleName"
QT_MOC_LITERAL(131, 2461, 14), // "getVehicleName"
QT_MOC_LITERAL(132, 2476, 16), // "getVehicleName_0"
QT_MOC_LITERAL(133, 2493, 16), // "getVehicleName_1"
QT_MOC_LITERAL(134, 2510, 16), // "getVehicleName_2"
QT_MOC_LITERAL(135, 2527, 16), // "getVehicleName_3"
QT_MOC_LITERAL(136, 2544, 16), // "getVehicleName_4"
QT_MOC_LITERAL(137, 2561, 16), // "getVehicleName_5"
QT_MOC_LITERAL(138, 2578, 16), // "getVehicleName_6"
QT_MOC_LITERAL(139, 2595, 16), // "getVehicleName_7"
QT_MOC_LITERAL(140, 2612, 16), // "getVehicleName_8"
QT_MOC_LITERAL(141, 2629, 16), // "getVehicleName_9"
QT_MOC_LITERAL(142, 2646, 17), // "getVehicleName_10"
QT_MOC_LITERAL(143, 2664, 17), // "getVehicleName_11"
QT_MOC_LITERAL(144, 2682, 17), // "getVehicleName_12"
QT_MOC_LITERAL(145, 2700, 17), // "getVehicleName_13"
QT_MOC_LITERAL(146, 2718, 17), // "getVehicleName_14"
QT_MOC_LITERAL(147, 2736, 17), // "getVehicleName_15"
QT_MOC_LITERAL(148, 2754, 17), // "getVehicleName_16"
QT_MOC_LITERAL(149, 2772, 17), // "getVehicleName_17"
QT_MOC_LITERAL(150, 2790, 17), // "getVehicleName_18"
QT_MOC_LITERAL(151, 2808, 17), // "getVehicleName_19"
QT_MOC_LITERAL(152, 2826, 16), // "getThrustControl"
QT_MOC_LITERAL(153, 2843, 14), // "guiConfigData0"
QT_MOC_LITERAL(154, 2858, 14), // "guiConfigData1"
QT_MOC_LITERAL(155, 2873, 14), // "guiConfigData2"
QT_MOC_LITERAL(156, 2888, 14), // "guiConfigData3"
QT_MOC_LITERAL(157, 2903, 11), // "airSpeedMax"
QT_MOC_LITERAL(158, 2915, 11), // "airSpeedMin"
QT_MOC_LITERAL(159, 2927, 12), // "airframeType"
QT_MOC_LITERAL(160, 2940, 12), // "vehicleName0"
QT_MOC_LITERAL(161, 2953, 12), // "vehicleName1"
QT_MOC_LITERAL(162, 2966, 12), // "vehicleName2"
QT_MOC_LITERAL(163, 2979, 12), // "vehicleName3"
QT_MOC_LITERAL(164, 2992, 12), // "vehicleName4"
QT_MOC_LITERAL(165, 3005, 12), // "vehicleName5"
QT_MOC_LITERAL(166, 3018, 12), // "vehicleName6"
QT_MOC_LITERAL(167, 3031, 12), // "vehicleName7"
QT_MOC_LITERAL(168, 3044, 12), // "vehicleName8"
QT_MOC_LITERAL(169, 3057, 12), // "vehicleName9"
QT_MOC_LITERAL(170, 3070, 13), // "vehicleName10"
QT_MOC_LITERAL(171, 3084, 13), // "vehicleName11"
QT_MOC_LITERAL(172, 3098, 13), // "vehicleName12"
QT_MOC_LITERAL(173, 3112, 13), // "vehicleName13"
QT_MOC_LITERAL(174, 3126, 13), // "vehicleName14"
QT_MOC_LITERAL(175, 3140, 13), // "vehicleName15"
QT_MOC_LITERAL(176, 3154, 13), // "vehicleName16"
QT_MOC_LITERAL(177, 3168, 13), // "vehicleName17"
QT_MOC_LITERAL(178, 3182, 13), // "vehicleName18"
QT_MOC_LITERAL(179, 3196, 13), // "vehicleName19"
QT_MOC_LITERAL(180, 3210, 13), // "thrustControl"
QT_MOC_LITERAL(181, 3224, 15), // "GUIConfigData_0"
QT_MOC_LITERAL(182, 3240, 15), // "GUIConfigData_1"
QT_MOC_LITERAL(183, 3256, 15), // "GUIConfigData_2"
QT_MOC_LITERAL(184, 3272, 15), // "GUIConfigData_3"
QT_MOC_LITERAL(185, 3288, 11), // "AirSpeedMax"
QT_MOC_LITERAL(186, 3300, 11), // "AirSpeedMin"
QT_MOC_LITERAL(187, 3312, 12), // "AirframeType"
QT_MOC_LITERAL(188, 3325, 13), // "VehicleName_0"
QT_MOC_LITERAL(189, 3339, 13), // "VehicleName_1"
QT_MOC_LITERAL(190, 3353, 13), // "VehicleName_2"
QT_MOC_LITERAL(191, 3367, 13), // "VehicleName_3"
QT_MOC_LITERAL(192, 3381, 13), // "VehicleName_4"
QT_MOC_LITERAL(193, 3395, 13), // "VehicleName_5"
QT_MOC_LITERAL(194, 3409, 13), // "VehicleName_6"
QT_MOC_LITERAL(195, 3423, 13), // "VehicleName_7"
QT_MOC_LITERAL(196, 3437, 13), // "VehicleName_8"
QT_MOC_LITERAL(197, 3451, 13), // "VehicleName_9"
QT_MOC_LITERAL(198, 3465, 14), // "VehicleName_10"
QT_MOC_LITERAL(199, 3480, 14), // "VehicleName_11"
QT_MOC_LITERAL(200, 3495, 14), // "VehicleName_12"
QT_MOC_LITERAL(201, 3510, 14), // "VehicleName_13"
QT_MOC_LITERAL(202, 3525, 14), // "VehicleName_14"
QT_MOC_LITERAL(203, 3540, 14), // "VehicleName_15"
QT_MOC_LITERAL(204, 3555, 14), // "VehicleName_16"
QT_MOC_LITERAL(205, 3570, 14), // "VehicleName_17"
QT_MOC_LITERAL(206, 3585, 14), // "VehicleName_18"
QT_MOC_LITERAL(207, 3600, 14), // "VehicleName_19"
QT_MOC_LITERAL(208, 3615, 13) // "ThrustControl"

    },
    "SystemSettings\0guiConfigDataChanged\0"
    "\0index\0value\0GUIConfigDataChanged\0"
    "guiConfigData0Changed\0GUIConfigData_0Changed\0"
    "guiConfigData1Changed\0GUIConfigData_1Changed\0"
    "guiConfigData2Changed\0GUIConfigData_2Changed\0"
    "guiConfigData3Changed\0GUIConfigData_3Changed\0"
    "airSpeedMaxChanged\0AirSpeedMaxChanged\0"
    "airSpeedMinChanged\0AirSpeedMinChanged\0"
    "airframeTypeChanged\0"
    "SystemSettings_AirframeType::Enum\0"
    "AirframeTypeChanged\0vehicleNameChanged\0"
    "VehicleNameChanged\0vehicleName0Changed\0"
    "VehicleName_0Changed\0vehicleName1Changed\0"
    "VehicleName_1Changed\0vehicleName2Changed\0"
    "VehicleName_2Changed\0vehicleName3Changed\0"
    "VehicleName_3Changed\0vehicleName4Changed\0"
    "VehicleName_4Changed\0vehicleName5Changed\0"
    "VehicleName_5Changed\0vehicleName6Changed\0"
    "VehicleName_6Changed\0vehicleName7Changed\0"
    "VehicleName_7Changed\0vehicleName8Changed\0"
    "VehicleName_8Changed\0vehicleName9Changed\0"
    "VehicleName_9Changed\0vehicleName10Changed\0"
    "VehicleName_10Changed\0vehicleName11Changed\0"
    "VehicleName_11Changed\0vehicleName12Changed\0"
    "VehicleName_12Changed\0vehicleName13Changed\0"
    "VehicleName_13Changed\0vehicleName14Changed\0"
    "VehicleName_14Changed\0vehicleName15Changed\0"
    "VehicleName_15Changed\0vehicleName16Changed\0"
    "VehicleName_16Changed\0vehicleName17Changed\0"
    "VehicleName_17Changed\0vehicleName18Changed\0"
    "VehicleName_18Changed\0vehicleName19Changed\0"
    "VehicleName_19Changed\0thrustControlChanged\0"
    "SystemSettings_ThrustControl::Enum\0"
    "ThrustControlChanged\0setGUIConfigData\0"
    "setGUIConfigData0\0setGUIConfigData_0\0"
    "setGUIConfigData1\0setGUIConfigData_1\0"
    "setGUIConfigData2\0setGUIConfigData_2\0"
    "setGUIConfigData3\0setGUIConfigData_3\0"
    "setAirSpeedMax\0setAirSpeedMin\0"
    "setAirframeType\0setVehicleName\0"
    "setVehicleName0\0setVehicleName_0\0"
    "setVehicleName1\0setVehicleName_1\0"
    "setVehicleName2\0setVehicleName_2\0"
    "setVehicleName3\0setVehicleName_3\0"
    "setVehicleName4\0setVehicleName_4\0"
    "setVehicleName5\0setVehicleName_5\0"
    "setVehicleName6\0setVehicleName_6\0"
    "setVehicleName7\0setVehicleName_7\0"
    "setVehicleName8\0setVehicleName_8\0"
    "setVehicleName9\0setVehicleName_9\0"
    "setVehicleName10\0setVehicleName_10\0"
    "setVehicleName11\0setVehicleName_11\0"
    "setVehicleName12\0setVehicleName_12\0"
    "setVehicleName13\0setVehicleName_13\0"
    "setVehicleName14\0setVehicleName_14\0"
    "setVehicleName15\0setVehicleName_15\0"
    "setVehicleName16\0setVehicleName_16\0"
    "setVehicleName17\0setVehicleName_17\0"
    "setVehicleName18\0setVehicleName_18\0"
    "setVehicleName19\0setVehicleName_19\0"
    "setThrustControl\0emitNotifications\0"
    "guiConfigData\0getGUIConfigData\0"
    "getGUIConfigData_0\0getGUIConfigData_1\0"
    "getGUIConfigData_2\0getGUIConfigData_3\0"
    "getAirSpeedMax\0getAirSpeedMin\0"
    "getAirframeType\0vehicleName\0getVehicleName\0"
    "getVehicleName_0\0getVehicleName_1\0"
    "getVehicleName_2\0getVehicleName_3\0"
    "getVehicleName_4\0getVehicleName_5\0"
    "getVehicleName_6\0getVehicleName_7\0"
    "getVehicleName_8\0getVehicleName_9\0"
    "getVehicleName_10\0getVehicleName_11\0"
    "getVehicleName_12\0getVehicleName_13\0"
    "getVehicleName_14\0getVehicleName_15\0"
    "getVehicleName_16\0getVehicleName_17\0"
    "getVehicleName_18\0getVehicleName_19\0"
    "getThrustControl\0guiConfigData0\0"
    "guiConfigData1\0guiConfigData2\0"
    "guiConfigData3\0airSpeedMax\0airSpeedMin\0"
    "airframeType\0vehicleName0\0vehicleName1\0"
    "vehicleName2\0vehicleName3\0vehicleName4\0"
    "vehicleName5\0vehicleName6\0vehicleName7\0"
    "vehicleName8\0vehicleName9\0vehicleName10\0"
    "vehicleName11\0vehicleName12\0vehicleName13\0"
    "vehicleName14\0vehicleName15\0vehicleName16\0"
    "vehicleName17\0vehicleName18\0vehicleName19\0"
    "thrustControl\0GUIConfigData_0\0"
    "GUIConfigData_1\0GUIConfigData_2\0"
    "GUIConfigData_3\0AirSpeedMax\0AirSpeedMin\0"
    "AirframeType\0VehicleName_0\0VehicleName_1\0"
    "VehicleName_2\0VehicleName_3\0VehicleName_4\0"
    "VehicleName_5\0VehicleName_6\0VehicleName_7\0"
    "VehicleName_8\0VehicleName_9\0VehicleName_10\0"
    "VehicleName_11\0VehicleName_12\0"
    "VehicleName_13\0VehicleName_14\0"
    "VehicleName_15\0VehicleName_16\0"
    "VehicleName_17\0VehicleName_18\0"
    "VehicleName_19\0ThrustControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     150,   14, // methods
      56, 1170, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      60,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  764,    2, 0x06 /* Public */,
       5,    2,  769,    2, 0x06 /* Public */,
       6,    1,  774,    2, 0x06 /* Public */,
       7,    1,  777,    2, 0x06 /* Public */,
       8,    1,  780,    2, 0x06 /* Public */,
       9,    1,  783,    2, 0x06 /* Public */,
      10,    1,  786,    2, 0x06 /* Public */,
      11,    1,  789,    2, 0x06 /* Public */,
      12,    1,  792,    2, 0x06 /* Public */,
      13,    1,  795,    2, 0x06 /* Public */,
      14,    1,  798,    2, 0x06 /* Public */,
      15,    1,  801,    2, 0x06 /* Public */,
      16,    1,  804,    2, 0x06 /* Public */,
      17,    1,  807,    2, 0x06 /* Public */,
      18,    1,  810,    2, 0x06 /* Public */,
      20,    1,  813,    2, 0x06 /* Public */,
      21,    2,  816,    2, 0x06 /* Public */,
      22,    2,  821,    2, 0x06 /* Public */,
      23,    1,  826,    2, 0x06 /* Public */,
      24,    1,  829,    2, 0x06 /* Public */,
      25,    1,  832,    2, 0x06 /* Public */,
      26,    1,  835,    2, 0x06 /* Public */,
      27,    1,  838,    2, 0x06 /* Public */,
      28,    1,  841,    2, 0x06 /* Public */,
      29,    1,  844,    2, 0x06 /* Public */,
      30,    1,  847,    2, 0x06 /* Public */,
      31,    1,  850,    2, 0x06 /* Public */,
      32,    1,  853,    2, 0x06 /* Public */,
      33,    1,  856,    2, 0x06 /* Public */,
      34,    1,  859,    2, 0x06 /* Public */,
      35,    1,  862,    2, 0x06 /* Public */,
      36,    1,  865,    2, 0x06 /* Public */,
      37,    1,  868,    2, 0x06 /* Public */,
      38,    1,  871,    2, 0x06 /* Public */,
      39,    1,  874,    2, 0x06 /* Public */,
      40,    1,  877,    2, 0x06 /* Public */,
      41,    1,  880,    2, 0x06 /* Public */,
      42,    1,  883,    2, 0x06 /* Public */,
      43,    1,  886,    2, 0x06 /* Public */,
      44,    1,  889,    2, 0x06 /* Public */,
      45,    1,  892,    2, 0x06 /* Public */,
      46,    1,  895,    2, 0x06 /* Public */,
      47,    1,  898,    2, 0x06 /* Public */,
      48,    1,  901,    2, 0x06 /* Public */,
      49,    1,  904,    2, 0x06 /* Public */,
      50,    1,  907,    2, 0x06 /* Public */,
      51,    1,  910,    2, 0x06 /* Public */,
      52,    1,  913,    2, 0x06 /* Public */,
      53,    1,  916,    2, 0x06 /* Public */,
      54,    1,  919,    2, 0x06 /* Public */,
      55,    1,  922,    2, 0x06 /* Public */,
      56,    1,  925,    2, 0x06 /* Public */,
      57,    1,  928,    2, 0x06 /* Public */,
      58,    1,  931,    2, 0x06 /* Public */,
      59,    1,  934,    2, 0x06 /* Public */,
      60,    1,  937,    2, 0x06 /* Public */,
      61,    1,  940,    2, 0x06 /* Public */,
      62,    1,  943,    2, 0x06 /* Public */,
      63,    1,  946,    2, 0x06 /* Public */,
      65,    1,  949,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      66,    2,  952,    2, 0x0a /* Public */,
      67,    1,  957,    2, 0x0a /* Public */,
      68,    1,  960,    2, 0x0a /* Public */,
      69,    1,  963,    2, 0x0a /* Public */,
      70,    1,  966,    2, 0x0a /* Public */,
      71,    1,  969,    2, 0x0a /* Public */,
      72,    1,  972,    2, 0x0a /* Public */,
      73,    1,  975,    2, 0x0a /* Public */,
      74,    1,  978,    2, 0x0a /* Public */,
      75,    1,  981,    2, 0x0a /* Public */,
      76,    1,  984,    2, 0x0a /* Public */,
      77,    1,  987,    2, 0x0a /* Public */,
      77,    1,  990,    2, 0x0a /* Public */,
      78,    2,  993,    2, 0x0a /* Public */,
      78,    2,  998,    2, 0x0a /* Public */,
      79,    1, 1003,    2, 0x0a /* Public */,
      80,    1, 1006,    2, 0x0a /* Public */,
      81,    1, 1009,    2, 0x0a /* Public */,
      82,    1, 1012,    2, 0x0a /* Public */,
      83,    1, 1015,    2, 0x0a /* Public */,
      84,    1, 1018,    2, 0x0a /* Public */,
      85,    1, 1021,    2, 0x0a /* Public */,
      86,    1, 1024,    2, 0x0a /* Public */,
      87,    1, 1027,    2, 0x0a /* Public */,
      88,    1, 1030,    2, 0x0a /* Public */,
      89,    1, 1033,    2, 0x0a /* Public */,
      90,    1, 1036,    2, 0x0a /* Public */,
      91,    1, 1039,    2, 0x0a /* Public */,
      92,    1, 1042,    2, 0x0a /* Public */,
      93,    1, 1045,    2, 0x0a /* Public */,
      94,    1, 1048,    2, 0x0a /* Public */,
      95,    1, 1051,    2, 0x0a /* Public */,
      96,    1, 1054,    2, 0x0a /* Public */,
      97,    1, 1057,    2, 0x0a /* Public */,
      98,    1, 1060,    2, 0x0a /* Public */,
      99,    1, 1063,    2, 0x0a /* Public */,
     100,    1, 1066,    2, 0x0a /* Public */,
     101,    1, 1069,    2, 0x0a /* Public */,
     102,    1, 1072,    2, 0x0a /* Public */,
     103,    1, 1075,    2, 0x0a /* Public */,
     104,    1, 1078,    2, 0x0a /* Public */,
     105,    1, 1081,    2, 0x0a /* Public */,
     106,    1, 1084,    2, 0x0a /* Public */,
     107,    1, 1087,    2, 0x0a /* Public */,
     108,    1, 1090,    2, 0x0a /* Public */,
     109,    1, 1093,    2, 0x0a /* Public */,
     110,    1, 1096,    2, 0x0a /* Public */,
     111,    1, 1099,    2, 0x0a /* Public */,
     112,    1, 1102,    2, 0x0a /* Public */,
     113,    1, 1105,    2, 0x0a /* Public */,
     114,    1, 1108,    2, 0x0a /* Public */,
     115,    1, 1111,    2, 0x0a /* Public */,
     116,    1, 1114,    2, 0x0a /* Public */,
     117,    1, 1117,    2, 0x0a /* Public */,
     118,    1, 1120,    2, 0x0a /* Public */,
     119,    1, 1123,    2, 0x0a /* Public */,
     119,    1, 1126,    2, 0x0a /* Public */,
     120,    0, 1129,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     121,    1, 1130,    2, 0x02 /* Public */,
     122,    1, 1133,    2, 0x02 /* Public */,
     123,    0, 1136,    2, 0x02 /* Public */,
     124,    0, 1137,    2, 0x02 /* Public */,
     125,    0, 1138,    2, 0x02 /* Public */,
     126,    0, 1139,    2, 0x02 /* Public */,
     127,    0, 1140,    2, 0x02 /* Public */,
     128,    0, 1141,    2, 0x02 /* Public */,
     129,    0, 1142,    2, 0x02 /* Public */,
     130,    1, 1143,    2, 0x02 /* Public */,
     131,    1, 1146,    2, 0x02 /* Public */,
     132,    0, 1149,    2, 0x02 /* Public */,
     133,    0, 1150,    2, 0x02 /* Public */,
     134,    0, 1151,    2, 0x02 /* Public */,
     135,    0, 1152,    2, 0x02 /* Public */,
     136,    0, 1153,    2, 0x02 /* Public */,
     137,    0, 1154,    2, 0x02 /* Public */,
     138,    0, 1155,    2, 0x02 /* Public */,
     139,    0, 1156,    2, 0x02 /* Public */,
     140,    0, 1157,    2, 0x02 /* Public */,
     141,    0, 1158,    2, 0x02 /* Public */,
     142,    0, 1159,    2, 0x02 /* Public */,
     143,    0, 1160,    2, 0x02 /* Public */,
     144,    0, 1161,    2, 0x02 /* Public */,
     145,    0, 1162,    2, 0x02 /* Public */,
     146,    0, 1163,    2, 0x02 /* Public */,
     147,    0, 1164,    2, 0x02 /* Public */,
     148,    0, 1165,    2, 0x02 /* Public */,
     149,    0, 1166,    2, 0x02 /* Public */,
     150,    0, 1167,    2, 0x02 /* Public */,
     151,    0, 1168,    2, 0x02 /* Public */,
     152,    0, 1169,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, 0x80000000 | 19,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
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
    QMetaType::Void, 0x80000000 | 64,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, 0x80000000 | 19,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
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
    QMetaType::Void, 0x80000000 | 64,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt, QMetaType::UInt,    3,
    QMetaType::UInt, QMetaType::UInt,    3,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
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
     153, QMetaType::UInt, 0x00495003,
     154, QMetaType::UInt, 0x00495003,
     155, QMetaType::UInt, 0x00495003,
     156, QMetaType::UInt, 0x00495003,
     157, QMetaType::Float, 0x00495103,
     158, QMetaType::Float, 0x00495103,
     159, 0x80000000 | 19, 0x0049510b,
     160, QMetaType::UShort, 0x00495103,
     161, QMetaType::UShort, 0x00495103,
     162, QMetaType::UShort, 0x00495103,
     163, QMetaType::UShort, 0x00495103,
     164, QMetaType::UShort, 0x00495103,
     165, QMetaType::UShort, 0x00495103,
     166, QMetaType::UShort, 0x00495103,
     167, QMetaType::UShort, 0x00495103,
     168, QMetaType::UShort, 0x00495103,
     169, QMetaType::UShort, 0x00495103,
     170, QMetaType::UShort, 0x00495103,
     171, QMetaType::UShort, 0x00495103,
     172, QMetaType::UShort, 0x00495103,
     173, QMetaType::UShort, 0x00495103,
     174, QMetaType::UShort, 0x00495103,
     175, QMetaType::UShort, 0x00495103,
     176, QMetaType::UShort, 0x00495103,
     177, QMetaType::UShort, 0x00495103,
     178, QMetaType::UShort, 0x00495103,
     179, QMetaType::UShort, 0x00495103,
     180, 0x80000000 | 64, 0x0049510b,
     181, QMetaType::UInt, 0x00495103,
     182, QMetaType::UInt, 0x00495103,
     183, QMetaType::UInt, 0x00495103,
     184, QMetaType::UInt, 0x00495103,
     185, QMetaType::Float, 0x00495103,
     186, QMetaType::Float, 0x00495103,
     187, QMetaType::UChar, 0x00495103,
     188, QMetaType::UChar, 0x00495103,
     189, QMetaType::UChar, 0x00495103,
     190, QMetaType::UChar, 0x00495103,
     191, QMetaType::UChar, 0x00495103,
     192, QMetaType::UChar, 0x00495103,
     193, QMetaType::UChar, 0x00495103,
     194, QMetaType::UChar, 0x00495103,
     195, QMetaType::UChar, 0x00495103,
     196, QMetaType::UChar, 0x00495103,
     197, QMetaType::UChar, 0x00495103,
     198, QMetaType::UChar, 0x00495103,
     199, QMetaType::UChar, 0x00495103,
     200, QMetaType::UChar, 0x00495103,
     201, QMetaType::UChar, 0x00495103,
     202, QMetaType::UChar, 0x00495103,
     203, QMetaType::UChar, 0x00495103,
     204, QMetaType::UChar, 0x00495103,
     205, QMetaType::UChar, 0x00495103,
     206, QMetaType::UChar, 0x00495103,
     207, QMetaType::UChar, 0x00495103,
     208, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
       8,
      10,
      12,
      14,
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
       3,
       5,
       7,
       9,
      11,
      13,
      15,
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

       0        // eod
};

void SystemSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->guiConfigDataChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint32(*)>(_a[2]))); break;
        case 1: _t->GUIConfigDataChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 2: _t->guiConfigData0Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 3: _t->GUIConfigData_0Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->guiConfigData1Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 5: _t->GUIConfigData_1Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->guiConfigData2Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 7: _t->GUIConfigData_2Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 8: _t->guiConfigData3Changed((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 9: _t->GUIConfigData_3Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 10: _t->airSpeedMaxChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->AirSpeedMaxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->airSpeedMinChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->AirSpeedMinChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->airframeTypeChanged((*reinterpret_cast< const SystemSettings_AirframeType::Enum(*)>(_a[1]))); break;
        case 15: _t->AirframeTypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 16: _t->vehicleNameChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 17: _t->VehicleNameChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 18: _t->vehicleName0Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 19: _t->VehicleName_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->vehicleName1Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 21: _t->VehicleName_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->vehicleName2Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 23: _t->VehicleName_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->vehicleName3Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 25: _t->VehicleName_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->vehicleName4Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 27: _t->VehicleName_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->vehicleName5Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 29: _t->VehicleName_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->vehicleName6Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 31: _t->VehicleName_6Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->vehicleName7Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 33: _t->VehicleName_7Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->vehicleName8Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 35: _t->VehicleName_8Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->vehicleName9Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 37: _t->VehicleName_9Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->vehicleName10Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 39: _t->VehicleName_10Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->vehicleName11Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 41: _t->VehicleName_11Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->vehicleName12Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 43: _t->VehicleName_12Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->vehicleName13Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 45: _t->VehicleName_13Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->vehicleName14Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 47: _t->VehicleName_14Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 48: _t->vehicleName15Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 49: _t->VehicleName_15Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 50: _t->vehicleName16Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 51: _t->VehicleName_16Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->vehicleName17Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 53: _t->VehicleName_17Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 54: _t->vehicleName18Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 55: _t->VehicleName_18Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 56: _t->vehicleName19Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 57: _t->VehicleName_19Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 58: _t->thrustControlChanged((*reinterpret_cast< const SystemSettings_ThrustControl::Enum(*)>(_a[1]))); break;
        case 59: _t->ThrustControlChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 60: _t->setGUIConfigData((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint32(*)>(_a[2]))); break;
        case 61: _t->setGUIConfigData0((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 62: _t->setGUIConfigData_0((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 63: _t->setGUIConfigData1((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 64: _t->setGUIConfigData_1((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 65: _t->setGUIConfigData2((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 66: _t->setGUIConfigData_2((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 67: _t->setGUIConfigData3((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 68: _t->setGUIConfigData_3((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 69: _t->setAirSpeedMax((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 70: _t->setAirSpeedMin((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 71: _t->setAirframeType((*reinterpret_cast< const SystemSettings_AirframeType::Enum(*)>(_a[1]))); break;
        case 72: _t->setAirframeType((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 73: _t->setVehicleName((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 74: _t->setVehicleName((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 75: _t->setVehicleName0((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 76: _t->setVehicleName_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 77: _t->setVehicleName1((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 78: _t->setVehicleName_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 79: _t->setVehicleName2((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 80: _t->setVehicleName_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 81: _t->setVehicleName3((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 82: _t->setVehicleName_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 83: _t->setVehicleName4((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 84: _t->setVehicleName_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 85: _t->setVehicleName5((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 86: _t->setVehicleName_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 87: _t->setVehicleName6((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 88: _t->setVehicleName_6((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 89: _t->setVehicleName7((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 90: _t->setVehicleName_7((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 91: _t->setVehicleName8((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 92: _t->setVehicleName_8((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 93: _t->setVehicleName9((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 94: _t->setVehicleName_9((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 95: _t->setVehicleName10((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 96: _t->setVehicleName_10((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 97: _t->setVehicleName11((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 98: _t->setVehicleName_11((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 99: _t->setVehicleName12((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 100: _t->setVehicleName_12((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 101: _t->setVehicleName13((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 102: _t->setVehicleName_13((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 103: _t->setVehicleName14((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 104: _t->setVehicleName_14((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 105: _t->setVehicleName15((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 106: _t->setVehicleName_15((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 107: _t->setVehicleName16((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 108: _t->setVehicleName_16((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 109: _t->setVehicleName17((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 110: _t->setVehicleName_17((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 111: _t->setVehicleName18((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 112: _t->setVehicleName_18((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 113: _t->setVehicleName19((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 114: _t->setVehicleName_19((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 115: _t->setThrustControl((*reinterpret_cast< const SystemSettings_ThrustControl::Enum(*)>(_a[1]))); break;
        case 116: _t->setThrustControl((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 117: _t->emitNotifications(); break;
        case 118: { quint32 _r = _t->guiConfigData((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 119: { quint32 _r = _t->getGUIConfigData((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 120: { quint32 _r = _t->getGUIConfigData_0();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 121: { quint32 _r = _t->getGUIConfigData_1();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 122: { quint32 _r = _t->getGUIConfigData_2();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 123: { quint32 _r = _t->getGUIConfigData_3();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 124: { float _r = _t->getAirSpeedMax();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 125: { float _r = _t->getAirSpeedMin();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 126: { quint8 _r = _t->getAirframeType();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 127: { quint16 _r = _t->vehicleName((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 128: { quint8 _r = _t->getVehicleName((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 129: { quint8 _r = _t->getVehicleName_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 130: { quint8 _r = _t->getVehicleName_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 131: { quint8 _r = _t->getVehicleName_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 132: { quint8 _r = _t->getVehicleName_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 133: { quint8 _r = _t->getVehicleName_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 134: { quint8 _r = _t->getVehicleName_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 135: { quint8 _r = _t->getVehicleName_6();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 136: { quint8 _r = _t->getVehicleName_7();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 137: { quint8 _r = _t->getVehicleName_8();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 138: { quint8 _r = _t->getVehicleName_9();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 139: { quint8 _r = _t->getVehicleName_10();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 140: { quint8 _r = _t->getVehicleName_11();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 141: { quint8 _r = _t->getVehicleName_12();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 142: { quint8 _r = _t->getVehicleName_13();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 143: { quint8 _r = _t->getVehicleName_14();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 144: { quint8 _r = _t->getVehicleName_15();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 145: { quint8 _r = _t->getVehicleName_16();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 146: { quint8 _r = _t->getVehicleName_17();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 147: { quint8 _r = _t->getVehicleName_18();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 148: { quint8 _r = _t->getVehicleName_19();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 149: { quint8 _r = _t->getThrustControl();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SystemSettings::*)(quint32 , const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::guiConfigDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint32 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::GUIConfigDataChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::guiConfigData0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::GUIConfigData_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::guiConfigData1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::GUIConfigData_1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::guiConfigData2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::GUIConfigData_2Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::guiConfigData3Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::GUIConfigData_3Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::airSpeedMaxChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::AirSpeedMaxChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::airSpeedMinChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::AirSpeedMinChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const SystemSettings_AirframeType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::airframeTypeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::AirframeTypeChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleNameChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleNameChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName0Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_0Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName1Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_1Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName2Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_2Changed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName3Changed)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_3Changed)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName4Changed)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_4Changed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName5Changed)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_5Changed)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName6Changed)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_6Changed)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName7Changed)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_7Changed)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName8Changed)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_8Changed)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName9Changed)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_9Changed)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName10Changed)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_10Changed)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName11Changed)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_11Changed)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName12Changed)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_12Changed)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName13Changed)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_13Changed)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName14Changed)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_14Changed)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName15Changed)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_15Changed)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName16Changed)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_16Changed)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName17Changed)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_17Changed)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName18Changed)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_18Changed)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::vehicleName19Changed)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::VehicleName_19Changed)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(const SystemSettings_ThrustControl::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::thrustControlChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (SystemSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSettings::ThrustControlChanged)) {
                *result = 59;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SystemSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->guiConfigData0(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->guiConfigData1(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = _t->guiConfigData2(); break;
        case 3: *reinterpret_cast< quint32*>(_v) = _t->guiConfigData3(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->airSpeedMax(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->airSpeedMin(); break;
        case 6: *reinterpret_cast< SystemSettings_AirframeType::Enum*>(_v) = _t->airframeType(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->vehicleName0(); break;
        case 8: *reinterpret_cast< quint16*>(_v) = _t->vehicleName1(); break;
        case 9: *reinterpret_cast< quint16*>(_v) = _t->vehicleName2(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->vehicleName3(); break;
        case 11: *reinterpret_cast< quint16*>(_v) = _t->vehicleName4(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->vehicleName5(); break;
        case 13: *reinterpret_cast< quint16*>(_v) = _t->vehicleName6(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->vehicleName7(); break;
        case 15: *reinterpret_cast< quint16*>(_v) = _t->vehicleName8(); break;
        case 16: *reinterpret_cast< quint16*>(_v) = _t->vehicleName9(); break;
        case 17: *reinterpret_cast< quint16*>(_v) = _t->vehicleName10(); break;
        case 18: *reinterpret_cast< quint16*>(_v) = _t->vehicleName11(); break;
        case 19: *reinterpret_cast< quint16*>(_v) = _t->vehicleName12(); break;
        case 20: *reinterpret_cast< quint16*>(_v) = _t->vehicleName13(); break;
        case 21: *reinterpret_cast< quint16*>(_v) = _t->vehicleName14(); break;
        case 22: *reinterpret_cast< quint16*>(_v) = _t->vehicleName15(); break;
        case 23: *reinterpret_cast< quint16*>(_v) = _t->vehicleName16(); break;
        case 24: *reinterpret_cast< quint16*>(_v) = _t->vehicleName17(); break;
        case 25: *reinterpret_cast< quint16*>(_v) = _t->vehicleName18(); break;
        case 26: *reinterpret_cast< quint16*>(_v) = _t->vehicleName19(); break;
        case 27: *reinterpret_cast< SystemSettings_ThrustControl::Enum*>(_v) = _t->thrustControl(); break;
        case 28: *reinterpret_cast< quint32*>(_v) = _t->getGUIConfigData_0(); break;
        case 29: *reinterpret_cast< quint32*>(_v) = _t->getGUIConfigData_1(); break;
        case 30: *reinterpret_cast< quint32*>(_v) = _t->getGUIConfigData_2(); break;
        case 31: *reinterpret_cast< quint32*>(_v) = _t->getGUIConfigData_3(); break;
        case 32: *reinterpret_cast< float*>(_v) = _t->getAirSpeedMax(); break;
        case 33: *reinterpret_cast< float*>(_v) = _t->getAirSpeedMin(); break;
        case 34: *reinterpret_cast< quint8*>(_v) = _t->getAirframeType(); break;
        case 35: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_0(); break;
        case 36: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_1(); break;
        case 37: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_2(); break;
        case 38: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_3(); break;
        case 39: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_4(); break;
        case 40: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_5(); break;
        case 41: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_6(); break;
        case 42: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_7(); break;
        case 43: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_8(); break;
        case 44: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_9(); break;
        case 45: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_10(); break;
        case 46: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_11(); break;
        case 47: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_12(); break;
        case 48: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_13(); break;
        case 49: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_14(); break;
        case 50: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_15(); break;
        case 51: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_16(); break;
        case 52: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_17(); break;
        case 53: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_18(); break;
        case 54: *reinterpret_cast< quint8*>(_v) = _t->getVehicleName_19(); break;
        case 55: *reinterpret_cast< quint8*>(_v) = _t->getThrustControl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SystemSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGUIConfigData0(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setGUIConfigData1(*reinterpret_cast< quint32*>(_v)); break;
        case 2: _t->setGUIConfigData2(*reinterpret_cast< quint32*>(_v)); break;
        case 3: _t->setGUIConfigData3(*reinterpret_cast< quint32*>(_v)); break;
        case 4: _t->setAirSpeedMax(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setAirSpeedMin(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setAirframeType(*reinterpret_cast< SystemSettings_AirframeType::Enum*>(_v)); break;
        case 7: _t->setVehicleName0(*reinterpret_cast< quint16*>(_v)); break;
        case 8: _t->setVehicleName1(*reinterpret_cast< quint16*>(_v)); break;
        case 9: _t->setVehicleName2(*reinterpret_cast< quint16*>(_v)); break;
        case 10: _t->setVehicleName3(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setVehicleName4(*reinterpret_cast< quint16*>(_v)); break;
        case 12: _t->setVehicleName5(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setVehicleName6(*reinterpret_cast< quint16*>(_v)); break;
        case 14: _t->setVehicleName7(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setVehicleName8(*reinterpret_cast< quint16*>(_v)); break;
        case 16: _t->setVehicleName9(*reinterpret_cast< quint16*>(_v)); break;
        case 17: _t->setVehicleName10(*reinterpret_cast< quint16*>(_v)); break;
        case 18: _t->setVehicleName11(*reinterpret_cast< quint16*>(_v)); break;
        case 19: _t->setVehicleName12(*reinterpret_cast< quint16*>(_v)); break;
        case 20: _t->setVehicleName13(*reinterpret_cast< quint16*>(_v)); break;
        case 21: _t->setVehicleName14(*reinterpret_cast< quint16*>(_v)); break;
        case 22: _t->setVehicleName15(*reinterpret_cast< quint16*>(_v)); break;
        case 23: _t->setVehicleName16(*reinterpret_cast< quint16*>(_v)); break;
        case 24: _t->setVehicleName17(*reinterpret_cast< quint16*>(_v)); break;
        case 25: _t->setVehicleName18(*reinterpret_cast< quint16*>(_v)); break;
        case 26: _t->setVehicleName19(*reinterpret_cast< quint16*>(_v)); break;
        case 27: _t->setThrustControl(*reinterpret_cast< SystemSettings_ThrustControl::Enum*>(_v)); break;
        case 28: _t->setGUIConfigData_0(*reinterpret_cast< quint32*>(_v)); break;
        case 29: _t->setGUIConfigData_1(*reinterpret_cast< quint32*>(_v)); break;
        case 30: _t->setGUIConfigData_2(*reinterpret_cast< quint32*>(_v)); break;
        case 31: _t->setGUIConfigData_3(*reinterpret_cast< quint32*>(_v)); break;
        case 32: _t->setAirSpeedMax(*reinterpret_cast< float*>(_v)); break;
        case 33: _t->setAirSpeedMin(*reinterpret_cast< float*>(_v)); break;
        case 34: _t->setAirframeType(*reinterpret_cast< quint8*>(_v)); break;
        case 35: _t->setVehicleName_0(*reinterpret_cast< quint8*>(_v)); break;
        case 36: _t->setVehicleName_1(*reinterpret_cast< quint8*>(_v)); break;
        case 37: _t->setVehicleName_2(*reinterpret_cast< quint8*>(_v)); break;
        case 38: _t->setVehicleName_3(*reinterpret_cast< quint8*>(_v)); break;
        case 39: _t->setVehicleName_4(*reinterpret_cast< quint8*>(_v)); break;
        case 40: _t->setVehicleName_5(*reinterpret_cast< quint8*>(_v)); break;
        case 41: _t->setVehicleName_6(*reinterpret_cast< quint8*>(_v)); break;
        case 42: _t->setVehicleName_7(*reinterpret_cast< quint8*>(_v)); break;
        case 43: _t->setVehicleName_8(*reinterpret_cast< quint8*>(_v)); break;
        case 44: _t->setVehicleName_9(*reinterpret_cast< quint8*>(_v)); break;
        case 45: _t->setVehicleName_10(*reinterpret_cast< quint8*>(_v)); break;
        case 46: _t->setVehicleName_11(*reinterpret_cast< quint8*>(_v)); break;
        case 47: _t->setVehicleName_12(*reinterpret_cast< quint8*>(_v)); break;
        case 48: _t->setVehicleName_13(*reinterpret_cast< quint8*>(_v)); break;
        case 49: _t->setVehicleName_14(*reinterpret_cast< quint8*>(_v)); break;
        case 50: _t->setVehicleName_15(*reinterpret_cast< quint8*>(_v)); break;
        case 51: _t->setVehicleName_16(*reinterpret_cast< quint8*>(_v)); break;
        case 52: _t->setVehicleName_17(*reinterpret_cast< quint8*>(_v)); break;
        case 53: _t->setVehicleName_18(*reinterpret_cast< quint8*>(_v)); break;
        case 54: _t->setVehicleName_19(*reinterpret_cast< quint8*>(_v)); break;
        case 55: _t->setThrustControl(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_SystemSettings[] = {
        &SystemSettings_AirframeType::staticMetaObject,
    &SystemSettings_ThrustControl::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject SystemSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_SystemSettings.data,
    qt_meta_data_SystemSettings,
    qt_static_metacall,
    qt_meta_extradata_SystemSettings,
    nullptr
} };


const QMetaObject *SystemSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int SystemSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 150)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 150;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 150)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 150;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 56;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 56;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 56;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 56;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 56;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SystemSettings::guiConfigDataChanged(quint32 _t1, const quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemSettings::GUIConfigDataChanged(quint32 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SystemSettings::guiConfigData0Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SystemSettings::GUIConfigData_0Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SystemSettings::guiConfigData1Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SystemSettings::GUIConfigData_1Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SystemSettings::guiConfigData2Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SystemSettings::GUIConfigData_2Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SystemSettings::guiConfigData3Changed(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SystemSettings::GUIConfigData_3Changed(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SystemSettings::airSpeedMaxChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void SystemSettings::AirSpeedMaxChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void SystemSettings::airSpeedMinChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void SystemSettings::AirSpeedMinChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void SystemSettings::airframeTypeChanged(const SystemSettings_AirframeType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void SystemSettings::AirframeTypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void SystemSettings::vehicleNameChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void SystemSettings::VehicleNameChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void SystemSettings::vehicleName0Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void SystemSettings::VehicleName_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void SystemSettings::vehicleName1Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void SystemSettings::VehicleName_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void SystemSettings::vehicleName2Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void SystemSettings::VehicleName_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void SystemSettings::vehicleName3Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void SystemSettings::VehicleName_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void SystemSettings::vehicleName4Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void SystemSettings::VehicleName_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void SystemSettings::vehicleName5Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void SystemSettings::VehicleName_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void SystemSettings::vehicleName6Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void SystemSettings::VehicleName_6Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void SystemSettings::vehicleName7Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void SystemSettings::VehicleName_7Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void SystemSettings::vehicleName8Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void SystemSettings::VehicleName_8Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void SystemSettings::vehicleName9Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void SystemSettings::VehicleName_9Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void SystemSettings::vehicleName10Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void SystemSettings::VehicleName_10Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void SystemSettings::vehicleName11Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void SystemSettings::VehicleName_11Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void SystemSettings::vehicleName12Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void SystemSettings::VehicleName_12Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void SystemSettings::vehicleName13Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void SystemSettings::VehicleName_13Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void SystemSettings::vehicleName14Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void SystemSettings::VehicleName_14Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void SystemSettings::vehicleName15Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void SystemSettings::VehicleName_15Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void SystemSettings::vehicleName16Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void SystemSettings::VehicleName_16Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void SystemSettings::vehicleName17Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void SystemSettings::VehicleName_17Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void SystemSettings::vehicleName18Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void SystemSettings::VehicleName_18Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void SystemSettings::vehicleName19Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void SystemSettings::VehicleName_19Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void SystemSettings::thrustControlChanged(const SystemSettings_ThrustControl::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void SystemSettings::ThrustControlChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
