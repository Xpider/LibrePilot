/****************************************************************************
** Meta object code from reading C++ file 'gcscontrolgadget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/gcscontrol/gcscontrolgadget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gcscontrolgadget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GCSControlGadget_t {
    QByteArrayData data[20];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GCSControlGadget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GCSControlGadget_t qt_meta_stringdata_GCSControlGadget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GCSControlGadget"
QT_MOC_LITERAL(1, 17, 21), // "sticksChangedRemotely"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "leftX"
QT_MOC_LITERAL(4, 46, 5), // "leftY"
QT_MOC_LITERAL(5, 52, 6), // "rightX"
QT_MOC_LITERAL(6, 59, 6), // "rightY"
QT_MOC_LITERAL(7, 66, 27), // "manualControlCommandUpdated"
QT_MOC_LITERAL(8, 94, 10), // "UAVObject*"
QT_MOC_LITERAL(9, 105, 20), // "sticksChangedLocally"
QT_MOC_LITERAL(10, 126, 14), // "readUDPCommand"
QT_MOC_LITERAL(11, 141, 8), // "gamepads"
QT_MOC_LITERAL(12, 150, 5), // "count"
QT_MOC_LITERAL(13, 156, 11), // "buttonState"
QT_MOC_LITERAL(14, 168, 12), // "ButtonNumber"
QT_MOC_LITERAL(15, 181, 6), // "number"
QT_MOC_LITERAL(16, 188, 7), // "pressed"
QT_MOC_LITERAL(17, 196, 10), // "axesValues"
QT_MOC_LITERAL(18, 207, 10), // "QListInt16"
QT_MOC_LITERAL(19, 218, 6) // "values"

    },
    "GCSControlGadget\0sticksChangedRemotely\0"
    "\0leftX\0leftY\0rightX\0rightY\0"
    "manualControlCommandUpdated\0UAVObject*\0"
    "sticksChangedLocally\0readUDPCommand\0"
    "gamepads\0count\0buttonState\0ButtonNumber\0"
    "number\0pressed\0axesValues\0QListInt16\0"
    "values"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GCSControlGadget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   58,    2, 0x09 /* Protected */,
       9,    4,   61,    2, 0x09 /* Protected */,
      10,    0,   70,    2, 0x09 /* Protected */,
      11,    1,   71,    2, 0x09 /* Protected */,
      13,    2,   74,    2, 0x09 /* Protected */,
      17,    1,   79,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,   15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void GCSControlGadget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GCSControlGadget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sticksChangedRemotely((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->manualControlCommandUpdated((*reinterpret_cast< UAVObject*(*)>(_a[1]))); break;
        case 2: _t->sticksChangedLocally((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 3: _t->readUDPCommand(); break;
        case 4: _t->gamepads((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 5: _t->buttonState((*reinterpret_cast< ButtonNumber(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->axesValues((*reinterpret_cast< QListInt16(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            using _t = void (GCSControlGadget::*)(double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSControlGadget::sticksChangedRemotely)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GCSControlGadget::staticMetaObject = { {
    &Core::IUAVGadget::staticMetaObject,
    qt_meta_stringdata_GCSControlGadget.data,
    qt_meta_data_GCSControlGadget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GCSControlGadget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GCSControlGadget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GCSControlGadget.stringdata0))
        return static_cast<void*>(this);
    return Core::IUAVGadget::qt_metacast(_clname);
}

int GCSControlGadget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Core::IUAVGadget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void GCSControlGadget::sticksChangedRemotely(double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
