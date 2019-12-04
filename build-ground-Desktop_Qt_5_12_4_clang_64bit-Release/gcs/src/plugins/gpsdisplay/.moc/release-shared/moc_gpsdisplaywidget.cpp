/****************************************************************************
** Meta object code from reading C++ file 'gpsdisplaywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/gpsdisplay/gpsdisplaywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpsdisplaywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GpsDisplayWidget_t {
    QByteArrayData data[14];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GpsDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GpsDisplayWidget_t qt_meta_stringdata_GpsDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GpsDisplayWidget"
QT_MOC_LITERAL(1, 17, 6), // "setSVs"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "setPosition"
QT_MOC_LITERAL(4, 37, 11), // "setDateTime"
QT_MOC_LITERAL(5, 49, 15), // "setSpeedHeading"
QT_MOC_LITERAL(6, 65, 10), // "dumpPacket"
QT_MOC_LITERAL(7, 76, 6), // "packet"
QT_MOC_LITERAL(8, 83, 10), // "setFixType"
QT_MOC_LITERAL(9, 94, 7), // "fixtype"
QT_MOC_LITERAL(10, 102, 6), // "setDOP"
QT_MOC_LITERAL(11, 109, 4), // "hdop"
QT_MOC_LITERAL(12, 114, 4), // "vdop"
QT_MOC_LITERAL(13, 119, 4) // "pdop"

    },
    "GpsDisplayWidget\0setSVs\0\0setPosition\0"
    "setDateTime\0setSpeedHeading\0dumpPacket\0"
    "packet\0setFixType\0fixtype\0setDOP\0hdop\0"
    "vdop\0pdop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GpsDisplayWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       3,    3,   52,    2, 0x08 /* Private */,
       4,    2,   59,    2, 0x08 /* Private */,
       5,    2,   64,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
      10,    3,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   11,   12,   13,

       0        // eod
};

void GpsDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GpsDisplayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSVs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->setDateTime((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->setSpeedHeading((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->dumpPacket((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setFixType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setDOP((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GpsDisplayWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_GpsDisplayWidget.data,
    qt_meta_data_GpsDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GpsDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GpsDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GpsDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_GpsDisplayWidget"))
        return static_cast< Ui_GpsDisplayWidget*>(this);
    return QWidget::qt_metacast(_clname);
}

int GpsDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
