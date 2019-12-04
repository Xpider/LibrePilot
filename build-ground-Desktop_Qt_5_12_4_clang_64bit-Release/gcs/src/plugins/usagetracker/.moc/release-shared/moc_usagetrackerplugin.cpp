/****************************************************************************
** Meta object code from reading C++ file 'usagetrackerplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/usagetracker/usagetrackerplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usagetrackerplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UsageTrackerPlugin_t {
    QByteArrayData data[10];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UsageTrackerPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UsageTrackerPlugin_t qt_meta_stringdata_UsageTrackerPlugin = {
    {
QT_MOC_LITERAL(0, 0, 18), // "UsageTrackerPlugin"
QT_MOC_LITERAL(1, 19, 18), // "onAutopilotConnect"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10), // "trackUsage"
QT_MOC_LITERAL(4, 50, 22), // "collectUsageParameters"
QT_MOC_LITERAL(5, 73, 22), // "QMap<QString,QString>&"
QT_MOC_LITERAL(6, 96, 10), // "parameters"
QT_MOC_LITERAL(7, 107, 10), // "onFinished"
QT_MOC_LITERAL(8, 118, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 133, 5) // "reply"

    },
    "UsageTrackerPlugin\0onAutopilotConnect\0"
    "\0trackUsage\0collectUsageParameters\0"
    "QMap<QString,QString>&\0parameters\0"
    "onFinished\0QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UsageTrackerPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       7,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void UsageTrackerPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UsageTrackerPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onAutopilotConnect(); break;
        case 1: _t->trackUsage(); break;
        case 2: _t->collectUsageParameters((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 3: _t->onFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UsageTrackerPlugin::staticMetaObject = { {
    &ExtensionSystem::IPlugin::staticMetaObject,
    qt_meta_stringdata_UsageTrackerPlugin.data,
    qt_meta_data_UsageTrackerPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UsageTrackerPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UsageTrackerPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UsageTrackerPlugin.stringdata0))
        return static_cast<void*>(this);
    return ExtensionSystem::IPlugin::qt_metacast(_clname);
}

int UsageTrackerPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::IPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x77,  'L',  'i',  'b',  'r',  'e',  'P', 
    'i',  'l',  'o',  't',  '.',  'U',  's',  'a', 
    'g',  'e',  'T',  'r',  'a',  'c',  'k',  'e', 
    'r', 
    // "className"
    0x03,  0x72,  'U',  's',  'a',  'g',  'e',  'T', 
    'r',  'a',  'c',  'k',  'e',  'r',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(UsageTrackerPlugin, UsageTrackerPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
