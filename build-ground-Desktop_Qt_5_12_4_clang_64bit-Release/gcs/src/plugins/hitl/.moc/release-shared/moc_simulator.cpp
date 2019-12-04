/****************************************************************************
** Meta object code from reading C++ file 'simulator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/hitl/simulator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Simulator_t {
    QByteArrayData data[23];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Simulator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Simulator_t qt_meta_stringdata_Simulator = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Simulator"
QT_MOC_LITERAL(1, 10, 18), // "autopilotConnected"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "autopilotDisconnected"
QT_MOC_LITERAL(4, 52, 18), // "simulatorConnected"
QT_MOC_LITERAL(5, 71, 21), // "simulatorDisconnected"
QT_MOC_LITERAL(6, 93, 13), // "processOutput"
QT_MOC_LITERAL(7, 107, 3), // "str"
QT_MOC_LITERAL(8, 111, 16), // "deleteSimProcess"
QT_MOC_LITERAL(9, 128, 7), // "myStart"
QT_MOC_LITERAL(10, 136, 12), // "setupProcess"
QT_MOC_LITERAL(11, 149, 7), // "onStart"
QT_MOC_LITERAL(12, 157, 13), // "receiveUpdate"
QT_MOC_LITERAL(13, 171, 18), // "onAutopilotConnect"
QT_MOC_LITERAL(14, 190, 21), // "onAutopilotDisconnect"
QT_MOC_LITERAL(15, 212, 28), // "onSimulatorConnectionTimeout"
QT_MOC_LITERAL(16, 241, 15), // "telStatsUpdated"
QT_MOC_LITERAL(17, 257, 10), // "UAVObject*"
QT_MOC_LITERAL(18, 268, 3), // "obj"
QT_MOC_LITERAL(19, 272, 17), // "onDeleteSimulator"
QT_MOC_LITERAL(20, 290, 14), // "transmitUpdate"
QT_MOC_LITERAL(21, 305, 13), // "processUpdate"
QT_MOC_LITERAL(22, 319, 4) // "data"

    },
    "Simulator\0autopilotConnected\0\0"
    "autopilotDisconnected\0simulatorConnected\0"
    "simulatorDisconnected\0processOutput\0"
    "str\0deleteSimProcess\0myStart\0setupProcess\0"
    "onStart\0receiveUpdate\0onAutopilotConnect\0"
    "onAutopilotDisconnect\0"
    "onSimulatorConnectionTimeout\0"
    "telStatsUpdated\0UAVObject*\0obj\0"
    "onDeleteSimulator\0transmitUpdate\0"
    "processUpdate\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Simulator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,
       6,    1,  103,    2, 0x06 /* Public */,
       8,    0,  106,    2, 0x06 /* Public */,
       9,    0,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  108,    2, 0x0a /* Public */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,
      16,    1,  114,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,
      20,    0,  118,    2, 0x08 /* Private */,
      21,    1,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   22,

       0        // eod
};

void Simulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Simulator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->autopilotConnected(); break;
        case 1: _t->autopilotDisconnected(); break;
        case 2: _t->simulatorConnected(); break;
        case 3: _t->simulatorDisconnected(); break;
        case 4: _t->processOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->deleteSimProcess(); break;
        case 6: _t->myStart(); break;
        case 7: { bool _r = _t->setupProcess();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->onStart(); break;
        case 9: _t->receiveUpdate(); break;
        case 10: _t->onAutopilotConnect(); break;
        case 11: _t->onAutopilotDisconnect(); break;
        case 12: _t->onSimulatorConnectionTimeout(); break;
        case 13: _t->telStatsUpdated((*reinterpret_cast< UAVObject*(*)>(_a[1]))); break;
        case 14: _t->onDeleteSimulator(); break;
        case 15: _t->transmitUpdate(); break;
        case 16: _t->processUpdate((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UAVObject* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Simulator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::autopilotConnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Simulator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::autopilotDisconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Simulator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::simulatorConnected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Simulator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::simulatorDisconnected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Simulator::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::processOutput)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Simulator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::deleteSimProcess)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Simulator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::myStart)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Simulator::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Simulator.data,
    qt_meta_data_Simulator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Simulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Simulator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Simulator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Simulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Simulator::autopilotConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Simulator::autopilotDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Simulator::simulatorConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Simulator::simulatorDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Simulator::processOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Simulator::deleteSimProcess()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Simulator::myStart()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
