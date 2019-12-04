/****************************************************************************
** Meta object code from reading C++ file 'cameracontrolactivity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cameracontrolactivity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cameracontrolactivity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraControlActivityConstants_t {
    QByteArrayData data[4];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraControlActivityConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraControlActivityConstants_t qt_meta_stringdata_CameraControlActivityConstants = {
    {
QT_MOC_LITERAL(0, 0, 30), // "CameraControlActivityConstants"
QT_MOC_LITERAL(1, 31, 4), // "Enum"
QT_MOC_LITERAL(2, 36, 13), // "ActivityCount"
QT_MOC_LITERAL(3, 50, 11) // "ReasonCount"

    },
    "CameraControlActivityConstants\0Enum\0"
    "ActivityCount\0ReasonCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraControlActivityConstants[] = {

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
       2, uint(CameraControlActivityConstants::ActivityCount),
       3, uint(CameraControlActivityConstants::ReasonCount),

       0        // eod
};

void CameraControlActivityConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraControlActivityConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraControlActivityConstants.data,
    qt_meta_data_CameraControlActivityConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraControlActivityConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraControlActivityConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraControlActivityConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraControlActivityConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraControlActivity_Activity_t {
    QByteArrayData data[6];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraControlActivity_Activity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraControlActivity_Activity_t qt_meta_stringdata_CameraControlActivity_Activity = {
    {
QT_MOC_LITERAL(0, 0, 30), // "CameraControlActivity_Activity"
QT_MOC_LITERAL(1, 31, 4), // "Enum"
QT_MOC_LITERAL(2, 36, 4), // "Idle"
QT_MOC_LITERAL(3, 41, 14), // "TriggerPicture"
QT_MOC_LITERAL(4, 56, 10), // "StartVideo"
QT_MOC_LITERAL(5, 67, 9) // "StopVideo"

    },
    "CameraControlActivity_Activity\0Enum\0"
    "Idle\0TriggerPicture\0StartVideo\0StopVideo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraControlActivity_Activity[] = {

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
       2, uint(CameraControlActivity_Activity::Idle),
       3, uint(CameraControlActivity_Activity::TriggerPicture),
       4, uint(CameraControlActivity_Activity::StartVideo),
       5, uint(CameraControlActivity_Activity::StopVideo),

       0        // eod
};

void CameraControlActivity_Activity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraControlActivity_Activity::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraControlActivity_Activity.data,
    qt_meta_data_CameraControlActivity_Activity,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraControlActivity_Activity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraControlActivity_Activity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraControlActivity_Activity.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraControlActivity_Activity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraControlActivity_Reason_t {
    QByteArrayData data[5];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraControlActivity_Reason_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraControlActivity_Reason_t qt_meta_stringdata_CameraControlActivity_Reason = {
    {
QT_MOC_LITERAL(0, 0, 28), // "CameraControlActivity_Reason"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 6), // "Manual"
QT_MOC_LITERAL(3, 41, 12), // "AutoDistance"
QT_MOC_LITERAL(4, 54, 8) // "AutoTime"

    },
    "CameraControlActivity_Reason\0Enum\0"
    "Manual\0AutoDistance\0AutoTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraControlActivity_Reason[] = {

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
       2, uint(CameraControlActivity_Reason::Manual),
       3, uint(CameraControlActivity_Reason::AutoDistance),
       4, uint(CameraControlActivity_Reason::AutoTime),

       0        // eod
};

void CameraControlActivity_Reason::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraControlActivity_Reason::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraControlActivity_Reason.data,
    qt_meta_data_CameraControlActivity_Reason,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraControlActivity_Reason::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraControlActivity_Reason::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraControlActivity_Reason.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraControlActivity_Reason::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraControlActivity_t {
    QByteArrayData data[108];
    char stringdata0[1485];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraControlActivity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraControlActivity_t qt_meta_stringdata_CameraControlActivity = {
    {
QT_MOC_LITERAL(0, 0, 21), // "CameraControlActivity"
QT_MOC_LITERAL(1, 22, 15), // "latitudeChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "value"
QT_MOC_LITERAL(4, 45, 15), // "LatitudeChanged"
QT_MOC_LITERAL(5, 61, 16), // "longitudeChanged"
QT_MOC_LITERAL(6, 78, 16), // "LongitudeChanged"
QT_MOC_LITERAL(7, 95, 15), // "altitudeChanged"
QT_MOC_LITERAL(8, 111, 15), // "AltitudeChanged"
QT_MOC_LITERAL(9, 127, 11), // "rollChanged"
QT_MOC_LITERAL(10, 139, 11), // "RollChanged"
QT_MOC_LITERAL(11, 151, 12), // "pitchChanged"
QT_MOC_LITERAL(12, 164, 12), // "PitchChanged"
QT_MOC_LITERAL(13, 177, 10), // "yawChanged"
QT_MOC_LITERAL(14, 188, 10), // "YawChanged"
QT_MOC_LITERAL(15, 199, 15), // "systemTSChanged"
QT_MOC_LITERAL(16, 215, 15), // "SystemTSChanged"
QT_MOC_LITERAL(17, 231, 14), // "imageIdChanged"
QT_MOC_LITERAL(18, 246, 14), // "ImageIdChanged"
QT_MOC_LITERAL(19, 261, 18), // "triggerYearChanged"
QT_MOC_LITERAL(20, 280, 18), // "TriggerYearChanged"
QT_MOC_LITERAL(21, 299, 25), // "triggerMillisecondChanged"
QT_MOC_LITERAL(22, 325, 25), // "TriggerMillisecondChanged"
QT_MOC_LITERAL(23, 351, 19), // "triggerMonthChanged"
QT_MOC_LITERAL(24, 371, 19), // "TriggerMonthChanged"
QT_MOC_LITERAL(25, 391, 17), // "triggerDayChanged"
QT_MOC_LITERAL(26, 409, 17), // "TriggerDayChanged"
QT_MOC_LITERAL(27, 427, 18), // "triggerHourChanged"
QT_MOC_LITERAL(28, 446, 18), // "TriggerHourChanged"
QT_MOC_LITERAL(29, 465, 20), // "triggerMinuteChanged"
QT_MOC_LITERAL(30, 486, 20), // "TriggerMinuteChanged"
QT_MOC_LITERAL(31, 507, 20), // "triggerSecondChanged"
QT_MOC_LITERAL(32, 528, 20), // "TriggerSecondChanged"
QT_MOC_LITERAL(33, 549, 15), // "activityChanged"
QT_MOC_LITERAL(34, 565, 36), // "CameraControlActivity_Activit..."
QT_MOC_LITERAL(35, 602, 15), // "ActivityChanged"
QT_MOC_LITERAL(36, 618, 13), // "reasonChanged"
QT_MOC_LITERAL(37, 632, 34), // "CameraControlActivity_Reason:..."
QT_MOC_LITERAL(38, 667, 13), // "ReasonChanged"
QT_MOC_LITERAL(39, 681, 11), // "setLatitude"
QT_MOC_LITERAL(40, 693, 12), // "setLongitude"
QT_MOC_LITERAL(41, 706, 11), // "setAltitude"
QT_MOC_LITERAL(42, 718, 7), // "setRoll"
QT_MOC_LITERAL(43, 726, 8), // "setPitch"
QT_MOC_LITERAL(44, 735, 6), // "setYaw"
QT_MOC_LITERAL(45, 742, 11), // "setSystemTS"
QT_MOC_LITERAL(46, 754, 10), // "setImageId"
QT_MOC_LITERAL(47, 765, 14), // "setTriggerYear"
QT_MOC_LITERAL(48, 780, 21), // "setTriggerMillisecond"
QT_MOC_LITERAL(49, 802, 15), // "setTriggerMonth"
QT_MOC_LITERAL(50, 818, 13), // "setTriggerDay"
QT_MOC_LITERAL(51, 832, 14), // "setTriggerHour"
QT_MOC_LITERAL(52, 847, 16), // "setTriggerMinute"
QT_MOC_LITERAL(53, 864, 16), // "setTriggerSecond"
QT_MOC_LITERAL(54, 881, 11), // "setActivity"
QT_MOC_LITERAL(55, 893, 9), // "setReason"
QT_MOC_LITERAL(56, 903, 17), // "emitNotifications"
QT_MOC_LITERAL(57, 921, 11), // "getLatitude"
QT_MOC_LITERAL(58, 933, 12), // "getLongitude"
QT_MOC_LITERAL(59, 946, 11), // "getAltitude"
QT_MOC_LITERAL(60, 958, 7), // "getRoll"
QT_MOC_LITERAL(61, 966, 8), // "getPitch"
QT_MOC_LITERAL(62, 975, 6), // "getYaw"
QT_MOC_LITERAL(63, 982, 11), // "getSystemTS"
QT_MOC_LITERAL(64, 994, 10), // "getImageId"
QT_MOC_LITERAL(65, 1005, 14), // "getTriggerYear"
QT_MOC_LITERAL(66, 1020, 21), // "getTriggerMillisecond"
QT_MOC_LITERAL(67, 1042, 15), // "getTriggerMonth"
QT_MOC_LITERAL(68, 1058, 13), // "getTriggerDay"
QT_MOC_LITERAL(69, 1072, 14), // "getTriggerHour"
QT_MOC_LITERAL(70, 1087, 16), // "getTriggerMinute"
QT_MOC_LITERAL(71, 1104, 16), // "getTriggerSecond"
QT_MOC_LITERAL(72, 1121, 11), // "getActivity"
QT_MOC_LITERAL(73, 1133, 9), // "getReason"
QT_MOC_LITERAL(74, 1143, 8), // "latitude"
QT_MOC_LITERAL(75, 1152, 9), // "longitude"
QT_MOC_LITERAL(76, 1162, 8), // "altitude"
QT_MOC_LITERAL(77, 1171, 4), // "roll"
QT_MOC_LITERAL(78, 1176, 5), // "pitch"
QT_MOC_LITERAL(79, 1182, 3), // "yaw"
QT_MOC_LITERAL(80, 1186, 8), // "systemTS"
QT_MOC_LITERAL(81, 1195, 7), // "imageId"
QT_MOC_LITERAL(82, 1203, 11), // "triggerYear"
QT_MOC_LITERAL(83, 1215, 18), // "triggerMillisecond"
QT_MOC_LITERAL(84, 1234, 12), // "triggerMonth"
QT_MOC_LITERAL(85, 1247, 10), // "triggerDay"
QT_MOC_LITERAL(86, 1258, 11), // "triggerHour"
QT_MOC_LITERAL(87, 1270, 13), // "triggerMinute"
QT_MOC_LITERAL(88, 1284, 13), // "triggerSecond"
QT_MOC_LITERAL(89, 1298, 8), // "activity"
QT_MOC_LITERAL(90, 1307, 6), // "reason"
QT_MOC_LITERAL(91, 1314, 8), // "Latitude"
QT_MOC_LITERAL(92, 1323, 9), // "Longitude"
QT_MOC_LITERAL(93, 1333, 8), // "Altitude"
QT_MOC_LITERAL(94, 1342, 4), // "Roll"
QT_MOC_LITERAL(95, 1347, 5), // "Pitch"
QT_MOC_LITERAL(96, 1353, 3), // "Yaw"
QT_MOC_LITERAL(97, 1357, 8), // "SystemTS"
QT_MOC_LITERAL(98, 1366, 7), // "ImageId"
QT_MOC_LITERAL(99, 1374, 11), // "TriggerYear"
QT_MOC_LITERAL(100, 1386, 18), // "TriggerMillisecond"
QT_MOC_LITERAL(101, 1405, 12), // "TriggerMonth"
QT_MOC_LITERAL(102, 1418, 10), // "TriggerDay"
QT_MOC_LITERAL(103, 1429, 11), // "TriggerHour"
QT_MOC_LITERAL(104, 1441, 13), // "TriggerMinute"
QT_MOC_LITERAL(105, 1455, 13), // "TriggerSecond"
QT_MOC_LITERAL(106, 1469, 8), // "Activity"
QT_MOC_LITERAL(107, 1478, 6) // "Reason"

    },
    "CameraControlActivity\0latitudeChanged\0"
    "\0value\0LatitudeChanged\0longitudeChanged\0"
    "LongitudeChanged\0altitudeChanged\0"
    "AltitudeChanged\0rollChanged\0RollChanged\0"
    "pitchChanged\0PitchChanged\0yawChanged\0"
    "YawChanged\0systemTSChanged\0SystemTSChanged\0"
    "imageIdChanged\0ImageIdChanged\0"
    "triggerYearChanged\0TriggerYearChanged\0"
    "triggerMillisecondChanged\0"
    "TriggerMillisecondChanged\0triggerMonthChanged\0"
    "TriggerMonthChanged\0triggerDayChanged\0"
    "TriggerDayChanged\0triggerHourChanged\0"
    "TriggerHourChanged\0triggerMinuteChanged\0"
    "TriggerMinuteChanged\0triggerSecondChanged\0"
    "TriggerSecondChanged\0activityChanged\0"
    "CameraControlActivity_Activity::Enum\0"
    "ActivityChanged\0reasonChanged\0"
    "CameraControlActivity_Reason::Enum\0"
    "ReasonChanged\0setLatitude\0setLongitude\0"
    "setAltitude\0setRoll\0setPitch\0setYaw\0"
    "setSystemTS\0setImageId\0setTriggerYear\0"
    "setTriggerMillisecond\0setTriggerMonth\0"
    "setTriggerDay\0setTriggerHour\0"
    "setTriggerMinute\0setTriggerSecond\0"
    "setActivity\0setReason\0emitNotifications\0"
    "getLatitude\0getLongitude\0getAltitude\0"
    "getRoll\0getPitch\0getYaw\0getSystemTS\0"
    "getImageId\0getTriggerYear\0"
    "getTriggerMillisecond\0getTriggerMonth\0"
    "getTriggerDay\0getTriggerHour\0"
    "getTriggerMinute\0getTriggerSecond\0"
    "getActivity\0getReason\0latitude\0longitude\0"
    "altitude\0roll\0pitch\0yaw\0systemTS\0"
    "imageId\0triggerYear\0triggerMillisecond\0"
    "triggerMonth\0triggerDay\0triggerHour\0"
    "triggerMinute\0triggerSecond\0activity\0"
    "reason\0Latitude\0Longitude\0Altitude\0"
    "Roll\0Pitch\0Yaw\0SystemTS\0ImageId\0"
    "TriggerYear\0TriggerMillisecond\0"
    "TriggerMonth\0TriggerDay\0TriggerHour\0"
    "TriggerMinute\0TriggerSecond\0Activity\0"
    "Reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraControlActivity[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      76,   14, // methods
      34,  586, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      34,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  394,    2, 0x06 /* Public */,
       4,    1,  397,    2, 0x06 /* Public */,
       5,    1,  400,    2, 0x06 /* Public */,
       6,    1,  403,    2, 0x06 /* Public */,
       7,    1,  406,    2, 0x06 /* Public */,
       8,    1,  409,    2, 0x06 /* Public */,
       9,    1,  412,    2, 0x06 /* Public */,
      10,    1,  415,    2, 0x06 /* Public */,
      11,    1,  418,    2, 0x06 /* Public */,
      12,    1,  421,    2, 0x06 /* Public */,
      13,    1,  424,    2, 0x06 /* Public */,
      14,    1,  427,    2, 0x06 /* Public */,
      15,    1,  430,    2, 0x06 /* Public */,
      16,    1,  433,    2, 0x06 /* Public */,
      17,    1,  436,    2, 0x06 /* Public */,
      18,    1,  439,    2, 0x06 /* Public */,
      19,    1,  442,    2, 0x06 /* Public */,
      20,    1,  445,    2, 0x06 /* Public */,
      21,    1,  448,    2, 0x06 /* Public */,
      22,    1,  451,    2, 0x06 /* Public */,
      23,    1,  454,    2, 0x06 /* Public */,
      24,    1,  457,    2, 0x06 /* Public */,
      25,    1,  460,    2, 0x06 /* Public */,
      26,    1,  463,    2, 0x06 /* Public */,
      27,    1,  466,    2, 0x06 /* Public */,
      28,    1,  469,    2, 0x06 /* Public */,
      29,    1,  472,    2, 0x06 /* Public */,
      30,    1,  475,    2, 0x06 /* Public */,
      31,    1,  478,    2, 0x06 /* Public */,
      32,    1,  481,    2, 0x06 /* Public */,
      33,    1,  484,    2, 0x06 /* Public */,
      35,    1,  487,    2, 0x06 /* Public */,
      36,    1,  490,    2, 0x06 /* Public */,
      38,    1,  493,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      39,    1,  496,    2, 0x0a /* Public */,
      40,    1,  499,    2, 0x0a /* Public */,
      41,    1,  502,    2, 0x0a /* Public */,
      42,    1,  505,    2, 0x0a /* Public */,
      43,    1,  508,    2, 0x0a /* Public */,
      44,    1,  511,    2, 0x0a /* Public */,
      45,    1,  514,    2, 0x0a /* Public */,
      46,    1,  517,    2, 0x0a /* Public */,
      47,    1,  520,    2, 0x0a /* Public */,
      48,    1,  523,    2, 0x0a /* Public */,
      49,    1,  526,    2, 0x0a /* Public */,
      49,    1,  529,    2, 0x0a /* Public */,
      50,    1,  532,    2, 0x0a /* Public */,
      50,    1,  535,    2, 0x0a /* Public */,
      51,    1,  538,    2, 0x0a /* Public */,
      51,    1,  541,    2, 0x0a /* Public */,
      52,    1,  544,    2, 0x0a /* Public */,
      52,    1,  547,    2, 0x0a /* Public */,
      53,    1,  550,    2, 0x0a /* Public */,
      53,    1,  553,    2, 0x0a /* Public */,
      54,    1,  556,    2, 0x0a /* Public */,
      54,    1,  559,    2, 0x0a /* Public */,
      55,    1,  562,    2, 0x0a /* Public */,
      55,    1,  565,    2, 0x0a /* Public */,
      56,    0,  568,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      57,    0,  569,    2, 0x02 /* Public */,
      58,    0,  570,    2, 0x02 /* Public */,
      59,    0,  571,    2, 0x02 /* Public */,
      60,    0,  572,    2, 0x02 /* Public */,
      61,    0,  573,    2, 0x02 /* Public */,
      62,    0,  574,    2, 0x02 /* Public */,
      63,    0,  575,    2, 0x02 /* Public */,
      64,    0,  576,    2, 0x02 /* Public */,
      65,    0,  577,    2, 0x02 /* Public */,
      66,    0,  578,    2, 0x02 /* Public */,
      67,    0,  579,    2, 0x02 /* Public */,
      68,    0,  580,    2, 0x02 /* Public */,
      69,    0,  581,    2, 0x02 /* Public */,
      70,    0,  582,    2, 0x02 /* Public */,
      71,    0,  583,    2, 0x02 /* Public */,
      72,    0,  584,    2, 0x02 /* Public */,
      73,    0,  585,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, 0x80000000 | 34,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 37,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::SChar,    3,
    QMetaType::Void, 0x80000000 | 34,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 37,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UInt,
    QMetaType::UShort,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      74, QMetaType::Int, 0x00495103,
      75, QMetaType::Int, 0x00495103,
      76, QMetaType::Float, 0x00495103,
      77, QMetaType::Float, 0x00495103,
      78, QMetaType::Float, 0x00495103,
      79, QMetaType::Float, 0x00495103,
      80, QMetaType::UInt, 0x00495103,
      81, QMetaType::UShort, 0x00495103,
      82, QMetaType::Short, 0x00495103,
      83, QMetaType::Short, 0x00495103,
      84, QMetaType::Short, 0x00495103,
      85, QMetaType::Short, 0x00495103,
      86, QMetaType::Short, 0x00495103,
      87, QMetaType::Short, 0x00495103,
      88, QMetaType::Short, 0x00495103,
      89, 0x80000000 | 34, 0x0049510b,
      90, 0x80000000 | 37, 0x0049510b,
      91, QMetaType::Int, 0x00495103,
      92, QMetaType::Int, 0x00495103,
      93, QMetaType::Float, 0x00495103,
      94, QMetaType::Float, 0x00495103,
      95, QMetaType::Float, 0x00495103,
      96, QMetaType::Float, 0x00495103,
      97, QMetaType::UInt, 0x00495103,
      98, QMetaType::UShort, 0x00495103,
      99, QMetaType::Short, 0x00495103,
     100, QMetaType::Short, 0x00495103,
     101, QMetaType::SChar, 0x00495103,
     102, QMetaType::SChar, 0x00495103,
     103, QMetaType::SChar, 0x00495103,
     104, QMetaType::SChar, 0x00495103,
     105, QMetaType::SChar, 0x00495103,
     106, QMetaType::UChar, 0x00495103,
     107, QMetaType::UChar, 0x00495103,

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
      30,
      32,
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
      31,
      33,

       0        // eod
};

