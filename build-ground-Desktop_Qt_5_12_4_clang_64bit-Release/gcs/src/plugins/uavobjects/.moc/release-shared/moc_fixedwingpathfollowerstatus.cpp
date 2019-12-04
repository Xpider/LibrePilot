/****************************************************************************
** Meta object code from reading C++ file 'fixedwingpathfollowerstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fixedwingpathfollowerstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fixedwingpathfollowerstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FixedWingPathFollowerStatusConstants_t {
    QByteArrayData data[2];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FixedWingPathFollowerStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FixedWingPathFollowerStatusConstants_t qt_meta_stringdata_FixedWingPathFollowerStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 36), // "FixedWingPathFollowerStatusCo..."
QT_MOC_LITERAL(1, 37, 4) // "Enum"

    },
    "FixedWingPathFollowerStatusConstants\0"
    "Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FixedWingPathFollowerStatusConstants[] = {

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

void FixedWingPathFollowerStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FixedWingPathFollowerStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FixedWingPathFollowerStatusConstants.data,
    qt_meta_data_FixedWingPathFollowerStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FixedWingPathFollowerStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FixedWingPathFollowerStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FixedWingPathFollowerStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FixedWingPathFollowerStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FixedWingPathFollowerStatus_t {
    QByteArrayData data[158];
    char stringdata0[2769];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FixedWingPathFollowerStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FixedWingPathFollowerStatus_t qt_meta_stringdata_FixedWingPathFollowerStatus = {
    {
QT_MOC_LITERAL(0, 0, 27), // "FixedWingPathFollowerStatus"
QT_MOC_LITERAL(1, 28, 12), // "errorChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "index"
QT_MOC_LITERAL(4, 48, 5), // "value"
QT_MOC_LITERAL(5, 54, 12), // "ErrorChanged"
QT_MOC_LITERAL(6, 67, 18), // "errorCourseChanged"
QT_MOC_LITERAL(7, 86, 19), // "Error_CourseChanged"
QT_MOC_LITERAL(8, 106, 17), // "errorSpeedChanged"
QT_MOC_LITERAL(9, 124, 18), // "Error_SpeedChanged"
QT_MOC_LITERAL(10, 143, 17), // "errorPowerChanged"
QT_MOC_LITERAL(11, 161, 18), // "Error_PowerChanged"
QT_MOC_LITERAL(12, 180, 15), // "errorIntChanged"
QT_MOC_LITERAL(13, 196, 15), // "ErrorIntChanged"
QT_MOC_LITERAL(14, 212, 21), // "errorIntCourseChanged"
QT_MOC_LITERAL(15, 234, 22), // "ErrorInt_CourseChanged"
QT_MOC_LITERAL(16, 257, 20), // "errorIntSpeedChanged"
QT_MOC_LITERAL(17, 278, 21), // "ErrorInt_SpeedChanged"
QT_MOC_LITERAL(18, 300, 20), // "errorIntPowerChanged"
QT_MOC_LITERAL(19, 321, 21), // "ErrorInt_PowerChanged"
QT_MOC_LITERAL(20, 343, 14), // "commandChanged"
QT_MOC_LITERAL(21, 358, 14), // "CommandChanged"
QT_MOC_LITERAL(22, 373, 20), // "commandCourseChanged"
QT_MOC_LITERAL(23, 394, 21), // "Command_CourseChanged"
QT_MOC_LITERAL(24, 416, 19), // "commandSpeedChanged"
QT_MOC_LITERAL(25, 436, 20), // "Command_SpeedChanged"
QT_MOC_LITERAL(26, 457, 19), // "commandPowerChanged"
QT_MOC_LITERAL(27, 477, 20), // "Command_PowerChanged"
QT_MOC_LITERAL(28, 498, 13), // "errorsChanged"
QT_MOC_LITERAL(29, 512, 13), // "ErrorsChanged"
QT_MOC_LITERAL(30, 526, 17), // "errorsWindChanged"
QT_MOC_LITERAL(31, 544, 18), // "Errors_WindChanged"
QT_MOC_LITERAL(32, 563, 23), // "errorsStallspeedChanged"
QT_MOC_LITERAL(33, 587, 24), // "Errors_StallspeedChanged"
QT_MOC_LITERAL(34, 612, 21), // "errorsLowspeedChanged"
QT_MOC_LITERAL(35, 634, 22), // "Errors_LowspeedChanged"
QT_MOC_LITERAL(36, 657, 22), // "errorsHighspeedChanged"
QT_MOC_LITERAL(37, 680, 23), // "Errors_HighspeedChanged"
QT_MOC_LITERAL(38, 704, 22), // "errorsOverspeedChanged"
QT_MOC_LITERAL(39, 727, 23), // "Errors_OverspeedChanged"
QT_MOC_LITERAL(40, 751, 21), // "errorsLowpowerChanged"
QT_MOC_LITERAL(41, 773, 22), // "Errors_LowpowerChanged"
QT_MOC_LITERAL(42, 796, 22), // "errorsHighpowerChanged"
QT_MOC_LITERAL(43, 819, 23), // "Errors_HighpowerChanged"
QT_MOC_LITERAL(44, 843, 24), // "errorsRollcontrolChanged"
QT_MOC_LITERAL(45, 868, 25), // "Errors_RollcontrolChanged"
QT_MOC_LITERAL(46, 894, 25), // "errorsPitchcontrolChanged"
QT_MOC_LITERAL(47, 920, 26), // "Errors_PitchcontrolChanged"
QT_MOC_LITERAL(48, 947, 27), // "errorsAirspeedSensorChanged"
QT_MOC_LITERAL(49, 975, 28), // "Errors_AirspeedSensorChanged"
QT_MOC_LITERAL(50, 1004, 8), // "setError"
QT_MOC_LITERAL(51, 1013, 14), // "setErrorCourse"
QT_MOC_LITERAL(52, 1028, 15), // "setError_Course"
QT_MOC_LITERAL(53, 1044, 13), // "setErrorSpeed"
QT_MOC_LITERAL(54, 1058, 14), // "setError_Speed"
QT_MOC_LITERAL(55, 1073, 13), // "setErrorPower"
QT_MOC_LITERAL(56, 1087, 14), // "setError_Power"
QT_MOC_LITERAL(57, 1102, 11), // "setErrorInt"
QT_MOC_LITERAL(58, 1114, 17), // "setErrorIntCourse"
QT_MOC_LITERAL(59, 1132, 18), // "setErrorInt_Course"
QT_MOC_LITERAL(60, 1151, 16), // "setErrorIntSpeed"
QT_MOC_LITERAL(61, 1168, 17), // "setErrorInt_Speed"
QT_MOC_LITERAL(62, 1186, 16), // "setErrorIntPower"
QT_MOC_LITERAL(63, 1203, 17), // "setErrorInt_Power"
QT_MOC_LITERAL(64, 1221, 10), // "setCommand"
QT_MOC_LITERAL(65, 1232, 16), // "setCommandCourse"
QT_MOC_LITERAL(66, 1249, 17), // "setCommand_Course"
QT_MOC_LITERAL(67, 1267, 15), // "setCommandSpeed"
QT_MOC_LITERAL(68, 1283, 16), // "setCommand_Speed"
QT_MOC_LITERAL(69, 1300, 15), // "setCommandPower"
QT_MOC_LITERAL(70, 1316, 16), // "setCommand_Power"
QT_MOC_LITERAL(71, 1333, 9), // "setErrors"
QT_MOC_LITERAL(72, 1343, 13), // "setErrorsWind"
QT_MOC_LITERAL(73, 1357, 14), // "setErrors_Wind"
QT_MOC_LITERAL(74, 1372, 19), // "setErrorsStallspeed"
QT_MOC_LITERAL(75, 1392, 20), // "setErrors_Stallspeed"
QT_MOC_LITERAL(76, 1413, 17), // "setErrorsLowspeed"
QT_MOC_LITERAL(77, 1431, 18), // "setErrors_Lowspeed"
QT_MOC_LITERAL(78, 1450, 18), // "setErrorsHighspeed"
QT_MOC_LITERAL(79, 1469, 19), // "setErrors_Highspeed"
QT_MOC_LITERAL(80, 1489, 18), // "setErrorsOverspeed"
QT_MOC_LITERAL(81, 1508, 19), // "setErrors_Overspeed"
QT_MOC_LITERAL(82, 1528, 17), // "setErrorsLowpower"
QT_MOC_LITERAL(83, 1546, 18), // "setErrors_Lowpower"
QT_MOC_LITERAL(84, 1565, 18), // "setErrorsHighpower"
QT_MOC_LITERAL(85, 1584, 19), // "setErrors_Highpower"
QT_MOC_LITERAL(86, 1604, 20), // "setErrorsRollcontrol"
QT_MOC_LITERAL(87, 1625, 21), // "setErrors_Rollcontrol"
QT_MOC_LITERAL(88, 1647, 21), // "setErrorsPitchcontrol"
QT_MOC_LITERAL(89, 1669, 22), // "setErrors_Pitchcontrol"
QT_MOC_LITERAL(90, 1692, 23), // "setErrorsAirspeedSensor"
QT_MOC_LITERAL(91, 1716, 24), // "setErrors_AirspeedSensor"
QT_MOC_LITERAL(92, 1741, 17), // "emitNotifications"
QT_MOC_LITERAL(93, 1759, 5), // "error"
QT_MOC_LITERAL(94, 1765, 8), // "getError"
QT_MOC_LITERAL(95, 1774, 15), // "getError_Course"
QT_MOC_LITERAL(96, 1790, 14), // "getError_Speed"
QT_MOC_LITERAL(97, 1805, 14), // "getError_Power"
QT_MOC_LITERAL(98, 1820, 8), // "errorInt"
QT_MOC_LITERAL(99, 1829, 11), // "getErrorInt"
QT_MOC_LITERAL(100, 1841, 18), // "getErrorInt_Course"
QT_MOC_LITERAL(101, 1860, 17), // "getErrorInt_Speed"
QT_MOC_LITERAL(102, 1878, 17), // "getErrorInt_Power"
QT_MOC_LITERAL(103, 1896, 7), // "command"
QT_MOC_LITERAL(104, 1904, 10), // "getCommand"
QT_MOC_LITERAL(105, 1915, 17), // "getCommand_Course"
QT_MOC_LITERAL(106, 1933, 16), // "getCommand_Speed"
QT_MOC_LITERAL(107, 1950, 16), // "getCommand_Power"
QT_MOC_LITERAL(108, 1967, 6), // "errors"
QT_MOC_LITERAL(109, 1974, 9), // "getErrors"
QT_MOC_LITERAL(110, 1984, 14), // "getErrors_Wind"
QT_MOC_LITERAL(111, 1999, 20), // "getErrors_Stallspeed"
QT_MOC_LITERAL(112, 2020, 18), // "getErrors_Lowspeed"
QT_MOC_LITERAL(113, 2039, 19), // "getErrors_Highspeed"
QT_MOC_LITERAL(114, 2059, 19), // "getErrors_Overspeed"
QT_MOC_LITERAL(115, 2079, 18), // "getErrors_Lowpower"
QT_MOC_LITERAL(116, 2098, 19), // "getErrors_Highpower"
QT_MOC_LITERAL(117, 2118, 21), // "getErrors_Rollcontrol"
QT_MOC_LITERAL(118, 2140, 22), // "getErrors_Pitchcontrol"
QT_MOC_LITERAL(119, 2163, 24), // "getErrors_AirspeedSensor"
QT_MOC_LITERAL(120, 2188, 11), // "errorCourse"
QT_MOC_LITERAL(121, 2200, 10), // "errorSpeed"
QT_MOC_LITERAL(122, 2211, 10), // "errorPower"
QT_MOC_LITERAL(123, 2222, 14), // "errorIntCourse"
QT_MOC_LITERAL(124, 2237, 13), // "errorIntSpeed"
QT_MOC_LITERAL(125, 2251, 13), // "errorIntPower"
QT_MOC_LITERAL(126, 2265, 13), // "commandCourse"
QT_MOC_LITERAL(127, 2279, 12), // "commandSpeed"
QT_MOC_LITERAL(128, 2292, 12), // "commandPower"
QT_MOC_LITERAL(129, 2305, 10), // "errorsWind"
QT_MOC_LITERAL(130, 2316, 16), // "errorsStallspeed"
QT_MOC_LITERAL(131, 2333, 14), // "errorsLowspeed"
QT_MOC_LITERAL(132, 2348, 15), // "errorsHighspeed"
QT_MOC_LITERAL(133, 2364, 15), // "errorsOverspeed"
QT_MOC_LITERAL(134, 2380, 14), // "errorsLowpower"
QT_MOC_LITERAL(135, 2395, 15), // "errorsHighpower"
QT_MOC_LITERAL(136, 2411, 17), // "errorsRollcontrol"
QT_MOC_LITERAL(137, 2429, 18), // "errorsPitchcontrol"
QT_MOC_LITERAL(138, 2448, 20), // "errorsAirspeedSensor"
QT_MOC_LITERAL(139, 2469, 12), // "Error_Course"
QT_MOC_LITERAL(140, 2482, 11), // "Error_Speed"
QT_MOC_LITERAL(141, 2494, 11), // "Error_Power"
QT_MOC_LITERAL(142, 2506, 15), // "ErrorInt_Course"
QT_MOC_LITERAL(143, 2522, 14), // "ErrorInt_Speed"
QT_MOC_LITERAL(144, 2537, 14), // "ErrorInt_Power"
QT_MOC_LITERAL(145, 2552, 14), // "Command_Course"
QT_MOC_LITERAL(146, 2567, 13), // "Command_Speed"
QT_MOC_LITERAL(147, 2581, 13), // "Command_Power"
QT_MOC_LITERAL(148, 2595, 11), // "Errors_Wind"
QT_MOC_LITERAL(149, 2607, 17), // "Errors_Stallspeed"
QT_MOC_LITERAL(150, 2625, 15), // "Errors_Lowspeed"
QT_MOC_LITERAL(151, 2641, 16), // "Errors_Highspeed"
QT_MOC_LITERAL(152, 2658, 16), // "Errors_Overspeed"
QT_MOC_LITERAL(153, 2675, 15), // "Errors_Lowpower"
QT_MOC_LITERAL(154, 2691, 16), // "Errors_Highpower"
QT_MOC_LITERAL(155, 2708, 18), // "Errors_Rollcontrol"
QT_MOC_LITERAL(156, 2727, 19), // "Errors_Pitchcontrol"
QT_MOC_LITERAL(157, 2747, 21) // "Errors_AirspeedSensor"

    },
    "FixedWingPathFollowerStatus\0errorChanged\0"
    "\0index\0value\0ErrorChanged\0errorCourseChanged\0"
    "Error_CourseChanged\0errorSpeedChanged\0"
    "Error_SpeedChanged\0errorPowerChanged\0"
    "Error_PowerChanged\0errorIntChanged\0"
    "ErrorIntChanged\0errorIntCourseChanged\0"
    "ErrorInt_CourseChanged\0errorIntSpeedChanged\0"
    "ErrorInt_SpeedChanged\0errorIntPowerChanged\0"
    "ErrorInt_PowerChanged\0commandChanged\0"
    "CommandChanged\0commandCourseChanged\0"
    "Command_CourseChanged\0commandSpeedChanged\0"
    "Command_SpeedChanged\0commandPowerChanged\0"
    "Command_PowerChanged\0errorsChanged\0"
    "ErrorsChanged\0errorsWindChanged\0"
    "Errors_WindChanged\0errorsStallspeedChanged\0"
    "Errors_StallspeedChanged\0errorsLowspeedChanged\0"
    "Errors_LowspeedChanged\0errorsHighspeedChanged\0"
    "Errors_HighspeedChanged\0errorsOverspeedChanged\0"
    "Errors_OverspeedChanged\0errorsLowpowerChanged\0"
    "Errors_LowpowerChanged\0errorsHighpowerChanged\0"
    "Errors_HighpowerChanged\0"
    "errorsRollcontrolChanged\0"
    "Errors_RollcontrolChanged\0"
    "errorsPitchcontrolChanged\0"
    "Errors_PitchcontrolChanged\0"
    "errorsAirspeedSensorChanged\0"
    "Errors_AirspeedSensorChanged\0setError\0"
    "setErrorCourse\0setError_Course\0"
    "setErrorSpeed\0setError_Speed\0setErrorPower\0"
    "setError_Power\0setErrorInt\0setErrorIntCourse\0"
    "setErrorInt_Course\0setErrorIntSpeed\0"
    "setErrorInt_Speed\0setErrorIntPower\0"
    "setErrorInt_Power\0setCommand\0"
    "setCommandCourse\0setCommand_Course\0"
    "setCommandSpeed\0setCommand_Speed\0"
    "setCommandPower\0setCommand_Power\0"
    "setErrors\0setErrorsWind\0setErrors_Wind\0"
    "setErrorsStallspeed\0setErrors_Stallspeed\0"
    "setErrorsLowspeed\0setErrors_Lowspeed\0"
    "setErrorsHighspeed\0setErrors_Highspeed\0"
    "setErrorsOverspeed\0setErrors_Overspeed\0"
    "setErrorsLowpower\0setErrors_Lowpower\0"
    "setErrorsHighpower\0setErrors_Highpower\0"
    "setErrorsRollcontrol\0setErrors_Rollcontrol\0"
    "setErrorsPitchcontrol\0setErrors_Pitchcontrol\0"
    "setErrorsAirspeedSensor\0"
    "setErrors_AirspeedSensor\0emitNotifications\0"
    "error\0getError\0getError_Course\0"
    "getError_Speed\0getError_Power\0errorInt\0"
    "getErrorInt\0getErrorInt_Course\0"
    "getErrorInt_Speed\0getErrorInt_Power\0"
    "command\0getCommand\0getCommand_Course\0"
    "getCommand_Speed\0getCommand_Power\0"
    "errors\0getErrors\0getErrors_Wind\0"
    "getErrors_Stallspeed\0getErrors_Lowspeed\0"
    "getErrors_Highspeed\0getErrors_Overspeed\0"
    "getErrors_Lowpower\0getErrors_Highpower\0"
    "getErrors_Rollcontrol\0getErrors_Pitchcontrol\0"
    "getErrors_AirspeedSensor\0errorCourse\0"
    "errorSpeed\0errorPower\0errorIntCourse\0"
    "errorIntSpeed\0errorIntPower\0commandCourse\0"
    "commandSpeed\0commandPower\0errorsWind\0"
    "errorsStallspeed\0errorsLowspeed\0"
    "errorsHighspeed\0errorsOverspeed\0"
    "errorsLowpower\0errorsHighpower\0"
    "errorsRollcontrol\0errorsPitchcontrol\0"
    "errorsAirspeedSensor\0Error_Course\0"
    "Error_Speed\0Error_Power\0ErrorInt_Course\0"
    "ErrorInt_Speed\0ErrorInt_Power\0"
    "Command_Course\0Command_Speed\0Command_Power\0"
    "Errors_Wind\0Errors_Stallspeed\0"
    "Errors_Lowspeed\0Errors_Highspeed\0"
    "Errors_Overspeed\0Errors_Lowpower\0"
    "Errors_Highpower\0Errors_Rollcontrol\0"
    "Errors_Pitchcontrol\0Errors_AirspeedSensor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FixedWingPathFollowerStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     117,   14, // methods
      38,  936, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      46,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  599,    2, 0x06 /* Public */,
       5,    2,  604,    2, 0x06 /* Public */,
       6,    1,  609,    2, 0x06 /* Public */,
       7,    1,  612,    2, 0x06 /* Public */,
       8,    1,  615,    2, 0x06 /* Public */,
       9,    1,  618,    2, 0x06 /* Public */,
      10,    1,  621,    2, 0x06 /* Public */,
      11,    1,  624,    2, 0x06 /* Public */,
      12,    2,  627,    2, 0x06 /* Public */,
      13,    2,  632,    2, 0x06 /* Public */,
      14,    1,  637,    2, 0x06 /* Public */,
      15,    1,  640,    2, 0x06 /* Public */,
      16,    1,  643,    2, 0x06 /* Public */,
      17,    1,  646,    2, 0x06 /* Public */,
      18,    1,  649,    2, 0x06 /* Public */,
      19,    1,  652,    2, 0x06 /* Public */,
      20,    2,  655,    2, 0x06 /* Public */,
      21,    2,  660,    2, 0x06 /* Public */,
      22,    1,  665,    2, 0x06 /* Public */,
      23,    1,  668,    2, 0x06 /* Public */,
      24,    1,  671,    2, 0x06 /* Public */,
      25,    1,  674,    2, 0x06 /* Public */,
      26,    1,  677,    2, 0x06 /* Public */,
      27,    1,  680,    2, 0x06 /* Public */,
      28,    2,  683,    2, 0x06 /* Public */,
      29,    2,  688,    2, 0x06 /* Public */,
      30,    1,  693,    2, 0x06 /* Public */,
      31,    1,  696,    2, 0x06 /* Public */,
      32,    1,  699,    2, 0x06 /* Public */,
      33,    1,  702,    2, 0x06 /* Public */,
      34,    1,  705,    2, 0x06 /* Public */,
      35,    1,  708,    2, 0x06 /* Public */,
      36,    1,  711,    2, 0x06 /* Public */,
      37,    1,  714,    2, 0x06 /* Public */,
      38,    1,  717,    2, 0x06 /* Public */,
      39,    1,  720,    2, 0x06 /* Public */,
      40,    1,  723,    2, 0x06 /* Public */,
      41,    1,  726,    2, 0x06 /* Public */,
      42,    1,  729,    2, 0x06 /* Public */,
      43,    1,  732,    2, 0x06 /* Public */,
      44,    1,  735,    2, 0x06 /* Public */,
      45,    1,  738,    2, 0x06 /* Public */,
      46,    1,  741,    2, 0x06 /* Public */,
      47,    1,  744,    2, 0x06 /* Public */,
      48,    1,  747,    2, 0x06 /* Public */,
      49,    1,  750,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      50,    2,  753,    2, 0x0a /* Public */,
      51,    1,  758,    2, 0x0a /* Public */,
      52,    1,  761,    2, 0x0a /* Public */,
      53,    1,  764,    2, 0x0a /* Public */,
      54,    1,  767,    2, 0x0a /* Public */,
      55,    1,  770,    2, 0x0a /* Public */,
      56,    1,  773,    2, 0x0a /* Public */,
      57,    2,  776,    2, 0x0a /* Public */,
      58,    1,  781,    2, 0x0a /* Public */,
      59,    1,  784,    2, 0x0a /* Public */,
      60,    1,  787,    2, 0x0a /* Public */,
      61,    1,  790,    2, 0x0a /* Public */,
      62,    1,  793,    2, 0x0a /* Public */,
      63,    1,  796,    2, 0x0a /* Public */,
      64,    2,  799,    2, 0x0a /* Public */,
      65,    1,  804,    2, 0x0a /* Public */,
      66,    1,  807,    2, 0x0a /* Public */,
      67,    1,  810,    2, 0x0a /* Public */,
      68,    1,  813,    2, 0x0a /* Public */,
      69,    1,  816,    2, 0x0a /* Public */,
      70,    1,  819,    2, 0x0a /* Public */,
      71,    2,  822,    2, 0x0a /* Public */,
      71,    2,  827,    2, 0x0a /* Public */,
      72,    1,  832,    2, 0x0a /* Public */,
      73,    1,  835,    2, 0x0a /* Public */,
      74,    1,  838,    2, 0x0a /* Public */,
      75,    1,  841,    2, 0x0a /* Public */,
      76,    1,  844,    2, 0x0a /* Public */,
      77,    1,  847,    2, 0x0a /* Public */,
      78,    1,  850,    2, 0x0a /* Public */,
      79,    1,  853,    2, 0x0a /* Public */,
      80,    1,  856,    2, 0x0a /* Public */,
      81,    1,  859,    2, 0x0a /* Public */,
      82,    1,  862,    2, 0x0a /* Public */,
      83,    1,  865,    2, 0x0a /* Public */,
      84,    1,  868,    2, 0x0a /* Public */,
      85,    1,  871,    2, 0x0a /* Public */,
      86,    1,  874,    2, 0x0a /* Public */,
      87,    1,  877,    2, 0x0a /* Public */,
      88,    1,  880,    2, 0x0a /* Public */,
      89,    1,  883,    2, 0x0a /* Public */,
      90,    1,  886,    2, 0x0a /* Public */,
      91,    1,  889,    2, 0x0a /* Public */,
      92,    0,  892,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      93,    1,  893,    2, 0x02 /* Public */,
      94,    1,  896,    2, 0x02 /* Public */,
      95,    0,  899,    2, 0x02 /* Public */,
      96,    0,  900,    2, 0x02 /* Public */,
      97,    0,  901,    2, 0x02 /* Public */,
      98,    1,  902,    2, 0x02 /* Public */,
      99,    1,  905,    2, 0x02 /* Public */,
     100,    0,  908,    2, 0x02 /* Public */,
     101,    0,  909,    2, 0x02 /* Public */,
     102,    0,  910,    2, 0x02 /* Public */,
     103,    1,  911,    2, 0x02 /* Public */,
     104,    1,  914,    2, 0x02 /* Public */,
     105,    0,  917,    2, 0x02 /* Public */,
     106,    0,  918,    2, 0x02 /* Public */,
     107,    0,  919,    2, 0x02 /* Public */,
     108,    1,  920,    2, 0x02 /* Public */,
     109,    1,  923,    2, 0x02 /* Public */,
     110,    0,  926,    2, 0x02 /* Public */,
     111,    0,  927,    2, 0x02 /* Public */,
     112,    0,  928,    2, 0x02 /* Public */,
     113,    0,  929,    2, 0x02 /* Public */,
     114,    0,  930,    2, 0x02 /* Public */,
     115,    0,  931,    2, 0x02 /* Public */,
     116,    0,  932,    2, 0x02 /* Public */,
     117,    0,  933,    2, 0x02 /* Public */,
     118,    0,  934,    2, 0x02 /* Public */,
     119,    0,  935,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
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

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
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
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
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

 // properties: name, type, flags
     120, QMetaType::Float, 0x00495103,
     121, QMetaType::Float, 0x00495103,
     122, QMetaType::Float, 0x00495103,
     123, QMetaType::Float, 0x00495103,
     124, QMetaType::Float, 0x00495103,
     125, QMetaType::Float, 0x00495103,
     126, QMetaType::Float, 0x00495103,
     127, QMetaType::Float, 0x00495103,
     128, QMetaType::Float, 0x00495103,
     129, QMetaType::UShort, 0x00495103,
     130, QMetaType::UShort, 0x00495103,
     131, QMetaType::UShort, 0x00495103,
     132, QMetaType::UShort, 0x00495103,
     133, QMetaType::UShort, 0x00495103,
     134, QMetaType::UShort, 0x00495103,
     135, QMetaType::UShort, 0x00495103,
     136, QMetaType::UShort, 0x00495103,
     137, QMetaType::UShort, 0x00495103,
     138, QMetaType::UShort, 0x00495103,
     139, QMetaType::Float, 0x00495103,
     140, QMetaType::Float, 0x00495103,
     141, QMetaType::Float, 0x00495103,
     142, QMetaType::Float, 0x00495103,
     143, QMetaType::Float, 0x00495103,
     144, QMetaType::Float, 0x00495103,
     145, QMetaType::Float, 0x00495103,
     146, QMetaType::Float, 0x00495103,
     147, QMetaType::Float, 0x00495103,
     148, QMetaType::UChar, 0x00495103,
     149, QMetaType::UChar, 0x00495103,
     150, QMetaType::UChar, 0x00495103,
     151, QMetaType::UChar, 0x00495103,
     152, QMetaType::UChar, 0x00495103,
     153, QMetaType::UChar, 0x00495103,
     154, QMetaType::UChar, 0x00495103,
     155, QMetaType::UChar, 0x00495103,
     156, QMetaType::UChar, 0x00495103,
     157, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
      10,
      12,
      14,
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
       3,
       5,
       7,
      11,
      13,
      15,
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

       0        // eod
};

void FixedWingPathFollowerStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FixedWingPathFollowerStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->ErrorChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->errorCourseChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->Error_CourseChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->errorSpeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->Error_SpeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->errorPowerChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->Error_PowerChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->errorIntChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 9: _t->ErrorIntChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->errorIntCourseChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->ErrorInt_CourseChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->errorIntSpeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->ErrorInt_SpeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->errorIntPowerChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->ErrorInt_PowerChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->commandChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 17: _t->CommandChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 18: _t->commandCourseChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->Command_CourseChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->commandSpeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->Command_SpeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->commandPowerChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->Command_PowerChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->errorsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 25: _t->ErrorsChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 26: _t->errorsWindChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 27: _t->Errors_WindChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->errorsStallspeedChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 29: _t->Errors_StallspeedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->errorsLowspeedChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 31: _t->Errors_LowspeedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->errorsHighspeedChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 33: _t->Errors_HighspeedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->errorsOverspeedChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 35: _t->Errors_OverspeedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->errorsLowpowerChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 37: _t->Errors_LowpowerChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->errorsHighpowerChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 39: _t->Errors_HighpowerChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->errorsRollcontrolChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 41: _t->Errors_RollcontrolChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->errorsPitchcontrolChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 43: _t->Errors_PitchcontrolChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->errorsAirspeedSensorChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 45: _t->Errors_AirspeedSensorChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->setError((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 47: _t->setErrorCourse((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 48: _t->setError_Course((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 49: _t->setErrorSpeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 50: _t->setError_Speed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 51: _t->setErrorPower((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 52: _t->setError_Power((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 53: _t->setErrorInt((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 54: _t->setErrorIntCourse((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 55: _t->setErrorInt_Course((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 56: _t->setErrorIntSpeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 57: _t->setErrorInt_Speed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 58: _t->setErrorIntPower((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 59: _t->setErrorInt_Power((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 60: _t->setCommand((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 61: _t->setCommandCourse((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 62: _t->setCommand_Course((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 63: _t->setCommandSpeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 64: _t->setCommand_Speed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 65: _t->setCommandPower((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 66: _t->setCommand_Power((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 67: _t->setErrors((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 68: _t->setErrors((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 69: _t->setErrorsWind((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 70: _t->setErrors_Wind((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 71: _t->setErrorsStallspeed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 72: _t->setErrors_Stallspeed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 73: _t->setErrorsLowspeed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 74: _t->setErrors_Lowspeed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 75: _t->setErrorsHighspeed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 76: _t->setErrors_Highspeed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 77: _t->setErrorsOverspeed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 78: _t->setErrors_Overspeed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 79: _t->setErrorsLowpower((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 80: _t->setErrors_Lowpower((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 81: _t->setErrorsHighpower((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 82: _t->setErrors_Highpower((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 83: _t->setErrorsRollcontrol((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 84: _t->setErrors_Rollcontrol((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 85: _t->setErrorsPitchcontrol((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 86: _t->setErrors_Pitchcontrol((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 87: _t->setErrorsAirspeedSensor((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 88: _t->setErrors_AirspeedSensor((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 89: _t->emitNotifications(); break;
        case 90: { float _r = _t->error((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 91: { float _r = _t->getError((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 92: { float _r = _t->getError_Course();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 93: { float _r = _t->getError_Speed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 94: { float _r = _t->getError_Power();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 95: { float _r = _t->errorInt((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 96: { float _r = _t->getErrorInt((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 97: { float _r = _t->getErrorInt_Course();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 98: { float _r = _t->getErrorInt_Speed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 99: { float _r = _t->getErrorInt_Power();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 100: { float _r = _t->command((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 101: { float _r = _t->getCommand((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 102: { float _r = _t->getCommand_Course();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 103: { float _r = _t->getCommand_Speed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 104: { float _r = _t->getCommand_Power();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 105: { quint16 _r = _t->errors((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 106: { quint8 _r = _t->getErrors((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 107: { quint8 _r = _t->getErrors_Wind();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 108: { quint8 _r = _t->getErrors_Stallspeed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 109: { quint8 _r = _t->getErrors_Lowspeed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 110: { quint8 _r = _t->getErrors_Highspeed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 111: { quint8 _r = _t->getErrors_Overspeed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 112: { quint8 _r = _t->getErrors_Lowpower();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 113: { quint8 _r = _t->getErrors_Highpower();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 114: { quint8 _r = _t->getErrors_Rollcontrol();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 115: { quint8 _r = _t->getErrors_Pitchcontrol();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 116: { quint8 _r = _t->getErrors_AirspeedSensor();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::ErrorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorCourseChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Error_CourseChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorSpeedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Error_SpeedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorPowerChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Error_PowerChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorIntChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::ErrorIntChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorIntCourseChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::ErrorInt_CourseChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorIntSpeedChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::ErrorInt_SpeedChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorIntPowerChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::ErrorInt_PowerChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::commandChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::CommandChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::commandCourseChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Command_CourseChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::commandSpeedChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Command_SpeedChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::commandPowerChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Command_PowerChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorsChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::ErrorsChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorsWindChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Errors_WindChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorsStallspeedChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Errors_StallspeedChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorsLowspeedChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Errors_LowspeedChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorsHighspeedChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Errors_HighspeedChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorsOverspeedChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Errors_OverspeedChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorsLowpowerChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Errors_LowpowerChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorsHighpowerChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Errors_HighpowerChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorsRollcontrolChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Errors_RollcontrolChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorsPitchcontrolChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Errors_PitchcontrolChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::errorsAirspeedSensorChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (FixedWingPathFollowerStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixedWingPathFollowerStatus::Errors_AirspeedSensorChanged)) {
                *result = 45;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FixedWingPathFollowerStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->errorCourse(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->errorSpeed(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->errorPower(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->errorIntCourse(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->errorIntSpeed(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->errorIntPower(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->commandCourse(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->commandSpeed(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->commandPower(); break;
        case 9: *reinterpret_cast< quint16*>(_v) = _t->errorsWind(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->errorsStallspeed(); break;
        case 11: *reinterpret_cast< quint16*>(_v) = _t->errorsLowspeed(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->errorsHighspeed(); break;
        case 13: *reinterpret_cast< quint16*>(_v) = _t->errorsOverspeed(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->errorsLowpower(); break;
        case 15: *reinterpret_cast< quint16*>(_v) = _t->errorsHighpower(); break;
        case 16: *reinterpret_cast< quint16*>(_v) = _t->errorsRollcontrol(); break;
        case 17: *reinterpret_cast< quint16*>(_v) = _t->errorsPitchcontrol(); break;
        case 18: *reinterpret_cast< quint16*>(_v) = _t->errorsAirspeedSensor(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getError_Course(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getError_Speed(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getError_Power(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getErrorInt_Course(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getErrorInt_Speed(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getErrorInt_Power(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->getCommand_Course(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->getCommand_Speed(); break;
        case 27: *reinterpret_cast< float*>(_v) = _t->getCommand_Power(); break;
        case 28: *reinterpret_cast< quint8*>(_v) = _t->getErrors_Wind(); break;
        case 29: *reinterpret_cast< quint8*>(_v) = _t->getErrors_Stallspeed(); break;
        case 30: *reinterpret_cast< quint8*>(_v) = _t->getErrors_Lowspeed(); break;
        case 31: *reinterpret_cast< quint8*>(_v) = _t->getErrors_Highspeed(); break;
        case 32: *reinterpret_cast< quint8*>(_v) = _t->getErrors_Overspeed(); break;
        case 33: *reinterpret_cast< quint8*>(_v) = _t->getErrors_Lowpower(); break;
        case 34: *reinterpret_cast< quint8*>(_v) = _t->getErrors_Highpower(); break;
        case 35: *reinterpret_cast< quint8*>(_v) = _t->getErrors_Rollcontrol(); break;
        case 36: *reinterpret_cast< quint8*>(_v) = _t->getErrors_Pitchcontrol(); break;
        case 37: *reinterpret_cast< quint8*>(_v) = _t->getErrors_AirspeedSensor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FixedWingPathFollowerStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setErrorCourse(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setErrorSpeed(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setErrorPower(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setErrorIntCourse(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setErrorIntSpeed(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setErrorIntPower(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setCommandCourse(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setCommandSpeed(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setCommandPower(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setErrorsWind(*reinterpret_cast< quint16*>(_v)); break;
        case 10: _t->setErrorsStallspeed(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setErrorsLowspeed(*reinterpret_cast< quint16*>(_v)); break;
        case 12: _t->setErrorsHighspeed(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setErrorsOverspeed(*reinterpret_cast< quint16*>(_v)); break;
        case 14: _t->setErrorsLowpower(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setErrorsHighpower(*reinterpret_cast< quint16*>(_v)); break;
        case 16: _t->setErrorsRollcontrol(*reinterpret_cast< quint16*>(_v)); break;
        case 17: _t->setErrorsPitchcontrol(*reinterpret_cast< quint16*>(_v)); break;
        case 18: _t->setErrorsAirspeedSensor(*reinterpret_cast< quint16*>(_v)); break;
        case 19: _t->setError_Course(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setError_Speed(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setError_Power(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setErrorInt_Course(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setErrorInt_Speed(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setErrorInt_Power(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setCommand_Course(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setCommand_Speed(*reinterpret_cast< float*>(_v)); break;
        case 27: _t->setCommand_Power(*reinterpret_cast< float*>(_v)); break;
        case 28: _t->setErrors_Wind(*reinterpret_cast< quint8*>(_v)); break;
        case 29: _t->setErrors_Stallspeed(*reinterpret_cast< quint8*>(_v)); break;
        case 30: _t->setErrors_Lowspeed(*reinterpret_cast< quint8*>(_v)); break;
        case 31: _t->setErrors_Highspeed(*reinterpret_cast< quint8*>(_v)); break;
        case 32: _t->setErrors_Overspeed(*reinterpret_cast< quint8*>(_v)); break;
        case 33: _t->setErrors_Lowpower(*reinterpret_cast< quint8*>(_v)); break;
        case 34: _t->setErrors_Highpower(*reinterpret_cast< quint8*>(_v)); break;
        case 35: _t->setErrors_Rollcontrol(*reinterpret_cast< quint8*>(_v)); break;
        case 36: _t->setErrors_Pitchcontrol(*reinterpret_cast< quint8*>(_v)); break;
        case 37: _t->setErrors_AirspeedSensor(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FixedWingPathFollowerStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_FixedWingPathFollowerStatus.data,
    qt_meta_data_FixedWingPathFollowerStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FixedWingPathFollowerStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FixedWingPathFollowerStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FixedWingPathFollowerStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int FixedWingPathFollowerStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 117)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 117;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 117)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 117;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 38;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 38;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 38;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 38;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 38;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FixedWingPathFollowerStatus::errorChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FixedWingPathFollowerStatus::ErrorChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FixedWingPathFollowerStatus::errorCourseChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FixedWingPathFollowerStatus::Error_CourseChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FixedWingPathFollowerStatus::errorSpeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FixedWingPathFollowerStatus::Error_SpeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FixedWingPathFollowerStatus::errorPowerChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FixedWingPathFollowerStatus::Error_PowerChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FixedWingPathFollowerStatus::errorIntChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FixedWingPathFollowerStatus::ErrorIntChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FixedWingPathFollowerStatus::errorIntCourseChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FixedWingPathFollowerStatus::ErrorInt_CourseChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FixedWingPathFollowerStatus::errorIntSpeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FixedWingPathFollowerStatus::ErrorInt_SpeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void FixedWingPathFollowerStatus::errorIntPowerChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void FixedWingPathFollowerStatus::ErrorInt_PowerChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void FixedWingPathFollowerStatus::commandChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void FixedWingPathFollowerStatus::CommandChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void FixedWingPathFollowerStatus::commandCourseChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void FixedWingPathFollowerStatus::Command_CourseChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void FixedWingPathFollowerStatus::commandSpeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void FixedWingPathFollowerStatus::Command_SpeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void FixedWingPathFollowerStatus::commandPowerChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void FixedWingPathFollowerStatus::Command_PowerChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void FixedWingPathFollowerStatus::errorsChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void FixedWingPathFollowerStatus::ErrorsChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void FixedWingPathFollowerStatus::errorsWindChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void FixedWingPathFollowerStatus::Errors_WindChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void FixedWingPathFollowerStatus::errorsStallspeedChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void FixedWingPathFollowerStatus::Errors_StallspeedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void FixedWingPathFollowerStatus::errorsLowspeedChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void FixedWingPathFollowerStatus::Errors_LowspeedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void FixedWingPathFollowerStatus::errorsHighspeedChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void FixedWingPathFollowerStatus::Errors_HighspeedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void FixedWingPathFollowerStatus::errorsOverspeedChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void FixedWingPathFollowerStatus::Errors_OverspeedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void FixedWingPathFollowerStatus::errorsLowpowerChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void FixedWingPathFollowerStatus::Errors_LowpowerChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void FixedWingPathFollowerStatus::errorsHighpowerChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void FixedWingPathFollowerStatus::Errors_HighpowerChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void FixedWingPathFollowerStatus::errorsRollcontrolChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void FixedWingPathFollowerStatus::Errors_RollcontrolChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void FixedWingPathFollowerStatus::errorsPitchcontrolChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void FixedWingPathFollowerStatus::Errors_PitchcontrolChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void FixedWingPathFollowerStatus::errorsAirspeedSensorChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void FixedWingPathFollowerStatus::Errors_AirspeedSensorChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
