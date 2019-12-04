/****************************************************************************
** Meta object code from reading C++ file 'gcscontrolgadgetwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/gcscontrol/gcscontrolgadgetwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gcscontrolgadgetwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GCSControlGadgetWidget_t {
    QByteArrayData data[19];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GCSControlGadgetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GCSControlGadgetWidget_t qt_meta_stringdata_GCSControlGadgetWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "GCSControlGadgetWidget"
QT_MOC_LITERAL(1, 23, 13), // "sticksChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "leftX"
QT_MOC_LITERAL(4, 44, 5), // "leftY"
QT_MOC_LITERAL(5, 50, 6), // "rightX"
QT_MOC_LITERAL(6, 57, 6), // "rightY"
QT_MOC_LITERAL(7, 64, 12), // "updateSticks"
QT_MOC_LITERAL(8, 77, 16), // "leftStickClicked"
QT_MOC_LITERAL(9, 94, 1), // "X"
QT_MOC_LITERAL(10, 96, 1), // "Y"
QT_MOC_LITERAL(11, 98, 17), // "rightStickClicked"
QT_MOC_LITERAL(12, 116, 13), // "toggleControl"
QT_MOC_LITERAL(13, 130, 5), // "state"
QT_MOC_LITERAL(14, 136, 11), // "toggleArmed"
QT_MOC_LITERAL(15, 148, 16), // "selectFlightMode"
QT_MOC_LITERAL(16, 165, 10), // "mccChanged"
QT_MOC_LITERAL(17, 176, 10), // "UAVObject*"
QT_MOC_LITERAL(18, 187, 16) // "toggleUDPControl"

    },
    "GCSControlGadgetWidget\0sticksChanged\0"
    "\0leftX\0leftY\0rightX\0rightY\0updateSticks\0"
    "leftStickClicked\0X\0Y\0rightStickClicked\0"
    "toggleControl\0state\0toggleArmed\0"
    "selectFlightMode\0mccChanged\0UAVObject*\0"
    "toggleUDPControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GCSControlGadgetWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    4,   68,    2, 0x0a /* Public */,
       8,    2,   77,    2, 0x0a /* Public */,
      11,    2,   82,    2, 0x0a /* Public */,
      12,    1,   87,    2, 0x09 /* Protected */,
      14,    1,   90,    2, 0x09 /* Protected */,
      15,    1,   93,    2, 0x09 /* Protected */,
      16,    1,   96,    2, 0x09 /* Protected */,
      18,    1,   99,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    9,   10,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    9,   10,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void GCSControlGadgetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GCSControlGadgetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sticksChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->updateSticks((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 2: _t->leftStickClicked((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->rightStickClicked((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->toggleControl((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->toggleArmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->selectFlightMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->mccChanged((*reinterpret_cast< UAVObject*(*)>(_a[1]))); break;
        case 8: _t->toggleUDPControl((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
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
            using _t = void (GCSControlGadgetWidget::*)(double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GCSControlGadgetWidget::sticksChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GCSControlGadgetWidget::staticMetaObject = { {
    &QLabel::staticMetaObject,
    qt_meta_stringdata_GCSControlGadgetWidget.data,
    qt_meta_data_GCSControlGadgetWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GCSControlGadgetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GCSControlGadgetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GCSControlGadgetWidget.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int GCSControlGadgetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void GCSControlGadgetWidget::sticksChanged(double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
