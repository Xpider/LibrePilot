/****************************************************************************
** Meta object code from reading C++ file 'vtolselftuningstats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../vtolselftuningstats.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vtolselftuningstats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VtolSelfTuningStatsConstants_t {
    QByteArrayData data[2];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VtolSelfTuningStatsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VtolSelfTuningStatsConstants_t qt_meta_stringdata_VtolSelfTuningStatsConstants = {
    {
QT_MOC_LITERAL(0, 0, 28), // "VtolSelfTuningStatsConstants"
QT_MOC_LITERAL(1, 29, 4) // "Enum"

    },
    "VtolSelfTuningStatsConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VtolSelfTuningStatsConstants[] = {

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

void VtolSelfTuningStatsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VtolSelfTuningStatsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VtolSelfTuningStatsConstants.data,
    qt_meta_data_VtolSelfTuningStatsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VtolSelfTuningStatsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VtolSelfTuningStatsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VtolSelfTuningStatsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VtolSelfTuningStatsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VtolSelfTuningStats_t {
    QByteArrayData data[28];
    char stringdata0[653];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VtolSelfTuningStats_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VtolSelfTuningStats_t qt_meta_stringdata_VtolSelfTuningStats = {
    {
QT_MOC_LITERAL(0, 0, 19), // "VtolSelfTuningStats"
QT_MOC_LITERAL(1, 20, 26), // "neutralThrustOffsetChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "value"
QT_MOC_LITERAL(4, 54, 26), // "NeutralThrustOffsetChanged"
QT_MOC_LITERAL(5, 81, 30), // "neutralThrustCorrectionChanged"
QT_MOC_LITERAL(6, 112, 30), // "NeutralThrustCorrectionChanged"
QT_MOC_LITERAL(7, 143, 31), // "neutralThrustAccumulatorChanged"
QT_MOC_LITERAL(8, 175, 31), // "NeutralThrustAccumulatorChanged"
QT_MOC_LITERAL(9, 207, 25), // "neutralThrustRangeChanged"
QT_MOC_LITERAL(10, 233, 25), // "NeutralThrustRangeChanged"
QT_MOC_LITERAL(11, 259, 22), // "setNeutralThrustOffset"
QT_MOC_LITERAL(12, 282, 26), // "setNeutralThrustCorrection"
QT_MOC_LITERAL(13, 309, 27), // "setNeutralThrustAccumulator"
QT_MOC_LITERAL(14, 337, 21), // "setNeutralThrustRange"
QT_MOC_LITERAL(15, 359, 17), // "emitNotifications"
QT_MOC_LITERAL(16, 377, 22), // "getNeutralThrustOffset"
QT_MOC_LITERAL(17, 400, 26), // "getNeutralThrustCorrection"
QT_MOC_LITERAL(18, 427, 27), // "getNeutralThrustAccumulator"
QT_MOC_LITERAL(19, 455, 21), // "getNeutralThrustRange"
QT_MOC_LITERAL(20, 477, 19), // "neutralThrustOffset"
QT_MOC_LITERAL(21, 497, 23), // "neutralThrustCorrection"
QT_MOC_LITERAL(22, 521, 24), // "neutralThrustAccumulator"
QT_MOC_LITERAL(23, 546, 18), // "neutralThrustRange"
QT_MOC_LITERAL(24, 565, 19), // "NeutralThrustOffset"
QT_MOC_LITERAL(25, 585, 23), // "NeutralThrustCorrection"
QT_MOC_LITERAL(26, 609, 24), // "NeutralThrustAccumulator"
QT_MOC_LITERAL(27, 634, 18) // "NeutralThrustRange"

    },
    "VtolSelfTuningStats\0neutralThrustOffsetChanged\0"
    "\0value\0NeutralThrustOffsetChanged\0"
    "neutralThrustCorrectionChanged\0"
    "NeutralThrustCorrectionChanged\0"
    "neutralThrustAccumulatorChanged\0"
    "NeutralThrustAccumulatorChanged\0"
    "neutralThrustRangeChanged\0"
    "NeutralThrustRangeChanged\0"
    "setNeutralThrustOffset\0"
    "setNeutralThrustCorrection\0"
    "setNeutralThrustAccumulator\0"
    "setNeutralThrustRange\0emitNotifications\0"
    "getNeutralThrustOffset\0"
    "getNeutralThrustCorrection\0"
    "getNeutralThrustAccumulator\0"
    "getNeutralThrustRange\0neutralThrustOffset\0"
    "neutralThrustCorrection\0"
    "neutralThrustAccumulator\0neutralThrustRange\0"
    "NeutralThrustOffset\0NeutralThrustCorrection\0"
    "NeutralThrustAccumulator\0NeutralThrustRange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VtolSelfTuningStats[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       8,  140, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       5,    1,  105,    2, 0x06 /* Public */,
       6,    1,  108,    2, 0x06 /* Public */,
       7,    1,  111,    2, 0x06 /* Public */,
       8,    1,  114,    2, 0x06 /* Public */,
       9,    1,  117,    2, 0x06 /* Public */,
      10,    1,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  123,    2, 0x0a /* Public */,
      12,    1,  126,    2, 0x0a /* Public */,
      13,    1,  129,    2, 0x0a /* Public */,
      14,    1,  132,    2, 0x0a /* Public */,
      15,    0,  135,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      16,    0,  136,    2, 0x02 /* Public */,
      17,    0,  137,    2, 0x02 /* Public */,
      18,    0,  138,    2, 0x02 /* Public */,
      19,    0,  139,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      20, QMetaType::Float, 0x00495103,
      21, QMetaType::Float, 0x00495103,
      22, QMetaType::Float, 0x00495103,
      23, QMetaType::Float, 0x00495103,
      24, QMetaType::Float, 0x00495103,
      25, QMetaType::Float, 0x00495103,
      26, QMetaType::Float, 0x00495103,
      27, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       1,
       3,
       5,
       7,

       0        // eod
};

