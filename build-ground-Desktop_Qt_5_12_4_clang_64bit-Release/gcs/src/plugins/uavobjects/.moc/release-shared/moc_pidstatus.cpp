/****************************************************************************
** Meta object code from reading C++ file 'pidstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pidstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pidstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PIDStatusConstants_t {
    QByteArrayData data[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PIDStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PIDStatusConstants_t qt_meta_stringdata_PIDStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PIDStatusConstants"
QT_MOC_LITERAL(1, 19, 4) // "Enum"

    },
    "PIDStatusConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PIDStatusConstants[] = {

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

void PIDStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PIDStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PIDStatusConstants.data,
    qt_meta_data_PIDStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PIDStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PIDStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PIDStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PIDStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PIDStatus_t {
    QByteArrayData data[52];
    char stringdata0[432];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PIDStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PIDStatus_t qt_meta_stringdata_PIDStatus = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PIDStatus"
QT_MOC_LITERAL(1, 10, 15), // "setpointChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 13), // "actualChanged"
QT_MOC_LITERAL(5, 47, 12), // "errorChanged"
QT_MOC_LITERAL(6, 60, 11), // "ulowChanged"
QT_MOC_LITERAL(7, 72, 12), // "uhighChanged"
QT_MOC_LITERAL(8, 85, 14), // "commandChanged"
QT_MOC_LITERAL(9, 100, 8), // "pChanged"
QT_MOC_LITERAL(10, 109, 8), // "PChanged"
QT_MOC_LITERAL(11, 118, 8), // "iChanged"
QT_MOC_LITERAL(12, 127, 8), // "IChanged"
QT_MOC_LITERAL(13, 136, 8), // "dChanged"
QT_MOC_LITERAL(14, 145, 8), // "DChanged"
QT_MOC_LITERAL(15, 154, 11), // "setSetpoint"
QT_MOC_LITERAL(16, 166, 11), // "setsetpoint"
QT_MOC_LITERAL(17, 178, 9), // "setActual"
QT_MOC_LITERAL(18, 188, 9), // "setactual"
QT_MOC_LITERAL(19, 198, 8), // "setError"
QT_MOC_LITERAL(20, 207, 8), // "seterror"
QT_MOC_LITERAL(21, 216, 7), // "setUlow"
QT_MOC_LITERAL(22, 224, 7), // "setulow"
QT_MOC_LITERAL(23, 232, 8), // "setUhigh"
QT_MOC_LITERAL(24, 241, 8), // "setuhigh"
QT_MOC_LITERAL(25, 250, 10), // "setCommand"
QT_MOC_LITERAL(26, 261, 10), // "setcommand"
QT_MOC_LITERAL(27, 272, 4), // "setP"
QT_MOC_LITERAL(28, 277, 4), // "setI"
QT_MOC_LITERAL(29, 282, 4), // "setD"
QT_MOC_LITERAL(30, 287, 17), // "emitNotifications"
QT_MOC_LITERAL(31, 305, 11), // "getsetpoint"
QT_MOC_LITERAL(32, 317, 9), // "getactual"
QT_MOC_LITERAL(33, 327, 8), // "geterror"
QT_MOC_LITERAL(34, 336, 7), // "getulow"
QT_MOC_LITERAL(35, 344, 8), // "getuhigh"
QT_MOC_LITERAL(36, 353, 10), // "getcommand"
QT_MOC_LITERAL(37, 364, 4), // "getP"
QT_MOC_LITERAL(38, 369, 4), // "getI"
QT_MOC_LITERAL(39, 374, 4), // "getD"
QT_MOC_LITERAL(40, 379, 8), // "setpoint"
QT_MOC_LITERAL(41, 388, 6), // "actual"
QT_MOC_LITERAL(42, 395, 5), // "error"
QT_MOC_LITERAL(43, 401, 4), // "ulow"
QT_MOC_LITERAL(44, 406, 5), // "uhigh"
QT_MOC_LITERAL(45, 412, 7), // "command"
QT_MOC_LITERAL(46, 420, 1), // "p"
QT_MOC_LITERAL(47, 422, 1), // "i"
QT_MOC_LITERAL(48, 424, 1), // "d"
QT_MOC_LITERAL(49, 426, 1), // "P"
QT_MOC_LITERAL(50, 428, 1), // "I"
QT_MOC_LITERAL(51, 430, 1) // "D"

    },
    "PIDStatus\0setpointChanged\0\0value\0"
    "actualChanged\0errorChanged\0ulowChanged\0"
    "uhighChanged\0commandChanged\0pChanged\0"
    "PChanged\0iChanged\0IChanged\0dChanged\0"
    "DChanged\0setSetpoint\0setsetpoint\0"
    "setActual\0setactual\0setError\0seterror\0"
    "setUlow\0setulow\0setUhigh\0setuhigh\0"
    "setCommand\0setcommand\0setP\0setI\0setD\0"
    "emitNotifications\0getsetpoint\0getactual\0"
    "geterror\0getulow\0getuhigh\0getcommand\0"
    "getP\0getI\0getD\0setpoint\0actual\0error\0"
    "ulow\0uhigh\0command\0p\0i\0d\0P\0I\0D"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PIDStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
      12,  290, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  199,    2, 0x06 /* Public */,
       4,    1,  202,    2, 0x06 /* Public */,
       5,    1,  205,    2, 0x06 /* Public */,
       6,    1,  208,    2, 0x06 /* Public */,
       7,    1,  211,    2, 0x06 /* Public */,
       8,    1,  214,    2, 0x06 /* Public */,
       9,    1,  217,    2, 0x06 /* Public */,
      10,    1,  220,    2, 0x06 /* Public */,
      11,    1,  223,    2, 0x06 /* Public */,
      12,    1,  226,    2, 0x06 /* Public */,
      13,    1,  229,    2, 0x06 /* Public */,
      14,    1,  232,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  235,    2, 0x0a /* Public */,
      16,    1,  238,    2, 0x0a /* Public */,
      17,    1,  241,    2, 0x0a /* Public */,
      18,    1,  244,    2, 0x0a /* Public */,
      19,    1,  247,    2, 0x0a /* Public */,
      20,    1,  250,    2, 0x0a /* Public */,
      21,    1,  253,    2, 0x0a /* Public */,
      22,    1,  256,    2, 0x0a /* Public */,
      23,    1,  259,    2, 0x0a /* Public */,
      24,    1,  262,    2, 0x0a /* Public */,
      25,    1,  265,    2, 0x0a /* Public */,
      26,    1,  268,    2, 0x0a /* Public */,
      27,    1,  271,    2, 0x0a /* Public */,
      28,    1,  274,    2, 0x0a /* Public */,
      29,    1,  277,    2, 0x0a /* Public */,
      30,    0,  280,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      31,    0,  281,    2, 0x02 /* Public */,
      32,    0,  282,    2, 0x02 /* Public */,
      33,    0,  283,    2, 0x02 /* Public */,
      34,    0,  284,    2, 0x02 /* Public */,
      35,    0,  285,    2, 0x02 /* Public */,
      36,    0,  286,    2, 0x02 /* Public */,
      37,    0,  287,    2, 0x02 /* Public */,
      38,    0,  288,    2, 0x02 /* Public */,
      39,    0,  289,    2, 0x02 /* Public */,

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

 // properties: name, type, flags
      40, QMetaType::Float, 0x00495103,
      41, QMetaType::Float, 0x00495103,
      42, QMetaType::Float, 0x00495103,
      43, QMetaType::Float, 0x00495103,
      44, QMetaType::Float, 0x00495103,
      45, QMetaType::Float, 0x00495103,
      46, QMetaType::Float, 0x00495103,
      47, QMetaType::Float, 0x00495103,
      48, QMetaType::Float, 0x00495103,
      49, QMetaType::Float, 0x00495103,
      50, QMetaType::Float, 0x00495103,
      51, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       8,
      10,
       7,
       9,
      11,

       0        // eod
};

void PIDStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PIDStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setpointChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->actualChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->errorChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->ulowChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 4: _t->uhighChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->commandChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 6: _t->pChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->PChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->iChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->IChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->dChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->DChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->setSetpoint((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->setsetpoint((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->setActual((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->setactual((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->setError((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->seterror((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->setUlow((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->setulow((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->setUhigh((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->setuhigh((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->setCommand((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->setcommand((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->setP((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->setI((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 26: _t->setD((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->emitNotifications(); break;
        case 28: { float _r = _t->getsetpoint();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 29: { float _r = _t->getactual();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 30: { float _r = _t->geterror();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 31: { float _r = _t->getulow();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 32: { float _r = _t->getuhigh();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 33: { float _r = _t->getcommand();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 34: { float _r = _t->getP();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 35: { float _r = _t->getI();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 36: { float _r = _t->getD();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PIDStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PIDStatus::setpointChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PIDStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PIDStatus::actualChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PIDStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PIDStatus::errorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PIDStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PIDStatus::ulowChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PIDStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PIDStatus::uhighChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PIDStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PIDStatus::commandChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PIDStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PIDStatus::pChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PIDStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PIDStatus::PChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PIDStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PIDStatus::iChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PIDStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PIDStatus::IChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PIDStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PIDStatus::dChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PIDStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PIDStatus::DChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PIDStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->setpoint(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->actual(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->error(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->ulow(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->uhigh(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->command(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->p(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->i(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->d(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getP(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getI(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getD(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PIDStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSetpoint(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setActual(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setError(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setUlow(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setUhigh(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setCommand(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setP(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setI(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setD(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setP(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setI(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setD(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PIDStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_PIDStatus.data,
    qt_meta_data_PIDStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PIDStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PIDStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PIDStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int PIDStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
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
void PIDStatus::setpointChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PIDStatus::actualChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PIDStatus::errorChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PIDStatus::ulowChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PIDStatus::uhighChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PIDStatus::commandChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PIDStatus::pChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PIDStatus::PChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PIDStatus::iChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PIDStatus::IChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PIDStatus::dChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PIDStatus::DChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
