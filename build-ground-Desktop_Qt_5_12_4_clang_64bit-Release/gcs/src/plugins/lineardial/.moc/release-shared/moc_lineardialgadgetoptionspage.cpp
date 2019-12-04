/****************************************************************************
** Meta object code from reading C++ file 'lineardialgadgetoptionspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/lineardial/lineardialgadgetoptionspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lineardialgadgetoptionspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LineardialGadgetOptionsPage_t {
    QByteArrayData data[7];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineardialGadgetOptionsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineardialGadgetOptionsPage_t qt_meta_stringdata_LineardialGadgetOptionsPage = {
    {
QT_MOC_LITERAL(0, 0, 27), // "LineardialGadgetOptionsPage"
QT_MOC_LITERAL(1, 28, 21), // "on_fontPicker_clicked"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 33), // "on_objectName_currentIndexCha..."
QT_MOC_LITERAL(4, 85, 3), // "val"
QT_MOC_LITERAL(5, 89, 24), // "on_rangeMin_valueChanged"
QT_MOC_LITERAL(6, 114, 24) // "on_rangeMax_valueChanged"

    },
    "LineardialGadgetOptionsPage\0"
    "on_fontPicker_clicked\0\0"
    "on_objectName_currentIndexChanged\0val\0"
    "on_rangeMin_valueChanged\0"
    "on_rangeMax_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineardialGadgetOptionsPage[] = {

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
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       6,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,

       0        // eod
};

void LineardialGadgetOptionsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LineardialGadgetOptionsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_fontPicker_clicked(); break;
        case 1: _t->on_objectName_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_rangeMin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_rangeMax_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LineardialGadgetOptionsPage::staticMetaObject = { {
    &IOptionsPage::staticMetaObject,
    qt_meta_stringdata_LineardialGadgetOptionsPage.data,
    qt_meta_data_LineardialGadgetOptionsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LineardialGadgetOptionsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineardialGadgetOptionsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LineardialGadgetOptionsPage.stringdata0))
        return static_cast<void*>(this);
    return IOptionsPage::qt_metacast(_clname);
}

int LineardialGadgetOptionsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IOptionsPage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
