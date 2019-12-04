/****************************************************************************
** Meta object code from reading C++ file 'cameracontrolsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cameracontrolsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cameracontrolsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraControlSettingsConstants_t {
    QByteArrayData data[5];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraControlSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraControlSettingsConstants_t qt_meta_stringdata_CameraControlSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 30), // "CameraControlSettingsConstants"
QT_MOC_LITERAL(1, 31, 4), // "Enum"
QT_MOC_LITERAL(2, 36, 21), // "AutoTriggerInputCount"
QT_MOC_LITERAL(3, 58, 23), // "ManualTriggerInputCount"
QT_MOC_LITERAL(4, 82, 20) // "AutoTriggerModeCount"

    },
    "CameraControlSettingsConstants\0Enum\0"
    "AutoTriggerInputCount\0ManualTriggerInputCount\0"
    "AutoTriggerModeCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraControlSettingsConstants[] = {

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
       2, uint(CameraControlSettingsConstants::AutoTriggerInputCount),
       3, uint(CameraControlSettingsConstants::ManualTriggerInputCount),
       4, uint(CameraControlSettingsConstants::AutoTriggerModeCount),

       0        // eod
};

void CameraControlSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraControlSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraControlSettingsConstants.data,
    qt_meta_data_CameraControlSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraControlSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraControlSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraControlSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraControlSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraControlSettings_AutoTriggerInput_t {
    QByteArrayData data[9];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraControlSettings_AutoTriggerInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraControlSettings_AutoTriggerInput_t qt_meta_stringdata_CameraControlSettings_AutoTriggerInput = {
    {
QT_MOC_LITERAL(0, 0, 38), // "CameraControlSettings_AutoTri..."
QT_MOC_LITERAL(1, 39, 4), // "Enum"
QT_MOC_LITERAL(2, 44, 4), // "None"
QT_MOC_LITERAL(3, 49, 10), // "Accessory0"
QT_MOC_LITERAL(4, 60, 10), // "Accessory1"
QT_MOC_LITERAL(5, 71, 10), // "Accessory2"
QT_MOC_LITERAL(6, 82, 10), // "Accessory3"
QT_MOC_LITERAL(7, 93, 10), // "Accessory4"
QT_MOC_LITERAL(8, 104, 10) // "Accessory5"

    },
    "CameraControlSettings_AutoTriggerInput\0"
    "Enum\0None\0Accessory0\0Accessory1\0"
    "Accessory2\0Accessory3\0Accessory4\0"
    "Accessory5"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraControlSettings_AutoTriggerInput[] = {

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
       2, uint(CameraControlSettings_AutoTriggerInput::None),
       3, uint(CameraControlSettings_AutoTriggerInput::Accessory0),
       4, uint(CameraControlSettings_AutoTriggerInput::Accessory1),
       5, uint(CameraControlSettings_AutoTriggerInput::Accessory2),
       6, uint(CameraControlSettings_AutoTriggerInput::Accessory3),
       7, uint(CameraControlSettings_AutoTriggerInput::Accessory4),
       8, uint(CameraControlSettings_AutoTriggerInput::Accessory5),

       0        // eod
};

void CameraControlSettings_AutoTriggerInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraControlSettings_AutoTriggerInput::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraControlSettings_AutoTriggerInput.data,
    qt_meta_data_CameraControlSettings_AutoTriggerInput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraControlSettings_AutoTriggerInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraControlSettings_AutoTriggerInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraControlSettings_AutoTriggerInput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraControlSettings_AutoTriggerInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraControlSettings_ManualTriggerInput_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraControlSettings_ManualTriggerInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraControlSettings_ManualTriggerInput_t qt_meta_stringdata_CameraControlSettings_ManualTriggerInput = {
    {
QT_MOC_LITERAL(0, 0, 40), // "CameraControlSettings_ManualT..."
QT_MOC_LITERAL(1, 41, 4), // "Enum"
QT_MOC_LITERAL(2, 46, 4), // "None"
QT_MOC_LITERAL(3, 51, 10), // "Accessory0"
QT_MOC_LITERAL(4, 62, 10), // "Accessory1"
QT_MOC_LITERAL(5, 73, 10), // "Accessory2"
QT_MOC_LITERAL(6, 84, 10), // "Accessory3"
QT_MOC_LITERAL(7, 95, 10), // "Accessory4"
QT_MOC_LITERAL(8, 106, 10) // "Accessory5"

    },
    "CameraControlSettings_ManualTriggerInput\0"
    "Enum\0None\0Accessory0\0Accessory1\0"
    "Accessory2\0Accessory3\0Accessory4\0"
    "Accessory5"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraControlSettings_ManualTriggerInput[] = {

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
       2, uint(CameraControlSettings_ManualTriggerInput::None),
       3, uint(CameraControlSettings_ManualTriggerInput::Accessory0),
       4, uint(CameraControlSettings_ManualTriggerInput::Accessory1),
       5, uint(CameraControlSettings_ManualTriggerInput::Accessory2),
       6, uint(CameraControlSettings_ManualTriggerInput::Accessory3),
       7, uint(CameraControlSettings_ManualTriggerInput::Accessory4),
       8, uint(CameraControlSettings_ManualTriggerInput::Accessory5),

       0        // eod
};

void CameraControlSettings_ManualTriggerInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraControlSettings_ManualTriggerInput::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraControlSettings_ManualTriggerInput.data,
    qt_meta_data_CameraControlSettings_ManualTriggerInput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraControlSettings_ManualTriggerInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraControlSettings_ManualTriggerInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraControlSettings_ManualTriggerInput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraControlSettings_ManualTriggerInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraControlSettings_AutoTriggerMode_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraControlSettings_AutoTriggerMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraControlSettings_AutoTriggerMode_t qt_meta_stringdata_CameraControlSettings_AutoTriggerMode = {
    {
QT_MOC_LITERAL(0, 0, 37), // "CameraControlSettings_AutoTri..."
QT_MOC_LITERAL(1, 38, 4), // "Enum"
QT_MOC_LITERAL(2, 43, 8), // "Disabled"
QT_MOC_LITERAL(3, 52, 9), // "WhenArmed"
QT_MOC_LITERAL(4, 62, 6), // "Always"
QT_MOC_LITERAL(5, 69, 5), // "Input"
QT_MOC_LITERAL(6, 75, 7) // "Mission"

    },
    "CameraControlSettings_AutoTriggerMode\0"
    "Enum\0Disabled\0WhenArmed\0Always\0Input\0"
    "Mission"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraControlSettings_AutoTriggerMode[] = {

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
       1,    1, 0x0,    5,   19,

 // enum data: key, value
       2, uint(CameraControlSettings_AutoTriggerMode::Disabled),
       3, uint(CameraControlSettings_AutoTriggerMode::WhenArmed),
       4, uint(CameraControlSettings_AutoTriggerMode::Always),
       5, uint(CameraControlSettings_AutoTriggerMode::Input),
       6, uint(CameraControlSettings_AutoTriggerMode::Mission),

       0        // eod
};

void CameraControlSettings_AutoTriggerMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraControlSettings_AutoTriggerMode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraControlSettings_AutoTriggerMode.data,
    qt_meta_data_CameraControlSettings_AutoTriggerMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraControlSettings_AutoTriggerMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraControlSettings_AutoTriggerMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraControlSettings_AutoTriggerMode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraControlSettings_AutoTriggerMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraControlSettings_t {
    QByteArrayData data[102];
    char stringdata0[2065];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraControlSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraControlSettings_t qt_meta_stringdata_CameraControlSettings = {
    {
QT_MOC_LITERAL(0, 0, 21), // "CameraControlSettings"
QT_MOC_LITERAL(1, 22, 19), // "outputValuesChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "index"
QT_MOC_LITERAL(4, 49, 5), // "value"
QT_MOC_LITERAL(5, 55, 19), // "OutputValuesChanged"
QT_MOC_LITERAL(6, 75, 23), // "outputValuesIdleChanged"
QT_MOC_LITERAL(7, 99, 24), // "OutputValues_IdleChanged"
QT_MOC_LITERAL(8, 124, 23), // "outputValuesShotChanged"
QT_MOC_LITERAL(9, 148, 24), // "OutputValues_ShotChanged"
QT_MOC_LITERAL(10, 173, 24), // "outputValuesVideoChanged"
QT_MOC_LITERAL(11, 198, 25), // "OutputValues_VideoChanged"
QT_MOC_LITERAL(12, 224, 18), // "inputValuesChanged"
QT_MOC_LITERAL(13, 243, 18), // "InputValuesChanged"
QT_MOC_LITERAL(14, 262, 22), // "inputValuesIdleChanged"
QT_MOC_LITERAL(15, 285, 23), // "InputValues_IdleChanged"
QT_MOC_LITERAL(16, 309, 22), // "inputValuesShotChanged"
QT_MOC_LITERAL(17, 332, 23), // "InputValues_ShotChanged"
QT_MOC_LITERAL(18, 356, 23), // "inputValuesVideoChanged"
QT_MOC_LITERAL(19, 380, 24), // "InputValues_VideoChanged"
QT_MOC_LITERAL(20, 405, 19), // "timeIntervalChanged"
QT_MOC_LITERAL(21, 425, 19), // "TimeIntervalChanged"
QT_MOC_LITERAL(22, 445, 20), // "spaceIntervalChanged"
QT_MOC_LITERAL(23, 466, 20), // "SpaceIntervalChanged"
QT_MOC_LITERAL(24, 487, 26), // "minimumTimeIntervalChanged"
QT_MOC_LITERAL(25, 514, 26), // "MinimumTimeIntervalChanged"
QT_MOC_LITERAL(26, 541, 24), // "triggerPulseWidthChanged"
QT_MOC_LITERAL(27, 566, 24), // "TriggerPulseWidthChanged"
QT_MOC_LITERAL(28, 591, 23), // "autoTriggerInputChanged"
QT_MOC_LITERAL(29, 615, 44), // "CameraControlSettings_AutoTri..."
QT_MOC_LITERAL(30, 660, 23), // "AutoTriggerInputChanged"
QT_MOC_LITERAL(31, 684, 25), // "manualTriggerInputChanged"
QT_MOC_LITERAL(32, 710, 46), // "CameraControlSettings_ManualT..."
QT_MOC_LITERAL(33, 757, 25), // "ManualTriggerInputChanged"
QT_MOC_LITERAL(34, 783, 22), // "autoTriggerModeChanged"
QT_MOC_LITERAL(35, 806, 43), // "CameraControlSettings_AutoTri..."
QT_MOC_LITERAL(36, 850, 22), // "AutoTriggerModeChanged"
QT_MOC_LITERAL(37, 873, 15), // "setOutputValues"
QT_MOC_LITERAL(38, 889, 19), // "setOutputValuesIdle"
QT_MOC_LITERAL(39, 909, 20), // "setOutputValues_Idle"
QT_MOC_LITERAL(40, 930, 19), // "setOutputValuesShot"
QT_MOC_LITERAL(41, 950, 20), // "setOutputValues_Shot"
QT_MOC_LITERAL(42, 971, 20), // "setOutputValuesVideo"
QT_MOC_LITERAL(43, 992, 21), // "setOutputValues_Video"
QT_MOC_LITERAL(44, 1014, 14), // "setInputValues"
QT_MOC_LITERAL(45, 1029, 18), // "setInputValuesIdle"
QT_MOC_LITERAL(46, 1048, 19), // "setInputValues_Idle"
QT_MOC_LITERAL(47, 1068, 18), // "setInputValuesShot"
QT_MOC_LITERAL(48, 1087, 19), // "setInputValues_Shot"
QT_MOC_LITERAL(49, 1107, 19), // "setInputValuesVideo"
QT_MOC_LITERAL(50, 1127, 20), // "setInputValues_Video"
QT_MOC_LITERAL(51, 1148, 15), // "setTimeInterval"
QT_MOC_LITERAL(52, 1164, 16), // "setSpaceInterval"
QT_MOC_LITERAL(53, 1181, 22), // "setMinimumTimeInterval"
QT_MOC_LITERAL(54, 1204, 20), // "setTriggerPulseWidth"
QT_MOC_LITERAL(55, 1225, 19), // "setAutoTriggerInput"
QT_MOC_LITERAL(56, 1245, 21), // "setManualTriggerInput"
QT_MOC_LITERAL(57, 1267, 18), // "setAutoTriggerMode"
QT_MOC_LITERAL(58, 1286, 17), // "emitNotifications"
QT_MOC_LITERAL(59, 1304, 12), // "outputValues"
QT_MOC_LITERAL(60, 1317, 15), // "getOutputValues"
QT_MOC_LITERAL(61, 1333, 20), // "getOutputValues_Idle"
QT_MOC_LITERAL(62, 1354, 20), // "getOutputValues_Shot"
QT_MOC_LITERAL(63, 1375, 21), // "getOutputValues_Video"
QT_MOC_LITERAL(64, 1397, 11), // "inputValues"
QT_MOC_LITERAL(65, 1409, 14), // "getInputValues"
QT_MOC_LITERAL(66, 1424, 19), // "getInputValues_Idle"
QT_MOC_LITERAL(67, 1444, 19), // "getInputValues_Shot"
QT_MOC_LITERAL(68, 1464, 20), // "getInputValues_Video"
QT_MOC_LITERAL(69, 1485, 15), // "getTimeInterval"
QT_MOC_LITERAL(70, 1501, 16), // "getSpaceInterval"
QT_MOC_LITERAL(71, 1518, 22), // "getMinimumTimeInterval"
QT_MOC_LITERAL(72, 1541, 20), // "getTriggerPulseWidth"
QT_MOC_LITERAL(73, 1562, 19), // "getAutoTriggerInput"
QT_MOC_LITERAL(74, 1582, 21), // "getManualTriggerInput"
QT_MOC_LITERAL(75, 1604, 18), // "getAutoTriggerMode"
QT_MOC_LITERAL(76, 1623, 16), // "outputValuesIdle"
QT_MOC_LITERAL(77, 1640, 16), // "outputValuesShot"
QT_MOC_LITERAL(78, 1657, 17), // "outputValuesVideo"
QT_MOC_LITERAL(79, 1675, 15), // "inputValuesIdle"
QT_MOC_LITERAL(80, 1691, 15), // "inputValuesShot"
QT_MOC_LITERAL(81, 1707, 16), // "inputValuesVideo"
QT_MOC_LITERAL(82, 1724, 12), // "timeInterval"
QT_MOC_LITERAL(83, 1737, 13), // "spaceInterval"
QT_MOC_LITERAL(84, 1751, 19), // "minimumTimeInterval"
QT_MOC_LITERAL(85, 1771, 17), // "triggerPulseWidth"
QT_MOC_LITERAL(86, 1789, 16), // "autoTriggerInput"
QT_MOC_LITERAL(87, 1806, 18), // "manualTriggerInput"
QT_MOC_LITERAL(88, 1825, 15), // "autoTriggerMode"
QT_MOC_LITERAL(89, 1841, 17), // "OutputValues_Idle"
QT_MOC_LITERAL(90, 1859, 17), // "OutputValues_Shot"
QT_MOC_LITERAL(91, 1877, 18), // "OutputValues_Video"
QT_MOC_LITERAL(92, 1896, 16), // "InputValues_Idle"
QT_MOC_LITERAL(93, 1913, 16), // "InputValues_Shot"
QT_MOC_LITERAL(94, 1930, 17), // "InputValues_Video"
QT_MOC_LITERAL(95, 1948, 12), // "TimeInterval"
QT_MOC_LITERAL(96, 1961, 13), // "SpaceInterval"
QT_MOC_LITERAL(97, 1975, 19), // "MinimumTimeInterval"
QT_MOC_LITERAL(98, 1995, 17), // "TriggerPulseWidth"
QT_MOC_LITERAL(99, 2013, 16), // "AutoTriggerInput"
QT_MOC_LITERAL(100, 2030, 18), // "ManualTriggerInput"
QT_MOC_LITERAL(101, 2049, 15) // "AutoTriggerMode"

    },
    "CameraControlSettings\0outputValuesChanged\0"
    "\0index\0value\0OutputValuesChanged\0"
    "outputValuesIdleChanged\0"
    "OutputValues_IdleChanged\0"
    "outputValuesShotChanged\0"
    "OutputValues_ShotChanged\0"
    "outputValuesVideoChanged\0"
    "OutputValues_VideoChanged\0inputValuesChanged\0"
    "InputValuesChanged\0inputValuesIdleChanged\0"
    "InputValues_IdleChanged\0inputValuesShotChanged\0"
    "InputValues_ShotChanged\0inputValuesVideoChanged\0"
    "InputValues_VideoChanged\0timeIntervalChanged\0"
    "TimeIntervalChanged\0spaceIntervalChanged\0"
    "SpaceIntervalChanged\0minimumTimeIntervalChanged\0"
    "MinimumTimeIntervalChanged\0"
    "triggerPulseWidthChanged\0"
    "TriggerPulseWidthChanged\0"
    "autoTriggerInputChanged\0"
    "CameraControlSettings_AutoTriggerInput::Enum\0"
    "AutoTriggerInputChanged\0"
    "manualTriggerInputChanged\0"
    "CameraControlSettings_ManualTriggerInput::Enum\0"
    "ManualTriggerInputChanged\0"
    "autoTriggerModeChanged\0"
    "CameraControlSettings_AutoTriggerMode::Enum\0"
    "AutoTriggerModeChanged\0setOutputValues\0"
    "setOutputValuesIdle\0setOutputValues_Idle\0"
    "setOutputValuesShot\0setOutputValues_Shot\0"
    "setOutputValuesVideo\0setOutputValues_Video\0"
    "setInputValues\0setInputValuesIdle\0"
    "setInputValues_Idle\0setInputValuesShot\0"
    "setInputValues_Shot\0setInputValuesVideo\0"
    "setInputValues_Video\0setTimeInterval\0"
    "setSpaceInterval\0setMinimumTimeInterval\0"
    "setTriggerPulseWidth\0setAutoTriggerInput\0"
    "setManualTriggerInput\0setAutoTriggerMode\0"
    "emitNotifications\0outputValues\0"
    "getOutputValues\0getOutputValues_Idle\0"
    "getOutputValues_Shot\0getOutputValues_Video\0"
    "inputValues\0getInputValues\0"
    "getInputValues_Idle\0getInputValues_Shot\0"
    "getInputValues_Video\0getTimeInterval\0"
    "getSpaceInterval\0getMinimumTimeInterval\0"
    "getTriggerPulseWidth\0getAutoTriggerInput\0"
    "getManualTriggerInput\0getAutoTriggerMode\0"
    "outputValuesIdle\0outputValuesShot\0"
    "outputValuesVideo\0inputValuesIdle\0"
    "inputValuesShot\0inputValuesVideo\0"
    "timeInterval\0spaceInterval\0"
    "minimumTimeInterval\0triggerPulseWidth\0"
    "autoTriggerInput\0manualTriggerInput\0"
    "autoTriggerMode\0OutputValues_Idle\0"
    "OutputValues_Shot\0OutputValues_Video\0"
    "InputValues_Idle\0InputValues_Shot\0"
    "InputValues_Video\0TimeInterval\0"
    "SpaceInterval\0MinimumTimeInterval\0"
    "TriggerPulseWidth\0AutoTriggerInput\0"
    "ManualTriggerInput\0AutoTriggerMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraControlSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      72,   14, // methods
      26,  574, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      30,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  374,    2, 0x06 /* Public */,
       5,    2,  379,    2, 0x06 /* Public */,
       6,    1,  384,    2, 0x06 /* Public */,
       7,    1,  387,    2, 0x06 /* Public */,
       8,    1,  390,    2, 0x06 /* Public */,
       9,    1,  393,    2, 0x06 /* Public */,
      10,    1,  396,    2, 0x06 /* Public */,
      11,    1,  399,    2, 0x06 /* Public */,
      12,    2,  402,    2, 0x06 /* Public */,
      13,    2,  407,    2, 0x06 /* Public */,
      14,    1,  412,    2, 0x06 /* Public */,
      15,    1,  415,    2, 0x06 /* Public */,
      16,    1,  418,    2, 0x06 /* Public */,
      17,    1,  421,    2, 0x06 /* Public */,
      18,    1,  424,    2, 0x06 /* Public */,
      19,    1,  427,    2, 0x06 /* Public */,
      20,    1,  430,    2, 0x06 /* Public */,
      21,    1,  433,    2, 0x06 /* Public */,
      22,    1,  436,    2, 0x06 /* Public */,
      23,    1,  439,    2, 0x06 /* Public */,
      24,    1,  442,    2, 0x06 /* Public */,
      25,    1,  445,    2, 0x06 /* Public */,
      26,    1,  448,    2, 0x06 /* Public */,
      27,    1,  451,    2, 0x06 /* Public */,
      28,    1,  454,    2, 0x06 /* Public */,
      30,    1,  457,    2, 0x06 /* Public */,
      31,    1,  460,    2, 0x06 /* Public */,
      33,    1,  463,    2, 0x06 /* Public */,
      34,    1,  466,    2, 0x06 /* Public */,
      36,    1,  469,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      37,    2,  472,    2, 0x0a /* Public */,
      38,    1,  477,    2, 0x0a /* Public */,
      39,    1,  480,    2, 0x0a /* Public */,
      40,    1,  483,    2, 0x0a /* Public */,
      41,    1,  486,    2, 0x0a /* Public */,
      42,    1,  489,    2, 0x0a /* Public */,
      43,    1,  492,    2, 0x0a /* Public */,
      44,    2,  495,    2, 0x0a /* Public */,
      45,    1,  500,    2, 0x0a /* Public */,
      46,    1,  503,    2, 0x0a /* Public */,
      47,    1,  506,    2, 0x0a /* Public */,
      48,    1,  509,    2, 0x0a /* Public */,
      49,    1,  512,    2, 0x0a /* Public */,
      50,    1,  515,    2, 0x0a /* Public */,
      51,    1,  518,    2, 0x0a /* Public */,
      52,    1,  521,    2, 0x0a /* Public */,
      53,    1,  524,    2, 0x0a /* Public */,
      54,    1,  527,    2, 0x0a /* Public */,
      55,    1,  530,    2, 0x0a /* Public */,
      55,    1,  533,    2, 0x0a /* Public */,
      56,    1,  536,    2, 0x0a /* Public */,
      56,    1,  539,    2, 0x0a /* Public */,
      57,    1,  542,    2, 0x0a /* Public */,
      57,    1,  545,    2, 0x0a /* Public */,
      58,    0,  548,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      59,    1,  549,    2, 0x02 /* Public */,
      60,    1,  552,    2, 0x02 /* Public */,
      61,    0,  555,    2, 0x02 /* Public */,
      62,    0,  556,    2, 0x02 /* Public */,
      63,    0,  557,    2, 0x02 /* Public */,
      64,    1,  558,    2, 0x02 /* Public */,
      65,    1,  561,    2, 0x02 /* Public */,
      66,    0,  564,    2, 0x02 /* Public */,
      67,    0,  565,    2, 0x02 /* Public */,
      68,    0,  566,    2, 0x02 /* Public */,
      69,    0,  567,    2, 0x02 /* Public */,
      70,    0,  568,    2, 0x02 /* Public */,
      71,    0,  569,    2, 0x02 /* Public */,
      72,    0,  570,    2, 0x02 /* Public */,
      73,    0,  571,    2, 0x02 /* Public */,
      74,    0,  572,    2, 0x02 /* Public */,
      75,    0,  573,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, 0x80000000 | 29,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 32,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 35,    4,
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
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, 0x80000000 | 29,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 32,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 35,    4,
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
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UShort,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      76, QMetaType::Float, 0x00495103,
      77, QMetaType::Float, 0x00495103,
      78, QMetaType::Float, 0x00495103,
      79, QMetaType::Float, 0x00495103,
      80, QMetaType::Float, 0x00495103,
      81, QMetaType::Float, 0x00495103,
      82, QMetaType::Float, 0x00495103,
      83, QMetaType::Float, 0x00495103,
      84, QMetaType::Float, 0x00495103,
      85, QMetaType::UShort, 0x00495103,
      86, 0x80000000 | 29, 0x0049510b,
      87, 0x80000000 | 32, 0x0049510b,
      88, 0x80000000 | 35, 0x0049510b,
      89, QMetaType::Float, 0x00495103,
      90, QMetaType::Float, 0x00495103,
      91, QMetaType::Float, 0x00495103,
      92, QMetaType::Float, 0x00495103,
      93, QMetaType::Float, 0x00495103,
      94, QMetaType::Float, 0x00495103,
      95, QMetaType::Float, 0x00495103,
      96, QMetaType::Float, 0x00495103,
      97, QMetaType::Float, 0x00495103,
      98, QMetaType::UShort, 0x00495103,
      99, QMetaType::UChar, 0x00495103,
     100, QMetaType::UChar, 0x00495103,
     101, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
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
       3,
       5,
       7,
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

void CameraControlSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CameraControlSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputValuesChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->OutputValuesChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->outputValuesIdleChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->OutputValues_IdleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->outputValuesShotChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->OutputValues_ShotChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->outputValuesVideoChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->OutputValues_VideoChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->inputValuesChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 9: _t->InputValuesChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->inputValuesIdleChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->InputValues_IdleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->inputValuesShotChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->InputValues_ShotChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->inputValuesVideoChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->InputValues_VideoChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->timeIntervalChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->TimeIntervalChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->spaceIntervalChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->SpaceIntervalChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->minimumTimeIntervalChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->MinimumTimeIntervalChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->triggerPulseWidthChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 23: _t->TriggerPulseWidthChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 24: _t->autoTriggerInputChanged((*reinterpret_cast< const CameraControlSettings_AutoTriggerInput::Enum(*)>(_a[1]))); break;
        case 25: _t->AutoTriggerInputChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->manualTriggerInputChanged((*reinterpret_cast< const CameraControlSettings_ManualTriggerInput::Enum(*)>(_a[1]))); break;
        case 27: _t->ManualTriggerInputChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->autoTriggerModeChanged((*reinterpret_cast< const CameraControlSettings_AutoTriggerMode::Enum(*)>(_a[1]))); break;
        case 29: _t->AutoTriggerModeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->setOutputValues((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 31: _t->setOutputValuesIdle((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 32: _t->setOutputValues_Idle((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 33: _t->setOutputValuesShot((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 34: _t->setOutputValues_Shot((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 35: _t->setOutputValuesVideo((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 36: _t->setOutputValues_Video((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 37: _t->setInputValues((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 38: _t->setInputValuesIdle((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 39: _t->setInputValues_Idle((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->setInputValuesShot((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 41: _t->setInputValues_Shot((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->setInputValuesVideo((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 43: _t->setInputValues_Video((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->setTimeInterval((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 45: _t->setSpaceInterval((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 46: _t->setMinimumTimeInterval((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->setTriggerPulseWidth((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 48: _t->setAutoTriggerInput((*reinterpret_cast< const CameraControlSettings_AutoTriggerInput::Enum(*)>(_a[1]))); break;
        case 49: _t->setAutoTriggerInput((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 50: _t->setManualTriggerInput((*reinterpret_cast< const CameraControlSettings_ManualTriggerInput::Enum(*)>(_a[1]))); break;
        case 51: _t->setManualTriggerInput((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->setAutoTriggerMode((*reinterpret_cast< const CameraControlSettings_AutoTriggerMode::Enum(*)>(_a[1]))); break;
        case 53: _t->setAutoTriggerMode((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 54: _t->emitNotifications(); break;
        case 55: { float _r = _t->outputValues((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 56: { float _r = _t->getOutputValues((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 57: { float _r = _t->getOutputValues_Idle();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 58: { float _r = _t->getOutputValues_Shot();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 59: { float _r = _t->getOutputValues_Video();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 60: { float _r = _t->inputValues((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 61: { float _r = _t->getInputValues((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 62: { float _r = _t->getInputValues_Idle();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 63: { float _r = _t->getInputValues_Shot();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 64: { float _r = _t->getInputValues_Video();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 65: { float _r = _t->getTimeInterval();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 66: { float _r = _t->getSpaceInterval();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 67: { float _r = _t->getMinimumTimeInterval();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 68: { quint16 _r = _t->getTriggerPulseWidth();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 69: { quint8 _r = _t->getAutoTriggerInput();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 70: { quint8 _r = _t->getManualTriggerInput();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 71: { quint8 _r = _t->getAutoTriggerMode();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CameraControlSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::outputValuesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::OutputValuesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::outputValuesIdleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::OutputValues_IdleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::outputValuesShotChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::OutputValues_ShotChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::outputValuesVideoChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::OutputValues_VideoChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::inputValuesChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::InputValuesChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::inputValuesIdleChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::InputValues_IdleChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::inputValuesShotChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::InputValues_ShotChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::inputValuesVideoChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::InputValues_VideoChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::timeIntervalChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::TimeIntervalChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::spaceIntervalChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::SpaceIntervalChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::minimumTimeIntervalChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::MinimumTimeIntervalChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::triggerPulseWidthChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::TriggerPulseWidthChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const CameraControlSettings_AutoTriggerInput::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::autoTriggerInputChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::AutoTriggerInputChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const CameraControlSettings_ManualTriggerInput::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::manualTriggerInputChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::ManualTriggerInputChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(const CameraControlSettings_AutoTriggerMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::autoTriggerModeChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (CameraControlSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraControlSettings::AutoTriggerModeChanged)) {
                *result = 29;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CameraControlSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->outputValuesIdle(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->outputValuesShot(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->outputValuesVideo(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->inputValuesIdle(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->inputValuesShot(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->inputValuesVideo(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->timeInterval(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->spaceInterval(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->minimumTimeInterval(); break;
        case 9: *reinterpret_cast< quint16*>(_v) = _t->triggerPulseWidth(); break;
        case 10: *reinterpret_cast< CameraControlSettings_AutoTriggerInput::Enum*>(_v) = _t->autoTriggerInput(); break;
        case 11: *reinterpret_cast< CameraControlSettings_ManualTriggerInput::Enum*>(_v) = _t->manualTriggerInput(); break;
        case 12: *reinterpret_cast< CameraControlSettings_AutoTriggerMode::Enum*>(_v) = _t->autoTriggerMode(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getOutputValues_Idle(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getOutputValues_Shot(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getOutputValues_Video(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getInputValues_Idle(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getInputValues_Shot(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getInputValues_Video(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getTimeInterval(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getSpaceInterval(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getMinimumTimeInterval(); break;
        case 22: *reinterpret_cast< quint16*>(_v) = _t->getTriggerPulseWidth(); break;
        case 23: *reinterpret_cast< quint8*>(_v) = _t->getAutoTriggerInput(); break;
        case 24: *reinterpret_cast< quint8*>(_v) = _t->getManualTriggerInput(); break;
        case 25: *reinterpret_cast< quint8*>(_v) = _t->getAutoTriggerMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CameraControlSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOutputValuesIdle(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setOutputValuesShot(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setOutputValuesVideo(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setInputValuesIdle(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setInputValuesShot(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setInputValuesVideo(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setTimeInterval(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setSpaceInterval(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setMinimumTimeInterval(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setTriggerPulseWidth(*reinterpret_cast< quint16*>(_v)); break;
        case 10: _t->setAutoTriggerInput(*reinterpret_cast< CameraControlSettings_AutoTriggerInput::Enum*>(_v)); break;
        case 11: _t->setManualTriggerInput(*reinterpret_cast< CameraControlSettings_ManualTriggerInput::Enum*>(_v)); break;
        case 12: _t->setAutoTriggerMode(*reinterpret_cast< CameraControlSettings_AutoTriggerMode::Enum*>(_v)); break;
        case 13: _t->setOutputValues_Idle(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setOutputValues_Shot(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setOutputValues_Video(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setInputValues_Idle(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setInputValues_Shot(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setInputValues_Video(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setTimeInterval(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setSpaceInterval(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setMinimumTimeInterval(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setTriggerPulseWidth(*reinterpret_cast< quint16*>(_v)); break;
        case 23: _t->setAutoTriggerInput(*reinterpret_cast< quint8*>(_v)); break;
        case 24: _t->setManualTriggerInput(*reinterpret_cast< quint8*>(_v)); break;
        case 25: _t->setAutoTriggerMode(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_CameraControlSettings[] = {
        &CameraControlSettings_AutoTriggerInput::staticMetaObject,
    &CameraControlSettings_ManualTriggerInput::staticMetaObject,
    &CameraControlSettings_AutoTriggerMode::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject CameraControlSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_CameraControlSettings.data,
    qt_meta_data_CameraControlSettings,
    qt_static_metacall,
    qt_meta_extradata_CameraControlSettings,
    nullptr
} };


const QMetaObject *CameraControlSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraControlSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraControlSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int CameraControlSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 72)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 72;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 26;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CameraControlSettings::outputValuesChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CameraControlSettings::OutputValuesChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CameraControlSettings::outputValuesIdleChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CameraControlSettings::OutputValues_IdleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CameraControlSettings::outputValuesShotChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CameraControlSettings::OutputValues_ShotChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CameraControlSettings::outputValuesVideoChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CameraControlSettings::OutputValues_VideoChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CameraControlSettings::inputValuesChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CameraControlSettings::InputValuesChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CameraControlSettings::inputValuesIdleChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CameraControlSettings::InputValues_IdleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CameraControlSettings::inputValuesShotChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CameraControlSettings::InputValues_ShotChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CameraControlSettings::inputValuesVideoChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CameraControlSettings::InputValues_VideoChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void CameraControlSettings::timeIntervalChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void CameraControlSettings::TimeIntervalChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void CameraControlSettings::spaceIntervalChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void CameraControlSettings::SpaceIntervalChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void CameraControlSettings::minimumTimeIntervalChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void CameraControlSettings::MinimumTimeIntervalChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void CameraControlSettings::triggerPulseWidthChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void CameraControlSettings::TriggerPulseWidthChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void CameraControlSettings::autoTriggerInputChanged(const CameraControlSettings_AutoTriggerInput::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void CameraControlSettings::AutoTriggerInputChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void CameraControlSettings::manualTriggerInputChanged(const CameraControlSettings_ManualTriggerInput::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void CameraControlSettings::ManualTriggerInputChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void CameraControlSettings::autoTriggerModeChanged(const CameraControlSettings_AutoTriggerMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void CameraControlSettings::AutoTriggerModeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
