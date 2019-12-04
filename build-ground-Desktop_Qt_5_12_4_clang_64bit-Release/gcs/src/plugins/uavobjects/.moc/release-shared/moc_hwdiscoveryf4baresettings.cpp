/****************************************************************************
** Meta object code from reading C++ file 'hwdiscoveryf4baresettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hwdiscoveryf4baresettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hwdiscoveryf4baresettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HwDiscoveryF4BareSettingsConstants_t {
    QByteArrayData data[2];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwDiscoveryF4BareSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwDiscoveryF4BareSettingsConstants_t qt_meta_stringdata_HwDiscoveryF4BareSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 34), // "HwDiscoveryF4BareSettingsCons..."
QT_MOC_LITERAL(1, 35, 4) // "Enum"

    },
    "HwDiscoveryF4BareSettingsConstants\0"
    "Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwDiscoveryF4BareSettingsConstants[] = {

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
       1,    1, 0x0,    0,   19,

 // enum data: key, value

       0        // eod
};

void HwDiscoveryF4BareSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HwDiscoveryF4BareSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HwDiscoveryF4BareSettingsConstants.data,
    qt_meta_data_HwDiscoveryF4BareSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwDiscoveryF4BareSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwDiscoveryF4BareSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwDiscoveryF4BareSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HwDiscoveryF4BareSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HwDiscoveryF4BareSettings_t {
    QByteArrayData data[16];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HwDiscoveryF4BareSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HwDiscoveryF4BareSettings_t qt_meta_stringdata_HwDiscoveryF4BareSettings = {
    {
QT_MOC_LITERAL(0, 0, 25), // "HwDiscoveryF4BareSettings"
QT_MOC_LITERAL(1, 26, 20), // "boardRevisionChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "value"
QT_MOC_LITERAL(4, 54, 20), // "BoardRevisionChanged"
QT_MOC_LITERAL(5, 75, 16), // "boardTypeChanged"
QT_MOC_LITERAL(6, 92, 16), // "BoardTypeChanged"
QT_MOC_LITERAL(7, 109, 16), // "setBoardRevision"
QT_MOC_LITERAL(8, 126, 12), // "setBoardType"
QT_MOC_LITERAL(9, 139, 17), // "emitNotifications"
QT_MOC_LITERAL(10, 157, 16), // "getBoardRevision"
QT_MOC_LITERAL(11, 174, 12), // "getBoardType"
QT_MOC_LITERAL(12, 187, 13), // "boardRevision"
QT_MOC_LITERAL(13, 201, 9), // "boardType"
QT_MOC_LITERAL(14, 211, 13), // "BoardRevision"
QT_MOC_LITERAL(15, 225, 9) // "BoardType"

    },
    "HwDiscoveryF4BareSettings\0"
    "boardRevisionChanged\0\0value\0"
    "BoardRevisionChanged\0boardTypeChanged\0"
    "BoardTypeChanged\0setBoardRevision\0"
    "setBoardType\0emitNotifications\0"
    "getBoardRevision\0getBoardType\0"
    "boardRevision\0boardType\0BoardRevision\0"
    "BoardType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HwDiscoveryF4BareSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    1,   70,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   76,    2, 0x0a /* Public */,
       8,    1,   79,    2, 0x0a /* Public */,
       8,    1,   82,    2, 0x0a /* Public */,
       9,    0,   85,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   86,    2, 0x02 /* Public */,
      11,    0,   87,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UShort,
    QMetaType::UChar,

 // properties: name, type, flags
      12, QMetaType::UShort, 0x00495103,
      13, QMetaType::UShort, 0x00495103,
      14, QMetaType::UShort, 0x00495103,
      15, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       1,
       3,

       0        // eod
};

void HwDiscoveryF4BareSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HwDiscoveryF4BareSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->boardRevisionChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 1: _t->BoardRevisionChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 2: _t->boardTypeChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 3: _t->BoardTypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->setBoardRevision((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 5: _t->setBoardType((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 6: _t->setBoardType((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 7: _t->emitNotifications(); break;
        case 8: { quint16 _r = _t->getBoardRevision();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 9: { quint8 _r = _t->getBoardType();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HwDiscoveryF4BareSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwDiscoveryF4BareSettings::boardRevisionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HwDiscoveryF4BareSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwDiscoveryF4BareSettings::BoardRevisionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HwDiscoveryF4BareSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwDiscoveryF4BareSettings::boardTypeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HwDiscoveryF4BareSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HwDiscoveryF4BareSettings::BoardTypeChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HwDiscoveryF4BareSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->boardRevision(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->boardType(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->getBoardRevision(); break;
        case 3: *reinterpret_cast< quint8*>(_v) = _t->getBoardType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HwDiscoveryF4BareSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBoardRevision(*reinterpret_cast< quint16*>(_v)); break;
        case 1: _t->setBoardType(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setBoardRevision(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setBoardType(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject HwDiscoveryF4BareSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_HwDiscoveryF4BareSettings.data,
    qt_meta_data_HwDiscoveryF4BareSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HwDiscoveryF4BareSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HwDiscoveryF4BareSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HwDiscoveryF4BareSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int HwDiscoveryF4BareSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void HwDiscoveryF4BareSettings::boardRevisionChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HwDiscoveryF4BareSettings::BoardRevisionChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HwDiscoveryF4BareSettings::boardTypeChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HwDiscoveryF4BareSettings::BoardTypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
