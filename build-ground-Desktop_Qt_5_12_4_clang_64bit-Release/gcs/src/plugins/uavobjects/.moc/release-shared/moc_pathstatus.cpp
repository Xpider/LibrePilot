/****************************************************************************
** Meta object code from reading C++ file 'pathstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pathstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PathStatusConstants_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathStatusConstants_t qt_meta_stringdata_PathStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PathStatusConstants"
QT_MOC_LITERAL(1, 20, 4), // "Enum"
QT_MOC_LITERAL(2, 25, 11) // "StatusCount"

    },
    "PathStatusConstants\0Enum\0StatusCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathStatusConstants[] = {

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
       2, uint(PathStatusConstants::StatusCount),

       0        // eod
};

void PathStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PathStatusConstants.data,
    qt_meta_data_PathStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PathStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathStatus_Status_t {
    QByteArrayData data[6];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathStatus_Status_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathStatus_Status_t qt_meta_stringdata_PathStatus_Status = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PathStatus_Status"
QT_MOC_LITERAL(1, 18, 4), // "Enum"
QT_MOC_LITERAL(2, 23, 10), // "InProgress"
QT_MOC_LITERAL(3, 34, 9), // "Completed"
QT_MOC_LITERAL(4, 44, 7), // "Warning"
QT_MOC_LITERAL(5, 52, 8) // "Critical"

    },
    "PathStatus_Status\0Enum\0InProgress\0"
    "Completed\0Warning\0Critical"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathStatus_Status[] = {

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
       2, uint(PathStatus_Status::InProgress),
       3, uint(PathStatus_Status::Completed),
       4, uint(PathStatus_Status::Warning),
       5, uint(PathStatus_Status::Critical),

       0        // eod
};

void PathStatus_Status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathStatus_Status::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PathStatus_Status.data,
    qt_meta_data_PathStatus_Status,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathStatus_Status::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathStatus_Status::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathStatus_Status.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PathStatus_Status::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathStatus_t {
    QByteArrayData data[78];
    char stringdata0[1544];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathStatus_t qt_meta_stringdata_PathStatus = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PathStatus"
QT_MOC_LITERAL(1, 11, 25), // "fractionalProgressChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "value"
QT_MOC_LITERAL(4, 44, 26), // "fractional_progressChanged"
QT_MOC_LITERAL(5, 71, 12), // "errorChanged"
QT_MOC_LITERAL(6, 84, 25), // "pathDirectionNorthChanged"
QT_MOC_LITERAL(7, 110, 27), // "path_direction_northChanged"
QT_MOC_LITERAL(8, 138, 24), // "pathDirectionEastChanged"
QT_MOC_LITERAL(9, 163, 26), // "path_direction_eastChanged"
QT_MOC_LITERAL(10, 190, 24), // "pathDirectionDownChanged"
QT_MOC_LITERAL(11, 215, 26), // "path_direction_downChanged"
QT_MOC_LITERAL(12, 242, 31), // "correctionDirectionNorthChanged"
QT_MOC_LITERAL(13, 274, 33), // "correction_direction_northCha..."
QT_MOC_LITERAL(14, 308, 30), // "correctionDirectionEastChanged"
QT_MOC_LITERAL(15, 339, 32), // "correction_direction_eastChanged"
QT_MOC_LITERAL(16, 372, 30), // "correctionDirectionDownChanged"
QT_MOC_LITERAL(17, 403, 32), // "correction_direction_downChanged"
QT_MOC_LITERAL(18, 436, 15), // "pathTimeChanged"
QT_MOC_LITERAL(19, 452, 16), // "path_timeChanged"
QT_MOC_LITERAL(20, 469, 10), // "uidChanged"
QT_MOC_LITERAL(21, 480, 10), // "UIDChanged"
QT_MOC_LITERAL(22, 491, 13), // "statusChanged"
QT_MOC_LITERAL(23, 505, 23), // "PathStatus_Status::Enum"
QT_MOC_LITERAL(24, 529, 13), // "StatusChanged"
QT_MOC_LITERAL(25, 543, 21), // "setFractionalProgress"
QT_MOC_LITERAL(26, 565, 22), // "setfractional_progress"
QT_MOC_LITERAL(27, 588, 8), // "setError"
QT_MOC_LITERAL(28, 597, 8), // "seterror"
QT_MOC_LITERAL(29, 606, 21), // "setPathDirectionNorth"
QT_MOC_LITERAL(30, 628, 23), // "setpath_direction_north"
QT_MOC_LITERAL(31, 652, 20), // "setPathDirectionEast"
QT_MOC_LITERAL(32, 673, 22), // "setpath_direction_east"
QT_MOC_LITERAL(33, 696, 20), // "setPathDirectionDown"
QT_MOC_LITERAL(34, 717, 22), // "setpath_direction_down"
QT_MOC_LITERAL(35, 740, 27), // "setCorrectionDirectionNorth"
QT_MOC_LITERAL(36, 768, 29), // "setcorrection_direction_north"
QT_MOC_LITERAL(37, 798, 26), // "setCorrectionDirectionEast"
QT_MOC_LITERAL(38, 825, 28), // "setcorrection_direction_east"
QT_MOC_LITERAL(39, 854, 26), // "setCorrectionDirectionDown"
QT_MOC_LITERAL(40, 881, 28), // "setcorrection_direction_down"
QT_MOC_LITERAL(41, 910, 11), // "setPathTime"
QT_MOC_LITERAL(42, 922, 12), // "setpath_time"
QT_MOC_LITERAL(43, 935, 6), // "setUID"
QT_MOC_LITERAL(44, 942, 9), // "setStatus"
QT_MOC_LITERAL(45, 952, 17), // "emitNotifications"
QT_MOC_LITERAL(46, 970, 22), // "getfractional_progress"
QT_MOC_LITERAL(47, 993, 8), // "geterror"
QT_MOC_LITERAL(48, 1002, 23), // "getpath_direction_north"
QT_MOC_LITERAL(49, 1026, 22), // "getpath_direction_east"
QT_MOC_LITERAL(50, 1049, 22), // "getpath_direction_down"
QT_MOC_LITERAL(51, 1072, 29), // "getcorrection_direction_north"
QT_MOC_LITERAL(52, 1102, 28), // "getcorrection_direction_east"
QT_MOC_LITERAL(53, 1131, 28), // "getcorrection_direction_down"
QT_MOC_LITERAL(54, 1160, 12), // "getpath_time"
QT_MOC_LITERAL(55, 1173, 6), // "getUID"
QT_MOC_LITERAL(56, 1180, 9), // "getStatus"
QT_MOC_LITERAL(57, 1190, 18), // "fractionalProgress"
QT_MOC_LITERAL(58, 1209, 5), // "error"
QT_MOC_LITERAL(59, 1215, 18), // "pathDirectionNorth"
QT_MOC_LITERAL(60, 1234, 17), // "pathDirectionEast"
QT_MOC_LITERAL(61, 1252, 17), // "pathDirectionDown"
QT_MOC_LITERAL(62, 1270, 24), // "correctionDirectionNorth"
QT_MOC_LITERAL(63, 1295, 23), // "correctionDirectionEast"
QT_MOC_LITERAL(64, 1319, 23), // "correctionDirectionDown"
QT_MOC_LITERAL(65, 1343, 8), // "pathTime"
QT_MOC_LITERAL(66, 1352, 3), // "uid"
QT_MOC_LITERAL(67, 1356, 6), // "status"
QT_MOC_LITERAL(68, 1363, 19), // "fractional_progress"
QT_MOC_LITERAL(69, 1383, 20), // "path_direction_north"
QT_MOC_LITERAL(70, 1404, 19), // "path_direction_east"
QT_MOC_LITERAL(71, 1424, 19), // "path_direction_down"
QT_MOC_LITERAL(72, 1444, 26), // "correction_direction_north"
QT_MOC_LITERAL(73, 1471, 25), // "correction_direction_east"
QT_MOC_LITERAL(74, 1497, 25), // "correction_direction_down"
QT_MOC_LITERAL(75, 1523, 9), // "path_time"
QT_MOC_LITERAL(76, 1533, 3), // "UID"
QT_MOC_LITERAL(77, 1537, 6) // "Status"

    },
    "PathStatus\0fractionalProgressChanged\0"
    "\0value\0fractional_progressChanged\0"
    "errorChanged\0pathDirectionNorthChanged\0"
    "path_direction_northChanged\0"
    "pathDirectionEastChanged\0"
    "path_direction_eastChanged\0"
    "pathDirectionDownChanged\0"
    "path_direction_downChanged\0"
    "correctionDirectionNorthChanged\0"
    "correction_direction_northChanged\0"
    "correctionDirectionEastChanged\0"
    "correction_direction_eastChanged\0"
    "correctionDirectionDownChanged\0"
    "correction_direction_downChanged\0"
    "pathTimeChanged\0path_timeChanged\0"
    "uidChanged\0UIDChanged\0statusChanged\0"
    "PathStatus_Status::Enum\0StatusChanged\0"
    "setFractionalProgress\0setfractional_progress\0"
    "setError\0seterror\0setPathDirectionNorth\0"
    "setpath_direction_north\0setPathDirectionEast\0"
    "setpath_direction_east\0setPathDirectionDown\0"
    "setpath_direction_down\0"
    "setCorrectionDirectionNorth\0"
    "setcorrection_direction_north\0"
    "setCorrectionDirectionEast\0"
    "setcorrection_direction_east\0"
    "setCorrectionDirectionDown\0"
    "setcorrection_direction_down\0setPathTime\0"
    "setpath_time\0setUID\0setStatus\0"
    "emitNotifications\0getfractional_progress\0"
    "geterror\0getpath_direction_north\0"
    "getpath_direction_east\0getpath_direction_down\0"
    "getcorrection_direction_north\0"
    "getcorrection_direction_east\0"
    "getcorrection_direction_down\0getpath_time\0"
    "getUID\0getStatus\0fractionalProgress\0"
    "error\0pathDirectionNorth\0pathDirectionEast\0"
    "pathDirectionDown\0correctionDirectionNorth\0"
    "correctionDirectionEast\0correctionDirectionDown\0"
    "pathTime\0uid\0status\0fractional_progress\0"
    "path_direction_north\0path_direction_east\0"
    "path_direction_down\0correction_direction_north\0"
    "correction_direction_east\0"
    "correction_direction_down\0path_time\0"
    "UID\0Status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
      21,  422, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  284,    2, 0x06 /* Public */,
       4,    1,  287,    2, 0x06 /* Public */,
       5,    1,  290,    2, 0x06 /* Public */,
       6,    1,  293,    2, 0x06 /* Public */,
       7,    1,  296,    2, 0x06 /* Public */,
       8,    1,  299,    2, 0x06 /* Public */,
       9,    1,  302,    2, 0x06 /* Public */,
      10,    1,  305,    2, 0x06 /* Public */,
      11,    1,  308,    2, 0x06 /* Public */,
      12,    1,  311,    2, 0x06 /* Public */,
      13,    1,  314,    2, 0x06 /* Public */,
      14,    1,  317,    2, 0x06 /* Public */,
      15,    1,  320,    2, 0x06 /* Public */,
      16,    1,  323,    2, 0x06 /* Public */,
      17,    1,  326,    2, 0x06 /* Public */,
      18,    1,  329,    2, 0x06 /* Public */,
      19,    1,  332,    2, 0x06 /* Public */,
      20,    1,  335,    2, 0x06 /* Public */,
      21,    1,  338,    2, 0x06 /* Public */,
      22,    1,  341,    2, 0x06 /* Public */,
      24,    1,  344,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    1,  347,    2, 0x0a /* Public */,
      26,    1,  350,    2, 0x0a /* Public */,
      27,    1,  353,    2, 0x0a /* Public */,
      28,    1,  356,    2, 0x0a /* Public */,
      29,    1,  359,    2, 0x0a /* Public */,
      30,    1,  362,    2, 0x0a /* Public */,
      31,    1,  365,    2, 0x0a /* Public */,
      32,    1,  368,    2, 0x0a /* Public */,
      33,    1,  371,    2, 0x0a /* Public */,
      34,    1,  374,    2, 0x0a /* Public */,
      35,    1,  377,    2, 0x0a /* Public */,
      36,    1,  380,    2, 0x0a /* Public */,
      37,    1,  383,    2, 0x0a /* Public */,
      38,    1,  386,    2, 0x0a /* Public */,
      39,    1,  389,    2, 0x0a /* Public */,
      40,    1,  392,    2, 0x0a /* Public */,
      41,    1,  395,    2, 0x0a /* Public */,
      42,    1,  398,    2, 0x0a /* Public */,
      43,    1,  401,    2, 0x0a /* Public */,
      44,    1,  404,    2, 0x0a /* Public */,
      44,    1,  407,    2, 0x0a /* Public */,
      45,    0,  410,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      46,    0,  411,    2, 0x02 /* Public */,
      47,    0,  412,    2, 0x02 /* Public */,
      48,    0,  413,    2, 0x02 /* Public */,
      49,    0,  414,    2, 0x02 /* Public */,
      50,    0,  415,    2, 0x02 /* Public */,
      51,    0,  416,    2, 0x02 /* Public */,
      52,    0,  417,    2, 0x02 /* Public */,
      53,    0,  418,    2, 0x02 /* Public */,
      54,    0,  419,    2, 0x02 /* Public */,
      55,    0,  420,    2, 0x02 /* Public */,
      56,    0,  421,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, 0x80000000 | 23,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
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
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, 0x80000000 | 23,    3,
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
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Short,
    QMetaType::UChar,

 // properties: name, type, flags
      57, QMetaType::Float, 0x00495103,
      58, QMetaType::Float, 0x00495103,
      59, QMetaType::Float, 0x00495103,
      60, QMetaType::Float, 0x00495103,
      61, QMetaType::Float, 0x00495103,
      62, QMetaType::Float, 0x00495103,
      63, QMetaType::Float, 0x00495103,
      64, QMetaType::Float, 0x00495103,
      65, QMetaType::Float, 0x00495103,
      66, QMetaType::Short, 0x00495003,
      67, 0x80000000 | 23, 0x0049510b,
      68, QMetaType::Float, 0x00495003,
      69, QMetaType::Float, 0x00495003,
      70, QMetaType::Float, 0x00495003,
      71, QMetaType::Float, 0x00495003,
      72, QMetaType::Float, 0x00495003,
      73, QMetaType::Float, 0x00495003,
      74, QMetaType::Float, 0x00495003,
      75, QMetaType::Float, 0x00495003,
      76, QMetaType::Short, 0x00495103,
      77, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       3,
       5,
       7,
       9,
      11,
      13,
      15,
      17,
      19,
       1,
       4,
       6,
       8,
      10,
      12,
      14,
      16,
      18,
      20,

       0        // eod
};

void PathStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PathStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fractionalProgressChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->fractional_progressChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->errorChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->pathDirectionNorthChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 4: _t->path_direction_northChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->pathDirectionEastChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 6: _t->path_direction_eastChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->pathDirectionDownChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 8: _t->path_direction_downChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->correctionDirectionNorthChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 10: _t->correction_direction_northChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->correctionDirectionEastChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 12: _t->correction_direction_eastChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: _t->correctionDirectionDownChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 14: _t->correction_direction_downChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 15: _t->pathTimeChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 16: _t->path_timeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 17: _t->uidChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 18: _t->UIDChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 19: _t->statusChanged((*reinterpret_cast< const PathStatus_Status::Enum(*)>(_a[1]))); break;
        case 20: _t->StatusChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 21: _t->setFractionalProgress((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 22: _t->setfractional_progress((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 23: _t->setError((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 24: _t->seterror((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 25: _t->setPathDirectionNorth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 26: _t->setpath_direction_north((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 27: _t->setPathDirectionEast((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 28: _t->setpath_direction_east((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 29: _t->setPathDirectionDown((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 30: _t->setpath_direction_down((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 31: _t->setCorrectionDirectionNorth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 32: _t->setcorrection_direction_north((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 33: _t->setCorrectionDirectionEast((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 34: _t->setcorrection_direction_east((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 35: _t->setCorrectionDirectionDown((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 36: _t->setcorrection_direction_down((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 37: _t->setPathTime((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 38: _t->setpath_time((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->setUID((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 40: _t->setStatus((*reinterpret_cast< const PathStatus_Status::Enum(*)>(_a[1]))); break;
        case 41: _t->setStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->emitNotifications(); break;
        case 43: { float _r = _t->getfractional_progress();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 44: { float _r = _t->geterror();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 45: { float _r = _t->getpath_direction_north();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 46: { float _r = _t->getpath_direction_east();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 47: { float _r = _t->getpath_direction_down();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 48: { float _r = _t->getcorrection_direction_north();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 49: { float _r = _t->getcorrection_direction_east();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 50: { float _r = _t->getcorrection_direction_down();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 51: { float _r = _t->getpath_time();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 52: { qint16 _r = _t->getUID();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 53: { quint8 _r = _t->getStatus();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PathStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::fractionalProgressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::fractional_progressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::errorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::pathDirectionNorthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::path_direction_northChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::pathDirectionEastChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::path_direction_eastChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::pathDirectionDownChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::path_direction_downChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::correctionDirectionNorthChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::correction_direction_northChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::correctionDirectionEastChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::correction_direction_eastChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::correctionDirectionDownChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::correction_direction_downChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::pathTimeChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::path_timeChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::uidChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::UIDChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(const PathStatus_Status::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::statusChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (PathStatus::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStatus::StatusChanged)) {
                *result = 20;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PathStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->fractionalProgress(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->error(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->pathDirectionNorth(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->pathDirectionEast(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->pathDirectionDown(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->correctionDirectionNorth(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->correctionDirectionEast(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->correctionDirectionDown(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->pathTime(); break;
        case 9: *reinterpret_cast< qint16*>(_v) = _t->uid(); break;
        case 10: *reinterpret_cast< PathStatus_Status::Enum*>(_v) = _t->status(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getfractional_progress(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->getpath_direction_north(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getpath_direction_east(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getpath_direction_down(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getcorrection_direction_north(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getcorrection_direction_east(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getcorrection_direction_down(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getpath_time(); break;
        case 19: *reinterpret_cast< qint16*>(_v) = _t->getUID(); break;
        case 20: *reinterpret_cast< quint8*>(_v) = _t->getStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PathStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFractionalProgress(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setError(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setPathDirectionNorth(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setPathDirectionEast(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setPathDirectionDown(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setCorrectionDirectionNorth(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setCorrectionDirectionEast(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setCorrectionDirectionDown(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setPathTime(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setUID(*reinterpret_cast< qint16*>(_v)); break;
        case 10: _t->setStatus(*reinterpret_cast< PathStatus_Status::Enum*>(_v)); break;
        case 11: _t->setfractional_progress(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setpath_direction_north(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setpath_direction_east(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setpath_direction_down(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setcorrection_direction_north(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setcorrection_direction_east(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setcorrection_direction_down(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setpath_time(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setUID(*reinterpret_cast< qint16*>(_v)); break;
        case 20: _t->setStatus(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_PathStatus[] = {
        &PathStatus_Status::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject PathStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_PathStatus.data,
    qt_meta_data_PathStatus,
    qt_static_metacall,
    qt_meta_extradata_PathStatus,
    nullptr
} };


const QMetaObject *PathStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int PathStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 54;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 21;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PathStatus::fractionalProgressChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PathStatus::fractional_progressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PathStatus::errorChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PathStatus::pathDirectionNorthChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PathStatus::path_direction_northChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PathStatus::pathDirectionEastChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PathStatus::path_direction_eastChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PathStatus::pathDirectionDownChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PathStatus::path_direction_downChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PathStatus::correctionDirectionNorthChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PathStatus::correction_direction_northChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PathStatus::correctionDirectionEastChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PathStatus::correction_direction_eastChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void PathStatus::correctionDirectionDownChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void PathStatus::correction_direction_downChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void PathStatus::pathTimeChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void PathStatus::path_timeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void PathStatus::uidChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void PathStatus::UIDChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void PathStatus::statusChanged(const PathStatus_Status::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void PathStatus::StatusChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
