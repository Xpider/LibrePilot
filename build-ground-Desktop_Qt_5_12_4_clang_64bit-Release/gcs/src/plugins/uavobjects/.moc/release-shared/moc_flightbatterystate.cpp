/****************************************************************************
** Meta object code from reading C++ file 'flightbatterystate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../flightbatterystate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightbatterystate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightBatteryStateConstants_t {
    QByteArrayData data[3];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightBatteryStateConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightBatteryStateConstants_t qt_meta_stringdata_FlightBatteryStateConstants = {
    {
QT_MOC_LITERAL(0, 0, 27), // "FlightBatteryStateConstants"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 24) // "NbCellsAutodetectedCount"

    },
    "FlightBatteryStateConstants\0Enum\0"
    "NbCellsAutodetectedCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightBatteryStateConstants[] = {

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
       2, uint(FlightBatteryStateConstants::NbCellsAutodetectedCount),

       0        // eod
};

void FlightBatteryStateConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightBatteryStateConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightBatteryStateConstants.data,
    qt_meta_data_FlightBatteryStateConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightBatteryStateConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightBatteryStateConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightBatteryStateConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightBatteryStateConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightBatteryState_NbCellsAutodetected_t {
    QByteArrayData data[4];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightBatteryState_NbCellsAutodetected_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightBatteryState_NbCellsAutodetected_t qt_meta_stringdata_FlightBatteryState_NbCellsAutodetected = {
    {
QT_MOC_LITERAL(0, 0, 38), // "FlightBatteryState_NbCellsAut..."
QT_MOC_LITERAL(1, 39, 4), // "Enum"
QT_MOC_LITERAL(2, 44, 5), // "False"
QT_MOC_LITERAL(3, 50, 4) // "True"

    },
    "FlightBatteryState_NbCellsAutodetected\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightBatteryState_NbCellsAutodetected[] = {

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
       2, uint(FlightBatteryState_NbCellsAutodetected::False),
       3, uint(FlightBatteryState_NbCellsAutodetected::True),

       0        // eod
};

void FlightBatteryState_NbCellsAutodetected::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightBatteryState_NbCellsAutodetected::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightBatteryState_NbCellsAutodetected.data,
    qt_meta_data_FlightBatteryState_NbCellsAutodetected,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightBatteryState_NbCellsAutodetected::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightBatteryState_NbCellsAutodetected::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightBatteryState_NbCellsAutodetected.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightBatteryState_NbCellsAutodetected::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightBatteryState_t {
    QByteArrayData data[59];
    char stringdata0[995];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightBatteryState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightBatteryState_t qt_meta_stringdata_FlightBatteryState = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FlightBatteryState"
QT_MOC_LITERAL(1, 19, 14), // "voltageChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "value"
QT_MOC_LITERAL(4, 41, 14), // "VoltageChanged"
QT_MOC_LITERAL(5, 56, 14), // "currentChanged"
QT_MOC_LITERAL(6, 71, 14), // "CurrentChanged"
QT_MOC_LITERAL(7, 86, 25), // "boardSupplyVoltageChanged"
QT_MOC_LITERAL(8, 112, 25), // "BoardSupplyVoltageChanged"
QT_MOC_LITERAL(9, 138, 18), // "peakCurrentChanged"
QT_MOC_LITERAL(10, 157, 18), // "PeakCurrentChanged"
QT_MOC_LITERAL(11, 176, 17), // "avgCurrentChanged"
QT_MOC_LITERAL(12, 194, 17), // "AvgCurrentChanged"
QT_MOC_LITERAL(13, 212, 21), // "consumedEnergyChanged"
QT_MOC_LITERAL(14, 234, 21), // "ConsumedEnergyChanged"
QT_MOC_LITERAL(15, 256, 26), // "estimatedFlightTimeChanged"
QT_MOC_LITERAL(16, 283, 26), // "EstimatedFlightTimeChanged"
QT_MOC_LITERAL(17, 310, 14), // "nbCellsChanged"
QT_MOC_LITERAL(18, 325, 14), // "NbCellsChanged"
QT_MOC_LITERAL(19, 340, 26), // "nbCellsAutodetectedChanged"
QT_MOC_LITERAL(20, 367, 44), // "FlightBatteryState_NbCellsAut..."
QT_MOC_LITERAL(21, 412, 26), // "NbCellsAutodetectedChanged"
QT_MOC_LITERAL(22, 439, 10), // "setVoltage"
QT_MOC_LITERAL(23, 450, 10), // "setCurrent"
QT_MOC_LITERAL(24, 461, 21), // "setBoardSupplyVoltage"
QT_MOC_LITERAL(25, 483, 14), // "setPeakCurrent"
QT_MOC_LITERAL(26, 498, 13), // "setAvgCurrent"
QT_MOC_LITERAL(27, 512, 17), // "setConsumedEnergy"
QT_MOC_LITERAL(28, 530, 22), // "setEstimatedFlightTime"
QT_MOC_LITERAL(29, 553, 10), // "setNbCells"
QT_MOC_LITERAL(30, 564, 22), // "setNbCellsAutodetected"
QT_MOC_LITERAL(31, 587, 17), // "emitNotifications"
QT_MOC_LITERAL(32, 605, 10), // "getVoltage"
QT_MOC_LITERAL(33, 616, 10), // "getCurrent"
QT_MOC_LITERAL(34, 627, 21), // "getBoardSupplyVoltage"
QT_MOC_LITERAL(35, 649, 14), // "getPeakCurrent"
QT_MOC_LITERAL(36, 664, 13), // "getAvgCurrent"
QT_MOC_LITERAL(37, 678, 17), // "getConsumedEnergy"
QT_MOC_LITERAL(38, 696, 22), // "getEstimatedFlightTime"
QT_MOC_LITERAL(39, 719, 10), // "getNbCells"
QT_MOC_LITERAL(40, 730, 22), // "getNbCellsAutodetected"
QT_MOC_LITERAL(41, 753, 7), // "voltage"
QT_MOC_LITERAL(42, 761, 7), // "current"
QT_MOC_LITERAL(43, 769, 18), // "boardSupplyVoltage"
QT_MOC_LITERAL(44, 788, 11), // "peakCurrent"
QT_MOC_LITERAL(45, 800, 10), // "avgCurrent"
QT_MOC_LITERAL(46, 811, 14), // "consumedEnergy"
QT_MOC_LITERAL(47, 826, 19), // "estimatedFlightTime"
QT_MOC_LITERAL(48, 846, 7), // "nbCells"
QT_MOC_LITERAL(49, 854, 19), // "nbCellsAutodetected"
QT_MOC_LITERAL(50, 874, 7), // "Voltage"
QT_MOC_LITERAL(51, 882, 7), // "Current"
QT_MOC_LITERAL(52, 890, 18), // "BoardSupplyVoltage"
QT_MOC_LITERAL(53, 909, 11), // "PeakCurrent"
QT_MOC_LITERAL(54, 921, 10), // "AvgCurrent"
QT_MOC_LITERAL(55, 932, 14), // "ConsumedEnergy"
QT_MOC_LITERAL(56, 947, 19), // "EstimatedFlightTime"
QT_MOC_LITERAL(57, 967, 7), // "NbCells"
QT_MOC_LITERAL(58, 975, 19) // "NbCellsAutodetected"

    },
    "FlightBatteryState\0voltageChanged\0\0"
    "value\0VoltageChanged\0currentChanged\0"
    "CurrentChanged\0boardSupplyVoltageChanged\0"
    "BoardSupplyVoltageChanged\0peakCurrentChanged\0"
    "PeakCurrentChanged\0avgCurrentChanged\0"
    "AvgCurrentChanged\0consumedEnergyChanged\0"
    "ConsumedEnergyChanged\0estimatedFlightTimeChanged\0"
    "EstimatedFlightTimeChanged\0nbCellsChanged\0"
    "NbCellsChanged\0nbCellsAutodetectedChanged\0"
    "FlightBatteryState_NbCellsAutodetected::Enum\0"
    "NbCellsAutodetectedChanged\0setVoltage\0"
    "setCurrent\0setBoardSupplyVoltage\0"
    "setPeakCurrent\0setAvgCurrent\0"
    "setConsumedEnergy\0setEstimatedFlightTime\0"
    "setNbCells\0setNbCellsAutodetected\0"
    "emitNotifications\0getVoltage\0getCurrent\0"
    "getBoardSupplyVoltage\0getPeakCurrent\0"
    "getAvgCurrent\0getConsumedEnergy\0"
    "getEstimatedFlightTime\0getNbCells\0"
    "getNbCellsAutodetected\0voltage\0current\0"
    "boardSupplyVoltage\0peakCurrent\0"
    "avgCurrent\0consumedEnergy\0estimatedFlightTime\0"
    "nbCells\0nbCellsAutodetected\0Voltage\0"
    "Current\0BoardSupplyVoltage\0PeakCurrent\0"
    "AvgCurrent\0ConsumedEnergy\0EstimatedFlightTime\0"
    "NbCells\0NbCellsAutodetected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightBatteryState[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
      18,  306, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  209,    2, 0x06 /* Public */,
       4,    1,  212,    2, 0x06 /* Public */,
       5,    1,  215,    2, 0x06 /* Public */,
       6,    1,  218,    2, 0x06 /* Public */,
       7,    1,  221,    2, 0x06 /* Public */,
       8,    1,  224,    2, 0x06 /* Public */,
       9,    1,  227,    2, 0x06 /* Public */,
      10,    1,  230,    2, 0x06 /* Public */,
      11,    1,  233,    2, 0x06 /* Public */,
      12,    1,  236,    2, 0x06 /* Public */,
      13,    1,  239,    2, 0x06 /* Public */,
      14,    1,  242,    2, 0x06 /* Public */,
      15,    1,  245,    2, 0x06 /* Public */,
      16,    1,  248,    2, 0x06 /* Public */,
      17,    1,  251,    2, 0x06 /* Public */,
      18,    1,  254,    2, 0x06 /* Public */,
      19,    1,  257,    2, 0x06 /* Public */,
      21,    1,  260,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    1,  263,    2, 0x0a /* Public */,
      23,    1,  266,    2, 0x0a /* Public */,
      24,    1,  269,    2, 0x0a /* Public */,
      25,    1,  272,    2, 0x0a /* Public */,
      26,    1,  275,    2, 0x0a /* Public */,
      27,    1,  278,    2, 0x0a /* Public */,
      28,    1,  281,    2, 0x0a /* Public */,
      29,    1,  284,    2, 0x0a /* Public */,
      29,    1,  287,    2, 0x0a /* Public */,
      30,    1,  290,    2, 0x0a /* Public */,
      30,    1,  293,    2, 0x0a /* Public */,
      31,    0,  296,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      32,    0,  297,    2, 0x02 /* Public */,
      33,    0,  298,    2, 0x02 /* Public */,
      34,    0,  299,    2, 0x02 /* Public */,
      35,    0,  300,    2, 0x02 /* Public */,
      36,    0,  301,    2, 0x02 /* Public */,
      37,    0,  302,    2, 0x02 /* Public */,
      38,    0,  303,    2, 0x02 /* Public */,
      39,    0,  304,    2, 0x02 /* Public */,
      40,    0,  305,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 20,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 20,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      41, QMetaType::Float, 0x00495103,
      42, QMetaType::Float, 0x00495103,
      43, QMetaType::Float, 0x00495103,
      44, QMetaType::Float, 0x00495103,
      45, QMetaType::Float, 0x00495103,
      46, QMetaType::Float, 0x00495103,
      47, QMetaType::Float, 0x00495103,
      48, QMetaType::UShort, 0x00495103,
      49, 0x80000000 | 20, 0x0049510b,
      50, QMetaType::Float, 0x00495103,
      51, QMetaType::Float, 0x00495103,
      52, QMetaType::Float, 0x00495103,
      53, QMetaType::Float, 0x00495103,
      54, QMetaType::Float, 0x00495103,
      55, QMetaType::Float, 0x00495103,
      56, QMetaType::Float, 0x00495103,
      57, QMetaType::UChar, 0x00495103,
      58, QMetaType::UChar, 0x00495103,

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
       1,
       3,
       5,
       7,
       9,
      11,
      13,
      15,
      17,

       0        // eod
};

