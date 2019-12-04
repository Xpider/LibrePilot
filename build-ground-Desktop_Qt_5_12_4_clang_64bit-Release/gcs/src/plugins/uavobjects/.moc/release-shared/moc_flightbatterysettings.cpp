/****************************************************************************
** Meta object code from reading C++ file 'flightbatterysettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../flightbatterysettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightbatterysettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightBatterySettingsConstants_t {
    QByteArrayData data[4];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightBatterySettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightBatterySettingsConstants_t qt_meta_stringdata_FlightBatterySettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 30), // "FlightBatterySettingsConstants"
QT_MOC_LITERAL(1, 31, 4), // "Enum"
QT_MOC_LITERAL(2, 36, 9), // "TypeCount"
QT_MOC_LITERAL(3, 46, 24) // "ResetConsumedEnergyCount"

    },
    "FlightBatterySettingsConstants\0Enum\0"
    "TypeCount\0ResetConsumedEnergyCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightBatterySettingsConstants[] = {

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
       2, uint(FlightBatterySettingsConstants::TypeCount),
       3, uint(FlightBatterySettingsConstants::ResetConsumedEnergyCount),

       0        // eod
};

void FlightBatterySettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightBatterySettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightBatterySettingsConstants.data,
    qt_meta_data_FlightBatterySettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightBatterySettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightBatterySettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightBatterySettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightBatterySettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightBatterySettings_Type_t {
    QByteArrayData data[8];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightBatterySettings_Type_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightBatterySettings_Type_t qt_meta_stringdata_FlightBatterySettings_Type = {
    {
QT_MOC_LITERAL(0, 0, 26), // "FlightBatterySettings_Type"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 4), // "LiPo"
QT_MOC_LITERAL(3, 37, 4), // "LiHV"
QT_MOC_LITERAL(4, 42, 4), // "A123"
QT_MOC_LITERAL(5, 47, 4), // "LiCo"
QT_MOC_LITERAL(6, 52, 7), // "LiFeSO4"
QT_MOC_LITERAL(7, 60, 4) // "None"

    },
    "FlightBatterySettings_Type\0Enum\0LiPo\0"
    "LiHV\0A123\0LiCo\0LiFeSO4\0None"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightBatterySettings_Type[] = {

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
       1,    1, 0x0,    6,   19,

 // enum data: key, value
       2, uint(FlightBatterySettings_Type::LiPo),
       3, uint(FlightBatterySettings_Type::LiHV),
       4, uint(FlightBatterySettings_Type::A123),
       5, uint(FlightBatterySettings_Type::LiCo),
       6, uint(FlightBatterySettings_Type::LiFeSO4),
       7, uint(FlightBatterySettings_Type::None),

       0        // eod
};

void FlightBatterySettings_Type::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightBatterySettings_Type::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightBatterySettings_Type.data,
    qt_meta_data_FlightBatterySettings_Type,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightBatterySettings_Type::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightBatterySettings_Type::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightBatterySettings_Type.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightBatterySettings_Type::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightBatterySettings_ResetConsumedEnergy_t {
    QByteArrayData data[4];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightBatterySettings_ResetConsumedEnergy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightBatterySettings_ResetConsumedEnergy_t qt_meta_stringdata_FlightBatterySettings_ResetConsumedEnergy = {
    {
QT_MOC_LITERAL(0, 0, 41), // "FlightBatterySettings_ResetCo..."
QT_MOC_LITERAL(1, 42, 4), // "Enum"
QT_MOC_LITERAL(2, 47, 5), // "False"
QT_MOC_LITERAL(3, 53, 4) // "True"

    },
    "FlightBatterySettings_ResetConsumedEnergy\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightBatterySettings_ResetConsumedEnergy[] = {

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
       2, uint(FlightBatterySettings_ResetConsumedEnergy::False),
       3, uint(FlightBatterySettings_ResetConsumedEnergy::True),

       0        // eod
};

void FlightBatterySettings_ResetConsumedEnergy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightBatterySettings_ResetConsumedEnergy::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightBatterySettings_ResetConsumedEnergy.data,
    qt_meta_data_FlightBatterySettings_ResetConsumedEnergy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightBatterySettings_ResetConsumedEnergy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightBatterySettings_ResetConsumedEnergy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightBatterySettings_ResetConsumedEnergy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightBatterySettings_ResetConsumedEnergy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightBatterySettings_t {
    QByteArrayData data[83];
    char stringdata0[2154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightBatterySettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightBatterySettings_t qt_meta_stringdata_FlightBatterySettings = {
    {
QT_MOC_LITERAL(0, 0, 21), // "FlightBatterySettings"
QT_MOC_LITERAL(1, 22, 15), // "capacityChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "value"
QT_MOC_LITERAL(4, 45, 15), // "CapacityChanged"
QT_MOC_LITERAL(5, 61, 28), // "cellVoltageThresholdsChanged"
QT_MOC_LITERAL(6, 90, 5), // "index"
QT_MOC_LITERAL(7, 96, 28), // "CellVoltageThresholdsChanged"
QT_MOC_LITERAL(8, 125, 35), // "cellVoltageThresholdsWarningC..."
QT_MOC_LITERAL(9, 161, 36), // "CellVoltageThresholds_Warning..."
QT_MOC_LITERAL(10, 198, 36), // "cellVoltageThresholdsCritical..."
QT_MOC_LITERAL(11, 235, 37), // "CellVoltageThresholds_Critica..."
QT_MOC_LITERAL(12, 273, 25), // "sensorCalibrationsChanged"
QT_MOC_LITERAL(13, 299, 25), // "SensorCalibrationsChanged"
QT_MOC_LITERAL(14, 325, 38), // "sensorCalibrationsVoltageFact..."
QT_MOC_LITERAL(15, 364, 39), // "SensorCalibrations_VoltageFac..."
QT_MOC_LITERAL(16, 404, 38), // "sensorCalibrationsCurrentFact..."
QT_MOC_LITERAL(17, 443, 39), // "SensorCalibrations_CurrentFac..."
QT_MOC_LITERAL(18, 483, 36), // "sensorCalibrationsVoltageZero..."
QT_MOC_LITERAL(19, 520, 37), // "SensorCalibrations_VoltageZer..."
QT_MOC_LITERAL(20, 558, 36), // "sensorCalibrationsCurrentZero..."
QT_MOC_LITERAL(21, 595, 37), // "SensorCalibrations_CurrentZer..."
QT_MOC_LITERAL(22, 633, 11), // "typeChanged"
QT_MOC_LITERAL(23, 645, 32), // "FlightBatterySettings_Type::Enum"
QT_MOC_LITERAL(24, 678, 11), // "TypeChanged"
QT_MOC_LITERAL(25, 690, 14), // "nbCellsChanged"
QT_MOC_LITERAL(26, 705, 14), // "NbCellsChanged"
QT_MOC_LITERAL(27, 720, 26), // "resetConsumedEnergyChanged"
QT_MOC_LITERAL(28, 747, 47), // "FlightBatterySettings_ResetCo..."
QT_MOC_LITERAL(29, 795, 26), // "ResetConsumedEnergyChanged"
QT_MOC_LITERAL(30, 822, 11), // "setCapacity"
QT_MOC_LITERAL(31, 834, 24), // "setCellVoltageThresholds"
QT_MOC_LITERAL(32, 859, 31), // "setCellVoltageThresholdsWarning"
QT_MOC_LITERAL(33, 891, 32), // "setCellVoltageThresholds_Warning"
QT_MOC_LITERAL(34, 924, 32), // "setCellVoltageThresholdsCritical"
QT_MOC_LITERAL(35, 957, 33), // "setCellVoltageThresholds_Crit..."
QT_MOC_LITERAL(36, 991, 21), // "setSensorCalibrations"
QT_MOC_LITERAL(37, 1013, 34), // "setSensorCalibrationsVoltageF..."
QT_MOC_LITERAL(38, 1048, 35), // "setSensorCalibrations_Voltage..."
QT_MOC_LITERAL(39, 1084, 34), // "setSensorCalibrationsCurrentF..."
QT_MOC_LITERAL(40, 1119, 35), // "setSensorCalibrations_Current..."
QT_MOC_LITERAL(41, 1155, 32), // "setSensorCalibrationsVoltageZero"
QT_MOC_LITERAL(42, 1188, 33), // "setSensorCalibrations_Voltage..."
QT_MOC_LITERAL(43, 1222, 32), // "setSensorCalibrationsCurrentZero"
QT_MOC_LITERAL(44, 1255, 33), // "setSensorCalibrations_Current..."
QT_MOC_LITERAL(45, 1289, 7), // "setType"
QT_MOC_LITERAL(46, 1297, 10), // "setNbCells"
QT_MOC_LITERAL(47, 1308, 22), // "setResetConsumedEnergy"
QT_MOC_LITERAL(48, 1331, 17), // "emitNotifications"
QT_MOC_LITERAL(49, 1349, 11), // "getCapacity"
QT_MOC_LITERAL(50, 1361, 21), // "cellVoltageThresholds"
QT_MOC_LITERAL(51, 1383, 24), // "getCellVoltageThresholds"
QT_MOC_LITERAL(52, 1408, 32), // "getCellVoltageThresholds_Warning"
QT_MOC_LITERAL(53, 1441, 33), // "getCellVoltageThresholds_Crit..."
QT_MOC_LITERAL(54, 1475, 18), // "sensorCalibrations"
QT_MOC_LITERAL(55, 1494, 21), // "getSensorCalibrations"
QT_MOC_LITERAL(56, 1516, 35), // "getSensorCalibrations_Voltage..."
QT_MOC_LITERAL(57, 1552, 35), // "getSensorCalibrations_Current..."
QT_MOC_LITERAL(58, 1588, 33), // "getSensorCalibrations_Voltage..."
QT_MOC_LITERAL(59, 1622, 33), // "getSensorCalibrations_Current..."
QT_MOC_LITERAL(60, 1656, 7), // "getType"
QT_MOC_LITERAL(61, 1664, 10), // "getNbCells"
QT_MOC_LITERAL(62, 1675, 22), // "getResetConsumedEnergy"
QT_MOC_LITERAL(63, 1698, 8), // "capacity"
QT_MOC_LITERAL(64, 1707, 28), // "cellVoltageThresholdsWarning"
QT_MOC_LITERAL(65, 1736, 29), // "cellVoltageThresholdsCritical"
QT_MOC_LITERAL(66, 1766, 31), // "sensorCalibrationsVoltageFactor"
QT_MOC_LITERAL(67, 1798, 31), // "sensorCalibrationsCurrentFactor"
QT_MOC_LITERAL(68, 1830, 29), // "sensorCalibrationsVoltageZero"
QT_MOC_LITERAL(69, 1860, 29), // "sensorCalibrationsCurrentZero"
QT_MOC_LITERAL(70, 1890, 4), // "type"
QT_MOC_LITERAL(71, 1895, 7), // "nbCells"
QT_MOC_LITERAL(72, 1903, 19), // "resetConsumedEnergy"
QT_MOC_LITERAL(73, 1923, 8), // "Capacity"
QT_MOC_LITERAL(74, 1932, 29), // "CellVoltageThresholds_Warning"
QT_MOC_LITERAL(75, 1962, 30), // "CellVoltageThresholds_Critical"
QT_MOC_LITERAL(76, 1993, 32), // "SensorCalibrations_VoltageFactor"
QT_MOC_LITERAL(77, 2026, 32), // "SensorCalibrations_CurrentFactor"
QT_MOC_LITERAL(78, 2059, 30), // "SensorCalibrations_VoltageZero"
QT_MOC_LITERAL(79, 2090, 30), // "SensorCalibrations_CurrentZero"
QT_MOC_LITERAL(80, 2121, 4), // "Type"
QT_MOC_LITERAL(81, 2126, 7), // "NbCells"
QT_MOC_LITERAL(82, 2134, 19) // "ResetConsumedEnergy"

    },
    "FlightBatterySettings\0capacityChanged\0"
    "\0value\0CapacityChanged\0"
    "cellVoltageThresholdsChanged\0index\0"
    "CellVoltageThresholdsChanged\0"
    "cellVoltageThresholdsWarningChanged\0"
    "CellVoltageThresholds_WarningChanged\0"
    "cellVoltageThresholdsCriticalChanged\0"
    "CellVoltageThresholds_CriticalChanged\0"
    "sensorCalibrationsChanged\0"
    "SensorCalibrationsChanged\0"
    "sensorCalibrationsVoltageFactorChanged\0"
    "SensorCalibrations_VoltageFactorChanged\0"
    "sensorCalibrationsCurrentFactorChanged\0"
    "SensorCalibrations_CurrentFactorChanged\0"
    "sensorCalibrationsVoltageZeroChanged\0"
    "SensorCalibrations_VoltageZeroChanged\0"
    "sensorCalibrationsCurrentZeroChanged\0"
    "SensorCalibrations_CurrentZeroChanged\0"
    "typeChanged\0FlightBatterySettings_Type::Enum\0"
    "TypeChanged\0nbCellsChanged\0NbCellsChanged\0"
    "resetConsumedEnergyChanged\0"
    "FlightBatterySettings_ResetConsumedEnergy::Enum\0"
    "ResetConsumedEnergyChanged\0setCapacity\0"
    "setCellVoltageThresholds\0"
    "setCellVoltageThresholdsWarning\0"
    "setCellVoltageThresholds_Warning\0"
    "setCellVoltageThresholdsCritical\0"
    "setCellVoltageThresholds_Critical\0"
    "setSensorCalibrations\0"
    "setSensorCalibrationsVoltageFactor\0"
    "setSensorCalibrations_VoltageFactor\0"
    "setSensorCalibrationsCurrentFactor\0"
    "setSensorCalibrations_CurrentFactor\0"
    "setSensorCalibrationsVoltageZero\0"
    "setSensorCalibrations_VoltageZero\0"
    "setSensorCalibrationsCurrentZero\0"
    "setSensorCalibrations_CurrentZero\0"
    "setType\0setNbCells\0setResetConsumedEnergy\0"
    "emitNotifications\0getCapacity\0"
    "cellVoltageThresholds\0getCellVoltageThresholds\0"
    "getCellVoltageThresholds_Warning\0"
    "getCellVoltageThresholds_Critical\0"
    "sensorCalibrations\0getSensorCalibrations\0"
    "getSensorCalibrations_VoltageFactor\0"
    "getSensorCalibrations_CurrentFactor\0"
    "getSensorCalibrations_VoltageZero\0"
    "getSensorCalibrations_CurrentZero\0"
    "getType\0getNbCells\0getResetConsumedEnergy\0"
    "capacity\0cellVoltageThresholdsWarning\0"
    "cellVoltageThresholdsCritical\0"
    "sensorCalibrationsVoltageFactor\0"
    "sensorCalibrationsCurrentFactor\0"
    "sensorCalibrationsVoltageZero\0"
    "sensorCalibrationsCurrentZero\0type\0"
    "nbCells\0resetConsumedEnergy\0Capacity\0"
    "CellVoltageThresholds_Warning\0"
    "CellVoltageThresholds_Critical\0"
    "SensorCalibrations_VoltageFactor\0"
    "SensorCalibrations_CurrentFactor\0"
    "SensorCalibrations_VoltageZero\0"
    "SensorCalibrations_CurrentZero\0Type\0"
    "NbCells\0ResetConsumedEnergy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightBatterySettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      60,   14, // methods
      20,  484, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      24,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  314,    2, 0x06 /* Public */,
       4,    1,  317,    2, 0x06 /* Public */,
       5,    2,  320,    2, 0x06 /* Public */,
       7,    2,  325,    2, 0x06 /* Public */,
       8,    1,  330,    2, 0x06 /* Public */,
       9,    1,  333,    2, 0x06 /* Public */,
      10,    1,  336,    2, 0x06 /* Public */,
      11,    1,  339,    2, 0x06 /* Public */,
      12,    2,  342,    2, 0x06 /* Public */,
      13,    2,  347,    2, 0x06 /* Public */,
      14,    1,  352,    2, 0x06 /* Public */,
      15,    1,  355,    2, 0x06 /* Public */,
      16,    1,  358,    2, 0x06 /* Public */,
      17,    1,  361,    2, 0x06 /* Public */,
      18,    1,  364,    2, 0x06 /* Public */,
      19,    1,  367,    2, 0x06 /* Public */,
      20,    1,  370,    2, 0x06 /* Public */,
      21,    1,  373,    2, 0x06 /* Public */,
      22,    1,  376,    2, 0x06 /* Public */,
      24,    1,  379,    2, 0x06 /* Public */,
      25,    1,  382,    2, 0x06 /* Public */,
      26,    1,  385,    2, 0x06 /* Public */,
      27,    1,  388,    2, 0x06 /* Public */,
      29,    1,  391,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    1,  394,    2, 0x0a /* Public */,
      31,    2,  397,    2, 0x0a /* Public */,
      32,    1,  402,    2, 0x0a /* Public */,
      33,    1,  405,    2, 0x0a /* Public */,
      34,    1,  408,    2, 0x0a /* Public */,
      35,    1,  411,    2, 0x0a /* Public */,
      36,    2,  414,    2, 0x0a /* Public */,
      37,    1,  419,    2, 0x0a /* Public */,
      38,    1,  422,    2, 0x0a /* Public */,
      39,    1,  425,    2, 0x0a /* Public */,
      40,    1,  428,    2, 0x0a /* Public */,
      41,    1,  431,    2, 0x0a /* Public */,
      42,    1,  434,    2, 0x0a /* Public */,
      43,    1,  437,    2, 0x0a /* Public */,
      44,    1,  440,    2, 0x0a /* Public */,
      45,    1,  443,    2, 0x0a /* Public */,
      45,    1,  446,    2, 0x0a /* Public */,
      46,    1,  449,    2, 0x0a /* Public */,
      46,    1,  452,    2, 0x0a /* Public */,
      47,    1,  455,    2, 0x0a /* Public */,
      47,    1,  458,    2, 0x0a /* Public */,
      48,    0,  461,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      49,    0,  462,    2, 0x02 /* Public */,
      50,    1,  463,    2, 0x02 /* Public */,
      51,    1,  466,    2, 0x02 /* Public */,
      52,    0,  469,    2, 0x02 /* Public */,
      53,    0,  470,    2, 0x02 /* Public */,
      54,    1,  471,    2, 0x02 /* Public */,
      55,    1,  474,    2, 0x02 /* Public */,
      56,    0,  477,    2, 0x02 /* Public */,
      57,    0,  478,    2, 0x02 /* Public */,
      58,    0,  479,    2, 0x02 /* Public */,
      59,    0,  480,    2, 0x02 /* Public */,
      60,    0,  481,    2, 0x02 /* Public */,
      61,    0,  482,    2, 0x02 /* Public */,
      62,    0,  483,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 23,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 28,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 23,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 28,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::Float, QMetaType::UInt,    6,
    QMetaType::Float, QMetaType::UInt,    6,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    6,
    QMetaType::Float, QMetaType::UInt,    6,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      63, QMetaType::UInt, 0x00495103,
      64, QMetaType::Float, 0x00495103,
      65, QMetaType::Float, 0x00495103,
      66, QMetaType::Float, 0x00495103,
      67, QMetaType::Float, 0x00495103,
      68, QMetaType::Float, 0x00495103,
      69, QMetaType::Float, 0x00495103,
      70, 0x80000000 | 23, 0x0049510b,
      71, QMetaType::UShort, 0x00495103,
      72, 0x80000000 | 28, 0x0049510b,
      73, QMetaType::UInt, 0x00495103,
      74, QMetaType::Float, 0x00495103,
      75, QMetaType::Float, 0x00495103,
      76, QMetaType::Float, 0x00495103,
      77, QMetaType::Float, 0x00495103,
      78, QMetaType::Float, 0x00495103,
      79, QMetaType::Float, 0x00495103,
      80, QMetaType::UChar, 0x00495103,
      81, QMetaType::UChar, 0x00495103,
      82, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       4,
       6,
      10,
      12,
      14,
      16,
      18,
      20,
      22,
       1,
       5,
       7,
      11,
      13,
      15,
      17,
      19,
      21,
      23,

       0        // eod
};

void FlightBatterySettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightBatterySettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->capacityChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: _t->CapacityChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->cellVoltageThresholdsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 3: _t->CellVoltageThresholdsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 4: _t->cellVoltageThresholdsWarningChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->CellVoltageThresholds_WarningChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->cellVoltageThresholdsCriticalChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->CellVoltageThresholds_CriticalChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->sensorCalibrationsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 9: _t->SensorCalibrationsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->sensorCalibrationsVoltageFactorChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->SensorCalibrations_VoltageFactorChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->sensorCalibrationsCurrentFactorChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->SensorCalibrations_CurrentFactorChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->sensorCalibrationsVoltageZeroChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->SensorCalibrations_VoltageZeroChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->sensorCalibrationsCurrentZeroChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->SensorCalibrations_CurrentZeroChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->typeChanged((*reinterpret_cast< const FlightBatterySettings_Type::Enum(*)>(_a[1]))); break;
        case 19: _t->TypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->nbCellsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 21: _t->NbCellsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->resetConsumedEnergyChanged((*reinterpret_cast< const FlightBatterySettings_ResetConsumedEnergy::Enum(*)>(_a[1]))); break;
        case 23: _t->ResetConsumedEnergyChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->setCapacity((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 25: _t->setCellVoltageThresholds((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 26: _t->setCellVoltageThresholdsWarning((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->setCellVoltageThresholds_Warning((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->setCellVoltageThresholdsCritical((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 29: _t->setCellVoltageThresholds_Critical((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->setSensorCalibrations((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 31: _t->setSensorCalibrationsVoltageFactor((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 32: _t->setSensorCalibrations_VoltageFactor((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 33: _t->setSensorCalibrationsCurrentFactor((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 34: _t->setSensorCalibrations_CurrentFactor((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 35: _t->setSensorCalibrationsVoltageZero((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 36: _t->setSensorCalibrations_VoltageZero((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 37: _t->setSensorCalibrationsCurrentZero((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 38: _t->setSensorCalibrations_CurrentZero((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->setType((*reinterpret_cast< const FlightBatterySettings_Type::Enum(*)>(_a[1]))); break;
        case 40: _t->setType((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 41: _t->setNbCells((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 42: _t->setNbCells((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 43: _t->setResetConsumedEnergy((*reinterpret_cast< const FlightBatterySettings_ResetConsumedEnergy::Enum(*)>(_a[1]))); break;
        case 44: _t->setResetConsumedEnergy((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 45: _t->emitNotifications(); break;
        case 46: { quint32 _r = _t->getCapacity();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 47: { float _r = _t->cellVoltageThresholds((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 48: { float _r = _t->getCellVoltageThresholds((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 49: { float _r = _t->getCellVoltageThresholds_Warning();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 50: { float _r = _t->getCellVoltageThresholds_Critical();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 51: { float _r = _t->sensorCalibrations((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 52: { float _r = _t->getSensorCalibrations((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 53: { float _r = _t->getSensorCalibrations_VoltageFactor();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 54: { float _r = _t->getSensorCalibrations_CurrentFactor();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 55: { float _r = _t->getSensorCalibrations_VoltageZero();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 56: { float _r = _t->getSensorCalibrations_CurrentZero();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 57: { quint8 _r = _t->getType();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 58: { quint8 _r = _t->getNbCells();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 59: { quint8 _r = _t->getResetConsumedEnergy();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightBatterySettings::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::capacityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::CapacityChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::cellVoltageThresholdsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::CellVoltageThresholdsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::cellVoltageThresholdsWarningChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::CellVoltageThresholds_WarningChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::cellVoltageThresholdsCriticalChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::CellVoltageThresholds_CriticalChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::sensorCalibrationsChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::SensorCalibrationsChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::sensorCalibrationsVoltageFactorChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::SensorCalibrations_VoltageFactorChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::sensorCalibrationsCurrentFactorChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::SensorCalibrations_CurrentFactorChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::sensorCalibrationsVoltageZeroChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::SensorCalibrations_VoltageZeroChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::sensorCalibrationsCurrentZeroChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::SensorCalibrations_CurrentZeroChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(const FlightBatterySettings_Type::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::typeChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::TypeChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::nbCellsChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::NbCellsChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(const FlightBatterySettings_ResetConsumedEnergy::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::resetConsumedEnergyChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (FlightBatterySettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatterySettings::ResetConsumedEnergyChanged)) {
                *result = 23;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FlightBatterySettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->capacity(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->cellVoltageThresholdsWarning(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->cellVoltageThresholdsCritical(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->sensorCalibrationsVoltageFactor(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->sensorCalibrationsCurrentFactor(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->sensorCalibrationsVoltageZero(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->sensorCalibrationsCurrentZero(); break;
        case 7: *reinterpret_cast< FlightBatterySettings_Type::Enum*>(_v) = _t->type(); break;
        case 8: *reinterpret_cast< quint16*>(_v) = _t->nbCells(); break;
        case 9: *reinterpret_cast< FlightBatterySettings_ResetConsumedEnergy::Enum*>(_v) = _t->resetConsumedEnergy(); break;
        case 10: *reinterpret_cast< quint32*>(_v) = _t->getCapacity(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getCellVoltageThresholds_Warning(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->getCellVoltageThresholds_Critical(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getSensorCalibrations_VoltageFactor(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getSensorCalibrations_CurrentFactor(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getSensorCalibrations_VoltageZero(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getSensorCalibrations_CurrentZero(); break;
        case 17: *reinterpret_cast< quint8*>(_v) = _t->getType(); break;
        case 18: *reinterpret_cast< quint8*>(_v) = _t->getNbCells(); break;
        case 19: *reinterpret_cast< quint8*>(_v) = _t->getResetConsumedEnergy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FlightBatterySettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCapacity(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setCellVoltageThresholdsWarning(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setCellVoltageThresholdsCritical(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setSensorCalibrationsVoltageFactor(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setSensorCalibrationsCurrentFactor(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setSensorCalibrationsVoltageZero(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setSensorCalibrationsCurrentZero(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setType(*reinterpret_cast< FlightBatterySettings_Type::Enum*>(_v)); break;
        case 8: _t->setNbCells(*reinterpret_cast< quint16*>(_v)); break;
        case 9: _t->setResetConsumedEnergy(*reinterpret_cast< FlightBatterySettings_ResetConsumedEnergy::Enum*>(_v)); break;
        case 10: _t->setCapacity(*reinterpret_cast< quint32*>(_v)); break;
        case 11: _t->setCellVoltageThresholds_Warning(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setCellVoltageThresholds_Critical(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setSensorCalibrations_VoltageFactor(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setSensorCalibrations_CurrentFactor(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setSensorCalibrations_VoltageZero(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setSensorCalibrations_CurrentZero(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setType(*reinterpret_cast< quint8*>(_v)); break;
        case 18: _t->setNbCells(*reinterpret_cast< quint8*>(_v)); break;
        case 19: _t->setResetConsumedEnergy(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_FlightBatterySettings[] = {
        &FlightBatterySettings_Type::staticMetaObject,
    &FlightBatterySettings_ResetConsumedEnergy::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject FlightBatterySettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_FlightBatterySettings.data,
    qt_meta_data_FlightBatterySettings,
    qt_static_metacall,
    qt_meta_extradata_FlightBatterySettings,
    nullptr
} };


const QMetaObject *FlightBatterySettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightBatterySettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightBatterySettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int FlightBatterySettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 60)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 60;
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
void FlightBatterySettings::capacityChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlightBatterySettings::CapacityChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FlightBatterySettings::cellVoltageThresholdsChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FlightBatterySettings::CellVoltageThresholdsChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FlightBatterySettings::cellVoltageThresholdsWarningChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FlightBatterySettings::CellVoltageThresholds_WarningChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FlightBatterySettings::cellVoltageThresholdsCriticalChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FlightBatterySettings::CellVoltageThresholds_CriticalChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FlightBatterySettings::sensorCalibrationsChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FlightBatterySettings::SensorCalibrationsChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FlightBatterySettings::sensorCalibrationsVoltageFactorChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FlightBatterySettings::SensorCalibrations_VoltageFactorChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FlightBatterySettings::sensorCalibrationsCurrentFactorChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FlightBatterySettings::SensorCalibrations_CurrentFactorChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void FlightBatterySettings::sensorCalibrationsVoltageZeroChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void FlightBatterySettings::SensorCalibrations_VoltageZeroChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void FlightBatterySettings::sensorCalibrationsCurrentZeroChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void FlightBatterySettings::SensorCalibrations_CurrentZeroChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void FlightBatterySettings::typeChanged(const FlightBatterySettings_Type::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void FlightBatterySettings::TypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void FlightBatterySettings::nbCellsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void FlightBatterySettings::NbCellsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void FlightBatterySettings::resetConsumedEnergyChanged(const FlightBatterySettings_ResetConsumedEnergy::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void FlightBatterySettings::ResetConsumedEnergyChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
