/****************************************************************************
** Meta object code from reading C++ file 'mixerstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mixerstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mixerstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MixerStatusConstants_t {
    QByteArrayData data[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MixerStatusConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MixerStatusConstants_t qt_meta_stringdata_MixerStatusConstants = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MixerStatusConstants"
QT_MOC_LITERAL(1, 21, 4) // "Enum"

    },
    "MixerStatusConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MixerStatusConstants[] = {

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

void MixerStatusConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MixerStatusConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MixerStatusConstants.data,
    qt_meta_data_MixerStatusConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MixerStatusConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MixerStatusConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MixerStatusConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MixerStatusConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MixerStatus_t {
    QByteArrayData data[76];
    char stringdata0[799];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MixerStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MixerStatus_t qt_meta_stringdata_MixerStatus = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MixerStatus"
QT_MOC_LITERAL(1, 12, 13), // "mixer1Changed"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 13), // "Mixer1Changed"
QT_MOC_LITERAL(5, 47, 13), // "mixer2Changed"
QT_MOC_LITERAL(6, 61, 13), // "Mixer2Changed"
QT_MOC_LITERAL(7, 75, 13), // "mixer3Changed"
QT_MOC_LITERAL(8, 89, 13), // "Mixer3Changed"
QT_MOC_LITERAL(9, 103, 13), // "mixer4Changed"
QT_MOC_LITERAL(10, 117, 13), // "Mixer4Changed"
QT_MOC_LITERAL(11, 131, 13), // "mixer5Changed"
QT_MOC_LITERAL(12, 145, 13), // "Mixer5Changed"
QT_MOC_LITERAL(13, 159, 13), // "mixer6Changed"
QT_MOC_LITERAL(14, 173, 13), // "Mixer6Changed"
QT_MOC_LITERAL(15, 187, 13), // "mixer7Changed"
QT_MOC_LITERAL(16, 201, 13), // "Mixer7Changed"
QT_MOC_LITERAL(17, 215, 13), // "mixer8Changed"
QT_MOC_LITERAL(18, 229, 13), // "Mixer8Changed"
QT_MOC_LITERAL(19, 243, 13), // "mixer9Changed"
QT_MOC_LITERAL(20, 257, 13), // "Mixer9Changed"
QT_MOC_LITERAL(21, 271, 14), // "mixer10Changed"
QT_MOC_LITERAL(22, 286, 14), // "Mixer10Changed"
QT_MOC_LITERAL(23, 301, 14), // "mixer11Changed"
QT_MOC_LITERAL(24, 316, 14), // "Mixer11Changed"
QT_MOC_LITERAL(25, 331, 14), // "mixer12Changed"
QT_MOC_LITERAL(26, 346, 14), // "Mixer12Changed"
QT_MOC_LITERAL(27, 361, 9), // "setMixer1"
QT_MOC_LITERAL(28, 371, 9), // "setMixer2"
QT_MOC_LITERAL(29, 381, 9), // "setMixer3"
QT_MOC_LITERAL(30, 391, 9), // "setMixer4"
QT_MOC_LITERAL(31, 401, 9), // "setMixer5"
QT_MOC_LITERAL(32, 411, 9), // "setMixer6"
QT_MOC_LITERAL(33, 421, 9), // "setMixer7"
QT_MOC_LITERAL(34, 431, 9), // "setMixer8"
QT_MOC_LITERAL(35, 441, 9), // "setMixer9"
QT_MOC_LITERAL(36, 451, 10), // "setMixer10"
QT_MOC_LITERAL(37, 462, 10), // "setMixer11"
QT_MOC_LITERAL(38, 473, 10), // "setMixer12"
QT_MOC_LITERAL(39, 484, 17), // "emitNotifications"
QT_MOC_LITERAL(40, 502, 9), // "getMixer1"
QT_MOC_LITERAL(41, 512, 9), // "getMixer2"
QT_MOC_LITERAL(42, 522, 9), // "getMixer3"
QT_MOC_LITERAL(43, 532, 9), // "getMixer4"
QT_MOC_LITERAL(44, 542, 9), // "getMixer5"
QT_MOC_LITERAL(45, 552, 9), // "getMixer6"
QT_MOC_LITERAL(46, 562, 9), // "getMixer7"
QT_MOC_LITERAL(47, 572, 9), // "getMixer8"
QT_MOC_LITERAL(48, 582, 9), // "getMixer9"
QT_MOC_LITERAL(49, 592, 10), // "getMixer10"
QT_MOC_LITERAL(50, 603, 10), // "getMixer11"
QT_MOC_LITERAL(51, 614, 10), // "getMixer12"
QT_MOC_LITERAL(52, 625, 6), // "mixer1"
QT_MOC_LITERAL(53, 632, 6), // "mixer2"
QT_MOC_LITERAL(54, 639, 6), // "mixer3"
QT_MOC_LITERAL(55, 646, 6), // "mixer4"
QT_MOC_LITERAL(56, 653, 6), // "mixer5"
QT_MOC_LITERAL(57, 660, 6), // "mixer6"
QT_MOC_LITERAL(58, 667, 6), // "mixer7"
QT_MOC_LITERAL(59, 674, 6), // "mixer8"
QT_MOC_LITERAL(60, 681, 6), // "mixer9"
QT_MOC_LITERAL(61, 688, 7), // "mixer10"
QT_MOC_LITERAL(62, 696, 7), // "mixer11"
QT_MOC_LITERAL(63, 704, 7), // "mixer12"
QT_MOC_LITERAL(64, 712, 6), // "Mixer1"
QT_MOC_LITERAL(65, 719, 6), // "Mixer2"
QT_MOC_LITERAL(66, 726, 6), // "Mixer3"
QT_MOC_LITERAL(67, 733, 6), // "Mixer4"
QT_MOC_LITERAL(68, 740, 6), // "Mixer5"
QT_MOC_LITERAL(69, 747, 6), // "Mixer6"
QT_MOC_LITERAL(70, 754, 6), // "Mixer7"
QT_MOC_LITERAL(71, 761, 6), // "Mixer8"
QT_MOC_LITERAL(72, 768, 6), // "Mixer9"
QT_MOC_LITERAL(73, 775, 7), // "Mixer10"
QT_MOC_LITERAL(74, 783, 7), // "Mixer11"
QT_MOC_LITERAL(75, 791, 7) // "Mixer12"

    },
    "MixerStatus\0mixer1Changed\0\0value\0"
    "Mixer1Changed\0mixer2Changed\0Mixer2Changed\0"
    "mixer3Changed\0Mixer3Changed\0mixer4Changed\0"
    "Mixer4Changed\0mixer5Changed\0Mixer5Changed\0"
    "mixer6Changed\0Mixer6Changed\0mixer7Changed\0"
    "Mixer7Changed\0mixer8Changed\0Mixer8Changed\0"
    "mixer9Changed\0Mixer9Changed\0mixer10Changed\0"
    "Mixer10Changed\0mixer11Changed\0"
    "Mixer11Changed\0mixer12Changed\0"
    "Mixer12Changed\0setMixer1\0setMixer2\0"
    "setMixer3\0setMixer4\0setMixer5\0setMixer6\0"
    "setMixer7\0setMixer8\0setMixer9\0setMixer10\0"
    "setMixer11\0setMixer12\0emitNotifications\0"
    "getMixer1\0getMixer2\0getMixer3\0getMixer4\0"
    "getMixer5\0getMixer6\0getMixer7\0getMixer8\0"
    "getMixer9\0getMixer10\0getMixer11\0"
    "getMixer12\0mixer1\0mixer2\0mixer3\0mixer4\0"
    "mixer5\0mixer6\0mixer7\0mixer8\0mixer9\0"
    "mixer10\0mixer11\0mixer12\0Mixer1\0Mixer2\0"
    "Mixer3\0Mixer4\0Mixer5\0Mixer6\0Mixer7\0"
    "Mixer8\0Mixer9\0Mixer10\0Mixer11\0Mixer12"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MixerStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
      24,  380, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      24,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  259,    2, 0x06 /* Public */,
       4,    1,  262,    2, 0x06 /* Public */,
       5,    1,  265,    2, 0x06 /* Public */,
       6,    1,  268,    2, 0x06 /* Public */,
       7,    1,  271,    2, 0x06 /* Public */,
       8,    1,  274,    2, 0x06 /* Public */,
       9,    1,  277,    2, 0x06 /* Public */,
      10,    1,  280,    2, 0x06 /* Public */,
      11,    1,  283,    2, 0x06 /* Public */,
      12,    1,  286,    2, 0x06 /* Public */,
      13,    1,  289,    2, 0x06 /* Public */,
      14,    1,  292,    2, 0x06 /* Public */,
      15,    1,  295,    2, 0x06 /* Public */,
      16,    1,  298,    2, 0x06 /* Public */,
      17,    1,  301,    2, 0x06 /* Public */,
      18,    1,  304,    2, 0x06 /* Public */,
      19,    1,  307,    2, 0x06 /* Public */,
      20,    1,  310,    2, 0x06 /* Public */,
      21,    1,  313,    2, 0x06 /* Public */,
      22,    1,  316,    2, 0x06 /* Public */,
      23,    1,  319,    2, 0x06 /* Public */,
      24,    1,  322,    2, 0x06 /* Public */,
      25,    1,  325,    2, 0x06 /* Public */,
      26,    1,  328,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    1,  331,    2, 0x0a /* Public */,
      28,    1,  334,    2, 0x0a /* Public */,
      29,    1,  337,    2, 0x0a /* Public */,
      30,    1,  340,    2, 0x0a /* Public */,
      31,    1,  343,    2, 0x0a /* Public */,
      32,    1,  346,    2, 0x0a /* Public */,
      33,    1,  349,    2, 0x0a /* Public */,
      34,    1,  352,    2, 0x0a /* Public */,
      35,    1,  355,    2, 0x0a /* Public */,
      36,    1,  358,    2, 0x0a /* Public */,
      37,    1,  361,    2, 0x0a /* Public */,
      38,    1,  364,    2, 0x0a /* Public */,
      39,    0,  367,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      40,    0,  368,    2, 0x02 /* Public */,
      41,    0,  369,    2, 0x02 /* Public */,
      42,    0,  370,    2, 0x02 /* Public */,
      43,    0,  371,    2, 0x02 /* Public */,
      44,    0,  372,    2, 0x02 /* Public */,
      45,    0,  373,    2, 0x02 /* Public */,
      46,    0,  374,    2, 0x02 /* Public */,
      47,    0,  375,    2, 0x02 /* Public */,
      48,    0,  376,    2, 0x02 /* Public */,
      49,    0,  377,    2, 0x02 /* Public */,
      50,    0,  378,    2, 0x02 /* Public */,
      51,    0,  379,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      52, QMetaType::Float, 0x00495103,
      53, QMetaType::Float, 0x00495103,
      54, QMetaType::Float, 0x00495103,
      55, QMetaType::Float, 0x00495103,
      56, QMetaType::Float, 0x00495103,
      57, QMetaType::Float, 0x00495103,
      58, QMetaType::Float, 0x00495103,
      59, QMetaType::Float, 0x00495103,
      60, QMetaType::Float, 0x00495103,
      61, QMetaType::Float, 0x00495103,
      62, QMetaType::Float, 0x00495103,
      63, QMetaType::Float, 0x00495103,
      64, QMetaType::Float, 0x00495103,
      65, QMetaType::Float, 0x00495103,
      66, QMetaType::Float, 0x00495103,
      67, QMetaType::Float, 0x00495103,
      68, QMetaType::Float, 0x00495103,
      69, QMetaType::Float, 0x00495103,
      70, QMetaType::Float, 0x00495103,
      71, QMetaType::Float, 0x00495103,
      72, QMetaType::Float, 0x00495103,
      73, QMetaType::Float, 0x00495103,
      74, QMetaType::Float, 0x00495103,
      75, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       8,
      10,
      12,
      14,
      16,
      18,
      20,
      22,
       1,
       3,
       5,
       7,
       9,
      11,
      13,
      15,
      17,
      19,
      21,
      23,

       0        // eod
};

void MixerStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MixerStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mixer1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->Mixer1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->mixer2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->Mixer2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->mixer3Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->Mixer3Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->mixer4Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->Mixer4Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->mixer5Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->Mixer5Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->mixer6Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->Mixer6Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->mixer7Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->Mixer7Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->mixer8Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->Mixer8Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->mixer9Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->Mixer9Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->mixer10Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->Mixer10Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->mixer11Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->Mixer11Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->mixer12Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->Mixer12Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->setMixer1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->setMixer2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 26: _t->setMixer3((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->setMixer4((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 28: _t->setMixer5((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 29: _t->setMixer6((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 30: _t->setMixer7((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 31: _t->setMixer8((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 32: _t->setMixer9((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 33: _t->setMixer10((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 34: _t->setMixer11((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->setMixer12((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 36: _t->emitNotifications(); break;
        case 37: { float _r = _t->getMixer1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 38: { float _r = _t->getMixer2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 39: { float _r = _t->getMixer3();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 40: { float _r = _t->getMixer4();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 41: { float _r = _t->getMixer5();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 42: { float _r = _t->getMixer6();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 43: { float _r = _t->getMixer7();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 44: { float _r = _t->getMixer8();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 45: { float _r = _t->getMixer9();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 46: { float _r = _t->getMixer10();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 47: { float _r = _t->getMixer11();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 48: { float _r = _t->getMixer12();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MixerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::mixer1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::Mixer1Changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::mixer2Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::Mixer2Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::mixer3Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::Mixer3Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::mixer4Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::Mixer4Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::mixer5Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::Mixer5Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::mixer6Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::Mixer6Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::mixer7Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::Mixer7Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::mixer8Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::Mixer8Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::mixer9Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::Mixer9Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::mixer10Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::Mixer10Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::mixer11Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::Mixer11Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::mixer12Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MixerStatus::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerStatus::Mixer12Changed)) {
                *result = 23;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MixerStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->mixer1(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->mixer2(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->mixer3(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->mixer4(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->mixer5(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->mixer6(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->mixer7(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->mixer8(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->mixer9(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->mixer10(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->mixer11(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->mixer12(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->getMixer1(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getMixer2(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getMixer3(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getMixer4(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getMixer5(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getMixer6(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getMixer7(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getMixer8(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getMixer9(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getMixer10(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getMixer11(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getMixer12(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MixerStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMixer1(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setMixer2(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setMixer3(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setMixer4(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setMixer5(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setMixer6(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setMixer7(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setMixer8(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setMixer9(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setMixer10(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setMixer11(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setMixer12(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setMixer1(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setMixer2(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setMixer3(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setMixer4(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setMixer5(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setMixer6(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setMixer7(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setMixer8(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setMixer9(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setMixer10(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setMixer11(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setMixer12(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MixerStatus::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_MixerStatus.data,
    qt_meta_data_MixerStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MixerStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MixerStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MixerStatus.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int MixerStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 49;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 24;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MixerStatus::mixer1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MixerStatus::Mixer1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MixerStatus::mixer2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MixerStatus::Mixer2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MixerStatus::mixer3Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MixerStatus::Mixer3Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MixerStatus::mixer4Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MixerStatus::Mixer4Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MixerStatus::mixer5Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MixerStatus::Mixer5Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MixerStatus::mixer6Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MixerStatus::Mixer6Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MixerStatus::mixer7Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MixerStatus::Mixer7Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MixerStatus::mixer8Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MixerStatus::Mixer8Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MixerStatus::mixer9Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MixerStatus::Mixer9Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MixerStatus::mixer10Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MixerStatus::Mixer10Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MixerStatus::mixer11Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MixerStatus::Mixer11Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MixerStatus::mixer12Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MixerStatus::Mixer12Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