void VtolSelfTuningStats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VtolSelfTuningStats *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->neutralThrustOffsetChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->NeutralThrustOffsetChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->neutralThrustCorrectionChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->NeutralThrustCorrectionChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->neutralThrustAccumulatorChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->NeutralThrustAccumulatorChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->neutralThrustRangeChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->NeutralThrustRangeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setNeutralThrustOffset((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->setNeutralThrustCorrection((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 10: _t->setNeutralThrustAccumulator((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->setNeutralThrustRange((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 12: _t->emitNotifications(); break;
        case 13: { float _r = _t->getNeutralThrustOffset();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 14: { float _r = _t->getNeutralThrustCorrection();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 15: { float _r = _t->getNeutralThrustAccumulator();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 16: { float _r = _t->getNeutralThrustRange();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VtolSelfTuningStats::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolSelfTuningStats::neutralThrustOffsetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VtolSelfTuningStats::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolSelfTuningStats::NeutralThrustOffsetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VtolSelfTuningStats::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolSelfTuningStats::neutralThrustCorrectionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VtolSelfTuningStats::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolSelfTuningStats::NeutralThrustCorrectionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VtolSelfTuningStats::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolSelfTuningStats::neutralThrustAccumulatorChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VtolSelfTuningStats::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolSelfTuningStats::NeutralThrustAccumulatorChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VtolSelfTuningStats::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolSelfTuningStats::neutralThrustRangeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (VtolSelfTuningStats::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VtolSelfTuningStats::NeutralThrustRangeChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VtolSelfTuningStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->neutralThrustOffset(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->neutralThrustCorrection(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->neutralThrustAccumulator(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->neutralThrustRange(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getNeutralThrustOffset(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getNeutralThrustCorrection(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getNeutralThrustAccumulator(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getNeutralThrustRange(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VtolSelfTuningStats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNeutralThrustOffset(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setNeutralThrustCorrection(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setNeutralThrustAccumulator(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setNeutralThrustRange(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setNeutralThrustOffset(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setNeutralThrustCorrection(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setNeutralThrustAccumulator(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setNeutralThrustRange(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VtolSelfTuningStats::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_VtolSelfTuningStats.data,
    qt_meta_data_VtolSelfTuningStats,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VtolSelfTuningStats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VtolSelfTuningStats::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VtolSelfTuningStats.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int VtolSelfTuningStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VtolSelfTuningStats::neutralThrustOffsetChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VtolSelfTuningStats::NeutralThrustOffsetChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VtolSelfTuningStats::neutralThrustCorrectionChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VtolSelfTuningStats::NeutralThrustCorrectionChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VtolSelfTuningStats::neutralThrustAccumulatorChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VtolSelfTuningStats::NeutralThrustAccumulatorChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void VtolSelfTuningStats::neutralThrustRangeChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void VtolSelfTuningStats::NeutralThrustRangeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
