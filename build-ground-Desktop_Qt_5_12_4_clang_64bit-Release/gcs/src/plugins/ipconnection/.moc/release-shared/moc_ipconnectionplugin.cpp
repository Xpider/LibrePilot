/****************************************************************************
** Meta object code from reading C++ file 'ipconnectionplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/ipconnection/ipconnectionplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ipconnectionplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IPConnectionConnection_t {
    QByteArrayData data[10];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IPConnectionConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IPConnectionConnection_t qt_meta_stringdata_IPConnectionConnection = {
    {
QT_MOC_LITERAL(0, 0, 22), // "IPConnectionConnection"
QT_MOC_LITERAL(1, 23, 12), // "CreateSocket"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "HostName"
QT_MOC_LITERAL(4, 46, 4), // "Port"
QT_MOC_LITERAL(5, 51, 6), // "UseTCP"
QT_MOC_LITERAL(6, 58, 11), // "CloseSocket"
QT_MOC_LITERAL(7, 70, 16), // "QAbstractSocket*"
QT_MOC_LITERAL(8, 87, 6), // "socket"
QT_MOC_LITERAL(9, 94, 20) // "onEnumerationChanged"

    },
    "IPConnectionConnection\0CreateSocket\0"
    "\0HostName\0Port\0UseTCP\0CloseSocket\0"
    "QAbstractSocket*\0socket\0onEnumerationChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IPConnectionConnection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       6,    1,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   39,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void IPConnectionConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IPConnectionConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CreateSocket((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->CloseSocket((*reinterpret_cast< QAbstractSocket*(*)>(_a[1]))); break;
        case 2: _t->onEnumerationChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IPConnectionConnection::*)(QString , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IPConnectionConnection::CreateSocket)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IPConnectionConnection::*)(QAbstractSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IPConnectionConnection::CloseSocket)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IPConnectionConnection::staticMetaObject = { {
    &Core::IConnection::staticMetaObject,
    qt_meta_stringdata_IPConnectionConnection.data,
    qt_meta_data_IPConnectionConnection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IPConnectionConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IPConnectionConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IPConnectionConnection.stringdata0))
        return static_cast<void*>(this);
    return Core::IConnection::qt_metacast(_clname);
}

int IPConnectionConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Core::IConnection::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void IPConnectionConnection::CreateSocket(QString _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IPConnectionConnection::CloseSocket(QAbstractSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_IPConnectionPlugin_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IPConnectionPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IPConnectionPlugin_t qt_meta_stringdata_IPConnectionPlugin = {
    {
QT_MOC_LITERAL(0, 0, 18) // "IPConnectionPlugin"

    },
    "IPConnectionPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IPConnectionPlugin[] = {

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

void IPConnectionPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IPConnectionPlugin::staticMetaObject = { {
    &Core::IConfigurablePlugin::staticMetaObject,
    qt_meta_stringdata_IPConnectionPlugin.data,
    qt_meta_data_IPConnectionPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IPConnectionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IPConnectionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IPConnectionPlugin.stringdata0))
        return static_cast<void*>(this);
    return Core::IConfigurablePlugin::qt_metacast(_clname);
}

int IPConnectionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Core::IConfigurablePlugin::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x76,  'O',  'p',  'e',  'n',  'P',  'i', 
    'l',  'o',  't',  '.',  'I',  'P',  'C',  'o', 
    'n',  'n',  'e',  'c',  't',  'i',  'o',  'n', 
    // "className"
    0x03,  0x72,  'I',  'P',  'C',  'o',  'n',  'n', 
    'e',  'c',  't',  'i',  'o',  'n',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(IPConnectionPlugin, IPConnectionPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