void CameraControlActivity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CameraControlActivity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->latitudeChanged((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 1: _t->LatitudeChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 2: _t->longitudeChanged((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 3: _t->LongitudeChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 4: _t->altitudeChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->AltitudeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->rollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->pitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->yawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->systemTSChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 13: _t->SystemTSChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 14: _t->imageIdChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 15: _t->ImageIdChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 16: _t->triggerYearChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 17: _t->TriggerYearChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 18: _t->triggerMillisecondChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 19: _t->TriggerMillisecondChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 20: _t->triggerMonthChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 21: _t->TriggerMonthChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 22: _t->triggerDayChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 23: _t->TriggerDayChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 24: _t->triggerHourChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 25: _t->TriggerHourChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 26: _t->triggerMinuteChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 27: _t->TriggerMinuteChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 28: _t->triggerSecondChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 29: _t->TriggerSecondChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 30: _t->activityChanged((*reinterpret_cast< const CameraControlActivity_Activity::Enum(*)>(_a[1]))); break;
        case 31: _t->ActivityChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->reasonChanged((*reinterpret_cast< const CameraControlActivity_Reason::Enum(*)>(_a[1]))); break;
        case 33: _t->ReasonChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->setLatitude((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 35: _t->setLongitude((*reinterpret_cast< const qint32(*)>(_a[1]))); break;
        case 36: _t->setAltitude((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 37: _t->setRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 38: _t->setPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 39: _t->setYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 40: _t->setSystemTS((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 41: _t->setImageId((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 42: _t->setTriggerYear((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 43: _t->setTriggerMillisecond((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 44: _t->setTriggerMonth((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 45: _t->setTriggerMonth((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 46: _t->setTriggerDay((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 47: _t->setTriggerDay((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 48: _t->setTriggerHour((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 49: _t->setTriggerHour((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 50: _t->setTriggerMinute((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 51: _t->setTriggerMinute((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 52: _t->setTriggerSecond((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 53: _t->setTriggerSecond((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 54: _t->setActivity((*reinterpret_cast< const CameraControlActivity_Activity::Enum(*)>(_a[1]))); break;
        case 55: _t->setActivity((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 56: _t->setReason((*reinterpret_cast< const CameraControlActivity_Reason::Enum(*)>(_a[1]))); break;
        case 57: _t->setReason((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 58: _t->emitNotifications(); break;
        case 59: { qint32 _r = _t->getLatitude();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 60: { qint32 _r = _t->getLongitude();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 61: { float _r = _t->getAltitude();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 62: { float _r = _t->getRoll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 63: { float _r = _t->getPitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 64: { float _r = _t->getYaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 65: { quint32 _r = _t->getSystemTS();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 66: { quint16 _r = _t->getImageId();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 67: { qint16 _r = _t->getTriggerYear();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 68: { qint16 _r = _t->getTriggerMillisecond();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 69: { qint8 _r = _t->getTriggerMonth();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 70: { qint8 _r = _t->getTriggerDay();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 71: { qint8 _r = _t->getTriggerHour();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 72: { qint8 _r = _t->getTriggerMinute();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 73: { qint8 _r = _t->getTriggerSecond();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 74: { quint8 _r = _t->getActivity();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 75: { quint8 _r = _t->getReason();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CameraControlActivity::*)(const qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::latitudeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::LatitudeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::longitudeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::LongitudeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::altitudeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::AltitudeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::rollChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::RollChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::pitchChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::PitchChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::yawChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::YawChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::systemTSChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::SystemTSChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::imageIdChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::ImageIdChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::triggerYearChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::TriggerYearChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::triggerMillisecondChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::TriggerMillisecondChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::triggerMonthChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::TriggerMonthChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::triggerDayChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::TriggerDayChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::triggerHourChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::TriggerHourChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::triggerMinuteChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::TriggerMinuteChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::triggerSecondChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::TriggerSecondChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const CameraControlActivity_Activity::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::activityChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::ActivityChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(const CameraControlActivity_Reason::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::reasonChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (CameraControlActivity::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlActivity::ReasonChanged)) {
                *result = 33;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CameraControlActivity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint32*>(_v) = _t->latitude(); break;
        case 1: *reinterpret_cast< qint32*>(_v) = _t->longitude(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->altitude(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->roll(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->pitch(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->yaw(); break;
        case 6: *reinterpret_cast< quint32*>(_v) = _t->systemTS(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->imageId(); break;
        case 8: *reinterpret_cast< qint16*>(_v) = _t->triggerYear(); break;
        case 9: *reinterpret_cast< qint16*>(_v) = _t->triggerMillisecond(); break;
        case 10: *reinterpret_cast< qint16*>(_v) = _t->triggerMonth(); break;
        case 11: *reinterpret_cast< qint16*>(_v) = _t->triggerDay(); break;
        case 12: *reinterpret_cast< qint16*>(_v) = _t->triggerHour(); break;
        case 13: *reinterpret_cast< qint16*>(_v) = _t->triggerMinute(); break;
        case 14: *reinterpret_cast< qint16*>(_v) = _t->triggerSecond(); break;
        case 15: *reinterpret_cast< CameraControlActivity_Activity::Enum*>(_v) = _t->activity(); break;
        case 16: *reinterpret_cast< CameraControlActivity_Reason::Enum*>(_v) = _t->reason(); break;
        case 17: *reinterpret_cast< qint32*>(_v) = _t->getLatitude(); break;
        case 18: *reinterpret_cast< qint32*>(_v) = _t->getLongitude(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getAltitude(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getRoll(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getPitch(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getYaw(); break;
        case 23: *reinterpret_cast< quint32*>(_v) = _t->getSystemTS(); break;
        case 24: *reinterpret_cast< quint16*>(_v) = _t->getImageId(); break;
        case 25: *reinterpret_cast< qint16*>(_v) = _t->getTriggerYear(); break;
        case 26: *reinterpret_cast< qint16*>(_v) = _t->getTriggerMillisecond(); break;
        case 27: *reinterpret_cast< qint8*>(_v) = _t->getTriggerMonth(); break;
        case 28: *reinterpret_cast< qint8*>(_v) = _t->getTriggerDay(); break;
        case 29: *reinterpret_cast< qint8*>(_v) = _t->getTriggerHour(); break;
        case 30: *reinterpret_cast< qint8*>(_v) = _t->getTriggerMinute(); break;
        case 31: *reinterpret_cast< qint8*>(_v) = _t->getTriggerSecond(); break;
        case 32: *reinterpret_cast< quint8*>(_v) = _t->getActivity(); break;
        case 33: *reinterpret_cast< quint8*>(_v) = _t->getReason(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CameraControlActivity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLatitude(*reinterpret_cast< qint32*>(_v)); break;
        case 1: _t->setLongitude(*reinterpret_cast< qint32*>(_v)); break;
        case 2: _t->setAltitude(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setRoll(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setPitch(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setSystemTS(*reinterpret_cast< quint32*>(_v)); break;
        case 7: _t->setImageId(*reinterpret_cast< quint16*>(_v)); break;
        case 8: _t->setTriggerYear(*reinterpret_cast< qint16*>(_v)); break;
        case 9: _t->setTriggerMillisecond(*reinterpret_cast< qint16*>(_v)); break;
        case 10: _t->setTriggerMonth(*reinterpret_cast< qint16*>(_v)); break;
        case 11: _t->setTriggerDay(*reinterpret_cast< qint16*>(_v)); break;
        case 12: _t->setTriggerHour(*reinterpret_cast< qint16*>(_v)); break;
        case 13: _t->setTriggerMinute(*reinterpret_cast< qint16*>(_v)); break;
        case 14: _t->setTriggerSecond(*reinterpret_cast< qint16*>(_v)); break;
        case 15: _t->setActivity(*reinterpret_cast< CameraControlActivity_Activity::Enum*>(_v)); break;
        case 16: _t->setReason(*reinterpret_cast< CameraControlActivity_Reason::Enum*>(_v)); break;
        case 17: _t->setLatitude(*reinterpret_cast< qint32*>(_v)); break;
        case 18: _t->setLongitude(*reinterpret_cast< qint32*>(_v)); break;
        case 19: _t->setAltitude(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setRoll(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setPitch(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setSystemTS(*reinterpret_cast< quint32*>(_v)); break;
        case 24: _t->setImageId(*reinterpret_cast< quint16*>(_v)); break;
        case 25: _t->setTriggerYear(*reinterpret_cast< qint16*>(_v)); break;
        case 26: _t->setTriggerMillisecond(*reinterpret_cast< qint16*>(_v)); break;
        case 27: _t->setTriggerMonth(*reinterpret_cast< qint8*>(_v)); break;
        case 28: _t->setTriggerDay(*reinterpret_cast< qint8*>(_v)); break;
        case 29: _t->setTriggerHour(*reinterpret_cast< qint8*>(_v)); break;
        case 30: _t->setTriggerMinute(*reinterpret_cast< qint8*>(_v)); break;
        case 31: _t->setTriggerSecond(*reinterpret_cast< qint8*>(_v)); break;
        case 32: _t->setActivity(*reinterpret_cast< quint8*>(_v)); break;
        case 33: _t->setReason(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_CameraControlActivity[] = {
        &CameraControlActivity_Activity::staticMetaObject,
    &CameraControlActivity_Reason::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject CameraControlActivity::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_CameraControlActivity.data,
    qt_meta_data_CameraControlActivity,
    qt_static_metacall,
    qt_meta_extradata_CameraControlActivity,
    nullptr
} };


const QMetaObject *CameraControlActivity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraControlActivity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraControlActivity.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int CameraControlActivity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 76)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 76;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 76)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 76;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 34;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 34;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 34;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 34;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 34;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CameraControlActivity::latitudeChanged(const qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CameraControlActivity::LatitudeChanged(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CameraControlActivity::longitudeChanged(const qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CameraControlActivity::LongitudeChanged(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CameraControlActivity::altitudeChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CameraControlActivity::AltitudeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CameraControlActivity::rollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CameraControlActivity::RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CameraControlActivity::pitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CameraControlActivity::PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CameraControlActivity::yawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CameraControlActivity::YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CameraControlActivity::systemTSChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CameraControlActivity::SystemTSChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CameraControlActivity::imageIdChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CameraControlActivity::ImageIdChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void CameraControlActivity::triggerYearChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void CameraControlActivity::TriggerYearChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void CameraControlActivity::triggerMillisecondChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void CameraControlActivity::TriggerMillisecondChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void CameraControlActivity::triggerMonthChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void CameraControlActivity::TriggerMonthChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void CameraControlActivity::triggerDayChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void CameraControlActivity::TriggerDayChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void CameraControlActivity::triggerHourChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void CameraControlActivity::TriggerHourChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void CameraControlActivity::triggerMinuteChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void CameraControlActivity::TriggerMinuteChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void CameraControlActivity::triggerSecondChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void CameraControlActivity::TriggerSecondChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void CameraControlActivity::activityChanged(const CameraControlActivity_Activity::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void CameraControlActivity::ActivityChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void CameraControlActivity::reasonChanged(const CameraControlActivity_Reason::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void CameraControlActivity::ReasonChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
