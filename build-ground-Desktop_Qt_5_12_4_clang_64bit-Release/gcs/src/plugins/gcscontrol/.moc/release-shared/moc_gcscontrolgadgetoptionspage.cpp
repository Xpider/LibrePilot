/****************************************************************************
** Meta object code from reading C++ file 'gcscontrolgadgetoptionspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/gcscontrol/gcscontrolgadgetoptionspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gcscontrolgadgetoptionspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GCSControlGadgetOptionsPage_t {
    QByteArrayData data[22];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GCSControlGadgetOptionsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GCSControlGadgetOptionsPage_t qt_meta_stringdata_GCSControlGadgetOptionsPage = {
    {
QT_MOC_LITERAL(0, 0, 27), // "GCSControlGadgetOptionsPage"
QT_MOC_LITERAL(1, 28, 8), // "gamepads"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "count"
QT_MOC_LITERAL(4, 44, 11), // "buttonState"
QT_MOC_LITERAL(5, 56, 12), // "ButtonNumber"
QT_MOC_LITERAL(6, 69, 6), // "number"
QT_MOC_LITERAL(7, 76, 7), // "pressed"
QT_MOC_LITERAL(8, 84, 10), // "axesValues"
QT_MOC_LITERAL(9, 95, 10), // "QListInt16"
QT_MOC_LITERAL(10, 106, 6), // "values"
QT_MOC_LITERAL(11, 113, 20), // "updateButtonFunction"
QT_MOC_LITERAL(12, 134, 18), // "updateButtonAction"
QT_MOC_LITERAL(13, 153, 9), // "controlID"
QT_MOC_LITERAL(14, 163, 20), // "updateButtonAction_0"
QT_MOC_LITERAL(15, 184, 20), // "updateButtonAction_1"
QT_MOC_LITERAL(16, 205, 20), // "updateButtonAction_2"
QT_MOC_LITERAL(17, 226, 20), // "updateButtonAction_3"
QT_MOC_LITERAL(18, 247, 20), // "updateButtonAction_4"
QT_MOC_LITERAL(19, 268, 20), // "updateButtonAction_5"
QT_MOC_LITERAL(20, 289, 20), // "updateButtonAction_6"
QT_MOC_LITERAL(21, 310, 20) // "updateButtonAction_7"

    },
    "GCSControlGadgetOptionsPage\0gamepads\0"
    "\0count\0buttonState\0ButtonNumber\0number\0"
    "pressed\0axesValues\0QListInt16\0values\0"
    "updateButtonFunction\0updateButtonAction\0"
    "controlID\0updateButtonAction_0\0"
    "updateButtonAction_1\0updateButtonAction_2\0"
    "updateButtonAction_3\0updateButtonAction_4\0"
    "updateButtonAction_5\0updateButtonAction_6\0"
    "updateButtonAction_7"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GCSControlGadgetOptionsPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x09 /* Protected */,
       4,    2,   82,    2, 0x09 /* Protected */,
       8,    1,   87,    2, 0x09 /* Protected */,
      11,    0,   90,    2, 0x09 /* Protected */,
      12,    1,   91,    2, 0x09 /* Protected */,
      14,    0,   94,    2, 0x09 /* Protected */,
      15,    0,   95,    2, 0x09 /* Protected */,
      16,    0,   96,    2, 0x09 /* Protected */,
      17,    0,   97,    2, 0x09 /* Protected */,
      18,    0,   98,    2, 0x09 /* Protected */,
      19,    0,   99,    2, 0x09 /* Protected */,
      20,    0,  100,    2, 0x09 /* Protected */,
      21,    0,  101,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GCSControlGadgetOptionsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GCSControlGadgetOptionsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gamepads((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 1: _t->buttonState((*reinterpret_cast< ButtonNumber(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->axesValues((*reinterpret_cast< QListInt16(*)>(_a[1]))); break;
        case 3: _t->updateButtonFunction(); break;
        case 4: _t->updateButtonAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateButtonAction_0(); break;
        case 6: _t->updateButtonAction_1(); break;
        case 7: _t->updateButtonAction_2(); break;
        case 8: _t->updateButtonAction_3(); break;
        case 9: _t->updateButtonAction_4(); break;
        case 10: _t->updateButtonAction_5(); break;
        case 11: _t->updateButtonAction_6(); break;
        case 12: _t->updateButtonAction_7(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GCSControlGadgetOptionsPage::staticMetaObject = { {
    &IOptionsPage::staticMetaObject,
    qt_meta_stringdata_GCSControlGadgetOptionsPage.data,
    qt_meta_data_GCSControlGadgetOptionsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GCSControlGadgetOptionsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GCSControlGadgetOptionsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GCSControlGadgetOptionsPage.stringdata0))
        return static_cast<void*>(this);
    return IOptionsPage::qt_metacast(_clname);
}

int GCSControlGadgetOptionsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IOptionsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