void FlightBatteryState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightBatteryState *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->voltageChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->VoltageChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->CurrentChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->boardSupplyVoltageChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->BoardSupplyVoltageChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->peakCurrentChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->PeakCurrentChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->avgCurrentChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->AvgCurrentChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->consumedEnergyChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->ConsumedEnergyChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->estimatedFlightTimeChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->EstimatedFlightTimeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->nbCellsChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 15: _t->NbCellsChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 16: _t->nbCellsAutodetectedChanged((*reinterpret_cast< const FlightBatteryState_NbCellsAutodetected::Enum(*)>(_a[1]))); break;
        case 17: _t->NbCellsAutodetectedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->setVoltage((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->setCurrent((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 20: _t->setBoardSupplyVoltage((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->setPeakCurrent((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 22: _t->setAvgCurrent((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->setConsumedEnergy((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 24: _t->setEstimatedFlightTime((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->setNbCells((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 26: _t->setNbCells((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 27: _t->setNbCellsAutodetected((*reinterpret_cast< const FlightBatteryState_NbCellsAutodetected::Enum(*)>(_a[1]))); break;
        case 28: _t->setNbCellsAutodetected((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 29: _t->emitNotifications(); break;
        case 30: { float _r = _t->getVoltage();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 31: { float _r = _t->getCurrent();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 32: { float _r = _t->getBoardSupplyVoltage();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 33: { float _r = _t->getPeakCurrent();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 34: { float _r = _t->getAvgCurrent();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 35: { float _r = _t->getConsumedEnergy();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 36: { float _r = _t->getEstimatedFlightTime();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 37: { quint8 _r = _t->getNbCells();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 38: { quint8 _r = _t->getNbCellsAutodetected();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightBatteryState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::voltageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::VoltageChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::currentChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::CurrentChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::boardSupplyVoltageChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::BoardSupplyVoltageChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::peakCurrentChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::PeakCurrentChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::avgCurrentChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::AvgCurrentChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::consumedEnergyChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::ConsumedEnergyChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::estimatedFlightTimeChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::EstimatedFlightTimeChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::nbCellsChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::NbCellsChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(const FlightBatteryState_NbCellsAutodetected::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::nbCellsAutodetectedChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (FlightBatteryState::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightBatteryState::NbCellsAutodetectedChanged)) {
                *result = 17;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FlightBatteryState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->voltage(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->current(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->boardSupplyVoltage(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->peakCurrent(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->avgCurrent(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->consumedEnergy(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->estimatedFlightTime(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->nbCells(); break;
        case 8: *reinterpret_cast< FlightBatteryState_NbCellsAutodetected::Enum*>(_v) = _t->nbCellsAutodetected(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getVoltage(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getCurrent(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getBoardSupplyVoltage(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->getPeakCurrent(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getAvgCurrent(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getConsumedEnergy(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getEstimatedFlightTime(); break;
        case 16: *reinterpret_cast< quint8*>(_v) = _t->getNbCells(); break;
        case 17: *reinterpret_cast< quint8*>(_v) = _t->getNbCellsAutodetected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FlightBatteryState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVoltage(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setCurrent(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setBoardSupplyVoltage(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setPeakCurrent(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setAvgCurrent(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setConsumedEnergy(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setEstimatedFlightTime(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setNbCells(*reinterpret_cast< quint16*>(_v)); break;
        case 8: _t->setNbCellsAutodetected(*reinterpret_cast< FlightBatteryState_NbCellsAutodetected::Enum*>(_v)); break;
        case 9: _t->setVoltage(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setCurrent(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setBoardSupplyVoltage(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setPeakCurrent(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setAvgCurrent(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setConsumedEnergy(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setEstimatedFlightTime(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setNbCells(*reinterpret_cast< quint8*>(_v)); break;
        case 17: _t->setNbCellsAutodetected(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_FlightBatteryState[] = {
        &FlightBatteryState_NbCellsAutodetected::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject FlightBatteryState::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_FlightBatteryState.data,
    qt_meta_data_FlightBatteryState,
    qt_static_metacall,
    qt_meta_extradata_FlightBatteryState,
    nullptr
} };


const QMetaObject *FlightBatteryState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightBatteryState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightBatteryState.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int FlightBatteryState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FlightBatteryState::voltageChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlightBatteryState::VoltageChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FlightBatteryState::currentChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FlightBatteryState::CurrentChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FlightBatteryState::boardSupplyVoltageChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FlightBatteryState::BoardSupplyVoltageChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FlightBatteryState::peakCurrentChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FlightBatteryState::PeakCurrentChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FlightBatteryState::avgCurrentChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FlightBatteryState::AvgCurrentChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FlightBatteryState::consumedEnergyChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FlightBatteryState::ConsumedEnergyChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FlightBatteryState::estimatedFlightTimeChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FlightBatteryState::EstimatedFlightTimeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void FlightBatteryState::nbCellsChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void FlightBatteryState::NbCellsChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void FlightBatteryState::nbCellsAutodetectedChanged(const FlightBatteryState_NbCellsAutodetected::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void FlightBatteryState::NbCellsAutodetectedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
