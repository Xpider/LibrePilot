/****************************************************************************
** Meta object code from reading C++ file 'lineardialplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/lineardial/lineardialplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lineardialplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LineardialPlugin_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineardialPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineardialPlugin_t qt_meta_stringdata_LineardialPlugin = {
    {
QT_MOC_LITERAL(0, 0, 16) // "LineardialPlugin"

    },
    "LineardialPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineardialPlugin[] = {

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

void LineardialPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LineardialPlugin::staticMetaObject = { {
    &ExtensionSystem::IPlugin::staticMetaObject,
    qt_meta_stringdata_LineardialPlugin.data,
    qt_meta_data_LineardialPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LineardialPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineardialPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LineardialPlugin.stringdata0))
        return static_cast<void*>(this);
    return ExtensionSystem::IPlugin::qt_metacast(_clname);
}

int LineardialPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::IPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x74,  'O',  'p',  'e',  'n',  'P',  'i', 
    'l',  'o',  't',  '.',  'L',  'i',  'n',  'e', 
    'a',  'r',  'd',  'i',  'a',  'l', 
    // "className"
    0x03,  0x70,  'L',  'i',  'n',  'e',  'a',  'r', 
    'd',  'i',  'a',  'l',  'P',  'l',  'u',  'g', 
    'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(LineardialPlugin, LineardialPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
