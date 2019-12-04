/****************************************************************************
** Meta object code from reading C++ file 'magicwaypointgadgetwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/magicwaypoint/magicwaypointgadgetwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magicwaypointgadgetwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MagicWaypointGadgetWidget_t {
    QByteArrayData data[12];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MagicWaypointGadgetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MagicWaypointGadgetWidget_t qt_meta_stringdata_MagicWaypointGadgetWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "MagicWaypointGadgetWidget"
QT_MOC_LITERAL(1, 26, 26), // "positionStateObjectChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 5), // "north"
QT_MOC_LITERAL(4, 60, 4), // "east"
QT_MOC_LITERAL(5, 65, 28), // "positionDesiredObjectChanged"
QT_MOC_LITERAL(6, 94, 12), // "scaleChanged"
QT_MOC_LITERAL(7, 107, 5), // "scale"
QT_MOC_LITERAL(8, 113, 20), // "positionStateChanged"
QT_MOC_LITERAL(9, 134, 10), // "UAVObject*"
QT_MOC_LITERAL(10, 145, 18), // "pathDesiredChanged"
QT_MOC_LITERAL(11, 164, 16) // "positionSelected"

    },
    "MagicWaypointGadgetWidget\0"
    "positionStateObjectChanged\0\0north\0"
    "east\0positionDesiredObjectChanged\0"
    "scaleChanged\0scale\0positionStateChanged\0"
    "UAVObject*\0pathDesiredChanged\0"
    "positionSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MagicWaypointGadgetWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   54,    2, 0x09 /* Protected */,
       8,    1,   57,    2, 0x09 /* Protected */,
      10,    1,   60,    2, 0x09 /* Protected */,
      11,    2,   63,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,

       0        // eod
};

void MagicWaypointGadgetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MagicWaypointGadgetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionStateObjectChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->positionDesiredObjectChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->scaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->positionStateChanged((*reinterpret_cast< UAVObject*(*)>(_a[1]))); break;
        case 4: _t->pathDesiredChanged((*reinterpret_cast< UAVObject*(*)>(_a[1]))); break;
        case 5: _t->positionSelected((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UAVObject* >(); break;
            }
            break;
        case 4:
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
            using _t = void (MagicWaypointGadgetWidget::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MagicWaypointGadgetWidget::positionStateObjectChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MagicWaypointGadgetWidget::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MagicWaypointGadgetWidget::positionDesiredObjectChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MagicWaypointGadgetWidget::staticMetaObject = { {
    &QLabel::staticMetaObject,
    qt_meta_stringdata_MagicWaypointGadgetWidget.data,
    qt_meta_data_MagicWaypointGadgetWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MagicWaypointGadgetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MagicWaypointGadgetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MagicWaypointGadgetWidget.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int MagicWaypointGadgetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MagicWaypointGadgetWidget::positionStateObjectChanged(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MagicWaypointGadgetWidget::positionDesiredObjectChanged(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
