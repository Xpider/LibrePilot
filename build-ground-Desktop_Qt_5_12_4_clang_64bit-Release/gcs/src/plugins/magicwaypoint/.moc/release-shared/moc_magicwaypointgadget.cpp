/****************************************************************************
** Meta object code from reading C++ file 'magicwaypointgadget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/magicwaypoint/magicwaypointgadget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magicwaypointgadget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MagicWaypointGadget_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MagicWaypointGadget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MagicWaypointGadget_t qt_meta_stringdata_MagicWaypointGadget = {
    {
QT_MOC_LITERAL(0, 0, 19) // "MagicWaypointGadget"

    },
    "MagicWaypointGadget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MagicWaypointGadget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MagicWaypointGadget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MagicWaypointGadget::staticMetaObject = { {
    &Core::IUAVGadget::staticMetaObject,
    qt_meta_stringdata_MagicWaypointGadget.data,
    qt_meta_data_MagicWaypointGadget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MagicWaypointGadget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MagicWaypointGadget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MagicWaypointGadget.stringdata0))
        return static_cast<void*>(this);
    return Core::IUAVGadget::qt_metacast(_clname);
}

int MagicWaypointGadget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Core::IUAVGadget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
