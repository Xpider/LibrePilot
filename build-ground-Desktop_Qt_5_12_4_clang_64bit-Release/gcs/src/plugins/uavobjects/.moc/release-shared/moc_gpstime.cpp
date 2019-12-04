/****************************************************************************
** Meta object code from reading C++ file 'gpstime.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gpstime.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpstime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPSTimeConstants_t {
    QByteArrayData data[2];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSTimeConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSTimeConstants_t qt_meta_stringdata_GPSTimeConstants = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GPSTimeConstants"
QT_MOC_LITERAL(1, 17, 4) // "Enum"

    },
    "GPSTimeConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSTimeConstants[] = {

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

void GPSTimeConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GPSTimeConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSTimeConstants.data,
    qt_meta_data_GPSTimeConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSTimeConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSTimeConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSTimeConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSTimeConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GPSTime_t {
    QByteArrayData data[46];
    char stringdata0[449];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSTime_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSTime_t qt_meta_stringdata_GPSTime = {
    {
QT_MOC_LITERAL(0, 0, 7), // "GPSTime"
QT_MOC_LITERAL(1, 8, 11), // "yearChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "value"
QT_MOC_LITERAL(4, 27, 11), // "YearChanged"
QT_MOC_LITERAL(5, 39, 18), // "millisecondChanged"
QT_MOC_LITERAL(6, 58, 18), // "MillisecondChanged"
QT_MOC_LITERAL(7, 77, 12), // "monthChanged"
QT_MOC_LITERAL(8, 90, 12), // "MonthChanged"
QT_MOC_LITERAL(9, 103, 10), // "dayChanged"
QT_MOC_LITERAL(10, 114, 10), // "DayChanged"
QT_MOC_LITERAL(11, 125, 11), // "hourChanged"
QT_MOC_LITERAL(12, 137, 11), // "HourChanged"
QT_MOC_LITERAL(13, 149, 13), // "minuteChanged"
QT_MOC_LITERAL(14, 163, 13), // "MinuteChanged"
QT_MOC_LITERAL(15, 177, 13), // "secondChanged"
QT_MOC_LITERAL(16, 191, 13), // "SecondChanged"
QT_MOC_LITERAL(17, 205, 7), // "setYear"
QT_MOC_LITERAL(18, 213, 14), // "setMillisecond"
QT_MOC_LITERAL(19, 228, 8), // "setMonth"
QT_MOC_LITERAL(20, 237, 6), // "setDay"
QT_MOC_LITERAL(21, 244, 7), // "setHour"
QT_MOC_LITERAL(22, 252, 9), // "setMinute"
QT_MOC_LITERAL(23, 262, 9), // "setSecond"
QT_MOC_LITERAL(24, 272, 17), // "emitNotifications"
QT_MOC_LITERAL(25, 290, 7), // "getYear"
QT_MOC_LITERAL(26, 298, 14), // "getMillisecond"
QT_MOC_LITERAL(27, 313, 8), // "getMonth"
QT_MOC_LITERAL(28, 322, 6), // "getDay"
QT_MOC_LITERAL(29, 329, 7), // "getHour"
QT_MOC_LITERAL(30, 337, 9), // "getMinute"
QT_MOC_LITERAL(31, 347, 9), // "getSecond"
QT_MOC_LITERAL(32, 357, 4), // "year"
QT_MOC_LITERAL(33, 362, 11), // "millisecond"
QT_MOC_LITERAL(34, 374, 5), // "month"
QT_MOC_LITERAL(35, 380, 3), // "day"
QT_MOC_LITERAL(36, 384, 4), // "hour"
QT_MOC_LITERAL(37, 389, 6), // "minute"
QT_MOC_LITERAL(38, 396, 6), // "second"
QT_MOC_LITERAL(39, 403, 4), // "Year"
QT_MOC_LITERAL(40, 408, 11), // "Millisecond"
QT_MOC_LITERAL(41, 420, 5), // "Month"
QT_MOC_LITERAL(42, 426, 3), // "Day"
QT_MOC_LITERAL(43, 430, 4), // "Hour"
QT_MOC_LITERAL(44, 435, 6), // "Minute"
QT_MOC_LITERAL(45, 442, 6) // "Second"

    },
    "GPSTime\0yearChanged\0\0value\0YearChanged\0"
    "millisecondChanged\0MillisecondChanged\0"
    "monthChanged\0MonthChanged\0dayChanged\0"
    "DayChanged\0hourChanged\0HourChanged\0"
    "minuteChanged\0MinuteChanged\0secondChanged\0"
    "SecondChanged\0setYear\0setMillisecond\0"
    "setMonth\0setDay\0setHour\0setMinute\0"
    "setSecond\0emitNotifications\0getYear\0"
    "getMillisecond\0getMonth\0getDay\0getHour\0"
    "getMinute\0getSecond\0year\0millisecond\0"
    "month\0day\0hour\0minute\0second\0Year\0"
    "Millisecond\0Month\0Day\0Hour\0Minute\0"
    "Second"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSTime[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
      14,  270, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  184,    2, 0x06 /* Public */,
       4,    1,  187,    2, 0x06 /* Public */,
       5,    1,  190,    2, 0x06 /* Public */,
       6,    1,  193,    2, 0x06 /* Public */,
       7,    1,  196,    2, 0x06 /* Public */,
       8,    1,  199,    2, 0x06 /* Public */,
       9,    1,  202,    2, 0x06 /* Public */,
      10,    1,  205,    2, 0x06 /* Public */,
      11,    1,  208,    2, 0x06 /* Public */,
      12,    1,  211,    2, 0x06 /* Public */,
      13,    1,  214,    2, 0x06 /* Public */,
      14,    1,  217,    2, 0x06 /* Public */,
      15,    1,  220,    2, 0x06 /* Public */,
      16,    1,  223,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  226,    2, 0x0a /* Public */,
      18,    1,  229,    2, 0x0a /* Public */,
      19,    1,  232,    2, 0x0a /* Public */,
      19,    1,  235,    2, 0x0a /* Public */,
      20,    1,  238,    2, 0x0a /* Public */,
      20,    1,  241,    2, 0x0a /* Public */,
      21,    1,  244,    2, 0x0a /* Public */,
      21,    1,  247,    2, 0x0a /* Public */,
      22,    1,  250,    2, 0x0a /* Public */,
      22,    1,  253,    2, 0x0a /* Public */,
      23,    1,  256,    2, 0x0a /* Public */,
      23,    1,  259,    2, 0x0a /* Public */,
      24,    0,  262,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      25,    0,  263,    2, 0x02 /* Public */,
      26,    0,  264,    2, 0x02 /* Public */,
      27,    0,  265,    2, 0x02 /* Public */,
      28,    0,  266,    2, 0x02 /* Public */,
      29,    0,  267,    2, 0x02 /* Public */,
      30,    0,  268,    2, 0x02 /* Public */,
      31,    0,  269,    2, 0x02 /* Public */,

 // signals: parameters
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

 // slots: parameters
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
    QMetaType::Void,

 // methods: parameters
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,
    QMetaType::SChar,

 // properties: name, type, flags
      32, QMetaType::Short, 0x00495103,
      33, QMetaType::Short, 0x00495103,
      34, QMetaType::Short, 0x00495103,
      35, QMetaType::Short, 0x00495103,
      36, QMetaType::Short, 0x00495103,
      37, QMetaType::Short, 0x00495103,
      38, QMetaType::Short, 0x00495103,
      39, QMetaType::Short, 0x00495103,
      40, QMetaType::Short, 0x00495103,
      41, QMetaType::SChar, 0x00495103,
      42, QMetaType::SChar, 0x00495103,
      43, QMetaType::SChar, 0x00495103,
      44, QMetaType::SChar, 0x00495103,
      45, QMetaType::SChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       8,
      10,
      12,
       1,
       3,
       5,
       7,
       9,
      11,
      13,

       0        // eod
};

void GPSTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPSTime *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->yearChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 1: _t->YearChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 2: _t->millisecondChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 3: _t->MillisecondChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 4: _t->monthChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 5: _t->MonthChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 6: _t->dayChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 7: _t->DayChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 8: _t->hourChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 9: _t->HourChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 10: _t->minuteChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 11: _t->MinuteChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 12: _t->secondChanged((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 13: _t->SecondChanged((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 14: _t->setYear((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 15: _t->setMillisecond((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 16: _t->setMonth((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 17: _t->setMonth((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 18: _t->setDay((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 19: _t->setDay((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 20: _t->setHour((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 21: _t->setHour((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 22: _t->setMinute((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 23: _t->setMinute((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 24: _t->setSecond((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 25: _t->setSecond((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 26: _t->emitNotifications(); break;
        case 27: { qint16 _r = _t->getYear();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 28: { qint16 _r = _t->getMillisecond();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 29: { qint8 _r = _t->getMonth();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 30: { qint8 _r = _t->getDay();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 31: { qint8 _r = _t->getHour();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 32: { qint8 _r = _t->getMinute();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        case 33: { qint8 _r = _t->getSecond();
            if (_a[0]) *reinterpret_cast< qint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GPSTime::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::yearChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::YearChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::millisecondChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::MillisecondChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::monthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::MonthChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::dayChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::DayChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::hourChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::HourChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::minuteChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::MinuteChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::secondChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GPSTime::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSTime::SecondChanged)) {
                *result = 13;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GPSTime *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint16*>(_v) = _t->year(); break;
        case 1: *reinterpret_cast< qint16*>(_v) = _t->millisecond(); break;
        case 2: *reinterpret_cast< qint16*>(_v) = _t->month(); break;
        case 3: *reinterpret_cast< qint16*>(_v) = _t->day(); break;
        case 4: *reinterpret_cast< qint16*>(_v) = _t->hour(); break;
        case 5: *reinterpret_cast< qint16*>(_v) = _t->minute(); break;
        case 6: *reinterpret_cast< qint16*>(_v) = _t->second(); break;
        case 7: *reinterpret_cast< qint16*>(_v) = _t->getYear(); break;
        case 8: *reinterpret_cast< qint16*>(_v) = _t->getMillisecond(); break;
        case 9: *reinterpret_cast< qint8*>(_v) = _t->getMonth(); break;
        case 10: *reinterpret_cast< qint8*>(_v) = _t->getDay(); break;
        case 11: *reinterpret_cast< qint8*>(_v) = _t->getHour(); break;
        case 12: *reinterpret_cast< qint8*>(_v) = _t->getMinute(); break;
        case 13: *reinterpret_cast< qint8*>(_v) = _t->getSecond(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GPSTime *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setYear(*reinterpret_cast< qint16*>(_v)); break;
        case 1: _t->setMillisecond(*reinterpret_cast< qint16*>(_v)); break;
        case 2: _t->setMonth(*reinterpret_cast< qint16*>(_v)); break;
        case 3: _t->setDay(*reinterpret_cast< qint16*>(_v)); break;
        case 4: _t->setHour(*reinterpret_cast< qint16*>(_v)); break;
        case 5: _t->setMinute(*reinterpret_cast< qint16*>(_v)); break;
        case 6: _t->setSecond(*reinterpret_cast< qint16*>(_v)); break;
        case 7: _t->setYear(*reinterpret_cast< qint16*>(_v)); break;
        case 8: _t->setMillisecond(*reinterpret_cast< qint16*>(_v)); break;
        case 9: _t->setMonth(*reinterpret_cast< qint8*>(_v)); break;
        case 10: _t->setDay(*reinterpret_cast< qint8*>(_v)); break;
        case 11: _t->setHour(*reinterpret_cast< qint8*>(_v)); break;
        case 12: _t->setMinute(*reinterpret_cast< qint8*>(_v)); break;
        case 13: _t->setSecond(*reinterpret_cast< qint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GPSTime::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_GPSTime.data,
    qt_meta_data_GPSTime,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSTime::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSTime.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int GPSTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GPSTime::yearChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GPSTime::YearChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GPSTime::millisecondChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GPSTime::MillisecondChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GPSTime::monthChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GPSTime::MonthChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GPSTime::dayChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GPSTime::DayChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GPSTime::hourChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GPSTime::HourChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GPSTime::minuteChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GPSTime::MinuteChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GPSTime::secondChanged(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GPSTime::SecondChanged(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
