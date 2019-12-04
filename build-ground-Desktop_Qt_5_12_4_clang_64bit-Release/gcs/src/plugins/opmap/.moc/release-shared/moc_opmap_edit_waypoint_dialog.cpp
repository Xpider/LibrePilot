/****************************************************************************
** Meta object code from reading C++ file 'opmap_edit_waypoint_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/opmap/opmap_edit_waypoint_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opmap_edit_waypoint_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_opmap_edit_waypoint_dialog_t {
    QByteArrayData data[14];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_opmap_edit_waypoint_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_opmap_edit_waypoint_dialog_t qt_meta_stringdata_opmap_edit_waypoint_dialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "opmap_edit_waypoint_dialog"
QT_MOC_LITERAL(1, 27, 19), // "currentIndexChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "index"
QT_MOC_LITERAL(4, 54, 16), // "setupModeWidgets"
QT_MOC_LITERAL(5, 71, 21), // "setupConditionWidgets"
QT_MOC_LITERAL(6, 93, 24), // "pushButtonCancel_clicked"
QT_MOC_LITERAL(7, 118, 23), // "on_pushButtonOK_clicked"
QT_MOC_LITERAL(8, 142, 26), // "on_pushButtonApply_clicked"
QT_MOC_LITERAL(9, 169, 29), // "on_pushButtonPrevious_clicked"
QT_MOC_LITERAL(10, 199, 25), // "on_pushButtonNext_clicked"
QT_MOC_LITERAL(11, 225, 17), // "enableEditWidgets"
QT_MOC_LITERAL(12, 243, 17), // "currentRowChanged"
QT_MOC_LITERAL(13, 261, 11) // "QModelIndex"

    },
    "opmap_edit_waypoint_dialog\0"
    "currentIndexChanged\0\0index\0setupModeWidgets\0"
    "setupConditionWidgets\0pushButtonCancel_clicked\0"
    "on_pushButtonOK_clicked\0"
    "on_pushButtonApply_clicked\0"
    "on_pushButtonPrevious_clicked\0"
    "on_pushButtonNext_clicked\0enableEditWidgets\0"
    "currentRowChanged\0QModelIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_opmap_edit_waypoint_dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      12,    2,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,    2,    2,

       0        // eod
};

void opmap_edit_waypoint_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<opmap_edit_waypoint_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setupModeWidgets(); break;
        case 2: _t->setupConditionWidgets(); break;
        case 3: _t->pushButtonCancel_clicked(); break;
        case 4: _t->on_pushButtonOK_clicked(); break;
        case 5: _t->on_pushButtonApply_clicked(); break;
        case 6: _t->on_pushButtonPrevious_clicked(); break;
        case 7: _t->on_pushButtonNext_clicked(); break;
        case 8: _t->enableEditWidgets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->currentRowChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject opmap_edit_waypoint_dialog::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_opmap_edit_waypoint_dialog.data,
    qt_meta_data_opmap_edit_waypoint_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *opmap_edit_waypoint_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *opmap_edit_waypoint_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_opmap_edit_waypoint_dialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int opmap_edit_waypoint_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
