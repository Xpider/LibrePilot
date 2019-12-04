/****************************************************************************
** Meta object code from reading C++ file 'flightplanstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../flightplanstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightplanstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightPlanStatusConstants_t {
    QByteArrayData data[4];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightPlanStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightPlanStatusConstants_t qt_meta_stringdata_FlightPlanStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 25), // "FlightPlanStatusConstants"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 11), // "StatusCount"
QT_MOC_LITERAL(3, 43, 14) // "ErrorTypeCount"

    },
    "FlightPlanStatusConstants\0Enum\0"
    "StatusCount\0ErrorTypeCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightPlanStatusConstants[] = {

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
       2, uint(FlightPlanStatusConstants::StatusCount),
       3, uint(FlightPlanStatusConstants::ErrorTypeCount),

       0        // eod
};

void FlightPlanStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightPlanStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightPlanStatusConstants.data,
    qt_meta_data_FlightPlanStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightPlanStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightPlanStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightPlanStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightPlanStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightPlanStatus_Status_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightPlanStatus_Status_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightPlanStatus_Status_t qt_meta_stringdata_FlightPlanStatus_Status = {
    {
QT_MOC_LITERAL(0, 0, 23), // "FlightPlanStatus_Status"
QT_MOC_LITERAL(1, 24, 4), // "Enum"
QT_MOC_LITERAL(2, 29, 7), // "Stopped"
QT_MOC_LITERAL(3, 37, 7), // "Running"
QT_MOC_LITERAL(4, 45, 5) // "Error"

    },
    "FlightPlanStatus_Status\0Enum\0Stopped\0"
    "Running\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightPlanStatus_Status[] = {

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
       2, uint(FlightPlanStatus_Status::Stopped),
       3, uint(FlightPlanStatus_Status::Running),
       4, uint(FlightPlanStatus_Status::Error),

       0        // eod
};

void FlightPlanStatus_Status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightPlanStatus_Status::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightPlanStatus_Status.data,
    qt_meta_data_FlightPlanStatus_Status,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightPlanStatus_Status::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightPlanStatus_Status::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightPlanStatus_Status.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightPlanStatus_Status::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightPlanStatus_ErrorType_t {
    QByteArrayData data[21];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightPlanStatus_ErrorType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightPlanStatus_ErrorType_t qt_meta_stringdata_FlightPlanStatus_ErrorType = {
    {
QT_MOC_LITERAL(0, 0, 26), // "FlightPlanStatus_ErrorType"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 4), // "None"
QT_MOC_LITERAL(3, 37, 11), // "VMInitError"
QT_MOC_LITERAL(4, 49, 9), // "Exception"
QT_MOC_LITERAL(5, 59, 7), // "IOError"
QT_MOC_LITERAL(6, 67, 9), // "DivByZero"
QT_MOC_LITERAL(7, 77, 11), // "AssertError"
QT_MOC_LITERAL(8, 89, 14), // "AttributeError"
QT_MOC_LITERAL(9, 104, 11), // "ImportError"
QT_MOC_LITERAL(10, 116, 10), // "IndexError"
QT_MOC_LITERAL(11, 127, 8), // "KeyError"
QT_MOC_LITERAL(12, 136, 11), // "MemoryError"
QT_MOC_LITERAL(13, 148, 9), // "NameError"
QT_MOC_LITERAL(14, 158, 11), // "SyntaxError"
QT_MOC_LITERAL(15, 170, 11), // "SystemError"
QT_MOC_LITERAL(16, 182, 9), // "TypeError"
QT_MOC_LITERAL(17, 192, 10), // "ValueError"
QT_MOC_LITERAL(18, 203, 13), // "StopIteration"
QT_MOC_LITERAL(19, 217, 7), // "Warning"
QT_MOC_LITERAL(20, 225, 12) // "UnknownError"

    },
    "FlightPlanStatus_ErrorType\0Enum\0None\0"
    "VMInitError\0Exception\0IOError\0DivByZero\0"
    "AssertError\0AttributeError\0ImportError\0"
    "IndexError\0KeyError\0MemoryError\0"
    "NameError\0SyntaxError\0SystemError\0"
    "TypeError\0ValueError\0StopIteration\0"
    "Warning\0UnknownError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightPlanStatus_ErrorType[] = {

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
       1,    1, 0x0,   19,   19,

 // enum data: key, value
       2, uint(FlightPlanStatus_ErrorType::None),
       3, uint(FlightPlanStatus_ErrorType::VMInitError),
       4, uint(FlightPlanStatus_ErrorType::Exception),
       5, uint(FlightPlanStatus_ErrorType::IOError),
       6, uint(FlightPlanStatus_ErrorType::DivByZero),
       7, uint(FlightPlanStatus_ErrorType::AssertError),
       8, uint(FlightPlanStatus_ErrorType::AttributeError),
       9, uint(FlightPlanStatus_ErrorType::ImportError),
      10, uint(FlightPlanStatus_ErrorType::IndexError),
      11, uint(FlightPlanStatus_ErrorType::KeyError),
      12, uint(FlightPlanStatus_ErrorType::MemoryError),
      13, uint(FlightPlanStatus_ErrorType::NameError),
      14, uint(FlightPlanStatus_ErrorType::SyntaxError),
      15, uint(FlightPlanStatus_ErrorType::SystemError),
      16, uint(FlightPlanStatus_ErrorType::TypeError),
      17, uint(FlightPlanStatus_ErrorType::ValueError),
      18, uint(FlightPlanStatus_ErrorType::StopIteration),
      19, uint(FlightPlanStatus_ErrorType::Warning),
      20, uint(FlightPlanStatus_ErrorType::UnknownError),

       0        // eod
};

void FlightPlanStatus_ErrorType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightPlanStatus_ErrorType::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightPlanStatus_ErrorType.data,
    qt_meta_data_FlightPlanStatus_ErrorType,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightPlanStatus_ErrorType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightPlanStatus_ErrorType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightPlanStatus_ErrorType.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightPlanStatus_ErrorType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlightPlanStatus_t {
    QByteArrayData data[50];
    char stringdata0[645];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightPlanStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightPlanStatus_t qt_meta_stringdata_FlightPlanStatus = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FlightPlanStatus"
QT_MOC_LITERAL(1, 17, 18), // "errorFileIDChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 18), // "ErrorFileIDChanged"
QT_MOC_LITERAL(5, 62, 19), // "errorLineNumChanged"
QT_MOC_LITERAL(6, 82, 19), // "ErrorLineNumChanged"
QT_MOC_LITERAL(7, 102, 12), // "debugChanged"
QT_MOC_LITERAL(8, 115, 5), // "index"
QT_MOC_LITERAL(9, 121, 12), // "DebugChanged"
QT_MOC_LITERAL(10, 134, 13), // "debug0Changed"
QT_MOC_LITERAL(11, 148, 14), // "Debug_0Changed"
QT_MOC_LITERAL(12, 163, 13), // "debug1Changed"
QT_MOC_LITERAL(13, 177, 14), // "Debug_1Changed"
QT_MOC_LITERAL(14, 192, 13), // "statusChanged"
QT_MOC_LITERAL(15, 206, 29), // "FlightPlanStatus_Status::Enum"
QT_MOC_LITERAL(16, 236, 13), // "StatusChanged"
QT_MOC_LITERAL(17, 250, 16), // "errorTypeChanged"
QT_MOC_LITERAL(18, 267, 32), // "FlightPlanStatus_ErrorType::Enum"
QT_MOC_LITERAL(19, 300, 16), // "ErrorTypeChanged"
QT_MOC_LITERAL(20, 317, 14), // "setErrorFileID"
QT_MOC_LITERAL(21, 332, 15), // "setErrorLineNum"
QT_MOC_LITERAL(22, 348, 8), // "setDebug"
QT_MOC_LITERAL(23, 357, 9), // "setDebug0"
QT_MOC_LITERAL(24, 367, 10), // "setDebug_0"
QT_MOC_LITERAL(25, 378, 9), // "setDebug1"
QT_MOC_LITERAL(26, 388, 10), // "setDebug_1"
QT_MOC_LITERAL(27, 399, 9), // "setStatus"
QT_MOC_LITERAL(28, 409, 12), // "setErrorType"
QT_MOC_LITERAL(29, 422, 17), // "emitNotifications"
QT_MOC_LITERAL(30, 440, 14), // "getErrorFileID"
QT_MOC_LITERAL(31, 455, 15), // "getErrorLineNum"
QT_MOC_LITERAL(32, 471, 5), // "debug"
QT_MOC_LITERAL(33, 477, 8), // "getDebug"
QT_MOC_LITERAL(34, 486, 10), // "getDebug_0"
QT_MOC_LITERAL(35, 497, 10), // "getDebug_1"
QT_MOC_LITERAL(36, 508, 9), // "getStatus"
QT_MOC_LITERAL(37, 518, 12), // "getErrorType"
QT_MOC_LITERAL(38, 531, 11), // "errorFileID"
QT_MOC_LITERAL(39, 543, 12), // "errorLineNum"
QT_MOC_LITERAL(40, 556, 6), // "debug0"
QT_MOC_LITERAL(41, 563, 6), // "debug1"
QT_MOC_LITERAL(42, 570, 6), // "status"
QT_MOC_LITERAL(43, 577, 9), // "errorType"
QT_MOC_LITERAL(44, 587, 11), // "ErrorFileID"
QT_MOC_LITERAL(45, 599, 12), // "ErrorLineNum"
QT_MOC_LITERAL(46, 612, 7), // "Debug_0"
QT_MOC_LITERAL(47, 620, 7), // "Debug_1"
QT_MOC_LITERAL(48, 628, 6), // "Status"
QT_MOC_LITERAL(49, 635, 9) // "ErrorType"

    },
    "FlightPlanStatus\0errorFileIDChanged\0"
    "\0value\0ErrorFileIDChanged\0errorLineNumChanged\0"
    "ErrorLineNumChanged\0debugChanged\0index\0"
    "DebugChanged\0debug0Changed\0Debug_0Changed\0"
    "debug1Changed\0Debug_1Changed\0statusChanged\0"
    "FlightPlanStatus_Status::Enum\0"
    "StatusChanged\0errorTypeChanged\0"
    "FlightPlanStatus_ErrorType::Enum\0"
    "ErrorTypeChanged\0setErrorFileID\0"
    "setErrorLineNum\0setDebug\0setDebug0\0"
    "setDebug_0\0setDebug1\0setDebug_1\0"
    "setStatus\0setErrorType\0emitNotifications\0"
    "getErrorFileID\0getErrorLineNum\0debug\0"
    "getDebug\0getDebug_0\0getDebug_1\0getStatus\0"
    "getErrorType\0errorFileID\0errorLineNum\0"
    "debug0\0debug1\0status\0errorType\0"
    "ErrorFileID\0ErrorLineNum\0Debug_0\0"
    "Debug_1\0Status\0ErrorType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightPlanStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
      12,  278, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  184,    2, 0x06 /* Public */,
       4,    1,  187,    2, 0x06 /* Public */,
       5,    1,  190,    2, 0x06 /* Public */,
       6,    1,  193,    2, 0x06 /* Public */,
       7,    2,  196,    2, 0x06 /* Public */,
       9,    2,  201,    2, 0x06 /* Public */,
      10,    1,  206,    2, 0x06 /* Public */,
      11,    1,  209,    2, 0x06 /* Public */,
      12,    1,  212,    2, 0x06 /* Public */,
      13,    1,  215,    2, 0x06 /* Public */,
      14,    1,  218,    2, 0x06 /* Public */,
      16,    1,  221,    2, 0x06 /* Public */,
      17,    1,  224,    2, 0x06 /* Public */,
      19,    1,  227,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,  230,    2, 0x0a /* Public */,
      21,    1,  233,    2, 0x0a /* Public */,
      22,    2,  236,    2, 0x0a /* Public */,
      23,    1,  241,    2, 0x0a /* Public */,
      24,    1,  244,    2, 0x0a /* Public */,
      25,    1,  247,    2, 0x0a /* Public */,
      26,    1,  250,    2, 0x0a /* Public */,
      27,    1,  253,    2, 0x0a /* Public */,
      27,    1,  256,    2, 0x0a /* Public */,
      28,    1,  259,    2, 0x0a /* Public */,
      28,    1,  262,    2, 0x0a /* Public */,
      29,    0,  265,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      30,    0,  266,    2, 0x02 /* Public */,
      31,    0,  267,    2, 0x02 /* Public */,
      32,    1,  268,    2, 0x02 /* Public */,
      33,    1,  271,    2, 0x02 /* Public */,
      34,    0,  274,    2, 0x02 /* Public */,
      35,    0,  275,    2, 0x02 /* Public */,
      36,    0,  276,    2, 0x02 /* Public */,
      37,    0,  277,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    8,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    8,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 15,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 18,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    8,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 15,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 18,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::Float, QMetaType::UInt,    8,
    QMetaType::Float, QMetaType::UInt,    8,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      38, QMetaType::UInt, 0x00495103,
      39, QMetaType::UInt, 0x00495103,
      40, QMetaType::Float, 0x00495103,
      41, QMetaType::Float, 0x00495103,
      42, 0x80000000 | 15, 0x0049510b,
      43, 0x80000000 | 18, 0x0049510b,
      44, QMetaType::UInt, 0x00495103,
      45, QMetaType::UInt, 0x00495103,
      46, QMetaType::Float, 0x00495103,
      47, QMetaType::Float, 0x00495103,
      48, QMetaType::UChar, 0x00495103,
      49, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       6,
       8,
      10,
      12,
       1,
       3,
       7,
       9,
      11,
      13,

       0        // eod
};

void FlightPlanStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightPlanStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorFileIDChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: _t->ErrorFileIDChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->errorLineNumChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 3: _t->ErrorLineNumChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->debugChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 5: _t->DebugChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 6: _t->debug0Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->Debug_0Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->debug1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->Debug_1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->statusChanged((*reinterpret_cast< const FlightPlanStatus_Status::Enum(*)>(_a[1]))); break;
        case 11: _t->StatusChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->errorTypeChanged((*reinterpret_cast< const FlightPlanStatus_ErrorType::Enum(*)>(_a[1]))); break;
        case 13: _t->ErrorTypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 14: _t->setErrorFileID((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 15: _t->setErrorLineNum((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 16: _t->setDebug((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 17: _t->setDebug0((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 18: _t->setDebug_0((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 19: _t->setDebug1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 20: _t->setDebug_1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 21: _t->setStatus((*reinterpret_cast< const FlightPlanStatus_Status::Enum(*)>(_a[1]))); break;
        case 22: _t->setStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 23: _t->setErrorType((*reinterpret_cast< const FlightPlanStatus_ErrorType::Enum(*)>(_a[1]))); break;
        case 24: _t->setErrorType((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 25: _t->emitNotifications(); break;
        case 26: { quint32 _r = _t->getErrorFileID();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 27: { quint32 _r = _t->getErrorLineNum();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 28: { float _r = _t->debug((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 29: { float _r = _t->getDebug((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 30: { float _r = _t->getDebug_0();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 31: { float _r = _t->getDebug_1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 32: { quint8 _r = _t->getStatus();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 33: { quint8 _r = _t->getErrorType();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightPlanStatus::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::errorFileIDChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::ErrorFileIDChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::errorLineNumChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::ErrorLineNumChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::debugChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::DebugChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::debug0Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::Debug_0Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::debug1Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::Debug_1Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(const FlightPlanStatus_Status::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::statusChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::StatusChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(const FlightPlanStatus_ErrorType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::errorTypeChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (FlightPlanStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanStatus::ErrorTypeChanged)) {
                *result = 13;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FlightPlanStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->errorFileID(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->errorLineNum(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->debug0(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->debug1(); break;
        case 4: *reinterpret_cast< FlightPlanStatus_Status::Enum*>(_v) = _t->status(); break;
        case 5: *reinterpret_cast< FlightPlanStatus_ErrorType::Enum*>(_v) = _t->errorType(); break;
        case 6: *reinterpret_cast< quint32*>(_v) = _t->getErrorFileID(); break;
        case 7: *reinterpret_cast< quint32*>(_v) = _t->getErrorLineNum(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getDebug_0(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getDebug_1(); break;
        case 10: *reinterpret_cast< quint8*>(_v) = _t->getStatus(); break;
        case 11: *reinterpret_cast< quint8*>(_v) = _t->getErrorType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FlightPlanStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setErrorFileID(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setErrorLineNum(*reinterpret_cast< quint32*>(_v)); break;
        case 2: _t->setDebug0(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setDebug1(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setStatus(*reinterpret_cast< FlightPlanStatus_Status::Enum*>(_v)); break;
        case 5: _t->setErrorType(*reinterpret_cast< FlightPlanStatus_ErrorType::Enum*>(_v)); break;
        case 6: _t->setErrorFileID(*reinterpret_cast< quint32*>(_v)); break;
        case 7: _t->setErrorLineNum(*reinterpret_cast< quint32*>(_v)); break;
        case 8: _t->setDebug_0(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setDebug_1(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setStatus(*reinterpret_cast< quint8*>(_v)); break;
        case 11: _t->setErrorType(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_FlightPlanStatus[] = {
        &FlightPlanStatus_Status::staticMetaObject,
    &FlightPlanStatus_ErrorType::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject FlightPlanStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_FlightPlanStatus.data,
    qt_meta_data_FlightPlanStatus,
    qt_static_metacall,
    qt_meta_extradata_FlightPlanStatus,
    nullptr
} };


const QMetaObject *FlightPlanStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightPlanStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightPlanStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int FlightPlanStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 34;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FlightPlanStatus::errorFileIDChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlightPlanStatus::ErrorFileIDChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FlightPlanStatus::errorLineNumChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FlightPlanStatus::ErrorLineNumChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FlightPlanStatus::debugChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FlightPlanStatus::DebugChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FlightPlanStatus::debug0Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FlightPlanStatus::Debug_0Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FlightPlanStatus::debug1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FlightPlanStatus::Debug_1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FlightPlanStatus::statusChanged(const FlightPlanStatus_Status::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FlightPlanStatus::StatusChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FlightPlanStatus::errorTypeChanged(const FlightPlanStatus_ErrorType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FlightPlanStatus::ErrorTypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
