/****************************************************************************
** Meta object code from reading C++ file 'accessmode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../ground/gcs/src/libs/opmapcontrol/src/core/accessmode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accessmode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_core__AccessMode_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_core__AccessMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_core__AccessMode_t qt_meta_stringdata_core__AccessMode = {
    {
QT_MOC_LITERAL(0, 0, 16), // "core::AccessMode"
QT_MOC_LITERAL(1, 17, 5), // "Types"
QT_MOC_LITERAL(2, 23, 10), // "ServerOnly"
QT_MOC_LITERAL(3, 34, 14), // "ServerAndCache"
QT_MOC_LITERAL(4, 49, 9) // "CacheOnly"

    },
    "core::AccessMode\0Types\0ServerOnly\0"
    "ServerAndCache\0CacheOnly"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_core__AccessMode[] = {

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
       1,    1, 0x0,    3,   19,

 // enum data: key, value
       2, uint(core::AccessMode::ServerOnly),
       3, uint(core::AccessMode::ServerAndCache),
       4, uint(core::AccessMode::CacheOnly),

       0        // eod
};

void core::AccessMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject core::AccessMode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_core__AccessMode.data,
    qt_meta_data_core__AccessMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *core::AccessMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *core::AccessMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_core__AccessMode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int core::AccessMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE